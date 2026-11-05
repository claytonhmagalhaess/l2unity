// CharSelectWindow__ShowWindow__18078e170 @ 0x18078e170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharSelectWindow__ShowWindow__18078e170(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  L2Window__ShowWindow__18079a6b0(param_1,0);
  if (cRam00000001834b3021 == '\0') {
    FUN_180315380(TI_GameManager);
    cRam00000001834b3021 = '\x01';
  }
  if (**(longlong **)(TI_GameManager + 0xb8) != 0) {
    if (*(char *)(**(longlong **)(TI_GameManager + 0xb8) + 0x28) != '\0') {
      if (cRam00000001834b44aa == '\0') {
        FUN_180315380(TI_CharSelectWindow.<AutoLogin>d__32);
        cRam00000001834b44aa = '\x01';
      }
      lVar2 = func_0x000180315580(TI_CharSelectWindow.<AutoLogin>d__32);
      Gear__UpdateWeaponType__1803dadf0(lVar2,0);
      *(undefined4 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x20) = param_1;
      func_0x000180314690(lVar2 + 0x20,param_1);
      UnityEngine_MonoBehaviour__StartCoroutine(param_1,lVar2,0);
    }
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

