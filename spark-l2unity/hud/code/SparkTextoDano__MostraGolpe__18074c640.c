// SparkTextoDano__MostraGolpe__18074c640 @ 0x18074c640

void SparkTextoDano__MostraGolpe__18074c640
               (undefined8 param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
               undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b429c == '\0') {
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b429c = '\x01';
  }
  if (param_3 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = Hit__isMiss(param_3,0);
  if (cVar3 == '\0') {
    if (*(int *)(param_3 + 0x14) < 1) {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkTextoDano__Op__18074cb20(param_8,0);
      if (cVar3 == '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = 0xc;
    }
    else {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkTextoDano__Op__18074cb20(param_4,0);
      if (cVar3 != '\0') {
        uVar1 = *(undefined4 *)(param_3 + 0x14);
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTextoDano__Solta__18074e1b0(param_1,param_2,1,uVar1,0);
      }
      cVar3 = Hit__isCrit(param_3,0);
      if (cVar3 != '\0') {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTextoDano__Op__18074cb20(param_5,0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkTextoDano__Solta__18074e1b0(param_1,param_2,3,0,0);
        }
      }
      cVar3 = Hit__isShielded(param_3,0);
      if (cVar3 == '\0') {
        return;
      }
      if (param_6 < 0) {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkTextoDano__Op__18074cb20(param_6,0);
      if (cVar3 == '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = 10;
    }
  }
  else {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = SparkTextoDano__Op__18074cb20(param_7,0);
    if (cVar3 == '\0') {
      return;
    }
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = 0xb;
  }
  SparkTextoDano__Solta__18074e1b0(param_1,param_2,uVar4,0,0);
  return;
}

