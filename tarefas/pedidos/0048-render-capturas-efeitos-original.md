# Pedido 0048 — Capturas do cliente original para comparar os efeitos de skill

| Campo | Valor |
|---|---|
| De | render (tarefa #0053) |
| Para | coordenadora (o usuário fornece as capturas) |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Quadros em sequência (vídeo curto ou ~8 capturas por skill, a cada ~0,1 s) do cliente Interlude original nestas skills. Sempre com a câmera atrás do personagem, a ~3 m, vendo o caster e o alvo, de dia e sobre grama (Turek / Orc Barracks é o ideal: é onde estão as capturas do porte em `worktrees\render\Docs\evidencias\efeitos-skill\`):

1. Mago: Battle Heal ou Heal em si (1015/1011), Might (1068), Shield (1040), Wind Strike (1177), Ice Bolt (1184), Flame Strike (1181), Curse: Weakness (1164), Sleep (1069);
2. um buff lançado em outro personagem (qualquer um da lista acima);
3. uma skill de canalização com feixe (por exemplo uma invocação de servitor ou Mana Recharge, se houver);
4. Mortal Blow (16) com adaga, para ver o rastro da arma (SwordTrail);
5. ativação de Soulshot D e de Blessed Spiritshot D (o efeito na arma);
6. a tela de seleção de personagem, com a câmera parada, para comparar os halos das tochas da esquerda.

Se possível, com a velocidade de cast normal (sem os buffs x500 do servidor), e anote o cast speed.

## Por quê

O critério de pronto da #0053 pede cada efeito comparado com o original. As correções desta tarefa vêm do pseudocódigo e dos dados: mistura em gama ([O] D3DDrv `FUN_100427cb`), TFactor das malhas e efeitos dos shots. No lobby, a captura original que já existe confirma os raios de luz. Sem as capturas acima, as linhas da `Docs/efeitos_ao_vivo.md` ficam `pendente` e os halos AlphaBlend das tochas ficam sem conclusão.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
