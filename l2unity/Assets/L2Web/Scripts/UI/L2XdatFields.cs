// GERADO por Docs/tools/gen_xdat_fields.py a partir de l2anim/out/re/xdat_field_names.json: nao edite a mao.
// Nome XML original de cada campo unk* do Interface.xdat (01 §1.2.2/§1.2.4): (classe, campo no layout.json, atributo XML).
using System.Collections.Generic;

namespace L2Web.UI
{
    public static class L2XdatFields
    {
        public static readonly (string Kind, string Unk, string Xml)[] All =
        {
            ("Window", "unk100", "parent"),
            ("Window", "unk101", "backTex"),
            ("Window", "unk102", "script"),
            ("Window", "unk103", "state"),
            ("Window", "unk104", "frame"),
            ("Window", "unk105", "iconable"),
            ("Window", "unk106", "stuckable"),
            ("Window", "unk107", "hidden"),
            ("Window", "unk108", "alwaysFullAlpha"),
            ("Window", "unk109", "savePosition"),
            ("Window", "unk110", "saveSize"),
            ("Window", "unk111", "title"),
            ("Window", "unk112", "resizeframe"),
            ("Window", "unk113", "Frame.size"),
            ("Window", "unk114", "Frame.direction"),
            ("Window", "unk115", "Frame.exitbutton"),
            ("Window", "unk116", "draggable"),
            ("Window", "unk117", "ResizeFrame.direction"),
            ("Window", "unk118", "ResizeFrame.x"),
            ("Window", "unk119", "ResizeFrame.y"),
            ("Window", "unk120", "ResizeFrame.width"),
            ("Window", "unk121", "ResizeFrame.height"),
            ("Window", "unk122", "ResizeFrame.maxIncrease"),
            ("Window", "unk123", "Frame.expandbutton"),
            ("Window", "unk124", "Frame.expandOrgHeight"),
            ("Window", "unk125", "Frame.expandExpHeight"),
            ("Window", "unk126", "Drawer.direction"),
            ("Window", "unk127", "Drawer.offset"),
            ("Window", "unk128", "Drawer.directionFixed"),
            ("Window", "unk129", "Drawer.ownerWindow"),
            ("Window", "unk130", "ShowHideAnim.ShowAnim.type"),
            ("Window", "unk131", "ShowHideAnim.HideAnim.type"),
            ("Window", "unk132", "ShowHideAnim.ShowAnim.direction"),
            ("Window", "unk133", "ShowHideAnim.ShowAnim.seconds"),
            ("Window", "unk134", "ShowHideAnim.HideAnim.direction"),
            ("Window", "unk135", "ShowHideAnim.HideAnim.seconds"),
            ("Window", "unk136", "Iconable.IconName"),
            ("Window", "unk137", "Iconable.TooltipIdx"),
            ("Window", "unk138", "hookKeyInput"),
            ("Window", "unk139", "WorkingConfiguration"),
            ("Control", "unk2", "alwaysOnTop"),
            ("Control", "unk3", "alwaysOnBack"),
            ("Control", "unk4", "(nome da janela-mãe, passado pelo carregador)"),
            ("Control", "unk5", "TabOrder.preOrder"),
            ("Control", "unk6", "TabOrder.postOrder"),
            ("Control", "unk7", "Position.anchored"),
            ("Control", "unk22", "virtual"),
            ("Control", "unk23", "passThrough"),
            ("Control", "unk24", "(sem atributo XML)"),
            ("Control", "popupType", "Tooltip.type"),
            ("Control", "popupValue", "Tooltip.text"),
            ("ListCtrl", "unk100", "maxRow"),
            ("ListCtrl", "unk101", "showRow"),
            ("ListCtrl", "unk102", "useScroll"),
            ("ListCtrl", "unk103", "contentsHeight"),
            ("ListCtrl", "unk104", "headerHeight"),
            ("ListCtrl", "ListElement.unk108", "ListColumn.bNumber"),
            ("ListCtrl", "ListElement.unk109", "ListColumn.bAscend"),
            ("ListCtrl", "ListElement.unk110", "ListColumn.bClickEnable"),
            ("MultiEdit", "unk100", "maxRow"),
            ("MultiEdit", "unk101", "showRow"),
            ("SliderCtrl", "unk111", "strDecreaseBtnNormalTexture, strDecreaseBtnDownTexture, strIncreaseBtnNormalTexture, strIncreaseBtnDownTexture"),
            ("Shortcut", "unk0", "name"),
            ("Shortcut", "unk1", "state"),
        };

        static Dictionary<(string, string), string> byXml;

        /// <summary>Campo do layout.json (unkNNN) com o atributo XML `xml` na classe `kind` ("Window", "Control"...).</summary>
        public static string Unk(string kind, string xml)
        {
            if (byXml == null)
            {
                byXml = new Dictionary<(string, string), string>();
                foreach (var f in All) byXml[(f.Kind, f.Xml)] = f.Unk;
            }
            return byXml.TryGetValue((kind, xml), out var u) ? u : null;
        }
    }
}
