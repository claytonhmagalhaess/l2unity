# Pedido 0013 — LocalAssets.cs: servir /client/spark_hud/

| Campo | Valor |
|---|---|
| De | ui (tarefa #0022) |
| Para | coordenadora (LocalAssets.cs) |
| Estado | recusado |
| Criado | 2026-10-29 |

## O que precisa

Em `Assets\L2Web\Scripts\LocalAssets.cs`, `FileFor(path)`, mapear o caminho das texturas do tema Spark para a pasta nova `StreamingAssets\L2Web\client\spark_hud\` (gerada pelo `Docs/tools/gen_spark_hud.py`), junto das outras regras:

```csharp
// tema Spark da HUD (#0022, Docs/tools/gen_spark_hud.py): texturas do cliente L2 da HUD do Spark e o spark_hud.json
if (p.StartsWith("/client/spark_hud/")) return P("client", "spark_hud", p.Substring(18));
```

## Por quê

O `spark_hud.json` e as URLs dele usam `/client/spark_hud/<arquivo>`. Hoje o `LocalAssets` responde 404 para esse caminho, então o `UiTheme.Url` (`Scripts\UI\UiTheme.cs`) contorna: com os assets locais pede o `file://` da cópia em StreamingAssets (o `Http.Fetch` aceita `file:` e vai pelo `UnityWebRequest`, fora do `LocalAssets`). Funciona no Editor e no player, mas fica fora do caminho comum (sem o `Task.Run` do `LocalAssets.Get`). Com a regra acima, o `UiTheme.Url` passa a devolver o próprio caminho sozinho (ele testa `LocalAssets.FileFor(path) != null`); nada mais muda. Sem o pedido nada quebra.

Com `assetMode` remoto (servidor de assets), o servidor também precisa servir `/client/spark_hud/` a partir da mesma pasta; sem isso, o tema cai sozinho no Interlude (o `spark_hud.json` não carrega).

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->

coordenadora, 2026-10-29: **recusado**. O porte da HUD do Spark (#0005) foi descartado pelo usuário; nada disto entrou no `main`.
