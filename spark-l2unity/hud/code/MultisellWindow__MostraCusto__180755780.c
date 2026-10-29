// MultisellWindow__MostraCusto__180755780 @ 0x180755780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MultisellWindow__MostraCusto__180755780(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lStackX_20;
  longlong alStack_d8 [2];
  undefined4 *puStack_c8;
  longlong lStack_c0;
  longlong alStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong lStack_60;
  
  if (cRam00000001834b430a == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.GetEnumerator);
    FUN_180315380(TI_System.Math);
    FUN_180315380(LIT_"'n0'");
    FUN_180315380(LIT_"\"You don't have enough of the required items.\"");
    FUN_180315380(LIT_"'{0:n0}  (have {1:n0})'");
    FUN_180315380(LIT_"''");
    cRam00000001834b430a = '\x01';
  }
  lStackX_20 = 0;
  alStack_d8[0] = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x98),0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      return;
    }
    uVar6 = MultisellWindow__Quantidade(param_1,0);
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20), lVar12 != 0)) {
      bVar4 = false;
      FUN_180bada40(&uStack_70,lVar12,MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.GetEnumerator);
      uStack_88 = uStack_70;
      uStack_84 = uStack_6c;
      uStack_80 = uStack_68;
      uStack_7c = uStack_64;
      lStack_78 = lStack_60;
      alStack_d8[1] = 0;
      puStack_c8 = &uStack_88;
      while (cVar5 = FUN_1812fa7e0(&uStack_88,MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.MoveNext), lVar12 = lStack_78,
            cVar5 != '\0') {
        if (lStack_78 == 0) goto code_r0x000180755c08;
        iVar8 = *(int *)(lStack_78 + 0x18);
        if (*(int *)(TI_System.Math + 0xe4) == 0) {
          func_0x000180315660();
        }
        iVar7 = func_0x00018189eb20(1,uVar6,0);
        lStackX_20 = (longlong)iVar8 * (longlong)iVar7;
        iVar8 = *(int *)(lVar12 + 0x10);
        if (cRam00000001834b430e == '\0') {
          FUN_180315380(TI_UnityEngine.Object);
          cRam00000001834b430e = '\x01';
        }
        if ((iVar8 == 0xff38) || (iVar8 == 0xff9c)) {
          lVar9 = -1;
code_r0x000180755a8a:
          uVar10 = System_Int64__ToString(&lStackX_20,LIT_"'n0'",0);
        }
        else {
          if (DAT_1834b3102 == '\0') {
            FUN_180315380(TI_PlayerInventory);
            DAT_1834b3102 = '\x01';
          }
          uVar10 = **(undefined8 **)(TI_PlayerInventory + 0xb8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
          if (cVar5 == '\0') {
code_r0x000180755a2c:
            iVar8 = 0;
          }
          else {
            if (DAT_1834b3102 == '\0') {
              FUN_180315380(TI_PlayerInventory);
              DAT_1834b3102 = '\x01';
            }
            if (**(longlong **)(TI_PlayerInventory + 0xb8) == 0) goto code_r0x000180755bf3;
            lVar9 = PlayerInventory__GetItemById(**(longlong **)(TI_PlayerInventory + 0xb8),iVar8,0);
            if (lVar9 == 0) goto code_r0x000180755a2c;
            iVar8 = *(int *)(lVar9 + 0x28);
          }
          lVar9 = (longlong)iVar8;
          if (iVar8 < 0) goto code_r0x000180755a8a;
          lStack_c0 = lStackX_20;
          uVar10 = func_0x000180314670(_DAT_1834c6288,&lStack_c0);
          alStack_b8[0] = lVar9;
          uVar11 = func_0x000180314670(_DAT_1834c6288,alStack_b8);
          uVar10 = System_String__Format(LIT_"'{0:n0}  (have {1:n0})'",uVar10,uVar11,0);
        }
        lVar1 = *(longlong *)(param_1 + 0x98);
        uVar10 = MultisellWindow__LinhaDePeca(lVar12,0xd2,uVar10,alStack_d8,0);
        if (lVar1 == 0) goto code_r0x000180755c03;
        UnityEngine_UIElements_VisualElement__Add(lVar1,uVar10);
        if ((-1 < lVar9) && (lVar9 < lStackX_20)) {
          if (alStack_d8[0] == 0) goto code_r0x000180755bfe;
          lVar12 = UnityEngine_UIElements_VisualElement__get_style(alStack_d8[0],0);
          uStack_a8 = 0x3ee666663f800000;
          uStack_a0 = 0x3f8000003ee66666;
          puVar13 = (undefined8 *)
                    UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_70,&uStack_a8,0);
          if (lVar12 == 0) goto code_r0x000180755bf9;
          uStack_a8 = *puVar13;
          uStack_a0 = puVar13[1];
          uStack_98 = *(undefined4 *)(puVar13 + 2);
          FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle);
          bVar4 = true;
        }
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_88,MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.Dispose);
      uVar10 = LIT_"''";
      if (bVar4) {
        uVar10 = LIT_"\"You don't have enough of the required items.\"";
      }
      plVar2 = *(longlong **)(param_1 + 0xa8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe48))(plVar2,uVar10,*(undefined8 *)(*plVar2 + 0xe50));
        return;
      }
    }
  }
  FUN_1803155d0();
code_r0x000180755bf3:
  FUN_1803155d0();
code_r0x000180755bf9:
  FUN_1803155d0();
code_r0x000180755bfe:
  FUN_1803155d0();
code_r0x000180755c03:
  FUN_1803155d0();
code_r0x000180755c08:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

