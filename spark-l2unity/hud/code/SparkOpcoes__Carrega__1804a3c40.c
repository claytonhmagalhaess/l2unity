// SparkOpcoes__Carrega__1804a3c40 @ 0x1804a3c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__Carrega__1804a3c40(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (cRam00000001834b32a2 == '\0') {
    FUN_180315380(MR_System.Array.IndexOf<int>);
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'spark.opt.tex'");
    FUN_180315380(LIT_"'spark.opt.fps60'");
    FUN_180315380(LIT_"'spark.opt.dano.'");
    FUN_180315380(LIT_"'spark.opt.party'");
    FUN_180315380(LIT_"'spark.opt.sombras'");
    FUN_180315380(LIT_"'spark.opt.vol.musica'");
    FUN_180315380(LIT_"'spark.opt.mostraping'");
    FUN_180315380(LIT_"'spark.opt.vol.geral'");
    FUN_180315380(LIT_"'spark.opt.vsync'");
    FUN_180315380(LIT_"'spark.opt.chatfundo'");
    FUN_180315380(LIT_"'spark.opt.fsrnitidez'");
    FUN_180315380(LIT_"'spark.opt.efeitos.qualidade'");
    FUN_180315380(LIT_"'spark.opt.fpssemfoco'");
    FUN_180315380(LIT_"'spark.opt.vol.interface'");
    FUN_180315380(LIT_"'spark.opt.tamanhoinfo'");
    FUN_180315380(LIT_"'spark.opt.fps'");
    FUN_180315380(LIT_"'spark.opt.bloom'");
    FUN_180315380(LIT_"'spark.opt.vol.efeitos'");
    FUN_180315380(LIT_"'spark.opt.detalhepers'");
    FUN_180315380(LIT_"'spark.opt.escala'");
    FUN_180315380(LIT_"'spark.opt.escalaatalhos'");
    FUN_180315380(LIT_"'spark.opt.modo'");
    FUN_180315380(LIT_"'spark.opt.lootparty'");
    FUN_180315380(LIT_"'spark.opt.sombrasimples'");
    FUN_180315380(LIT_"'spark.opt.multidaogpu'");
    FUN_180315380(LIT_"'spark.opt.minimo'");
    FUN_180315380(LIT_"'spark.opt.h'");
    FUN_180315380(LIT_"'spark.opt.sombrapers'");
    FUN_180315380(LIT_"'spark.opt.mudo'");
    FUN_180315380(LIT_"'spark.opt.dist'");
    FUN_180315380(LIT_"'spark.opt.invertey'");
    FUN_180315380(LIT_"'spark.opt.hz'");
    FUN_180315380(LIT_"'spark.opt.efeitos.dist'");
    FUN_180315380(LIT_"'spark.opt.resdin'");
    FUN_180315380(LIT_"'spark.opt.vol.ambiente'");
    FUN_180315380(LIT_"'spark.opt.inverteroda'");
    FUN_180315380(LIT_"'spark.opt.mostrafps'");
    FUN_180315380(LIT_"'spark.opt.dof'");
    FUN_180315380(LIT_"'spark.opt.mudosemfoco'");
    FUN_180315380(LIT_"'spark.opt.aa'");
    FUN_180315380(LIT_"'spark.opt.upscaler'");
    FUN_180315380(LIT_"'spark.opt.ceu'");
    FUN_180315380(LIT_"'spark.opt.cinema'");
    FUN_180315380(LIT_"'spark.opt.corinfo'");
    FUN_180315380(LIT_"'spark.opt.distnome'");
    FUN_180315380(LIT_"'spark.opt.preset'");
    FUN_180315380(LIT_"'spark.opt.efeitos.mostra'");
    FUN_180315380(LIT_"'spark.opt.brilho'");
    FUN_180315380(LIT_"'spark.opt.enterchat'");
    FUN_180315380(LIT_"'spark.opt.w'");
    FUN_180315380(LIT_"'spark.opt.ondas'");
    FUN_180315380(LIT_"'spark.opt.tamanhobuff'");
    FUN_180315380(LIT_"'spark.opt.lodpers2'");
    FUN_180315380(LIT_"'spark.opt.corparty'");
    cRam00000001834b32a2 = '\x01';
  }
  uStack_68 = 0;
  uStack_60 = 0;
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1d8) != '\0') {
    return;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1d8) = 1;
  puVar6 = (undefined8 *)UnityEngine_Screen__get_currentResolution(&uStack_58,0);
  uStack_68 = *puVar6;
  uStack_60 = puVar6[1];
  uVar3 = func_0x000180eb7750(&uStack_68,0);
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.w'",uVar3,0);
  **(undefined4 **)(TI_SparkOpcoes + 0xb8) = uVar3;
  puVar6 = (undefined8 *)UnityEngine_Screen__get_currentResolution(&uStack_58,0);
  uStack_68 = *puVar6;
  uStack_60 = puVar6[1];
  uVar3 = func_0x000180eb5010(&uStack_68,0);
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.h'",uVar3,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 4) = uVar3;
  iVar5 = **(int **)(TI_SparkOpcoes + 0xb8);
  iVar9 = (*(int **)(TI_SparkOpcoes + 0xb8))[1];
  uStack_58 = 0;
  uStack_50 = 0;
  lVar7 = UnityEngine_Screen__get_resolutions(0);
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x18) == 0)) {
    if ((iVar5 < 1) || (iVar9 < 1)) goto code_r0x0001804a407d;
  }
  else {
    for (uVar10 = 0; (int)uVar10 < *(int *)(lVar7 + 0x18); uVar10 = uVar10 + 1) {
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar6 = (undefined8 *)(lVar7 + ((longlong)(int)uVar10 + 2) * 0x10);
      uStack_58 = *puVar6;
      uStack_50 = puVar6[1];
      iVar4 = func_0x000180eb7750(&uStack_58);
      if ((iVar4 == iVar5) && (iVar4 = func_0x000180eb5010(&uStack_58), iVar4 == iVar9))
      goto code_r0x0001804a40f5;
    }
code_r0x0001804a407d:
    puVar6 = (undefined8 *)UnityEngine_Screen__get_currentResolution(&uStack_58,0);
    uStack_68 = *puVar6;
    uStack_60 = puVar6[1];
    uVar3 = func_0x000180eb7750(&uStack_68,0);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    **(undefined4 **)(TI_SparkOpcoes + 0xb8) = uVar3;
    puVar6 = (undefined8 *)UnityEngine_Screen__get_currentResolution(&uStack_58,0);
    uStack_68 = *puVar6;
    uStack_60 = puVar6[1];
    uVar3 = func_0x000180eb5010(&uStack_68,0);
    *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 4) = uVar3;
  }
code_r0x0001804a40f5:
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.hz'",0,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 8) = uVar3;
  iVar5 = FUN_1823e2690(0);
  uVar8 = LIT_"'spark.opt.modo'";
  if (iVar5 == 3) {
    uVar11 = 0;
  }
  else {
    iVar5 = FUN_1823e2690(0);
    uVar11 = 1;
    if (iVar5 != 1) {
      uVar11 = 2;
    }
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkOpcoes__Le__1804a5520(uVar8,uVar11,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc) = uVar3;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.vsync'",0,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x10) = iVar5 == 1;
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.fps'",0x3c,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14) = uVar3;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.fps60'",0,0);
  if (iVar5 == 0) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14) == 0xa5) {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14) = 0x3c;
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    SparkOpcoes__Grava__1804a5430
              (LIT_"'spark.opt.fps'",*(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14),0);
    SparkOpcoes__Grava__1804a5430(LIT_"'spark.opt.fps60'",1,0);
    FUN_18242e9f0(0);
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.preset'",3,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1c) = uVar3;
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.escala'",100,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x20) = uVar3;
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.sombras'",3,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24) = uVar3;
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.aa'",2,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x28) = uVar3;
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.dist'",2,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x2c) = uVar3;
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.tex'",0,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x30) = uVar3;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.bloom'",1,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x34) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.dof'",1,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x35) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.cinema'",1,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x36) = iVar5 == 1;
  uVar3 = SparkOpcoes__LeF__1804a5500(LIT_"'spark.opt.vol.geral'",0x3f800000,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x6c) = uVar3;
  uVar3 = SparkOpcoes__LeF__1804a5500(LIT_"'spark.opt.vol.musica'",0x3f000000,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x70) = uVar3;
  uVar3 = SparkOpcoes__LeF__1804a5500(LIT_"'spark.opt.vol.efeitos'",0x3f800000,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x74) = uVar3;
  uVar3 = SparkOpcoes__LeF__1804a5500(LIT_"'spark.opt.vol.interface'",0x3f800000,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x78) = uVar3;
  uVar3 = SparkOpcoes__LeF__1804a5500(LIT_"'spark.opt.vol.ambiente'",0x3f800000,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x7c) = uVar3;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.mudosemfoco'",1,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x80) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.mudo'",0,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x81) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.party'",1,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x82) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.corparty'",0,0);
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa0);
  if (lVar7 == 0) {
code_r0x0001804a4f11:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x18) + -1;
    if (iVar9 < iVar5) {
      iVar5 = iVar9;
    }
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x84) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.lootparty'",0,0);
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x90);
  if (lVar7 == 0) goto code_r0x0001804a4f11;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x18) + -1;
    if (iVar9 < iVar5) {
      iVar5 = iVar9;
    }
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x88) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.mostrafps'",0,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa8) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.mostraping'",0,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa9) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.corinfo'",0,0);
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xb8);
  if (lVar7 == 0) goto code_r0x0001804a4f11;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x18) + -1;
    if (iVar9 < iVar5) {
      iVar5 = iVar9;
    }
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc0) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.tamanhoinfo'",0,0);
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xd0);
  if (lVar7 == 0) goto code_r0x0001804a4f11;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x18) + -1;
    if (iVar9 < iVar5) {
      iVar5 = iVar9;
    }
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xd8) = iVar5;
  uVar3 = SparkOpcoes__LeF__1804a5500(LIT_"'spark.opt.brilho'",0,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x38) = uVar3;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.invertey'",0,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xdc) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.inverteroda'",0,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xdd) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.enterchat'",1,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xde) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.sombrapers'",1,0);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (2 < iVar5) {
    iVar5 = 2;
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x3c) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.detalhepers'",1,0);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (2 < iVar5) {
    iVar5 = 2;
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x40) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.distnome'",1,0);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (2 < iVar5) {
    iVar5 = 2;
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x44) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.lodpers2'",0,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x48) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.sombrasimples'",0,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x49) = iVar5 == 1;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.multidaogpu'",0,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4a) = iVar5 == 1;
  SparkOpcoes__AplicaMultidao__1804a2fb0(0);
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.upscaler'",0,0);
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1b0);
  if (lVar7 == 0) goto code_r0x0001804a4f11;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x18) + -1;
    if (iVar9 < iVar5) {
      iVar5 = iVar9;
    }
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x4c) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.fsrnitidez'",2,0);
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1b8);
  if (lVar7 == 0) goto code_r0x0001804a4f11;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x18) + -1;
    if (iVar9 < iVar5) {
      iVar5 = iVar9;
    }
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x50) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.resdin'",0,0);
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1c8);
  if (lVar7 == 0) goto code_r0x0001804a4f11;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x18) + -1;
    if (iVar9 < iVar5) {
      iVar5 = iVar9;
    }
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x54) = iVar5;
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkApiGrafica__LeEscolha(0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x58) = uVar3;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.efeitos.mostra'",0,0);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (2 < iVar5) {
    iVar5 = 2;
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x5c) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.efeitos.qualidade'",0,0);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (1 < iVar5) {
    iVar5 = 1;
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x60) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.efeitos.dist'",1,0);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (2 < iVar5) {
    iVar5 = 2;
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 100) = iVar5;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.ondas'",1,0);
  *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x68) = iVar5 == 1;
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14) != 1) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14) < 1) goto code_r0x0001804a4b2f;
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (0x1d < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14)) goto code_r0x0001804a4b2f;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x14) = 0x3c;
code_r0x0001804a4b2f:
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.fpssemfoco'",0x1e,0);
  *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x18) = uVar3;
  iVar5 = FUN_1809dff10(*(undefined8 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x150),
                        *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x18),
                        MR_System.Array.IndexOf<int>);
  if (iVar5 < 0) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x18) = 0x1e;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  fVar12 = (float)SparkOpcoes__LeF__1804a5500(LIT_"'spark.opt.chatfundo'",0x3f2eaeaf,0);
  if (fVar12 < 0.68235296) {
    fVar12 = 0.68235296;
  }
  else if (0.9 < fVar12) {
    fVar12 = 0.9;
  }
  *(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe0) = fVar12;
  fVar12 = (float)SparkOpcoes__LeF__1804a5500(LIT_"'spark.opt.escalaatalhos'",0x3f800000,0);
  if (fVar12 < 1.0) {
    fVar12 = 1.0;
  }
  else if (1.3 < fVar12) {
    fVar12 = 1.3;
  }
  *(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe4) = fVar12;
  iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.tamanhobuff'",0x1e,0);
  if (iVar5 < 0x18) {
    iVar5 = 0x18;
  }
  else if (0x1e < iVar5) {
    iVar5 = 0x1e;
  }
  *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe8) = iVar5;
  uVar10 = 0;
  while( true ) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
    if (lVar7 == 0) goto code_r0x0001804a4f11;
    if (*(int *)(lVar7 + 0x18) <= (int)uVar10) {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.ceu'",0,0);
      lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x108);
      if (lVar7 != 0) {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        else {
          iVar9 = *(int *)(lVar7 + 0x18) + -1;
          if (iVar9 < iVar5) {
            iVar5 = iVar9;
          }
        }
        *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x100) = iVar5;
        iVar5 = SparkOpcoes__LeClima__1804a5450(0);
        if (cRam00000001834b329a == '\0') {
          FUN_180315380(TI_SparkOpcoes);
          cRam00000001834b329a = '\x01';
        }
        if ((iVar5 == 6) || (iVar5 == 7)) {
          iVar5 = iVar5 + -5;
        }
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x128);
        if (lVar7 != 0) {
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else {
            iVar9 = *(int *)(lVar7 + 0x18) + -1;
            if (iVar9 < iVar5) {
              iVar5 = iVar9;
            }
          }
          *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x120) = iVar5;
          iVar5 = SparkOpcoes__Le__1804a5520(LIT_"'spark.opt.minimo'",0,0);
          if (cRam00000001834b32c9 == '\0') {
            FUN_180315380(TI_SparkOpcoes);
            cRam00000001834b32c9 = '\x01';
          }
          if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
            func_0x000180315660(TI_SparkOpcoes);
          }
          *(bool *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x69) = iVar5 == 1;
          if (cRam00000001834b32ca == '\0') {
            FUN_180315380(TI_SparkOpcoes);
            cRam00000001834b32ca = '\x01';
          }
          if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x69) == '\0') {
            return;
          }
          if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkOpcoes__PoeMinimo__1804a5e10(0);
          return;
        }
      }
      goto code_r0x0001804a4f11;
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf0);
    if (lVar7 == 0) goto code_r0x0001804a4f11;
    if (*(uint *)(lVar7 + 0x18) <= uVar10) break;
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
    uVar8 = System_String__Concat
                      (LIT_"'spark.opt.dano.'",
                       *(undefined8 *)(lVar7 + 0x20 + (longlong)(int)uVar10 * 8));
    iVar5 = SparkOpcoes__Le__1804a5520(uVar8,0,0);
    if (lVar1 == 0) goto code_r0x0001804a4f11;
    if (*(uint *)(lVar1 + 0x18) <= uVar10) break;
    *(bool *)((longlong)(int)uVar10 + 0x20 + lVar1) = iVar5 == 1;
    uVar10 = uVar10 + 1;
  }
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

