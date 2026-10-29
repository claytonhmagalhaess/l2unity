// MultisellWindow__MostraProduto__180755c20 @ 0x180755c20

void MultisellWindow__MostraProduto__180755c20(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 auStackX_8 [4];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (cRam00000001834b4309 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.GetEnumerator);
    cRam00000001834b4309 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x90),0);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x18);
      if (lVar1 == 0) goto code_r0x000180755d7a;
      FUN_180bada40(&uStack_60,lVar1,MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.GetEnumerator);
      uStack_48 = (undefined4)uStack_60;
      uStack_44 = uStack_60._4_4_;
      uStack_40 = (undefined4)uStack_58;
      uStack_3c = uStack_58._4_4_;
      uStack_38 = uStack_50;
      uStack_60 = 0;
      uStack_58 = &uStack_48;
      while( true ) {
        cVar3 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.MoveNext);
        if (cVar3 == '\0') break;
        lVar1 = *(longlong *)(param_1 + 0x90);
        auStackX_8[0] = 0;
        uVar4 = MultisellWindow__LinhaDePeca(uStack_38,0xd2,0,auStackX_8,0);
        if (lVar1 == 0) {
          FUN_1803155d0();
          FUN_180311490();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UnityEngine_UIElements_VisualElement__Add(lVar1,uVar4);
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.Dispose);
    }
    return;
  }
code_r0x000180755d7a:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

