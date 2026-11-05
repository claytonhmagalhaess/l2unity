// NameplatesManagerGame__ConfereParedes__18067aa80 @ 0x18067aa80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__ConfereParedes__18067aa80(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (cRam00000001834b3e2c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<Nameplate>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<Nameplate>.get_Item);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3e2c = '\x01';
  }
  if (param_1[0xc] != 0) {
    iVar2 = *(int *)(param_1[0xc] + 0x18);
    if (iVar2 == 0) {
      return;
    }
    if (DAT_1834b31bf == '\0') {
      FUN_180315380(TI_CameraController);
      DAT_1834b31bf = '\x01';
    }
    if (**(longlong **)(TI_CameraController + 0xb8) != 0) {
      iVar8 = func_0x000182427a70(*(undefined4 *)(**(longlong **)(TI_CameraController + 0xb8) + 0xa0),0);
      if (iVar8 == 0) {
        return;
      }
      if ((param_1[8] != 0) &&
         (lVar9 = UnityEngine_Component__get_transform(param_1[8],0), lVar9 != 0)) {
        puVar10 = (undefined8 *)UnityEngine_Transform__get_position(&uStack_58,lVar9,0);
        uVar1 = *puVar10;
        uVar3 = *(undefined4 *)(puVar10 + 1);
        fVar14 = (float)FUN_1824366b0(0);
        iVar12 = 0;
        iVar11 = 0;
        if (iVar2 < 1) {
          return;
        }
        while( true ) {
          if (0x27 < iVar12) {
            return;
          }
          if (iVar2 <= *(int *)((longlong)param_1 + 0x7c)) {
            *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
          }
          iVar4 = *(int *)((longlong)param_1 + 0x7c);
          *(int *)((longlong)param_1 + 0x7c) = iVar4 + 1;
          if ((param_1[0xc] == 0) ||
             (lVar9 = FUN_180bbafe0(param_1[0xc],iVar4,MR_System.Collections.Generic.List<Nameplate>.get_Item), lVar9 == 0)) break;
          if ((*(char *)(lVar9 + 0xa4) != '\0') && (*(float *)(lVar9 + 0xa0) <= fVar14)) {
            uVar5 = *(undefined8 *)(lVar9 + 0x40);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar7 = UnityEngine_Object__op_Equality(uVar5,0,0);
            if (cVar7 == '\0') {
              uStack_58 = uVar1;
              uStack_50 = uVar3;
              NameplatesManagerGame__ConfereParede__18067a810(lVar9,&uStack_58,iVar8,fVar14,0);
              cVar7 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,lVar9,*(undefined8 *)(*param_1 + 0x1c0));
              bVar13 = cVar7 == '\0';
              iVar12 = iVar12 + 1;
              if (bVar13 != (bool)*(char *)(lVar9 + 0x48)) {
                *(bool *)(lVar9 + 0x48) = bVar13;
                Nameplate__Exibe__1806768f0(lVar9,bVar13,0);
              }
            }
          }
          iVar11 = iVar11 + 1;
          if (iVar2 <= iVar11) {
            return;
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

