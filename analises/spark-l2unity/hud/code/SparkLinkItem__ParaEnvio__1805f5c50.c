// SparkLinkItem__ParaEnvio__1805f5c50 @ 0x1805f5c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkLinkItem__ParaEnvio__1805f5c50(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined2 auStackX_18 [4];
  int iStackX_20;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  
  if (cRam00000001834b3b46 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.get_Keys);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.GetEnumerator);
    FUN_180315380(TI_SparkLinkItem);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'ID='");
    FUN_180315380(LIT_"''");
    cRam00000001834b3b46 = '\x01';
  }
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  cVar3 = func_0x000181707e50(param_1,0);
  if (cVar3 != '\0') {
    return param_1;
  }
  auStackX_18[0] = 8;
  if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar9 = System_Char__ToString(auStackX_18,0);
  if (param_1 != 0) {
    lVar10 = System_String__Replace(param_1,uVar9,LIT_"''",0);
    if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
      func_0x000180315660(TI_SparkLinkItem);
    }
    if (**(longlong **)(TI_SparkLinkItem + 0xb8) != 0) {
      iVar6 = func_0x000181183c40(**(longlong **)(TI_SparkLinkItem + 0xb8),MR_System.Collections.Generic.Dictionary<string,int>.get_Count)
      ;
      if (iVar6 == 0) {
        return lVar10;
      }
      if (lVar10 != 0) {
        uVar8 = *(undefined4 *)(lVar10 + 0x10);
        plVar11 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
        plStack_68 = plVar11;
        func_0x000181716710(plVar11,uVar8,0);
        iVar14 = 0;
        iVar13 = 0;
        plStack_70 = plVar11;
        iVar6 = iVar13;
code_r0x0001805f5e00:
        do {
          iStackX_20 = iVar14;
          if (*(int *)(lVar10 + 0x10) <= iVar14) goto code_r0x0001805f6064;
          sVar4 = System_String__get_Chars(lVar10,iVar14,0);
          if ((sVar4 == 0x5b) && (iVar6 < 8)) {
            if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
              func_0x000180315660(TI_SparkLinkItem);
            }
            if (**(longlong **)(TI_SparkLinkItem + 0xb8) == 0) break;
            lVar15 = 0;
            lVar12 = FUN_18117fc80(**(longlong **)(TI_SparkLinkItem + 0xb8),MR_System.Collections.Generic.Dictionary<string,int>.get_Keys
                                  );
            if (lVar12 == 0) break;
            FUN_180fbde10(&uStack_58,lVar12);
            uStack_88 = CONCAT44(uStack_54,uStack_58);
            uStack_80 = CONCAT44(uStack_4c,uStack_50);
            lStack_78 = lStack_48;
            uVar9 = 0;
            lVar12 = 0;
            puVar16 = &uStack_88;
            while (cVar3 = FUN_18133ac10(&uStack_88,MR_System.Collections.Generic.Dictionary<string,int>.MoveNext), lVar2 = lStack_78,
                  cVar3 != '\0') {
              if (lStack_78 == 0) {
                FUN_1803155d0();
                FUN_180311490();
                pcVar1 = (code *)swi(3);
                lVar10 = (*pcVar1)();
                return lVar10;
              }
              if ((*(int *)(lStack_78 + 0x10) + iVar14 <= *(int *)(lVar10 + 0x10)) &&
                 (((lVar12 == 0 || (*(int *)(lVar12 + 0x10) < *(int *)(lStack_78 + 0x10))) &&
                  (iVar7 = System_String__CompareOrdinal
                                     (lVar10,iVar14,lStack_78,0,*(undefined4 *)(lStack_78 + 0x10),0,
                                      iVar13,lVar15,uVar9,puVar16), iVar7 == 0)))) {
                lVar12 = lVar2;
                lVar15 = lVar2;
              }
            }
            Gear__UpdateWeaponType__1803dadf0(&uStack_88,MR_System.Collections.Generic.Dictionary<string,int>.Dispose);
            if (lVar12 != 0) {
              if ((plVar11 == (longlong *)0x0) ||
                 (lVar15 = System_Text_StringBuilder__Append(plVar11,8,0), lVar15 == 0)) break;
              lVar15 = System_Text_StringBuilder__Append(lVar15,LIT_"'ID='",0);
              if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
                func_0x000180315660();
              }
              if (((**(longlong **)(TI_SparkLinkItem + 0xb8) == 0) ||
                  (uVar8 = FUN_18125d9e0(**(longlong **)(TI_SparkLinkItem + 0xb8),lVar12),
                  lVar15 == 0)) ||
                 (lVar15 = System_Text_StringBuilder__Append(lVar15,uVar8), lVar15 == 0)) break;
              System_Text_StringBuilder__Append(lVar15,8);
              iVar14 = iVar14 + *(int *)(lVar12 + 0x10);
              iVar13 = iVar6 + 1;
              iVar6 = iVar13;
              goto code_r0x0001805f5e00;
            }
          }
          uVar5 = System_String__get_Chars(lVar10,iVar14,0);
          if (plVar11 == (longlong *)0x0) break;
          System_Text_StringBuilder__Append(plVar11,uVar5);
          iVar14 = iVar14 + 1;
        } while( true );
      }
    }
  }
code_r0x0001805f60aa:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar10 = (*pcVar1)();
  return lVar10;
code_r0x0001805f6064:
  if (plVar11 != (longlong *)0x0) {
    lVar10 = (**(code **)(*plStack_68 + 0x168))(plVar11,*(undefined8 *)(*plStack_68 + 0x170));
    return lVar10;
  }
  goto code_r0x0001805f60aa;
}

