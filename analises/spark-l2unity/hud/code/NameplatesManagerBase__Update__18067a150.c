// NameplatesManagerBase__Update__18067a150 @ 0x18067a150

void NameplatesManagerBase__Update__18067a150(longlong *param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    fVar3 = (float)FUN_1824366b0(0);
    fVar1 = *(float *)(param_1 + 0xb);
    if (fVar1 <= fVar3) {
      fVar4 = (float)FUN_1824366b0(0);
      *(float *)(param_1 + 0xb) = fVar4 + 0.1;
    }
    NameplatesManagerBase__UpdateNameplateSystem__180679d60(param_1,fVar1 <= fVar3,0);
  }
  return;
}

