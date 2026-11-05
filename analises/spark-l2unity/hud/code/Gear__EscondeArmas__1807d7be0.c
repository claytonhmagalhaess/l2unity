// Gear__EscondeArmas__1807d7be0 @ 0x1807d7be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gear__EscondeArmas__1807d7be0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  
  if (cRam00000001834b468f == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b468f = '\x01';
  }
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(byte *)(param_1 + 0x81) = param_2;
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar3 != '\0') {
    if ((*(longlong *)(param_1 + 0x60) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x60),0), lVar4 == 0))
    goto code_r0x0001807d7ccf;
    UnityEngine_GameObject__SetActive(lVar4,param_2 ^ 1,0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar3 == '\0') {
    return;
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x78),0), lVar4 != 0)) {
    UnityEngine_GameObject__SetActive(lVar4,param_2 ^ 1,0);
    return;
  }
code_r0x0001807d7ccf:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

