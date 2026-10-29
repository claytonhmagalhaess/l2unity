// SparkDropWindow__Mostra__18071b290 @ 0x18071b290

void SparkDropWindow__Mostra__18071b290(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  
  if (cRam00000001834b41e0 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkDropWindow.Item>.AddRange);
    FUN_180315380(MR_System.Collections.Generic.List<SparkDropWindow.Item>.Clear);
    FUN_180315380(LIT_"'Drop list'");
    cRam00000001834b41e0 = '\x01';
  }
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  lVar4 = param_1[0x1d];
  *(int *)(param_1 + 0x1c) = (int)param_1[0x18];
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    if (param_1[0x1d] != 0) {
      func_0x000180beecb0(param_1[0x1d],param_1[0x1a],MR_System.Collections.Generic.List<SparkDropWindow.Item>.AddRange);
      lVar4 = param_1[0x1e];
      if (lVar4 != 0) {
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        *(undefined4 *)(lVar4 + 0x18) = 0;
        if (param_1[0x1e] != 0) {
          func_0x000180beecb0(param_1[0x1e],param_1[0x1b],MR_System.Collections.Generic.List<SparkDropWindow.Item>.AddRange);
          plVar1 = (longlong *)param_1[0x12];
          cVar3 = func_0x000181707e50(param_1[0x19],0);
          lVar4 = LIT_"'Drop list'";
          if (cVar3 == '\0') {
            lVar4 = param_1[0x19];
          }
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))(plVar1,lVar4,*(undefined8 *)(*plVar1 + 0xe50));
            if ((char)param_1[7] != '\0') {
              (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
            }
            (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
            lVar4 = param_1[0x15];
            if (lVar4 != 0) {
              (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),0,*(undefined8 *)(lVar4 + 0x28));
              return;
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

