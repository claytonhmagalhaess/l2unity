// ProductSlot__AssignProduct__1806f9220 @ 0x1806f9220

void ProductSlot__AssignProduct__1806f9220(longlong *param_1,longlong param_2)

{
  param_1[0x17] = param_2;
  func_0x000180314690(param_1 + 0x17);
  if (param_1[0x18] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001806f925f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x218))(param_1,param_1[0x18],*(undefined8 *)(*param_1 + 0x220));
    return;
  }
  return;
}

