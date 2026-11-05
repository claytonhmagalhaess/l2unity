// Configuracao do cliente: onde estao o servidor de assets (tools/dev.ts do l2web, porta 8700) e o login server.
// No navegador o cliente falava com o gateway WebSocket (8701); aqui o Unity abre TCP direto no login/game server.
using UnityEngine;

namespace L2Web
{
    public static class Config
    {
        /// <summary>Servidor de desenvolvimento do l2web (modelos via proxy do l2anim, terreno, cenario, interface, sons).</summary>
        public static string AssetBase
        {
            get => Get("assetBase", "http://127.0.0.1:8700");
            set => Set("assetBase", value.TrimEnd('/'));
        }

        /// <summary>
        /// Assets da copia local (Assets/StreamingAssets/L2Web, via LocalAssets) em vez do dev.ts. Padrao: local, se a
        /// copia existe. Nas opcoes do login: "local" ou a URL do servidor de assets.
        /// </summary>
        public static bool UseLocalAssets
        {
            get => Get("assetMode", "local") == "local" && LocalAssets.Available;
            set => Set("assetMode", value ? "local" : "http");
        }

        public static string LoginHost
        {
            get => Get("loginHost", "127.0.0.1");
            set => Set("loginHost", value);
        }

        public static int LoginPort
        {
            get => int.TryParse(Get("loginPort", "2106"), out var p) ? p : 2106;
            set => Set("loginPort", value.ToString());
        }

        /// <summary>"hwid515" (servidor com HWID, versao 515) ou "acis" (aCis original, versao 746).</summary>
        public static string Protocol
        {
            get => Get("proto", "hwid515");
            set => Set("proto", value);
        }

        /// <summary>Substitui o localStorage do navegador (chaves "l2web.*").</summary>
        public static string Get(string key, string def = null)
        {
            var k = "l2web." + key;
            return PlayerPrefs.HasKey(k) ? PlayerPrefs.GetString(k) : def;
        }

        public static void Set(string key, string value)
        {
            PlayerPrefs.SetString("l2web." + key, value);
            PlayerPrefs.Save();
        }
    }
}
