// AbstractSkillbar__DeleteShortcut__1806f8300 @ 0x1806f8300

/* WARNING: Possible PIC construction at 0x0001806f81fe: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001806f8261: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001806f8203) */
/* WARNING: Removing unreachable block (ram,0x0001806f8232) */
/* WARNING: Removing unreachable block (ram,0x0001806f8237) */
/* WARNING: Removing unreachable block (ram,0x0001806f8266) */
/* WARNING: Removing unreachable block (ram,0x0001806f8276) */
/* WARNING: Removing unreachable block (ram,0x0001806f8289) */
/* WARNING: Removing unreachable block (ram,0x0001806f82bb) */
/* WARNING: Removing unreachable block (ram,0x0001806f82f4) */
/* WARNING: Removing unreachable block (ram,0x0001806f82c8) */
/* WARNING: Removing unreachable block (ram,0x0001806f8293) */
/* WARNING: Removing unreachable block (ram,0x000181645af0) */
/* WARNING: Removing unreachable block (ram,0x000181645b12) */
/* WARNING: Removing unreachable block (ram,0x000181645b20) */
/* WARNING: Removing unreachable block (ram,0x000181645b3d) */
/* WARNING: Removing unreachable block (ram,0x000181645b27) */
/* WARNING: Removing unreachable block (ram,0x000181645b5a) */
/* WARNING: Removing unreachable block (ram,0x000181645b5c) */
/* WARNING: Removing unreachable block (ram,0x000181645b63) */
/* WARNING: Removing unreachable block (ram,0x000181645b67) */
/* WARNING: Removing unreachable block (ram,0x000181645b80) */
/* WARNING: Removing unreachable block (ram,0x000181645bb8) */
/* WARNING: Removing unreachable block (ram,0x000181645b8f) */
/* WARNING: Removing unreachable block (ram,0x000181645bbe) */
/* WARNING: Removing unreachable block (ram,0x000181645b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong AbstractSkillbar__DeleteShortcut__1806f8300(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uStackX_8;
  undefined *in_stack_ffffffffffffffd0;
  
  if (cRam00000001834b415d == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Remove);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Item);
    in_stack_ffffffffffffffd0 = &UNK_1806f8359;
    FUN_180315380();
    cRam00000001834b415d = '\x01';
  }
  iVar8 = 0;
  lVar5 = *(longlong *)(param_1 + 0x38);
  while (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) <= iVar8) {
AbstractSkillbar__CreateSlot__1806f8080:
      param_2 = param_2 % 0xc;
      if (cRam00000001834b4158 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Add,param_2,0);
        FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
        FUN_180315380(TI_SkillbarSlot);
        cRam00000001834b4158 = '\x01';
      }
      if ((*(longlong *)(param_1 + 0x30) != 0) &&
         (lVar5 = FUN_180bbafe0(*(longlong *)(param_1 + 0x30),param_2,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item), lVar5 != 0))
      {
        UnityEngine_UIElements_VisualElement__Clear(lVar5,0);
        if (DAT_1834b3d0f == '\0') {
          FUN_180315380(TI_L2SlotManager);
          DAT_1834b3d0f = '\x01';
        }
        if (((**(longlong **)(TI_L2SlotManager + 0xb8) != 0) &&
            (lVar4 = *(longlong *)(**(longlong **)(TI_L2SlotManager + 0xb8) + 0xc0), lVar4 != 0)) &&
           (lVar4 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(lVar4,0), lVar4 != 0)) {
          uVar6 = UnityEngine_UIElements_VisualElement__get_Item(lVar4,0,0);
          UnityEngine_UIElements_VisualElement__Add(lVar5,uVar6,0);
          iVar8 = *(int *)(param_1 + 0x24);
          lVar5 = func_0x000180315580(TI_SkillbarSlot);
          if (cRam00000001834b416a == '\0') {
            FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
            FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
            FUN_180315380(LIT_"'Key'");
            cRam00000001834b416a = '\x01';
          }
          uVar7 = L2DraggableSlot___ctor__180771210
                            (lVar5,param_2 + iVar8 * 0xc,uVar6,5,1,
                             (ulonglong)in_stack_ffffffffffffffd0 & 0xffffffffffffff00,0);
          *(undefined8 *)(lVar5 + 0x40) = uVar6;
          if (_DAT_1834c7d58 != 0) {
            uVar9 = (uint)(lVar5 + 0x40U >> 0xc);
            puVar1 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
            do {
              uVar2 = *puVar1;
              LOCK();
              uVar7 = *puVar1;
              bVar10 = uVar2 == uVar7;
              if (bVar10) {
                *puVar1 = uVar2 | 1L << (uVar9 & 0x3f);
                uVar7 = uVar2;
              }
              UNLOCK();
            } while (!bVar10);
          }
          return uVar7;
        }
      }
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    if (*(longlong *)(param_1 + 0x38) == 0) break;
    in_stack_ffffffffffffffd0 = &UNK_1806f839a;
    lVar5 = FUN_180bbafe0(*(longlong *)(param_1 + 0x38),iVar8,MR_System.Collections.Generic.List<SkillbarSlot>.get_Item);
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x14) == param_2) {
      uStackX_8 = CONCAT44(uStackX_8._4_4_,param_2);
      uVar6 = func_0x000180314670(_DAT_1834c6268,&uStackX_8);
      uVar6 = System_String__Format(LIT_"'Succesfully deleted slot {0}.'",uVar6,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__Log(uVar6,0);
      lVar5 = *(longlong *)(param_1 + 0x38);
      if (lVar5 == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      uVar6 = FUN_180bbafe0(lVar5,iVar8,MR_System.Collections.Generic.List<SkillbarSlot>.get_Item);
      in_stack_ffffffffffffffd0 = &UNK_1806f8430;
      FUN_18164eb60(lVar5,uVar6,MR_System.Collections.Generic.List<SkillbarSlot>.Remove);
      goto AbstractSkillbar__CreateSlot__1806f8080;
    }
    iVar8 = iVar8 + 1;
    lVar5 = *(longlong *)(param_1 + 0x38);
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}

