// Capturas por tempo, sem login nem servidor: -l2shotat 40,45 [-l2shots pasta] grava shot_40.png e shot_45.png (segundos
// desde a abertura) e fecha o jogo depois da ultima. Serve para fotografar a tela de login, que ja mostra a cena do lobby
// carregada (capturas antes/depois da #0023).
using System;
using System.Collections;
using System.Globalization;
using System.IO;
using UnityEngine;

namespace L2Web.Dev
{
    public class ShotTimer : MonoBehaviour
    {
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        static void Boot()
        {
            var at = App.ArgValue("-l2shotat");
            if (at == null) return;
            var go = new GameObject("l2web shot timer");
            DontDestroyOnLoad(go);
            go.AddComponent<ShotTimer>().StartCoroutine(Run(at.Split(','), App.ArgValue("-l2shots") ?? "."));
        }

        static IEnumerator Run(string[] times, string dir)
        {
            Directory.CreateDirectory(dir);
            foreach (var t in times)
            {
                var s = float.Parse(t, CultureInfo.InvariantCulture);
                while (Time.realtimeSinceStartup < s) yield return null;
                ScreenCapture.CaptureScreenshot(Path.Combine(dir, $"shot_{t}.png"));
                Debug.Log($"[shotat] {t} s");
                yield return null;
                yield return null;
            }
            yield return new WaitForSecondsRealtime(1);
            Application.Quit();
        }
    }
}
