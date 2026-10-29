// TargetManager__NextTarget__1807eaac0 @ 0x1807eaac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TargetManager__NextTarget__1807eaac0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b46c7 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item);
    FUN_180315380(TI_ObjectData);
    cRam00000001834b46c7 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x48) + 0x18) == 0) {
      return;
    }
    if (cRam00000001834b46c4 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Count);
      FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item);
      FUN_180315380(TI_UnityEngine.Object);
      cRam00000001834b46c4 = '\x01';
    }
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (lVar6 != 0) {
      iVar10 = 0;
      if (*(int *)(lVar6 + 0x18) != 0) {
        iVar9 = 0;
        if (*(int *)(param_1 + 0x50) < *(int *)(lVar6 + 0x18)) {
          iVar9 = *(int *)(param_1 + 0x50);
        }
        cVar2 = TargetManager__HasTarget__1807ea7b0(param_1,0);
        iVar8 = iVar9;
        if (cVar2 != '\0') {
          if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x0001807ead7e;
          uVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0x48),iVar9,MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item);
          if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x0001807ead7e;
          uVar5 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x20),0);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar2 = UnityEngine_Object__op_Equality(uVar4,uVar5,0);
          iVar8 = iVar9 + 1;
          if (cVar2 == '\0') {
            iVar8 = iVar9;
          }
        }
        if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x0001807ead7e;
        if (iVar8 < *(int *)(*(longlong *)(param_1 + 0x48) + 0x18)) {
          iVar10 = iVar8;
        }
      }
      *(int *)(param_1 + 0x50) = iVar10;
      if ((*(longlong *)(param_1 + 0x48) != 0) &&
         (lVar6 = FUN_180bbafe0(*(longlong *)(param_1 + 0x48),iVar10,MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item),
         lVar6 != 0)) {
        lVar6 = UnityEngine_Component__get_gameObject(lVar6,0);
        lVar7 = func_0x000180315580(TI_ObjectData);
        if (DAT_1834b46bc == '\0') {
          FUN_180315380(MR_UnityEngine.GameObject.GetComponent<Entity>);
          DAT_1834b46bc = '\x01';
        }
        Gear__UpdateWeaponType__1803dadf0(lVar7,0);
        if (lVar6 == 0) {
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar4 = UnityEngine_GameObject__get_transform(lVar6,0);
        *(undefined8 *)(lVar7 + 0x38) = uVar4;
        func_0x000180314690(lVar7 + 0x38,uVar4);
        uVar4 = UnityEngine_GameObject__get_tag(lVar6,0);
        *(undefined8 *)(lVar7 + 0x20) = uVar4;
        func_0x000180314690(lVar7 + 0x20,uVar4);
        uVar3 = UnityEngine_GameObject__get_layer(lVar6,0);
        uVar4 = UnityEngine_LayerMask__LayerToName(uVar3,0);
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
        func_0x000180314690(lVar7 + 0x10,uVar4);
        uVar3 = UnityEngine_GameObject__get_layer(lVar6,0);
        *(undefined4 *)(lVar7 + 0x18) = uVar3;
        auStackX_8[0] = UnityEngine_GameObject__get_scene(lVar6,0);
        uVar4 = func_0x000182464d30(auStackX_8,0);
        *(undefined8 *)(lVar7 + 0x28) = uVar4;
        func_0x000180314690(lVar7 + 0x28,uVar4);
        uVar4 = FUN_1809e9ef0(lVar6,MR_UnityEngine.GameObject.GetComponent<Entity>);
        *(undefined8 *)(lVar7 + 0x30) = uVar4;
        func_0x000180314690(lVar7 + 0x30,uVar4);
        if (DAT_1834b46c8 == '\0') {
          FUN_180315380(MR_UnityEngine.Component.GetComponent<Entity>);
          DAT_1834b46c8 = '\x01';
        }
        if (*(longlong *)(lVar7 + 0x38) != 0) {
          uVar4 = FUN_180997040(*(longlong *)(lVar7 + 0x38),MR_UnityEngine.Component.GetComponent<Entity>);
          TargetManager__SetTarget__1807eaf50(param_1,uVar4,1,0);
          return;
        }
      }
    }
  }
code_r0x0001807ead7e:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

