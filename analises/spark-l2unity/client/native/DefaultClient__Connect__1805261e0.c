// DefaultClient__Connect__1805261e0 @ 0x1805261e0

void DefaultClient__Connect__1805261e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b3772 == '\0') {
    FUN_180315380(0x18330e8f8);
    cRam00000001834b3772 = '\x01';
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FUN_1817b5390(auStack_68,0);
  uStack_40 = *puVar1;
  uStack_38 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_28 = puVar1[3];
  func_0x000180314690(&uStack_40,0);
  uStack_20 = param_1;
  func_0x000180314690(&uStack_20,param_1);
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_18095a060(&uStack_40,&uStack_48,uRam000000018330e8f8);
  return;
}

