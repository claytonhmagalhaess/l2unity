// PlayerShortcuts__VerifySkillbarInputs__1804d3830 @ 0x1804d3830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__VerifySkillbarInputs__1804d3830(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  if (DAT_1834b3403 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Current);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.GetEnumerator);
    DAT_1834b3403 = '\x01';
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_InputManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar4 != '\0') {
    return;
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if ((**(longlong **)(TI_InputManager + 0xb8) != 0) &&
     (lVar6 = *(longlong *)(**(longlong **)(TI_InputManager + 0xb8) + 0x108), lVar6 != 0)) {
    iVar5 = System_Array__InternalArray__ICollection_get_Count(lVar6,0);
    if (iVar5 == 0) {
      return;
    }
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (lVar6 = FUN_18117fd20(*(longlong *)(param_1 + 0x30),MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values), lVar6 != 0)) {
      FUN_180fbde10(&uStack_60,lVar6,MR_System.Collections.Generic.Dictionary<int,Shortcut>.GetEnumerator);
      uStack_48 = (undefined4)uStack_60;
      uStack_44 = uStack_60._4_4_;
      uStack_40 = (undefined4)uStack_58;
      uStack_3c = uStack_58._4_4_;
      lStack_38 = lStack_50;
      uStack_60 = 0;
      uStack_58 = &uStack_48;
      do {
        cVar4 = FUN_1813194f0(&uStack_48,MR_System.Collections.Generic.Dictionary<int,Shortcut>.MoveNext);
        lVar6 = lStack_38;
        if (cVar4 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.Dictionary<int,Shortcut>.Dispose);
          PlayerShortcuts__RepeteAtalho__1804d29a0(param_1,0);
          return;
        }
        uVar8 = 0;
        while( true ) {
          lVar7 = *(longlong *)(param_1 + 0x20);
          if (lVar7 == 0) goto LAB_1804d3ad4;
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar8) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_1804d3ab5;
          if (lVar6 == 0) goto LAB_1804d3acf;
          if (*(int *)(lVar7 + 0x20 + (longlong)(int)uVar8 * 4) == *(int *)(lVar6 + 0x14)) {
            lVar7 = FUN_1804d04d0(0);
            if (lVar7 == 0) goto LAB_1804d3aca;
            lVar7 = *(longlong *)(lVar7 + 0x108);
            if (lVar7 == 0) goto LAB_1804d3ac5;
            if (**(uint **)(lVar7 + 0x10) <= uVar8) goto LAB_1804d3abb;
            lVar2 = *(longlong *)(*(uint **)(lVar7 + 0x10) + 4);
            if ((uint)lVar2 <= *(uint *)(lVar6 + 0x10)) goto LAB_1804d3ac0;
            if (*(char *)((longlong)(int)*(uint *)(lVar6 + 0x10) + 0x20 + (int)uVar8 * lVar2 + lVar7
                         ) != '\0') {
              PlayerShortcuts__UseShortcut__1804d3630(param_1,lVar6,0);
              PlayerShortcuts__ComecaRepeticao__1804d1d90(param_1,lVar6,uVar8,0);
            }
          }
          uVar8 = uVar8 + 1;
        }
      } while( true );
    }
  }
  FUN_1803155d0();
LAB_1804d3ab5:
  FUN_1803155c0();
LAB_1804d3abb:
  FUN_1803155c0();
LAB_1804d3ac0:
  FUN_1803155c0();
LAB_1804d3ac5:
  FUN_1803155d0();
LAB_1804d3aca:
  FUN_1803155d0();
LAB_1804d3acf:
  FUN_1803155d0();
LAB_1804d3ad4:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

