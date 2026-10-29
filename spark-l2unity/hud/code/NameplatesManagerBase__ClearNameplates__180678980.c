// NameplatesManagerBase__ClearNameplates__180678980 @ 0x180678980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerBase__ClearNameplates__180678980(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uStackX_8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  if (cRam00000001834b3e1b == '\0') {
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryGetValue);
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.get_Keys);
    FUN_180315380(MR_System.Linq.Enumerable.ToList<int>);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<int>.GetEnumerator);
    cRam00000001834b3e1b = '\x01';
  }
  uStackX_8 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar2 = func_0x000181138220(*(longlong *)(param_1 + 0x30),MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.get_Keys);
    lVar5 = FUN_1809c8500(uVar2,MR_System.Linq.Enumerable.ToList<int>);
    if (lVar5 != 0) {
      FUN_180be3fd0(&uStack_40,lVar5,MR_System.Collections.Generic.List<int>.GetEnumerator);
      uStack_28 = (undefined4)uStack_40;
      uStack_24 = uStack_40._4_4_;
      uStack_20 = (undefined4)uStack_38;
      uStack_1c = uStack_38._4_4_;
      uStack_18 = uStack_30;
      uStack_40 = 0;
      uStack_38 = &uStack_28;
      while( true ) {
        cVar4 = FUN_1812f11f0(&uStack_28,MR_System.Collections.Generic.List<int>.MoveNext);
        uVar3 = uStack_18;
        if (cVar4 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<int>.Dispose);
          return;
        }
        if (*(longlong *)(param_1 + 0x30) == 0) break;
        cVar4 = FUN_18113d920(*(longlong *)(param_1 + 0x30),uStack_18 & 0xffffffff,&uStackX_8,
                              MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryGetValue);
        if (cVar4 != '\0') {
          NameplatesManagerBase__RemoveNameplate__180679590(param_1,uVar3 & 0xffffffff,0);
        }
      }
      FUN_1803155d0();
      FUN_180311490();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

