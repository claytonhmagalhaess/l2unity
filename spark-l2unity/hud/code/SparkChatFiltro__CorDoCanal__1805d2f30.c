// SparkChatFiltro__CorDoCanal__1805d2f30 @ 0x1805d2f30

undefined4 * SparkChatFiltro__CorDoCanal__1805d2f30(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (cRam00000001834b3b3a == '\0') {
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    cRam00000001834b3b3a = '\x01';
  }
  switch(param_2) {
  case 0:
    uStack_38 = 0x3f5cdcdd3f5cdcdd;
    uStack_30 = 0x3f8000003f5cdcdd;
    break;
  case 1:
    uStack_38 = 0x3ee4e4e53f800000;
    uStack_30 = 0x3f80000000000000;
    break;
  case 2:
    uStack_38 = 0x3f25a5a63f6aeaeb;
    uStack_30 = 0x3f8000003f75f5f6;
    break;
  case 3:
    uStack_38 = 0x3f80000000000000;
    uStack_30 = 0x3f80000000000000;
    break;
  case 4:
    uStack_38 = 0x3eeeeeef3efafafb;
    uStack_30 = 0x3f8000003f800000;
    break;
  case 5:
    uStack_38 = 0x3f8000003eeeeeef;
    uStack_30 = 0x3f8000003f19999a;
    break;
  case 6:
    uStack_38 = 0x3f0c8c8d3e808081;
    uStack_30 = 0x3f8000003f800000;
    break;
  case 7:
    uStack_38 = 0x3f800000;
    uStack_30 = 0x3f8000003f800000;
    break;
  case 8:
    uStack_38 = 0x3f78f8f93f800000;
    uStack_30 = 0x3f8000003f32b2b3;
    break;
  case 9:
  case 10:
    uStack_38 = 0x3f8000003f008081;
    uStack_30 = 0x3f8000003f800000;
    break;
  default:
    uStack_28._0_4_ = 0;
    uStack_28._4_4_ = 0;
    uStack_20._0_4_ = 0;
    uStack_20._4_4_ = 0;
    uStack_18 = 0;
    goto code_r0x0001805d3017;
  }
  uStack_18 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  func_0x000180cb7cb0(&uStack_28,&uStack_38,MR_System.Nullable<UnityEngine.Color>..ctor);
code_r0x0001805d3017:
  *param_1 = (undefined4)uStack_28;
  param_1[1] = uStack_28._4_4_;
  param_1[2] = (undefined4)uStack_20;
  param_1[3] = uStack_20._4_4_;
  param_1[4] = uStack_18;
  return param_1;
}

