// Estado da criacao de personagem (interface CreateState de ui/lobbyui.ts). Os campos sao identificados pelos mesmos
// nomes do TS ("race", "cls", "sex", "hair", "color", "face") no OnChange do CreatePanel.
namespace L2Web.UI
{
    public sealed class CreateState
    {
        /// <summary>-1 = sem escolha (o NCPawnSetupWnd comeca com tudo em -1 e a raca em 0).</summary>
        public int Race;
        /// <summary>0 guerreiro, 1 mistico.</summary>
        public int Cls;
        /// <summary>0 masculino, 1 feminino.</summary>
        public int Sex;
        public int Hair;
        public int Color;
        public int Face;

        public static readonly string[] Keys = { "race", "cls", "sex", "hair", "color", "face" };

        public CreateState Clone() => (CreateState)MemberwiseClone();

        public int Get(string key) => key switch
        {
            "race" => Race,
            "cls" => Cls,
            "sex" => Sex,
            "hair" => Hair,
            "color" => Color,
            "face" => Face,
            _ => 0,
        };

        public void Set(string key, int v)
        {
            switch (key)
            {
                case "race": Race = v; break;
                case "cls": Cls = v; break;
                case "sex": Sex = v; break;
                case "hair": Hair = v; break;
                case "color": Color = v; break;
                case "face": Face = v; break;
            }
        }

        public override string ToString() => $"{Race}/{Cls}/{Sex}/{Hair}/{Color}/{Face}";
    }
}
