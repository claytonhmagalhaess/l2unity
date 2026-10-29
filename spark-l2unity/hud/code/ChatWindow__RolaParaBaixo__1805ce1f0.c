// ChatWindow__RolaParaBaixo__1805ce1f0 @ 0x1805ce1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__RolaParaBaixo__1805ce1f0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  if (cRam00000001834b3ae8 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass113_0._RolaParaBaixo_b__0);
    FUN_180315380(TI_ChatWindow.<>c__DisplayClass113_0);
    cRam00000001834b3ae8 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass113_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    func_0x000180314690(lVar4 + 0x10,param_2);
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      lVar5 = func_0x0001818f3de0(*(longlong *)(lVar4 + 0x10),0);
      uVar6 = func_0x000180315580(TI_System.Action);
      FUN_1816a9c60(uVar6,lVar4,MD_ChatWindow.__c__DisplayClass113_0._RolaParaBaixo_b__0,0);
      if (lVar5 != 0) {
        plVar7 = (longlong *)FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,lVar5,uVar6);
        if (plVar7 != (longlong *)0x0) {
          uVar2 = 0;
          lVar4 = *plVar7;
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar2 * 0x10) ==
                  TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
                puVar3 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar2 * 0x10) + 4)
                          * 0x10 + 0x138 + lVar4);
                goto LAB_180002080;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar3 = (undefined8 *)FUN_180312860(plVar7);
LAB_180002080:
                    /* WARNING: Could not recover jumptable at 0x000180002099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar7,(param_3 & 0xff ^ 1) << 4,puVar3[1]);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

