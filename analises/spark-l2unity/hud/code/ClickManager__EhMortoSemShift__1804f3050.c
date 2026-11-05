// ClickManager__EhMortoSemShift__1804f3050 @ 0x1804f3050

/* WARNING: Removing unreachable block (ram,0x0001804f3305) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ClickManager__EhMortoSemShift__1804f3050(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (cRam00000001834b35a2 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<Entity>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerEntity);
    cRam00000001834b35a2 = '\x01';
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  uVar7 = **(undefined8 **)(TI_InputManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (cVar2 != '\0') {
    if (DAT_1834b3532 == '\0') {
      FUN_180315380(TI_InputManager);
      DAT_1834b3532 = '\x01';
    }
    if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x0001804f3328;
    if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf1) != '\0') {
      return false;
    }
  }
  uVar7 = UnityEngine_RaycastHit__get_collider(param_2,0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if (cVar2 == '\0') {
    uVar4 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c),0);
    uVar5 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c),0);
    lVar8 = UnityEngine_RaycastHit__get_collider(param_2,0);
    if ((lVar8 == 0) || (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)) {
code_r0x0001804f3328:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar6 = UnityEngine_GameObject__get_layer(lVar8,0);
    if (uVar4 == (uVar5 | 1 << (uVar6 & 0x1f))) {
      lVar8 = UnityEngine_RaycastHit__get_transform(param_2,0);
      if (lVar8 == 0) goto code_r0x0001804f3328;
      uVar7 = UnityEngine_Transform__GetParent(lVar8,0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if (cVar2 == '\0') {
        lVar8 = 0;
      }
      else {
        lVar8 = UnityEngine_RaycastHit__get_transform(param_2,0);
        if ((lVar8 == 0) || (lVar8 = UnityEngine_Transform__GetParent(lVar8,0), lVar8 == 0))
        goto code_r0x0001804f3328;
        lVar8 = UnityEngine_Transform__GetParent(lVar8,0);
      }
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Inequality(lVar8,0,0);
      if (cVar2 == '\0') {
        plVar9 = (longlong *)0x0;
      }
      else {
        if (lVar8 == 0) goto code_r0x0001804f3328;
        plVar9 = (longlong *)FUN_180997040(lVar8,MR_UnityEngine.Component.GetComponent<Entity>);
      }
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Inequality(plVar9,0,0);
      if (cVar2 != '\0') {
        if (plVar9 == (longlong *)0x0) goto code_r0x0001804f3328;
        if ((plVar9[7] != 0) && (*(char *)(plVar9[7] + 0x18) != '\0')) {
          if ((*(byte *)(TI_PlayerEntity + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
             (*(longlong *)
               (*(longlong *)(*plVar9 + 200) + -8 + (ulonglong)*(byte *)(TI_PlayerEntity + 0x130) * 8
               ) == TI_PlayerEntity)) {
            return plVar9 == (longlong *)0x0;
          }
          return true;
        }
      }
    }
  }
  return false;
}

