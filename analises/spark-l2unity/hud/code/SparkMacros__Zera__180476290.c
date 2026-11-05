// SparkMacros__Zera__180476290 @ 0x180476290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMacros__Zera__180476290(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  
  if (cRam00000001834b3081 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.Clear);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMacros);
    cRam00000001834b3081 = '\x01';
  }
  if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMacros);
  }
  uVar2 = *(undefined8 *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if (cVar5 != '\0') {
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMacros);
    }
    if (*(longlong *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20) == 0) goto code_r0x0001804763f3;
    UnityEngine_MonoBehaviour__StopAllCoroutines();
  }
  if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMacros);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkMacros + 0xb8) + 8) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0xc) = 0;
  lVar3 = **(longlong **)(TI_SparkMacros + 0xb8);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    lVar3 = *(longlong *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x10);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001804763e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
    return;
  }
code_r0x0001804763f3:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

