// NpcHtmlWindow__ExtractNode__1806807e0 @ 0x1806807e0

longlong NpcHtmlWindow__ExtractNode__1806807e0
                   (undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                   int param_5,int *param_6)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00000001834b3e4e == '\0') {
    FUN_180315380(TI_NpcHtmlWindow.HtmlNode);
    cRam00000001834b3e4e = '\x01';
  }
  if (param_2 != 0) {
    iVar2 = System_String__IndexOf(param_2,param_3,*param_6,0);
    if (iVar2 == -1) {
      *param_6 = param_5 + 1;
      return 0;
    }
    lVar3 = System_String__Substring(param_2,*param_6,iVar2 - *param_6,0);
    lVar4 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
    Gear__UpdateWeaponType__1803dadf0(lVar4,0);
    if ((lVar4 != 0) && (*(undefined4 *)(lVar4 + 0x10) = param_4, lVar3 != 0)) {
      uVar5 = System_String__Substring(lVar3,0,param_5 - *param_6,0);
      uVar5 = NpcHtmlWindow__ExtractAttributes__1806802b0(param_1,uVar5,0);
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      func_0x000180314690(lVar4 + 0x20,uVar5);
      iVar7 = (param_5 - *param_6) + 1;
      if (((iVar7 < 0) || (iVar6 = *(int *)(lVar3 + 0x10) + -1, iVar7 <= iVar6)) &&
         (iVar6 = iVar7, iVar7 < 0)) {
        iVar6 = 0;
      }
      uVar5 = func_0x00018170c060(lVar3,iVar6,0);
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      func_0x000180314690(lVar4 + 0x18,uVar5);
      if (param_3 != 0) {
        *param_6 = *(int *)(param_3 + 0x10) + iVar2;
        return lVar4;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

