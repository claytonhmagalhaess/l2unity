// SparkDados__LerLinhas__1805916d0 @ 0x1805916d0

void SparkDados__LerLinhas__1805916d0(undefined8 param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 auStackX_10 [12];
  undefined2 *puStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b39f2 == '\0') {
    FUN_180315380(0x1832bff30);
    FUN_180315380(0x1832c3bf0);
    cRam00000001834b39f2 = '\x01';
  }
  if (cRam00000001834b39f1 == '\0') {
    FUN_180315380(0x1833075b0);
    cRam00000001834b39f1 = '\x01';
  }
  plVar2 = (longlong *)func_0x000180315580(uRam00000001833075b0);
  FUN_18171faf0(plVar2,0,0);
  uVar3 = SparkDados__LerBytes__180591630(param_1,0);
  if (plVar2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar2 + 0x348))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x350));
    if (lVar4 != 0) {
      lVar4 = FUN_18170cfc0(lVar4,0xfeff,0);
      if (lVar4 != 0) {
        lVar4 = FUN_18170a5b0(lVar4,uRam00000001832c3bf0,uRam00000001832bff30,0);
        if (lVar4 != 0) {
          auStackX_10[0] = 10;
          if (cRam00000001834b89bb == '\0') {
            FUN_180315380(0x18331b058,10,0,0);
            cRam00000001834b89bb = '\x01';
          }
          puStack_18 = auStackX_10;
          uStack_10 = 1;
          FUN_18170a860(lVar4,&puStack_18,0x7fffffff,0,0);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

