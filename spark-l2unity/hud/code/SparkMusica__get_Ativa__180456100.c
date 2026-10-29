// SparkMusica__get_Ativa__180456100 @ 0x180456100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkMusica__get_Ativa__180456100(void)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  
  if (cRam00000001834b2ffd == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,string__>.get_Count);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMusica);
    cRam00000001834b2ffd = '\x01';
  }
  if (*(int *)(TI_SparkMusica + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMusica);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(TI_SparkMusica + 0xb8) + 8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 == '\0') {
    return false;
  }
  if (*(int *)(TI_SparkMusica + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMusica);
  }
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkMusica + 0xb8) + 8);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0)) {
    iVar6 = func_0x000181183c40(lVar2,MR_System.Collections.Generic.Dictionary<int,string__>.get_Count);
    return 0 < iVar6;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

