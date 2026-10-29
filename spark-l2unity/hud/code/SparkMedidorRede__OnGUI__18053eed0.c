// SparkMedidorRede__OnGUI__18053eed0 @ 0x18053eed0

void SparkMedidorRede__OnGUI__18053eed0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b37a0 == '\0') {
    FUN_180315380(TI_UnityEngine.GUIStyle);
    FUN_180315380(TI_UnityEngine.GUI);
    FUN_180315380(TI_UnityEngine.RectOffset);
    cRam00000001834b37a0 = '\x01';
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      if (*(int *)(TI_UnityEngine.GUI + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar3 = UnityEngine_GUI__get_skin(0);
      if (lVar3 == 0) {
DAT_18053f074:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = func_0x000182390af0(lVar3,0);
      lVar3 = func_0x000180315580(TI_UnityEngine.GUIStyle);
      UnityEngine_GUIStyle___ctor(lVar3,uVar4,0);
      if (lVar3 == 0) goto DAT_18053f074;
      UnityEngine_GUIStyle__set_alignment(lVar3,0,0);
      UnityEngine_GUIStyle__set_fontSize(lVar3,0xe,0);
      uVar4 = func_0x000180315580(TI_UnityEngine.RectOffset);
      UnityEngine_RectOffset___ctor(uVar4,8,8,6,6,0);
      UnityEngine_GUIStyle__set_padding(lVar3,uVar4,0);
      *(longlong *)(param_1 + 0x38) = lVar3;
      func_0x000180314690(param_1 + 0x38,lVar3);
      if (*(longlong *)(param_1 + 0x38) == 0) goto DAT_18053f074;
      lVar3 = UnityEngine_GUIStyle__get_normal(*(longlong *)(param_1 + 0x38),0);
      if (lVar3 == 0) goto DAT_18053f074;
      uStack_18 = 0x3f8000003f800000;
      uStack_10 = 0x3f8000003f800000;
      UnityEngine_GUIStyleState__set_textColor(lVar3,&uStack_18,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(TI_UnityEngine.GUI + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_18 = 0x4120000041200000;
    uStack_10 = 0x42d4000043eb0000;
    UnityEngine_GUI__Box(&uStack_18,uVar4,uVar1,0);
  }
  return;
}

