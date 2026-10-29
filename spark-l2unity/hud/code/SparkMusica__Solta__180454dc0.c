// SparkMusica__Solta__180454dc0 @ 0x180454dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMusica__Solta__180454dc0(longlong param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2;
  if (cRam00000001834b3006 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3006 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= param_2) {
code_r0x000180454f10:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = *(longlong *)(lVar1 + 0x20 + lVar6 * 8);
    if (lVar1 != 0) {
      uVar4 = UnityEngine_AudioSource__get_clip(lVar1,0);
      lVar1 = *(longlong *)(param_1 + 0x30);
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) <= param_2) goto code_r0x000180454f10;
        lVar1 = *(longlong *)(lVar1 + 0x20 + lVar6 * 8);
        if (lVar1 != 0) {
          UnityEngine_AudioSource__Stop(lVar1,0);
          lVar1 = *(longlong *)(param_1 + 0x30);
          if (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x18) <= param_2) goto code_r0x000180454f10;
            lVar6 = *(longlong *)(lVar1 + 0x20 + lVar6 * 8);
            if (lVar6 != 0) {
              UnityEngine_AudioSource__set_clip(lVar6,0,0);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
              if (cVar3 == '\0') {
                return;
              }
              lVar6 = *(longlong *)(param_1 + 0x30);
              if (lVar6 != 0) {
                if (*(uint *)(lVar6 + 0x18) <= 1 - param_2) goto code_r0x000180454f10;
                lVar6 = *(longlong *)(lVar6 + 0x20 + (longlong)(int)(1 - param_2) * 8);
                if (lVar6 != 0) {
                  uVar5 = UnityEngine_AudioSource__get_clip(lVar6,0);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar3 = UnityEngine_Object__op_Inequality(uVar4,uVar5,0);
                  if (cVar3 == '\0') {
                    return;
                  }
                  UnityEngine_Resources__UnloadAsset(uVar4,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

