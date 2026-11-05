// SparkTextoDano__PetMudou__18074d690 @ 0x18074d690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__PetMudou__18074d690(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  if (cRam00000001834b42a1 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkPet);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42a1 = '\x01';
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
  lVar4 = **(longlong **)(TI_SparkPet + 0xb8);
  if (lVar4 != 0) {
    iVar9 = *(int *)(lVar4 + 0x14);
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (iVar9 == *(int *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 4)) {
      iVar9 = *(int *)(lVar4 + 0x30);
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = *(longlong *)(TI_SparkTextoDano + 0xb8);
      iVar1 = *(int *)(lVar5 + 8);
      iVar2 = *(int *)(lVar5 + 0xc);
      iVar9 = iVar9 - iVar1;
      iVar8 = *(int *)(lVar4 + 0x38) - iVar2;
      *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(lVar4 + 0x30);
      *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xc) =
           *(undefined4 *)(lVar4 + 0x38);
      if ((0 < iVar9) || (0 < iVar8)) {
        fVar10 = (float)FUN_182436650(0);
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (fVar10 - *(float *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x40) <= 2.0) {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar6 = SparkTextoDano__get_Ligado(0);
          if (cVar6 != '\0') {
            if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar6 = SparkTextoDano__Servidor__18074de20(4,0);
            if (cVar6 == '\0') {
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar7 = SparkTextoDano__MeuServo__18074c380(0);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar6 = UnityEngine_Object__op_Equality(uVar7,0,0);
              if (cVar6 == '\0') {
                if ((0 < iVar1) && (0 < iVar9)) {
                  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar6 = SparkTextoDano__Op__18074cb20(0x17,0);
                  if (cVar6 != '\0') {
                    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    SparkTextoDano__Solta__18074e1b0(uVar7,2,5,iVar9,0);
                  }
                }
                if ((0 < iVar2) && (0 < iVar8)) {
                  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar6 = SparkTextoDano__Op__18074cb20(0x18,0);
                  if (cVar6 != '\0') {
                    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    SparkTextoDano__Solta__18074e1b0(uVar7,2,6,iVar8,0);
                  }
                }
              }
            }
          }
        }
      }
      return;
    }
    uVar3 = *(undefined4 *)(lVar4 + 0x14);
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 4) = uVar3;
    *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 8) = *(undefined4 *)(lVar4 + 0x30);
    *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xc) =
         *(undefined4 *)(lVar4 + 0x38);
    return;
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTextoDano);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 4) = 0;
  return;
}

