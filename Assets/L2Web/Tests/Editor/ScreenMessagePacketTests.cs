// Mensagens na tela (#0046, T16): ExShowScreenMessage FE:38 montado como o aCis o escreve
// (serverpackets/ExShowScreenMessage.java) e o EV_ShowScreenMessage que o InterfaceRouter entrega.
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ScreenMessagePacketTests
    {
        static string S(PacketEvents.Event e, string key)
        {
            string v = null;
            L2Param.ParseString(e.Param, key, ref v);
            return v;
        }

        /// <summary>type, sysMessageId, position, hide, size, unk2, unk3, effect, time, fade, texto.</summary>
        static PacketWriter Acis(string text) =>
            new PacketWriter().C(0xfe).H(0x38).D(1).D(-1).D(2).D(0).D(1).D(0).D(0).D(1).D(5000).D(1).S(text);

        [Test]
        public void ExShowScreenMessage_CamposNaOrdemDoScript()
        {
            var r = new PacketReader(Acis("Raid Boss apareceu").Bytes(), 3);
            var m = UiPackets.ParseExShowScreenMessage(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((1, -1, 2, 1, 1, 5000, 1, "Raid Boss apareceu"), (m.MsgType, m.MsgNo, m.WindowType, m.FontType, m.BackgroundType, m.LifeTime, m.AnimationType, m.Msg));
        }

        [Test]
        public void ExShowScreenMessage_Evento()
        {
            var got = new List<PacketEvents.Event>();
            var gc = new GameClient(new GameClientOptions());
            new InterfaceRouter(gc, got.AddRange);
            gc.Dispatch(Acis("ola").Bytes());
            var e = got.Single();
            Assert.AreEqual((Ev.EV_ShowScreenMessage, "1", "2", "5000", "1", "ola"),
                (e.Id, S(e, "MsgType"), S(e, "WindowType"), S(e, "LifeTime"), S(e, "AnimationType"), S(e, "Msg")));
        }
    }
}
