// Ligacoes de movimento do user.ini [Engine.Input] (spec 05 secao 5.6, user.ini oficial:282-292) e o estado do teclado do
// ALineagePlayerController (engine.dll do Interlude):
//  - KeyboardMoveStart Dir=N liga o bit N em +0xa10 e chama ResetKeyboardMoving (0x103086f7): no modo normal o rumo e
//    o yaw da camera + FUN_10563f60(bits) (so frente = 0, so tras = 0x8000, o resto = 100000 = sem movimento); Dir=16/32
//    (Espaco/Ctrl) so contam no modo camera (+0xa90 bit 1, ligado por OnCameraMode(1), pacote 0xf1 CameraMode), em que
//    FUN_10563fd0 soma (0,0,+1)/(0,0,-1) ao vetor do pitch/yaw da camera;
//  - KeyboardMoveStart desliga a corrida permanente (+0xa08 bit 2) com qualquer Dir; KeyboardMoveFinish a preserva;
//  - KeyboardPermanentMove (NumLock) alterna +0xa08 bit 2 e grava o rumo (+0xa0c) = yaw do pawn; o Tick (0x1030acd1)
//    reenvia o destino posicao + rumo * velocidade * 5 enquanto +0xa08 & 3, e o giro (A/D) atualiza o rumo.
// O reenvio segue a regra que o porte ja usava para W/S (1 s ou 1000 unidades de giro); o original reenvia a cada 3 s.
using System;
using System.Collections.Generic;
using UnityEngine.InputSystem;

namespace L2Web.World
{
    public static class UserIniKeys
    {
        public const int DirForward = 1, DirRight = 2, DirBack = 4, DirLeft = 8, DirUp = 16, DirDown = 32;
        /// <summary>FUN_10563f60: combinacao sem rumo no modo normal.</summary>
        public const int NoMove = 100000;

        /// <summary>KeyboardMoveStart Dir= (user.ini:282-283, 286-287, 291-292).</summary>
        public static readonly Dictionary<Key, int> MoveDirs = new()
        {
            [Key.W] = DirForward, [Key.UpArrow] = DirForward, [Key.S] = DirBack, [Key.DownArrow] = DirBack,
            [Key.Space] = DirUp, [Key.LeftCtrl] = DirDown, [Key.RightCtrl] = DirDown,
        };

        /// <summary>NumLock=KeyboardPermanentMove (user.ini:288).</summary>
        public const Key PermanentMove = Key.NumLock;

        /// <summary>PrintScrn=OnRelease shot (user.ini:138).</summary>
        public const Key Shot = Key.PrintScreen;

        /// <summary>
        /// ZoomOutPress (positivo, afasta) e ZoomInPress (negativo, aproxima) do teclado numerico (user.ini:347-352).
        /// A roda usa o mesmo comando com Speed=50 (user.ini:345-346).
        /// </summary>
        public static readonly Dictionary<Key, float> ZoomKeys = new()
        {
            [Key.Numpad7] = 2f, [Key.Numpad9] = -2f,
            [Key.Numpad4] = 0.1f, [Key.Numpad6] = -0.1f,
            [Key.Numpad1] = 0.01f, [Key.Numpad3] = -0.01f,
        };

        /// <summary>CameraViewHeightAdjust Speed=+20/-20 (user.ini:359-360): unidades por segundo enquanto segura.</summary>
        public static readonly Dictionary<Key, float> ViewHeightKeys = new() { [Key.Numpad8] = 20f, [Key.Numpad2] = -20f };

        /// <summary>FUN_10563f60: deslocamento do rumo sobre o yaw da camera no modo normal (65536 = 360 graus).</summary>
        public static int YawOffset(int bits)
        {
            switch (bits)
            {
                case 1: case 3: case 0xb: return 0;
                case 4: case 6: case 0xc: case 0xe: return 0x8000;
                case 9: return 0;
                default: return NoMove;
            }
        }

        /// <summary>
        /// FUN_10563fd0 (modo camera): frente = vetor (pitch, yaw), tras = (-pitch, yaw + 0x8000), Dir=2/8 somam o lado
        /// (yaw +/- 0x4000), Dir=16/32 somam (0,0,+1)/(0,0,-1); o resultado e normalizado (zero sem tecla).
        /// </summary>
        public static (float X, float Y, float Z) FreeDir(int bits, float pitch, float yaw)
        {
            double x = 0, y = 0, z = 0;
            void Add(double p, double w)
            {
                var pr = p / 65536.0 * Math.PI * 2;
                var wr = w / 65536.0 * Math.PI * 2;
                x += Math.Cos(pr) * Math.Cos(wr);
                y += Math.Cos(pr) * Math.Sin(wr);
                z += Math.Sin(pr);
            }
            void Normalize()
            {
                var l = Math.Sqrt(x * x + y * y + z * z);
                if (l < 1e-6) x = y = z = 0;
                else { x /= l; y /= l; z /= l; }
            }
            if ((bits & DirForward) != 0) Add(pitch, yaw);
            else if ((bits & DirBack) != 0) Add(-pitch, yaw + 0x8000);
            if ((bits & DirRight) != 0) { Add(0, yaw + 0x4000); Normalize(); }
            else if ((bits & DirLeft) != 0) { Add(0, yaw - 0x4000); Normalize(); }
            if ((bits & DirUp) != 0) z += 1;
            else if ((bits & DirDown) != 0) z -= 1;
            Normalize();
            return ((float)x, (float)y, (float)z);
        }
    }

    /// <summary>Destino do MoveBackwardToLocation que o teclado pede (coordenadas do L2).</summary>
    public struct KeyMoveOrder
    {
        public float X, Y, Z;
        /// <summary>Parada ao soltar: 0,2 s a frente no rumo do pawn (ramo 100000 do ResetKeyboardMoving).</summary>
        public bool Stop;
    }

    /// <summary>Estado do movimento pelo teclado: bits +0xa10, corrida permanente (+0xa08 bit 2) e modo camera (+0xa90).</summary>
    public sealed class KeyboardMove
    {
        /// <summary>Reenvio do destino (regra do porte para W/S).</summary>
        public const float ResendSeconds = 1;
        public const int ResendTurn = 1000;
        /// <summary>OnCameraMode(1): pawn+0x1804 = 800 (0x44480000), a distancia do destino no modo camera.</summary>
        public const float FreeCameraDist = 800;

        /// <summary>+0xa10: Dir das teclas seguradas.</summary>
        public int Bits { get; private set; }
        /// <summary>+0xa08 bit 2: KeyboardPermanentMove ligado.</summary>
        public bool Permanent { get; private set; }
        /// <summary>+0xa0c da corrida permanente: o yaw do pawn ao ligar, seguido pelo giro A/D.</summary>
        public float PermanentYaw { get; private set; }
        /// <summary>+0xa90 bit 1: OnCameraMode(1) (pacote 0xf1 CameraMode); Espaco/Ctrl so sobem e descem aqui.</summary>
        public bool FreeCamera;
        /// <summary>Ha um destino do teclado em andamento (o ultimo pedido nao foi a parada).</summary>
        public bool Moving { get; private set; }

        float timer;
        float sentYaw;
        int sentBits;

        /// <summary>
        /// Teclas de movimento seguradas neste quadro. Um Dir novo e um KeyboardMoveStart: desliga a corrida permanente
        /// (UInput::Exec KEYBOARDMOVESTART: "+0xa08 &amp; 0xfffffffd" depois do ResetKeyboardMoving), mesmo Espaco e Ctrl fora
        /// do modo camera.
        /// </summary>
        public void Hold(int bits)
        {
            var pressed = bits & ~Bits;
            Bits = bits;
            if (pressed == 0 || !Permanent) return;
            Permanent = false;
            // fora do modo camera, um Dir sem rumo (Espaco/Ctrl) so zera os bits: ResetKeyboardMoving nao manda parar,
            // porque a parada so sai com +0xa08 & 5 (teclado), e o servidor segue ate o ultimo destino
            if (!FreeCamera && UserIniKeys.YawOffset(bits & 15) == UserIniKeys.NoMove) Moving = false;
        }

        /// <summary>KeyboardPermanentMove: alterna; ligado, o rumo e o yaw do pawn.</summary>
        public void TogglePermanent(float pawnYaw)
        {
            Permanent = !Permanent;
            if (Permanent) PermanentYaw = pawnYaw;
        }

        /// <summary>
        /// Clique no mundo (PlayerPawnMoveTo, ataque): desliga a corrida permanente, e o pedido do clique substitui o
        /// dela sem parada (o StopMove do controlador, 0x10301ccb, tambem zera +0xa08 bit 2). W/S seguradas continuam.
        /// </summary>
        public void Cancel()
        {
            if (!Permanent) return;
            Permanent = false;
            if (FreeCamera ? Bits == 0 : UserIniKeys.YawOffset(Bits & 15) == UserIniKeys.NoMove) Moving = false;
        }

        /// <summary>Saida do mundo.</summary>
        public void Reset()
        {
            Bits = 0;
            Permanent = false;
            Moving = false;
            FreeCamera = false;
        }

        /// <summary>
        /// Um quadro: devolve o destino a enviar (MoveBackwardToLocation) ou null. `turning` = giro A/D em andamento
        /// (-1, 0, 1); `camYaw`/`camPitch` = rotacao da camera; `heading` = yaw do pawn; `speed` = velocidade atual.
        /// </summary>
        public KeyMoveOrder? Tick(float dt, int turning, float camYaw, float camPitch, float x, float y, float z, float heading, float speed)
        {
            timer += dt;
            speed = Math.Max(speed, 1);
            float yaw;
            float dx, dy, dz = 0, dist;
            if (FreeCamera && Bits != 0)
            {
                var v = UserIniKeys.FreeDir(Bits, camPitch, camYaw);
                if (v.X == 0 && v.Y == 0 && v.Z == 0) return StopOrder(x, y, z, heading, speed);
                (dx, dy, dz) = v;
                yaw = (float)(Math.Atan2(dy, dx) / (Math.PI * 2) * 65536);
                dist = FreeCameraDist;
            }
            else
            {
                var off = UserIniKeys.YawOffset(Bits & 15);
                if (off != UserIniKeys.NoMove) yaw = camYaw + off;
                else if (Permanent)
                {
                    if (turning != 0) PermanentYaw = heading;
                    yaw = PermanentYaw;
                }
                else return StopOrder(x, y, z, heading, speed);
                var r = yaw / 65536.0 * Math.PI * 2;
                dx = (float)Math.Cos(r);
                dy = (float)Math.Sin(r);
                dist = speed * 5;
            }
            yaw = ((yaw % 65536) + 65536) % 65536;
            var turned = Math.Abs(((yaw - sentYaw + 98304) % 65536) - 32768) > ResendTurn;
            if (Moving && !turned && timer < ResendSeconds && Bits == sentBits) return null;
            timer = 0;
            Moving = true;
            sentYaw = yaw;
            sentBits = Bits;
            return new KeyMoveOrder { X = x + dx * dist, Y = y + dy * dist, Z = z + dz * dist };
        }

        KeyMoveOrder? StopOrder(float x, float y, float z, float heading, float speed)
        {
            if (!Moving) return null;
            Moving = false;
            var r = heading / 65536.0 * Math.PI * 2;
            return new KeyMoveOrder { X = x + (float)Math.Cos(r) * speed * 0.2f, Y = y + (float)Math.Sin(r) * speed * 0.2f, Z = z, Stop = true };
        }
    }
}
