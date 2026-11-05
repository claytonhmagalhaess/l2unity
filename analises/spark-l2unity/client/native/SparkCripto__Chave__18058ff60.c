// SparkCripto__Chave__18058ff60 @ 0x18058ff60

undefined8 SparkCripto__Chave__18058ff60(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b39e9 == '\0') {
    FUN_180315380(0x1833125d0);
    FUN_180315380(0x1832eb8c8);
    FUN_180315380(0x1832f9a38);
    FUN_180315380(0x18332efa8);
    cRam00000001834b39e9 = '\x01';
  }
  lVar2 = FUN_18174b3a0(0);
  plVar3 = (longlong *)FUN_18172dd40(0);
  if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
    func_0x000180315660(lRam00000001832eb8c8);
  }
  uVar4 = FUN_1817083b0(uRam00000001832f9a38,
                        *(undefined8 *)(*(longlong *)(lRam00000001832eb8c8 + 0xb8) + 8),0);
  uVar4 = FUN_1817037f0(uVar4,uRam000000018332efa8,0);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x248))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x250));
    if (lVar2 != 0) {
      uVar4 = FUN_18172e850(lVar2,uVar4,0);
      if (lVar2 != 0) {
        FUN_180002390(0,uRam00000001833125d0);
      }
      return uVar4;
    }
    FUN_1803155d0();
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

