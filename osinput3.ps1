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
$p = Start-Process -FilePath $Exe -ArgumentList @('-screen-fullscreen','0','-screen-width','1280','-screen-height','800','-logFile',$Log,'-l2login','l2webtest:l2webtest','-l2enter','0','-l2hold','120','-l2quit','5') -PassThru
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
function Show([string]$label) { $l = Hold-Line; $keys = 'skills=\S+|slot8Key=[^ ]*|npcNome=\[[^\]]*\]|npcJanela=\[[^\]]*\]|opcoes=\S+|musicaMuda=\S+|chat=\[[^\]]*\]|ultimoClique=\[[^\]]*\]|invVisivel=\S+|slot7Key=[^ ]*|dica=\[[^\]]*\]|anim=\S+|self=\S+|audioRms=\S+|musica=\[[^\]]*\]'; "{0,-10} {1}" -f $label, ((([regex]::Matches($l, $keys)) | ForEach-Object { $_.Value }) -join '  ') }

function Click($pt) { Ensure-Front; [W]::MoveTo($pt.X, $pt.Y); Start-Sleep -Milliseconds 250; [W]::mouse_event(0x0002, 0, 0, 0, [IntPtr]::Zero); Start-Sleep -Milliseconds 60; [W]::mouse_event(0x0004, 0, 0, 0, [IntPtr]::Zero) }
function Press([byte]$vk, [byte]$scan) { Ensure-Front; [W]::Key($vk, $scan); Start-Sleep -Milliseconds 120 }
Show 'inicio'
# 1) K abre a janela de skills
Press 0x4B 0x25; Start-Sleep -Milliseconds 1500
Show 'tecla K'
# 2) arrasta a skill Dash para o slot 8 da barra 1
$a = Field 'dash'; $b = Field 'slot8'
Ensure-Front; [W]::MoveTo($a.X, $a.Y); Start-Sleep -Milliseconds 300; [W]::mouse_event(0x0002, 0, 0, 0, [IntPtr]::Zero); Start-Sleep -Milliseconds 150
for ($k = 1; $k -le 20; $k++) { Ensure-Front; [W]::MoveTo([int]($a.X + ($b.X - $a.X) * $k / 20), [int]($a.Y + ($b.Y - $a.Y) * $k / 20)); Start-Sleep -Milliseconds 30 }
Start-Sleep -Milliseconds 150; [W]::mouse_event(0x0004, 0, 0, 0, [IntPtr]::Zero); Start-Sleep -Milliseconds 2500
Show 'skill->F8'
# 3) fecha skills e inventario (K, I), gira a camera arrastando com o botao direito ate a Clarissa aparecer, e clica nela
Press 0x4B 0x25; Press 0x49 0x17; Start-Sleep -Milliseconds 800
for ($r = 0; $r -lt 12 -and ((Hold-Line) -notmatch 'npcNome=\[Clarissa\]'); $r++) {
  $c0 = To-Screen 640 400
  Ensure-Front; [W]::MoveTo($c0.X, $c0.Y); Start-Sleep -Milliseconds 150; [W]::mouse_event(0x0008, 0, 0, 0, [IntPtr]::Zero)
  for ($k = 1; $k -le 6; $k++) { Ensure-Front; [W]::MoveTo($c0.X + 25 * $k, $c0.Y); Start-Sleep -Milliseconds 30 }
  [W]::mouse_event(0x0010, 0, 0, 0, [IntPtr]::Zero); Start-Sleep -Milliseconds 1300
}
Show 'camera'

$n = Field 'npc'; Click $n; Start-Sleep -Milliseconds 900; $n = Field 'npc'; Click $n; Start-Sleep -Milliseconds 8000
Show 'NPC'
# 4) link Quest do HTML
$q = Field 'quest'; if ($q.X -ne 0) { Click $q; Start-Sleep -Milliseconds 2500 }
Show 'link'
# 5) chat: Enter, "oi", Enter
Press 0x0D 0x1C; Start-Sleep -Milliseconds 500; Press 0x4F 0x18; Press 0x49 0x17; Start-Sleep -Milliseconds 300; Press 0x0D 0x1C; Start-Sleep -Milliseconds 2500
Show 'chat'
# 6) Alt+O abre as opcoes
Ensure-Front; [W]::keybd_event(0x12, 0x38, 0x0008, [IntPtr]::Zero); Start-Sleep -Milliseconds 80; [W]::Key(0x4F, 0x18); Start-Sleep -Milliseconds 80; [W]::keybd_event(0x12, 0x38, 0x000A, [IntPtr]::Zero); Start-Sleep -Milliseconds 1500
Show 'Alt+O'
# 7) caixa "Musica sem som" (liga e desliga)
$m = Field 'mudo'; Click $m; Start-Sleep -Milliseconds 1500
Show 'mudo'
$m = Field 'mudo'; Click $m; Start-Sleep -Milliseconds 1500
Show 'som'
[W]::SetCursorPos($saved.X, $saved.Y) | Out-Null
$p.WaitForExit(180000) | Out-Null
"saiu: $($p.ExitCode)"
