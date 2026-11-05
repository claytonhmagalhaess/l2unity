// Camera em 3a pessoa do cliente L2, pelo RE de ALineagePlayerController::CalcBehindView (engine.dll 0x1056ea50)
// e dos comandos de UInput::Exec, com os valores do user.ini original ([Engine.LineagePlayerController]):
//  - alvo = Location do pawn (centro do cilindro: pe + CollisionHeight) + ViewHeight;
//  - distancia = Zoom + 250, Zoom em [-200, MaxZoomingDist do user.ini = 25000]; a camera fica 30 unidades antes do fim do trace
//    (e 30 antes do que bater no caminho);
//  - pitch em [-15000, 16384] (65536 = 360 graus; negativo olha para baixo);
//  - roda: ZoomInPress/ZoomOutPress Speed=20 (MouseWheelDown aproxima, MouseWheelUp afasta);
//  - botao direito: CameraYaw/CameraPitch Speed=3600 * 0,01 por unidade de mouse, e desliga o auto-tracking;
//  - auto-tracking (AutoTrackingPawnSpeed=0.4): a cada quadro o yaw anda 40% em direcao a linha
//    "posicao anterior da camera -> alvo", o que faz a camera ir para tras do personagem quando ele anda;
//  - FixedDefaultCamera[0..2] (Home/PageUp/PageDown): presets de pitch, distancia, altura e esconder o jogador.
// Tudo em unidades do L2; a cena (GameScene) converte para o Unity com Coords.ToUnity.
using System;
using L2Web.World;

namespace L2Web.Render
{
    public class L2Camera
    {
        public float Yaw;
        public float Pitch = CamUtil.Presets[0].Pitch;
        public float Zoom = CamUtil.Presets[0].Dist - CamUtil.Cfg.DistBase;
        public float ViewHeight = CamUtil.Presets[0].ViewHeight;
        public int Preset;
        /// <summary>bUseAutoTrackingPawn; desligado enquanto o botao direito gira a camera.</summary>
        public bool Tracking = true;
        public bool HidePlayer;
        /// <summary>Opcoes: multiplicador do mouse (campo 0xa98 do controller) e bUseAutoTrackingPawn.</summary>
        public float Sensitivity = 1;
        public bool AutoTracking = true;
        V3? lastCam;
        V3? lastTarget;

        /// <summary>Botao direito arrastando: dx/dy em pixels (dy positivo = mouse para baixo = olhar para baixo).</summary>
        public void Rotate(float dx, float dy)
        {
            var k = CamUtil.Cfg.MouseRate * Sensitivity;
            Yaw = ((Yaw + dx * k) % 65536 + 65536) % 65536;
            Pitch = CamUtil.Clamp(Pitch - dy * k, CamUtil.Cfg.PitchMin, CamUtil.Cfg.PitchMax);
        }

        /// <summary>Roda do mouse: cliques positivos = MouseWheelDown (ZoomInPress, aproxima).</summary>
        public void Wheel(float clicks)
        {
            if (CamUtil.Presets[Preset].DisableZoom) return;
            Zoom = CamUtil.Clamp(Zoom - clicks * CamUtil.Cfg.WheelStep, CamUtil.Cfg.ZoomMin, CamUtil.Cfg.ZoomMax);
        }

        /// <summary>FixedDefaultCamera: aplica o preset atras do personagem.</summary>
        public void ApplyPreset(int i, float pawnYaw)
        {
            var n = CamUtil.Presets.Length;
            Preset = ((i % n) + n) % n;
            var p = CamUtil.Presets[Preset];
            Pitch = p.Pitch;
            Zoom = p.Dist - CamUtil.Cfg.DistBase;
            ViewHeight = p.ViewHeight;
            HidePlayer = p.HidePlayer;
            Yaw = pawnYaw;
            lastCam = null;
        }

        /// <summary>TurnBack: camera para tras do personagem.</summary>
        public void TurnBack(float pawnYaw)
        {
            Yaw = pawnYaw;
            lastCam = null;
        }

        /// <summary>Gira junto com o personagem (giro pelo teclado).</summary>
        public void Turn(float delta)
        {
            Yaw = (Yaw + delta + 65536) % 65536;
        }

        public float Distance => Zoom + CamUtil.Cfg.DistBase;

        /// <summary>
        /// Posicao da camera para o alvo (centro do pawn, sem ViewHeight). `trace(from, dir, len)` devolve a distancia
        /// do primeiro obstaculo no segmento (ou null).
        /// </summary>
        public CameraView Update(V3 center, Func<V3, V3, float, float?> trace = null)
        {
            var target = new V3(center.X, center.Y, center.Z + ViewHeight);
            var lt = lastTarget;
            var moved = !lt.HasValue || lt.Value.X != target.X || lt.Value.Y != target.Y || lt.Value.Z != target.Z;
            if (AutoTracking && Tracking && moved && lastCam.HasValue)
            {
                var dx = target.X - lastCam.Value.X;
                var dy = target.Y - lastCam.Value.Y;
                if (Math.Sqrt((double)dx * dx + (double)dy * dy) > 1)
                {
                    var diff = (float)Movement.WrapYaw((float)(Movement.HeadingOf(dx, dy) - Yaw));
                    var step = (float)Math.Floor(diff * Math.Min(1f, CamUtil.Cfg.AutoTrackingSpeed) + 0.5); // Math.round do JS
                    Yaw = (Yaw + step + 65536) % 65536;
                }
            }
            var dir = CamUtil.RotatorDir(Pitch, Yaw);
            var len = Distance;
            var d = len - CamUtil.Cfg.HitMargin;
            var back = new V3(-dir.X, -dir.Y, -dir.Z);
            var hit = trace?.Invoke(target, back, len);
            if (hit.HasValue) d = Math.Min(d, hit.Value - CamUtil.Cfg.HitMargin);
            d = Math.Max(d, 5);
            var pos = new V3(target.X - dir.X * d, target.Y - dir.Y * d, target.Z - dir.Z * d);
            lastCam = pos;
            lastTarget = target;
            return new CameraView { Pos = pos, Target = target, Dir = dir };
        }
    }
}
