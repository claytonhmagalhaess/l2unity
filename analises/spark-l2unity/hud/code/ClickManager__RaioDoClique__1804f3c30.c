// ClickManager__RaioDoClique__1804f3c30 @ 0x1804f3c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ClickManager__RaioDoClique__1804f3c30(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  
  if (cRam00000001834b35a1 == '\0') {
    FUN_180315380(MR_System.Array.Sort<UnityEngine.RaycastHit>);
    FUN_180315380(TI_System.Comparison<UnityEngine.RaycastHit>);
    FUN_180315380(TI_UnityEngine.Physics);
    FUN_180315380(MD_ClickManager.__c._RaioDoClique_b__24_0);
    FUN_180315380(TI_ClickManager.<>c);
    cRam00000001834b35a1 = '\x01';
  }
  uVar7 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x60),0);
  if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
    func_0x000180315660();
  }
  uStack_a8 = *param_2;
  uStack_a0 = param_2[1];
  uStack_98 = param_2[2];
  cVar6 = UnityEngine_Physics__Raycast(&uStack_a8,param_3,0x447a0000,~uVar7,0);
  if (cVar6 != '\0') {
    uStack_a8 = *param_3;
    uStack_a0 = param_3[1];
    uStack_98 = param_3[2];
    uStack_90 = *(undefined4 *)(param_3 + 3);
    uStack_8c = *(undefined8 *)((longlong)param_3 + 0x1c);
    uStack_84 = *(undefined8 *)((longlong)param_3 + 0x24);
    cVar6 = ClickManager__EhMortoSemShift__1804f3050(param_1,&uStack_a8,0);
    if (cVar6 == '\0') {
      return 1;
    }
    uVar7 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x60),0);
    if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_a8 = *param_2;
    uStack_a0 = param_2[1];
    uStack_98 = param_2[2];
    lVar8 = UnityEngine_Physics__RaycastAll(&uStack_a8,0x447a0000,~uVar7,0);
    if (*(int *)(TI_ClickManager.<>c + 0xe4) == 0) {
      func_0x000180315660(TI_ClickManager.<>c);
    }
    lVar9 = *(longlong *)(*(longlong *)(TI_ClickManager.<>c + 0xb8) + 8);
    if (lVar9 == 0) {
      if (*(int *)(TI_ClickManager.<>c + 0xe4) == 0) {
        func_0x000180315660(TI_ClickManager.<>c);
      }
      uVar10 = **(undefined8 **)(TI_ClickManager.<>c + 0xb8);
      lVar9 = func_0x000180315580(TI_System.Comparison<UnityEngine.RaycastHit>);
      FUN_1811304d0(lVar9,uVar10,MD_ClickManager.__c._RaioDoClique_b__24_0,0);
      *(longlong *)(*(longlong *)(TI_ClickManager.<>c + 0xb8) + 8) = lVar9;
      func_0x000180314690(*(longlong *)(TI_ClickManager.<>c + 0xb8) + 8,lVar9);
    }
    FUN_1809328d0(lVar8,lVar9,MR_System.Array.Sort<UnityEngine.RaycastHit>);
    if (lVar8 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return uVar10;
    }
    for (uVar7 = 0; (int)uVar7 < *(int *)(lVar8 + 0x18); uVar7 = uVar7 + 1) {
      if (*(uint *)(lVar8 + 0x18) <= uVar7) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return uVar10;
      }
      lVar9 = (longlong)(int)uVar7 * 0x2c;
      puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar8);
      uStack_68 = *(undefined4 *)puVar1;
      uStack_64 = *(undefined4 *)((longlong)puVar1 + 4);
      uStack_98 = *puVar1;
      uStack_90 = *(undefined4 *)(puVar1 + 1);
      puVar1 = (undefined8 *)(lVar9 + 0x3c + lVar8);
      uVar10 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar8);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uStack_5c = (undefined4)uVar10;
      uStack_58 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_a8 = uVar4;
      uStack_a0 = uVar5;
      uStack_8c = uVar10;
      uStack_84 = uVar3;
      uStack_60 = uStack_90;
      uStack_54 = uVar3;
      cVar6 = ClickManager__EhMortoSemShift__1804f3050(param_1,&uStack_a8,0);
      if (cVar6 == '\0') {
        *param_3 = uVar4;
        param_3[1] = uVar5;
        param_3[2] = CONCAT44(uStack_64,uStack_68);
        param_3[3] = CONCAT44(uStack_5c,uStack_60);
        *(undefined8 *)((longlong)param_3 + 0x1c) = uVar10;
        *(undefined8 *)((longlong)param_3 + 0x24) = uVar3;
        return 1;
      }
    }
  }
  return 0;
}

