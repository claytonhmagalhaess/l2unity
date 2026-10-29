// SkillbarWindow__Awake__180706c40 @ 0x180706c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__Awake__180706c40(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b417b == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Coroutine>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.Coroutine>);
    FUN_180315380(TI_System.Collections.Generic.List<SkillbarSlot>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_SkillbarWindow.AtualizaItem);
    FUN_180315380(TI_SkillbarWindow);
    cRam00000001834b417b = '\x01';
  }
  uVar6 = **(undefined8 **)(TI_SkillbarWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if (cVar3 == '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Object__Destroy(param_1,0);
  }
  else {
    **(longlong **)(TI_SkillbarWindow + 0xb8) = param_1;
    func_0x000180314690(*(undefined8 *)(TI_SkillbarWindow + 0xb8),param_1);
  }
  uVar6 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Coroutine>);
  FUN_180bba2e0(uVar6,MR_System.Collections.Generic.List<UnityEngine.Coroutine>..ctor);
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  func_0x000180314690(param_1 + 0x98,uVar6);
  uVar6 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Coroutine>);
  FUN_180bba2e0(uVar6,MR_System.Collections.Generic.List<UnityEngine.Coroutine>..ctor);
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  func_0x000180314690(param_1 + 0xa0,uVar6);
  uVar6 = func_0x000180315580(TI_System.Collections.Generic.List<SkillbarSlot>);
  FUN_180bba2e0(uVar6,MR_System.Collections.Generic.List<SkillbarSlot>..ctor);
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  func_0x000180314690(param_1 + 0xd8,uVar6);
  uVar6 = func_0x000180315580(TI_System.Collections.Generic.List<SkillbarSlot>);
  FUN_180bba2e0(uVar6,MR_System.Collections.Generic.List<SkillbarSlot>..ctor);
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  func_0x000180314690(param_1 + 0xe0,uVar6);
  uVar6 = func_0x000180315580(TI_System.Action<int>);
  FUN_180b7db20(uVar6,param_1,MD_SkillbarWindow.AtualizaItem,0);
  if (cRam00000001834b3040 == '\0') {
    FUN_180315380(TI_System.Action<int>,0);
    FUN_180315380(TI_PlayerInventory);
    cRam00000001834b3040 = '\x01';
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_PlayerInventory + 0xb8) + 8);
  do {
    lVar4 = System_Delegate__Combine(lVar7,uVar6,0);
    uVar2 = TI_System.Action<int>;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x0001803146b0(lVar4,TI_System.Action<int>);
      if (lVar5 == 0) {
        FUN_1803146d0(lVar4,uVar2);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar4 = FUN_18031a4d0(*(longlong *)(TI_PlayerInventory + 0xb8) + 8,lVar5);
    bVar8 = lVar4 != lVar7;
    lVar7 = lVar4;
  } while (bVar8);
  return;
}

