// SparkMapaWindow__TrocaAndar__18064a2b0 @ 0x18064a2b0

void SparkMapaWindow__TrocaAndar__18064a2b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  ulonglong uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3d35 == '\0') {
    FUN_180315380(MR_System.Nullable<UnityEngine.Vector2>..ctor);
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d35 = '\x01';
  }
  uStack_48 = 0;
  uStack_40 = 0;
  if ((*(longlong *)(param_1 + 0x188) != 0) && (param_2 != *(uint *)(param_1 + 400))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x20);
    if (lVar1 == 0) {
DAT_18064a414:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(uint *)(lVar1 + 0x18) <= param_2) {
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)param_2 * 8);
    uStack_38 = 0;
    uStack_30 = 0;
    if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = SparkMapaWindow__PosicaoDoJogador3__180642280(&uStack_48,0);
    uVar3 = uStack_48;
    if (cVar4 != '\0') {
      if (lVar1 == 0) goto DAT_18064a414;
      uStack_28 = uStack_48;
      uStack_20 = uStack_40;
      cVar4 = SparkMapaWindow_Andar__Contem__1806542f0(lVar1,&uStack_28,0);
      if (cVar4 != '\0') {
        func_0x000180cb7f80(&uStack_38,uVar3 & 0xffffffff,MR_System.Nullable<UnityEngine.Vector2>..ctor);
      }
    }
    uStack_20 = uStack_30;
    uStack_28 = uStack_38;
    SparkMapaWindow__AbreInterno__180637670
              (param_1,*(undefined8 *)(param_1 + 0x188),param_2,&uStack_28,
               *(undefined1 *)(param_1 + 0x1a0),0);
  }
  return;
}

