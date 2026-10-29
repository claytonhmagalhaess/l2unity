// SparkPesca__Solta__1808513c0 @ 0x1808513c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkPesca__Solta__1808513c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lStackX_8;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (cRam00000001834b486d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Remove);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.TryGetValue);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkPesca);
    cRam00000001834b486d = '\x01';
  }
  lStackX_8 = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x000180851607;
  cVar5 = FUN_1812698d0(*(longlong *)(param_1 + 0x20),param_2,&lStackX_8,MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.TryGetValue);
  lVar2 = lStackX_8;
  if (cVar5 != '\0') {
    if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b486a == '\0') {
      FUN_180315380(TI_UnityEngine.Object);
      cRam00000001834b486a = '\x01';
    }
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x18);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Equality(uVar1,0,0);
      if (cVar5 == '\0') {
        if (*(longlong *)(lVar2 + 0x18) == 0) goto code_r0x000180851607;
        uStack_18 = *(undefined8 *)(lVar2 + 0x2c);
        uStack_10 = *(undefined4 *)(lVar2 + 0x34);
        UnityEngine_Transform__set_localPosition(*(longlong *)(lVar2 + 0x18),&uStack_18,0);
        if (*(longlong *)(lVar2 + 0x18) == 0) goto code_r0x000180851607;
        uStack_18 = *(undefined8 *)(lVar2 + 0x48);
        uStack_10 = *(undefined4 *)(lVar2 + 0x50);
        uStack_c = *(undefined4 *)(lVar2 + 0x54);
        UnityEngine_Transform__set_localRotation(*(longlong *)(lVar2 + 0x18),&uStack_18,0);
        *(undefined8 *)(lVar2 + 0x18) = 0;
        func_0x000180314690(lVar2 + 0x18,0);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1812639c0(*(longlong *)(param_1 + 0x20),param_2,MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Remove);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Equality(param_2,0,0);
    if (cVar5 != '\0') {
      return;
    }
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x20) != 0)) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x38);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Equality(uVar1,0,0);
      if (cVar5 != '\0') {
        return;
      }
      if ((*(longlong *)(param_2 + 0x20) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x38), lVar2 != 0)) {
        NewBaseAnimationController__TocaPose(lVar2,0,0x3f800000,0);
        if (*(longlong *)(param_2 + 0x38) != 0) {
          if (*(char *)(*(longlong *)(param_2 + 0x38) + 0x18) != '\0') {
            return;
          }
          if ((*(longlong *)(param_2 + 0x20) != 0) &&
             (plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x38),
             plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x278))(plVar3,*(undefined8 *)(*plVar3 + 0x280));
            return;
          }
        }
      }
    }
  }
code_r0x000180851607:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

