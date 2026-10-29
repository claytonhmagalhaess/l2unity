// NameplatesManagerBase__GuardaEscondido__180678c60 @ 0x180678c60

bool NameplatesManagerBase__GuardaEscondido__180678c60(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  undefined1 uVar5;
  float *pfVar6;
  undefined1 auStack_48 [64];
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    pfVar6 = (float *)UnityEngine_Transform__get_position
                                (auStack_48,*(longlong *)(param_1 + 0x38),0);
    if (param_2 != 0) {
      fVar1 = *pfVar6;
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[1];
      pfVar6 = (float *)UnityEngine_Transform__get_position(auStack_48,param_2,0);
      return (fVar3 - pfVar6[1]) * (fVar3 - pfVar6[1]) + (fVar1 - *pfVar6) * (fVar1 - *pfVar6) +
             (fVar2 - pfVar6[2]) * (fVar2 - pfVar6[2]) <=
             *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) * 2.25;
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  uVar5 = (*pcVar4)();
  return (bool)uVar5;
}

