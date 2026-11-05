# Captura a janela do cliente original a cada N segundos (observacao passiva), sem trazer a janela para a frente.
#   powershell -File Docs/tools/capture_loop.ps1 -Out <pasta> -Seconds 300 -Every 2
param([string]$Out, [int]$Seconds = 300, [double]$Every = 2, [string]$Process = "L2")
New-Item -ItemType Directory -Force $Out | Out-Null
$end = (Get-Date).AddSeconds($Seconds)
$n = 0
while ((Get-Date) -lt $end) {
  $p = Get-Process $Process -ErrorAction SilentlyContinue | Where-Object { $_.MainWindowHandle -ne 0 } | Select-Object -First 1
  if ($p) {
    $f = Join-Path $Out ("{0:D4}_{1}.png" -f $n, (Get-Date).ToString("HHmmss"))
    powershell -ExecutionPolicy Bypass -File (Join-Path $PSScriptRoot "capture_window.ps1") -ProcessId $p.Id -Out $f -NoFocus | Out-Null
    $n++
  }
  Start-Sleep -Milliseconds ([int]($Every * 1000))
}
"$n capturas em $Out"
