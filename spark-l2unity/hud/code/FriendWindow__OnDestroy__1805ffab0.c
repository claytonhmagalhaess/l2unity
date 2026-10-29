// FriendWindow__OnDestroy__1805ffab0 @ 0x1805ffab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FriendWindow__OnDestroy__1805ffab0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3bfd == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_FriendWindow.MostraLista);
    FUN_180315380(TI_FriendWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkAmigos);
    cRam00000001834b3bfd = '\x01';
  }
  if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
    func_0x000180315660(TI_FriendWindow);
  }
  uVar3 = **(undefined8 **)(TI_FriendWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
      func_0x000180315660(TI_FriendWindow);
    }
    **(undefined8 **)(TI_FriendWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_FriendWindow + 0xb8),0);
  }
  uVar3 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar3,param_1,MD_FriendWindow.MostraLista,0);
  if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b4886 == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(TI_SparkAmigos);
    cRam00000001834b4886 = '\x01';
  }
  if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
    func_0x000180315660(TI_SparkAmigos);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkAmigos + 0xb8) + 8);
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
    if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = FUN_18031a4d0(*(longlong *)(TI_SparkAmigos + 0xb8) + 8,plVar6);
    bVar8 = lVar5 == lVar7;
    lVar7 = lVar5;
    if (bVar8) {
      return;
    }
  } while( true );
}

