// UserGear__UpdateTrailScale__1807ee2d0 @ 0x1807ee2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UserGear__UpdateTrailScale__1807ee2d0(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fStack_38;
  undefined8 uStack_34;
  
  iVar2 = *(int *)(param_1 + 0x88);
  fVar6 = 0.0;
  if (iVar2 == 0) {
    fVar6 = 0.8;
    fVar7 = -0.003;
  }
  else if (iVar2 == 1) {
    fVar6 = 1.5;
    fVar7 = -0.004;
  }
  else if (iVar2 == 5) {
    fVar6 = 2.5;
    fVar7 = -0.005;
  }
  else {
    fVar7 = 0.0;
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar5 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x110),0);
    if (DAT_1834b2f37 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector3);
      DAT_1834b2f37 = '\x01';
    }
    if (lVar5 != 0) {
      fVar1 = *(float *)(param_1 + 0x58);
      lVar3 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
      fStack_38 = *(float *)(lVar3 + 0xc) * 0.1 * fVar6 * fVar1;
      uStack_34 = CONCAT44(*(float *)(lVar3 + 0x14) * 0.1 * fVar6 * fVar1,
                           *(float *)(lVar3 + 0x10) * 0.1 * fVar6 * fVar1);
      UnityEngine_Transform__set_localScale(lVar5,&fStack_38,0);
      if (*(longlong *)(param_1 + 0x110) != 0) {
        lVar5 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x110),0);
        if (lVar5 != 0) {
          uStack_34 = 0;
          fStack_38 = fVar7;
          UnityEngine_Transform__set_localPosition(lVar5,&fStack_38,0);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

