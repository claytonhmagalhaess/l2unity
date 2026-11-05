// NameplatesManagerLobby__FixedUpdate__18067c9e0 @ 0x18067c9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerLobby__FixedUpdate__18067c9e0(longlong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  longlong alStackX_8 [2];
  undefined8 uStack_50;
  undefined4 *puStack_48;
  ulonglong uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  ulonglong uStack_28;
  
  puStack_30 = &UNK_18067c9f9;
  cVar3 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  lVar5 = *param_1;
  if (cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018067ca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x1d8))(param_1,*(undefined8 *)(lVar5 + 0x1e0));
    return;
  }
  puStack_30 = &UNK_18067ca11;
  (**(code **)(lVar5 + 0x198))(param_1,*(undefined8 *)(lVar5 + 0x1a0));
  if (cRam00000001834b3e1a == '\0') {
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryGetValue,0);
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.get_Keys);
    FUN_180315380(MR_System.Linq.Enumerable.ToList<int>);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<int>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3e1a = '\x01';
  }
  alStackX_8[0] = 0;
  if (param_1[6] != 0) {
    uVar4 = func_0x000181138220(param_1[6],MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.get_Keys);
    lVar5 = FUN_1809c8500(uVar4,MR_System.Linq.Enumerable.ToList<int>);
    if (lVar5 != 0) {
      FUN_180be3fd0(&uStack_50,lVar5,MR_System.Collections.Generic.List<int>.GetEnumerator);
      uStack_38 = (undefined4)uStack_50;
      uStack_34 = uStack_50._4_4_;
      uStack_28 = uStack_40;
      uStack_50 = 0;
      puStack_48 = &uStack_38;
code_r0x0001806793b0:
      do {
        cVar3 = FUN_1812f11f0(&uStack_38,MR_System.Collections.Generic.List<int>.MoveNext);
        uVar2 = uStack_28;
        if (cVar3 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<int>.Dispose);
          return;
        }
        if (param_1[6] == 0) goto code_r0x000180679571;
        cVar3 = FUN_18113d920(param_1[6],uStack_28 & 0xffffffff,alStackX_8,MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryGetValue);
      } while (cVar3 == '\0');
      if (alStackX_8[0] != 0) {
        cVar3 = (**(code **)(*param_1 + 0x208))
                          (param_1,*(undefined8 *)(alStackX_8[0] + 0x40),
                           *(undefined8 *)(*param_1 + 0x210));
        if (alStackX_8[0] != 0) {
          *(char *)(alStackX_8[0] + 0xa4) = cVar3;
          if (cVar3 == '\0') {
            bVar6 = false;
          }
          else {
            cVar3 = (**(code **)(*param_1 + 0x1b8))
                              (param_1,alStackX_8[0],*(undefined8 *)(*param_1 + 0x1c0));
            bVar6 = cVar3 == '\0';
          }
          if (bVar6 == false) {
            if (alStackX_8[0] != 0) {
              uVar4 = *(undefined8 *)(alStackX_8[0] + 0x40);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
              if (cVar3 == '\0') {
                if (alStackX_8[0] == 0) {
                  FUN_1803155d0();
                  goto code_r0x000180679558;
                }
                cVar3 = (**(code **)(*param_1 + 0x1c8))
                                  (param_1,*(undefined8 *)(alStackX_8[0] + 0x40),
                                   *(undefined8 *)(*param_1 + 0x1d0));
                if (cVar3 != '\0') goto code_r0x0001806794ca;
              }
              NameplatesManagerBase__RemoveNameplate__180679590(param_1,uVar2 & 0xffffffff,0);
              goto code_r0x0001806793b0;
            }
code_r0x000180679558:
            FUN_1803155d0();
code_r0x00018067955d:
            FUN_1803155d0();
          }
          else {
code_r0x0001806794ca:
            if (alStackX_8[0] != 0) {
              *(bool *)(alStackX_8[0] + 0x48) = bVar6;
              if (alStackX_8[0] == 0) goto code_r0x00018067955d;
              Nameplate__Exibe__1806768f0(alStackX_8[0],bVar6,0);
              goto code_r0x0001806793b0;
            }
          }
          FUN_1803155d0();
        }
        FUN_1803155d0();
      }
      FUN_1803155d0();
code_r0x000180679571:
      FUN_1803155d0();
      FUN_180311490();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

