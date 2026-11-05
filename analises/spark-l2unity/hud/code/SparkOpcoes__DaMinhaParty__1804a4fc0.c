// SparkOpcoes__DaMinhaParty__1804a4fc0 @ 0x1804a4fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkOpcoes__DaMinhaParty__1804a4fc0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ushort uVar7;
  
  if (cRam00000001834b32b9 == '\0') {
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<MembroDaParty>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<MembroDaParty>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkParty);
    cRam00000001834b32b9 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x82) != '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Equality(param_1,0,0);
    if (cVar2 == '\0') {
      if (param_1 == 0) {
code_r0x0001804a52e5:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      if (*(longlong *)(param_1 + 0x30) != 0) {
        if (*(int *)(TI_SparkParty + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = SparkParty__get_EmParty(0);
        if (cVar2 != '\0') {
          uVar3 = FUN_1804169f0(0);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar2 = UnityEngine_Object__op_Equality(param_1,uVar3,0);
          if (cVar2 == '\0') {
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
            if (**(longlong **)(TI_SparkParty + 0xb8) == 0) goto code_r0x0001804a52e5;
            plVar4 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<MembroDaParty>);
            do {
              if (plVar4 == (longlong *)0x0) goto code_r0x0001804a52d9;
              cVar2 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
              if (cVar2 == '\0') {
                if (plVar4 == (longlong *)0x0) {
                  return 0;
                }
                FUN_180002390(0,TI_System.IDisposable,plVar4);
                return 0;
              }
              if (plVar4 == (longlong *)0x0) {
code_r0x0001804a52d4:
                FUN_1803155d0();
code_r0x0001804a52d9:
                FUN_1803155d0();
                FUN_180311490();
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return uVar3;
              }
              lVar6 = *plVar4;
              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                      TI_System.Collections.Generic.IEnumerator<MembroDaParty>) {
                    puVar5 = (undefined8 *)
                             ((longlong)
                              *(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) *
                              0x10 + 0x138 + lVar6);
                    goto code_r0x0001804a5206;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_System.Collections.Generic.IEnumerator<MembroDaParty>,0);
code_r0x0001804a5206:
              lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
              if (lVar6 == 0) {
code_r0x0001804a52cf:
                FUN_1803155d0();
                goto code_r0x0001804a52d4;
              }
              if (*(longlong *)(param_1 + 0x30) == 0) {
                FUN_1803155d0();
                goto code_r0x0001804a52cf;
              }
            } while (*(int *)(lVar6 + 0x10) != *(int *)(*(longlong *)(param_1 + 0x30) + 0x14));
            if (plVar4 != (longlong *)0x0) {
              FUN_180002390(0,TI_System.IDisposable,plVar4);
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

