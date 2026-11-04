# #0049 — Cipós balançando no cenário do login

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-cipos-login` (nasce de `main`) |
| Estado | fazendo |
| Spec | `Docs/validacao.md` G8 ("Moinho e vinhas"); `analises\l2-interlude\client_spec\` (cena do login); estudo `lobby_sway_re.md` da volta 23 (citado na `validacao.md`) |
| Sessão | render: cipós do login (#0049) |
| Criada | 2026-11-04 |

## Objetivo

No cenário da tela de login do original, os cipós pendurados nas árvores balançam. No `l2unity` eles não balançam ou nem aparecem. O usuário viu isso ao comparar com o original. Esta tarefa faz os cipós aparecerem e balançarem como no original, e confere os outros movimentos do cenário do login (moinho, folhagem) que estiverem na mesma situação.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento, com evidência (.unr/.usx, propriedades do ator, código do engine no Tryskell ou na REA), de cada malha que se mexe no cenário do login: cipós, moinho e folhagem. Para cada uma, o tipo de movimento (MeshSway, WindSway, Mover, animação de material) e os parâmetros.
- [ ] Os cipós aparecem e balançam com a amplitude, o período e o eixo do original. O mesmo vale para o resto do levantamento, ou o que faltar fica registrado em Decisões com o motivo.
- [ ] O que precisar de reexportação para `shared\` vira pedido para a coordenadora em `tarefas\pedidos\`, com o comando e o que muda. O que for do `App.cs` vira pedido também.
- [ ] Testes EditMode para os parâmetros lidos e para a função de movimento. `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Captura ou gravação curta (quadros em sequência) antes e depois em `Docs/evidencias/cipos-login/`, e a linha G8 atualizada em `Docs/validacao.md`.

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
