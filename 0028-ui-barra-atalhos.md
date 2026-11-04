# #0028 — Barra de atalhos igual ao nativo (T4)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-barra-atalhos` |
| Estado | fazendo |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T4; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Barra de atalhos igual ao nativo, com o comportamento do Interlude levantado na #0024 (T4 do 05 §2). Tamanho estimado: P.

Ordem: 8ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-inventario` (#0026). Depende de: T8 para as macros.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: clique direito = auto-shot só nos ids de `nw:0x10149ee0`; slot → slot troca; para fora apaga; origens macro, receita e pet; rótulos de tecla certos.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (C→S `RequestShortCutReg` 0x33 (com `UserShortCut` 1/2), `RequestShortCutDel`, `RequestAutoSoulShot` 0xd0:0x05; S→C `ShortCutRegister` 0x44, `ExAutoSoulShot` 0xfe:0x12) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/barra-atalhos/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/ui-barra-atalhos` criado de `feat/ui-moldura` (fc17ab5): a base prevista (`feat/ui-inventario`, #0026) não existe porque a #0026 está bloqueada; estado `fazendo`.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
