// ChatWindow__ComecaCom__1805c6520 @ 0x1805c6520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__ComecaCom__1805c6520(longlong param_1,longlong param_2)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (cRam00000001834b3ad3 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_ChatWindow._ComecaCom_b__89_0);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(LIT_"''");
    cRam00000001834b3ad3 = '\x01';
  }
  lVar4 = LIT_"''";
  if (param_2 != 0) {
    lVar4 = param_2;
  }
  plVar6 = *(longlong **)(param_1 + 0x108);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0xa88))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0xa90));
    if (cRam00000001834b3acb == '\0') {
      FUN_180315380(TI_ChatWindow.<OpenChat>d__73);
      cRam00000001834b3acb = '\x01';
    }
    lVar4 = func_0x000180315580(TI_ChatWindow.<OpenChat>d__73);
    Gear__UpdateWeaponType__1803dadf0(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    *(longlong *)(lVar4 + 0x20) = param_1;
    func_0x000180314690(lVar4 + 0x20,param_1);
    UnityEngine_MonoBehaviour__StartCoroutine(param_1,lVar4,0);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar4 = func_0x0001818f3de0(*(longlong *)(param_1 + 0x108),0);
      uVar5 = func_0x000180315580(TI_System.Action);
      FUN_1816a9c60(uVar5,param_1,MD_ChatWindow._ComecaCom_b__89_0,0);
      if (lVar4 != 0) {
        plVar6 = (longlong *)FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,lVar4,uVar5);
        if (plVar6 != (longlong *)0x0) {
          uVar2 = 0;
          lVar4 = *plVar6;
          if (*(ushort *)(lVar4 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar2 * 0x10) ==
                  TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
                puVar3 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar2 * 0x10) + 3)
                          * 0x10 + 0x138 + lVar4);
                goto LAB_180002080;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(ushort *)(lVar4 + 0x12e));
          }
          puVar3 = (undefined8 *)FUN_180312860(plVar6);
LAB_180002080:
                    /* WARNING: Could not recover jumptable at 0x000180002099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar6,0x32,puVar3[1]);
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

