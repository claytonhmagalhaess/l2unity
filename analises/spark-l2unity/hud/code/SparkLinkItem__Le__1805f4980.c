// SparkLinkItem__Le__1805f4980 @ 0x1805f4980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
SparkLinkItem__Le__1805f4980
          (longlong param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5
          )

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStackX_8 [32];
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined6 uStack_2e;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined6 uStack_1e;
  
  uStack_20 = (undefined2)unaff_R14;
  uStack_1e = (undefined6)((ulonglong)unaff_R14 >> 0x10);
  uStack_28 = (undefined2)unaff_R15;
  uStack_26 = (undefined6)((ulonglong)unaff_R15 >> 0x10);
  if (cRam00000001834b3b4c == '\0') {
    puStack_50 = &UNK_1805f49ad;
    FUN_180315380(LIT_"'ID='");
    cRam00000001834b3b4c = '\x01';
  }
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  if (param_1 != 0) {
    puStack_50 = &UNK_1805f49e0;
    cVar3 = System_String__StartsWith(param_1,LIT_"'ID='",0);
    if (cVar3 != '\0') {
      if (LIT_"'ID='" != 0) {
        puStack_50 = &UNK_1805f4a06;
        lVar4 = func_0x00018170c060(param_1,*(undefined4 *)(LIT_"'ID='" + 0x10),0);
        if (lVar4 != 0) {
          puStack_50 = &UNK_1805f4a22;
          lVar4 = System_String__Split(lVar4,0x2c,0,0);
          if (lVar4 != 0) {
            if ((*(int *)(lVar4 + 0x18) != 4) && (*(int *)(lVar4 + 0x18) != 5)) {
              return 0;
            }
            if (1 < *(uint *)(lVar4 + 0x18)) {
              puStack_50 = &UNK_1805f4a57;
              cVar3 = System_Int32__TryParse(*(undefined8 *)(lVar4 + 0x28),param_2,0);
              if (cVar3 == '\0') {
                return 0;
              }
              if (*param_2 < 1) {
                return 0;
              }
              if (2 < *(uint *)(lVar4 + 0x18)) {
                puStack_50 = &UNK_1805f4a75;
                cVar3 = System_Int32__TryParse(*(undefined8 *)(lVar4 + 0x30),param_3,0);
                if (cVar3 == '\0') {
                  return 0;
                }
                if (3 < *(uint *)(lVar4 + 0x18)) {
                  puStack_50 = &UNK_1805f4a8e;
                  cVar3 = System_Int32__TryParse(*(undefined8 *)(lVar4 + 0x38),param_4,0);
                  if (cVar3 == '\0') {
                    return 0;
                  }
                  if (*(uint *)(lVar4 + 0x18) == 4) {
                    return 1;
                  }
                  if (4 < *(uint *)(lVar4 + 0x18)) {
                    lVar4 = *(longlong *)(lVar4 + 0x40);
                    if (cRam00000001834b95fa == '\0') {
                      FUN_180315380(TI_System.Number,param_5,0);
                      cRam00000001834b95fa = '\x01';
                    }
                    if (lVar4 == 0) {
                      *param_5 = 0;
                      return 0;
                    }
                    if (DAT_1834b80b8 == '\0') {
                      FUN_180315380(MR_System.ReadOnlySpan<char>..ctor);
                      DAT_1834b80b8 = '\x01';
                    }
                    uStack_a0 = (ulonglong)(uint)uStack_a0;
                    uVar5 = func_0x000181706cc0(lVar4,0);
                    uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(lVar4 + 0x10));
                    uVar2 = uStack_a0;
                    uStack_a8 = uVar5;
                    uVar6 = System_Globalization_NumberFormatInfo__get_CurrentInfo(0);
                    if (*(int *)(TI_System.Number + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    if (cRam00000001834b9686 == '\0') {
                      FUN_180315380(TI_System.Number);
                      cRam00000001834b9686 = '\x01';
                    }
                    uStack_38 = 0;
                    uStack_30 = 0;
                    auStackX_8[0] = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_58 = 0;
                    puStack_50 = (undefined *)0x0;
                    uStack_48 = 0;
                    uStack_40 = 0;
                    uStack_2e = 0;
                    uStack_28 = 0;
                    uStack_26 = 0;
                    uStack_20 = 0;
                    if (*(int *)(TI_System.Number + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uStack_a8 = uVar5;
                    uStack_a0 = uVar2;
                    uVar5 = System_Number__TryParseInt32IntegerStyle
                                      (&uStack_a8,7,uVar6,param_5,auStackX_8,0);
                    return uVar5;
                  }
                }
              }
            }
            puStack_50 = &UNK_1805f4ad5;
            FUN_1803155c0();
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return uVar5;
          }
        }
      }
      puStack_50 = &UNK_1805f4adb;
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
  }
  return 0;
}

