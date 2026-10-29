// L2GameUI__LoadUI__180772580 @ 0x180772580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2GameUI__LoadUI__180772580(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  
  if (cRam00000001834b43ec == '\0') {
    FUN_180315380(TI_ActionWindow);
    FUN_180315380(TI_AutoPotionWindow);
    FUN_180315380(TI_BoardWindow);
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(TI_FriendWindow);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<AutoPotionWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<BoardWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<ClanWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<FindStoreWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<FriendWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<MacroWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<MailWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<ManorWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<MultisellWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<OlympiadWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<OptionsWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<PartyWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<PetStatusWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<PetWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<PrivateShopWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SevenSignsWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SiegeWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkCraftWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkDropWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkEnchantSkillWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkEnchantWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkFindWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkFps>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkGmWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkHennaWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkLojaCristalWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkMapaWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkQuestHud>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkQuestInfoWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkQuestWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkRadarWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkRastreioWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkRefinoWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkTutorialWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<TradeWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<UnionWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<VipWindow>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<WarehouseWindow>);
    FUN_180315380(TI_NpcHtmlWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_OlympiadWindow);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_PetWindow);
    FUN_180315380(TI_SevenSignsWindow);
    FUN_180315380(TI_SparkEnchantSkillWindow);
    FUN_180315380(TI_SparkFps);
    FUN_180315380(TI_SparkGmWindow);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(TI_TargetWindow);
    FUN_180315380(TI_VipWindow);
    cRam00000001834b43ec = '\x01';
  }
  L2UI__LoadUI__1807991d0(param_1,0);
  if (cRam00000001834b31c1 == '\0') {
    FUN_180315380(TI_L2LoginUI);
    cRam00000001834b31c1 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_L2LoginUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    L2UI__StartLoading__180799340(param_1,0);
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b3105 == '\0') {
    FUN_180315380(TI_ChatWindow);
    DAT_1834b3105 = '\x01';
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = *(undefined8 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b3105 == '\0') {
      FUN_180315380(TI_ChatWindow);
      DAT_1834b3105 = '\x01';
    }
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x000180775b92;
    L2Window__AddWindow__1807995d0(lVar5,*(undefined8 *)(param_1 + 0x48),0);
  }
  if (cRam00000001834b3ea9 == '\0') {
    FUN_180315380(TI_SystemMenuWindow);
    cRam00000001834b3ea9 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SystemMenuWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    if (cRam00000001834b3ea9 == '\0') {
      FUN_180315380(TI_SystemMenuWindow);
      cRam00000001834b3ea9 = '\x01';
    }
    if (**(longlong **)(TI_SystemMenuWindow + 0xb8) == 0) goto code_r0x000180775b92;
    L2Window__AddWindow__1807995d0
              (**(longlong **)(TI_SystemMenuWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  }
  if (cRam00000001834b436b == '\0') {
    FUN_180315380(TI_MenuWindow);
    cRam00000001834b436b = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_MenuWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    if (cRam00000001834b436b == '\0') {
      FUN_180315380(TI_MenuWindow);
      cRam00000001834b436b = '\x01';
    }
    if (**(longlong **)(TI_MenuWindow + 0xb8) == 0) goto code_r0x000180775b92;
    L2Window__AddWindow__1807995d0
              (**(longlong **)(TI_MenuWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  }
  if (cRam00000001834b441e == '\0') {
    FUN_180315380(TI_StatusWindow);
    cRam00000001834b441e = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_StatusWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    if (cRam00000001834b441e == '\0') {
      FUN_180315380(TI_StatusWindow);
      cRam00000001834b441e = '\x01';
    }
    if (**(longlong **)(TI_StatusWindow + 0xb8) == 0) goto code_r0x000180775b92;
    L2Window__AddWindow__1807995d0
              (**(longlong **)(TI_StatusWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  }
  if (cRam00000001834b3fe7 == '\0') {
    FUN_180315380(TI_PartyWindow);
    cRam00000001834b3fe7 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_PartyWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<PartyWindow>);
  }
  if (cRam00000001834b3fe7 == '\0') {
    FUN_180315380(TI_PartyWindow);
    cRam00000001834b3fe7 = '\x01';
  }
  if (**(longlong **)(TI_PartyWindow + 0xb8) == 0) {
code_r0x000180775b92:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_PartyWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b3fe3 == '\0') {
    FUN_180315380(TI_PetStatusWindow);
    cRam00000001834b3fe3 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_PetStatusWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<PetStatusWindow>);
  }
  if (cRam00000001834b3fe3 == '\0') {
    FUN_180315380(TI_PetStatusWindow);
    cRam00000001834b3fe3 = '\x01';
  }
  if (**(longlong **)(TI_PetStatusWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_PetStatusWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b3fe5 == '\0') {
    FUN_180315380(TI_UnionWindow);
    cRam00000001834b3fe5 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_UnionWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<UnionWindow>);
  }
  if (cRam00000001834b3fe5 == '\0') {
    FUN_180315380(TI_UnionWindow);
    cRam00000001834b3fe5 = '\x01';
  }
  if (**(longlong **)(TI_UnionWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_UnionWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b441f == '\0') {
    FUN_180315380(TI_TradeWindow);
    cRam00000001834b441f = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_TradeWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<TradeWindow>);
  }
  if (cRam00000001834b441f == '\0') {
    FUN_180315380(TI_TradeWindow);
    cRam00000001834b441f = '\x01';
  }
  plVar2 = (longlong *)**(longlong **)(TI_TradeWindow + 0xb8);
  if (plVar2 == (longlong *)0x0) goto code_r0x000180775b92;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
  L2Window__AddWindow__1807995d0(plVar2,uVar1,0);
  if (cRam00000001834b4420 == '\0') {
    FUN_180315380(TI_PrivateShopWindow);
    cRam00000001834b4420 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_PrivateShopWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<PrivateShopWindow>);
  }
  if (cRam00000001834b4420 == '\0') {
    FUN_180315380(TI_PrivateShopWindow);
    cRam00000001834b4420 = '\x01';
  }
  if (**(longlong **)(TI_PrivateShopWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_PrivateShopWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b3ea8 == '\0') {
    FUN_180315380(TI_SparkQuestWindow);
    cRam00000001834b3ea8 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkQuestWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkQuestWindow>);
  }
  if (cRam00000001834b3ea8 == '\0') {
    FUN_180315380(TI_SparkQuestWindow);
    cRam00000001834b3ea8 = '\x01';
  }
  if (**(longlong **)(TI_SparkQuestWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SparkQuestWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b4421 == '\0') {
    FUN_180315380(TI_SparkHennaWindow);
    cRam00000001834b4421 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkHennaWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkHennaWindow>);
  }
  if (cRam00000001834b4421 == '\0') {
    FUN_180315380(TI_SparkHennaWindow);
    cRam00000001834b4421 = '\x01';
  }
  if (**(longlong **)(TI_SparkHennaWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SparkHennaWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4422 == '\0') {
    FUN_180315380(TI_SparkGmWindow);
    cRam00000001834b4422 = '\x01';
  }
  if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_SparkGmWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkGmWindow>);
  }
  if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4422 == '\0') {
    FUN_180315380(TI_SparkGmWindow);
    cRam00000001834b4422 = '\x01';
  }
  if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkGmWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SparkGmWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b3d0e == '\0') {
    FUN_180315380(TI_SparkRastreioWindow);
    cRam00000001834b3d0e = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkRastreioWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkRastreioWindow>);
  }
  if (cRam00000001834b3d0e == '\0') {
    FUN_180315380(TI_SparkRastreioWindow);
    cRam00000001834b3d0e = '\x01';
  }
  if (**(longlong **)(TI_SparkRastreioWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SparkRastreioWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b4423 == '\0') {
    FUN_180315380(TI_SparkCraftWindow);
    cRam00000001834b4423 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkCraftWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkCraftWindow>);
  }
  if (cRam00000001834b4423 == '\0') {
    FUN_180315380(TI_SparkCraftWindow);
    cRam00000001834b4423 = '\x01';
  }
  if (**(longlong **)(TI_SparkCraftWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SparkCraftWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b4424 == '\0') {
    FUN_180315380(TI_SparkRefinoWindow);
    cRam00000001834b4424 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkRefinoWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkRefinoWindow>);
  }
  if (cRam00000001834b4424 == '\0') {
    FUN_180315380(TI_SparkRefinoWindow);
    cRam00000001834b4424 = '\x01';
  }
  if (**(longlong **)(TI_SparkRefinoWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SparkRefinoWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4370 == '\0') {
    FUN_180315380(TI_OptionsWindow);
    cRam00000001834b4370 = '\x01';
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_OptionsWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b4370 == '\0') {
      FUN_180315380(TI_OptionsWindow);
      cRam00000001834b4370 = '\x01';
    }
    if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(TI_OptionsWindow + 0xb8) == 0) goto code_r0x000180775b92;
    if (*(char *)(**(longlong **)(TI_OptionsWindow + 0xb8) + 0x88) != '\0') {
      if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b4370 == '\0') {
        FUN_180315380(TI_OptionsWindow);
        cRam00000001834b4370 = '\x01';
      }
      if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar1 = **(undefined8 **)(TI_OptionsWindow + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Object__DestroyImmediate(uVar1,0);
    }
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4370 == '\0') {
    FUN_180315380(TI_OptionsWindow);
    cRam00000001834b4370 = '\x01';
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_OptionsWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<OptionsWindow>);
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4370 == '\0') {
    FUN_180315380(TI_OptionsWindow);
    cRam00000001834b4370 = '\x01';
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_OptionsWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_OptionsWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__AplicaTudo__1804a3a50(1,0);
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3eac == '\0') {
    FUN_180315380(TI_SparkFps);
    cRam00000001834b3eac = '\x01';
  }
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_SparkFps + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkFps>);
  }
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3eac == '\0') {
    FUN_180315380(TI_SparkFps);
    cRam00000001834b3eac = '\x01';
  }
  if (*(int *)(TI_SparkFps + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkFps + 0xb8) == 0) goto code_r0x000180775b92;
  SparkFps__Monta__18049a430
            (**(longlong **)(TI_SparkFps + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b4371 == '\0') {
    FUN_180315380(TI_MacroWindow);
    cRam00000001834b4371 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_MacroWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<MacroWindow>);
  }
  if (cRam00000001834b4371 == '\0') {
    FUN_180315380(TI_MacroWindow);
    cRam00000001834b4371 = '\x01';
  }
  if (**(longlong **)(TI_MacroWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_MacroWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3bb7 == '\0') {
    FUN_180315380(TI_FriendWindow);
    cRam00000001834b3bb7 = '\x01';
  }
  if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_FriendWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<FriendWindow>);
  }
  if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3bb7 == '\0') {
    FUN_180315380(TI_FriendWindow);
    cRam00000001834b3bb7 = '\x01';
  }
  if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_FriendWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_FriendWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b4425 == '\0') {
    FUN_180315380(TI_ManorWindow);
    cRam00000001834b4425 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_ManorWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<ManorWindow>);
  }
  if (cRam00000001834b4425 == '\0') {
    FUN_180315380(TI_ManorWindow);
    cRam00000001834b4425 = '\x01';
  }
  if (**(longlong **)(TI_ManorWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_ManorWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4426 == '\0') {
    FUN_180315380(TI_OlympiadWindow);
    cRam00000001834b4426 = '\x01';
  }
  if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_OlympiadWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<OlympiadWindow>);
  }
  if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4426 == '\0') {
    FUN_180315380(TI_OlympiadWindow);
    cRam00000001834b4426 = '\x01';
  }
  if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_OlympiadWindow + 0xb8) == 0) goto code_r0x000180775b92;
  OlympiadWindow__Monta__180686e50
            (**(longlong **)(TI_OlympiadWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(TI_PetWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3fe9 == '\0') {
    FUN_180315380(TI_PetWindow);
    cRam00000001834b3fe9 = '\x01';
  }
  if (*(int *)(TI_PetWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_PetWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<PetWindow>);
  }
  if (*(int *)(TI_PetWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3fe9 == '\0') {
    FUN_180315380(TI_PetWindow);
    cRam00000001834b3fe9 = '\x01';
  }
  if (*(int *)(TI_PetWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_PetWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_PetWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(TI_BoardWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b436f == '\0') {
    FUN_180315380(TI_BoardWindow);
    cRam00000001834b436f = '\x01';
  }
  if (*(int *)(TI_BoardWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_BoardWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<BoardWindow>);
  }
  if (*(int *)(TI_BoardWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b436f == '\0') {
    FUN_180315380(TI_BoardWindow);
    cRam00000001834b436f = '\x01';
  }
  if (*(int *)(TI_BoardWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_BoardWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_BoardWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(TI_SevenSignsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4427 == '\0') {
    FUN_180315380(TI_SevenSignsWindow);
    cRam00000001834b4427 = '\x01';
  }
  if (*(int *)(TI_SevenSignsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_SevenSignsWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SevenSignsWindow>);
  }
  if (*(int *)(TI_SevenSignsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4427 == '\0') {
    FUN_180315380(TI_SevenSignsWindow);
    cRam00000001834b4427 = '\x01';
  }
  if (*(int *)(TI_SevenSignsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SevenSignsWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SevenSignsWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(TI_VipWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b436d == '\0') {
    FUN_180315380(TI_VipWindow);
    cRam00000001834b436d = '\x01';
  }
  if (*(int *)(TI_VipWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_VipWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<VipWindow>);
  }
  if (*(int *)(TI_VipWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b436d == '\0') {
    FUN_180315380(TI_VipWindow);
    cRam00000001834b436d = '\x01';
  }
  if (*(int *)(TI_VipWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar2 = (longlong *)**(longlong **)(TI_VipWindow + 0xb8);
  if (plVar2 == (longlong *)0x0) goto code_r0x000180775b92;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
  L2Window__AddWindow__1807995d0(plVar2,uVar1,0);
  VipWindow__MontaInsignia__180785e10(plVar2,uVar1,0);
  if (cRam00000001834b4428 == '\0') {
    FUN_180315380(TI_SiegeWindow);
    cRam00000001834b4428 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SiegeWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SiegeWindow>);
  }
  if (cRam00000001834b4428 == '\0') {
    FUN_180315380(TI_SiegeWindow);
    cRam00000001834b4428 = '\x01';
  }
  if (**(longlong **)(TI_SiegeWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SiegeWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b37ff == '\0') {
    FUN_180315380(TI_SparkQuestInfoWindow);
    cRam00000001834b37ff = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkQuestInfoWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkQuestInfoWindow>);
  }
  if (cRam00000001834b37ff == '\0') {
    FUN_180315380(TI_SparkQuestInfoWindow);
    cRam00000001834b37ff = '\x01';
  }
  if (**(longlong **)(TI_SparkQuestInfoWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SparkQuestInfoWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b352f == '\0') {
    FUN_180315380(TI_SparkTutorialWindow);
    cRam00000001834b352f = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkTutorialWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkTutorialWindow>);
  }
  if (cRam00000001834b352f == '\0') {
    FUN_180315380(TI_SparkTutorialWindow);
    cRam00000001834b352f = '\x01';
  }
  if (**(longlong **)(TI_SparkTutorialWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_SparkTutorialWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b436e == '\0') {
    FUN_180315380(TI_MailWindow);
    cRam00000001834b436e = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_MailWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<MailWindow>);
  }
  if (cRam00000001834b436e == '\0') {
    FUN_180315380(TI_MailWindow);
    cRam00000001834b436e = '\x01';
  }
  if (**(longlong **)(TI_MailWindow + 0xb8) == 0) goto code_r0x000180775b92;
  SparkRefinoWindow__Monta__1805afce0
            (**(longlong **)(TI_MailWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
  if (cRam00000001834b4429 == '\0') {
    FUN_180315380(TI_WarehouseWindow);
    cRam00000001834b4429 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_WarehouseWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b92;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<WarehouseWindow>);
  }
  if (cRam00000001834b4429 == '\0') {
    FUN_180315380(TI_WarehouseWindow);
    cRam00000001834b4429 = '\x01';
  }
  plVar2 = (longlong *)**(longlong **)(TI_WarehouseWindow + 0xb8);
  if (plVar2 == (longlong *)0x0) goto code_r0x000180775b92;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
  L2Window__AddWindow__1807995d0(plVar2,uVar1,0);
  if (cRam00000001834b3eaa == '\0') {
    FUN_180315380(TI_SparkEnchantWindow);
    cRam00000001834b3eaa = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_SparkEnchantWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) goto code_r0x000180775b98;
    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkEnchantWindow>);
  }
  if (cRam00000001834b3eaa == '\0') {
    FUN_180315380(TI_SparkEnchantWindow);
    cRam00000001834b3eaa = '\x01';
  }
  if (**(longlong **)(TI_SparkEnchantWindow + 0xb8) != 0) {
    SparkRefinoWindow__Monta__1805afce0
              (**(longlong **)(TI_SparkEnchantWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
    if (cRam00000001834b3fe2 == '\0') {
      FUN_180315380(TI_SparkQuestHud);
      cRam00000001834b3fe2 = '\x01';
    }
    uVar1 = **(undefined8 **)(TI_SparkQuestHud + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
    if (cVar4 != '\0') {
      lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar5 == 0) goto code_r0x000180775b98;
      FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkQuestHud>);
    }
    if (cRam00000001834b3fe2 == '\0') {
      FUN_180315380(TI_SparkQuestHud);
      cRam00000001834b3fe2 = '\x01';
    }
    if (**(longlong **)(TI_SparkQuestHud + 0xb8) != 0) {
      SparkQuestHud__Monta__1806b1a70
                (**(longlong **)(TI_SparkQuestHud + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b33d3 == '\0') {
        FUN_180315380(TI_SparkMapaWindow);
        cRam00000001834b33d3 = '\x01';
      }
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar1 = **(undefined8 **)(TI_SparkMapaWindow + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
      if (cVar4 != '\0') {
        lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
        if (lVar5 == 0) goto code_r0x000180775b98;
        FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkMapaWindow>);
      }
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b33d3 == '\0') {
        FUN_180315380(TI_SparkMapaWindow);
        cRam00000001834b33d3 = '\x01';
      }
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (**(longlong **)(TI_SparkMapaWindow + 0xb8) != 0) {
        SparkRefinoWindow__Monta__1805afce0
                  (**(longlong **)(TI_SparkMapaWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0);
        if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (cRam00000001834b3d5a == '\0') {
          FUN_180315380(TI_SparkRadarWindow);
          cRam00000001834b3d5a = '\x01';
        }
        if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar1 = **(undefined8 **)(TI_SparkRadarWindow + 0xb8);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
        if (cVar4 != '\0') {
          lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
          if (lVar5 == 0) goto code_r0x000180775b98;
          FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkRadarWindow>);
        }
        if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (cRam00000001834b3d5a == '\0') {
          FUN_180315380(TI_SparkRadarWindow);
          cRam00000001834b3d5a = '\x01';
        }
        if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (**(longlong **)(TI_SparkRadarWindow + 0xb8) != 0) {
          SparkRefinoWindow__Monta__1805afce0
                    (**(longlong **)(TI_SparkRadarWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),0)
          ;
          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b3bb8 == '\0') {
            FUN_180315380(TI_ClanWindow);
            cRam00000001834b3bb8 = '\x01';
          }
          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar1 = **(undefined8 **)(TI_ClanWindow + 0xb8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
          if (cVar4 != '\0') {
            lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
            if (lVar5 == 0) goto code_r0x000180775b98;
            FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<ClanWindow>);
          }
          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b3bb8 == '\0') {
            FUN_180315380(TI_ClanWindow);
            cRam00000001834b3bb8 = '\x01';
          }
          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (**(longlong **)(TI_ClanWindow + 0xb8) != 0) {
            SparkRefinoWindow__Monta__1805afce0
                      (**(longlong **)(TI_ClanWindow + 0xb8),*(undefined8 *)(param_1 + 0x48),
                       0);
            if (cRam00000001834b442a == '\0') {
              FUN_180315380(TI_MultisellWindow);
              cRam00000001834b442a = '\x01';
            }
            uVar1 = **(undefined8 **)(TI_MultisellWindow + 0xb8);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
            if (cVar4 != '\0') {
              lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
              if (lVar5 == 0) goto code_r0x000180775b98;
              FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<MultisellWindow>);
            }
            if (cRam00000001834b442a == '\0') {
              FUN_180315380(TI_MultisellWindow);
              cRam00000001834b442a = '\x01';
            }
            if (**(longlong **)(TI_MultisellWindow + 0xb8) != 0) {
              SparkRefinoWindow__Monta__1805afce0
                        (**(longlong **)(TI_MultisellWindow + 0xb8),
                         *(undefined8 *)(param_1 + 0x48),0);
              if (cRam00000001834b442b == '\0') {
                FUN_180315380(TI_SparkFindWindow);
                cRam00000001834b442b = '\x01';
              }
              uVar1 = **(undefined8 **)(TI_SparkFindWindow + 0xb8);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
              if (cVar4 != '\0') {
                lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
                if (lVar5 == 0) goto code_r0x000180775b98;
                FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkFindWindow>);
              }
              if (cRam00000001834b442b == '\0') {
                FUN_180315380(TI_SparkFindWindow);
                cRam00000001834b442b = '\x01';
              }
              if (**(longlong **)(TI_SparkFindWindow + 0xb8) != 0) {
                SparkRefinoWindow__Monta__1805afce0
                          (**(longlong **)(TI_SparkFindWindow + 0xb8),
                           *(undefined8 *)(param_1 + 0x48),0);
                if (cRam00000001834b4240 == '\0') {
                  FUN_180315380(TI_SparkDropWindow);
                  cRam00000001834b4240 = '\x01';
                }
                uVar1 = **(undefined8 **)(TI_SparkDropWindow + 0xb8);
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
                if (cVar4 != '\0') {
                  lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
                  if (lVar5 == 0) goto code_r0x000180775b98;
                  FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkDropWindow>);
                }
                if (cRam00000001834b4240 == '\0') {
                  FUN_180315380(TI_SparkDropWindow);
                  cRam00000001834b4240 = '\x01';
                }
                if (**(longlong **)(TI_SparkDropWindow + 0xb8) != 0) {
                  SparkRefinoWindow__Monta__1805afce0
                            (**(longlong **)(TI_SparkDropWindow + 0xb8),
                             *(undefined8 *)(param_1 + 0x48),0);
                  if (*(int *)(TI_SparkEnchantSkillWindow + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  if (cRam00000001834b442c == '\0') {
                    FUN_180315380(TI_SparkEnchantSkillWindow);
                    cRam00000001834b442c = '\x01';
                  }
                  if (*(int *)(TI_SparkEnchantSkillWindow + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar1 = **(undefined8 **)(TI_SparkEnchantSkillWindow + 0xb8);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
                  if (cVar4 != '\0') {
                    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
                    if (lVar5 == 0) goto code_r0x000180775b98;
                    FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkEnchantSkillWindow>);
                  }
                  if (*(int *)(TI_SparkEnchantSkillWindow + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  if (cRam00000001834b442c == '\0') {
                    FUN_180315380(TI_SparkEnchantSkillWindow);
                    cRam00000001834b442c = '\x01';
                  }
                  if (*(int *)(TI_SparkEnchantSkillWindow + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  if (**(longlong **)(TI_SparkEnchantSkillWindow + 0xb8) != 0) {
                    SparkRefinoWindow__Monta__1805afce0
                              (**(longlong **)(TI_SparkEnchantSkillWindow + 0xb8),
                               *(undefined8 *)(param_1 + 0x48),0);
                    if (cRam00000001834b442d == '\0') {
                      FUN_180315380(TI_FindStoreWindow);
                      cRam00000001834b442d = '\x01';
                    }
                    uVar1 = **(undefined8 **)(TI_FindStoreWindow + 0xb8);
                    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
                    if (cVar4 != '\0') {
                      lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
                      if (lVar5 == 0) goto code_r0x000180775b98;
                      FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<FindStoreWindow>);
                    }
                    if (cRam00000001834b442d == '\0') {
                      FUN_180315380(TI_FindStoreWindow);
                      cRam00000001834b442d = '\x01';
                    }
                    if (**(longlong **)(TI_FindStoreWindow + 0xb8) != 0) {
                      SparkRefinoWindow__Monta__1805afce0
                                (**(longlong **)(TI_FindStoreWindow + 0xb8),
                                 *(undefined8 *)(param_1 + 0x48),0);
                      if (cRam00000001834b442e == '\0') {
                        FUN_180315380(TI_SparkLojaCristalWindow);
                        cRam00000001834b442e = '\x01';
                      }
                      uVar1 = **(undefined8 **)(TI_SparkLojaCristalWindow + 0xb8);
                      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
                      if (cVar4 != '\0') {
                        lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
                        if (lVar5 == 0) goto code_r0x000180775b98;
                        FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkLojaCristalWindow>);
                      }
                      if (cRam00000001834b442e == '\0') {
                        FUN_180315380(TI_SparkLojaCristalWindow);
                        cRam00000001834b442e = '\x01';
                      }
                      if (**(longlong **)(TI_SparkLojaCristalWindow + 0xb8) != 0) {
                        SparkRefinoWindow__Monta__1805afce0
                                  (**(longlong **)(TI_SparkLojaCristalWindow + 0xb8),
                                   *(undefined8 *)(param_1 + 0x48),0);
                        if (cRam00000001834b32cb == '\0') {
                          FUN_180315380(TI_SkillbarWindow);
                          cRam00000001834b32cb = '\x01';
                        }
                        uVar1 = **(undefined8 **)(TI_SkillbarWindow + 0xb8);
                        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                        if (cVar4 != '\0') {
                          if (cRam00000001834b32cb == '\0') {
                            FUN_180315380(TI_SkillbarWindow);
                            cRam00000001834b32cb = '\x01';
                          }
                          if (**(longlong **)(TI_SkillbarWindow + 0xb8) == 0)
                          goto code_r0x000180775b98;
                          L2Window__AddWindow__1807995d0
                                    (**(longlong **)(TI_SkillbarWindow + 0xb8),
                                     *(undefined8 *)(param_1 + 0x48),0);
                        }
                        if (*(int *)(TI_AutoPotionWindow + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        if (cRam00000001834b442f == '\0') {
                          FUN_180315380(TI_AutoPotionWindow);
                          cRam00000001834b442f = '\x01';
                        }
                        if (*(int *)(TI_AutoPotionWindow + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar1 = **(undefined8 **)(TI_AutoPotionWindow + 0xb8);
                        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
                        if (cVar4 != '\0') {
                          lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
                          if (lVar5 == 0) goto code_r0x000180775b98;
                          FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<AutoPotionWindow>);
                        }
                        if (*(int *)(TI_AutoPotionWindow + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        if (cRam00000001834b442f == '\0') {
                          FUN_180315380(TI_AutoPotionWindow);
                          cRam00000001834b442f = '\x01';
                        }
                        if (*(int *)(TI_AutoPotionWindow + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        if (**(longlong **)(TI_AutoPotionWindow + 0xb8) != 0) {
                          AutoPotionWindow__Monta__1805ab6c0
                                    (**(longlong **)(TI_AutoPotionWindow + 0xb8),
                                     *(undefined8 *)(param_1 + 0x48),0);
                          if (cRam00000001834b30fc == '\0') {
                            FUN_180315380(TI_InventoryWindow);
                            cRam00000001834b30fc = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_InventoryWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (cRam00000001834b30fc == '\0') {
                              FUN_180315380(TI_InventoryWindow);
                              cRam00000001834b30fc = '\x01';
                            }
                            if (**(longlong **)(TI_InventoryWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_InventoryWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                            if (cRam00000001834b30fc == '\0') {
                              FUN_180315380(TI_InventoryWindow);
                              cRam00000001834b30fc = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_InventoryWindow + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (cRam00000001834b31cd == '\0') {
                            FUN_180315380(TI_CharacterInfoWindow);
                            cRam00000001834b31cd = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_CharacterInfoWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (cRam00000001834b31cd == '\0') {
                              FUN_180315380(TI_CharacterInfoWindow);
                              cRam00000001834b31cd = '\x01';
                            }
                            if (**(longlong **)(TI_CharacterInfoWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_CharacterInfoWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                            if (cRam00000001834b31cd == '\0') {
                              FUN_180315380(TI_CharacterInfoWindow);
                              cRam00000001834b31cd = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_CharacterInfoWindow + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          if (cRam00000001834b3542 == '\0') {
                            FUN_180315380(TI_ActionWindow);
                            cRam00000001834b3542 = '\x01';
                          }
                          if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar1 = **(undefined8 **)(TI_ActionWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            if (cRam00000001834b3542 == '\0') {
                              FUN_180315380(TI_ActionWindow);
                              cRam00000001834b3542 = '\x01';
                            }
                            if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            if (**(longlong **)(TI_ActionWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_ActionWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                            if (cRam00000001834b3542 == '\0') {
                              FUN_180315380(TI_ActionWindow);
                              cRam00000001834b3542 = '\x01';
                            }
                            if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
                              func_0x000180315660(TI_ActionWindow);
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_ActionWindow + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (*(int *)(TI_NpcHtmlWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          if (cRam00000001834b31ca == '\0') {
                            FUN_180315380(TI_NpcHtmlWindow);
                            cRam00000001834b31ca = '\x01';
                          }
                          if (*(int *)(TI_NpcHtmlWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar1 = **(undefined8 **)(TI_NpcHtmlWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (*(int *)(TI_NpcHtmlWindow + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            if (cRam00000001834b31ca == '\0') {
                              FUN_180315380(TI_NpcHtmlWindow);
                              cRam00000001834b31ca = '\x01';
                            }
                            if (*(int *)(TI_NpcHtmlWindow + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            if (**(longlong **)(TI_NpcHtmlWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_NpcHtmlWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                          }
                          if (DAT_1834b3801 == '\0') {
                            FUN_180315380(TI_ShopWindow);
                            DAT_1834b3801 = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_ShopWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (DAT_1834b3801 == '\0') {
                              FUN_180315380(TI_ShopWindow);
                              DAT_1834b3801 = '\x01';
                            }
                            if (**(longlong **)(TI_ShopWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_ShopWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                            if (DAT_1834b3801 == '\0') {
                              FUN_180315380(TI_ShopWindow);
                              DAT_1834b3801 = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_ShopWindow + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (cRam00000001834b31d6 == '\0') {
                            FUN_180315380(TI_RestartLocationWindow);
                            cRam00000001834b31d6 = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_RestartLocationWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (cRam00000001834b31d6 == '\0') {
                              FUN_180315380(TI_RestartLocationWindow);
                              cRam00000001834b31d6 = '\x01';
                            }
                            if (**(longlong **)(TI_RestartLocationWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_RestartLocationWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                          }
                          if (*(int *)(TI_TargetWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          if (cRam00000001834b4430 == '\0') {
                            FUN_180315380(TI_TargetWindow);
                            cRam00000001834b4430 = '\x01';
                          }
                          if (*(int *)(TI_TargetWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar1 = **(undefined8 **)(TI_TargetWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (*(int *)(TI_TargetWindow + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            if (cRam00000001834b4430 == '\0') {
                              FUN_180315380(TI_TargetWindow);
                              cRam00000001834b4430 = '\x01';
                            }
                            if (*(int *)(TI_TargetWindow + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            if (**(longlong **)(TI_TargetWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_TargetWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                          }
                          if (cRam00000001834b436c == '\0') {
                            FUN_180315380(TI_ExitWindow);
                            cRam00000001834b436c = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_ExitWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (cRam00000001834b436c == '\0') {
                              FUN_180315380(TI_ExitWindow);
                              cRam00000001834b436c = '\x01';
                            }
                            if (**(longlong **)(TI_ExitWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_ExitWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                          }
                          if (cRam00000001834b3b3c == '\0') {
                            FUN_180315380(TI_L2ToolTip);
                            cRam00000001834b3b3c = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_L2ToolTip + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (cRam00000001834b3b3c == '\0') {
                              FUN_180315380(TI_L2ToolTip);
                              cRam00000001834b3b3c = '\x01';
                            }
                            if (**(longlong **)(TI_L2ToolTip + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_L2ToolTip + 0xb8),
                                       *(undefined8 *)(param_1 + 0x58),0);
                            if (cRam00000001834b3b3c == '\0') {
                              FUN_180315380(TI_L2ToolTip);
                              cRam00000001834b3b3c = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_L2ToolTip + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (DAT_1834b3d0f == '\0') {
                            FUN_180315380(TI_L2SlotManager);
                            DAT_1834b3d0f = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_L2SlotManager + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (DAT_1834b3d0f == '\0') {
                              FUN_180315380(TI_L2SlotManager);
                              DAT_1834b3d0f = '\x01';
                            }
                            if (**(longlong **)(TI_L2SlotManager + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_L2SlotManager + 0xb8),
                                       *(undefined8 *)(param_1 + 0x60),0);
                            if (DAT_1834b3d0f == '\0') {
                              FUN_180315380(TI_L2SlotManager);
                              DAT_1834b3d0f = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_L2SlotManager + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (cRam00000001834b3541 == '\0') {
                            FUN_180315380(TI_SkillWindow);
                            cRam00000001834b3541 = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_SkillWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (cRam00000001834b3541 == '\0') {
                              FUN_180315380(TI_SkillWindow);
                              cRam00000001834b3541 = '\x01';
                            }
                            if (**(longlong **)(TI_SkillWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_SkillWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                            if (cRam00000001834b3541 == '\0') {
                              FUN_180315380(TI_SkillWindow);
                              cRam00000001834b3541 = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_SkillWindow + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (cRam00000001834b3800 == '\0') {
                            FUN_180315380(TI_SkillLearnWindow);
                            cRam00000001834b3800 = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_SkillLearnWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (cRam00000001834b3800 == '\0') {
                              FUN_180315380(TI_SkillLearnWindow);
                              cRam00000001834b3800 = '\x01';
                            }
                            if (**(longlong **)(TI_SkillLearnWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_SkillLearnWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                            if (cRam00000001834b3800 == '\0') {
                              FUN_180315380(TI_SkillLearnWindow);
                              cRam00000001834b3800 = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_SkillLearnWindow + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (cRam00000001834b32cc == '\0') {
                            FUN_180315380(TI_BuffWindow);
                            cRam00000001834b32cc = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_BuffWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (cRam00000001834b32cc == '\0') {
                              FUN_180315380(TI_BuffWindow);
                              cRam00000001834b32cc = '\x01';
                            }
                            if (**(longlong **)(TI_BuffWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_BuffWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                            if (cRam00000001834b32cc == '\0') {
                              FUN_180315380(TI_BuffWindow);
                              cRam00000001834b32cc = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_BuffWindow + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (cRam00000001834b4431 == '\0') {
                            FUN_180315380(TI_DebuffWindow);
                            cRam00000001834b4431 = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_DebuffWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (cRam00000001834b4431 == '\0') {
                              FUN_180315380(TI_DebuffWindow);
                              cRam00000001834b4431 = '\x01';
                            }
                            if (**(longlong **)(TI_DebuffWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_DebuffWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x48),0);
                            if (cRam00000001834b4431 == '\0') {
                              FUN_180315380(TI_DebuffWindow);
                              cRam00000001834b4431 = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_DebuffWindow + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (DAT_1834b30fd == '\0') {
                            FUN_180315380(TI_L2ConfirmWindow);
                            DAT_1834b30fd = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_L2ConfirmWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 != '\0') {
                            if (DAT_1834b30fd == '\0') {
                              FUN_180315380(TI_L2ConfirmWindow);
                              DAT_1834b30fd = '\x01';
                            }
                            if (**(longlong **)(TI_L2ConfirmWindow + 0xb8) == 0)
                            goto code_r0x000180775b98;
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_L2ConfirmWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x50),0);
                            if (DAT_1834b30fd == '\0') {
                              FUN_180315380(TI_L2ConfirmWindow);
                              DAT_1834b30fd = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_L2ConfirmWindow + 0xb8);
                            if (plVar2 == (longlong *)0x0) goto code_r0x000180775b98;
                            (**(code **)(*plVar2 + 0x1c8))
                                      (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                          }
                          if (cRam00000001834b3dea == '\0') {
                            FUN_180315380(TI_L2InputAmountWindow);
                            cRam00000001834b3dea = '\x01';
                          }
                          uVar1 = **(undefined8 **)(TI_L2InputAmountWindow + 0xb8);
                          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
                          if (cVar4 == '\0') {
                            return;
                          }
                          if (cRam00000001834b3dea == '\0') {
                            FUN_180315380(TI_L2InputAmountWindow);
                            cRam00000001834b3dea = '\x01';
                          }
                          if (**(longlong **)(TI_L2InputAmountWindow + 0xb8) != 0) {
                            L2Window__AddWindow__1807995d0
                                      (**(longlong **)(TI_L2InputAmountWindow + 0xb8),
                                       *(undefined8 *)(param_1 + 0x50),0);
                            if (cRam00000001834b3dea == '\0') {
                              FUN_180315380(TI_L2InputAmountWindow);
                              cRam00000001834b3dea = '\x01';
                            }
                            plVar2 = (longlong *)**(longlong **)(TI_L2InputAmountWindow + 0xb8);
                            if (plVar2 != (longlong *)0x0) {
                              (**(code **)(*plVar2 + 0x1c8))
                                        (plVar2,1,*(undefined8 *)(*plVar2 + 0x1d0));
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x000180775b98:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

