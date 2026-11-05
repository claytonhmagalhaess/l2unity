// ChatWindow__TrocaAba__1805cf1e0 @ 0x1805cf1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__TrocaAba__1805cf1e0(longlong param_1,uint param_2)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3abd == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380();
    cRam00000001834b3abd = '\x01';
  }
  lVar7 = *(longlong *)(param_1 + 200);
  uVar8 = 0;
  *(uint *)(param_1 + 0x110) = param_2;
  do {
    if (lVar7 == 0) {
code_r0x0001805cf2fb:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar4 = *(longlong *)(param_1 + 200);
    if (*(int *)(lVar7 + 0x18) <= (int)uVar8) {
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= param_2) {
code_r0x0001805cf301:
          FUN_1803155c0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)param_2 * 8);
        if (cRam00000001834b3ae8 == '\0') {
          FUN_180315380(TI_System.Action,uVar5,1,0,unaff_RDI);
          FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
          FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
          FUN_180315380(MD_ChatWindow.__c__DisplayClass113_0._RolaParaBaixo_b__0);
          FUN_180315380(TI_ChatWindow.<>c__DisplayClass113_0);
          cRam00000001834b3ae8 = '\x01';
        }
        lVar7 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass113_0);
        Gear__UpdateWeaponType__1803dadf0(lVar7,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x10) = uVar5;
          func_0x000180314690(lVar7 + 0x10,uVar5);
          if (*(longlong *)(lVar7 + 0x10) != 0) {
            lVar4 = func_0x0001818f3de0(*(longlong *)(lVar7 + 0x10),0);
            uVar5 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(uVar5,lVar7,MD_ChatWindow.__c__DisplayClass113_0._RolaParaBaixo_b__0,0);
            if ((lVar4 != 0) &&
               (plVar6 = (longlong *)FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,lVar4,uVar5),
               plVar6 != (longlong *)0x0)) {
              uVar2 = 0;
              lVar7 = *plVar6;
              if (*(ushort *)(lVar7 + 0x12e) == 0) goto LAB_180002078;
              break;
            }
          }
        }
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto code_r0x0001805cf2fb;
    }
    if (lVar4 == 0) goto code_r0x0001805cf2fb;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) goto code_r0x0001805cf301;
    lVar7 = *(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar8 * 8);
    if (lVar7 == 0) goto code_r0x0001805cf2fb;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
    FUN_180eb5810(uVar8 != param_2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar7 == 0) goto code_r0x0001805cf2fb;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7);
    ChatWindow__PintaAba__1805cc6a0(param_1,uVar8,0);
    lVar7 = *(longlong *)(param_1 + 200);
    uVar8 = uVar8 + 1;
  } while( true );
  while (uVar2 = uVar2 + 1, uVar2 < *(ushort *)(lVar7 + 0x12e)) {
    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar2 * 0x10) == TI_UnityEngine.UIElements.IVisualElementScheduledItem
       ) {
      puVar3 = (undefined8 *)
               ((longlong)(*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar2 * 0x10) + 4)
                * 0x10 + 0x138 + lVar7);
      goto LAB_180002080;
    }
  }
LAB_180002078:
  puVar3 = (undefined8 *)FUN_180312860(plVar6);
LAB_180002080:
                    /* WARNING: Could not recover jumptable at 0x000180002099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,0,puVar3[1]);
  return;
}

