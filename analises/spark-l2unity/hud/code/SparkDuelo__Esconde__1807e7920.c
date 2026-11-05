// SparkDuelo__Esconde__1807e7920 @ 0x1807e7920

void SparkDuelo__Esconde__1807e7920(void)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (cRam00000001834b46f3 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkDuelo.Linha>.Clear);
    FUN_180315380(TI_SparkDuelo);
    cRam00000001834b46f3 = '\x01';
  }
  if (*(int *)(TI_SparkDuelo + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(*(longlong *)(TI_SparkDuelo + 0xb8) + 8) != 0) {
    if (*(int *)(TI_SparkDuelo + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar2 = *(longlong *)(*(longlong *)(TI_SparkDuelo + 0xb8) + 8);
    if (lVar2 == 0) goto code_r0x0001807e7a0d;
    UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(lVar2,0);
    *(undefined8 *)(*(longlong *)(TI_SparkDuelo + 0xb8) + 8) = 0;
    func_0x000180314690(*(longlong *)(TI_SparkDuelo + 0xb8) + 8,0);
  }
  if (*(int *)(TI_SparkDuelo + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = *(longlong *)(*(longlong *)(TI_SparkDuelo + 0xb8) + 0x10);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x20);
    if (0 < iVar1) {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,
                          *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x18),0);
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0;
      *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
      System_Array__Clear(*(undefined8 *)(lVar2 + 0x18),0,iVar1,0);
    }
    *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
    return;
  }
code_r0x0001807e7a0d:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

