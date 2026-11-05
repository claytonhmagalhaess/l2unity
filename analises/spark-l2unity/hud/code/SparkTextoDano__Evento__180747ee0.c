// SparkTextoDano__Evento__180747ee0 @ 0x180747ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__Evento__180747ee0
               (undefined8 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
               undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  char cVar1;
  
  if (cRam00000001834b42a8 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42a8 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(param_1,0,0);
  if (cVar1 != '\0') {
    return;
  }
  if ((param_5 & 0x10) == 0) {
    if ((param_5 & 0x40) == 0) {
      if (0 < param_4) {
        if (param_3 != 0) {
          param_12 = param_13;
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar1 = SparkTextoDano__Op__18074cb20(param_12,0);
        if (cVar1 == '\0') {
          return;
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar1 = (param_3 != 0) + '\x05';
        goto code_r0x000180748195;
      }
      if (param_4 == 0) {
        return;
      }
      if ((param_5 & 0x20) == 0) {
        param_7 = param_6;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar1 = SparkTextoDano__Op__18074cb20(param_7,0);
      if (cVar1 != '\0') {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTextoDano__Solta__18074e1b0
                  (param_1,param_2,((param_5 & 0x20) != 0) + '\x01',-param_4,0);
      }
      if ((param_5 & 1) != 0) {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar1 = SparkTextoDano__Op__18074cb20(param_8,0);
        if (cVar1 != '\0') {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkTextoDano__Solta__18074e1b0(param_1,param_2,3,0,0);
        }
      }
      if ((param_5 & 8) == 0) {
        return;
      }
      if (param_9 < 0) {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar1 = SparkTextoDano__Op__18074cb20(param_9,0);
      if (cVar1 == '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar1 = '\n';
    }
    else {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar1 = SparkTextoDano__Op__18074cb20(param_11,0);
      if (cVar1 == '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar1 = '\f';
    }
  }
  else {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = SparkTextoDano__Op__18074cb20(param_10,0);
    if (cVar1 == '\0') {
      return;
    }
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = '\v';
  }
  param_4 = 0;
code_r0x000180748195:
  SparkTextoDano__Solta__18074e1b0(param_1,param_2,cVar1,param_4,0);
  return;
}

