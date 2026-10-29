// BoardWindow__Mostra__1805afd20 @ 0x1805afd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardWindow__Mostra__1805afd20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b3a70 == '\0') {
    FUN_180315380(TI_System.Action<string,string>);
    FUN_180315380(MD_BoardWindow.Clique);
    FUN_180315380(TI_SparkHtml.Contexto);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(LIT_"''");
    cRam00000001834b3a70 = '\x01';
  }
  if ((char)param_1[0x13] == '\0') {
    return;
  }
  if ((char)param_1[7] != '\0') {
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  }
  if (param_1[0x16] != 0) {
    UnityEngine_UIElements_VisualElement__Clear(param_1[0x16],0);
    lVar3 = func_0x000180315580(TI_SparkHtml.Contexto);
    SparkHtml_Contexto___ctor__1807350a0(lVar3,0);
    uVar4 = func_0x000180315580(TI_System.Action<string,string>);
    FUN_180e35270(uVar4,param_1,MD_BoardWindow.Clique,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = uVar4;
      func_0x000180314690(lVar3 + 0x10,uVar4);
      *(undefined8 *)(lVar3 + 0x18) = 0;
      func_0x000180314690(lVar3 + 0x18,0);
      *(longlong *)(lVar3 + 0x28) = param_1[0x11];
      func_0x000180314690(lVar3 + 0x28);
      *(longlong *)(lVar3 + 0x30) = param_1[0x12];
      func_0x000180314690(lVar3 + 0x30);
      param_1[0x17] = *(longlong *)(lVar3 + 0x20);
      func_0x000180314690(param_1 + 0x17);
      lVar5 = LIT_"''";
      if (param_2 != 0) {
        lVar5 = param_2;
      }
      lVar1 = param_1[0x16];
      if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = SparkHtml__Le__18073bd70(lVar5,0);
      SparkHtml__Desenha__180739b60(lVar1,uVar4,lVar3,0);
      lVar3 = param_1[0x15];
      if (DAT_1834b2f44 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector2);
        DAT_1834b2f44 = '\x01';
      }
      if (lVar3 != 0) {
        UnityEngine_UIElements_ScrollView__set_scrollOffset
                  (lVar3,**(undefined8 **)(TI_UnityEngine.Vector2 + 0xb8),0);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

