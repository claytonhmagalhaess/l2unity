// SparkRefinoWindow__Monta__1805afce0 @ 0x1805afce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRefinoWindow__Monta__1805afce0
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (cRam00000001834b447c == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b447c = '\x01';
  }
  lVar2 = param_1[5];
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(lVar2,0,0,param_4,unaff_RDI);
  if (cVar1 == '\0') {
    if (cRam00000001834b447d == '\0') {
      FUN_180315380(TI_L2Window.<MontaELembra>d__18);
      cRam00000001834b447d = '\x01';
    }
    lVar2 = func_0x000180315580(TI_L2Window.<MontaELembra>d__18);
    Gear__UpdateWeaponType__1803dadf0(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(longlong **)(lVar2 + 0x20) = param_1;
    func_0x000180314690(lVar2 + 0x20,param_1);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    func_0x000180314690(lVar2 + 0x28,param_2);
    UnityEngine_MonoBehaviour__StartCoroutine(param_1,lVar2,0);
  }
  return;
}

