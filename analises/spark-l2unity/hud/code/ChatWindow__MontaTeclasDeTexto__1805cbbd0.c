// ChatWindow__MontaTeclasDeTexto__1805cbbd0 @ 0x1805cbbd0

undefined8 ChatWindow__MontaTeclasDeTexto__1805cbbd0(void)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3acc == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.ToArray);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.InputSystem.Key>);
    cRam00000001834b3acc = '\x01';
  }
  lVar5 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.InputSystem.Key>);
  FUN_180bba2e0(lVar5,MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>..ctor);
  iVar8 = 4;
  if (lVar5 != 0) {
    do {
      lVar4 = MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.Add;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      lVar6 = *(longlong *)(lVar5 + 0x10);
      if (lVar6 == 0) goto code_r0x0001805cbd76;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) goto code_r0x0001805cbd7c;
        *(int *)(lVar6 + 0x20 + (longlong)(int)uVar1 * 4) = iVar8;
      }
      else {
        FUN_18162d460(lVar5,iVar8,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x33);
    iVar8 = 0x4e;
    do {
      lVar4 = MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.Add;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      lVar6 = *(longlong *)(lVar5 + 0x10);
      if (lVar6 == 0) goto code_r0x0001805cbd76;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) goto code_r0x0001805cbd7c;
        *(int *)(lVar6 + 0x20 + (longlong)(int)uVar1 * 4) = iVar8;
      }
      else {
        FUN_18162d460(lVar5,iVar8,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x5e);
    iVar8 = 0x6a;
    while( true ) {
      lVar4 = MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.Add;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      lVar6 = *(longlong *)(lVar5 + 0x10);
      if (lVar6 == 0) break;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
code_r0x0001805cbd7c:
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return uVar7;
        }
        *(int *)(lVar6 + 0x20 + (longlong)(int)uVar1 * 4) = iVar8;
      }
      else {
        FUN_18162d460(lVar5,iVar8,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.ToArray;
      iVar8 = iVar8 + 1;
      if (0x6e < iVar8) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          uVar2 = *(undefined4 *)(lVar5 + 0x18);
          lVar6 = *(longlong *)
                   (*(longlong *)(*(longlong *)(MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.ToArray + 0x20) + 0xc0) + 0x18);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_180312f40(lVar6);
          }
          uVar7 = func_0x000180314710(lVar6,uVar2);
          System_Array__Copy(*(undefined8 *)(lVar5 + 0x10),0,uVar7,0,*(undefined4 *)(lVar5 + 0x18),0
                             ,unaff_RDI);
          return uVar7;
        }
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.ToArray + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_180312f40(lVar5);
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          func_0x000180315660(lVar5);
        }
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_180312f40(lVar5);
        }
        return **(undefined8 **)(lVar5 + 0xb8);
      }
    }
  }
code_r0x0001805cbd76:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}

