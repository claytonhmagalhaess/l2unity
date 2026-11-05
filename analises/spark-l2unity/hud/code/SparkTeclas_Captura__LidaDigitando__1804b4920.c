// SparkTeclas_Captura__LidaDigitando__1804b4920 @ 0x1804b4920

/* WARNING: Possible PIC construction at 0x0001804b49ea: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001804b4a2a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001804b49ef) */
/* WARNING: Removing unreachable block (ram,0x0001804b49f3) */
/* WARNING: Removing unreachable block (ram,0x0001804b49fc) */
/* WARNING: Removing unreachable block (ram,0x0001804b4a13) */
/* WARNING: Removing unreachable block (ram,0x0001804b4a1c) */
/* WARNING: Removing unreachable block (ram,0x0001804b4a2f) */
/* WARNING: Removing unreachable block (ram,0x0001804b4a54) */
/* WARNING: Removing unreachable block (ram,0x0001804b4a33) */
/* WARNING: Removing unreachable block (ram,0x0001804b4a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkTeclas_Captura__LidaDigitando__1804b4920(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (cRam00000001834b330b == '\0') {
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'Validate'");
    FUN_180315380(LIT_"'ArrowUp'");
    FUN_180315380(LIT_"'CloseWindow'");
    FUN_180315380(LIT_"'ArrowDown'");
    cRam00000001834b330b = '\x01';
  }
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar4 = func_0x000181e83e90(*(longlong *)(param_1 + 0x20),0);
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (lVar4 == **(longlong **)(TI_SparkTeclas + 0xb8)) {
      return false;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      if (lVar4 == LIT_"'Validate'") {
        return true;
      }
      if (((lVar4 != 0) && (LIT_"'Validate'" != 0)) &&
         (*(int *)(lVar4 + 0x10) == *(int *)(LIT_"'Validate'" + 0x10))) {
        lVar10 = LIT_"'Validate'" + 0x14;
        lVar9 = (longlong)*(int *)(lVar4 + 0x10) * 2;
        lVar4 = lVar4 + 0x14;
        if (lVar4 != lVar10) {
          lVar5 = func_0x000181818560(0,0,lVar9,0);
          uVar6 = func_0x0001803df910(lVar9,0);
          uVar7 = func_0x0001803df910(uVar6,0);
          if (7 < uVar7) {
            lVar9 = func_0x0001818f3df0(uVar6,8,0);
            uVar7 = func_0x0001803df910(lVar9,0);
            uVar8 = func_0x0001803df910(lVar5,0);
            if (uVar8 < uVar7) {
              do {
                cVar3 = func_0x00018085d700(*(undefined8 *)(lVar5 + lVar4),
                                            *(undefined8 *)(lVar5 + lVar10),0);
                if (cVar3 != '\0') {
                  return false;
                }
                lVar5 = func_0x000180b10e20(lVar5,8);
                uVar7 = func_0x0001803df910(lVar9,0);
                uVar8 = func_0x0001803df910(lVar5,0);
              } while (uVar8 < uVar7);
            }
            return *(longlong *)(lVar9 + lVar4) == *(longlong *)(lVar9 + lVar10);
          }
          uVar7 = func_0x0001803df910(uVar6,0);
          uVar8 = func_0x0001803df910(lVar5,0);
          if (uVar8 < uVar7) {
            do {
              if (*(char *)(lVar5 + lVar4) != *(char *)(lVar5 + lVar10)) {
                return false;
              }
              lVar5 = func_0x000180b10e20(lVar5,1,0);
              uVar7 = func_0x0001803df910(uVar6,0);
              uVar8 = func_0x0001803df910(lVar5,0);
            } while (uVar8 < uVar7);
          }
        }
        return true;
      }
      return false;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}

