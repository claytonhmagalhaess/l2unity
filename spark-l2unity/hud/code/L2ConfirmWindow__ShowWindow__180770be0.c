// L2ConfirmWindow__ShowWindow__180770be0 @ 0x180770be0

/* WARNING: Possible PIC construction at 0x000180770cb6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000180770cd6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00018077095f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000180770cdb) */
/* WARNING: Removing unreachable block (ram,0x000180770cf1) */
/* WARNING: Removing unreachable block (ram,0x000180770cec) */
/* WARNING: Removing unreachable block (ram,0x000180770cf4) */
/* WARNING: Removing unreachable block (ram,0x000180770d08) */
/* WARNING: Removing unreachable block (ram,0x000180770cfb) */
/* WARNING: Removing unreachable block (ram,0x000180770d0b) */
/* WARNING: Removing unreachable block (ram,0x000180770d22) */
/* WARNING: Removing unreachable block (ram,0x000180770d2c) */
/* WARNING: Removing unreachable block (ram,0x000180770dc1) */
/* WARNING: Removing unreachable block (ram,0x000180770870) */
/* WARNING: Removing unreachable block (ram,0x000180770889) */
/* WARNING: Removing unreachable block (ram,0x0001807708c0) */
/* WARNING: Removing unreachable block (ram,0x000180770920) */
/* WARNING: Removing unreachable block (ram,0x0001807708cf) */
/* WARNING: Removing unreachable block (ram,0x0001807708e9) */
/* WARNING: Removing unreachable block (ram,0x000180770907) */
/* WARNING: Removing unreachable block (ram,0x000180770929) */
/* WARNING: Removing unreachable block (ram,0x000180770939) */
/* WARNING: Removing unreachable block (ram,0x000180770d3d) */
/* WARNING: Removing unreachable block (ram,0x000180770d4d) */
/* WARNING: Removing unreachable block (ram,0x000180770d60) */
/* WARNING: Removing unreachable block (ram,0x000180770d90) */
/* WARNING: Removing unreachable block (ram,0x000180770de4) */
/* WARNING: Removing unreachable block (ram,0x000180770d9d) */
/* WARNING: Removing unreachable block (ram,0x000180770d6a) */
/* WARNING: Removing unreachable block (ram,0x000181645af0) */
/* WARNING: Removing unreachable block (ram,0x000181645b12) */
/* WARNING: Removing unreachable block (ram,0x000181645b20) */
/* WARNING: Removing unreachable block (ram,0x000181645b3d) */
/* WARNING: Removing unreachable block (ram,0x000181645b27) */
/* WARNING: Removing unreachable block (ram,0x000181645b5a) */
/* WARNING: Removing unreachable block (ram,0x000181645b5c) */
/* WARNING: Removing unreachable block (ram,0x000181645b63) */
/* WARNING: Removing unreachable block (ram,0x000181645b67) */
/* WARNING: Removing unreachable block (ram,0x000181645b80) */
/* WARNING: Removing unreachable block (ram,0x000181645bb8) */
/* WARNING: Removing unreachable block (ram,0x000181645b8f) */
/* WARNING: Removing unreachable block (ram,0x000181645bbe) */
/* WARNING: Removing unreachable block (ram,0x000181645b94) */
/* WARNING: Removing unreachable block (ram,0x000180770cbb) */
/* WARNING: Removing unreachable block (ram,0x000180770964) */
/* WARNING: Removing unreachable block (ram,0x0001807709a8) */
/* WARNING: Removing unreachable block (ram,0x0001807709e1) */
/* WARNING: Removing unreachable block (ram,0x0001807709f8) */
/* WARNING: Removing unreachable block (ram,0x000180770a28) */
/* WARNING: Removing unreachable block (ram,0x000180770a3b) */
/* WARNING: Removing unreachable block (ram,0x000180770a55) */
/* WARNING: Removing unreachable block (ram,0x000180770a6d) */
/* WARNING: Removing unreachable block (ram,0x000180770a80) */
/* WARNING: Removing unreachable block (ram,0x000180770aa1) */
/* WARNING: Removing unreachable block (ram,0x000180770aa6) */
/* WARNING: Removing unreachable block (ram,0x000180770ab7) */
/* WARNING: Removing unreachable block (ram,0x000180770ac0) */
/* WARNING: Removing unreachable block (ram,0x000180770ad3) */
/* WARNING: Removing unreachable block (ram,0x000180770b04) */
/* WARNING: Removing unreachable block (ram,0x000180770ae9) */
/* WARNING: Removing unreachable block (ram,0x000180770af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong L2ConfirmWindow__ShowWindow__180770be0
                    (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_2 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  uVar4 = SystemMessage__PrintMessage(param_2,0,0);
  if (DAT_1834b43de == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.Add,uVar4,param_3,param_4);
    FUN_180315380(TI_L2ConfirmWindow.Pedido);
    DAT_1834b43de = '\x01';
  }
  lVar5 = func_0x000180315580(TI_L2ConfirmWindow.Pedido);
  uVar6 = Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  if (_DAT_1834c7d58 != 0) {
    uVar7 = (uint)(lVar5 + 0x10U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar6 = *puVar1;
      bVar8 = uVar2 == uVar6;
      if (bVar8) {
        *puVar1 = uVar2 | 1L << (uVar7 & 0x3f);
        uVar6 = uVar2;
      }
      UNLOCK();
    } while (!bVar8);
  }
  return uVar6;
}

