// SparkTextoDano__Pacote__18074cba0 @ 0x18074cba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__Pacote__18074cba0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (cRam00000001834b42a7 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkLeitor);
    FUN_180315380(TI_SparkPet);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42a7 = '\x01';
  }
  lVar7 = func_0x000180315580(TI_SparkLeitor);
  SparkLeitor___ctor(lVar7,param_1,0);
  if (lVar7 != 0) {
    SparkLeitor__Ex(lVar7,0);
    iVar3 = func_0x00018043efc0(lVar7,0);
    uVar4 = ServerPacket__ReadB(lVar7,0);
    uVar5 = func_0x00018043efc0(lVar7,0);
    uVar6 = ServerPacket__ReadB(lVar7,0);
    if (iVar3 == 0) {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      *(uint *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x10) = uVar5 & 7;
      return;
    }
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = SparkTextoDano__get_Ligado(0);
    if (cVar2 == '\0') {
      return;
    }
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTextoDano__GaranteOuvintes__18074ab50(0);
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    lVar7 = **(longlong **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Equality(lVar7,0,0);
    if (cVar2 != '\0') {
      return;
    }
    if (lVar7 != 0) {
      if (*(longlong *)(lVar7 + 0x30) == 0) {
        return;
      }
      if (iVar3 == *(int *)(*(longlong *)(lVar7 + 0x30) + 0x14)) {
        if ((int)uVar5 < 0) {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkTextoDano__Guarda__18074aee0(1,-uVar5,1,0);
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar17 = 1;
        uVar8 = 1;
        uVar16 = 0;
        uVar15 = 7;
        uVar14 = 10;
        uVar13 = 9;
        uVar12 = 6;
        uVar11 = 5;
        uVar10 = 4;
      }
      else {
        if (*(int *)(TI_SparkPet + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar7 = FUN_18043b7c0(0);
        if (lVar7 != 0) {
          if (*(int *)(TI_SparkPet + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = FUN_18043b7c0(0);
          if (lVar7 == 0) goto code_r0x00018074d0a7;
          if (iVar3 == *(int *)(lVar7 + 0x14)) {
            if ((int)uVar5 < 0) {
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkTextoDano__Guarda__18074aee0(2,-uVar5,1,0);
            }
            if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar7 = SparkTextoDano__MeuServo__18074c380(0);
            uVar17 = 0x18;
            uVar8 = 2;
            uVar16 = 0x17;
            uVar15 = 0x1d;
            uVar14 = 0x1f;
            uVar13 = 0xffffffff;
            uVar12 = 0x1c;
            uVar11 = 0x1b;
            uVar10 = 0x1a;
            goto code_r0x00018074cf61;
          }
        }
        uVar8 = FUN_180479460(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        lVar7 = 0;
        if (cVar2 != '\0') {
          lVar7 = FUN_180479460(0);
          if (lVar7 == 0) goto code_r0x00018074d0a7;
          lVar7 = WorldSpawner__Busca(lVar7,iVar3,0);
        }
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Equality(lVar7,0,0);
        if (cVar2 != '\0') {
          return;
        }
        if ((uVar6 & 2) != 0) {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar2 = SparkTextoDano__Op__18074cb20(0xe,0);
          if (cVar2 == '\0') {
            return;
          }
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkTextoDano__Solta__18074e1b0(lVar7,0,4,0,0);
          return;
        }
        if ((int)uVar5 < 0) {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660(TI_SparkTextoDano);
          }
          *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x48) = lVar7;
          func_0x000180314690(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x48,lVar7);
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar17 = 0x14;
        uVar16 = 0x13;
        uVar8 = 0;
        uVar15 = 0xf;
        uVar14 = 0x12;
        uVar13 = 0x11;
        uVar12 = 0xd;
        uVar11 = 0xc;
        uVar10 = 0xb;
      }
code_r0x00018074cf61:
      SparkTextoDano__Evento__180747ee0
                (lVar7,uVar8,uVar4,uVar5,CONCAT44(uVar9,uVar6),uVar10,uVar11,uVar12,uVar13,uVar14,
                 uVar15,uVar16,uVar17,0);
      return;
    }
  }
code_r0x00018074d0a7:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

