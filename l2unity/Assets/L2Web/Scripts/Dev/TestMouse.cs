// Mouse virtual do Input System para testes pelo script eval: gera os mesmos eventos de ponteiro que o mouse fisico
// (o InputSystemUIInputModule le qualquer Mouse), entao arrastar janelas, dicas e arrastar e soltar passam pelo caminho
// real da interface. Cada chamada enfileira um estado; o Input System o processa no proximo quadro.
//   var p = L2Web.Dev.TestMouse.Center(ui.Inv.El, 0.2f, 0.02f); L2Web.Dev.TestMouse.Move(p); TestMouse.Down(); ...
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.LowLevel;

namespace L2Web.Dev
{
    public static class TestMouse
    {
        static Mouse mouse;
        static Vector2 pos;
        static bool left;

        static Mouse Device
        {
            get
            {
                if (mouse != null && mouse.added) return mouse;
                mouse = InputSystem.AddDevice<Mouse>("L2WebTestMouse");
                return mouse;
            }
        }

        /// <summary>Ponto da tela (pixels, origem embaixo a esquerda) na fracao (fx, fy) do retangulo; fy = 0 e o topo.</summary>
        public static Vector2 Center(RectTransform rt, float fx = 0.5f, float fy = 0.5f)
        {
            var c = new Vector3[4];
            rt.GetWorldCorners(c); // 0 = baixo-esq, 1 = cima-esq, 2 = cima-dir
            var x = Mathf.Lerp(c[1].x, c[2].x, fx);
            var y = Mathf.Lerp(c[1].y, c[0].y, fy);
            return RectTransformUtility.WorldToScreenPoint(null, new Vector3(x, y, 0));
        }

        static void Send(Vector2 delta = default)
        {
            var m = Device;
            InputSystem.QueueStateEvent(m, new MouseState { position = pos, delta = delta, buttons = (ushort)(left ? 1 : 0) });
            m.MakeCurrent();
        }

        public static void Move(Vector2 p)
        {
            var d = p - pos;
            pos = p;
            Send(d);
        }

        public static void Move(float x, float y) => Move(new Vector2(x, y));

        public static void Down()
        {
            left = true;
            Send();
        }

        public static void Up()
        {
            left = false;
            Send();
        }

        /// <summary>Remove o dispositivo virtual.</summary>
        public static void Remove()
        {
            if (mouse != null && mouse.added) InputSystem.RemoveDevice(mouse);
            mouse = null;
        }
    }
}
