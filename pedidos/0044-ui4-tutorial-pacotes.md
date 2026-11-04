# Pedido 0044 — UiPackets: RequestTutorialLinkHtml (0x7b) e RequestTutorialPassCmdToServer (0x7c)

| Campo | Valor |
|---|---|
| De | ui4 (tarefa #0055) |
| Para | net |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Em `Assets\L2Web\Scripts\Net\UiPackets.cs`, ao lado do `BypassToServer`/`RequestLinkHtml` (linhas 387-388):

```csharp
        /// <summary>RequestTutorialLinkHtml 0x7b "S": o "link x" do HTML do tutorial (viewType=Tutorial).</summary>
        public static byte[] RequestTutorialLinkHtml(string link) => new PacketWriter().C(0x7b).S(link ?? "").Bytes();

        /// <summary>RequestTutorialPassCmdToServer 0x7c "S": o "bypass x" do HTML do tutorial.</summary>
        public static byte[] RequestTutorialPassCmdToServer(string cmd) => new PacketWriter().C(0x7c).S(cmd ?? "").Bytes();
```

Formato no aCis: `L2GamePacketHandler.java:426-431` (0x7b `RequestTutorialLinkHtml`, 0x7c `RequestTutorialPassCmdToServer`, os dois com `readS()`), que entrega à quest "Tutorial". No cliente, o viewer com `viewType="Tutorial"` (`+0x214 = 1`, `nwindow.c:191921`) manda o bypass e o link pela variante do tutorial (`Docs/html_suporte.md` §6 do branch `feat/ui-html`).

Enquanto isso, os dois construtores estão em `UI/TutorialViewerView.cs` (commit do branch `feat/ui-html`), como a #0047 fez com a petição. Quando entrarem no `UiPackets`, a UI passa a chamar de lá e apaga os locais.

## Por quê

Sem isso, os links e botões da janela do tutorial dos novatos iriam como bypass normal, que o aCis não entrega à quest "Tutorial". Com os construtores locais nada quebra; o pedido é só para os pacotes ficarem na área da net.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
