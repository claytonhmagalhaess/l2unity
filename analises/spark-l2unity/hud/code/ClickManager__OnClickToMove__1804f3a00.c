// ClickManager__OnClickToMove__1804f3a00 @ 0x1804f3a00

void ClickManager__OnClickToMove__1804f3a00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 auStack_58 [56];
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puVar6 = (undefined8 *)UnityEngine_Input__get_mousePosition(&uStack_78,0);
  if (lVar3 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_88 = *puVar6;
  uStack_80 = *(undefined4 *)(puVar6 + 1);
  puVar7 = (undefined4 *)UnityEngine_Camera__ScreenPointToRay(auStack_58,lVar3,&uStack_88,0);
  uStack_78 = *puVar7;
  uStack_74 = puVar7[1];
  uStack_70 = puVar7[2];
  uStack_6c = puVar7[3];
  uStack_68 = *(undefined8 *)(puVar7 + 4);
  cVar5 = ClickManager__DestinoNadando__1804f2750(param_1,&uStack_78,&uStack_98,&uStack_a8,0);
  if (cVar5 == '\0') {
    puVar6 = (undefined8 *)func_0x0001824d9960(&uStack_78,param_2,0);
    uVar1 = *puVar6;
    uVar2 = *(undefined4 *)(puVar6 + 1);
    puVar6 = (undefined8 *)func_0x0001824d9940(&uStack_78,param_2,0);
    uStack_88 = *puVar6;
    uStack_80 = *(undefined4 *)(puVar6 + 1);
    uStack_98 = uVar1;
    uStack_90 = uVar2;
    ClickManager__AndaPara__1804f2140(param_1,&uStack_98,&uStack_88,0);
    return;
  }
  uStack_88 = uStack_a8;
  uStack_80 = uStack_a0;
  uStack_a8 = uStack_98;
  uStack_a0 = uStack_90;
  ClickManager__AndaPara__1804f2140(param_1,&uStack_a8,&uStack_88,0);
  return;
}

