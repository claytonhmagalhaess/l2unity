# Teste do L2Web.exe com mouse e teclado reais do Windows (SetCursorPos/mouse_event/keybd_event).
# Antes de cada evento confere que a janela do jogo esta em primeiro plano; senao aborta (nada vai para outra janela).
param([string]$Exe, [string]$Log)
$ErrorActionPreference = 'Stop'
trap { if ($p -and -not $p.HasExited) { $p.CloseMainWindow() | Out-Null; Start-Sleep -Seconds 3; if (-not $p.HasExited) { $p.Kill() } }; throw $_ }
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
$p = Start-Process -FilePath $Exe -ArgumentList @('-screen-fullscreen','0','-screen-width','1280','-screen-height','800','-logFile',$Log,'-l2login','l2webtest:l2webtest','-l2enter','0','-l2goto','30093','-l2hold','60','-l2quit','5') -PassThru
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

function Field([string]$name) { $l = Hold-Line; if ($l -match ($name + '=(-?\d+),(-?\d+)')) { return To-Screen ([double]$matches[1]) ([double]$matches[2]) } else { throw "sem $name" } }
function Show([string]$label) { $l = Hold-Line; $keys = 'loja=\S+|corante=\S+|adena=\S+|npcJanela=\[[^\]]*\]|self=\S+'; "{0,-10} {1}" -f $label, ((([regex]::Matches($l, $keys)) | ForEach-Object { $_.Value }) -join '  ') }

function Click($pt) { Ensure-Front; [W]::MoveTo($pt.X, $pt.Y); Start-Sleep -Milliseconds 250; [W]::mouse_event(0x0002, 0, 0, 0, [IntPtr]::Zero); Start-Sleep -Milliseconds 60; [W]::mouse_event(0x0004, 0, 0, 0, [IntPtr]::Zero) }
function Press([byte]$vk, [byte]$scan) { Ensure-Front; [W]::Key($vk, $scan); Start-Sleep -Milliseconds 120 }


function NZ($name) { $l = Hold-Line; return ($l -match ($name + '=(-?\d+),(-?\d+)')) -and -not ($matches[1] -eq '0' -and $matches[2] -eq '0') }

function Stable([string]$name) {
  for ($t = 0; $t -lt 20; $t++) {
    $ls = @(Select-String -Path $Log -Pattern '\[hold\] tela' | Select-Object -Last 2 | ForEach-Object { $_.Line })
    if ($ls.Count -eq 2 -and $ls[0] -match ($name + '=(-?\d+),(-?\d+)')) { $a1 = [int]$matches[1]; $b1 = [int]$matches[2]
      if ($ls[1] -match ($name + '=(-?\d+),(-?\d+)')) { if (($a1 -ne 0) -and [math]::Abs($a1 - [int]$matches[1]) -lt 6 -and [math]::Abs($b1 - [int]$matches[2]) -lt 6) { return } } }
    Start-Sleep -Milliseconds 500 }
}
Show 'no Groot'
# fecha o inventario (I) para nao cobrir as janelas
Press 0x49 0x17; Start-Sleep -Milliseconds 800
# link "Buy Dye" do dialogo do Groot
Stable 'buyLink'; $b = Field 'buyLink'; Click $b; Start-Sleep -Milliseconds 3000
Show 'Buy Dye'
# quantidade 1 no "Dye of STR <Str+1 Con-3>" e Comprar
$b = Field 'shopQty'; Click $b; Start-Sleep -Milliseconds 300
for ($k = 0; $k -lt 5; $k++) { Press 0x08 0x0E }
Press 0x31 0x02; Start-Sleep -Milliseconds 400
Show 'qtd 1'
$b = Field 'shopBuy'; Click $b; Start-Sleep -Milliseconds 3500
Show 'Comprar'
[W]::SetCursorPos($saved.X, $saved.Y) | Out-Null
$p.WaitForExit(180000) | Out-Null
"saiu: $($p.ExitCode)"
