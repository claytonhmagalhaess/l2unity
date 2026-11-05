// ChatWindow__FiltroMudou__1805c6ef0 @ 0x1805c6ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__FiltroMudou__1805c6ef0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (cRam00000001834b3ac1 == '\0') {
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    cRam00000001834b3ac1 = '\x01';
  }
  if (*(char *)(param_1 + 0x118) != '\0') {
    uVar9 = 0;
    do {
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b3b32 == '\0') {
        FUN_180315380(TI_SparkChatFiltro);
        cRam00000001834b3b32 = '\x01';
      }
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkChatFiltro__Carrega(0);
      lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x68);
      if (lVar2 == 0) goto DAT_1805c710b;
      uVar8 = (uint)uVar9;
      if (*(uint *)(lVar2 + 0x18) <= uVar8) {
code_r0x0001805c7111:
        FUN_1803155c0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(param_1 + 0xd0);
      if (lVar3 == 0) goto DAT_1805c710b;
      if (*(uint *)(lVar3 + 0x18) <= uVar8) goto code_r0x0001805c7111;
      uVar7 = *(undefined8 *)(lVar3 + 0x20 + uVar9 * 8);
      uVar1 = *(uint *)(lVar2 + 0x20 + uVar9 * 4);
      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
        func_0x000180315660();
      }
      plVar6 = (longlong *)FUN_180b0e310(uVar7,0,0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
      if (plVar6 == (longlong *)0x0) {
DAT_1805c710b:
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = (**(code **)(*plVar6 + 0xe38))(plVar6,*(undefined8 *)(*plVar6 + 0xe40));
      lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x10);
      if (lVar2 == 0) goto DAT_1805c710b;
      if (*(uint *)(lVar2 + 0x18) <= uVar1) goto code_r0x0001805c7111;
      cVar5 = System_String__op_Inequality(uVar7);
      if (cVar5 == '\0') {
        if ((param_2 == uVar1) || (param_2 == 0xffffffff)) goto code_r0x0001805c70ce;
      }
      else {
        if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
          func_0x000180315660(TI_SparkChatFiltro);
        }
        lVar2 = *(longlong *)(*(longlong *)(TI_SparkChatFiltro + 0xb8) + 0x10);
        if (lVar2 == 0) goto DAT_1805c710b;
        if (*(uint *)(lVar2 + 0x18) <= uVar1) goto code_r0x0001805c7111;
        (**(code **)(*plVar6 + 0xe48))
                  (plVar6,*(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar1 * 8));
code_r0x0001805c70ce:
        ChatWindow__Remonta__1805cdf70(param_1);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < 5);
    ChatWindow__AplicaJanelaDeSistema__1805c5020(param_1,0);
  }
  return;
}

