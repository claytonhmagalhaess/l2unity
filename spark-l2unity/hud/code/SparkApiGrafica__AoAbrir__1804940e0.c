// SparkApiGrafica__AoAbrir__1804940e0 @ 0x1804940e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * SparkApiGrafica__AoAbrir__1804940e0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 unaff_RDI;
  longlong *plStackX_8;
  
  if (cRam00000001834b3267 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkApiGrafica.Conferente>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(LIT_"'SparkApiGrafica'");
    cRam00000001834b3267 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar7 = (longlong *)func_0x000180a870f0(0);
  if ((char)plVar7 == '\0') {
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = SparkApiGrafica__get_ArquivoTeste__1804955e0(0);
    plVar7 = (longlong *)System_IO_File__Exists(uVar8,0);
    if ((char)plVar7 != '\0') {
      lVar9 = func_0x000180315580(TI_UnityEngine.GameObject);
      UnityEngine_GameObject___ctor(lVar9,LIT_"'SparkApiGrafica'",0);
      if (lVar9 == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        plVar7 = (longlong *)(*pcVar3)();
        return plVar7;
      }
      UnityEngine_Object__set_hideFlags(lVar9,1,0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Object__DontDestroyOnLoad(lVar9,0);
      lVar1 = MR_UnityEngine.GameObject.AddComponent<SparkApiGrafica.Conferente>;
      if (*(longlong *)(MR_UnityEngine.GameObject.AddComponent<SparkApiGrafica.Conferente> + 0x38) == 0) {
        FUN_180312fc0(MR_UnityEngine.GameObject.AddComponent<SparkApiGrafica.Conferente>);
      }
      uVar8 = **(undefined8 **)(lVar1 + 0x38);
      if (*(int *)(_DAT_1834c6300 + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar8 = System_Type__GetTypeFromHandle(uVar8,0);
      plVar7 = (longlong *)UnityEngine_GameObject__AddComponent(lVar9,uVar8,0);
      lVar9 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_180312f40(lVar9);
      }
      if (plVar7 != (longlong *)0x0) {
        lVar1 = *plVar7;
        cVar4 = FUN_18035e540(lVar9,lVar1);
        if (cVar4 != '\0') {
          return plVar7;
        }
        if ((*(byte *)(lVar1 + 0x136) & 0x10) != 0) {
          if (((((*(byte *)(lVar9 + 0x118) & 0x20) != 0) || (*(char *)(lVar9 + 0x2a) == '\x13')) ||
              (*(char *)(lVar9 + 0x2a) == '\x1e')) &&
             ((*(longlong *)(lVar9 + 0x70) != 0 &&
              (lVar1 = *(longlong *)(*(longlong *)(lVar9 + 0x70) + 0x28), lVar1 != 0)))) {
            plStackX_8 = (longlong *)FUN_18032cc10(plVar7,lVar1);
            if (plStackX_8 != (longlong *)0x0) {
              return plVar7;
            }
            puVar2 = *(undefined8 **)plVar7[2];
            iVar5 = (*(code *)*puVar2)((undefined8 *)plVar7[2],lVar1,&plStackX_8,puVar2,unaff_RDI);
            if (-1 < iVar5) {
              cVar4 = FUN_180328a70(plVar7,lVar1,plStackX_8);
              if (cVar4 == '\0') {
                (**(code **)(*plStackX_8 + 0x10))();
                plStackX_8 = (longlong *)FUN_18032cc10(plVar7,lVar1);
              }
              if (plStackX_8 != (longlong *)0x0) {
                return plVar7;
              }
            }
          }
          plVar6 = (longlong *)0x0;
          if (lVar9 == _DAT_1834c6230) {
            plVar6 = plVar7;
          }
          return plVar6;
        }
      }
      return (longlong *)0x0;
    }
  }
  return plVar7;
}

