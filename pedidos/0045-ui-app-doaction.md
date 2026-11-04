# Pedido 0045 — `App.cs`: DoAction pelo `L2Commands.PlanAction` (ações da ActionWnd e da barra) (#0051)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0051) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

1. **Despacho das ações** (`Assets\L2Web\Scripts\App.cs`): aplicar o diff abaixo, que foi testado ao vivo no aCis local como patch sem commit no `feat/ui-status-acoes-cla`. Ele também está commitado, só para teste, no branch `test/0051-app-doaction` (`1cd199f`), que não deve entrar no `main`. Ele:
   - separa o `RunSlashCommand` em `SlashCtx()` (o `CommandCtx` de sempre) e `RunSteps(steps, ctx)` (o `foreach` de sempre, sem o `text` no log do default);
   - troca o corpo do `DoAction(n)` por `L2Commands.PlanAction(n, SlashCtx(), Ctrl, Shift)` + `RunSteps`;
   - liga `UiDeps.ActionUse = DoAction`. Hoje é `id => gc?.Send(GamePackets.ActionUse(id))`, que manda tudo como RequestActionUse.

   Com isso, a ActionWnd, a barra de atalhos, a PetWnd e os comandos de barra (`Act(n)`) passam pelo mesmo DoAction do original (FUN_10170860).

```diff
diff --git a/Assets/L2Web/Scripts/App.cs b/Assets/L2Web/Scripts/App.cs
index c200b5b..9adbc87 100644
--- a/Assets/L2Web/Scripts/App.cs
+++ b/Assets/L2Web/Scripts/App.cs
@@ -129,7 +129,7 @@ namespace L2Web
             ui = new GameUi(gameRoot, world, new UiDeps
             {
                 Send = b => gc?.Send(b),
-                ActionUse = id => gc?.Send(GamePackets.ActionUse(id)),
+                ActionUse = DoAction,
                 Chat = (cls, text, color) => Chat(cls, text, color),
                 CancelTarget = () => gc?.Send(GamePackets.CancelTarget()),
                 Restart = () => gc?.Send(GamePackets.RequestRestart()),
@@ -2222,10 +2222,19 @@ namespace L2Web
         /// Comando de barra: L2Commands.PlanLine (commandname-e.dat + switch FUN_1013a320) e a execucao de cada passo.
         /// </summary>
         void RunSlashCommand(string text)
+        {
+            var ctx = SlashCtx();
+            var steps = L2Commands.PlanLine(text, ctx, out var id);
+            Debug.Log($"[cmd] {text} -> id {id}: {string.Join(" ", steps)}");
+            RunSteps(steps, ctx);
+        }
+
+        /// <summary>Estado que o switch dos comandos e o DoAction consultam (alvo, proprio pawn, party, buscas).</summary>
+        CommandCtx SlashCtx()
         {
             var self = world.Self;
             var t = world.Get(targetId);
-            var ctx = new CommandCtx
+            return new CommandCtx
             {
                 TargetId = t != null ? targetId : 0,
                 TargetName = t?.Name,
@@ -2240,8 +2249,12 @@ namespace L2Web
                 SkillByName = n => ui.SkillByName(n),
                 HasObscene = s => L2Chat.FilterObscene(s, GameData.ObsceneWords, "\u0001") != s,
             };
-            var steps = L2Commands.PlanLine(text, ctx, out var id);
-            Debug.Log($"[cmd] {text} -> id {id}: {string.Join(" ", steps)}");
+        }
+
+        /// <summary>Executa os passos de um comando ou de uma acao (pacote, DoAction, sysmsg, evento, rotina local).</summary>
+        void RunSteps(List<CommandStep> steps, CommandCtx ctx)
+        {
+            var self = world.Self;
             foreach (var st in steps)
             {
                 switch (st.Kind)
@@ -2288,7 +2301,7 @@ namespace L2Web
                         break;
                     }
                     default:
-                        if (missingSlash.Add(st.Token)) Debug.Log($"[cmd] passo sem implementacao no Unity: {st.Token} ({text})");
+                        if (missingSlash.Add(st.Token)) Debug.Log($"[cmd] passo sem implementacao no Unity: {st.Token}");
                         break;
                 }
             }
@@ -2308,19 +2321,18 @@ namespace L2Web
             gc.Send(GamePackets.Action(t.ObjectId, Mathf.RoundToInt(s.X), Mathf.RoundToInt(s.Y), Mathf.RoundToInt(s.Z), Keyboard.current?.shiftKey.isPressed ?? false));
         }
 
-        /// <summary>FUN_10170860 (DoAction) nos ids que os comandos usam: 0x28 avalia o alvo, 0x37 e o replay, o resto e RequestActionUse.</summary>
+        /// <summary>
+        /// DoAction (FUN_10170860): ActionWnd, barra de atalhos, PetWnd e os comandos de barra. L2Commands.PlanAction monta os
+        /// passos (ataque, troca, grupo, sociais, duelo, lojas; o resto e RequestActionUse) com o Ctrl e o Shift do momento.
+        /// </summary>
         void DoAction(int n)
         {
-            if (n == 0x37) return;
-            if (n == 0x28)
-            {
-                var t = world.Get(targetId);
-                if (t == null) chatFlood.SystemMessage(0xf2);
-                else if (t.Kind == "player") gc.Send(new PacketWriter().C(0xb9).D(targetId).Bytes()); // VoteSociality
-                else chatFlood.SystemMessage(0x90);
-                return;
-            }
-            gc.Send(GamePackets.ActionUse(n));
+            if (gc == null) return;
+            var kb = Keyboard.current;
+            var ctx = SlashCtx();
+            var steps = L2Commands.PlanAction(n, ctx, kb?.ctrlKey.isPressed ?? false, kb?.shiftKey.isPressed ?? false);
+            Debug.Log($"[act] {n}: {string.Join(" ", steps)}");
+            RunSteps(steps, ctx);
         }
 
         /// <summary>Anda ate (x, y, z) como um clique no chao (diagnostico).</summary>
```

2. **Opcional, para fechar as ações 57 e 55:**
   - um executor para o passo `dlg` (Find Store, ação 57: `DialogBox` com edição e a sysmsg 1722; o OK chama o `SetMatchedStore(texto)` do `/findprivatestore`, passo `local:findprivatestore`, que também não tem executor);
   - um executor para o `local:replay` (Start/End Recording Replay, ação 55; o porte não grava replay, então pode ficar sem efeito).

   Hoje os dois caem no `default` ("passo sem implementacao") e não fazem nada. É o mesmo comportamento de antes desta tarefa.

3. **Texto em português no JoinParty 0x3a** (`App.cs:1850`): `Chat("sys", … "O convite de party foi aceito." : "O convite de party foi recusado.")`. A sessão de testes viu esse texto no chat ao convidar o Figurante. No original, o `OnReceiveJoinParty` (spec 96, linha 0x3a) só emite um `EV_SystemMessage`, e o aCis já manda as sysmsg 105/107 (convite e entrada) e a de recusa. Proposta: tirar o `Chat` ou trocá-lo pela systemmsg do `OnReceiveJoinParty` (o id está a validar no `UGameEngine::OnReceiveJoinParty` do Engine.dll). Hoje a frase sai junto das mensagens em inglês do servidor.

## Por quê

O usuário relatou que as ações da ActionWnd não funcionam (dança, convite de grupo…). O original resolve no cliente quase todas as ações de `actionname-e` (spec: `analises\l2-interlude\re\decomp_all\nwindow\00012.c:29025`):
- ataque (Action/AttackRequest);
- troca;
- alvo, pegar e assistir;
- convite, saída, expulsão e líder do grupo;
- sala de grupo;
- as 12 sociais (RequestSocialAction 0x1b com o tipo do arquivo);
- lojas (0x73/0x90);
- recomendar, canal de comando, duelo e desistência.

O `RequestActionUse` do aCis só trata 0, 1, 10, 28, 37, 38, 51, 61 e as de pet, então as outras ficam mudas. O `PlanAction` e os testes (`StatusAcoesClaTests`, 32 casos) já estão no branch. Sem este pedido, o branch compila e passa nos testes, mas a ActionWnd continua mandando RequestActionUse: **as ações seguem sem funcionar**.

Conferido ao vivo com o patch (aCis local, conta `l2webtest2`):
- as 12 sociais voltam como SocialAction do personagem com o id certo;
- Sit/Stand e Walk/Run voltam como ChangeWaitType e ChangeMoveType;
- Store Sell/Buy voltam com a sm 1296;
- Manufacture volta com a resposta do servidor;
- Party Matching volta como ListPartyWaiting 0x96;
- a barra de atalhos com a Dance manda o 0x1b(12).

Com o Figurante, pela sessão de testes (`testes\0051-1`):
- convite, expulsão, troca de líder e saída do grupo;
- troca (a janela abre);
- recomendar;
- duelo (sm 1940 em zona de paz);
- sem alvo, as sysmsg 185, 187 e 1400.

Detalhes em `Docs/acoes.md` (branch).

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
