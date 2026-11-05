// SparkAvisoNaTela__Pacote__18071a8e0 @ 0x18071a8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkAvisoNaTela__Pacote__18071a8e0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (cRam00000001834b41d2 == '\0') {
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SparkAvisoNaTela);
    FUN_180315380(TI_SparkLeitor);
    FUN_180315380(TI_SystemMessage);
    FUN_180315380(LIT_"''");
    cRam00000001834b41d2 = '\x01';
  }
  lVar8 = func_0x000180315580(TI_SparkLeitor);
  SparkLeitor___ctor(lVar8,param_1,0);
  if (lVar8 == 0) {
DAT_18071ab07:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SparkLeitor__Ex(lVar8,0);
  iVar2 = func_0x00018043efc0(lVar8,0);
  iVar3 = func_0x00018043efc0(lVar8,0);
  uVar4 = func_0x00018043efc0(lVar8,0);
  func_0x00018043efc0(lVar8,0);
  iVar5 = func_0x00018043efc0(lVar8,0);
  func_0x00018043efc0(lVar8,0);
  func_0x00018043efc0(lVar8,0);
  func_0x00018043efc0(lVar8,0);
  uVar6 = func_0x00018043efc0(lVar8,0);
  func_0x00018043efc0(lVar8,0);
  iVar7 = SparkLeitor__get_Resta(lVar8,0);
  uVar9 = LIT_"''";
  if (1 < iVar7) {
    uVar9 = SparkLeitor__S(lVar8,0);
  }
  if ((((iVar2 == 0) && (0 < iVar3)) && (lVar8 = SystemMessageTable__get_Instance(0), lVar8 != 0))
     && (lVar8 = SystemMessageTable__GetSystemMessage(lVar8,iVar3,0), lVar8 != 0)) {
    uVar9 = func_0x000180314710(TI_SMParam__,0);
    plVar10 = (longlong *)func_0x000180315580(TI_SystemMessage);
    AllianceMessage___ctor(plVar10,uVar9,lVar8,0);
    if (plVar10 == (longlong *)0x0) goto DAT_18071ab07;
    uVar9 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
  }
  if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
    func_0x000180315660();
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  SparkAvisoNaTela__Mostra__180719980(uVar9,uVar6,uVar4,iVar5 == 1,&uStack_48,0);
  return;
}

