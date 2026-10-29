# Teste do L2Web.exe com mouse e teclado reais do Windows (SetCursorPos/mouse_event/keybd_event).
# Antes de cada evento confere que a janela do jogo esta em primeiro plano; senao aborta (nada vai para outra janela).
param([string]$Exe, [string]$Log)
$ErrorActionPreference = 'Stop'
Add-Type @"
using System;
using System.Runtime.InteropServices;
public static class W {
  [DllImport("user32.dll")] public static extern bool SetProcessDPIAware();
  [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
  [DllImport("user32.dll")] public static extern IntPtr GetForegroundWindow();
  [DllImport("user32.dll")] public static extern bool SetCursorPos(int x, int y);
  [DllImport("user32.dll")] public static extern bool GetCursorPos(out POINT p);
  [DllImport("user32.dll")] public static extern void mouse_event(uint f, uint dx, uint dy, uint d, IntPtr e);
  [DllImport("user32.dll")] public static extern void keybd_event(byte vk, byte scan, uint f, IntPtr e);
  [DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);
  [DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
  [DllImport("user32.dll")] public static extern int GetSystemMetrics(int i);
  // movimento absoluto injetado (gera raw input, como um mouse de verdade; SetCursorPos nao gera)
  public static void MoveTo(int x, int y) {
    int vx = GetSystemMetrics(76), vy = GetSystemMetrics(77), vw = GetSystemMetrics(78), vh = GetSystemMetrics(79);
    uint nx = (uint)((x - vx) * 65535.0 / (vw - 1)), ny = (uint)((y - vy) * 65535.0 / (vh - 1));
    mouse_event(0x0001 | 0x8000 | 0x4000, nx, ny, 0, IntPtr.Zero);
  }
  // tecla com scan code (o Input System do Unity identifica as teclas pelo scan code)
  public static void Key(byte vk, byte scan) { keybd_event(vk, scan, 0x0008, IntPtr.Zero); System.Threading.Thread.Sleep(60); keybd_event(vk, scan, 0x0008 | 0x0002, IntPtr.Zero); }
  [StructLayout(LayoutKind.Sequential)] public struct POINT { public int X, Y; }
  [StructLayout(LayoutKind.Sequential)] public struct RECT { public int L, T, R, B; }
}
"@
[W]::SetProcessDPIAware() | Out-Null
$saved = New-Object W+POINT; [W]::GetCursorPos([ref]$saved) | Out-Null
$p = Start-Process -FilePath $Exe -ArgumentList @('-screen-fullscreen','0','-screen-width','1280','-screen-height','800','-logFile',$Log,'-l2login','l2webtest:l2webtest','-l2enter','0','-l2hold','45','-l2quit','5') -PassThru
function Hold-Line {
  if (-not (Test-Path $Log)) { return $null }
  $l = Select-String -Path $Log -Pattern '\[hold\]' | Select-Object -Last 1
  if ($l) { return $l.Line } else { return $null }
}
$t0 = Get-Date
while (-not (Hold-Line)) { if (((Get-Date) - $t0).TotalSeconds -gt 180) { throw 'o jogo nao chegou ao modo hold' }; Start-Sleep -Milliseconds 500 }
$p.Refresh(); $h = $p.MainWindowHandle
function Ensure-Front {
  [W]::SetForegroundWindow($h) | Out-Null; Start-Sleep -Milliseconds 150
  if ([W]::GetForegroundWindow() -ne $h) { [W]::SetCursorPos($saved.X, $saved.Y) | Out-Null; throw 'a janela do jogo nao esta em primeiro plano: abortado' }
}
function To-Screen([double]$x, [double]$y) {
  $r = New-Object W+RECT; [W]::GetClientRect($h, [ref]$r) | Out-Null
  $pt = New-Object W+POINT; $pt.X = [int]$x; $pt.Y = [int]($r.B - $y)
  [W]::ClientToScreen($h, [ref]$pt) | Out-Null; return $pt
}
$line = Hold-Line
"antes:  $line"
if ($line -notmatch 'invTitulo=(-?\d+),(-?\d+)') { throw 'sem invTitulo' }
$a = To-Screen ([double]$matches[1]) ([double]$matches[2])
# 1) arrastar o inventario pela barra de titulo: 200 px para a esquerda e 120 para baixo
Ensure-Front
[W]::MoveTo($a.X, $a.Y); Start-Sleep -Milliseconds 200
[W]::mouse_event(0x0002, 0, 0, 0, [IntPtr]::Zero); Start-Sleep -Milliseconds 120
for ($k = 1; $k -le 10; $k++) { Ensure-Front; [W]::MoveTo($a.X - 20 * $k, $a.Y + 12 * $k); Start-Sleep -Milliseconds 40 }
[W]::mouse_event(0x0004, 0, 0, 0, [IntPtr]::Zero); Start-Sleep -Milliseconds 1500
"arrasto: $(Hold-Line)"
# 2) clique no chao (embaixo, a direita do personagem)
$g = To-Screen 1000 640
Ensure-Front
[W]::MoveTo($g.X, $g.Y); Start-Sleep -Milliseconds 200
[W]::mouse_event(0x0002, 0, 0, 0, [IntPtr]::Zero); Start-Sleep -Milliseconds 60; [W]::mouse_event(0x0004, 0, 0, 0, [IntPtr]::Zero)
Start-Sleep -Milliseconds 3500
"clique:  $(Hold-Line)"
# 3) tecla X (sentar) e X de novo (levantar)
Ensure-Front
[W]::Key(0x58, 0x2D)
Start-Sleep -Milliseconds 3000
"tecla X: $(Hold-Line)"
Ensure-Front
[W]::Key(0x58, 0x2D)
Start-Sleep -Milliseconds 3000
"tecla X: $(Hold-Line)"
[W]::SetCursorPos($saved.X, $saved.Y) | Out-Null
$p.WaitForExit(120000) | Out-Null
"saiu: $($p.ExitCode)"
