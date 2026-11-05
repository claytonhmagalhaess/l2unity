// SparkDetalhePersonagem__EstadoDe__180497180 @ 0x180497180

longlong SparkDetalhePersonagem__EstadoDe__180497180(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lStackX_8;
  
  if (cRam00000001834b326d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.set_Item);
    FUN_180315380(TI_SparkDetalhePersonagem.Estado);
    cRam00000001834b326d = '\x01';
  }
  lStackX_8 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    cVar2 = FUN_1812698d0(*(longlong *)(param_1 + 0x38),param_2,&lStackX_8,MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.TryGetValue);
    if (cVar2 == '\0') {
      lVar3 = func_0x000180315580(TI_SparkDetalhePersonagem.Estado);
      *(undefined1 *)(lVar3 + 0x10) = 1;
      *(undefined1 *)(lVar3 + 0x1c) = 1;
      func_0x0001803dadf0(lVar3,0);
      lStackX_8 = lVar3;
      if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x000180497249;
      FUN_18126c020(*(longlong *)(param_1 + 0x38),param_2,lVar3,MR_System.Collections.Generic.Dictionary<Entity,SparkDetalhePersonagem.Estado>.set_Item);
    }
    return lStackX_8;
  }
code_r0x000180497249:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

