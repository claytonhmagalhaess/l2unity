// NameplatesManagerGame__ConfereParede__18067a810 @ 0x18067a810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__ConfereParede__18067a810
               (longlong param_1,undefined8 *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  char cVar8;
  undefined1 uVar9;
  longlong lVar10;
  float *pfVar11;
  float fVar12;
  undefined8 uStack_88;
  float fStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if (cRam00000001834b3e2d == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.Physics);
    FUN_180315380(TI_SparkMontaria);
    cRam00000001834b3e2d = '\x01';
  }
  if (param_1 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x50);
    if (*(float *)(param_1 + 0x38) <= 0.0) {
      if (lVar10 == 0) goto DAT_18067aa77;
      if ((*(longlong *)(lVar10 + 0x48) == 0) ||
         (fVar12 = *(float *)(*(longlong *)(lVar10 + 0x48) + 0x10), fVar12 <= 0.0)) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = fVar12 * 1.5;
      }
    }
    else {
      fVar12 = *(float *)(param_1 + 0x38) * 0.8;
    }
    if (*(int *)(TI_SparkMontaria + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar10 = SparkMontaria__AncoraDoNome(lVar10,0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar8 = UnityEngine_Object__op_Inequality(lVar10,0,0);
    if (cVar8 == '\0') {
      lVar10 = *(longlong *)(param_1 + 0x40);
    }
    if (lVar10 != 0) {
      pfVar11 = (float *)UnityEngine_Transform__get_position(&uStack_78,lVar10,0);
      fVar1 = pfVar11[2];
      fVar2 = pfVar11[1];
      fVar3 = *pfVar11;
      if (DAT_1834b2f30 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        DAT_1834b2f30 = '\x01';
      }
      lVar10 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
      fVar4 = *(float *)(lVar10 + 0x18);
      fVar5 = *(float *)(lVar10 + 0x1c);
      fVar6 = *(float *)(lVar10 + 0x20);
      if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_78 = *param_2;
      uStack_70 = *(undefined4 *)(param_2 + 1);
      uStack_88 = CONCAT44(fVar12 * fVar5 + fVar2,fVar12 * fVar4 + fVar3);
      fStack_80 = fVar12 * fVar6 + fVar1;
      uVar9 = UnityEngine_Physics__Linecast(&uStack_78,&uStack_88,param_3,1,0);
      *(float *)(param_1 + 0xa0) = param_4 + 0.15;
      *(undefined1 *)(param_1 + 0x9c) = uVar9;
      return;
    }
  }
DAT_18067aa77:
  FUN_1803155d0();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

