// ClanWindow__MostraCrest__1805e4a00 @ 0x1805e4a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraCrest__1805e4a00(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  int iVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3b7a == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'Only members with the crest privilege of a level 3+ clan...");
    FUN_180315380(LIT_"''");
    cRam00000001834b3b7a = '\x01';
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar9 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if (cVar7 == '\0') {
    iVar12 = 0;
  }
  else {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if ((**(longlong **)(TI_PlayerEntity + 0xb8) == 0) ||
       (lVar1 = *(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x30), lVar1 == 0))
    goto code_r0x0001805e4d29;
    iVar12 = *(int *)(lVar1 + 0x9c);
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    plVar8 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x2b8),0);
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar9 = SparkClan__Crest(iVar12,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar9,0);
    if (plVar8 != (longlong *)0x0) {
      lVar1 = *plVar8;
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      uVar9 = puVar10[4];
      if (*(ushort *)(lVar1 + 0x12e) != 0) {
        uVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0xb)
                       * 0x10 + 0x138 + lVar1);
            goto code_r0x0001805e4bc9;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar1 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001805e4bc9:
      uStack_68 = uVar3;
      uStack_60 = uVar4;
      uStack_58 = uVar5;
      uStack_50 = uVar6;
      uStack_48 = uVar9;
      (*(code *)*puVar10)(plVar8,&uStack_68,puVar10[1]);
      if (cRam00000001834b3bbb == '\0') {
        FUN_180315380(TI_SparkClan);
        cRam00000001834b3bbb = '\x01';
      }
      if (*(int *)(TI_SparkClan + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x1c) < 3) {
        cVar7 = '\0';
      }
      else {
        if (*(int *)(TI_SparkClan + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar7 = SparkClan__Pode(0x80,0);
      }
      lVar1 = *(longlong *)(param_1 + 0x2c0);
      if (lVar1 != 0) {
        *(char *)(lVar1 + 0x40) = cVar7;
        ClanWindow_Envio__Atualiza(lVar1,0);
        uVar9 = *(undefined8 *)(param_1 + 0x2c8);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkEstilo__Liga__180720c80(uVar9,cVar7 != '\0' && iVar12 != 0,0);
        uVar9 = LIT_"'Only members with the crest privilege of a level 3+ clan...";
        if (cVar7 != '\0') {
          uVar9 = LIT_"''";
        }
        plVar8 = *(longlong **)(param_1 + 0x2d0);
        if (plVar8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001805e4d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0xe48))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0xe50));
          return;
        }
      }
    }
  }
code_r0x0001805e4d29:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

