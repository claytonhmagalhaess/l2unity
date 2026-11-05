// Nameplate___cctor__180678540 @ 0x180678540

void Nameplate___cctor__180678540(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (cRam00000001834b3e11 == '\0') {
    FUN_180315380(TI_Nameplate);
    cRam00000001834b3e11 = '\x01';
  }
  puVar1 = *(undefined8 **)(TI_Nameplate + 0xb8);
  *puVar1 = 0x3f800000;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0x3f800000;
  lVar2 = *(longlong *)(TI_Nameplate + 0xb8);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x14) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x18) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x1c) = 0x3f800000;
  lVar2 = *(longlong *)(TI_Nameplate + 0xb8);
  *(undefined8 *)(lVar2 + 0x20) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x28) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f800000;
  return;
}

