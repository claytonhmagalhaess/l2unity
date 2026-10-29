// SparkRadarWindow__Altitude__1806e4d80 @ 0x1806e4d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__Altitude__1806e4d80(longlong param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  double dStackX_8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined1 auStack_48 [64];
  
  if (cRam00000001834b40a4 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b40a4 = '\x01';
  }
  if (DAT_1834b2e5b == '\0') {
    FUN_180315380(TI_System.Math);
    DAT_1834b2e5b = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
  }
  dVar4 = (double)(((param_2 - -5000.0) / 10000.0) * 13.0);
  if (dVar4 < 0.0) {
    dVar3 = (double)func_0x0001803a7930(SUB84(dVar4,0),&dStackX_8);
    if (dVar3 == -0.5) {
      if (((longlong)dStackX_8 & 1U) != 0) {
        dStackX_8 = dStackX_8 - 1.0;
      }
    }
    else {
      dStackX_8 = (double)func_0x0001803a7e20(SUB84(dVar4 - 0.5,0));
    }
  }
  else {
    dVar3 = (double)func_0x0001803a7930(SUB84(dVar4,0),&dStackX_8);
    if (dVar3 == 0.5) {
      if (((longlong)dStackX_8 & 1U) != 0) {
        dStackX_8 = dStackX_8 + 1.0;
      }
    }
    else {
      dStackX_8 = (double)func_0x0001803a7870(SUB84(dVar4 + 0.5,0));
    }
  }
  iVar8 = (int)dStackX_8 + 1;
  if (iVar8 < 0xf) {
    if (iVar8 < 1) {
      iVar8 = 1;
    }
  }
  else {
    iVar8 = 0xe;
  }
  if (iVar8 != *(int *)(param_1 + 0x148)) {
    *(int *)(param_1 + 0x148) = iVar8;
    if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x0001806e4fc3;
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
    if (iVar8 < 2) {
      uVar7 = 1;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x100);
      if (lVar1 == 0) goto code_r0x0001806e4fc3;
      if (*(uint *)(lVar1 + 0x18) <= iVar8 - 2U) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar6 = (undefined8 *)
               UnityEngine_UIElements_StyleBackground__op_Implicit
                         (auStack_48,*(undefined8 *)(lVar1 + 0x10 + (longlong)iVar8 * 8),0);
      if (lVar5 == 0) goto code_r0x0001806e4fc3;
      uStack_78 = *puVar6;
      uStack_70 = puVar6[1];
      uStack_68 = *(undefined4 *)(puVar6 + 2);
      uStack_64 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_60 = *(undefined4 *)(puVar6 + 3);
      uStack_5c = *(undefined4 *)((longlong)puVar6 + 0x1c);
      uStack_58 = puVar6[4];
      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_78);
      if (*(longlong *)(param_1 + 0xc0) == 0) goto code_r0x0001806e4fc3;
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
      uVar7 = 0;
    }
    uVar7 = FUN_180eb5810(uVar7,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar5 == 0) {
code_r0x0001806e4fc3:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar7);
  }
  return;
}

