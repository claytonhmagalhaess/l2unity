// SparkQuestInfoWindow__MostraLocal__1806dfbd0 @ 0x1806dfbd0

void SparkQuestInfoWindow__MostraLocal__1806dfbd0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (cRam00000001834b4056 == '\0') {
    FUN_180315380(TI_SparkAvisoNaTela);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(TI_SparkQuests);
    FUN_180315380(LIT_"'There is no location information for this quest.'");
    cRam00000001834b4056 = '\x01';
  }
  if (-1 < *(int *)(param_1 + 0x90)) {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
    if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar6 = SparkQuests__Info(uVar1,0);
    if (lVar6 != 0) {
      if ((*(longlong *)(lVar6 + 0x38) == 0) ||
         (lVar7 = *(longlong *)(lVar6 + 0x38), *(int *)(lVar7 + 0x18) < 2)) {
        if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        SparkAvisoNaTela__Mostra__180719980(LIT_"'There is no location information for this quest.'",3000,2,0,&uStack_58,0);
      }
      else {
        if ((*(int *)(lVar7 + 0x18) == 0) || (*(uint *)(lVar7 + 0x18) < 2)) {
code_r0x0001806dfe68:
          FUN_1803155c0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (lVar7 == 0) {
DAT_1806dfe62:
          FUN_1803155d0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = *(int *)(lVar7 + 0x20);
        uVar8 = 0;
        iVar3 = *(int *)(lVar7 + 0x24);
        uVar10 = uVar8;
        if (2 < (int)*(uint *)(lVar7 + 0x18)) {
          if (*(uint *)(lVar7 + 0x18) < 3) goto code_r0x0001806dfe68;
          uVar10 = (ulonglong)*(uint *)(lVar7 + 0x28);
        }
        if (cRam00000001834b4055 == '\0') {
          FUN_180315380(LIT_"'None'");
          cRam00000001834b4055 = '\x01';
        }
        uVar9 = LIT_"'None'";
        if (0 < *(int *)(lVar6 + 0x30)) {
          lVar7 = NpcNameTable__get_Instance(0);
          if (lVar7 == 0) goto DAT_1806dfe62;
          lVar6 = NpcNameTable__GetNpcName(lVar7,*(undefined4 *)(lVar6 + 0x30),0);
          if (lVar6 != 0) {
            uVar8 = *(ulonglong *)(lVar6 + 0x18);
          }
          cVar5 = func_0x000181707e50(uVar8,0);
          uVar9 = uVar8;
          if (cVar5 != '\0') {
            uVar9 = LIT_"'None'";
          }
        }
        uVar11 = CONCAT44((float)iVar3,(float)iVar2);
        if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_50 = CONCAT44(uStack_50._4_4_,(float)(int)uVar10);
        uStack_58 = uVar11;
        SparkQuests__MostraRadar__1804c6a60(uVar9,&uStack_58,0);
        if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (cRam00000001834b33d3 == '\0') {
          FUN_180315380(TI_SparkMapaWindow);
          cRam00000001834b33d3 = '\x01';
        }
        if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (**(longlong **)(TI_SparkMapaWindow + 0xb8) != 0) {
          uStack_50 = CONCAT44(uStack_50._4_4_,(float)(int)uVar10);
          uStack_58 = uVar11;
          SparkMapaWindow__MostraPonto__180640980
                    (**(longlong **)(TI_SparkMapaWindow + 0xb8),&uStack_58,0);
        }
      }
    }
  }
  return;
}

