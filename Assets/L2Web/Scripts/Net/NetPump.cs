// Despacha os pacotes recebidos pelas conexoes TCP (Transport) na thread principal do Unity.
// Criado sob demanda (Transport.Connect): no Play Mode e um GameObject oculto com DontDestroyOnLoad;
// no Editor fora do Play Mode (testes EditMode, script eval) usa o EditorApplication.update.
using UnityEngine;

namespace L2Web.Net
{
    [AddComponentMenu("")]
    public sealed class NetPump : MonoBehaviour
    {
        static NetPump instance;
#if UNITY_EDITOR
        static bool editorHooked;
#endif

        /// <summary>Garante que alguem drena as conexoes. Chame da thread principal.</summary>
        public static void Ensure()
        {
#if UNITY_EDITOR
            if (!editorHooked)
            {
                editorHooked = true;
                UnityEditor.EditorApplication.update += EditorTick;
                // recompilar com conexoes abertas deixaria sockets orfaos
                UnityEditor.AssemblyReloadEvents.beforeAssemblyReload += Transport.CloseAll;
            }
            if (!Application.isPlaying) return;
#endif
            if (instance != null) return;
            var go = new GameObject("L2Web.NetPump") { hideFlags = HideFlags.HideInHierarchy };
            DontDestroyOnLoad(go);
            instance = go.AddComponent<NetPump>();
        }

#if UNITY_EDITOR
        static void EditorTick()
        {
            // no Play Mode quem drena e o Update (mesma thread; drenar duas vezes nao faz mal, mas evita a ordem trocada)
            if (Application.isPlaying && instance != null) return;
            Transport.PumpAll();
        }
#endif

        void Update()
        {
            Transport.PumpAll();
        }

        void OnApplicationQuit()
        {
            Transport.CloseAll();
            Transport.PumpAll();
        }

        void OnDestroy()
        {
            if (instance == this) instance = null;
        }
    }
}
