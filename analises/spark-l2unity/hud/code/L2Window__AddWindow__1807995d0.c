// L2Window__AddWindow__1807995d0 @ 0x1807995d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Window__AddWindow__1807995d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (cRam00000001834b447c == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b447c = '\x01';
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar2 == '\0') {
    if (cRam00000001834b447d == '\0') {
      FUN_180315380(TI_L2Window.<MontaELembra>d__18);
      cRam00000001834b447d = '\x01';
    }
    lVar3 = func_0x000180315580(TI_L2Window.<MontaELembra>d__18);
    Gear__UpdateWeaponType__1803dadf0(lVar3,0);
    *(undefined4 *)(lVar3 + 0x10) = 0;
    *(longlong *)(lVar3 + 0x20) = param_1;
    func_0x000180314690(lVar3 + 0x20,param_1);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    func_0x000180314690(lVar3 + 0x28,param_2);
    UnityEngine_MonoBehaviour__StartCoroutine(param_1,lVar3,0);
  }
  return;
}

