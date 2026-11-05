// Gear__HideArrow__1807d8bd0 @ 0x1807d8bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gear__HideArrow__1807d8bd0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  
  if (cRam00000001834b468e == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b468e = '\x01';
  }
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar3 == '\0') {
    return;
  }
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x68),0), lVar4 != 0)) {
    UnityEngine_GameObject__SetActive(lVar4,0,0);
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

