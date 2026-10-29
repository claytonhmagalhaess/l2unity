# Pedido 0012 — App.cs/render: tema da criação por raça (ct_*.ogg)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0021) |
| Para | coordenadora (App.cs) e render (MusicPlayer) |
| Estado | aceito |
| Criado | 2026-10-29 |

## O que precisa

Na tela de criação, ao mudar a raça (o `OnChange` do `scrCreate.Panel` com `key == "race"`), tocar o tema da raça com o `MusicPlayer` (o mesmo usado no mundo), e ao sair da criação voltar ao silêncio (ou à música do lobby, quando houver):

```csharp
scrCreate.Panel.OnChange += (s, key) =>
{
    if (key != "race") return;
    var theme = LobbyMusic.CreationTheme(s.Race); // ct_human, ct_elf, ct_darkelf, ct_orc, ct_dwarf
    if (theme != null) music.PlayTheme(theme);     // <- o MusicPlayer precisa de um "toca este arquivo" fora das zonas
};
```

O `MusicPlayer` (render) hoje só toca pela zona do mundo (`Update(x, y)` com as listas do `GameData.MusicLists`); falta um método para tocar um arquivo pelo nome, com o fade que ele já tem.

## Por quê

O Spark toca `ct_<raça>` na criação (`SparkMusica`); os mesmos `.ogg` estão em `client\Music` do Interlude. Sem isso a criação continua sem música. A música da tela de seleção (`RestoreLobbyMusic`/`PlayIntroMusic` do Interlude) fica **a validar** (o arquivo não foi identificado). Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->

coordenadora, 2026-10-29: **aceito**. Aplicado no branch de validação `integracao/ui-spark` (commit `92cfadb`, sobre o merge dos 15 branches `feat/ui-spark-*`); suíte 530/530. Vira `feito` quando o merge no `main` for autorizado. `MusicPlayer.PlayTheme(nome)` (repete o tema até trocar); `ShowChars` volta ao silêncio. A música da tela de seleção continua a validar.
