// Pacote -> EV_* das janelas da interface (#0046), como o UI/PacketEvents.cs faz para os pacotes do HUD: cada funcao recebe
// o pacote ja lido e devolve os eventos na ordem do nativo. Eventos e tratadores por pacote: spec 96 (game_map.json); chaves
// do param: as que o script le (spec 90, events_script.json) e as que o NWindow.dll escreve (spec 91). Quem entrega ao
// barramento e o InterfaceRouter.
//
// Itens: o original manda o ItemInfo inteiro (nome, icone, peso... dos .dat do cliente); aqui o param leva so os campos que
// vem no pacote (Item), e a janela completa o resto pelo classID com os dados do cliente.
using System.Collections.Generic;
using L2Web.UI;

namespace L2Web.Net
{
    public static class InterfaceEvents
    {
        static PacketEvents.Event E(int id, string p = "") => new PacketEvents.Event(id, p);

        static string P(string p, string key, int v) => L2Param.Add(p, key, v);
        static string P(string p, string key, string v) => L2Param.Add(p, key, v);
        static string P(string p, string key, long v) => L2Param.Add(p, key, v.ToString());

        /// <summary>
        /// Campos de item que vem no pacote, com as chaves do ItemInfo (ParamToItemInfo, spec 90): classID, serverID, itemNum,
        /// itemType (type2), slotBitType, enchanted, damaged (customType1), equipped, reserved (customType2), refineryOp1/2
        /// (aumento, 16 bits cada) e currentDurability (mana). price e defaultPrice so onde o pacote traz preco.
        /// </summary>
        public static string Item(string p, InvItem it)
        {
            p = P(p, "classID", it.ItemId);
            p = P(p, "serverID", it.ObjectId);
            p = P(p, "itemNum", it.Count);
            p = P(p, "itemType", it.Type2);
            p = P(p, "slotBitType", it.BodyPart);
            p = P(p, "enchanted", it.Enchant);
            p = P(p, "damaged", it.CustomType1);
            p = P(p, "equipped", it.Equipped ? 1 : 0);
            p = P(p, "reserved", it.CustomType2);
            p = P(p, "refineryOp1", it.Augmentation & 0xffff);
            p = P(p, "refineryOp2", (it.Augmentation >> 16) & 0xffff);
            p = P(p, "currentDurability", it.Mana);
            if (it.Price != null) p = P(p, "price", it.Price.Value);
            if (it.DefaultPrice != null) p = P(p, "defaultPrice", it.DefaultPrice.Value);
            return p;
        }

        // ---------------------------------------------------------------- macro (T8)

        /// <summary>SendMacroList (0xe7) com a revisao completa: EV_MacroUpdate (o MacroListWnd pede a lista de novo).</summary>
        public static List<PacketEvents.Event> MacroUpdate() => new() { E(Ev.EV_MacroUpdate) };

        /// <summary>Macros que sumiram entre duas revisoes completas: EV_MacroDeleted (MacroID) para o MacroEditWnd fechar.</summary>
        public static List<PacketEvents.Event> MacroDeleted(IEnumerable<int> ids)
        {
            var o = new List<PacketEvents.Event>();
            foreach (var id in ids) o.Add(E(Ev.EV_MacroDeleted, P("", "MacroID", id)));
            return o;
        }

        /// <summary>
        /// RequestMacroList do script (nativo, sem pacote): EV_MacroList com Max e, por macro, ID_i, IconName_i (acronimo),
        /// MacroName_i, Description_i e TextureName_i (spec 05 §6.2, MacroListWnd.uc:135-187).
        /// </summary>
        public static PacketEvents.Event MacroList(MacroBook book)
        {
            var p = P("", "Max", book.Macros.Count);
            var i = 0;
            foreach (var m in book.Macros.Values)
            {
                p = P(p, "ID_" + i, m.Id);
                p = P(p, "IconName_" + i, m.Acronym);
                p = P(p, "MacroName_" + i, m.Name);
                p = P(p, "Description_" + i, m.Description);
                p = P(p, "TextureName_" + i, m.TextureName);
                i++;
            }
            return E(Ev.EV_MacroList, p);
        }
    }
}
