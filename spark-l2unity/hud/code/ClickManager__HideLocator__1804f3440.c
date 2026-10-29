// ClickManager__HideLocator__1804f3440 @ 0x1804f3440

void ClickManager__HideLocator__1804f3440(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  
  if (cRam00000001834b35a8 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<L2Particle>);
    cRam00000001834b35a8 = '\x01';
  }
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x0001804f3553;
    UnityEngine_GameObject__SetActive(*(longlong *)(param_1 + 0x20),0,0);
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x0001804f3553;
    lVar5 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x30),0);
    if (lVar5 == 0) goto code_r0x0001804f3553;
    UnityEngine_GameObject__SetActive(lVar5,0,0);
  }
  else {
    if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x0001804f3553;
    lVar5 = FUN_180997040(*(longlong *)(param_1 + 0x28),MR_UnityEngine.Component.GetComponent<L2Particle>);
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x30) == 0)) goto code_r0x0001804f3553;
    uVar1 = *(undefined8 *)(lVar5 + 0x28);
    uVar2 = *(undefined4 *)(lVar5 + 0x30);
    lVar5 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x30),0);
    if (lVar5 == 0) goto code_r0x0001804f3553;
    UnityEngine_GameObject__SetActive(lVar5,1,0);
    lVar5 = *(longlong *)(param_1 + 0x30);
    if (lVar5 == 0) goto code_r0x0001804f3553;
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    *(undefined4 *)(lVar5 + 0x30) = uVar2;
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x0001804f3553;
    L2Particle__ResetTimer(*(longlong *)(param_1 + 0x30),0);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar5 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x28),0);
    if (lVar5 != 0) {
      if (cRam00000001834c1104 == '\0') {
        FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.GameObject>,0,0);
        cRam00000001834c1104 = '\x01';
      }
      if (lVar5 != 0) {
        lVar3 = *(longlong *)(lVar5 + 0x10);
        if (lVar3 == 0) {
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(lVar5,0);
        }
        if (pcRam00000001834c1178 == (code *)0x0) {
          pcRam00000001834c1178 = (code *)FUN_180315630(&UNK_182941990);
        }
                    /* WARNING: Could not recover jumptable at 0x0001824267ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam00000001834c1178)(lVar3,0);
        return;
      }
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
code_r0x0001804f3553:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

