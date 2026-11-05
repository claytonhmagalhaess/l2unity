// Conversao entre coordenadas do L2 (unidades do Unreal, z para cima) e da cena do Unity.
// No three.js o l2web usava three = (x, z, y) * 0.01, a mesma convencao das malhas exportadas pelo l2anim (glTF).
// O glTFast converte glTF (mao direita) para Unity (mao esquerda) negando X, entao, para mundo e modelos ficarem
// coerentes entre si: unity = (-x, z, y) * 0.01. Como o Unreal tambem e de mao esquerda, nao ha espelhamento.
using UnityEngine;

namespace L2Web.World
{
    public static class Coords
    {
        public const float Scale = 0.01f;

        public static Vector3 ToUnity(float x, float y, float z) => new Vector3(-x * Scale, z * Scale, y * Scale);

        public static Vector3 ToUnity(double x, double y, double z) => ToUnity((float)x, (float)y, (float)z);

        /// <summary>Posicao do Unity para L2 (arredondada, como o fromThree do cliente web).</summary>
        public static Vector3Int FromUnity(Vector3 v) =>
            new Vector3Int(Mathf.RoundToInt(-v.x / Scale), Mathf.RoundToInt(v.z / Scale), Mathf.RoundToInt(v.y / Scale));

        /// <summary>Posicao do Unity para L2 sem arredondar.</summary>
        public static Vector3 FromUnityF(Vector3 v) => new Vector3(-v.x / Scale, v.z / Scale, v.y / Scale);

        /// <summary>
        /// Vetor/posicao do espaco do three.js do cliente web (three = (x, z, y) * 0.01) para o Unity: nega X.
        /// Use ao portar contas que o TypeScript fazia direto em coordenadas do three.
        /// </summary>
        public static Vector3 ThreeToUnity(Vector3 v) => new Vector3(-v.x, v.y, v.z);

        /// <summary>
        /// rotation.y do three (radianos) para o angulo Y de Euler do Unity (graus). Negar X inverte o sentido do giro
        /// em torno de Y: three Ry(t) = Unity Ry(-t).
        /// </summary>
        public static float ThreeYawToUnityDeg(float threeYawRad) => -threeYawRad * Mathf.Rad2Deg;

        /// <summary>Heading do L2 (0..65535, a partir de +X em direcao a +Y) para rotacao Y do three (radianos).</summary>
        public static float HeadingToYaw(int heading) => -((heading & 0xffff) / 65536f) * Mathf.PI * 2f;

        public static float HeadingToYaw(float heading) => HeadingToYaw(Mathf.RoundToInt(heading));

        /// <summary>Heading do L2 para o angulo Y de Euler do Unity (graus): Quaternion.Euler(0, isto, 0).</summary>
        public static float HeadingToUnityDeg(float heading) => (((int)Mathf.Round(heading)) & 0xffff) / 65536f * 360f;

        public static int HeadingFrom(float dx, float dy)
        {
            var a = Mathf.Atan2(dy, dx);
            if (a < 0) a += Mathf.PI * 2f;
            return Mathf.RoundToInt(a / (Mathf.PI * 2f) * 65536f) & 0xffff;
        }

        /// <summary>Tile do mapa (maps/X_Y.unr) que contem a coordenada.</summary>
        public static (int tx, int ty) MapTile(float x, float y) => (Mathf.FloorToInt(x / 32768f) + 20, Mathf.FloorToInt(y / 32768f) + 18);
    }
}
