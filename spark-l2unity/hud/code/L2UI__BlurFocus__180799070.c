// L2UI__BlurFocus__180799070 @ 0x180799070

void L2UI__BlurFocus__180799070(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = **(longlong **)(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000180799085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x278))(*(longlong **)(param_1 + 0x30),*(undefined8 *)(lVar1 + 0x280));
    return;
  }
  return;
}

