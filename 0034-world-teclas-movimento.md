# #0034 — Teclas de movimento e câmera que faltam do `user.ini` (T10)

| Campo | Valor |
|---|---|
| Vaga | world |
| Branch | `feat/world-teclas-movimento` |
| Estado | aberta |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T10; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | world: teclas de movimento e câmera |
| Criada | 2026-11-03 |

## Objetivo

Teclas de movimento e câmera que faltam do `user.ini`, com o comportamento do Interlude levantado na #0024 (T10 do 05 §2). Tamanho estimado: M.

Ordem: única tarefa da vaga `world` nesta rodada; o branch nasce de `main`. Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: Espaço/Ctrl sobem e descem voando ou nadando; NumLock corre sem parar; NumPad 7/9/4/6/1/3 zoom e 8/2 altura; PrintScrn captura a tela.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes: C→S `MoveBackwardToLocation`, `ValidatePosition` (já usados).
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/teclas-movimento/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

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
