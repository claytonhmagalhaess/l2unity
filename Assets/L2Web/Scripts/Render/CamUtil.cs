// Constantes e contas soltas de render/camera.ts (CAMERA, PRESETS, V3, rotatorDir, verticalFov).
// Tudo em unidades do L2 (rotator do Unreal: 65536 = 360 graus); a cena converte para o Unity no fim.
using System;

namespace L2Web.Render
{
    /// <summary>Vetor em unidades do L2 (x, y no plano, z para cima).</summary>
    public struct V3
    {
        public float X;
        public float Y;
        public float Z;

        public V3(float x, float y, float z)
        {
            X = x;
            Y = y;
            Z = z;
        }

        public float Length => (float)Math.Sqrt((double)X * X + (double)Y * Y + (double)Z * Z);

        public override string ToString() => $"({X}, {Y}, {Z})";
    }

    /// <summary>Valores do user.ini ([Engine.LineagePlayerController]) e do CalcBehindView (CAMERA do TS).</summary>
    public sealed class CameraCfg
    {
        public readonly float PitchMin = -15000;
        public readonly float PitchMax = 16384;
        public readonly float ZoomMin = -200;
        /// <summary>MaxZoomingDist do user.ini oficial (o UInput::Exec limita o ZoomOutPress a esse campo, +0xa28).</summary>
        public readonly float ZoomMax = 25000;
        public readonly float DistBase = 250;
        public readonly float HitMargin = 30;
        public readonly float WheelStep = 20;
        /// <summary>CameraYaw/CameraPitch: 0,01 * Speed(3600) por unidade de movimento do mouse.</summary>
        public readonly float MouseRate = 36;
        public readonly float AutoTrackingSpeed = 0.4f;
        /// <summary>KayboardRotationRate.Yaw (LineagePawn): giro pelo teclado, unidades por segundo.</summary>
        public readonly float KeyTurnRate = 10000;
        /// <summary>
        /// DesiredFOV/DefaultFOV do LineagePawnController (horizontal, como no UE2). No lobby o renderizador usa o
        /// Controller.FovAngle = 50 (defaults do PlayerController; nada copia os 60 para ele): LobbyScene.LobbyFovDeg.
        /// </summary>
        public readonly float FovDeg = 60;
    }

    /// <summary>FixedDefaultCamera* do user.ini.</summary>
    public sealed class CameraPreset
    {
        public float Pitch;
        public float Dist;
        public float ViewHeight;
        public bool HidePlayer;
        public bool DisableZoom;
    }

    /// <summary>Resultado de L2Camera.Update: posicao da camera, alvo e direcao (unidades do L2).</summary>
    public struct CameraView
    {
        public V3 Pos;
        public V3 Target;
        public V3 Dir;
    }

    public static class CamUtil
    {
        public static readonly CameraCfg Cfg = new CameraCfg();

        public static readonly CameraPreset[] Presets =
        {
            new CameraPreset { Pitch = -2700, Dist = 230, ViewHeight = 0, HidePlayer = false, DisableZoom = false },
            new CameraPreset { Pitch = 560, Dist = 80, ViewHeight = 14, HidePlayer = true, DisableZoom = true },
            new CameraPreset { Pitch = -3320, Dist = 450, ViewHeight = 0, HidePlayer = false, DisableZoom = false },
        };

        /// <summary>Direcao (unitaria) de um rotator do Unreal (pitch, yaw) em unidades de 65536.</summary>
        public static V3 RotatorDir(float pitch, float yaw)
        {
            var p = pitch / 65536.0 * Math.PI * 2;
            var y = yaw / 65536.0 * Math.PI * 2;
            return new V3((float)(Math.Cos(p) * Math.Cos(y)), (float)(Math.Cos(p) * Math.Sin(y)), (float)Math.Sin(p));
        }

        /// <summary>Converte o FOV horizontal do Unreal para o vertical (Camera.fieldOfView), dado o aspecto da tela.</summary>
        public static float VerticalFov(float hfovDeg, float aspect) =>
            (float)(2 * Math.Atan(Math.Tan(hfovDeg * Math.PI / 360) / aspect) * 180 / Math.PI);

        public static float Clamp(float v, float lo, float hi) => v < lo ? lo : v > hi ? hi : v;
    }
}
