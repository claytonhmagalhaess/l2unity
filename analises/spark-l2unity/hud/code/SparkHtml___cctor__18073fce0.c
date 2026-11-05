// SparkHtml___cctor__18073fce0 @ 0x18073fce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml___cctor__18073fce0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (cRam00000001834b4262 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.HashSet<string>);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(TI_System.StringComparer);
    FUN_180315380(LIT_"'input'");
    FUN_180315380(LIT_"'meta'");
    FUN_180315380(LIT_"'br'");
    FUN_180315380(LIT_"'br1'");
    FUN_180315380(LIT_"'img'");
    FUN_180315380(LIT_"'edit'");
    FUN_180315380(LIT_"'hr'");
    FUN_180315380(LIT_"'combobox'");
    cRam00000001834b4262 = '\x01';
  }
  if (*(int *)(TI_System.StringComparer + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b31cb == '\0') {
    FUN_180315380(TI_System.StringComparer);
    DAT_1834b31cb = '\x01';
  }
  if (*(int *)(TI_System.StringComparer + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = *(undefined8 *)(*(longlong *)(TI_System.StringComparer + 0xb8) + 0x18);
  lVar3 = func_0x000180315580(TI_System.Collections.Generic.HashSet<string>);
  FUN_1814e26b0(lVar3,uVar1,MR_System.Collections.Generic.HashSet<string>..ctor);
  if (lVar3 != 0) {
    func_0x0001814ce980(lVar3,LIT_"'br'",MR_System.Collections.Generic.HashSet<string>.Add);
    func_0x0001814ce980(lVar3,LIT_"'br1'",MR_System.Collections.Generic.HashSet<string>.Add);
    func_0x0001814ce980(lVar3,LIT_"'img'",MR_System.Collections.Generic.HashSet<string>.Add);
    func_0x0001814ce980(lVar3,LIT_"'edit'",MR_System.Collections.Generic.HashSet<string>.Add);
    func_0x0001814ce980(lVar3,LIT_"'combobox'",MR_System.Collections.Generic.HashSet<string>.Add);
    func_0x0001814ce980(lVar3,LIT_"'hr'",MR_System.Collections.Generic.HashSet<string>.Add);
    func_0x0001814ce980(lVar3,LIT_"'input'",MR_System.Collections.Generic.HashSet<string>.Add);
    func_0x0001814ce980(lVar3,LIT_"'meta'",MR_System.Collections.Generic.HashSet<string>.Add);
    **(longlong **)(TI_SparkHtml + 0xb8) = lVar3;
    func_0x000180314690(*(undefined8 *)(TI_SparkHtml + 0xb8),lVar3);
    lVar3 = *(longlong *)(TI_SparkHtml + 0xb8);
    *(undefined4 *)(lVar3 + 8) = 0x3f3851ec;
    *(undefined4 *)(lVar3 + 0xc) = 0x3f28f5c3;
    *(undefined4 *)(lVar3 + 0x10) = 0x3f0ccccd;
    *(undefined4 *)(lVar3 + 0x14) = 0x3f800000;
    lVar3 = *(longlong *)(TI_SparkHtml + 0xb8);
    *(undefined4 *)(lVar3 + 0x18) = 0x3f6147ae;
    *(undefined4 *)(lVar3 + 0x1c) = 0x3f570a3d;
    *(undefined4 *)(lVar3 + 0x20) = 0x3f3851ec;
    *(undefined4 *)(lVar3 + 0x24) = 0x3f800000;
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

