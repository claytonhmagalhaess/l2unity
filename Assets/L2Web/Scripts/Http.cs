// fetch() do navegador em cima do UnityWebRequest, com Task (as continuacoes voltam para a thread principal). Com os
// assets locais (Config.UseLocalAssets), os mesmos caminhos sao respondidos pelo LocalAssets, sem servidor.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Networking;

namespace L2Web
{
    public sealed class HttpResponse
    {
        public long Status;
        public byte[] Data;
        public string Error;
        public bool Ok => Status >= 200 && Status < 300 && Error == null;
        public string Text => Data == null ? null : System.Text.Encoding.UTF8.GetString(Data);
        public T Json<T>() => Data == null ? default : JsonConvert.DeserializeObject<T>(Text);
        public JToken JsonToken() => Data == null ? null : JToken.Parse(Text);
    }

    public static class Http
    {
        /// <summary>URL absoluta no servidor de assets para um caminho do cliente web ("/api/model?...").</summary>
        public static string Url(string path)
        {
            if (path.StartsWith("http") || path.StartsWith("file:")) return path;
            if (Config.UseLocalAssets)
            {
                // assets locais: os .glb que o glTFast abre por URL viram file:// da copia em StreamingAssets
                var f = LocalAssets.FileFor(path);
                if (f != null) return new Uri(f).AbsoluteUri;
            }
            return Config.AssetBase + (path.StartsWith("/") ? path : "/" + path);
        }

        /// <summary>Pedidos simultaneos ao servidor de assets: na abertura o lobby, o cenario e a interface pedem centenas de
        /// arquivos de uma vez, e sem limite parte deles falhava (e a interface ficava sem texturas).</summary>
        const int MaxParallel = 16;
        static int active;
        static readonly Queue<TaskCompletionSource<bool>> waiting = new();

        static Task Acquire()
        {
            if (active < MaxParallel)
            {
                active++;
                return Task.CompletedTask;
            }
            var t = new TaskCompletionSource<bool>();
            waiting.Enqueue(t);
            return t.Task;
        }

        static void Release()
        {
            if (waiting.Count > 0) waiting.Dequeue().TrySetResult(true);
            else active--;
        }

        /// <summary>
        /// Equivalente ao fetch(): nunca lanca por status HTTP; Status 0 e Error preenchido em falha de rede. Falha de
        /// conexao ou erro 5xx e tentada de novo (ate 4 vezes, com espera crescente); 404/202 voltam na hora.
        /// </summary>
        public static async Task<HttpResponse> Fetch(string path)
        {
            // assets locais: o que o dev.ts respondia, lido da copia em StreamingAssets fora da thread principal
            if (Config.UseLocalAssets && !path.StartsWith("http") && !path.StartsWith("file:")) return await Task.Run(() => LocalAssets.Get(path));
            for (var attempt = 0; ; attempt++)
            {
                var r = await FetchOnce(path);
                var transient = r.Error != null || r.Status == 0 || r.Status >= 500;
                if (!transient || attempt >= 3) return r;
                await Task.Delay(400 << attempt);
            }
        }

        /// <summary>Pedidos de rede feitos ao servidor de assets (0 com os assets locais).</summary>
        public static int NetworkRequests;

        static async Task<HttpResponse> FetchOnce(string path)
        {
            NetworkRequests++;
            await Acquire();
            try
            {
                var tcs = new TaskCompletionSource<HttpResponse>();
                var req = UnityWebRequest.Get(Url(path));
                req.timeout = 300;
                var op = req.SendWebRequest();
                op.completed += _ =>
                {
                    var r = new HttpResponse { Status = req.responseCode };
                    if (req.result == UnityWebRequest.Result.ConnectionError || req.result == UnityWebRequest.Result.DataProcessingError)
                        r.Error = req.error;
                    else
                        r.Data = req.downloadHandler.data;
                    req.Dispose();
                    tcs.TrySetResult(r);
                };
                return await tcs.Task;
            }
            finally
            {
                Release();
            }
        }

        public static async Task<byte[]> GetBytes(string path)
        {
            var r = await Fetch(path);
            return r.Ok ? r.Data : null;
        }

        public static async Task<string> GetText(string path)
        {
            var r = await Fetch(path);
            return r.Ok ? r.Text : null;
        }

        public static async Task<T> GetJson<T>(string path)
        {
            var r = await Fetch(path);
            return r.Ok ? r.Json<T>() : default;
        }

        static readonly Dictionary<string, Task<Texture2D>> texCache = new();

        /// <summary>PNG/JPG do servidor de assets como textura (cache por URL; null se faltar).</summary>
        public static Task<Texture2D> GetTexture(string path, bool linear = false)
        {
            var key = path + (linear ? "#lin" : "");
            if (texCache.TryGetValue(key, out var t)) return t;
            t = LoadTexture(path, linear, key);
            texCache[key] = t;
            return t;
        }

        static async Task<Texture2D> LoadTexture(string path, bool linear, string key)
        {
            var bytes = await LoadTrack.Track(GetBytes(path));
            var tex = bytes == null ? null : new Texture2D(2, 2, TextureFormat.RGBA32, true, linear) { name = path };
            if (tex && !tex.LoadImage(bytes)) tex = null;
            if (!tex)
            {
                // falhou: nao fica no cache, o proximo pedido tenta de novo
                texCache.Remove(key);
                return null;
            }
            tex.wrapMode = TextureWrapMode.Clamp;
            // a limpeza de assets sem uso do Unity nao pode levar texturas de janelas ainda fechadas
            tex.hideFlags |= HideFlags.DontUnloadUnusedAsset;
            return tex;
        }
    }

    public static class TaskExt
    {
        /// <summary>O "void promise" do TypeScript: dispara sem esperar, mas registra a excecao.</summary>
        public static async void Forget(this Task t)
        {
            try
            {
                await t;
            }
            catch (Exception e)
            {
                Debug.LogException(e);
            }
        }
    }
}
