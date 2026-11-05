// SparkRadarWindow__DicionarioDoMundo__1806e8d30 @ 0x1806e8d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkRadarWindow__DicionarioDoMundo__1806e8d30(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  if (cRam00000001834b4096 == '\0') {
    FUN_180315380(TI_System.Collections.Concurrent.ConcurrentDictionary<int,Entity>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(TYPE_WorldSpawner);
    FUN_180315380(LIT_"'_objects'");
    cRam00000001834b4096 = '\x01';
  }
  uVar6 = *(undefined8 *)(param_1 + 0x188);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(param_2,uVar6,0);
  if (cVar4 == '\0') {
    *(undefined8 *)(param_1 + 0x188) = param_2;
    func_0x000180314690(param_1 + 0x188,param_2);
    *(undefined8 *)(param_1 + 400) = 0;
    func_0x000180314690(param_1 + 400,0);
    if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x38) == '\0') {
      if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(undefined1 *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x38) = 1;
      uVar6 = TYPE_WorldSpawner;
      if (*(int *)(_DAT_1834c6300 + 0xe4) == 0) {
        func_0x000180315660();
      }
      plVar5 = (longlong *)System_Type__GetTypeFromHandle(uVar6,0);
      if (plVar5 == (longlong *)0x0) goto code_r0x0001806e8fee;
      uVar6 = (**(code **)(*plVar5 + 0x698))
                        (plVar5,LIT_"'_objects'",0x24,*(undefined8 *)(*plVar5 + 0x6a0));
      *(undefined8 *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x30) = uVar6;
      func_0x000180314690(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x30,uVar6);
    }
    if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = System_Reflection_EventInfo__op_Inequality
                      (*(undefined8 *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x30),0,0);
    if (cVar4 != '\0') {
      if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
        func_0x000180315660(TI_SparkRadarWindow);
      }
      plVar5 = *(longlong **)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x30);
      if (plVar5 == (longlong *)0x0) {
code_r0x0001806e8fee:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      plVar5 = (longlong *)
               (**(code **)(*plVar5 + 0x2c8))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x2d0));
      if (plVar5 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 400) = 0;
        plVar7 = (longlong *)0x0;
      }
      else {
        bVar2 = true;
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_System.Collections.Concurrent.ConcurrentDictionary<int,Entity> + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar5 + 200) + -8 +
             (ulonglong)*(byte *)(TI_System.Collections.Concurrent.ConcurrentDictionary<int,Entity> + 0x130) * 8) != TI_System.Collections.Concurrent.ConcurrentDictionary<int,Entity>)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar7 = (longlong *)0x0;
        if (bVar3) {
          plVar7 = plVar5;
        }
        *(longlong **)(param_1 + 400) = plVar7;
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TI_System.Collections.Concurrent.ConcurrentDictionary<int,Entity> + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar5 + 200) + -8 +
             (ulonglong)*(byte *)(TI_System.Collections.Concurrent.ConcurrentDictionary<int,Entity> + 0x130) * 8) != TI_System.Collections.Concurrent.ConcurrentDictionary<int,Entity>)) {
          bVar2 = false;
        }
        plVar7 = (longlong *)0x0;
        if (bVar2) {
          plVar7 = plVar5;
        }
      }
      func_0x000180314690(param_1 + 400,plVar7);
    }
  }
  return *(undefined8 *)(param_1 + 400);
}

