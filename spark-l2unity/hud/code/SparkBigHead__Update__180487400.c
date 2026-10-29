// SparkBigHead__Update__180487400 @ 0x180487400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkBigHead__Update__180487400(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  float fVar9;
  longlong *aplStackX_18 [2];
  longlong *plStack_98;
  longlong **pplStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  longlong **pplStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  longlong **pplStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  if (cRam00000001834b311b == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.HashSet<Entity>.Clear);
    FUN_180315380(MR_System.Collections.Generic.HashSet<Entity>.Contains);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<Entity>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<Entity>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkBigHead.Active>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkBigHead.Active>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDesempenho);
    cRam00000001834b311b = '\x01';
  }
  aplStackX_18[0] = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  pplStack_68 = (longlong **)0x0;
  uStack_60 = 0;
  plStack_58 = (longlong *)0x0;
  pplStack_50 = (longlong **)0x0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  fVar9 = (float)FUN_182436650(0);
  if (fVar9 < *(float *)(param_1 + 0x38)) {
    return;
  }
  fVar9 = (float)FUN_182436650(0);
  *(float *)(param_1 + 0x38) = fVar9 + 0.1;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1814ceb00(*(longlong *)(param_1 + 0x28),MR_System.Collections.Generic.HashSet<Entity>.Clear);
    if (cRam00000001834b31bd == '\0') {
      FUN_180315380(TI_WorldSpawner);
      cRam00000001834b31bd = '\x01';
    }
    uVar7 = **(undefined8 **)(TI_WorldSpawner + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (cVar3 == '\0') {
code_r0x000180487746:
      if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
        func_0x000180315660(TI_SparkDesempenho);
      }
      lVar5 = *(longlong *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x40);
      if (lVar5 != 0) {
        FUN_180bada40(&plStack_98,lVar5,MR_System.Collections.Generic.List<Entity>.GetEnumerator);
        plStack_70 = plStack_98;
        pplStack_68 = pplStack_90;
        uStack_60 = uStack_88;
        plStack_98 = (longlong *)0x0;
        pplStack_90 = &plStack_70;
        while (cVar3 = FUN_1812fa7e0(&plStack_70,MR_System.Collections.Generic.List<Entity>.MoveNext), cVar3 != '\0') {
          SparkBigHead__Check(param_1,uStack_60);
        }
        Gear__UpdateWeaponType__1803dadf0(&plStack_70,MR_System.Collections.Generic.List<Entity>.Dispose);
        if (DAT_1834b2f32 == '\0') {
          FUN_180315380(TI_PlayerEntity);
          DAT_1834b2f32 = '\x01';
        }
        uVar7 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if (cVar3 != '\0') {
          if (DAT_1834b2f32 == '\0') {
            FUN_180315380(TI_PlayerEntity);
            DAT_1834b2f32 = '\x01';
          }
          SparkBigHead__Check(param_1,**(undefined8 **)(TI_PlayerEntity + 0xb8),0);
        }
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_18117ccd0(&plStack_98,*(longlong *)(param_1 + 0x20),MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.GetEnumerator);
          plStack_58 = plStack_98;
          pplStack_50 = pplStack_90;
          uStack_48 = uStack_88;
          lStack_40 = lStack_80;
          uStack_38 = uStack_78;
          plStack_98 = (longlong *)0x0;
          pplStack_90 = &plStack_58;
          while( true ) {
            cVar3 = FUN_18133c520(&plStack_58,MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.MoveNext);
            lVar5 = lStack_40;
            if (cVar3 == '\0') {
              Gear__UpdateWeaponType__1803dadf0(&plStack_58,MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.Dispose);
              return;
            }
            if (*(longlong *)(param_1 + 0x28) == 0) break;
            uVar4 = FUN_1814cf450(*(longlong *)(param_1 + 0x28),uStack_48,MR_System.Collections.Generic.HashSet<Entity>.Contains);
            if (lVar5 == 0) {
              FUN_1803155d0();
              break;
            }
            *(undefined1 *)(lVar5 + 0x28) = uVar4;
          }
          FUN_1803155d0();
          FUN_180311490();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      if (cRam00000001834b31bd == '\0') {
        FUN_180315380(TI_WorldSpawner);
        cRam00000001834b31bd = '\x01';
      }
      if ((**(longlong **)(TI_WorldSpawner + 0xb8) != 0) &&
         (lVar5 = WorldSpawner__get_Entidades(**(longlong **)(TI_WorldSpawner + 0xb8),0),
         lVar5 != 0)) {
        aplStackX_18[0] = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<Entity>,lVar5);
        plStack_98 = (longlong *)0x0;
        pplStack_90 = aplStackX_18;
        do {
          if (aplStackX_18[0] == (longlong *)0x0) {
code_r0x000180487974:
            FUN_1803155d0();
            FUN_180311490();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          cVar3 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
          plVar2 = aplStackX_18[0];
          if (cVar3 == '\0') {
            if (aplStackX_18[0] != (longlong *)0x0) {
              FUN_180002390(0,TI_System.IDisposable,aplStackX_18[0]);
            }
            goto code_r0x000180487746;
          }
          if (aplStackX_18[0] == (longlong *)0x0) {
            FUN_1803155d0();
            goto code_r0x000180487974;
          }
          lVar5 = *aplStackX_18[0];
          uVar8 = 0;
          if (*(ushort *)(lVar5 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                  TI_System.Collections.Generic.IEnumerator<Entity>) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          *(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) * 0x10
                          + 0x138 + lVar5);
                goto code_r0x0001804876c2;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(aplStackX_18[0],TI_System.Collections.Generic.IEnumerator<Entity>,0);
code_r0x0001804876c2:
          uVar7 = (*(code *)*puVar6)(plVar2,puVar6[1]);
          SparkBigHead__Check(param_1,uVar7,0);
        } while( true );
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

