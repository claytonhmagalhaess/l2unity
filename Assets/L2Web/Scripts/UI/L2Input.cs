// IsPKMode do original (93 §8.3): [console]->slot 0x590 (FUN_1014ce50) devolve 1 com qualquer Ctrl pressionado (VK 0x11,
// por UInput::KeyDown) ou com a flag do console (+0x50E4) ligada. Usado no clique (ataque forcado), nos itens e nas skills.
using UnityEngine.InputSystem;

namespace L2Web.UI
{
    public static class L2Input
    {
        /// <summary>Flag do console que forca o modo PK sem a tecla (console+0x50E4).</summary>
        public static bool ConsolePKFlag;

        /// <summary>Regra do FUN_1014ce50.</summary>
        public static bool IsPKMode(bool leftCtrl, bool rightCtrl, bool consoleFlag) => leftCtrl || rightCtrl || consoleFlag;

        public static bool IsPKMode()
        {
            var kb = Keyboard.current;
            return IsPKMode(kb != null && kb.leftCtrlKey.isPressed, kb != null && kb.rightCtrlKey.isPressed, ConsolePKFlag);
        }
    }
}
