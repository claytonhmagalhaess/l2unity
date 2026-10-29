// Gerenciador de ambiente, o UL2NEnvManager do Engine.dll (spec 08 secoes 2 a 4 e 7; pseudocodigo em
// l2anim/out/re/decomp_all/engine). Sem Unity alem de Color32/Vector3: os EnvParityTests comparam com o env_golden.json.
//  - relogio: SetNTime (0x10309f07) guarda h:m:s e a base appSecondsQPC; UpdateNTime (0x1030fab0) recompoe t a partir da
//    base + decorrido x razao, com transporte 60 s -> 1 min, 60 min -> 1 h, hora mod 24; fase 0 = [6,8) 1 = [8,22)
//    2 = [22,24) 3 = resto; sombras marcadas quando |t - ultima| > ShadowTick;
//  - curvas (UL2NTimeLight): cor round-para-o-par, escala linear, HSV plano x brilho/255; fora do intervalo nao escreve;
//  - ambientes (ChangeEnv 0x10303229, CalcEnvDelta 0x10303b20, GetEnvColor 0x1030dcce): base = ambiente 0, anterior e
//    atual misturados por peso do anterior e delta;
//  - sol/lua (GetSunLightDirection 0x103120f3) e nivel de neblina (NWindow FUN_10147060).
using System;
using UnityEngine;

namespace L2Web.Render.Env
{
    public sealed class L2Env
    {
        public readonly L2EnvData Data;
        readonly Func<double> now;

        // relogio (+0x120 hora, +0x124 minuto, +0x128 segundo, +0x12c razao, +0x134 t, +0x13c base, +0x144 ativo)
        int hour, minute;
        float second;
        double baseSec;
        public int TimeRatio = 1;
        public bool ClockActive;
        /// <summary>Hora continua t (+0x134), em horas.</summary>
        public double T { get; private set; }
        /// <summary>Fase (+0x130): 0 = [6,8), 1 = [8,22), 2 = [22,24), 3 = [0,6).</summary>
        public int Phase { get; private set; } = 3;
        /// <summary>+0x168: as sombras do terreno precisam ser refeitas (ShadowTick ou ClientSetTime).</summary>
        public bool ShadowDirty;
        float shadowLastT;

        // ambientes (+0x1dc anterior, +0x1dd atual, +0x1c8 inicio, +0x1d0 pico, +0x1cc fim, +0x1d8 peso anterior, +0x1d4 alvo, +0x1e0 delta)
        public int CurrentEnv { get; private set; }
        public int PreviousEnv { get; private set; }
        float envStart, envPeak, envEnd, weightPrev = 1, weightTarget = 1;
        public float Delta { get; private set; } = 1;
        int scheduledEnv, scheduledPrev;
        float scheduledTimer;

        public L2Env(L2EnvData data, Func<double> secondsNow = null)
        {
            Data = data;
            now = secondsNow ?? (() => Time.realtimeSinceStartupAsDouble);
            // construtor: 06:00, razao 1; Load: EnvSetup.IsClock / TimeRatio / StartTime
            hour = 6;
            TimeRatio = 1;
            TimeRatio = (int)data.TimeRatio;
            ClockActive = data.IsClock;
            SetNTime((int)data.StartTime, 0, 0);
            shadowLastT = (float)T;
        }

        // ------------------------------------------------------------ relogio

        /// <summary>UL2NEnvManager::SetNTime: h:m:s, t = round(s)/3600 + m/60 + h e a base do relogio em agora.</summary>
        public void SetNTime(int h, int m, float s)
        {
            hour = h & 0xff;
            minute = m & 0xff;
            second = s;
            var rs = (float)Math.Round(s, MidpointRounding.ToEven);
            T = rs * 0.00027777778f + minute * 0.016666668f + hour;
            baseSec = now();
            UpdatePhase();
        }

        /// <summary>
        /// UGameEngine::OnClientSetTime (0x10309034): d = minutos do dia -> SetNTime(d/60, d%60, 0); d2 = razao (relogio
        /// ativo se != 0); marca as sombras e recalcula a fase.
        /// </summary>
        public void OnClientSetTime(int minutes, int ratio)
        {
            SetNTime(minutes / 60, minutes % 60, 0);
            ClockActive = ratio != 0;
            TimeRatio = ratio;
            ShadowDirty = true;
            UpdatePhase();
        }

        /// <summary>
        /// UpdateNTime: com o relogio ativo, t = base + decorrido x razao (h:m:s locais com transporte; a base nao muda),
        /// fase, sombras (ShadowTick), volta agendada de ambiente, fim da transicao e delta.
        /// </summary>
        public void UpdateNTime(float dt)
        {
            if (ClockActive)
            {
                var e = (float)((now() - baseSec) * TimeRatio);
                var secs = (int)e;
                var h = (secs / 3600 & 0xff) + hour;
                var m = (secs / 60 % 60 & 0xff) + minute;
                var s = e - secs / 60 * 60 + second;
                if (s >= 60f)
                {
                    m++;
                    s = 60f;
                }
                if (m > 59)
                {
                    h++;
                    m -= 60;
                }
                if (h > 23) h %= 24;
                T = s * 0.00027777778f + m * 0.016666668f + h;
            }
            UpdatePhase();
            if (Data.ShadowTick <= 0 || Math.Abs((float)T - shadowLastT) <= Data.ShadowTick) ShadowDirty = false;
            else
            {
                ShadowDirty = true;
                shadowLastT = (float)T;
            }
            if (CurrentEnv != scheduledEnv)
            {
                scheduledTimer -= dt;
                if (scheduledTimer < 0) ChangeEnv(scheduledEnv, 0, 0.002f, 0.002f, 1, 0, 0);
            }
            if (PreviousEnv != CurrentEnv)
            {
                ShadowDirty = true;
                if (envEnd <= (float)T)
                {
                    PreviousEnv = CurrentEnv;
                    weightPrev = weightTarget;
                    scheduledPrev = scheduledEnv;
                }
            }
            Delta = CalcEnvDelta((float)T);
        }

        void UpdatePhase() => Phase = PhaseOf(T);

        public static int PhaseOf(double t) => t >= 6 && t < 8 ? 0 : t >= 8 && t < 22 ? 1 : t >= 22 && t < 24 ? 2 : 3;

        public bool IsDay => T >= 6 && T <= 24;
        /// <summary>IsSoundDay: falso so em 0,001 &lt; t &lt; 5,999.</summary>
        public bool IsSoundDay => !(T > 0.001 && T < 5.999);
        /// <summary>IsSoundNight: falso em 6,001 &lt;= t &lt;= 23,999.</summary>
        public bool IsSoundNight => !(T >= 6.001 && T <= 23.999);
        public int Hour => (int)T;
        public int Minute => (int)((T - Math.Floor(T)) * 60);

        // ------------------------------------------------------------ ambientes

        /// <summary>SSQInfo (0xF8, cc): bytes (env, modo) -> ChangeEnv(env, modo, 0,02, 0,02, 1, 0, 1). O aCis manda 256..259.</summary>
        public void OnSSQInfo(int env, int mode) => ChangeEnv(env & 0xff, mode & 0xff, 0.02f, 0.02f, 1, 0, 1);

        /// <summary>
        /// ChangeEnv: modo 1 = imediato (anterior = atual = env; inicio = pico = fim = t; pesos 1). Senao gradual: fim = t + a,
        /// pico = t + b, peso alvo = w (env 0: pico = fim, alvo 1), temporizador da volta = timer.
        /// </summary>
        public void ChangeEnv(int env, int mode, float a, float b, float w, float timer, int schedule)
        {
            var t = (float)T;
            if (mode == 1)
            {
                PreviousEnv = CurrentEnv = env;
                envStart = envPeak = envEnd = t;
                weightTarget = weightPrev = 1;
                if (schedule != 0) scheduledEnv = scheduledPrev = env;
                Delta = 1;
                return;
            }
            var end = a + t;
            if (b < 0 || end < b) return;
            if (w < 0 || w > 1) return;
            if (!Data.Envs.ContainsKey(env)) return;
            envStart = t;
            envEnd = end;
            envPeak = b + t;
            if (schedule != 0)
            {
                scheduledPrev = CurrentEnv;
                scheduledEnv = env;
            }
            scheduledTimer = timer;
            PreviousEnv = CurrentEnv;
            weightPrev = weightTarget;
            CurrentEnv = env;
            if (env == 0)
            {
                envPeak = end;
                w = 1;
            }
            weightTarget = w;
        }

        /// <summary>CalcEnvDelta: fora de [inicio, fim] = peso alvo; sobe linear ate o pico; 1 no pico; depois desce.</summary>
        public float CalcEnvDelta(float t)
        {
            float start = envStart, end = envEnd;
            if (t < start || end < t) return weightTarget;
            if (end < start) end += 24;
            if (t < start) t += 24;
            if (t < envPeak) return (t - start) / (envPeak - start);
            if (envPeak == t) return 1;
            if (weightTarget != 1) return 1 - (t - envPeak) / ((weightTarget / (1 - weightTarget) + 1) * (end - envPeak));
            return 1;
        }

        /// <summary>Um canal do GetEnvColor: base, anterior e atual (0..255) na hora t.</summary>
        public int MixChannel(int baseC, int prevC, int curC, float t)
        {
            if (CurrentEnv != PreviousEnv)
            {
                if (t < envPeak)
                {
                    var b2 = RoundEven((curC == prevC ? prevC : prevC) - baseC == 0 ? baseC : (prevC - baseC) * weightPrev + baseC) & 0xff;
                    return RoundEven((curC - b2) * Delta + b2) & 0xff;
                }
                return RoundEven((curC - baseC) * Delta + baseC) & 0xff;
            }
            if (CurrentEnv == 0) return baseC;
            return RoundEven((curC - baseC) * Delta + baseC) & 0xff;
        }

        public static int RoundEven(double v) => (int)Math.Round(v, MidpointRounding.ToEven);

        // ------------------------------------------------------------ curvas (UL2NTimeLight)

        // as contas sao em double, como o env_golden.py (o x87 do original trabalha em 80 bits; nos casos de meio-ponto
        // exatos, ex. SunColor G = 205,5 as 16,5 h, o resultado depende da precisao do FPU em tempo de execucao [I])
        static bool Segment(float[] ts, double t, out int i, out double f)
        {
            for (i = 0; i + 1 < ts.Length; i++)
                if (ts[i] <= t && t < ts[i + 1])
                {
                    f = (t - ts[i]) / (ts[i + 1] - ts[i]);
                    return true;
                }
            i = -1;
            f = 0;
            return false;
        }

        /// <summary>GetColor (0x1030befb): round para o par por canal; null fora do intervalo (o chamador nao escreve).</summary>
        public static Color32? CurveColor(ColorKey[] keys, double t)
        {
            if (keys == null || keys.Length < 2) return null;
            var ts = new float[keys.Length];
            for (var k = 0; k < keys.Length; k++) ts[k] = keys[k].T;
            if (!Segment(ts, t, out var i, out var f)) return null;
            ColorKey a = keys[i], b = keys[i + 1];
            return new Color32((byte)RoundEven(a.R + f * (b.R - a.R)), (byte)RoundEven(a.G + f * (b.G - a.G)), (byte)RoundEven(a.B + f * (b.B - a.B)), 255);
        }

        /// <summary>GetScale (0x10305ee3): linear, sem arredondar; null fora do intervalo.</summary>
        public static float? CurveScale(ScaleKey[] keys, double t)
        {
            if (keys == null || keys.Length < 2) return null;
            var ts = new float[keys.Length];
            for (var k = 0; k < keys.Length; k++) ts[k] = keys[k].T;
            if (!Segment(ts, t, out var i, out var f)) return null;
            return (float)(keys[i].S + f * (keys[i + 1].S - keys[i].S));
        }

        /// <summary>
        /// GetColorPlane (0x103090b1) e GetBrightness (0x1030aecf): plano = lerp(FGetHSV(H0,S0,255), FGetHSV(H1,S1,255), f) x
        /// lerp(Bri)/255 (o W = 1 tambem multiplica); brilho = lerp(Bri). Fora do intervalo: (0,0,0,0) e 0.
        /// </summary>
        public static (Vector4 plane, float bri) CurveHsv(HsvKey[] keys, double t)
        {
            if (keys == null || keys.Length < 2) return (Vector4.zero, 0);
            var ts = new float[keys.Length];
            for (var k = 0; k < keys.Length; k++) ts[k] = keys[k].T;
            if (!Segment(ts, t, out var i, out var f)) return (Vector4.zero, 0);
            HsvKey a = keys[i], b = keys[i + 1];
            var pa = UeLight.Hsv(a.Hue, a.Sat, 255);
            var pb = UeLight.Hsv(b.Hue, b.Sat, 255);
            var bri = a.Bri + f * (b.Bri - a.Bri);
            var k2 = bri / 255.0;
            return (new Vector4((float)((pa.r + f * (pb.r - pa.r)) * k2), (float)((pa.g + f * (pb.g - pa.g)) * k2), (float)((pa.b + f * (pb.b - pa.b)) * k2), (float)k2), (float)bri);
        }

        TimeEnv EnvOf(int n) => Data.Envs.TryGetValue(n, out var e) ? e : null;

        /// <summary>Cor de uma curva num ambiente (ou (0,0,0) quando a curva nao escreve).</summary>
        public Color32 EnvCurveColor(int env, string section, double t)
        {
            var e = EnvOf(env);
            return e != null && e.Colors.TryGetValue(section, out var k) && CurveColor(k, t) is { } c ? c : new Color32(0, 0, 0, 255);
        }

        /// <summary>GetEnvColor: base (ambiente 0), anterior e atual na hora t, misturados.</summary>
        public Color32 GetEnvColor(string section, double t)
        {
            var b = EnvCurveColor(0, section, t);
            var p = EnvCurveColor(PreviousEnv, section, t);
            var c = EnvCurveColor(CurrentEnv, section, t);
            return new Color32((byte)MixChannel(b.r, p.r, c.r, (float)t), (byte)MixChannel(b.g, p.g, c.g, (float)t), (byte)MixChannel(b.b, p.b, c.b, (float)t), 255);
        }

        public Color32 GetEnvColor(string section) => GetEnvColor(section, T);

        /// <summary>GetSunScale/GetMoonScale: linear entre a escala do anterior (no inicio) e a do atual (no fim) na transicao.</summary>
        public float GetEnvScale(string section, double t)
        {
            float Of(int env) => EnvOf(env) != null && EnvOf(env).Scales.TryGetValue(section, out var k) && CurveScale(k, t) is { } s ? s : 0;
            if (CurrentEnv == PreviousEnv) return Of(CurrentEnv);
            var span = envEnd - envStart;
            var f = span > 0 ? Mathf.Clamp01(((float)t - envStart) / span) : 1;
            return Of(PreviousEnv) + (Of(CurrentEnv) - Of(PreviousEnv)) * f;
        }

        /// <summary>GetEnvColorPlane / GetEnvBrightness: a mesma mistura do GetEnvColor, por componente, sem arredondar.</summary>
        public (Vector4 plane, float bri) GetEnvHsv(string section, double t)
        {
            (Vector4, float) Of(int env) => EnvOf(env) != null && EnvOf(env).Hsvs.TryGetValue(section, out var k) ? CurveHsv(k, t) : (Vector4.zero, 0);
            var (bp, bb) = Of(0);
            if (CurrentEnv == PreviousEnv && CurrentEnv == 0) return (bp, bb);
            var (pp, pb) = Of(PreviousEnv);
            var (cp, cb) = Of(CurrentEnv);
            if (CurrentEnv != PreviousEnv && t < envPeak)
            {
                bp += (pp - bp) * weightPrev;
                bb += (pb - bb) * weightPrev;
            }
            return (bp + (cp - bp) * Delta, bb + (cb - bb) * Delta);
        }

        public Vector4 GetEnvPlane(string section) => GetEnvHsv(section, T).plane;

        // ------------------------------------------------------------ sol e lua

        /// <summary>GetSunModifierInfo: theta em radianos; 5 &lt;= t &lt; 24: (t-6) 10 - 90; t &lt; 1: (t+18) 10 - 90; senao -180.</summary>
        public static double SunTheta(double t)
        {
            if (t >= 5 && t < 24) return (t - 6) * Mathf.Deg2Rad * 10 - Math.PI / 2;
            if (t < 1) return (t + 24 - 6) * Mathf.Deg2Rad * 10 - Math.PI / 2;
            return -Math.PI;
        }

        /// <summary>GetMoonModifierInfo: 7 &lt;= t &lt;= 23 -> -180 (escondida); senao t 30 - 90.</summary>
        public static double MoonTheta(double t) => t >= 7 && t <= 23 ? -Math.PI : t * Mathf.Deg2Rad * 30 - Math.PI / 2;

        /// <summary>
        /// GetSunLightDirection (0x103120f3): lua se t &lt; 6 ou t &gt;= 24, senao sol; v = (sin th cos ph, sin th sin ph, cos th),
        /// ph = 180; gira SlopeSunAngle (truncado para unidades Unreal: 30 -> 5461) em torno de (1,0,0); normaliza. UE (x, y, z).
        /// </summary>
        public static Vector3 SunLightDirection(double t, float slopeDeg, float azimuthDeg = 180)
        {
            var th = t >= 6 && t < 24 ? SunTheta(t) : MoonTheta(t);
            var ph = azimuthDeg * Math.PI / 180;
            double x = Math.Sin(th) * Math.Cos(ph), y = Math.Sin(th) * Math.Sin(ph), z = Math.Cos(th);
            var ang = ((int)slopeDeg * 0x8000 / 180 & 0xFFFF) * Math.PI / 32768.0;
            double c = Math.Cos(ang), s = Math.Sin(ang);
            double y2 = y * c - z * s, z2 = y * s + z * c;
            var n = Math.Sqrt(x * x + y2 * y2 + z2 * z2);
            return new Vector3((float)(x / n), (float)(y2 / n), (float)(z2 / n));
        }

        public Vector3 SunLightDirection() => SunLightDirection(T, Data.SlopeSunAngle);

        /// <summary>ANMoon::Tick: a direcao da lua (GetMoonModifierInfo) com a mesma inclinacao e azimute.</summary>
        public static Vector3 MoonDirection(double t, float slopeDeg, float azimuthDeg = 180)
        {
            var th = MoonTheta(t);
            var ph = azimuthDeg * Math.PI / 180;
            double x = Math.Sin(th) * Math.Cos(ph), y = Math.Sin(th) * Math.Sin(ph), z = Math.Cos(th);
            var ang = ((int)slopeDeg * 0x8000 / 180 & 0xFFFF) * Math.PI / 32768.0;
            double c = Math.Cos(ang), s = Math.Sin(ang);
            double y2 = y * c - z * s, z2 = y * s + z * c;
            var n = Math.Sqrt(x * x + y2 * y2 + z2 * z2);
            return new Vector3((float)(x / n), (float)(y2 / n), (float)(z2 / n));
        }

        // ------------------------------------------------------------ sombras do terreno (secao 6)

        /// <summary>ATerrainInfo::SetTimeForIndex: hora[i] = 24 i / N + 12 / N (N = 8: 1,5; 4,5; ...; 22,5).</summary>
        public static float ShadowMapHour(int i, int n) => 24f * i / n + 12f / n;

        /// <summary>
        /// GetShadowMapIndex (0x10313e71) + UpdateShadow (0x1030360c): i com hora[i] &lt;= t &lt; hora[i+1] (senao N-1), mistura com
        /// (i+1) mod N e fracao atravessando a meia-noite somando 24.
        /// </summary>
        public static (int i0, int i1, float f) ShadowMapIndex(double t, int n)
        {
            t = ((t % 24) + 24) % 24;
            var i0 = n - 1;
            for (var i = 0; i + 1 < n; i++)
                if (ShadowMapHour(i, n) <= t && t < ShadowMapHour(i + 1, n))
                {
                    i0 = i;
                    break;
                }
            var i1 = (i0 + 1) % n;
            double h0 = ShadowMapHour(i0, n), h1 = ShadowMapHour(i1, n);
            if (t < h0) t += 24;
            if (h1 <= h0) h1 += 24;
            return (i0, i1, (float)((t - h0) / (h1 - h0)));
        }

        /// <summary>InterpolateGlobalIntensityMap (0x1031311a): round(a (1 - f) + b f) por texel.</summary>
        public static int BlendIntensity(int a, int b, float f) => RoundEven(a * (1 - f) + b * f);

        // ------------------------------------------------------------ neblina

        /// <summary>NWindow FUN_10147060: nivel 1..5 pelo alcance de terreno (&lt;5 ou IsKeepMinFrameRate: 1; [5,6) 2; [6,7) 3; [7,8) 4; &gt;= 8: 5).</summary>
        public static int FogLevel(float terrainClippingRange, bool keepMinFrameRate)
        {
            if (keepMinFrameRate || terrainClippingRange < 5) return 1;
            if (terrainClippingRange < 6) return 2;
            if (terrainClippingRange < 7) return 3;
            if (terrainClippingRange < 8) return 4;
            return 5;
        }

        /// <summary>GL2FogStart/GL2FogEnd em unidades do mundo: Start/EndRange x 32768 x 0,0625 = x 2048.</summary>
        public (float start, float end) FogRangeUu(int level)
        {
            var i = Mathf.Clamp(level, 1, 5) - 1;
            return (Data.FogStart[i] * 2048, Data.FogEnd[i] * 2048);
        }
    }
}
