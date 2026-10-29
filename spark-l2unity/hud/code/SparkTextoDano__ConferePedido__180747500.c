// SparkTextoDano__ConferePedido__180747500 @ 0x180747500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__ConferePedido__180747500(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  
  if (cRam00000001834b42a4 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkPacoteLivre);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42a4 = '\x01';
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar7 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTextoDano);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x18);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar7,uVar1,0);
  if (cVar4 != '\0') {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTextoDano);
    }
    *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x18) = uVar7;
    func_0x000180314690(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x18,uVar7);
    *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x14) = 0;
    *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x10) = 0;
    *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x24) = 0;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if (cVar4 != '\0') {
    return;
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar5 = SparkTextoDano__MascaraDasOpcoes__18074b3e0(0);
  fVar8 = (float)FUN_1824366b0(0);
  if (iVar5 == *(int *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x14)) {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTextoDano);
    }
    if (iVar5 == *(int *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x10)) {
      return;
    }
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTextoDano);
    }
    if (1 < *(int *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x24)) {
      return;
    }
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTextoDano);
    }
    if (fVar8 - *(float *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x20) < 3.0) {
      return;
    }
  }
  else {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTextoDano);
    }
    *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x24) = 0;
  }
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  lVar6 = **(longlong **)(TI_GameClient + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if (cVar4 == '\0') {
    if (lVar6 == 0) {
DAT_180747894:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(lVar6 + 0xa8) != 0) {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      *(int *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x14) = iVar5;
      *(float *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x20) = fVar8;
      *(int *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x24) =
           *(int *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x24) + 1;
      plVar2 = *(longlong **)(lVar6 + 0xa8);
      lVar6 = func_0x000180315580(TI_SparkPacoteLivre);
      func_0x000180503ed0(lVar6,0xd0,0);
      if ((((lVar6 == 0) || (lVar6 = SparkPacoteLivre__H(lVar6,0x1d3,0), lVar6 == 0)) ||
          (lVar6 = SparkPacoteLivre__C(lVar6,iVar5,0), lVar6 == 0)) ||
         (uVar7 = SparkPacoteLivre__Fim(lVar6,0), plVar2 == (longlong *)0x0)) goto DAT_180747894;
      (**(code **)(*plVar2 + 0x178))(plVar2,uVar7,*(undefined8 *)(*plVar2 + 0x180));
    }
  }
  return;
}

