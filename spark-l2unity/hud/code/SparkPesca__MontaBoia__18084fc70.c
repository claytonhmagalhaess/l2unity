// SparkPesca__MontaBoia__18084fc70 @ 0x18084fc70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkPesca__MontaBoia__18084fc70(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (cRam00000001834b4874 == '\0') {
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_SparkPesca);
    FUN_180315380(LIT_"'Boia'");
    cRam00000001834b4874 = '\x01';
  }
  lVar2 = func_0x000180315580(TI_UnityEngine.GameObject);
  UnityEngine_GameObject___ctor(lVar2,LIT_"'Boia'",0);
  if (lVar2 != 0) {
    uVar3 = UnityEngine_GameObject__get_transform(lVar2,0);
    if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_28 = 0x3dcccccd;
    uStack_24 = 0x3dcccccd3d8f5c29;
    uStack_18 = 0;
    uStack_14 = 0xbc75c28f;
    uStack_10 = 0;
    SparkPesca__Parte(uVar3,0,&uStack_18,&uStack_28,0,0);
    uVar3 = UnityEngine_GameObject__get_transform(lVar2,0);
    uStack_18 = 0x3dd70a3d;
    uStack_14 = 0x3d8f5c29;
    uStack_10 = 0x3dd70a3d;
    uStack_28 = 0;
    uStack_24 = 0x3c449ba6;
    SparkPesca__Parte(uVar3,0,&uStack_28,&uStack_18,1,0);
    uVar3 = UnityEngine_GameObject__get_transform(lVar2,0);
    uStack_18 = 0x3c449ba6;
    uStack_14 = 0x3cf5c28f;
    uStack_10 = 0x3c449ba6;
    uStack_28 = 0;
    uStack_24 = 0x3d851eb8;
    SparkPesca__Parte(uVar3,2,&uStack_28,&uStack_18,1,0);
    return lVar2;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

