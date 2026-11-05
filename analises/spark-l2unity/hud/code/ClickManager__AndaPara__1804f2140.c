// ClickManager__AndaPara__1804f2140 @ 0x1804f2140

/* WARNING: Removing unreachable block (ram,0x0001804f34b9) */
/* WARNING: Removing unreachable block (ram,0x0001804f34c6) */
/* WARNING: Removing unreachable block (ram,0x0001804f34d7) */
/* WARNING: Removing unreachable block (ram,0x0001804f34e0) */
/* WARNING: Removing unreachable block (ram,0x0001804f34f4) */
/* WARNING: Removing unreachable block (ram,0x0001804f350a) */
/* WARNING: Removing unreachable block (ram,0x0001804f351b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClickManager__AndaPara__1804f2140(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 *puStack_30;
  
  if (cRam00000001834b35a4 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerController);
    FUN_180315380(TI_UnityEngine.Vector3);
    cRam00000001834b35a4 = '\x01';
  }
  if (*(int *)(TI_PlayerController + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b2f33 == '\0') {
    FUN_180315380(TI_PlayerController);
    DAT_1834b2f33 = '\x01';
  }
  if (*(int *)(TI_PlayerController + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar7 = **(undefined8 **)(TI_PlayerController + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (cVar5 != '\0') {
    if (*(int *)(TI_PlayerController + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b2f33 == '\0') {
      FUN_180315380(TI_PlayerController);
      DAT_1834b2f33 = '\x01';
    }
    if (*(int *)(TI_PlayerController + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(TI_PlayerController + 0xb8) == 0) goto code_r0x0001804f2674;
    cVar5 = PlayerController__get_Voando(**(longlong **)(TI_PlayerController + 0xb8),0);
    if (cVar5 != '\0') {
      return;
    }
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  uVar7 = **(undefined8 **)(TI_InputManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (cVar5 != '\0') {
    if (DAT_1834b3532 == '\0') {
      FUN_180315380(TI_InputManager);
      DAT_1834b3532 = '\x01';
    }
    if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x0001804f2674;
    if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf1) != '\0') {
      if (DAT_1834b2f30 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        DAT_1834b2f30 = '\x01';
      }
      uStack_58 = *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x18);
      uStack_50 = *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x20);
      uStack_48 = *param_3;
      puStack_40 = (undefined *)CONCAT44(puStack_40._4_4_,*(undefined4 *)(param_3 + 1));
      fVar9 = (float)FUN_1804f07d0(&uStack_48,&uStack_58,0);
      if (85.0 <= fVar9) {
        return;
      }
      if (cRam00000001834b35a6 == '\0') {
        FUN_180315380(TI_ClickManager.<LocatorWithoutMoving>d__35);
        cRam00000001834b35a6 = '\x01';
      }
      lVar6 = func_0x000180315580(TI_ClickManager.<LocatorWithoutMoving>d__35);
      Gear__UpdateWeaponType__1803dadf0(lVar6,0);
      *(undefined4 *)(lVar6 + 0x10) = 0;
      *(longlong *)(lVar6 + 0x20) = param_1;
      func_0x000180314690(lVar6 + 0x20,param_1);
      uVar1 = *(undefined4 *)(param_2 + 1);
      uVar2 = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar6 + 0x28) = *param_2;
      uVar7 = *param_3;
      *(undefined4 *)(lVar6 + 0x30) = uVar1;
      *(undefined8 *)(lVar6 + 0x34) = uVar7;
      *(undefined4 *)(lVar6 + 0x3c) = uVar2;
      if (lVar6 != 0) {
        if (DAT_1834c11f5 == '\0') {
          puStack_30 = (undefined1 *)0x182428fae;
          FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.Object>);
          puStack_30 = (undefined1 *)0x182428fba;
          FUN_180315380(LIT_"'obj'");
          DAT_1834c11f5 = '\x01';
        }
        if (param_1 == 0) {
          puStack_30 = (undefined1 *)0x1824290d6;
          UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(0,LIT_"'obj'",0);
          puStack_30 = (undefined1 *)0x1824290db;
          FUN_1803155d0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(param_1 + 0x10);
        if (lVar3 == 0) {
          puStack_30 = &LAB_182428fea;
          UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(param_1,LIT_"'obj'",0);
        }
        if (_DAT_1834c1258 == (code *)0x0) {
          puStack_30 = (undefined1 *)0x182429002;
          _DAT_1834c1258 = (code *)FUN_180315630(&UNK_1829422b0);
        }
        puStack_30 = (undefined1 *)0x18242900e;
        cVar5 = (*_DAT_1834c1258)(lVar3);
        if (cVar5 != '\0') {
          if (DAT_1834c11f7 == '\0') {
            puStack_30 = (undefined1 *)0x18242902b;
            FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.MonoBehaviour>);
            DAT_1834c11f7 = '\x01';
          }
          lVar3 = *(longlong *)(param_1 + 0x10);
          if (lVar3 == 0) {
            puStack_30 = &LAB_182429045;
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(param_1,0);
          }
          if (_DAT_1834c1268 == (code *)0x0) {
            puStack_30 = (undefined1 *)0x18242905d;
            _DAT_1834c1268 = (code *)FUN_180315630(&UNK_182942380);
          }
                    /* WARNING: Could not recover jumptable at 0x000182429079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_DAT_1834c1268)(lVar3,lVar6);
          return;
        }
        puStack_30 = (undefined1 *)0x1824290e8;
        uVar7 = func_0x0001803153a0(TI_System.ArgumentException);
        puStack_30 = (undefined1 *)0x1824290f0;
        uVar7 = func_0x000180315580(uVar7);
        puStack_30 = (undefined1 *)0x1824290ff;
        uVar8 = func_0x0001803153a0(LIT_"'Coroutines can only be stopped on a MonoBehaviour'");
        puStack_30 = (undefined1 *)0x18242910d;
        System_ArgumentException___ctor(uVar7,uVar8,0);
        puStack_30 = (undefined1 *)0x182429119;
        uVar8 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
        puStack_30 = (undefined1 *)0x182429124;
        FUN_180315590(uVar7,uVar8);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puStack_30 = (undefined1 *)0x182429088;
      uVar7 = func_0x0001803153a0(TI_System.NullReferenceException);
      puStack_30 = (undefined1 *)0x182429090;
      uVar7 = func_0x000180315580(uVar7);
      puStack_30 = (undefined1 *)0x18242909f;
      uVar8 = func_0x0001803153a0(LIT_"'routine is null'");
      puStack_30 = (undefined1 *)0x1824290ad;
      System_NullReferenceException___ctor(uVar7,uVar8,0);
      puStack_30 = (undefined1 *)0x1824290b9;
      uVar8 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
      puStack_30 = (undefined1 *)0x1824290c4;
      FUN_180315590(uVar7,uVar8);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = *param_2;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (DAT_1834b2f34 == '\0') {
    FUN_180315380(TI_PlayerStateMachine);
    DAT_1834b2f34 = '\x01';
  }
  uVar7 = **(undefined8 **)(TI_PlayerStateMachine + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (cVar5 != '\0') {
    if (DAT_1834b2f34 == '\0') {
      FUN_180315380(TI_PlayerStateMachine);
      DAT_1834b2f34 = '\x01';
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    lVar6 = **(longlong **)(TI_PlayerStateMachine + 0xb8);
    puStack_40 = (undefined *)CONCAT44(puStack_40._4_4_,*(undefined4 *)(param_1 + 0x50));
    uVar7 = func_0x000180314670(TI_UnityEngine.Vector3,&uStack_48);
    if (lVar6 == 0) {
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    PlayerStateMachine__NotifyEvent(lVar6,0x13,uVar7,0);
  }
  if (DAT_1834b3015 == '\0') {
    FUN_180315380(TI_TargetManager);
    DAT_1834b3015 = '\x01';
  }
  uVar7 = **(undefined8 **)(TI_TargetManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (cVar5 != '\0') {
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    if (**(longlong **)(TI_TargetManager + 0xb8) == 0) {
code_r0x0001804f2674:
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TargetManager__ClearAttackTarget__1807e9d70(**(longlong **)(TI_TargetManager + 0xb8),0);
  }
  if (DAT_1834b2f30 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector3);
    DAT_1834b2f30 = '\x01';
  }
  uStack_48 = *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x18);
  uStack_58 = *param_3;
  puStack_40 = (undefined *)
               CONCAT44(puStack_40._4_4_,
                        *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x20));
  uStack_50 = *(undefined4 *)(param_3 + 1);
  fVar9 = (float)FUN_1804f07d0(&uStack_58,&uStack_48,0);
  if (fVar9 < 85.0) {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (cRam00000001834b35a7 == '\0') {
      FUN_180315380(TI_ClickManager.<PlaceLocator>d__36);
      cRam00000001834b35a7 = '\x01';
    }
    lVar6 = func_0x000180315580(TI_ClickManager.<PlaceLocator>d__36);
    Gear__UpdateWeaponType__1803dadf0(lVar6,0);
    *(undefined4 *)(lVar6 + 0x10) = 0;
    *(longlong *)(lVar6 + 0x20) = param_1;
    func_0x000180314690(lVar6 + 0x20,param_1);
    uVar2 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar6 + 0x34) = *param_3;
    *(undefined8 *)(lVar6 + 0x28) = uVar7;
    *(undefined4 *)(lVar6 + 0x3c) = uVar2;
    *(undefined4 *)(lVar6 + 0x30) = uVar1;
    UnityEngine_MonoBehaviour__StartCoroutine(param_1,lVar6,0);
    return;
  }
  if (cRam00000001834b35a8 == '\0') {
    puStack_40 = &UNK_1804f3465;
    FUN_180315380(MR_UnityEngine.Component.GetComponent<L2Particle>);
    cRam00000001834b35a8 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    puStack_40 = &UNK_1804f348d;
    UnityEngine_GameObject__SetActive(*(longlong *)(param_1 + 0x20),0,0);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      puStack_40 = &UNK_1804f34a1;
      lVar6 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x30),0);
      if (lVar6 != 0) {
        puStack_40 = &UNK_1804f34b7;
        UnityEngine_GameObject__SetActive(lVar6,0,0);
        if (*(longlong *)(param_1 + 0x28) != 0) {
          puStack_40 = &UNK_1804f3532;
          lVar6 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x28),0);
          if (lVar6 != 0) {
            if (cRam00000001834c1104 == '\0') {
              puStack_30 = &UNK_182426775;
              FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.GameObject>,0,0);
              cRam00000001834c1104 = '\x01';
            }
            if (lVar6 != 0) {
              lVar3 = *(longlong *)(lVar6 + 0x10);
              if (lVar3 == 0) {
                puStack_30 = &UNK_182426799;
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(lVar6,0);
              }
              if (pcRam00000001834c1178 == (code *)0x0) {
                puStack_30 = &UNK_1824267b1;
                pcRam00000001834c1178 = (code *)FUN_180315630(&UNK_182941990);
              }
                    /* WARNING: Could not recover jumptable at 0x0001824267ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam00000001834c1178)(lVar3,0);
              return;
            }
            puStack_30 = &UNK_1824267d6;
            FUN_1803155d0();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
    }
  }
  puStack_40 = &UNK_1804f3558;
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

