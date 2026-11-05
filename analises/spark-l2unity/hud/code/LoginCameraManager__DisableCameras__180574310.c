// LoginCameraManager__DisableCameras__180574310 @ 0x180574310

void LoginCameraManager__DisableCameras__180574310(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lStack_18;
  
  if (cRam00000001834b390e == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.get_Values);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.GetEnumerator);
    cRam00000001834b390e = '\x01';
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    LoginCameraManager__Initialize(param_1,0);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar3 = FUN_18117fd20(*(longlong *)(param_1 + 0x28),MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.get_Values);
    if (lVar3 != 0) {
      FUN_180fbde10(&uStack_40,lVar3,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.GetEnumerator);
      uStack_28 = (undefined4)uStack_40;
      uStack_24 = uStack_40._4_4_;
      uStack_20 = (undefined4)uStack_38;
      uStack_1c = uStack_38._4_4_;
      lStack_18 = lStack_30;
      uStack_40 = 0;
      uStack_38 = &uStack_28;
      while( true ) {
        cVar2 = FUN_1813194f0(&uStack_28,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.MoveNext);
        if (cVar2 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.Dispose);
          return;
        }
        if (lStack_18 == 0) break;
        UnityEngine_Behaviour__set_enabled(lStack_18,0,0);
      }
      FUN_1803155d0();
      FUN_180311490();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

