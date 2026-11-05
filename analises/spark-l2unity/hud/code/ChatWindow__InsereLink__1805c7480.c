// ChatWindow__InsereLink__1805c7480 @ 0x1805c7480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__InsereLink__1805c7480(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  
  if (cRam00000001834b3adf == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.get_cursorIndex);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.get_maxLength);
    FUN_180315380(MD_ChatWindow.__c__DisplayClass102_0._InsereLink_b__0);
    FUN_180315380(TI_ChatWindow.<>c__DisplayClass102_0);
    FUN_180315380(LIT_"''");
    cRam00000001834b3adf = '\x01';
  }
  lVar7 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass102_0);
  Gear__UpdateWeaponType__1803dadf0(lVar7,0);
  if (lVar7 != 0) {
    *(longlong *)(lVar7 + 0x10) = param_1;
    func_0x000180314690(lVar7 + 0x10,param_1);
    if (((*(char *)(param_1 + 0x118) == '\0') || (*(char *)(param_1 + 0x128) != '\0')) ||
       (cVar4 = func_0x000181707e50(param_2,0), cVar4 != '\0')) {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x108);
    if (plVar2 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar2 + 0xa78))(plVar2,*(undefined8 *)(*plVar2 + 0xa80));
      lVar10 = LIT_"''";
      if (lVar8 != 0) {
        lVar10 = lVar8;
      }
      if ((*(longlong *)(param_1 + 0x108) != 0) &&
         (iVar5 = FUN_180effb90(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_cursorIndex), lVar10 != 0))
      {
        if (iVar5 < 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(lVar10 + 0x10);
          if (iVar5 <= *(int *)(lVar10 + 0x10)) {
            iVar11 = iVar5;
          }
        }
        if (*(longlong *)(param_1 + 0x108) != 0) {
          iVar5 = FUN_180f01f60(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_maxLength);
          if (0 < iVar5) {
            if ((param_2 == 0) || (*(longlong *)(param_1 + 0x108) == 0)) goto code_r0x0001805c7755;
            iVar5 = *(int *)(lVar10 + 0x10);
            iVar1 = *(int *)(param_2 + 0x10);
            iVar6 = FUN_180f01f60(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_maxLength);
            if (iVar6 < iVar1 + iVar5) {
              return;
            }
          }
          plVar2 = *(longlong **)(param_1 + 0x108);
          uVar9 = System_String__Insert(lVar10,iVar11,param_2,0);
          if ((plVar2 != (longlong *)0x0) &&
             ((**(code **)(*plVar2 + 0xa88))(plVar2,uVar9,*(undefined8 *)(*plVar2 + 0xa90)),
             param_2 != 0)) {
            *(int *)(lVar7 + 0x18) = *(int *)(param_2 + 0x10) + iVar11;
            if (*(char *)(param_1 + 0x88) == '\0') {
              uVar9 = ChatWindow__OpenChat__1805cc030(param_1,0);
              UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar9,0);
            }
            else {
              plVar2 = *(longlong **)(param_1 + 0x108);
              if (plVar2 == (longlong *)0x0) goto code_r0x0001805c7755;
              (**(code **)(*plVar2 + 0x268))(plVar2,*(undefined8 *)(*plVar2 + 0x270));
            }
            if (*(longlong *)(param_1 + 0x108) != 0) {
              lVar10 = func_0x0001818f3de0(*(longlong *)(param_1 + 0x108),0);
              uVar9 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(uVar9,lVar7,MD_ChatWindow.__c__DisplayClass102_0._InsereLink_b__0,0);
              if ((lVar10 != 0) &&
                 (lVar7 = FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,lVar10,uVar9), lVar7 != 0)) {
                FUN_180002030(3,TI_UnityEngine.UIElements.IVisualElementScheduledItem,lVar7,0x32);
                return;
              }
            }
          }
        }
      }
    }
  }
code_r0x0001805c7755:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

