// StatusWindow__Update__1807640d0 @ 0x1807640d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void StatusWindow__Update__1807640d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (cRam00000001834b42bf == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerStats);
    FUN_180315380(TI_PlayerStatus);
    cRam00000001834b42bf = '\x01';
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar2 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if (cVar5 != '\0') {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x000180764523;
      if (*(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x38) != 0) {
        if (DAT_1834b2f32 == '\0') {
          FUN_180315380(TI_PlayerEntity);
          DAT_1834b2f32 = '\x01';
        }
        if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x000180764523;
        if (*(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x40) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x100);
          lVar6 = FUN_1804169f0(0);
          if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x38) == 0)) goto code_r0x000180764523;
          uVar1 = *(undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x10);
          lVar6 = FUN_1804169f0(0);
          if ((lVar6 == 0) || ((*(longlong *)(lVar6 + 0x40) == 0 || (lVar7 == 0))))
          goto code_r0x000180764523;
          SparkPiscaHp__Atualiza(lVar7,uVar1,*(undefined4 *)(*(longlong *)(lVar6 + 0x40) + 0x38),0);
        }
      }
    }
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar2 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if (cVar5 != '\0') {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) {
code_r0x000180764523:
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3 = *(longlong **)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x38);
    if (plVar3 != (longlong *)0x0) {
      lVar7 = *plVar3;
      if ((*(byte *)(TI_PlayerStatus + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
         (*(longlong *)
           (*(longlong *)(lVar7 + 200) + -8 + (ulonglong)*(byte *)(TI_PlayerStatus + 0x130) * 8
           ) == TI_PlayerStatus)) {
        if (DAT_1834b2f32 == '\0') {
          FUN_180315380(TI_PlayerEntity);
          DAT_1834b2f32 = '\x01';
        }
        if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x000180764523;
        plVar3 = *(longlong **)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x40);
        if (plVar3 != (longlong *)0x0) {
          lVar7 = *plVar3;
          if ((*(byte *)(TI_PlayerStats + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
             (*(longlong *)
               (*(longlong *)(lVar7 + 200) + -8 +
               (ulonglong)*(byte *)(TI_PlayerStats + 0x130) * 8) == TI_PlayerStats)) {
            if ((*(longlong *)(param_1 + 0x108) != 0) && (*(longlong *)(param_1 + 0xd0) != 0)) {
              uVar2 = *(undefined8 *)(param_1 + 0x108);
              lVar7 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                                (*(undefined8 *)(param_1 + 0xd0),0);
              if (lVar7 == 0) goto code_r0x000180764523;
              FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar7);
              SparkPreviaRegenBarra__Atualiza(uVar2);
            }
            if ((*(longlong *)(param_1 + 0x110) != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
              uVar2 = *(undefined8 *)(param_1 + 0x110);
              lVar7 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                                (*(undefined8 *)(param_1 + 0xe0),0);
              if (lVar7 == 0) goto code_r0x000180764523;
              FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar7);
              SparkPreviaRegenBarra__Atualiza(uVar2);
            }
            if ((*(longlong *)(param_1 + 0x118) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
              uVar2 = *(undefined8 *)(param_1 + 0x118);
              lVar7 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                                (*(undefined8 *)(param_1 + 0xc0),0);
              if (lVar7 == 0) goto code_r0x000180764523;
              FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar7);
              SparkPreviaRegenBarra__Atualiza(uVar2);
            }
          }
        }
      }
    }
  }
  return;
}

