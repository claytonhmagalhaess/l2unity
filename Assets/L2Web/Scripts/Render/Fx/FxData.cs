// Dados dos efeitos (spec 09 §1 e §4.0): classes de efeito (subclasses de Emitter) com os defaults do ator e a lista de
// emissores, cada emissor com todas as propriedades do ParticleEmitter e da subclasse (Sprite, Mesh, Beam, Ribbon,
// VertMesh) sobre os defaults do Engine.u (engine_defaults.json). Fonte: out/re/fx/lineageeffect.json (+ LineageKetraEffect,
// Rider_Effect) copiados para StreamingAssets/L2Web/fx; os emissores dos mapas (<tile>_emitters.json) usam o mesmo
// formato de propriedades. Enumeracoes conforme os .uc (engine_src) [O].
using System;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render.Fx
{
    public enum DrawStyle { Regular = 0, AlphaBlend = 1, Modulated = 2, Translucent = 3, AlphaModulate = 4, Darken = 5, Brighten = 6 }
    public enum CoordSystem { Independent = 0, Relative = 1, Absolute = 2, RelativeRotation = 3, Spray = 4 }
    public enum RotationSource { None = 0, Actor = 1, Offset = 2, Normal = 3 }
    public enum VelocityDirection { None = 0, StartPositionAndOwner = 1, OwnerAndStartPosition = 2, AddRadial = 3 }
    public enum LocationShape { Box = 0, Sphere = 1, Polar = 2, All = 3 }
    public enum DirectionUsage { None = 0, Up = 1, Right = 2, Forward = 3, Normal = 4, UpAndNormal = 5, RightAndNormal = 6, Scale = 7 }
    public enum BeamEndPointType { Velocity = 0, Distance = 1, Offset = 2, Actor = 3, TraceOffset = 4, OffsetAsAbsolute = 5 }
    public enum EmitterKind { Sprite, Mesh, Beam, Ribbon, VertMesh, Spark, Trail }

    public struct ColorKey { public double RelativeTime; public Color32 Color; }
    public struct SizeKey { public double RelativeTime; public float RelativeSize; }
    public struct VectorKey { public double RelativeTime; public Vector3 Value; }
    public struct BeamEndPoint { public string ActorTag; public FRangeVector Offset; public float Weight; }
    public struct BeamScale { public Vector3 FrequencyScale; public float RelativeLength; }
    public struct FPlane { public float X, Y, Z, W; }

    /// <summary>UParticleEmitter e subclasses: propriedades (nomes do Engine.u) ja com os defaults da classe.</summary>
    public sealed class EmitterDef
    {
        public string Name = "";
        public string Cls = "SpriteEmitter";
        public EmitterKind Kind = EmitterKind.Sprite;

        // ---- ParticleEmitter (ordem do .uc)
        public Vector3 Acceleration;
        public Vector3 ExtentMultiplier = Vector3.one;
        public bool IndependentSprayAccel;
        public bool UseCollision;
        public FRangeVector DampingFactorRange = FRangeVector.Of(1);
        public bool UseCollisionPlanes;
        public List<FPlane> CollisionPlanes = new();
        public bool UseMaxCollisions;
        public FRange MaxCollisions;
        public int SpawnFromOtherEmitter = -1;
        public int SpawnAmount;
        public bool UseSpawnedVelocityScale;
        public FRangeVector SpawnedVelocityScaleRange;
        public bool UseColorScale;
        public List<ColorKey> ColorScale = new();
        public float ColorScaleRepeats;
        public FRangeVector ColorMultiplierRange = FRangeVector.Of(1);
        public float Opacity = 1;
        public FPlane FadeOutFactor = new FPlane { X = 1, Y = 1, Z = 1, W = 1 };
        public double FadeOutStartTime;
        public bool FadeOut;
        public FPlane FadeInFactor = new FPlane { X = 1, Y = 1, Z = 1, W = 1 };
        public double FadeInEndTime;
        public bool FadeIn;
        public bool UseActorForces;
        public CoordSystem CoordinateSystem = CoordSystem.Relative;
        public int MaxParticles = 10;
        public bool ResetAfterChange;
        public int EffectAxis;
        public int LevelOfWeather = 2;
        public int ParticleChoice;
        public bool WeatherEffect;
        public List<FRange> WeatherRangeTime = new();
        public bool ForcedLifeTime, ForcedFade, ForcedMaxParticles;
        public bool RespawnDeadParticles = true;
        public bool AutoDestroy, AutoReset, Disabled, DisableFogging;
        public FRange AutoResetTimeRange;
        public Vector3 StartLocationOffset;
        public FRangeVector StartLocationRange;
        public int AddLocationFromOtherEmitter = -1;
        public LocationShape StartLocationShape = LocationShape.Box;
        public FRange SphereRadiusRange;
        public FRangeVector StartLocationPolarRange;
        public FRange StartMassRange = FRange.Of(1);
        public string MeshSpawningStaticMesh;
        public int MeshSpawning;
        public Vector3 MeshNormal = new Vector3(0, 0, 1);
        public int AlphaRef;
        public bool AlphaTest = true;
        public bool AcceptsProjectors;
        public bool ZTest = true;
        public bool ZWrite;
        public bool UseRevolution;
        public FRangeVector RevolutionCenterOffsetRange;
        public FRangeVector RevolutionsPerSecondRange;
        public bool UseRevolutionScale;
        public List<VectorKey> RevolutionScale = new();
        public float RevolutionScaleRepeats;
        public RotationSource UseRotationFrom = RotationSource.None;
        public bool SpinParticles;
        public FRotator RotationOffset;
        public Vector3 SpinCCWorCW = new Vector3(0.5f, 0.5f, 0.5f);
        public FRangeVector SpinsPerSecondRange;
        public FRangeVector StartSpinRange;
        public bool DampRotation;
        public FRangeVector RotationDampingFactorRange;
        public Vector3 RotationNormal;
        public bool UseSizeScale;
        public bool UseRegularSizeScale = true;
        public List<SizeKey> SizeScale = new();
        public float SizeScaleRepeats;
        public FRangeVector StartSizeRange = FRangeVector.Of(100);
        public bool UniformSize;
        public float ParticlesPerSecond;
        public float InitialParticlesPerSecond;
        public bool AutomaticInitialSpawning = true;
        public DrawStyle DrawStyle = DrawStyle.Translucent;
        public string Texture;
        public int TextureUSubdivisions, TextureVSubdivisions;
        public bool BlendBetweenSubdivisions, UseSubdivisionScale;
        public List<float> SubdivisionScale = new();
        public int SubdivisionStart, SubdivisionEnd;
        public bool UseRandomSubdivision;
        public float SecondsBeforeInactive;
        public float MinSquaredVelocity;
        public FRange InitialTimeRange;
        public FRange LifetimeRange = FRange.Of(4);
        public FRange InitialDelayRange;
        public bool TriggerDisabled = true;
        public bool ResetOnTrigger;
        public FRange SpawnOnTriggerRange;
        public float SpawnOnTriggerPPS;
        public FRangeVector StartVelocityRange;
        public FRange StartVelocityRadialRange;
        public Vector3 MaxAbsVelocity = new Vector3(10000, 10000, 10000);
        public FRangeVector VelocityLossRange;
        public int AddVelocityFromOtherEmitter = -1;
        public FRangeVector AddVelocityMultiplierRange = FRangeVector.Of(1);
        public VelocityDirection GetVelocityDirectionFrom = VelocityDirection.None;
        public bool UseVelocityScale;
        public List<VectorKey> VelocityScale = new();
        public float VelocityScaleRepeats;
        public float WarmupTicksPerSecond, RelativeWarmupTime;
        public List<string> SpawnSounds = new();

        // ---- SpriteEmitter
        public DirectionUsage UseDirectionAs = DirectionUsage.None;
        public Vector3 ProjectionNormal = new Vector3(0, 0, 1);

        // ---- MeshEmitter / VertMeshEmitter
        public string StaticMesh;
        public string VertexMesh;
        public bool UseMeshBlendMode = true;
        public bool RenderTwoSided;
        public bool UseParticleColor;

        // ---- BeamEmitter
        public FRange BeamDistanceRange;
        public List<BeamEndPoint> BeamEndPoints = new();
        public BeamEndPointType DetermineEndPointBy = BeamEndPointType.Velocity;
        public float BeamTextureUScale = 1, BeamTextureVScale = 1;
        public int RotatingSheets;
        public bool TriggerEndpoint;
        public FRangeVector LowFrequencyNoiseRange;
        public int LowFrequencyPoints = 3;
        public FRangeVector HighFrequencyNoiseRange;
        public int HighFrequencyPoints = 10;
        public List<BeamScale> LFScaleFactors = new();
        public List<BeamScale> HFScaleFactors = new();
        public float LFScaleRepeats, HFScaleRepeats;
        public bool UseHighFrequencyScale, UseLowFrequencyScale, NoiseDeterminesEndPoint;
        public FRangeVector DynamicHFNoiseRange;
        public FRange DynamicHFNoisePointsRange;
        public FRange DynamicTimeBetweenNoiseRange;
        public bool UseBranching;
        public FRange BranchProbability;
        public FRange BranchHFPointsRange;
        public int BranchEmitter = -1;
        public FRange BranchSpawnAmountRange;
        public bool LinkupLifetime;

        // ---- RibbonEmitter
        public float SampleRate = 0.05f;
        public float DecayRate;
        public int NumPoints = 20;
        public int AccDrop;
        public int PointsDropRate;
        public float ThresholdTime;
        public int MinPoints;
        public float ThresholdTime2;
        public float RibbonWidth = 20;
        public int GetPointAxisFrom = 5;
        public Vector3 AxisNormal = new Vector3(0, 0, 1);
        public float MinSampleDist = 1;
        public float MinSampleDot = 0.995f;
        public float PointOriginOffset = 0.5f;
        public float RibbonTextureUScale = 1, RibbonTextureVScale = 1;
        public int NumSheets;
        public Vector3 StartBoneOffset, EndBoneOffset;
        public string BoneNameStart, BoneNameEnd;
        public bool bUseInterpolation;
        public int CntrPoints = 5;
        public float ScaleRatio = 3;
        public bool bSamplePoints = true, bDecayPoints = true, bDecayPointsWhenStopped, bSyncDecayWhenKilled, bLengthBasedTextureU, bUseSheetScale, bUseBones, bUseBoneDistance;

        public EmitterDef Clone()
        {
            var c = (EmitterDef)MemberwiseClone();
            // as tabelas sao lidas, nunca escritas pela simulacao; so a lista de pontos de feixe e por instancia
            c.BeamEndPoints = new List<BeamEndPoint>(BeamEndPoints);
            return c;
        }

        /// <summary>Valores de referencia da classe (engine_defaults.json) aplicados sobre os defaults do campo.</summary>
        public static EmitterDef ForClass(string cls, JObject engineDefaults)
        {
            var d = new EmitterDef { Cls = cls, Kind = KindOf(cls) };
            if (engineDefaults != null)
            {
                d.Apply(engineDefaults["ParticleEmitter"]?["defaults"] as JObject);
                d.Apply(engineDefaults[cls]?["defaults"] as JObject);
            }
            return d;
        }

        public static EmitterKind KindOf(string cls) => cls switch
        {
            "MeshEmitter" => EmitterKind.Mesh,
            "BeamEmitter" => EmitterKind.Beam,
            "RibbonEmitter" => EmitterKind.Ribbon,
            "VertMeshEmitter" => EmitterKind.VertMesh,
            "SparkEmitter" => EmitterKind.Spark,
            "TrailEmitter" => EmitterKind.Trail,
            _ => EmitterKind.Sprite,
        };

        // ------------------------------------------------------------------ leitura do json

        public void Apply(JObject props)
        {
            if (props == null) return;
            foreach (var kv in props) Set(kv.Key, kv.Value);
        }

        static double Dbl(JToken t) => t == null || t.Type == JTokenType.Null ? 0 : (double)t;
        static float F(JToken t, float def = 0) => t == null || t.Type == JTokenType.Null ? def : t.Type == JTokenType.String ? (float.TryParse((string)t, System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out var v) ? v : def) : (float)t;
        static int I(JToken t, int def = 0) => t == null || t.Type == JTokenType.Null ? def : t.Type == JTokenType.Boolean ? ((bool)t ? 1 : 0) : (int)F(t, def);
        static bool B(JToken t) => t != null && t.Type != JTokenType.Null && (t.Type == JTokenType.Boolean ? (bool)t : F(t) != 0);
        static string S(JToken t) => t == null || t.Type == JTokenType.Null ? null : t.Type == JTokenType.String ? (string)t : t.ToString();

        public static FRange Range(JToken t)
        {
            if (t == null || t.Type == JTokenType.Null) return default;
            if (t is JObject o) return new FRange(F(o["Min"]), F(o["Max"]));
            var v = F(t);
            return new FRange(v, v);
        }

        public static FRangeVector RangeVec(JToken t)
        {
            if (t is not JObject o) return default;
            return new FRangeVector(Range(o["X"]), Range(o["Y"]), Range(o["Z"]));
        }

        public static Vector3 Vec(JToken t)
        {
            if (t is JArray a && a.Count >= 3) return new Vector3(F(a[0]), F(a[1]), F(a[2]));
            if (t is JObject o) return new Vector3(F(o["X"]), F(o["Y"]), F(o["Z"]));
            return Vector3.zero;
        }

        public static FRotator Rot(JToken t)
        {
            if (t is JArray a && a.Count >= 3) return new FRotator(I(a[0]), I(a[1]), I(a[2]));
            if (t is JObject o) return new FRotator(I(o["Pitch"]), I(o["Yaw"]), I(o["Roll"]));
            return FRotator.Zero;
        }

        public static FPlane Plane(JToken t)
        {
            if (t is JObject o) return new FPlane { X = F(o["X"]), Y = F(o["Y"]), Z = F(o["Z"]), W = F(o["W"]) };
            if (t is JArray a && a.Count >= 4) return new FPlane { X = F(a[0]), Y = F(a[1]), Z = F(a[2]), W = F(a[3]) };
            return default;
        }

        public static Color32 Col(JToken t)
        {
            if (t is JObject o) return new Color32((byte)I(o["R"]), (byte)I(o["G"]), (byte)I(o["B"]), (byte)I(o["A"], 255));
            return new Color32(255, 255, 255, 255);
        }

        /// <summary>Float gravado como 4 bytes (o extrator leu alguns float[] como FColor: R,G,B,A = bytes little-endian).</summary>
        static float FloatFromColor(JToken t)
        {
            if (t is JObject o && o["R"] != null)
                return BitConverter.ToSingle(new[] { (byte)I(o["R"]), (byte)I(o["G"]), (byte)I(o["B"]), (byte)I(o["A"]) }, 0);
            return F(t);
        }

        static List<string> Strings(JToken t)
        {
            var l = new List<string>();
            if (t is JArray a)
            {
                foreach (var x in a)
                    if (S(x) is { } s && s != "None") l.Add(s);
            }
            else if (S(t) is { } one && one != "None") l.Add(one);
            return l;
        }

        public void Set(string key, JToken v)
        {
            switch (key)
            {
                case "Name": Name = S(v) ?? ""; break;
                case "Acceleration": Acceleration = Vec(v); break;
                case "ExtentMultiplier": ExtentMultiplier = Vec(v); break;
                case "IndependentSprayAccel": IndependentSprayAccel = B(v); break;
                case "UseCollision": UseCollision = B(v); break;
                case "DampingFactorRange": DampingFactorRange = RangeVec(v); break;
                case "UseCollisionPlanes": UseCollisionPlanes = B(v); break;
                case "CollisionPlanes": CollisionPlanes.Clear(); if (v is JArray cp) foreach (var p in cp) CollisionPlanes.Add(Plane(p)); break;
                case "UseMaxCollisions": UseMaxCollisions = B(v); break;
                case "MaxCollisions": MaxCollisions = Range(v); break;
                case "SpawnFromOtherEmitter": SpawnFromOtherEmitter = I(v, -1); break;
                case "SpawnAmount": SpawnAmount = I(v); break;
                case "UseSpawnedVelocityScale": UseSpawnedVelocityScale = B(v); break;
                case "SpawnedVelocityScaleRange": SpawnedVelocityScaleRange = RangeVec(v); break;
                case "UseColorScale": UseColorScale = B(v); break;
                case "ColorScale":
                    ColorScale.Clear();
                    if (v is JArray cs) foreach (var k in cs) ColorScale.Add(new ColorKey { RelativeTime = Dbl(k["RelativeTime"]), Color = Col(k["Color"]) });
                    break;
                case "ColorScaleRepeats": ColorScaleRepeats = F(v); break;
                case "ColorMultiplierRange": ColorMultiplierRange = RangeVec(v); break;
                case "Opacity": Opacity = F(v, 1); break;
                case "FadeOutFactor": FadeOutFactor = Plane(v); break;
                case "FadeOutStartTime": FadeOutStartTime = Dbl(v); break;
                case "FadeOut": FadeOut = B(v); break;
                case "FadeInFactor": FadeInFactor = Plane(v); break;
                case "FadeInEndTime": FadeInEndTime = Dbl(v); break;
                case "FadeIn": FadeIn = B(v); break;
                case "UseActorForces": UseActorForces = B(v); break;
                case "CoordinateSystem": CoordinateSystem = (CoordSystem)I(v); break;
                case "MaxParticles": MaxParticles = I(v); break;
                case "ResetAfterChange": ResetAfterChange = B(v); break;
                case "EffectAxis": EffectAxis = I(v); break;
                case "LevelOfWeather": LevelOfWeather = I(v); break;
                case "ParticleChoice": ParticleChoice = I(v); break;
                case "WeatherEffect": WeatherEffect = B(v); break;
                case "WeatherRangeTime": WeatherRangeTime.Clear(); if (v is JArray wr) foreach (var r in wr) WeatherRangeTime.Add(Range(r)); break;
                case "ForcedLifeTime": ForcedLifeTime = B(v); break;
                case "ForcedFade": ForcedFade = B(v); break;
                case "ForcedMaxParticles": ForcedMaxParticles = B(v); break;
                case "RespawnDeadParticles": RespawnDeadParticles = B(v); break;
                case "AutoDestroy": AutoDestroy = B(v); break;
                case "AutoReset": AutoReset = B(v); break;
                case "Disabled": Disabled = B(v); break;
                case "DisableFogging": DisableFogging = B(v); break;
                case "AutoResetTimeRange": AutoResetTimeRange = Range(v); break;
                case "StartLocationOffset": StartLocationOffset = Vec(v); break;
                case "StartLocationRange": StartLocationRange = RangeVec(v); break;
                case "AddLocationFromOtherEmitter": AddLocationFromOtherEmitter = I(v, -1); break;
                case "StartLocationShape": StartLocationShape = (LocationShape)I(v); break;
                case "SphereRadiusRange": SphereRadiusRange = Range(v); break;
                case "StartLocationPolarRange": StartLocationPolarRange = RangeVec(v); break;
                case "StartMassRange": StartMassRange = Range(v); break;
                case "MeshSpawningStaticMesh": MeshSpawningStaticMesh = S(v); break;
                case "MeshSpawning": MeshSpawning = I(v); break;
                case "MeshNormal": MeshNormal = Vec(v); break;
                case "AlphaRef": AlphaRef = I(v); break;
                case "AlphaTest": AlphaTest = B(v); break;
                case "AcceptsProjectors": AcceptsProjectors = B(v); break;
                case "ZTest": ZTest = B(v); break;
                case "ZWrite": ZWrite = B(v); break;
                case "UseRevolution": UseRevolution = B(v); break;
                case "RevolutionCenterOffsetRange": RevolutionCenterOffsetRange = RangeVec(v); break;
                case "RevolutionsPerSecondRange": RevolutionsPerSecondRange = RangeVec(v); break;
                case "UseRevolutionScale": UseRevolutionScale = B(v); break;
                case "RevolutionScale":
                    RevolutionScale.Clear();
                    if (v is JArray rs) foreach (var k in rs) RevolutionScale.Add(new VectorKey { RelativeTime = Dbl(k["RelativeTime"]), Value = Vec(k["RelativeRevolution"]) });
                    break;
                case "RevolutionScaleRepeats": RevolutionScaleRepeats = F(v); break;
                case "UseRotationFrom": UseRotationFrom = (RotationSource)I(v); break;
                case "SpinParticles": SpinParticles = B(v); break;
                case "RotationOffset": RotationOffset = Rot(v); break;
                case "SpinCCWorCW": SpinCCWorCW = Vec(v); break;
                case "SpinsPerSecondRange": SpinsPerSecondRange = RangeVec(v); break;
                case "StartSpinRange": StartSpinRange = RangeVec(v); break;
                case "DampRotation": DampRotation = B(v); break;
                case "RotationDampingFactorRange": RotationDampingFactorRange = RangeVec(v); break;
                case "RotationNormal": RotationNormal = Vec(v); break;
                case "UseSizeScale": UseSizeScale = B(v); break;
                case "UseRegularSizeScale": UseRegularSizeScale = B(v); break;
                case "SizeScale":
                    SizeScale.Clear();
                    if (v is JArray ss) foreach (var k in ss) SizeScale.Add(new SizeKey { RelativeTime = Dbl(k["RelativeTime"]), RelativeSize = F(k["RelativeSize"]) });
                    break;
                case "SizeScaleRepeats": SizeScaleRepeats = F(v); break;
                case "StartSizeRange": StartSizeRange = RangeVec(v); break;
                case "UniformSize": UniformSize = B(v); break;
                case "ParticlesPerSecond": ParticlesPerSecond = F(v); break;
                case "InitialParticlesPerSecond": InitialParticlesPerSecond = F(v); break;
                case "AutomaticInitialSpawning": AutomaticInitialSpawning = B(v); break;
                case "DrawStyle": DrawStyle = (DrawStyle)I(v); break;
                case "Texture": Texture = S(v); break;
                case "TextureUSubdivisions": TextureUSubdivisions = I(v); break;
                case "TextureVSubdivisions": TextureVSubdivisions = I(v); break;
                case "BlendBetweenSubdivisions": BlendBetweenSubdivisions = B(v); break;
                case "UseSubdivisionScale": UseSubdivisionScale = B(v); break;
                case "SubdivisionScale": SubdivisionScale.Clear(); if (v is JArray sc) foreach (var k in sc) SubdivisionScale.Add(FloatFromColor(k)); break;
                case "SubdivisionStart": SubdivisionStart = I(v); break;
                case "SubdivisionEnd": SubdivisionEnd = I(v); break;
                case "UseRandomSubdivision": UseRandomSubdivision = B(v); break;
                case "SecondsBeforeInactive": SecondsBeforeInactive = F(v); break;
                case "MinSquaredVelocity": MinSquaredVelocity = F(v); break;
                case "InitialTimeRange": InitialTimeRange = Range(v); break;
                case "LifetimeRange": LifetimeRange = Range(v); break;
                case "InitialDelayRange": InitialDelayRange = Range(v); break;
                case "TriggerDisabled": TriggerDisabled = B(v); break;
                case "ResetOnTrigger": ResetOnTrigger = B(v); break;
                case "SpawnOnTriggerRange": SpawnOnTriggerRange = Range(v); break;
                case "SpawnOnTriggerPPS": SpawnOnTriggerPPS = F(v); break;
                case "StartVelocityRange": StartVelocityRange = RangeVec(v); break;
                case "StartVelocityRadialRange": StartVelocityRadialRange = Range(v); break;
                case "MaxAbsVelocity": MaxAbsVelocity = Vec(v); break;
                case "VelocityLossRange": VelocityLossRange = RangeVec(v); break;
                case "AddVelocityFromOtherEmitter": AddVelocityFromOtherEmitter = I(v, -1); break;
                case "AddVelocityMultiplierRange": AddVelocityMultiplierRange = RangeVec(v); break;
                case "GetVelocityDirectionFrom": GetVelocityDirectionFrom = (VelocityDirection)I(v); break;
                case "UseVelocityScale": UseVelocityScale = B(v); break;
                case "VelocityScale":
                    VelocityScale.Clear();
                    if (v is JArray vs) foreach (var k in vs) VelocityScale.Add(new VectorKey { RelativeTime = Dbl(k["RelativeTime"]), Value = Vec(k["RelativeVelocity"]) });
                    break;
                case "VelocityScaleRepeats": VelocityScaleRepeats = F(v); break;
                case "WarmupTicksPerSecond": WarmupTicksPerSecond = F(v); break;
                case "RelativeWarmupTime": RelativeWarmupTime = F(v); break;
                case "SpawnSound": case "SpawningSound": case "Sounds": SpawnSounds = Strings(v); break;
                // Sprite
                case "UseDirectionAs": UseDirectionAs = (DirectionUsage)I(v); break;
                case "ProjectionNormal": ProjectionNormal = Vec(v); break;
                // Mesh / VertMesh
                case "StaticMesh": StaticMesh = S(v); break;
                case "VertexMesh": VertexMesh = S(v); break;
                case "UseMeshBlendMode": UseMeshBlendMode = B(v); break;
                case "RenderTwoSided": RenderTwoSided = B(v); break;
                case "UseParticleColor": UseParticleColor = B(v); break;
                // Beam
                case "BeamDistanceRange": BeamDistanceRange = Range(v); break;
                case "BeamEndPoints":
                    BeamEndPoints.Clear();
                    if (v is JArray be)
                        foreach (var k in be)
                            BeamEndPoints.Add(new BeamEndPoint { ActorTag = S(k["ActorTag"]), Offset = RangeVec(k["offset"] ?? k["Offset"]), Weight = F(k["Weight"]) });
                    break;
                case "DetermineEndPointBy": DetermineEndPointBy = (BeamEndPointType)I(v); break;
                case "BeamTextureUScale": BeamTextureUScale = F(v, 1); break;
                case "BeamTextureVScale": BeamTextureVScale = F(v, 1); break;
                case "RotatingSheets": RotatingSheets = I(v); break;
                case "TriggerEndpoint": TriggerEndpoint = B(v); break;
                case "LowFrequencyNoiseRange": LowFrequencyNoiseRange = RangeVec(v); break;
                case "LowFrequencyPoints": LowFrequencyPoints = I(v, 3); break;
                case "HighFrequencyNoiseRange": HighFrequencyNoiseRange = RangeVec(v); break;
                case "HighFrequencyPoints": HighFrequencyPoints = I(v, 10); break;
                case "LFScaleFactors": LFScaleFactors = Scales(v); break;
                case "HFScaleFactors": HFScaleFactors = Scales(v); break;
                case "LFScaleRepeats": LFScaleRepeats = F(v); break;
                case "HFScaleRepeats": HFScaleRepeats = F(v); break;
                case "UseHighFrequencyScale": UseHighFrequencyScale = B(v); break;
                case "UseLowFrequencyScale": UseLowFrequencyScale = B(v); break;
                case "NoiseDeterminesEndPoint": NoiseDeterminesEndPoint = B(v); break;
                case "DynamicHFNoiseRange": DynamicHFNoiseRange = RangeVec(v); break;
                case "DynamicHFNoisePointsRange": DynamicHFNoisePointsRange = Range(v); break;
                case "DynamicTimeBetweenNoiseRange": DynamicTimeBetweenNoiseRange = Range(v); break;
                case "UseBranching": UseBranching = B(v); break;
                case "BranchProbability": BranchProbability = Range(v); break;
                case "BranchHFPointsRange": BranchHFPointsRange = Range(v); break;
                case "BranchEmitter": BranchEmitter = I(v, -1); break;
                case "BranchSpawnAmountRange": BranchSpawnAmountRange = Range(v); break;
                case "LinkupLifetime": LinkupLifetime = B(v); break;
                // Ribbon
                case "SampleRate": SampleRate = F(v); break;
                case "DecayRate": DecayRate = F(v); break;
                case "NumPoints": NumPoints = I(v); break;
                case "AccDrop": AccDrop = I(v); break;
                case "PointsDropRate": PointsDropRate = I(v); break;
                case "ThresholdTime": ThresholdTime = F(v); break;
                case "MinPoints": MinPoints = I(v); break;
                case "ThresholdTime2": ThresholdTime2 = F(v); break;
                case "RibbonWidth": RibbonWidth = F(v); break;
                case "GetPointAxisFrom": GetPointAxisFrom = I(v); break;
                case "AxisNormal": AxisNormal = Vec(v); break;
                case "MinSampleDist": MinSampleDist = F(v); break;
                case "MinSampleDot": MinSampleDot = F(v); break;
                case "PointOriginOffset": PointOriginOffset = F(v); break;
                case "RibbonTextureUScale": RibbonTextureUScale = F(v, 1); break;
                case "RibbonTextureVScale": RibbonTextureVScale = F(v, 1); break;
                case "NumSheets": NumSheets = I(v); break;
                case "StartBoneOffset": StartBoneOffset = Vec(v); break;
                case "EndBoneOffset": EndBoneOffset = Vec(v); break;
                case "BoneNameStart": BoneNameStart = S(v); break;
                case "BoneNameEnd": BoneNameEnd = S(v); break;
                case "bUseInterpolation": bUseInterpolation = B(v); break;
                case "CntrPoints": CntrPoints = I(v); break;
                case "ScaleRatio": ScaleRatio = F(v); break;
                case "bSamplePoints": bSamplePoints = B(v); break;
                case "bDecayPoints": bDecayPoints = B(v); break;
                case "bDecayPointsWhenStopped": bDecayPointsWhenStopped = B(v); break;
                case "bSyncDecayWhenKilled": bSyncDecayWhenKilled = B(v); break;
                case "bLengthBasedTextureU": bLengthBasedTextureU = B(v); break;
                case "bUseSheetScale": bUseSheetScale = B(v); break;
                case "bUseBones": bUseBones = B(v); break;
                case "bUseBoneDistance": bUseBoneDistance = B(v); break;
                default: break; // propriedades sem efeito na simulacao (WeatherSoundCheck e de runtime; sons de colisao etc.)
            }
        }

        static List<BeamScale> Scales(JToken v)
        {
            var l = new List<BeamScale>();
            if (v is JArray a) foreach (var k in a) l.Add(new BeamScale { FrequencyScale = Vec(k["FrequencyScale"]), RelativeLength = F(k["RelativeLength"]) });
            return l;
        }
    }

    /// <summary>Defaults do ator AEmitter (e das superclasses de efeito: NProjectile, NSkillProjectile...).</summary>
    public sealed class FxClassDef
    {
        public string Name = "";
        public string Package = "LineageEffect";
        public string Super = "Engine.Emitter";
        public bool HasScript;
        public readonly List<EmitterDef> Emitters = new();

        public bool AutoDestroy, AutoReset, AutoReplay, DisableFogging;
        public FRangeVector GlobalOffsetRange;
        public FRange TimeTillResetRange;
        public float SpeedRate = 1;
        public bool bRotEmitter;
        public FRotator RotPerSecond;
        public bool FixedBoundingBox;
        public float DrawScale = 1;
        public int Physics;
        public FRotator Rotation, RelativeRotation;
        public Vector3 Location, RelativeLocation;
        public float LifeSpan;
        public bool bDirectional, bSelfRotation, bTrailerPrePivot, bTrailerSameRotation, bRelativeTrail, bTrailerNoOwnerDestroy, bSunAffect, bUnlit;
        public bool bSetSizeScale = true;
        public float CollisionRadius, CollisionHeight;
        public List<string> SpawnSound = new();
        public float SoundRadius, SoundVolume;
        public bool SoundLooping;
        public float SoundPitchMin = 1, SoundPitchMax = 1;
        public bool bUseLight, bUseQuake;
        public float EL_LifeSpan, EL_InitialDelay, EQ_InitialDelay;
        public FRange VisibleLimit;
        public float VisibilityInterpRange = 500;
        // NProjectile
        public float Speed = 10, AccSpeed = 10;
        public string Mesh;
        public string Tag;

        public bool IsProjectile => Super.EndsWith("Projectile");

        public static FxClassDef Parse(string name, string package, JObject j, JObject engineDefaults)
        {
            var c = new FxClassDef { Name = name, Package = package, Super = (string)j["super"] ?? "Engine.Emitter", HasScript = j["script"] != null };
            c.ApplyActor(engineDefaults?["Emitter"]?["defaults"] as JObject);
            c.ApplyActor(j["defaults"] as JObject);
            if (j["emitters"] is JArray es)
                foreach (JObject e in es)
                {
                    var cls = (string)e["cls"] ?? "SpriteEmitter";
                    var d = EmitterDef.ForClass(cls, engineDefaults);
                    d.Apply(e["props"] as JObject);
                    // nome do objeto no pacote (a propriedade Name pode repetir entre emissores da mesma classe)
                    d.Name = (string)e["name"] ?? d.Name;
                    c.Emitters.Add(d);
                }
            return c;
        }

        public void ApplyActor(JObject d)
        {
            if (d == null) return;
            foreach (var kv in d)
            {
                var v = kv.Value;
                switch (kv.Key)
                {
                    case "AutoDestroy": AutoDestroy = Bo(v); break;
                    case "AutoReset": AutoReset = Bo(v); break;
                    case "AutoReplay": AutoReplay = Bo(v); break;
                    case "DisableFogging": DisableFogging = Bo(v); break;
                    case "GlobalOffsetRange": GlobalOffsetRange = EmitterDef.RangeVec(v); break;
                    case "TimeTillResetRange": TimeTillResetRange = EmitterDef.Range(v); break;
                    case "SpeedRate": SpeedRate = Fl(v, 1); break;
                    case "bRotEmitter": bRotEmitter = Bo(v); break;
                    case "RotPerSecond": RotPerSecond = EmitterDef.Rot(v); break;
                    case "FixedBoundingBox": FixedBoundingBox = Bo(v); break;
                    case "DrawScale": DrawScale = Fl(v, 1); break;
                    case "Physics": Physics = (int)Fl(v); break;
                    case "Rotation": Rotation = EmitterDef.Rot(v); break;
                    case "RelativeRotation": RelativeRotation = EmitterDef.Rot(v); break;
                    case "Location": Location = EmitterDef.Vec(v); break;
                    case "RelativeLocation": RelativeLocation = EmitterDef.Vec(v); break;
                    case "LifeSpan": LifeSpan = Fl(v); break;
                    case "bDirectional": bDirectional = Bo(v); break;
                    case "bSelfRotation": bSelfRotation = Bo(v); break;
                    case "bTrailerPrePivot": bTrailerPrePivot = Bo(v); break;
                    case "bTrailerSameRotation": bTrailerSameRotation = Bo(v); break;
                    case "bRelativeTrail": bRelativeTrail = Bo(v); break;
                    case "bTrailerNoOwnerDestroy": bTrailerNoOwnerDestroy = Bo(v); break;
                    case "bSunAffect": bSunAffect = Bo(v); break;
                    case "bUnlit": bUnlit = Bo(v); break;
                    case "bSetSizeScale": bSetSizeScale = Bo(v); break;
                    case "CollisionRadius": CollisionRadius = Fl(v); break;
                    case "CollisionHeight": CollisionHeight = Fl(v); break;
                    case "SpawnSound": SpawnSound.Clear(); if (v is JArray sa) foreach (var s in sa) SpawnSound.Add((string)s); else if (v.Type == JTokenType.String) SpawnSound.Add((string)v); break;
                    case "SoundRadius": SoundRadius = Fl(v); break;
                    case "SoundVolume": SoundVolume = Fl(v); break;
                    case "SoundLooping": SoundLooping = Bo(v); break;
                    case "SoundPitchMin": SoundPitchMin = Fl(v, 1); break;
                    case "SoundPitchMax": SoundPitchMax = Fl(v, 1); break;
                    case "bUseLight": bUseLight = Bo(v); break;
                    case "bUseQuake": bUseQuake = Bo(v); break;
                    case "EL_LifeSpan": EL_LifeSpan = Fl(v); break;
                    case "EL_InitialDelay": EL_InitialDelay = Fl(v); break;
                    case "EQ_InitialDelay": EQ_InitialDelay = Fl(v); break;
                    case "VisibleLimit": VisibleLimit = EmitterDef.Range(v); break;
                    case "VisibilityInterpRange": VisibilityInterpRange = Fl(v, 500); break;
                    case "Speed": Speed = Fl(v, 10); break;
                    case "AccSpeed": AccSpeed = Fl(v, 10); break;
                    case "Mesh": Mesh = v.Type == JTokenType.String ? (string)v : null; break;
                    case "Tag": Tag = v.Type == JTokenType.String ? (string)v : null; break;
                    default: break;
                }
            }
        }

        static float Fl(JToken t, float def = 0) => t == null || t.Type == JTokenType.Null ? def : t.Type == JTokenType.Boolean ? ((bool)t ? 1 : 0) : (float)t;
        static bool Bo(JToken t) => t != null && t.Type != JTokenType.Null && (t.Type == JTokenType.Boolean ? (bool)t : Fl(t) != 0);
    }

    /// <summary>Biblioteca das classes de efeito (lineageeffect.json e pacotes extras) sobre engine_defaults.json.</summary>
    public sealed class FxLibrary
    {
        readonly Dictionary<string, FxClassDef> classes = new(StringComparer.OrdinalIgnoreCase);
        public JObject EngineDefaults { get; private set; }
        public int Count => classes.Count;

        public void LoadEngineDefaults(JObject j) => EngineDefaults = j;

        /// <summary>Carrega um pacote ({"pacote": "lineageeffect.u", "classes": {...}}).</summary>
        public int LoadPackage(JObject j)
        {
            var pkg = System.IO.Path.GetFileNameWithoutExtension((string)j["pacote"] ?? "lineageeffect");
            var n = 0;
            if (j["classes"] is JObject cs)
                foreach (var kv in cs)
                {
                    var c = FxClassDef.Parse(kv.Key, pkg, (JObject)kv.Value, EngineDefaults);
                    classes[kv.Key] = c;
                    classes[pkg + "." + kv.Key] = c;
                    n++;
                }
            return n;
        }

        /// <summary>Classe pelo nome do dado ("LineageEffect.wh_heal_ca", "wh_heal_ca"); null se nao existe.</summary>
        public FxClassDef Get(string name)
        {
            if (string.IsNullOrEmpty(name) || name == "None") return null;
            if (classes.TryGetValue(name, out var c)) return c;
            var dot = name.LastIndexOf('.');
            if (dot >= 0 && classes.TryGetValue(name.Substring(dot + 1), out c)) return c;
            return null;
        }

        public bool Has(string name) => Get(name) != null;
        public IEnumerable<FxClassDef> All
        {
            get
            {
                var seen = new HashSet<FxClassDef>();
                foreach (var c in classes.Values) if (seen.Add(c)) yield return c;
            }
        }
    }
}
