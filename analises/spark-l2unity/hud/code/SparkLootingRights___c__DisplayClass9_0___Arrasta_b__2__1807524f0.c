// SparkLootingRights___c__DisplayClass9_0___Arrasta_b__2__1807524f0 @ 0x1807524f0

void SparkLootingRights___c__DisplayClass9_0___Arrasta_b__2__1807524f0
               (longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_28 [32];
  
  if (cRam00000001834b4286 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerUpEvent>.get_pointerId);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(TI_SparkLootingRights);
    FUN_180315380(LIT_"'spark.lr.x'");
    FUN_180315380(LIT_"'spark.lr.y'");
    cRam00000001834b4286 = '\x01';
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (param_2 != 0) {
    UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer
              (*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x80),0);
    if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
      puVar3 = (undefined4 *)
               UnityEngine_UIElements_VisualElement__get_layout
                         (auStack_28,**(longlong **)(TI_SparkLootingRights + 0xb8),0);
      uVar1 = *puVar3;
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_PlayerPrefs__SetFloat(LIT_"'spark.lr.x'",uVar1,0);
      if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
        lVar4 = UnityEngine_UIElements_VisualElement__get_layout
                          (auStack_28,**(longlong **)(TI_SparkLootingRights + 0xb8),0);
        UnityEngine_PlayerPrefs__SetFloat(LIT_"'spark.lr.y'",*(undefined4 *)(lVar4 + 4),0);
        FUN_18242e9f0(0);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

