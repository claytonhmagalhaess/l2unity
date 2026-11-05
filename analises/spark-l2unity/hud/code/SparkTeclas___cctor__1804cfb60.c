// SparkTeclas___cctor__1804cfb60 @ 0x1804cfb60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas___cctor__1804cfb60(void)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (cRam00000001834b3305 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string__>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,string__>);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'FlyLeft'");
    FUN_180315380(LIT_"'FlyBack'");
    FUN_180315380(LIT_"'FlyRight'");
    FUN_180315380(LIT_"'FlyDown'");
    FUN_180315380(LIT_"'FlyForward'");
    FUN_180315380(LIT_"'FlyUp'");
    cRam00000001834b3305 = '\x01';
  }
  uVar2 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,string__>);
  FUN_18124bf80(uVar2,MR_System.Collections.Generic.Dictionary<string,string__>..ctor);
  *(undefined8 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x18) = uVar2;
  func_0x000180314690(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x18,uVar2);
  lVar3 = func_0x000180314710(TI_string__,6);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = LIT_"'FlyForward'";
      func_0x000180314690(lVar3 + 0x20);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = LIT_"'FlyBack'";
        func_0x000180314690(lVar3 + 0x28);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = LIT_"'FlyLeft'";
          func_0x000180314690(lVar3 + 0x30);
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = LIT_"'FlyRight'";
            func_0x000180314690(lVar3 + 0x38);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = LIT_"'FlyUp'";
              func_0x000180314690(lVar3 + 0x40);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = LIT_"'FlyDown'";
                func_0x000180314690(lVar3 + 0x48);
                *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x28) = lVar3;
                func_0x000180314690(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x28,lVar3);
                *(undefined4 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x38) = 0xfffffff6;
                return;
              }
            }
          }
        }
      }
    }
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

