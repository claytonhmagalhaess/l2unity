// LoginCameraManager__SelectClassCamera__1805748c0 @ 0x1805748c0

undefined8
LoginCameraManager__SelectClassCamera__1805748c0(longlong param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lStackX_8;
  
  if (cRam00000001834b390a == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.TryGetValue);
    cRam00000001834b390a = '\x01';
  }
  lStackX_8 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x0001805749a6;
  cVar2 = FUN_1812698d0(*(longlong *)(param_1 + 0x28),param_2,&lStackX_8,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.TryGetValue);
  if (cVar2 == '\0') {
    return 0;
  }
  if (param_3 == 0) {
    if (lStackX_8 == 0) goto code_r0x0001805749a6;
    lVar3 = UnityEngine_Component__get_transform(lStackX_8,0);
    if (lVar3 == 0) goto code_r0x0001805749a6;
    uVar4 = 0;
  }
  else {
    if (lStackX_8 == 0) goto code_r0x0001805749a6;
    lVar3 = UnityEngine_Component__get_transform(lStackX_8,0);
    if (lVar3 == 0) goto code_r0x0001805749a6;
    uVar4 = 1;
  }
  lVar3 = UnityEngine_Transform__GetChild(lVar3,uVar4,0);
  if (lVar3 != 0) {
    uVar4 = FUN_180997040(lVar3,MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>);
    return uVar4;
  }
code_r0x0001805749a6:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

