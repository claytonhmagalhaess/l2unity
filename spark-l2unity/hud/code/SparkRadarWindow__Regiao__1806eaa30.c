// SparkRadarWindow__Regiao__1806eaa30 @ 0x1806eaa30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__Regiao__1806eaa30(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b40a5 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkCaverna);
    cRam00000001834b40a5 = '\x01';
  }
  if (*(int *)(TI_SparkCaverna + 0xe4) == 0) {
    func_0x000180315660(TI_SparkCaverna);
  }
  switch(*(undefined4 *)(*(longlong *)(TI_SparkCaverna + 0xb8) + 0xc)) {
  case 8:
  case 0xe:
    uVar11 = *(undefined8 *)(param_1 + 0x138);
    break;
  default:
    uVar11 = *(undefined8 *)(param_1 + 0x120);
    break;
  case 10:
  case 0xb:
    uVar11 = *(undefined8 *)(param_1 + 0x130);
    break;
  case 0xc:
    uVar11 = *(undefined8 *)(param_1 + 0x118);
    break;
  case 0xd:
    uVar11 = *(undefined8 *)(param_1 + 0x128);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar7 = UnityEngine_Object__op_Equality(uVar11,uVar1,0);
  if (cVar7 != '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x140) = uVar11;
  func_0x000180314690(param_1 + 0x140,uVar11);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    plVar8 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar11,0);
    if (plVar8 != (longlong *)0x0) {
      lVar2 = *plVar8;
      uVar1 = *puVar9;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      uVar11 = puVar9[4];
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xb) *
                      0x10 + 0x138 + lVar2);
            goto code_r0x0001806eabd4;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806eabd4:
      uStack_68 = uVar1;
      uStack_60 = uVar4;
      uStack_58 = uVar5;
      uStack_50 = uVar6;
      uStack_48 = uVar11;
      (*(code *)*puVar9)(plVar8,&uStack_68,puVar9[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

