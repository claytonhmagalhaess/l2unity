// SparkLoja__Abre__1804dcec0 @ 0x1804dcec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLoja__Abre__1804dcec0
               (undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
               undefined8 param_5,longlong param_6,longlong param_7,longlong param_8)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b34b8 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<int,int>);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.AddRange);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Clear);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkLoja);
    FUN_180315380(LIT_"''");
    cRam00000001834b34b8 = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b354c == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b354c = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(undefined4 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x38) = param_1;
  if (cRam00000001834b354d == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b354d = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660(TI_SparkLoja);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x3c) = param_2;
  if (cRam00000001834b31bd == '\0') {
    FUN_180315380(TI_WorldSpawner);
    cRam00000001834b31bd = '\x01';
  }
  uVar5 = **(undefined8 **)(TI_WorldSpawner + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if (cVar3 == '\0') {
    lVar4 = 0;
  }
  else {
    if (cRam00000001834b31bd == '\0') {
      FUN_180315380(TI_WorldSpawner);
      cRam00000001834b31bd = '\x01';
    }
    if (**(longlong **)(TI_WorldSpawner + 0xb8) == 0) goto code_r0x0001804dd3d1;
    lVar4 = WorldSpawner__Busca(**(longlong **)(TI_WorldSpawner + 0xb8),param_2,0);
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
  uVar5 = LIT_"''";
  if (cVar3 != '\0') {
    if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x30) == 0)) goto code_r0x0001804dd3d1;
    uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x18);
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b354e == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b354e = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(undefined8 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x40) = uVar5;
  func_0x000180314690(*(longlong *)(TI_SparkLoja + 0xb8) + 0x40,uVar5);
  if (cRam00000001834b354f == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b354f = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660(TI_SparkLoja);
  }
  *(undefined1 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x48) = param_3;
  if (cRam00000001834b3550 == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b3550 = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660(TI_SparkLoja);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x4c) = param_4;
  lVar4 = *(longlong *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x18);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
    }
    lVar4 = *(longlong *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x18);
    if (lVar4 != 0) {
      func_0x0001816458c0(lVar4,param_5,MR_System.Collections.Generic.List<ItemInstance>.AddRange);
      lVar4 = *(longlong *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x20);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        *(undefined4 *)(lVar4 + 0x18) = 0;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
        }
        if (param_6 != 0) {
          if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
            func_0x000180315660(TI_SparkLoja);
          }
          lVar4 = *(longlong *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x20);
          if (lVar4 == 0) goto code_r0x0001804dd3d1;
          func_0x0001816458c0(lVar4,param_6,MR_System.Collections.Generic.List<ItemInstance>.AddRange);
        }
        if (param_7 == 0) {
          param_7 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,int>);
          FUN_1811e4340(param_7,MR_System.Collections.Generic.Dictionary<int,int>..ctor);
        }
        if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
          func_0x000180315660(TI_SparkLoja);
        }
        *(longlong *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x28) = param_7;
        func_0x000180314690(*(longlong *)(TI_SparkLoja + 0xb8) + 0x28,param_7);
        if (param_8 == 0) {
          param_8 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,int>);
          FUN_1811e4340(param_8,MR_System.Collections.Generic.Dictionary<int,int>..ctor);
        }
        if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
          func_0x000180315660(TI_SparkLoja);
        }
        *(longlong *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x30) = param_8;
        func_0x000180314690(*(longlong *)(TI_SparkLoja + 0xb8) + 0x30,param_8);
        if (cRam00000001834b3551 == '\0') {
          FUN_180315380(TI_SparkLoja);
          cRam00000001834b3551 = '\x01';
        }
        if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
          func_0x000180315660(TI_SparkLoja);
        }
        *(undefined1 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x50) = 1;
        return;
      }
    }
  }
code_r0x0001804dd3d1:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

