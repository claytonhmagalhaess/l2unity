// DamageText__Start__18061e070 @ 0x18061e070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DamageText__Start__18061e070(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (cRam00000001834b3d09 == '\0') {
    puStack_30 = &UNK_18061e092;
    FUN_180315380(LIT_"'Damages'");
    puStack_30 = &UNK_18061e09e;
    FUN_180315380(LIT_"'FlotatingText'");
    cRam00000001834b3d09 = '\x01';
  }
  puStack_30 = &UNK_18061e0af;
  lVar3 = UnityEngine_Component__get_transform(param_1,0);
  puStack_30 = &UNK_18061e0c0;
  lVar4 = UnityEngine_GameObject__Find(LIT_"'Damages'",0);
  if (lVar4 != 0) {
    puStack_30 = &UNK_18061e0cf;
    uVar5 = UnityEngine_GameObject__get_transform(lVar4,0);
    if (lVar3 != 0) {
      puStack_30 = &UNK_18061e0e2;
      UnityEngine_Transform__SetParent(lVar3,uVar5,0);
      lVar3 = LIT_"'FlotatingText'";
      puStack_30 = &UNK_18242914a;
      cVar2 = func_0x000181707e50(LIT_"'FlotatingText'",0,0);
      if (cVar2 != '\0') {
        puStack_30 = &UNK_1824291f6;
        uVar5 = func_0x0001803153a0(TI_System.NullReferenceException);
        puStack_30 = &UNK_1824291fe;
        uVar5 = func_0x000180315580(uVar5);
        puStack_30 = &UNK_18242920d;
        uVar6 = func_0x0001803153a0(LIT_"'methodName is null or empty'");
        puStack_30 = &UNK_18242921b;
        System_NullReferenceException___ctor(uVar5,uVar6,0);
        puStack_30 = &UNK_182429227;
        uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
        puStack_30 = &UNK_182429232;
        FUN_180315590(uVar5,uVar6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1834c11f5 == '\0') {
        puStack_30 = &UNK_182429166;
        FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.Object>);
        puStack_30 = &UNK_182429172;
        FUN_180315380(LIT_"'obj'");
        DAT_1834c11f5 = '\x01';
      }
      if (param_1 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        if (lVar4 == 0) {
          puStack_30 = &UNK_1824291a2;
          UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(param_1,LIT_"'obj'",0);
        }
        if (_DAT_1834c1258 == (code *)0x0) {
          puStack_30 = &UNK_1824291ba;
          _DAT_1834c1258 = (code *)FUN_180315630(&UNK_1829422b0);
        }
        puStack_30 = &UNK_1824291c6;
        cVar2 = (*_DAT_1834c1258)(lVar4);
        if (cVar2 != '\0') {
          if (cRam00000001834c11f6 == '\0') {
            FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.MonoBehaviour>,lVar3,0,0);
            FUN_180315380(MR_System.ReadOnlySpan<char>.GetPinnableReference);
            FUN_180315380(MR_System.ReadOnlySpan<char>.get_Length);
            cRam00000001834c11f6 = '\x01';
          }
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
          uStack_40 = 0;
          uStack_38 = 0;
          puStack_30 = &stack0x00000008;
          if (param_1 != 0) {
            lVar4 = *(longlong *)(param_1 + 0x10);
            if (*(longlong *)(param_1 + 0x10) == 0) {
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(param_1,0);
              lVar4 = 0;
            }
            if (lVar3 != 0) {
              if (*(int *)(lVar3 + 0x10) == 0) {
                uVar5 = func_0x0001818f3de0(1,0);
                uVar5 = func_0x0001803df910(uVar5,0);
                uStack_28 = 0;
                uStack_20 = 0;
                func_0x000180d7b1f0(&uStack_28,uVar5,0,0);
                uStack_48 = uStack_28;
                uStack_40 = uStack_20;
              }
              else {
                if (DAT_1834b89d4 == '\0') {
                  FUN_180315380(MR_System.ReadOnlySpan<char>..ctor);
                  DAT_1834b89d4 = '\x01';
                }
                uStack_58 = func_0x000181706cc0(lVar3,0);
                uStack_50 = (ulonglong)*(uint *)(lVar3 + 0x10);
                uVar5 = func_0x000180e028c0(&uStack_58,MR_System.ReadOnlySpan<char>.GetPinnableReference);
                func_0x000180d7b1f0(&uStack_48,uVar5,uStack_50 & 0xffffffff,0);
              }
            }
            if (pcRam00000001834c1260 == (code *)0x0) {
              pcRam00000001834c1260 = (code *)FUN_180315630(&UNK_182942300);
            }
            (*pcRam00000001834c1260)(lVar4,&uStack_48,0);
            return;
          }
          FUN_1803155d0();
          FUN_180311490();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puStack_30 = &UNK_182429256;
        uVar5 = func_0x0001803153a0(TI_System.ArgumentException);
        puStack_30 = &UNK_18242925e;
        uVar5 = func_0x000180315580(uVar5);
        puStack_30 = &UNK_18242926d;
        uVar6 = func_0x0001803153a0(LIT_"'Coroutines can only be stopped on a MonoBehaviour'");
        puStack_30 = &UNK_18242927b;
        System_ArgumentException___ctor(uVar5,uVar6,0);
        puStack_30 = &UNK_182429287;
        uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
        puStack_30 = &UNK_182429292;
        FUN_180315590(uVar5,uVar6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puStack_30 = &UNK_182429244;
      UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(0,LIT_"'obj'",0);
      puStack_30 = &UNK_182429249;
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puStack_30 = &UNK_18061e103;
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

