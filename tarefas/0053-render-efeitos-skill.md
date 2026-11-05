# #0053 — Efeitos visuais das skills iguais ao original

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-efeitos-skill` (nasce de `main`) |
| Estado | no main |
| Spec | `analises\l2-interlude\client_spec\09_efeitos_skill.md`; `Docs/efeitos.md` (matriz de validação dos efeitos); `Render/Fx/` |
| Sessão | render: efeitos de skill (#0053) |
| Criada | 2026-11-04 |

## Objetivo

O usuário usou skills no aCis local. A animação do personagem está certa, mas o efeito visual da skill está errado. Isso inclui as partículas, os feixes, os projéteis, as malhas e os rastros de cast, de disparo, de canalização, de explosão e do alvo.

O `Docs/efeitos.md` marca quase tudo como aprovado contra os dados (`FxParityTests`). Mesmo assim, o resultado no jogo diverge. Esta tarefa acha onde a conta ou o desenho se separa do original e corrige.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Uma amostra de skills que cubra cada tipo de efeito do 09 tem a captura do porte comparada com o original. A amostra inclui pelo menos:
  - cura;
  - buff em si e em outro;
  - magia com projétil (Wind Strike ou equivalente);
  - magia de área;
  - canalização ou feixe;
  - skill física de arma com rastro (SwordTrail);
  - debuff no alvo;
  - um efeito legado sem `skill_visual_effect`;
  - o soulshot e o spiritshot.

  Para cada skill: as classes de efeito disparadas, a fase, a posição/osso, a escala, a duração, a cor/textura/mistura e o tamanho. A tabela fica em `Docs/efeitos_ao_vivo.md`.

  **Justificativa (parcial):** a tabela está em `Docs/efeitos_ao_vivo.md`, com 15 skills capturadas ao vivo no aCis: cura, buffs em si, projéteis, área, debuffs, SwordTrail, legados, soulshot e spiritshot, além do feixe do heal. A comparação com o original só foi possível no lobby, com a captura que já existia, e ela confirma a correção principal. Para as skills não temos o cliente original: pedimos as capturas no pedido 0048. Ficaram de fora o buff em outro (sem segundo personagem online) e uma skill de canalização (as invocações pedem cristais).
- [x] Cada divergência tem a causa registrada em Decisões e REA (dado, simulação, material/mistura, posição, tempo ou disparo), com a evidência no pseudocódigo ou nos dados. Ela é corrigida no `Render/Fx/` ou registrada como pedido: `App.cs` → coordenadora, pacotes → net, reexportação para o `shared` → coordenadora com o comando exato.
- [x] As linhas do `Docs/efeitos.md` que a comparação desmentiu voltam para `pendente` ou `divergente`, e passam a `aprovado` só com a captura comparada. (S18 e S21 → `divergente → corrigido`; L8 nova; nenhuma passou a `aprovado`.)
- [x] Testes EditMode para cada regra corrigida. `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`. (596/596; `FxGammaTests` 4 e `FxShotTests` 4 novos.)
- [x] Capturas antes e depois em `Docs/evidencias/efeitos-skill/`, tiradas no aCis local (quadros em sequência para os efeitos que se movem).

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — branch `feat/render-efeitos-skill` a partir de `main`; conta `l2webtest4` (auto-criada pelo loginserver, registrada em `Docs/contas_teste.md`), personagens `FxMago` e `FxGuerreiro`.
- 2026-11-04 — ao vivo no aCis: capturas de 15 skills e dos shots, com registro das classes de cada fase (`FXLIVE`/`FXHOOK`). Durante a sessão, o Game view do Editor desta vaga foi usado e o Play mode e o Editor foram fechados por fora. Depois de reaberto, segui só por script.
- 2026-11-04 — causas encontradas e corrigidas: mistura em gama (`FxGammaPass`), TFactor das malhas (c^4,4), efeito dos shots (soulshot.int por mão); testes `FxGammaTests` e `FxShotTests` (596/596); `Docs/efeitos_ao_vivo.md`, `Docs/efeitos.md` (S18, S21, L8) e evidências; pedidos 0048 (capturas do original) e 0049 (spec 09).

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->
1. **Mistura em espaço linear (material/mistura). Observado.** O D3DDrv do cliente inicializa o device com `SetRenderState(D3DRS_SRGBWRITEENABLE 0xC2, 0)` e `SetSamplerState(0, D3DSAMP_SRGBTEXTURE 0xB, 0)` (`FUN_100427cb`, `analises\l2-interlude\re\decomp_all\d3ddrv\00001.c:1530` e `:1560`). Os blends One/One, DstColor/SrcColor etc. operam em bytes em gama. O porte é linear (`m_ActiveColorSpace: 1`) e misturava em linear. Efeito: aditivos ~30% mais fracos sobre fundo claro, AlphaBlend mais leitoso e opaco, Modulated 2× escurecendo (cinza 127 → 0,21), e os raios de luz do lobby (Beam Translucent) quase invisíveis. A captura original do lobby (`Docs/evidencias/original/1920_03_lobby.png`) mostra os raios. **Correção:** `Render/Fx/FxGammaPass.cs`, injetado por `beginCameraRendering` sem mexer no renderer. Ele copia a cor da câmera para um alvo UNORM em gama, desenha o `L2Web/Particle` (LightMode `L2WebFxGamma`, que o URP não desenha) com o depth da cena e compõe de volta; os pixels que os efeitos não tocaram ficam com a cor original, o que preserva o HDR. No shader, textura re-codificada para gama, cor de vértice e TFactor crus, e neblina em gama. Diagnóstico `-l2fxlinear` / `FxGammaPass.LinearDebug` para as capturas antes/depois.
2. **TFactor das malhas elevado a 4,4 (material). Observado** (semântica do Unity). `FxRenderer.DrawMesh` aplicava `pow(c, 2,2)` e passava a cor por `MaterialPropertyBlock.SetColor`, que no projeto linear converte de gama para linear outra vez. Resultado: o cinza 125 do `wh_heal_ca` saía 0,04 em vez de 0,2, e os círculos mágicos das malhas quase sumiam (`evidencias/efeitos-skill/05`). **Correção:** `MeshTint` (bytes/255) por `SetVector`. Para materiais próprios do glTF (UseMeshBlendMode), `SetColor` faz uma única conversão.
3. **Soulshot e spiritshot sem efeito (disparo/dado). Observado.** `SpawnNTransientEffect` (0x104efb30, casos 0x7f7, 0x7ff/0x80d, 0x866–0x874; `re\decomp_all\engine\00023.c` ~43863 e ~44000–44330). Por mão, o cliente lê `soulshot.int[CurWeaponType].LH/RH`, com `CurWeaponType` = pawn+0x71d = `GetAnimType` (`00011.c:30459`) e as seções na ordem de `SoulShotDataLoad` (`00021.c` ~6500): 1 + malha > 12 → `[Spirit]OnSticks` com StartVelocityRange.X = comprimento; 0 ou arma curta → `OnBooks`; −1 → nada. A tabela de `legacy_fx_table.py` tem para esses casos uma 1ª variante vazia, e o porte avaliava `soulshot.int[...]` como `BowLH/BowRH` (sempre 0). Com o cajado só na mão direita, nada nascia; com malha nas duas mãos, nasciam dois `OnBooks` errados. **Correção:** `LegacyFx.ShotGrade/ShotChoice/ShotEffect`, a partir do pseudocódigo. **Inferido:** `CurWeaponType` = `Entity.Widx` (mesmo índice do `.int` usado nas animações); comprimento da malha = `Actor.AttachedLength` (o array +0x150 da malha não é exportado).
4. **Círculo do heal fraco com cast rápido: não é divergência. Observado.** Com os buffs do servidor (hit 714 ms, ShotTime 0,56), `AdjustparticleLife(0,76)` desloca as vidas de 4/3/3 para 0,8/−0,2/−0,2. Os dois círculos com vida negativa não nascem (`SpawnParticle` sai com `LifetimeRange.Max <= 0`) e o primeiro começa no fade-out. É o mesmo cálculo de 0x1060ac50. Esses atores ficam vivos sem partículas, porque `pps != 0` impede o AllParticlesDead. Isso também acontece no original pelo pseudocódigo e não é visível; fica registrado.
5. **A validar:** os halos AlphaBlend das tochas do lobby (`FX_E_T.LightGlowSet.fx_e_t_smoke001`) ficam mais fracos que no original, que tem outro enquadramento. As 50 malhas com UseMeshBlendMode true (Ice Bolt, pedras, moedas) seguem com o material do glTF, iluminado e em linear. O retângulo de borda dura do `firebomb02` no cast do Flame Strike está na própria textura `fx_m_t0039`. Tudo isso depende das capturas do pedido 0048.
6. **Sem pedido de `App.cs`, pacotes ou reexportação:** o disparo pelo 0x48/0x76 está certo (classes por fase conferem com o mapa e a tabela). A ligação do `WeaponType` ficou no `GameScene.WireFx`, que é da área render.

## Entrega

- **Commits:** em `feat/render-efeitos-skill`: `4c669b3` (mistura em gama + TFactor das malhas), `04405b1` (efeito dos shots), `1f65211` (documentação, conta de teste e evidências).
- **Testes:** `sh Docs/tools/run_tests.sh`: 596/596 (o `main` tinha 588; novos: `FxGammaTests` (4) e `FxShotTests` (4); `FxSkillMapTests` e `FxParityTests` passam sem mudança). Ao vivo no aCis: antes/depois com `-l2fxlinear` na mesma sessão; lobby comparado com `Docs/evidencias/original/1920_03_lobby.png`.
- **Arquivos:** `Render/Fx/FxGammaPass.cs` (novo), `Render/Resources/L2WebFxGamma.shader` (novo, em Resources para entrar no build), `Render/Resources/L2WebParticle.shader` (LightMode `L2WebFxGamma`, tudo em gama), `Render/Fx/FxRenderer.cs` (`MeshTint`, `DrawnFrame`), `Render/Fx/LegacyFx.cs` (shots), `Render/Fx/SkillFx.cs` (`PlaySkillSoundData` público), `Render/GameScene.cs` (`WeaponType`), testes, `Docs/efeitos.md`, `Docs/efeitos_ao_vivo.md`, `Docs/contas_teste.md`, `Docs/evidencias/efeitos-skill/` (20 imagens).
- **Atenção no merge:** o passe novo muda também o lobby e os emissores de mapa, que usam o mesmo shader. Os raios de luz do salão voltam a aparecer, como no original. Nenhum arquivo compartilhado foi tocado (sem `ProjectSettings`, renderer asset ou `App.cs`).
- **Falta / fora do escopo:** comparação com o original de cada skill (pedido 0048); buff em outro e uma canalização ao vivo; halos AlphaBlend das tochas do lobby e as 50 malhas com UseMeshBlendMode (a validar com as capturas); atores de cast com vida negativa que não morrem (vazamento invisível, igual ao pseudocódigo); correção da spec 09 e do gerador da tabela legada (pedido 0049).

## Pedidos

- `pedidos/0048-render-capturas-efeitos-original.md`: capturas do cliente original da amostra (coordenadora/usuário).
- `pedidos/0049-render-spec09-gama-shots.md`: correção da spec 09 (§4.5.1 gama, §3 shots) e do gerador da tabela legada (coordenadora → tarefa de REA).
