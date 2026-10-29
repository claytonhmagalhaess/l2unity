// MultisellWindow__OnDestroy__180755e50 @ 0x180755e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MultisellWindow__OnDestroy__180755e50(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b42fe == '\0') {
    FUN_180315380(TI_MultisellWindow);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b42fe = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_MultisellWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if (cVar2 != '\0') {
    **(undefined8 **)(TI_MultisellWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_MultisellWindow + 0xb8),0);
  }
  return;
}

