// Nameplate__TituloDeRaid__180678460 @ 0x180678460

/* WARNING: Removing unreachable block (ram,0x000181705e87) */
/* WARNING: Removing unreachable block (ram,0x000181705eda) */
/* WARNING: Removing unreachable block (ram,0x000181705eb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Nameplate__TituloDeRaid__180678460(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  
  if (cRam00000001834b3e0c == '\0') {
    FUN_180315380(LIT_"'Raid Fighter'");
    FUN_180315380(LIT_"'Raid Boss'");
    cRam00000001834b3e0c = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x10) - 2U < 2) {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x20);
      cVar4 = func_0x000181707e50(lVar2,0);
      if (cVar4 == '\0') {
        if (lVar2 != 0) {
          lVar7 = func_0x00018170d270(lVar2,0);
          cVar4 = System_String__Equals(lVar7,LIT_"'Raid Boss'",5,0);
          lVar2 = LIT_"'Raid Fighter'";
          if (cVar4 != '\0') {
            return true;
          }
          if (DAT_1834b899c == '\0') {
            FUN_180315380(TI_System.Globalization.CompareInfo,LIT_"'Raid Fighter'",5,0);
            FUN_180315380(TI_System.Globalization.CultureInfo);
            DAT_1834b899c = '\x01';
          }
          if (lVar7 == lVar2) {
            return true;
          }
          if ((lVar7 != 0) && (lVar2 != 0)) {
            iVar6 = *(int *)(lVar2 + 0x10);
            if (*(int *)(lVar7 + 0x10) == iVar6) {
              uVar1 = *(undefined4 *)(lVar7 + 0x10);
              if (*(int *)(TI_System.Globalization.CompareInfo + 0xe4) == 0) {
                func_0x000180315660();
              }
              iVar6 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                                (lVar7,0,uVar1,lVar2,0,iVar6,0);
              return iVar6 == 0;
            }
          }
          return false;
        }
        goto code_r0x00018067852b;
      }
    }
    return false;
  }
code_r0x00018067852b:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

