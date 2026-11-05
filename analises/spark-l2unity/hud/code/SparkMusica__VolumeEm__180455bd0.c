// SparkMusica__VolumeEm__180455bd0 @ 0x180455bd0

longlong SparkMusica__VolumeEm__180455bd0
                   (longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  
  fVar7 = (float)param_2;
  if (cRam00000001834b3004 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkMusica.Volume>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMusica.Volume>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMusica.Volume>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMusica.Volume>.GetEnumerator);
    FUN_180315380(TI_SparkMusica);
    cRam00000001834b3004 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_1803155d0();
code_r0x000180455e0f:
    FUN_1803155c0();
code_r0x000180455e15:
    FUN_1803155c0();
code_r0x000180455e1a:
    FUN_1803155c0();
code_r0x000180455e1f:
    FUN_1803155c0();
code_r0x000180455e24:
    FUN_1803155c0();
code_r0x000180455e29:
    FUN_1803155c0();
code_r0x000180455e2e:
    FUN_1803155d0();
  }
  else {
    FUN_180bada40(&uStack_80,*(longlong *)(param_1 + 0x28),MR_System.Collections.Generic.List<SparkMusica.Volume>.GetEnumerator);
    uStack_68 = (undefined4)uStack_80;
    uStack_64 = uStack_80._4_4_;
    uStack_60 = (undefined4)uStack_78;
    uStack_5c = uStack_78._4_4_;
    lStack_58 = lStack_70;
    uStack_80 = 0;
    lVar6 = 0;
    uStack_78 = &uStack_68;
    while( true ) {
      cVar5 = FUN_1812fa7e0(&uStack_68,MR_System.Collections.Generic.List<SparkMusica.Volume>.MoveNext);
      lVar4 = lStack_58;
      if (cVar5 == '\0') {
        func_0x0001803dadf0(&uStack_68,MR_System.Collections.Generic.List<SparkMusica.Volume>.Dispose);
        return lVar6;
      }
      if (lStack_58 == 0) break;
      lVar1 = *(longlong *)(lStack_58 + 0x18);
      if (lVar1 == 0) goto code_r0x000180455e2e;
      if (*(int *)(lVar1 + 0x18) == 0) goto code_r0x000180455e0f;
      if (*(float *)(lVar1 + 0x20) <= fVar7) {
        if (*(uint *)(lVar1 + 0x18) < 2) goto code_r0x000180455e15;
        if (*(float *)(lVar1 + 0x24) <= param_3) {
          if (*(uint *)(lVar1 + 0x18) < 3) goto code_r0x000180455e1a;
          if (*(float *)(lVar1 + 0x28) <= param_4) {
            if (*(uint *)(lVar1 + 0x18) < 4) goto code_r0x000180455e1f;
            if (fVar7 < *(float *)(lVar1 + 0x2c) || fVar7 == *(float *)(lVar1 + 0x2c)) {
              if (*(uint *)(lVar1 + 0x18) < 5) goto code_r0x000180455e24;
              if (param_3 < *(float *)(lVar1 + 0x30) || param_3 == *(float *)(lVar1 + 0x30)) {
                if (*(uint *)(lVar1 + 0x18) < 6) goto code_r0x000180455e29;
                if ((param_4 < *(float *)(lVar1 + 0x34) || param_4 == *(float *)(lVar1 + 0x34)) &&
                   ((lVar6 == 0 || (*(float *)(lStack_58 + 0x28) < *(float *)(lVar6 + 0x28))))) {
                  uVar2 = *(undefined8 *)(lStack_58 + 0x20);
                  if (*(int *)(TI_SparkMusica + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar5 = SparkMusica__Dentro__1804547c0(uVar2,param_2,param_3,param_4,0);
                  if (cVar5 != '\0') {
                    lVar6 = lVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  lVar6 = (*pcVar3)();
  return lVar6;
}

