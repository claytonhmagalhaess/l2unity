// TargetManager__GetVisibleEntities__1807ea560 @ 0x1807ea560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 TargetManager__GetVisibleEntities__1807ea560(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (cRam00000001834b46c2 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<Entity>);
    FUN_180315380(MR_System.Linq.Enumerable.OrderBy<UnityEngine.Transform,float>);
    FUN_180315380(MR_System.Linq.Enumerable.ToList<UnityEngine.Transform>);
    FUN_180315380(TI_System.Func<UnityEngine.Transform,float>);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.Transform>);
    FUN_180315380(MD_TargetManager._GetVisibleEntities_b__21_0);
    cRam00000001834b46c2 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Transform>);
  FUN_180bba2e0(lVar3);
  uVar7 = 0;
  lVar4 = *(longlong *)(param_1 + 0x40);
  while (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) <= (int)uVar7) {
      uVar6 = func_0x000180315580(TI_System.Func<UnityEngine.Transform,float>);
      FUN_1814afe20(uVar6,param_1,MD_TargetManager._GetVisibleEntities_b__21_0,0);
      lVar3 = FUN_1809c0af0(lVar3,uVar6,MR_System.Linq.Enumerable.OrderBy<UnityEngine.Transform,float>);
      lVar4 = MR_System.Linq.Enumerable.ToList<UnityEngine.Transform>;
      if (*(longlong *)(MR_System.Linq.Enumerable.ToList<UnityEngine.Transform> + 0x38) == 0) {
        FUN_180312fc0(MR_System.Linq.Enumerable.ToList<UnityEngine.Transform>);
      }
      if (lVar3 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_180312f40(lVar5);
        }
        uVar6 = func_0x000180315580(lVar5);
        FUN_181656c00(uVar6,lVar3,*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x10));
        return uVar6;
      }
      uVar6 = func_0x0001803153a0(LIT_"'source'");
      uVar6 = System_Linq_Error__ArgumentNull(uVar6,0);
      FUN_180315590(uVar6,lVar4);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar7) {
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    lVar4 = UnityEngine_RaycastHit__get_transform((longlong)(int)uVar7 * 0x2c + lVar4 + 0x20,0);
    if (lVar4 == 0) break;
    lVar5 = FUN_180997040(lVar4,MR_UnityEngine.Component.GetComponent<Entity>);
    cVar2 = TargetManager__IsTransformVisible__1807ea930(param_1,lVar4,0);
    if (cVar2 != '\0') {
      if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x30) == 0)) break;
      if (((*(int *)(*(longlong *)(lVar5 + 0x30) + 0x10) == 3) ||
          (cVar2 = AttackAction__NpcAtacavel(lVar5,0), cVar2 != '\0')) &&
         (cVar2 = Entity__get_IsDead(lVar5,0), cVar2 == '\0')) {
        if (lVar3 == 0) break;
        FUN_180002eb0(lVar3,lVar4);
      }
    }
    uVar7 = uVar7 + 1;
    lVar4 = *(longlong *)(param_1 + 0x40);
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

