// ClanWindow__OnDestroy__1805e8aa0 @ 0x1805e8aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__OnDestroy__1805e8aa0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3b50 == '\0') {
    FUN_180315380(TI_System.Action<int,string,int>);
    FUN_180315380(TI_System.Action<int,string,string,int,string,string>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_ClanWindow.MostraGuerras);
    FUN_180315380(MD_ClanWindow.MostraInfoDoMembro);
    FUN_180315380(MD_ClanWindow.MostraPrivilegios);
    FUN_180315380(MD_ClanWindow.MostraRanks);
    FUN_180315380(MD_ClanWindow.MostraSkills);
    FUN_180315380(MD_ClanWindow.Redesenha);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkClan);
    cRam00000001834b3b50 = '\x01';
  }
  if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
    func_0x000180315660(TI_ClanWindow);
  }
  uVar3 = **(undefined8 **)(TI_ClanWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
      func_0x000180315660(TI_ClanWindow);
    }
    **(undefined8 **)(TI_ClanWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_ClanWindow + 0xb8),0);
  }
  uVar3 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar3,param_1,MD_ClanWindow.Redesenha,0);
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkClan__remove_Mudou(uVar3,0);
  uVar3 = func_0x000180315580(TI_System.Action<int,string,string,int,string,string>);
  FUN_1811430a0(uVar3,param_1,MD_ClanWindow.MostraInfoDoMembro,0);
  SparkClan__remove_InfoDoMembro(uVar3,0);
  uVar3 = func_0x000180315580(TI_System.Action<int,string,int>);
  FUN_181142310(uVar3,param_1,MD_ClanWindow.MostraPrivilegios,0);
  SparkClan__remove_Privilegios(uVar3,0);
  uVar3 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar3,param_1,MD_ClanWindow.MostraRanks,0);
  SparkClan__remove_RanksMudaram(uVar3,0);
  uVar3 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar3,param_1,MD_ClanWindow.MostraGuerras,0);
  SparkClan__remove_GuerrasMudaram(uVar3,0);
  uVar3 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar3,param_1,MD_ClanWindow.MostraSkills,0);
  if (cRam00000001834b4628 == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(TI_SparkClan);
    cRam00000001834b4628 = '\x01';
  }
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    func_0x000180315660(TI_SparkClan);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x98);
  do {
    plVar4 = (longlong *)System_Delegate__Remove(lVar7,uVar3,0);
    plVar6 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      if (*plVar4 == TI_System.Action) {
        plVar6 = plVar4;
      }
      if (plVar6 == (longlong *)0x0) {
        FUN_1803146d0(plVar4);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = FUN_18031a4d0(*(longlong *)(TI_SparkClan + 0xb8) + 0x98,plVar6);
    bVar8 = lVar5 == lVar7;
    lVar7 = lVar5;
    if (bVar8) {
      return;
    }
  } while( true );
}

