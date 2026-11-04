# #0053 — Efeitos visuais das skills iguais ao original

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-efeitos-skill` (nasce de `main`) |
| Estado | fazendo |
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
- [ ] Cada divergência tem a causa registrada em Decisões e REA (dado, simulação, material/mistura, posição, tempo ou disparo), com a evidência no pseudocódigo ou nos dados. Ela é corrigida no `Render/Fx/` ou registrada como pedido: `App.cs` → coordenadora, pacotes → net, reexportação para o `shared` → coordenadora com o comando exato.
- [ ] As linhas do `Docs/efeitos.md` que a comparação desmentiu voltam para `pendente` ou `divergente`, e passam a `aprovado` só com a captura comparada.
- [ ] Testes EditMode para cada regra corrigida. `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas antes e depois em `Docs/evidencias/efeitos-skill/`, tiradas no aCis local (quadros em sequência para os efeitos que se movem).

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
