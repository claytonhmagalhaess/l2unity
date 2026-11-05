// ChatWindow__Segue__1805ce320 @ 0x1805ce320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 ChatWindow__Segue__1805ce320(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte abStackX_20 [8];
  
  if (cRam00000001834b3ac8 == '\0') {
    FUN_180315380(TI_System.Action<float>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>.set_Item);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass66_0._Segue_b__0);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass66_0._Segue_b__1);
    FUN_180315380(TI_ChatWindow.<>c__DisplayClass66_0);
    cRam00000001834b3ac8 = '\x01';
  }
  abStackX_20[0] = 0;
  lVar5 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass66_0);
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 != 0) {
    *(longlong *)(lVar5 + 0x10) = param_1;
    func_0x000180314690(lVar5 + 0x10,param_1);
    *(undefined8 *)(lVar5 + 0x18) = param_2;
    func_0x000180314690(lVar5 + 0x18,param_2);
    if (*(longlong *)(param_1 + 0x120) != 0) {
      cVar3 = FUN_18125b0b0(*(longlong *)(param_1 + 0x120),*(undefined8 *)(lVar5 + 0x18),abStackX_20
                            ,MR_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>.TryGetValue);
      if (cVar3 != '\0') {
        return abStackX_20[0];
      }
      if (*(longlong *)(param_1 + 0x120) != 0) {
        FUN_18125dc20(*(longlong *)(param_1 + 0x120),*(undefined8 *)(lVar5 + 0x18),1,
                      MR_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>.set_Item);
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x348);
          uVar6 = func_0x000180315580(TI_System.Action<float>);
          FUN_180b7e1e0(uVar6,lVar5,MD_ChatWindow.__c__DisplayClass66_0._Segue_b__0,0);
          if (lVar7 != 0) {
            UnityEngine_UIElements_Scroller__add_valueChanged(lVar7,uVar6,0);
            plVar1 = *(longlong **)(lVar5 + 0x18);
            if (plVar1 != (longlong *)0x0) {
              lVar7 = (**(code **)(*plVar1 + 0x9d8))(plVar1,*(undefined8 *)(*plVar1 + 0x9e0));
              uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent>);
              FUN_18055b980(uVar6,lVar5,MD_ChatWindow.__c__DisplayClass66_0._Segue_b__1,0);
              if (lVar7 != 0) {
                FUN_180990d50(lVar7,uVar6,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>);
                return 1;
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

