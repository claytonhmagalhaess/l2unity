// UserGear__StartTrail__1807ed810 @ 0x1807ed810

void UserGear__StartTrail__1807ed810(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar3 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x110),0);
    if (lVar3 != 0) {
      UnityEngine_GameObject__SetActive(lVar3,1,0);
      lVar3 = *(longlong *)(param_1 + 0x110);
      if (lVar3 != 0) {
        if (cRam00000001834c31ec == '\0') {
          FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.ParticleSystem>);
          cRam00000001834c31ec = '\x01';
        }
        if (lVar3 != 0) {
          lVar1 = *(longlong *)(lVar3 + 0x10);
          if (lVar1 == 0) {
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(lVar3,0);
          }
          if (pcRam00000001834c3210 == (code *)0x0) {
            pcRam00000001834c3210 = (code *)FUN_180315630(&UNK_182957870);
          }
                    /* WARNING: Could not recover jumptable at 0x0001824c20d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam00000001834c3210)(lVar1,1);
          return;
        }
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

