// SparkTextoDano__Posicoes__18074da10 @ 0x18074da10

undefined8 SparkTextoDano__Posicoes__18074da10(int param_1,int param_2)

{
  if (cRam00000001834b42b0 == '\0') {
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42b0 = '\x01';
  }
  if (param_2 == 4) {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTextoDano);
    }
    return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xa8);
  }
  if (param_2 == 0xd) {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTextoDano);
    }
    return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xb8);
  }
  if (param_1 == 1) {
    switch(param_2) {
    case 1:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xc0);
    case 3:
code_r0x00018074da82:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 200);
    case 5:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xd0);
    case 6:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xd8);
    case 7:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xe0);
    case 8:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xe8);
    case 9:
    case 10:
      goto code_r0x00018074dcfc;
    }
  }
  else if (param_1 == 0) {
    switch(param_2) {
    case 1:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xf0);
    case 2:
    case 7:
    case 8:
      goto code_r0x00018074dcfc;
    case 3:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xf8);
    case 5:
    case 6:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x100);
    }
  }
  else {
    switch(param_2) {
    case 3:
      goto code_r0x00018074da82;
    case 5:
    case 6:
    case 7:
    case 8:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x108);
    case 9:
    case 10:
code_r0x00018074dcfc:
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xb0);
    }
  }
  return 0;
}

