# #0062: NPCs andando e atacando de lado

- `0062-1/`: ao vivo `main` e40d43c (antes) × prévia 4ccc06c (depois), em Breka's Stronghold, com o log `[orient]` do monstro. O Heading lógico está certo nas duas versões, mas o `Model` (correção da frente da malha) fica em 0 nos monstros e em 270 no jogador: o defeito é antigo. Em `model-self.log` está o Model do personagem e de cada monstro ao entrar.
- `0062-2/`: suíte em 57df023 (970/970, ActorFrontTests 11/11) e ao vivo prévia 4ccc06c × correção (e281525 = 57df023 + evidências), com a câmera atrás do personagem.
  - `zoom_a_ocioso.png`: na prévia o orc anda para a esquerda e é visto de costas; na correção ele anda de perfil, de frente para onde vai.
  - Model y: os monstros passam de 0 para 270.
  - O `FacingHeading` (pés) na corrida dá ~180° do movimento: na pose do clipe `run` (orc e arqueiro) o vetor pé → dedo aponta para trás com a cabeça à frente. É limite da medida pelos pés, não do corpo.
