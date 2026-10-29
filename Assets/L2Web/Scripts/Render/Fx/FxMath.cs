// Matematica do sistema de particulas do UE2/L2 (spec 09 §4.0): sorteios, faixas, rotators em unidades do Unreal
// (65536 = 360 graus) e os utilitarios do Core.dll que o pseudocodigo usa. Tudo em espaco do Unreal (x, y, z UE).
//  - appFrand = rand()/32767 (Core 0x1010381e), intervalo [0,1] fechado [O];
//  - FRange::GetRand = Max + (Min - Max)*frand (Core 0x1010212b) [O];
//  - FRangeVector::GetRand sorteia Z, depois Y, depois X (Core 0x10103e86) [O];
//  - VRand: v = (1-2f, 1-2f, 1-2f) ate 0.1 <= |v| <= 1, normalizado (0x10603960) [O];
//  - _ftol trunca; fmod; appFractional = x - floor(x); fistp arredonda para o par (round-half-even) [O].
// O gerador e o rand() do MSVC (LCG 214013/2531011, 15 bits): mesma distribuicao do cliente; a sequencia em si nao e
// reproduzivel (semente do processo) [I].
using System;
using UnityEngine;

namespace L2Web.Render.Fx
{
    /// <summary>rand() do MSVC (15 bits) com appFrand = rand()/32767.</summary>
    public class FxRand
    {
        uint seed;

        public FxRand(int seed) { this.seed = (uint)seed; }

        public int Rand()
        {
            seed = seed * 214013u + 2531011u;
            return (int)((seed >> 16) & 0x7fff);
        }

        /// <summary>appFrand: [0, 1] fechado.</summary>
        public virtual float Frand() => (float)(Rand() / 32767.0);
    }

    [Serializable]
    public struct FRange
    {
        public float Min, Max;

        public FRange(float min, float max) { Min = min; Max = max; }
        public static FRange Of(float v) => new FRange(v, v);

        /// <summary>FRange::GetRand = Max + (Min - Max)*frand [O].</summary>
        public float GetRand(FxRand r) => Max + (Min - Max) * r.Frand();

        /// <summary>FRange::GetCenter = (Min + Max)*0.5 [O].</summary>
        public float Center => (Min + Max) * 0.5f;
        public float Size => Max - Min;
        public bool IsZero => Min == 0 && Max == 0;

        public static FRange operator *(FRange a, float k) => new FRange(a.Min * k, a.Max * k);
        public static FRange operator /(FRange a, float k) => new FRange(a.Min / k, a.Max / k);
        public static FRange operator +(FRange a, float k) => new FRange(a.Min + k, a.Max + k);
        public override string ToString() => $"[{Min}..{Max}]";
    }

    [Serializable]
    public struct FRangeVector
    {
        public FRange X, Y, Z;

        public FRangeVector(FRange x, FRange y, FRange z) { X = x; Y = y; Z = z; }
        public static FRangeVector Of(float v) => new FRangeVector(FRange.Of(v), FRange.Of(v), FRange.Of(v));
        public static FRangeVector Of(Vector3 v) => new FRangeVector(FRange.Of(v.x), FRange.Of(v.y), FRange.Of(v.z));

        /// <summary>FRangeVector::GetRand: sorteia Z, depois Y, depois X [O].</summary>
        public Vector3 GetRand(FxRand r)
        {
            var z = Z.GetRand(r);
            var y = Y.GetRand(r);
            var x = X.GetRand(r);
            return new Vector3(x, y, z);
        }

        public bool IsZero => X.IsZero && Y.IsZero && Z.IsZero;
        public static FRangeVector operator *(FRangeVector a, float k) => new FRangeVector(a.X * k, a.Y * k, a.Z * k);
        public static FRangeVector operator /(FRangeVector a, float k) => new FRangeVector(a.X / k, a.Y / k, a.Z / k);
    }

    /// <summary>FRotator do UE (Pitch, Yaw, Roll em unidades de 65536 por volta).</summary>
    [Serializable]
    public struct FRotator
    {
        public int Pitch, Yaw, Roll;

        public FRotator(int pitch, int yaw, int roll) { Pitch = pitch; Yaw = yaw; Roll = roll; }
        public static readonly FRotator Zero = new FRotator(0, 0, 0);
        public bool IsZero => Pitch == 0 && Yaw == 0 && Roll == 0;
        public static FRotator operator +(FRotator a, FRotator b) => new FRotator(a.Pitch + b.Pitch, a.Yaw + b.Yaw, a.Roll + b.Roll);
        public static FRotator operator -(FRotator a, FRotator b) => new FRotator(a.Pitch - b.Pitch, a.Yaw - b.Yaw, a.Roll - b.Roll);
        public static FRotator operator *(FRotator a, float k) => new FRotator(FxMath.Ftol(a.Pitch * k), FxMath.Ftol(a.Yaw * k), FxMath.Ftol(a.Roll * k));
        public static bool operator ==(FRotator a, FRotator b) => a.Pitch == b.Pitch && a.Yaw == b.Yaw && a.Roll == b.Roll;
        public static bool operator !=(FRotator a, FRotator b) => !(a == b);
        public override bool Equals(object o) => o is FRotator r && r == this;
        public override int GetHashCode() => Pitch ^ (Yaw << 10) ^ (Roll << 20);
        public override string ToString() => $"({Pitch},{Yaw},{Roll})";

        /// <summary>Vetor unitario para a frente (eixo X girado).</summary>
        public Vector3 Forward => FxMath.RotateVector(new Vector3(1, 0, 0), this);
    }

    public static class FxMath
    {
        public const float UnitsPerTurn = 65536f;
        public const float UnitToRad = Mathf.PI * 2f / 65536f;

        /// <summary>_ftol: truncamento em direcao a zero [O].</summary>
        public static int Ftol(float x) => (int)x;
        public static int Ftol(double x) => (int)x;

        /// <summary>appFractional = x - floor(x).</summary>
        public static float Frac(float x) => x - Mathf.Floor(x);

        /// <summary>fmod do C (sinal do dividendo).</summary>
        public static float Fmod(float x, float y) => y == 0 ? 0 : (float)(x - y * Math.Truncate(x / y));

        /// <summary>fistp: arredonda para o inteiro mais proximo, empate para o par [O].</summary>
        public static int RoundHalfEven(float x) => (int)Math.Round(x, MidpointRounding.ToEven);
        public static int RoundHalfEven(double x) => (int)Math.Round(x, MidpointRounding.ToEven);

        public static float Clamp(float x, float a, float b) => x < a ? a : x > b ? b : x;
        public static int Clamp(int x, int a, int b) => x < a ? a : x > b ? b : x;

        public static byte ClampByte(float v) => (byte)(v < 0 ? 0 : v > 255 ? 255 : RoundHalfEven(v));

        /// <summary>Normaliza ou devolve zero (FVector::SafeNormal).</summary>
        public static Vector3 SafeNormal(Vector3 v)
        {
            var s = v.sqrMagnitude;
            if (s < 1e-8f) return Vector3.zero;
            return v / Mathf.Sqrt(s);
        }

        /// <summary>Produto componente a componente.</summary>
        public static Vector3 Mul(Vector3 a, Vector3 b) => new Vector3(a.x * b.x, a.y * b.y, a.z * b.z);

        /// <summary>VRand: direcao uniforme na esfera (0x10603960) [O].</summary>
        public static Vector3 VRand(FxRand r)
        {
            Vector3 v;
            float l;
            do
            {
                v = new Vector3(1 - 2 * r.Frand(), 1 - 2 * r.Frand(), 1 - 2 * r.Frand());
                l = v.sqrMagnitude;
            } while (l > 1 || l < 0.01f);
            return v / Mathf.Sqrt(l);
        }

        /// <summary>FRotationMatrix do UE: colunas = eixos X, Y, Z girados (vetor-coluna).</summary>
        public static Matrix4x4 RotationMatrix(FRotator rot)
        {
            float sp = Mathf.Sin(rot.Pitch * UnitToRad), cp = Mathf.Cos(rot.Pitch * UnitToRad);
            float sy = Mathf.Sin(rot.Yaw * UnitToRad), cy = Mathf.Cos(rot.Yaw * UnitToRad);
            float sr = Mathf.Sin(rot.Roll * UnitToRad), cr = Mathf.Cos(rot.Roll * UnitToRad);
            var m = Matrix4x4.identity;
            m.SetColumn(0, new Vector4(cp * cy, cp * sy, sp, 0));
            m.SetColumn(1, new Vector4(sr * sp * cy - cr * sy, sr * sp * sy + cr * cy, -sr * cp, 0));
            m.SetColumn(2, new Vector4(-(cr * sp * cy + sr * sy), cy * sr - cr * sp * sy, cr * cp, 0));
            return m;
        }

        /// <summary>v girado por rot (TransformVectorBy(GMath.UnitCoords / rot) = v * FRotationMatrix).</summary>
        public static Vector3 RotateVector(Vector3 v, FRotator rot) => RotationMatrix(rot).MultiplyVector(v);

        /// <summary>Inverso: do mundo para o quadro do rotator (FCoords * rot: transposta).</summary>
        public static Vector3 UnrotateVector(Vector3 v, FRotator rot) => RotationMatrix(rot).transpose.MultiplyVector(v);

        /// <summary>FVector::Rotation: Yaw = atan2(y, x), Pitch = atan2(z, |xy|), Roll 0, em unidades do UE [O: UE2].</summary>
        public static FRotator VectorToRotator(Vector3 v)
        {
            var yaw = Mathf.Atan2(v.y, v.x) * 32768f / Mathf.PI;
            var pitch = Mathf.Atan2(v.z, Mathf.Sqrt(v.x * v.x + v.y * v.y)) * 32768f / Mathf.PI;
            return new FRotator(RoundHalfEven(pitch) & 0xffff, RoundHalfEven(yaw) & 0xffff, 0);
        }

        /// <summary>FMatrix::Rotator do UE: Pitch/Yaw pelo eixo X, Roll pelo Y/Z projetados (eixos em UE, vetor-coluna).</summary>
        public static FRotator AxesToRotator(Vector3 x, Vector3 y, Vector3 z)
        {
            var yaw = Mathf.Atan2(x.y, x.x) * 32768f / Mathf.PI;
            var pitch = Mathf.Atan2(x.z, Mathf.Sqrt(x.x * x.x + x.y * x.y)) * 32768f / Mathf.PI;
            var r = new FRotator(RoundHalfEven(pitch) & 0xffff, RoundHalfEven(yaw) & 0xffff, 0);
            var sy = RotationMatrix(r).GetColumn(1);
            var syAxis = new Vector3(sy.x, sy.y, sy.z);
            var roll = Mathf.Atan2(Vector3.Dot(z, syAxis), Vector3.Dot(y, syAxis)) * 32768f / Mathf.PI;
            r.Roll = RoundHalfEven(roll) & 0xffff;
            return r;
        }

        /// <summary>FVector::RotateAngleAxis(angulo em unidades UE, eixo unitario) [O: UE2, tabelas de seno aproximadas por sin/cos].</summary>
        public static Vector3 RotateAngleAxis(Vector3 v, int angle, Vector3 axis)
        {
            var a = (angle & 0xffff) * UnitToRad;
            float s = Mathf.Sin(a), c = Mathf.Cos(a);
            float xx = axis.x * axis.x, yy = axis.y * axis.y, zz = axis.z * axis.z;
            float xy = axis.x * axis.y, yz = axis.y * axis.z, zx = axis.z * axis.x;
            float xs = axis.x * s, ys = axis.y * s, zs = axis.z * s;
            var omc = 1f - c;
            return new Vector3(
                (omc * xx + c) * v.x + (omc * xy - zs) * v.y + (omc * zx + ys) * v.z,
                (omc * xy + zs) * v.x + (omc * yy + c) * v.y + (omc * yz - xs) * v.z,
                (omc * zx - ys) * v.x + (omc * yz + xs) * v.y + (omc * zz + c) * v.z);
        }

        /// <summary>FVector::MirrorByVector: v - 2 (v . n) n.</summary>
        public static Vector3 MirrorByVector(Vector3 v, Vector3 n) => v - 2f * Vector3.Dot(v, n) * n;

        /// <summary>Um vetor nao paralelo a d (GetNonParallel), para montar uma base ortonormal.</summary>
        public static Vector3 NonParallel(Vector3 d)
        {
            var ax = Mathf.Abs(d.x);
            var ay = Mathf.Abs(d.y);
            var az = Mathf.Abs(d.z);
            return ax <= ay && ax <= az ? new Vector3(1, 0, 0) : ay <= az ? new Vector3(0, 1, 0) : new Vector3(0, 0, 1);
        }

        /// <summary>Angulo de giro de uma particula (§4.4.10): round(spin*t + start) & 0xFFFF; negativo espelha.</summary>
        public static int SpinAngle(float spinsPerSecond, float startSpin, float time)
        {
            if (spinsPerSecond >= 0) return RoundHalfEven(spinsPerSecond * time + startSpin) & 0xffff;
            return 0xffff - (RoundHalfEven(startSpin - spinsPerSecond * time) & 0xffff);
        }

        /// <summary>Rotator de giro do MeshEmitter (§4.5.4): Pitch = Y, Yaw = X, Roll = Z, truncados.</summary>
        public static FRotator SpinRotator(Vector3 spinsPerSecond, Vector3 startSpin, float time) =>
            new FRotator(Ftol(spinsPerSecond.y * time + startSpin.y), Ftol(spinsPerSecond.x * time + startSpin.x), Ftol(spinsPerSecond.z * time + startSpin.z));
    }
}
