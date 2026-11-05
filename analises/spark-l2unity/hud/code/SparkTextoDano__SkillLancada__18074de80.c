// SparkTextoDano__SkillLancada__18074de80 @ 0x18074de80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__SkillLancada__18074de80(int param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  
  if (cRam00000001834b429e == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkPet);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b429e = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = SparkTextoDano__get_Ligado(0);
    if (cVar5 == '\0') {
      return;
    }
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTextoDano__GaranteOuvintes__18074ab50(0);
    uVar10 = FUN_182436650(0);
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    uVar3 = **(undefined8 **)(TI_GameClient + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (cVar5 == '\0') {
      iVar6 = 0;
    }
    else {
      if (DAT_1834b30fb == '\0') {
        FUN_180315380(TI_GameClient);
        DAT_1834b30fb = '\x01';
      }
      if (**(longlong **)(TI_GameClient + 0xb8) == 0) goto DAT_18074e19a;
      iVar6 = GameClient__get_CurrentPlayerId(**(longlong **)(TI_GameClient + 0xb8),0);
    }
    if (*(int *)(TI_SparkPet + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b3016 == '\0') {
      FUN_180315380(TI_SparkPet);
      DAT_1834b3016 = '\x01';
    }
    if (*(int *)(TI_SparkPet + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(TI_SparkPet + 0xb8) == 0) {
      iVar9 = 0;
    }
    else {
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar7 = FUN_18043b7c0(0);
      if (lVar7 == 0) {
DAT_18074e19a:
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = *(int *)(lVar7 + 0x14);
    }
    for (uVar8 = 0; (int)uVar8 < *(int *)(param_2 + 0x18); uVar8 = uVar8 + 1) {
      if (*(uint *)(param_2 + 0x18) <= uVar8) goto code_r0x00018074e1a0;
      iVar1 = *(int *)(param_2 + 0x20 + (longlong)(int)uVar8 * 4);
      if (iVar1 == iVar6) {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660(TI_SparkTextoDano);
        }
        *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x3c) = uVar10;
      }
      if ((iVar9 != 0) && (iVar1 == iVar9)) {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660(TI_SparkTextoDano);
        }
        *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x40) = uVar10;
      }
      if ((param_1 == iVar6) && (iVar1 != iVar6)) {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x50);
        if (lVar7 == 0) goto DAT_18074e19a;
        uVar2 = *(uint *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x60);
        if (*(uint *)(lVar7 + 0x18) <= uVar2) {
code_r0x00018074e1a0:
          FUN_1803155c0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)(lVar7 + 0x20 + (longlong)(int)uVar2 * 4) = iVar1;
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x58);
        if (lVar7 == 0) goto DAT_18074e19a;
        uVar2 = *(uint *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x60);
        if (*(uint *)(lVar7 + 0x18) <= uVar2) goto code_r0x00018074e1a0;
        *(undefined4 *)(lVar7 + 0x20 + (longlong)(int)uVar2 * 4) = uVar10;
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x50);
        if (lVar7 == 0) goto DAT_18074e19a;
        *(int *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x60) =
             (*(int *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x60) + 1) %
             *(int *)(lVar7 + 0x18);
      }
    }
  }
  return;
}

