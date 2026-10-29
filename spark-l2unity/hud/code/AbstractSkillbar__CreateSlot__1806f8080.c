// AbstractSkillbar__CreateSlot__1806f8080 @ 0x1806f8080

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

ulonglong AbstractSkillbar__CreateSlot__1806f8080(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  
  if (cRam00000001834b4158 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
    FUN_180315380(TI_SkillbarSlot);
    cRam00000001834b4158 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar5 = FUN_180bbafe0(*(longlong *)(param_1 + 0x30),param_2,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item), lVar5 != 0)) {
    UnityEngine_UIElements_VisualElement__Clear(lVar5,0);
    if (DAT_1834b3d0f == '\0') {
      FUN_180315380(TI_L2SlotManager);
      DAT_1834b3d0f = '\x01';
    }
    if (((**(longlong **)(TI_L2SlotManager + 0xb8) != 0) &&
        (lVar6 = *(longlong *)(**(longlong **)(TI_L2SlotManager + 0xb8) + 0xc0), lVar6 != 0)) &&
       (lVar6 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(lVar6,0), lVar6 != 0)) {
      uVar7 = UnityEngine_UIElements_VisualElement__get_Item(lVar6,0,0);
      UnityEngine_UIElements_VisualElement__Add(lVar5,uVar7,0);
      iVar2 = *(int *)(param_1 + 0x24);
      lVar5 = func_0x000180315580(TI_SkillbarSlot);
      if (cRam00000001834b416a == '\0') {
        FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
        FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
        FUN_180315380(LIT_"'Key'");
        cRam00000001834b416a = '\x01';
      }
      uVar8 = L2DraggableSlot___ctor__180771210(lVar5,param_2 + iVar2 * 0xc,uVar7,5,1,0,0);
      *(undefined8 *)(lVar5 + 0x40) = uVar7;
      if (_DAT_1834c7d58 != 0) {
        uVar9 = (uint)(lVar5 + 0x40U >> 0xc);
        puVar1 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
        do {
          uVar3 = *puVar1;
          LOCK();
          uVar8 = *puVar1;
          bVar10 = uVar3 == uVar8;
          if (bVar10) {
            *puVar1 = uVar3 | 1L << (uVar9 & 0x3f);
            uVar8 = uVar3;
          }
          UNLOCK();
        } while (!bVar10);
      }
      return uVar8;
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  uVar8 = (*pcVar4)();
  return uVar8;
}

