// PartyWindow__Update__1806a9b90 @ 0x1806a9b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PartyWindow__Update__1806a9b90(longlong param_1)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  float fVar9;
  
  if (((((*(char *)(param_1 + 0xad) != '\0') && (*(char *)(param_1 + 0xac) != '\0')) &&
       (0.0 <= *(float *)(param_1 + 0xb0))) &&
      (fVar9 = (float)FUN_1824366b0(0), fVar9 - *(float *)(param_1 + 0xb0) < 2.0)) ||
     ((*(char *)(param_1 + 0xad) == '\0' || (*(char *)(param_1 + 0xac) == '\0')))) {
    return;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0xbf800000;
  *(undefined1 *)(param_1 + 0xad) = 0;
  if (cRam00000001834b3f72 == '\0') {
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<MembroDaParty>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<MembroDaParty>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3f72 = '\x01';
  }
  if (*(char *)(param_1 + 0xac) == '\0') {
    return;
  }
  PartyWindow__FechaMenu__1806a7270(param_1,0);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x88),0);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      if (*(int *)(TI_SparkParty + 0xe4) == 0) {
        func_0x000180315660();
      }
      bVar2 = SparkParty__get_EmParty(0);
      uVar5 = FUN_180eb5810(bVar2 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        if (*(int *)(TI_SparkParty + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (cRam00000001834b3017 == '\0') {
          FUN_180315380(TI_SparkParty);
          cRam00000001834b3017 = '\x01';
        }
        if (*(int *)(TI_SparkParty + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (**(longlong **)(TI_SparkParty + 0xb8) != 0) {
          plVar6 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<MembroDaParty>);
          do {
            if (plVar6 == (longlong *)0x0) {
code_r0x0001806a93f4:
              FUN_1803155d0();
              FUN_180311490();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            cVar3 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
            if (cVar3 == '\0') {
              if (plVar6 == (longlong *)0x0) {
                return;
              }
              FUN_180002390(0,TI_System.IDisposable,plVar6);
              return;
            }
            if (plVar6 == (longlong *)0x0) {
code_r0x0001806a93ef:
              FUN_1803155d0();
              goto code_r0x0001806a93f4;
            }
            lVar4 = *plVar6;
            if (*(ushort *)(lVar4 + 0x12e) != 0) {
              uVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                    TI_System.Collections.Generic.IEnumerator<MembroDaParty>) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            *(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) *
                            0x10 + 0x138 + lVar4);
                  goto code_r0x0001806a9346;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_System.Collections.Generic.IEnumerator<MembroDaParty>,0);
code_r0x0001806a9346:
            uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            lVar4 = *(longlong *)(param_1 + 0x88);
            uVar5 = PartyWindow__Cartao(param_1,uVar5,0);
            if (lVar4 == 0) {
              FUN_1803155d0();
              goto code_r0x0001806a93ef;
            }
            UnityEngine_UIElements_VisualElement__Add(lVar4,uVar5,0);
          } while( true );
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

