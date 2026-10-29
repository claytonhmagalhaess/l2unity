// Build do executavel Windows pela linha de comando (Editor fechado):
//   Unity.exe -batchmode -quit -projectPath "<projeto>" -executeMethod L2WebBuild.Windows -logFile <log>
using UnityEditor;
using UnityEditor.Build.Reporting;
using UnityEngine;

public static class L2WebBuild
{
    public static void Windows()
    {
        var r = BuildPipeline.BuildPlayer(new BuildPlayerOptions
        {
            scenes = new[] { "Assets/Scenes/L2Web.unity" },
            locationPathName = "Build/L2Web.exe",
            target = BuildTarget.StandaloneWindows64,
            targetGroup = BuildTargetGroup.Standalone,
            options = BuildOptions.None,
        });
        var s = r.summary;
        Debug.Log($"[build] {s.result} erros={s.totalErrors} avisos={s.totalWarnings} tamanho={s.totalSize / 1048576}MB tempo={s.totalTime}");
        if (s.result != BuildResult.Succeeded) EditorApplication.Exit(1);
    }
}
