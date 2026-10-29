// SparkMapaWindow__MostraHoraDoJogo__180640630 @ 0x180640630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__MostraHoraDoJogo__180640630(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3d1e == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Game time '");
    FUN_180315380(LIT_"''");
    cRam00000001834b3d1e = '\x01';
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    if (cRam00000001834b301d == '\0') {
      FUN_180315380(TI_WorldClock);
      cRam00000001834b301d = '\x01';
    }
    lVar5 = **(longlong **)(TI_WorldClock + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(lVar5,0,0);
    if (cVar3 == '\0') {
      uVar4 = 0xffffffff;
    }
    else {
      if (lVar5 == 0) goto DAT_1806407bc;
      uVar4 = WorldClock__get_MinutoDoJogo(lVar5,0);
    }
    if (uVar4 != *(uint *)(param_1 + 0x108)) {
      plVar1 = *(longlong **)(param_1 + 0x100);
      *(uint *)(param_1 + 0x108) = uVar4;
      uVar6 = LIT_"''";
      if (-1 < (int)uVar4) {
        uVar6 = WorldClock__HoraAmPm(uVar4,0);
        uVar6 = System_String__Concat(LIT_"'Game time '",uVar6,0);
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xe48))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0xe50));
        if (*(longlong *)(param_1 + 0x100) != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x100),0);
          uVar6 = FUN_180eb5810(uVar4 >> 0x1f,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
          if (lVar5 != 0) {
            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
            return;
          }
        }
      }
DAT_1806407bc:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

