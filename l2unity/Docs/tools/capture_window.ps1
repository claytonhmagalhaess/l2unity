# Captura a area cliente (sem bordas) da janela de um processo, pela tela (observacao passiva: nao le memoria nem injeta
# nada). Traz a janela para a frente antes, porque a imagem vem do desktop.
#   powershell -File Docs/tools/capture_window.ps1 -ProcessId 1234 -Out captura.png
param([int]$ProcessId, [string]$Out, [switch]$NoFocus)
Add-Type -AssemblyName System.Drawing
Add-Type @"
using System;
using System.Runtime.InteropServices;
public static class W32 {
  [StructLayout(LayoutKind.Sequential)] public struct RECT { public int L, T, R, B; }
  [StructLayout(LayoutKind.Sequential)] public struct POINT { public int X, Y; }
  [DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
  [DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);
  [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
  [DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr h, int c);
  [DllImport("user32.dll")] public static extern bool SetProcessDPIAware();
}
"@
[W32]::SetProcessDPIAware() | Out-Null
$p = Get-Process -Id $ProcessId
$h = $p.MainWindowHandle
if (-not $NoFocus) { [W32]::ShowWindow($h, 9) | Out-Null; [W32]::SetForegroundWindow($h) | Out-Null; Start-Sleep -Milliseconds 600 }
$r = New-Object W32+RECT
[W32]::GetClientRect($h, [ref]$r) | Out-Null
$pt = New-Object W32+POINT
[W32]::ClientToScreen($h, [ref]$pt) | Out-Null
$w = $r.R - $r.L; $hh = $r.B - $r.T
$bmp = New-Object System.Drawing.Bitmap $w, $hh
$g = [System.Drawing.Graphics]::FromImage($bmp)
$g.CopyFromScreen($pt.X, $pt.Y, 0, 0, (New-Object System.Drawing.Size $w, $hh))
$bmp.Save($Out, [System.Drawing.Imaging.ImageFormat]::Png)
$g.Dispose(); $bmp.Dispose()
"$Out ${w}x${hh} em ($($pt.X), $($pt.Y))"
