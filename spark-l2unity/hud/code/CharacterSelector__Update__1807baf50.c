// CharacterSelector__Update__1807baf50 @ 0x1807baf50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterSelector__Update__1807baf50(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  
  if (cRam00000001834b45f9 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<SelectableCharacterEntity>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.Physics);
    cRam00000001834b45f9 = '\x01';
  }
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if ((cVar3 != '\0') || (cVar3 = FUN_1824bb580(0,0), cVar3 == '\0')) {
    return;
  }
  if (cRam00000001834b31c1 == '\0') {
    FUN_180315380(TI_L2LoginUI);
    cRam00000001834b31c1 = '\x01';
  }
  if (**(longlong **)(TI_L2LoginUI + 0xb8) != 0) {
    if (*(char *)(**(longlong **)(TI_L2LoginUI + 0xb8) + 0x38) != '\0') {
      return;
    }
    lVar8 = *(longlong *)(param_1 + 0xa8);
    puVar7 = (undefined8 *)UnityEngine_Input__get_mousePosition(&uStack_e8,0);
    if (lVar8 != 0) {
      uStack_f8 = *puVar7;
      uStack_f0 = *(undefined4 *)(puVar7 + 1);
      puVar7 = (undefined8 *)UnityEngine_Camera__ScreenPointToRay(&uStack_e8,lVar8,&uStack_f8,0);
      uStack_e8 = *puVar7;
      uStack_e0 = puVar7[1];
      uStack_d8 = puVar7[2];
      if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Physics__Raycast(&uStack_e8,&uStack_c8,0x447a0000,0);
      if (cVar3 == '\0') {
        return;
      }
      lVar8 = UnityEngine_RaycastHit__get_collider(&uStack_c8,0);
      if ((lVar8 != 0) && (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 != 0)) {
        uVar4 = UnityEngine_GameObject__get_layer(lVar8,0);
        uVar5 = func_0x000182427a70(*(undefined4 *)(param_1 + 0xa0),0);
        uVar6 = func_0x000182427a70(*(undefined4 *)(param_1 + 0xa0),0);
        if (uVar5 != (uVar6 | 1 << (uVar4 & 0x1f))) {
          return;
        }
        lVar8 = UnityEngine_RaycastHit__get_transform(&uStack_c8,0);
        if ((((lVar8 != 0) && (lVar8 = UnityEngine_Transform__GetParent(lVar8,0), lVar8 != 0)) &&
            (lVar8 = UnityEngine_Transform__GetParent(lVar8,0), lVar8 != 0)) &&
           (lVar8 = FUN_180997040(lVar8,MR_UnityEngine.Component.GetComponent<SelectableCharacterEntity>), lVar8 != 0)) {
          CharacterSelector__SelectCharacter__1807ba450(param_1,*(undefined4 *)(lVar8 + 0x78),0);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

