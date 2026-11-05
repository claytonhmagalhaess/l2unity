// SparkSons__Toca__180586a60 @ 0x180586a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkSons__Toca__180586a60
               (longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
               undefined4 param_5,float param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined8 uStack_38;
  
  if (cRam00000001834b38dc == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkSons.Pendente>.Add);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkSons);
    cRam00000001834b38dc = '\x01';
  }
  uVar8 = SparkSons__Clipe__180584eb0(param_1,param_2,0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar7 = UnityEngine_Object__op_Equality(uVar8,0,0);
  if (cVar7 == '\0') {
    *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 8) =
         *(int *)(*(longlong *)(TI_SparkSons + 0xb8) + 8) + 1;
    if (0.01 < param_6) {
      lVar3 = *(longlong *)(param_1 + 0x60);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_88 = uVar8;
      func_0x000180314690(&uStack_88,uVar8);
      uStack_80 = *param_3;
      uStack_78._0_4_ = *(undefined4 *)(param_3 + 1);
      uStack_70 = CONCAT44(uStack_70._4_4_,param_5);
      uStack_78._4_4_ = param_4;
      fStack_3c = (float)FUN_182436650(0);
      lVar6 = MR_System.Collections.Generic.List<SparkSons.Pendente>.Add;
      fStack_3c = fStack_3c + param_6;
      uStack_68 = CONCAT71(uStack_68._1_7_,param_7);
      uStack_70 = CONCAT44(fStack_3c,(undefined4)uStack_70);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar2 = *(uint *)(lVar3 + 0x18);
          lVar9 = (longlong)(int)uVar2;
          if (*(uint *)(lVar4 + 0x18) <= uVar2) {
            uStack_58 = (undefined4)uStack_88;
            uStack_54 = uStack_88._4_4_;
            uStack_50 = (undefined4)uStack_80;
            uStack_4c = uStack_80._4_4_;
            uStack_48 = (undefined4)uStack_78;
            uStack_44 = uStack_78._4_4_;
            uStack_40 = (undefined4)uStack_70;
            uStack_38 = uStack_68;
            FUN_180bbd0f0(lVar3,&uStack_58,
                          *(undefined8 *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x70))
            ;
            return;
          }
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
            puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar9 * 0x28);
            *puVar1 = (undefined4)uStack_88;
            puVar1[1] = uStack_88._4_4_;
            puVar1[2] = (undefined4)uStack_80;
            puVar1[3] = uStack_80._4_4_;
            puVar1 = (undefined4 *)(lVar4 + 0x30 + lVar9 * 0x28);
            *puVar1 = (undefined4)uStack_78;
            puVar1[1] = uStack_78._4_4_;
            puVar1[2] = (undefined4)uStack_70;
            puVar1[3] = fStack_3c;
            *(undefined8 *)(lVar4 + 0x40 + lVar9 * 0x28) = uStack_68;
            func_0x000180314690(lVar4 + lVar9 * 0x28 + 0x20,0);
            return;
          }
          FUN_1803155c0();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uStack_98 = *param_3;
    uStack_90 = *(undefined4 *)(param_3 + 1);
    SparkSons__TocaAgora__180586020(param_1,uVar8,&uStack_98,param_4,param_5,param_7,0,0);
  }
  return;
}

