// SparkTextoDano__MascaraDasOpcoes__18074b3e0 @ 0x18074b3e0

uint SparkTextoDano__MascaraDasOpcoes__18074b3e0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (cRam00000001834b42a3 == '\0') {
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42a3 = '\x01';
  }
  iVar2 = 0xb;
  do {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = SparkTextoDano__Op__18074cb20(iVar2,0);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto code_r0x00018074b442;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x17);
  uVar3 = 0;
code_r0x00018074b442:
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = SparkTextoDano__Op__18074cb20(4,0);
  if (cVar1 == '\0') {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = SparkTextoDano__Op__18074cb20(5,0);
    if (cVar1 == '\0') {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar1 = SparkTextoDano__Op__18074cb20(6,0);
      if (cVar1 == '\0') {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar1 = SparkTextoDano__Op__18074cb20(7,0);
        if (cVar1 == '\0') {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar1 = SparkTextoDano__Op__18074cb20(9,0);
          if (cVar1 == '\0') {
            if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar1 = SparkTextoDano__Op__18074cb20(10,0);
            if (cVar1 == '\0') goto code_r0x00018074b52b;
          }
        }
      }
    }
  }
  uVar3 = uVar3 | 2;
code_r0x00018074b52b:
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = SparkTextoDano__Op__18074cb20(0x17,0);
  if (cVar1 == '\0') {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar1 = SparkTextoDano__Op__18074cb20(0x18,0);
    if (cVar1 == '\0') {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar1 = SparkTextoDano__Op__18074cb20(0x1a,0);
      if (cVar1 == '\0') {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar1 = SparkTextoDano__Op__18074cb20(0x1b,0);
        if (cVar1 == '\0') {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar1 = SparkTextoDano__Op__18074cb20(0x1c,0);
          if (cVar1 == '\0') {
            if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar1 = SparkTextoDano__Op__18074cb20(0x1d,0);
            if (cVar1 == '\0') {
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar1 = SparkTextoDano__Op__18074cb20(0x1f,0);
              if (cVar1 == '\0') {
                return uVar3;
              }
            }
          }
        }
      }
    }
  }
  return uVar3 | 4;
}

