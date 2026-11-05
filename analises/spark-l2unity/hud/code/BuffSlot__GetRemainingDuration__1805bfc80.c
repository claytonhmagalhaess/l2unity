// BuffSlot__GetRemainingDuration__1805bfc80 @ 0x1805bfc80

ulonglong BuffSlot__GetRemainingDuration__1805bfc80(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  ulonglong uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x2c);
    fVar1 = *(float *)(lVar3 + 0x34);
    fVar5 = (float)FUN_1824366b0(0);
    return (ulonglong)(uint)(((float)iVar2 + fVar1) - fVar5);
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return uVar6;
}

