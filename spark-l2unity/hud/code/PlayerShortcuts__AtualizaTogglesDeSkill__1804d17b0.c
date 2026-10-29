// PlayerShortcuts__AtualizaTogglesDeSkill__1804d17b0 @ 0x1804d17b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__AtualizaTogglesDeSkill__1804d17b0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  longlong lStackX_8;
  longlong lStackX_10;
  int aiStackX_20 [2];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  longlong lStack_38;
  
  lStackX_8 = param_1;
  lStackX_10 = param_2;
  if (cRam00000001834b340e == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Clear);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.GetEnumerator);
    FUN_180315380(MR_System.String.Join<int>);
    FUN_180315380(LIT_"'[SPARK] toggles: {0} efeitos, ligados [{1}], {2} botao(o...");
    FUN_180315380(LIT_"','");
    cRam00000001834b340e = '\x01';
  }
  uStack_48 = 0;
  puStack_40 = (undefined8 *)0x0;
  lStack_38 = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1814ceb00(*(longlong *)(param_1 + 0x50),MR_System.Collections.Generic.HashSet<int>.Clear);
    if (param_2 != 0) {
      for (uVar10 = 0; (int)uVar10 < *(int *)(param_2 + 0x18); uVar10 = uVar10 + 1) {
        if (*(uint *)(param_2 + 0x18) <= uVar10) {
          FUN_1803155c0();
          goto code_r0x0001804d1bc5;
        }
        lVar6 = *(longlong *)(param_2 + 0x20 + (longlong)(int)uVar10 * 8);
        lVar4 = SkillgrpTable__get_Instance(0);
        if ((lVar6 == 0) || (lVar4 == 0)) goto code_r0x0001804d1bb9;
        lVar4 = SkillgrpTable__GetSkill(lVar4,*(undefined4 *)(lVar6 + 0x10),1,0);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0x24) == 3)) {
          if (*(longlong *)(param_1 + 0x50) == 0) goto code_r0x0001804d1bb9;
          func_0x0001814cea30(*(longlong *)(param_1 + 0x50),*(undefined4 *)(lVar6 + 0x10),
                              MR_System.Collections.Generic.HashSet<int>.Add);
        }
      }
    }
    if (cRam00000001834b33ff == '\0') {
      FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values);
      FUN_180315380(MR_System.Linq.Enumerable.ToList<Shortcut>);
      cRam00000001834b33ff = '\x01';
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar5 = FUN_18117fd20(*(longlong *)(param_1 + 0x30),MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values);
      lVar6 = FUN_1809c8820(uVar5,MR_System.Linq.Enumerable.ToList<Shortcut>);
      if (lVar6 != 0) {
        iVar11 = 0;
        aiStackX_20[0] = 0;
        FUN_180bada40(&uStack_60,lVar6,MR_System.Collections.Generic.List<Shortcut>.GetEnumerator);
        uStack_48 = uStack_60;
        puStack_40 = puStack_58;
        lStack_38 = lStack_50;
        uStack_60 = 0;
        puStack_58 = &uStack_48;
        while( true ) {
          do {
            do {
              cVar2 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<Shortcut>.MoveNext);
              lVar6 = lStack_38;
              if (cVar2 == '\0') {
                Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<Shortcut>.Dispose);
                uVar5 = LIT_"'[SPARK] toggles: {0} efeitos, ligados [{1}], {2} botao(o...";
                if (param_2 == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = *(undefined4 *)(param_2 + 0x18);
                }
                lStackX_8 = CONCAT44(lStackX_8._4_4_,uVar3);
                uVar7 = func_0x000180314670(_DAT_1834c6268,&lStackX_8);
                uVar8 = FUN_180ac0410(LIT_"','",*(undefined8 *)(param_1 + 0x50),
                                      MR_System.String.Join<int>);
                aiStackX_20[0] = iVar11;
                uVar9 = func_0x000180314670(_DAT_1834c6268,aiStackX_20);
                uVar5 = System_String__Format(uVar5,uVar7,uVar8,uVar9,0);
                cVar2 = System_String__op_Inequality(uVar5,*(undefined8 *)(param_1 + 0x58),0);
                if (cVar2 != '\0') {
                  *(undefined8 *)(param_1 + 0x58) = uVar5;
                  func_0x000180314690(param_1 + 0x58,uVar5);
                  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  UnityEngine_Debug__Log(uVar5,0);
                }
                return;
              }
              if (lStack_38 == 0) goto code_r0x0001804d1bdf;
            } while (*(int *)(lStack_38 + 0x18) != 2);
            if (*(longlong *)(param_1 + 0x50) == 0) goto code_r0x0001804d1bda;
            cVar2 = FUN_1814cf290(*(longlong *)(param_1 + 0x50),*(undefined4 *)(lStack_38 + 0x1c),
                                  MR_System.Collections.Generic.HashSet<int>.Contains);
            if (cVar2 != '\0') {
              iVar11 = iVar11 + 1;
              aiStackX_20[0] = iVar11;
            }
            lVar4 = SkillgrpTable__get_Instance(0);
            if (lVar4 == 0) goto code_r0x0001804d1bd5;
            lVar4 = SkillgrpTable__GetSkill(lVar4,*(undefined4 *)(lVar6 + 0x1c),1,0);
          } while ((lVar4 == 0) || (*(int *)(lVar4 + 0x24) != 3));
          if (*(longlong *)(param_1 + 0x50) == 0) break;
          cVar2 = FUN_1814cf290(*(longlong *)(param_1 + 0x50),*(undefined4 *)(lVar6 + 0x1c),
                                MR_System.Collections.Generic.HashSet<int>.Contains);
          if (cVar2 == '\0') {
            lVar4 = FUN_180493b20(0);
            if (lVar4 == 0) goto code_r0x0001804d1bc5;
            SkillbarWindow__RemoveToggledSlot__180707ef0
                      (lVar4,*(undefined4 *)(lVar6 + 0x14),*(undefined4 *)(lVar6 + 0x10));
          }
          else {
            lVar4 = FUN_180493b20(0);
            if (lVar4 == 0) goto code_r0x0001804d1bcb;
            SkillbarWindow__AddToggledSlot__180706110
                      (lVar4,*(undefined4 *)(lVar6 + 0x14),*(undefined4 *)(lVar6 + 0x10));
          }
        }
        goto code_r0x0001804d1bd0;
      }
    }
  }
code_r0x0001804d1bb9:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_r0x0001804d1bc5:
  FUN_1803155d0();
code_r0x0001804d1bcb:
  FUN_1803155d0();
code_r0x0001804d1bd0:
  FUN_1803155d0();
code_r0x0001804d1bd5:
  FUN_1803155d0();
code_r0x0001804d1bda:
  FUN_1803155d0();
code_r0x0001804d1bdf:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

