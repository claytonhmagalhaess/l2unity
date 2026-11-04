// Ligacoes de camera do teclado numerico (user.ini oficial:347-360), pelo UInput::Exec do engine.dll do Interlude:
//  - ZoomInPress/ZoomOutPress Speed=N (so no aperto, +0xe90 == 1): sem efeito com +0x9b4 & 3 ou com o preset de zoom
//    travado (+0x960 & 0x80, FixedDefaultCameraDisableZoom); abaixo de 2 * CollisionRadius + MinZoomingDist o passo cai
//    para 1/8; o zoom fica entre MinZoomingDist (+0xa2c) e MaxZoomingDist (+0xa28); ao bater no minimo a altura da
//    camera (+0x95c) sobe 4/5 do raio uma vez (DAT_10c67368), e o primeiro ZoomOutPress desfaz;
//  - CameraViewHeightAdjust Speed=N (enquanto segura, +0xe90 == 2): altura += DeltaTime * N, sem limite.
// O controlador guarda o zoom em dois campos (+0x998 atual, +0x994 desejado); o porte usa um so (L2Camera.Zoom).
namespace L2Web.World
{
    public sealed class CameraKeys
    {
        /// <summary>DAT_10c67368: a altura ja recebeu o acrescimo do zoom minimo.</summary>
        public bool NearBump;

        /// <summary>
        /// ZoomOutPress (speed &gt; 0) ou ZoomInPress (speed &lt; 0). `min`/`max` = limites do zoom, `radius` = CollisionRadius
        /// do pawn, `locked` = preset com DisableZoom.
        /// </summary>
        public void ZoomPress(float speed, ref float zoom, ref float viewHeight, float min, float max, float radius, bool locked)
        {
            if (locked || speed == 0) return;
            var s = speed < 0 ? -speed : speed;
            if (zoom < radius + radius + min) s *= 0.125f;
            if (speed < 0)
            {
                zoom -= s;
                if (zoom < min)
                {
                    zoom = min;
                    if (!NearBump)
                    {
                        viewHeight += radius * 4 / 5;
                        NearBump = true;
                    }
                }
            }
            else
            {
                zoom += s;
                if (NearBump)
                {
                    viewHeight -= radius * 4 / 5;
                    NearBump = false;
                }
                if (zoom > max) zoom = max;
            }
        }

        /// <summary>CameraViewHeightAdjust: `rate` unidades por segundo enquanto a tecla esta segurada.</summary>
        public static float ViewHeightHold(float viewHeight, float rate, float dt) => viewHeight + dt * rate;
    }
}
