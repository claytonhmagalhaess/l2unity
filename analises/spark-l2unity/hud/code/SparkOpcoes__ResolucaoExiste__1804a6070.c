// SparkOpcoes__ResolucaoExiste__1804a6070 @ 0x1804a6070

bool SparkOpcoes__ResolucaoExiste__1804a6070(int param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_18 = 0;
  uStack_10 = 0;
  lVar5 = UnityEngine_Screen__get_resolutions(0);
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x18) == 0)) {
    if (0 < param_1) {
      return 0 < param_2;
    }
    return false;
  }
  uVar6 = 0;
  while( true ) {
    if (*(int *)(lVar5 + 0x18) <= (int)uVar6) {
      return false;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar6) break;
    puVar1 = (undefined8 *)(lVar5 + ((longlong)(int)uVar6 + 2) * 0x10);
    uStack_18 = *puVar1;
    uStack_10 = puVar1[1];
    iVar4 = func_0x000180eb7750(&uStack_18,0);
    if ((iVar4 == param_1) && (iVar4 = func_0x000180eb5010(&uStack_18), iVar4 == param_2)) {
      return true;
    }
    uVar6 = uVar6 + 1;
  }
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return (bool)uVar3;
}

