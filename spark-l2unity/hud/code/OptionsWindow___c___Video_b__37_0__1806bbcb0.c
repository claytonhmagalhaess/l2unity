// OptionsWindow___c___Video_b__37_0__1806bbcb0 @ 0x1806bbcb0

void OptionsWindow___c___Video_b__37_0__1806bbcb0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStackX_14;
  undefined8 uStackX_18;
  
  uStackX_18._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  if ((int)param_3 != (int)param_2) {
    uStackX_18 = param_3;
    func_0x00018189b890(&uStackX_18,param_2,0);
    return;
  }
  uStackX_14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStackX_18 = CONCAT44(uStackX_18._4_4_,uStackX_18._4_4_);
  func_0x00018189b890(&uStackX_18,uStackX_14,0);
  return;
}

