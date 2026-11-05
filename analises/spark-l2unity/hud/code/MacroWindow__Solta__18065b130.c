// MacroWindow__Solta__18065b130 @ 0x18065b130

undefined4 MacroWindow__Solta__18065b130(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (cRam00000001834b3d74 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.TextField>.get_Item);
    cRam00000001834b3d74 = '\x01';
  }
  MacroWindow__Acende(param_1,0xffffffff,0);
  cVar2 = MacroWindow__PorCimaEm(param_1,param_3,0);
  if (cVar2 == '\0') {
    return 0;
  }
  lVar5 = MacroWindow__ComandoDe(param_2,0);
  if (lVar5 == 0) {
    return 1;
  }
  iVar3 = MacroWindow__LinhaEm(param_1,param_3,0);
  if (-1 < iVar3) {
    if ((*(longlong *)(param_1 + 0xe0) != 0) &&
       (plVar6 = (longlong *)FUN_180bbafe0(*(longlong *)(param_1 + 0xe0),iVar3,MR_System.Collections.Generic.List<UnityEngine.UIElements.TextField>.get_Item)
       , plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0xa88))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0xa90));
      return 1;
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  MacroWindow__PoeNaLinha(param_1,lVar5,0);
  return 1;
}

