"""Gera Assets/L2Web/Scripts/UI/L2XdatFields.cs: o nome XML original de cada campo unk* do Interface.xdat, a partir do
out/re/xdat_field_names.json do l2anim (leitor XML x serializador binario de cada classe XML*Data).

Uso: python -I Docs/tools/gen_xdat_fields.py [raiz_l2anim]
"""
import json
import os
import sys

L2ANIM = sys.argv[1] if len(sys.argv) > 1 else r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim'
HERE = os.path.dirname(os.path.abspath(__file__))
OUT = os.path.join(HERE, '..', '..', 'Assets', 'L2Web', 'Scripts', 'UI', 'L2XdatFields.cs')
d = json.load(open(os.path.join(L2ANIM, 'out', 're', 'xdat_field_names.json'), encoding='utf-8'))

KIND = {'Window (XMLWindowData)': 'Window', 'DefaultProperty (XMLUIData)': 'Control', 'ListCtrl (XMLListData)': 'ListCtrl',
        'MultiEdit (XMLMultiEditData)': 'MultiEdit', 'SliderCtrl (XMLSliderCtrlData)': 'SliderCtrl', 'Shortcut (XMLShortcutData)': 'Shortcut'}
lines = []
for cls, fields in d.items():
    if cls.startswith('_'):
        continue
    for unk, v in fields.items():
        xml = v['xml'].replace('"', "'")
        lines.append('            (%s, "%s", "%s"),' % ('"' + KIND[cls] + '"', unk, xml))

src = '''// GERADO por Docs/tools/gen_xdat_fields.py a partir de l2anim/out/re/xdat_field_names.json: nao edite a mao.
// Nome XML original de cada campo unk* do Interface.xdat (01 §1.2.2/§1.2.4): (classe, campo no layout.json, atributo XML).
using System.Collections.Generic;

namespace L2Web.UI
{
    public static class L2XdatFields
    {
        public static readonly (string Kind, string Unk, string Xml)[] All =
        {
%s
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
''' % '\n'.join(lines)
open(OUT, 'w', encoding='utf-8', newline='\n').write(src)
print(len(lines), 'campos ->', os.path.normpath(OUT))
