// NameplatesManagerBase__UpdateNameplateSystem__180679d60 @ 0x180679d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerBase__UpdateNameplateSystem__180679d60(longlong *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ushort uVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  
  if (cRam00000001834b3e1c == '\0') {
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<Nameplate>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Nameplate>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<Nameplate>.get_Current);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,Nameplate>>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,Nameplate>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<Nameplate>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<Nameplate>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<Nameplate>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3e1c = '\x01';
  }
  uStack_40 = 0;
  uStack_38 = 0;
  lStack_30 = 0;
  lVar3 = param_1[0xc];
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    if (param_1[6] != 0) {
      plVar8 = (longlong *)FUN_181132de0(param_1[6],MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetEnumerator);
      do {
        if (plVar8 == (longlong *)0x0) {
code_r0x00018067a12c:
          FUN_1803155d0();
          FUN_180311490();
code_r0x00018067a138:
          FUN_1803155d0();
          FUN_180311490();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        cVar7 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
        if (cVar7 == '\0') {
          if (plVar8 != (longlong *)0x0) {
            FUN_180002390(0,TI_System.IDisposable,plVar8);
          }
          if (param_1[0xc] != 0) {
            FUN_180bada40(&uStack_58,param_1[0xc],MR_System.Collections.Generic.List<Nameplate>.GetEnumerator);
            uStack_40 = CONCAT44(uStack_54,uStack_58);
            uStack_38 = CONCAT44(uStack_4c,uStack_50);
            lStack_30 = lStack_48;
            while( true ) {
              cVar7 = FUN_1812fa7e0(&uStack_40,MR_System.Collections.Generic.List<Nameplate>.MoveNext);
              lVar3 = lStack_30;
              if (cVar7 == '\0') {
                Gear__UpdateWeaponType__1803dadf0(&uStack_40,MR_System.Collections.Generic.List<Nameplate>.Dispose);
                return;
              }
              if (lStack_30 == 0) break;
              uVar4 = *(undefined8 *)(lStack_30 + 0x40);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar7 = UnityEngine_Object__op_Equality(uVar4,0,0);
              if ((cVar7 == '\0') && (*(char *)(lVar3 + 0x48) != '\0')) {
                if (param_2 == '\0') {
                  (**(code **)(*param_1 + 0x1f8))();
                }
                else {
                  (**(code **)(*param_1 + 0x1e8))(param_1,lVar3);
                }
                NameplatesManagerBase__UpdateNameplatePosition__1806798e0(param_1,lVar3);
              }
            }
            goto code_r0x00018067a138;
          }
          break;
        }
        if (plVar8 == (longlong *)0x0) {
code_r0x00018067a127:
          FUN_1803155d0();
          goto code_r0x00018067a12c;
        }
        lVar3 = *plVar8;
        uVar11 = 0;
        if (*(ushort *)(lVar3 + 0x12e) != 0) {
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                TI_System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,Nameplate>>) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        *(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) * 0x10
                        + 0x138 + lVar3);
              goto code_r0x000180679f12;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)(lVar3 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,Nameplate>>,0);
code_r0x000180679f12:
        lVar10 = (*(code *)*puVar9)(&uStack_58,plVar8,puVar9[1]);
        lVar6 = MR_System.Collections.Generic.List<Nameplate>.Add;
        lVar3 = param_1[0xc];
        if (lVar3 == 0) {
code_r0x00018067a122:
          FUN_1803155d0();
          goto code_r0x00018067a127;
        }
        uVar4 = *(undefined8 *)(lVar10 + 8);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        lVar10 = *(longlong *)(lVar3 + 0x10);
        if (lVar10 == 0) {
code_r0x00018067a11d:
          FUN_1803155d0();
          goto code_r0x00018067a122;
        }
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          if (*(uint *)(lVar10 + 0x18) <= uVar2) {
            FUN_1803155c0();
            goto code_r0x00018067a11d;
          }
          *(undefined8 *)(lVar10 + 0x20 + (longlong)(int)uVar2 * 8) = uVar4;
          func_0x000180314690();
        }
        else {
          FUN_181645af0(lVar3,uVar4,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

