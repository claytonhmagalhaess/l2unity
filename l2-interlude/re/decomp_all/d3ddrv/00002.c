// ==== 100bbf14 FUN_100bbf14

void __fastcall FUN_100bbf14(void *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  
  puVar1 = *(uint **)((int)param_1 + 0x100);
  piVar2 = (int *)puVar1[2];
  uVar3 = *puVar1 & 0xfffff;
  FUN_100bb561(param_1,0x5a,(int *)puVar1[4],puVar1[3],piVar2,piVar2 + uVar3,piVar2 + uVar3 * 2,
               uVar3,0,0,0,0);
  return;
}


// ==== 100bbf4a FUN_100bbf4a

int __fastcall FUN_100bbf4a(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = param_1[0x40];
  if ((*(byte *)((int)param_1 + 0x6e) & 0x40) == 0) {
    if (*(int *)(iVar2 + 4) == 4) goto LAB_100bbfb0;
    pcVar7 = "clip must be performed from a float4 vector for ps_2_0 models";
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      piVar4 = *(int **)(iVar2 + 8);
      do {
        if (*(uint *)(*(int *)(param_1[5] + *piVar4 * 4) + 0x10) != uVar5) {
          pcVar7 = "cannot clip from a swizzled vector";
          goto LAB_100bc084;
        }
        uVar3 = *(uint *)(iVar2 + 4);
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < uVar3);
    }
    if (uVar3 == 3) {
LAB_100bbfb0:
      iVar1 = *(int *)(param_1[5] + **(int **)(iVar2 + 8) * 4);
      if (*(int *)(iVar1 + 4) == param_1[0x20]) {
        iVar2 = (**(code **)(*param_1 + 0x88))(iVar1,&local_c,&local_8);
        if (-1 < iVar2) {
LAB_100bc00d:
          uVar6 = local_8 | 0xfffffff8;
          uVar5 = local_8 & 0x18;
          uVar3 = local_c & 0x7ff;
          iVar2 = FUN_100bb393(param_1,0x41);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*param_1 + 0x7c))
                            (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                             &local_10);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*param_1 + 100))
                            ((uVar6 << 0x14 | uVar5) << 8 | uVar3,0xf0000,local_10);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*param_1 + 0x60))();
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = FUN_100b6514((int)param_1);
          if (iVar2 < 0) {
            return iVar2;
          }
          return 0;
        }
        pcVar7 = "internal error: unexpected input register type";
        iVar2 = 0;
        goto LAB_100bc08c;
      }
      if (*(int *)(iVar1 + 4) == param_1[0x22]) {
        local_8 = 0;
        local_c = *(uint *)(iVar1 + 0xc);
        goto LAB_100bc00d;
      }
      pcVar7 = "clip cannot be performed from a constant or literal";
    }
    else {
      pcVar7 = "clip must be performed from a float3 vector for ps_1_x models";
    }
  }
LAB_100bc084:
  iVar2 = *(int *)(iVar2 + 0x3c);
LAB_100bc08c:
  FUN_1006daa2((int)param_1,iVar2,0x1194,pcVar7);
  return -0x7fffbffb;
}


// ==== 100bc09f FUN_100bc09f

int __fastcall FUN_100bc09f(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14 [4];
  
  local_14[3] = 0;
  iVar5 = *(int *)((int)param_1 + 0x100);
  local_14[2] = 0;
  iVar2 = *(int *)((int)param_1 + 0x10);
  do {
    iVar3 = *(int *)(local_14[2] + *(int *)(iVar5 + 0x10));
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x14) + iVar3 * 4);
    if (((*(byte *)(*(int *)(iVar2 + *(int *)(iVar4 + 4) * 4) + 4) & 1) == 0) ||
       (*(int *)(iVar4 + 0x5c) != 0)) {
      piVar1 = local_14 + local_14[3];
      local_14[3] = local_14[3] + 1;
      *piVar1 = iVar3;
    }
    local_14[2] = local_14[2] + 4;
  } while ((uint)local_14[2] < 8);
  if (local_14[3] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_100bb561(param_1,0x25,local_14,local_14[3],*(int **)(iVar5 + 8),
                         (int *)(-(uint)(*(int *)((int)param_1 + 0x18c) != 0) & (int)param_1 + 400U)
                         ,(int *)(-(uint)(*(int *)((int)param_1 + 0x18c) != 0) &
                                 (int)param_1 + 0x1a0U),4,0,0,0,0);
  }
  return iVar5;
}


// ==== 100bc13d FUN_100bc13d

int __fastcall FUN_100bc13d(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = 0;
  if (param_1[0xd] == 0) {
    return -0x7fffbfff;
  }
  uVar1 = *(uint *)param_1[0x40] & 0xfff00000;
  uVar3 = *(uint *)param_1[0x40] & 0xfffff;
  if (uVar1 != 0x10f00000) {
    if (uVar1 == 0x73500000) {
      iVar2 = 3;
      goto LAB_100bc1a4;
    }
    if (uVar1 == 0x73600000) {
      iVar2 = 4;
      goto LAB_100bc1a4;
    }
    if (uVar1 != 0x73700000) {
      if (uVar1 == 0x73800000) {
        iVar2 = 2;
      }
      goto LAB_100bc1a4;
    }
  }
  iVar2 = 5;
LAB_100bc1a4:
  iVar2 = FUN_100bb393(param_1,iVar2 << 0x10 | 0x5e);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = (**(code **)(*param_1 + 0x6c))
                    (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),&local_8,0,
                     &local_18);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = (**(code **)(*param_1 + 0x70))
                    (*(undefined4 *)(param_1[0x40] + 0x10),*(undefined4 *)(param_1[0x40] + 0xc),
                     &local_14,local_18);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = (**(code **)(*param_1 + 100))(local_8,local_14,0);
  if (iVar2 < 0) {
    return iVar2;
  }
  if ((*(uint *)param_1[0x40] & 0xfff00000) == 0x10f00000) {
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x78))
                      (*(undefined4 *)(param_1[0x40] + 8),*(undefined4 *)(param_1[0x40] + 0xc),
                       local_14,&local_10);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
    if (iVar2 < 0) {
      return iVar2;
    }
    local_10 = local_10 ^ 0x1000000;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)(param_1[5] + *(int *)((uint *)param_1[0x40])[2] * 4),&local_8
                       ,&local_c);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x78))
                      (*(undefined4 *)(param_1[0x40] + 8),uVar3,local_14,&local_10);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)
                        (param_1[5] + *(int *)(uVar3 * 4 + *(int *)(param_1[0x40] + 8)) * 4),
                       &local_8,&local_c);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x78))
                      (*(int *)(param_1[0x40] + 8) + uVar3 * 4,uVar3,local_14,&local_10);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
  if (((-1 < iVar2) && (iVar2 = (**(code **)(*param_1 + 0x60))(), -1 < iVar2)) &&
     (iVar2 = FUN_100b6514((int)param_1), -1 < iVar2)) {
    iVar2 = 0;
  }
  return iVar2;
}


// ==== 100bc346 FUN_100bc346

int __fastcall FUN_100bc346(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  if (param_1[0xd] == 0) {
    iVar2 = -0x7fffbfff;
  }
  else if (*(int *)(param_1[0x40] + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4);
    local_8 = 0;
    do {
      iVar4 = *(int *)(param_1[5] +
                      *(int *)(*(int *)(param_1[0x40] + 8) +
                              *(int *)(param_1[0x40] + 0xc) * local_8 * 4) * 4);
      if ((((*(int *)(iVar4 + 4) != *(int *)(iVar2 + 4)) ||
           (*(int *)(iVar4 + 8) != *(int *)(iVar2 + 8))) ||
          (*(int *)(iVar4 + 0xc) != *(int *)(iVar2 + 0xc))) ||
         (*(int *)(iVar4 + 0x10) != *(int *)(iVar2 + 0x10))) {
        iVar3 = FUN_100bb393(param_1,1);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = *(int *)(param_1[5] + *(int *)(iVar4 + 0x14) * 4);
        iVar1 = *(int *)(iVar3 + 0x10);
        uVar5 = *(uint *)(iVar3 + 0xc) & 0x7ff;
        uVar6 = uVar5 | 0xb0001000;
        if (iVar1 != 0) {
          if (iVar1 == 1) {
            uVar6 = uVar5 | 0xb0551000;
          }
          else if (iVar1 == 2) {
            uVar6 = uVar5 | 0xb0aa1000;
          }
          else if (iVar1 == 3) {
            uVar6 = uVar5 | 0xb0ff1000;
          }
        }
        if (*(int *)(iVar4 + 0x18) == 0) {
          uVar6 = uVar6 | 0xd000000;
        }
        iVar4 = (**(code **)(*param_1 + 0x6c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                           &local_c,0,&local_14);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 0x70))
                          (*(undefined4 *)(param_1[0x40] + 0x10),
                           *(undefined4 *)(param_1[0x40] + 0xc),&local_10,local_14);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 100))(local_c,local_10,uVar6);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 0x74))
                          (*(undefined4 *)
                            (param_1[5] +
                            *(int *)(*(int *)(param_1[0x40] + 8) +
                                    *(int *)(param_1[0x40] + 0xc) * local_8 * 4) * 4),&local_c,
                           &local_18);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = *(int *)(param_1[0x40] + 0xc);
        iVar4 = (**(code **)(*param_1 + 0x78))
                          (*(int *)(param_1[0x40] + 8) + iVar4 * local_8 * 4,iVar4,local_10,
                           &local_1c);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 0x68))(local_c,local_1c,local_18);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 0x60))();
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = FUN_100b6514((int)param_1);
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < 2);
    iVar2 = 0;
  }
  return iVar2;
}


// ==== 100bc515 FUN_100bc515

int __fastcall FUN_100bc515(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = *(uint *)param_1[0x40] & 0xfff00000;
  iVar2 = 0;
  uVar3 = *(uint *)param_1[0x40] & 0xfffff;
  if (uVar1 != 0x73000000) {
    if (uVar1 == 0x73900000) {
      iVar2 = 3;
      goto LAB_100bc56b;
    }
    if (uVar1 == 0x73a00000) {
      iVar2 = 4;
      goto LAB_100bc56b;
    }
    if (uVar1 == 0x73b00000) {
      iVar2 = 5;
      goto LAB_100bc56b;
    }
    if (uVar1 != 0x73c00000) goto LAB_100bc56b;
  }
  iVar2 = 2;
LAB_100bc56b:
  iVar2 = FUN_100bb393(param_1,iVar2 << 0x10 | 0x29);
  if ((((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x74))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),&local_10
                           ,&local_8), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x78))
                         (*(undefined4 *)(param_1[0x40] + 8),uVar3,0xf0000,&local_c), -1 < iVar2))
     && (iVar2 = (**(code **)(*param_1 + 0x68))(local_10,local_c,local_8), -1 < iVar2)) {
    iVar2 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)
                        (param_1[5] + *(int *)(uVar3 * 4 + *(int *)(param_1[0x40] + 8)) * 4),
                       &local_10,&local_8);
    if (((-1 < iVar2) &&
        (iVar2 = (**(code **)(*param_1 + 0x78))
                           (*(int *)(param_1[0x40] + 8) + uVar3 * 4,uVar3,0xf0000,&local_c),
        -1 < iVar2)) &&
       ((iVar2 = (**(code **)(*param_1 + 0x68))(local_10,local_c,local_8), -1 < iVar2 &&
        ((iVar2 = (**(code **)(*param_1 + 0x60))(), -1 < iVar2 &&
         (iVar2 = FUN_100b6514((int)param_1), -1 < iVar2)))))) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ==== 100bc670 FUN_100bc670

int __thiscall FUN_100bc670(void *this,int param_1)

{
  int iVar1;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  iVar1 = FUN_100bb393(this,0x28);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)this + 0x74))
                      (*(undefined4 *)
                        (*(int *)((int)this + 0x14) +
                        **(int **)(*(int *)((int)this + 0x100) + 8) * 4),&local_c,&local_8);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*(int *)this + 0x68))
                        (-(uint)(param_1 != 0) & 0xd000000 | (uint)local_c,0xe40000,local_8);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*(int *)this + 0x60))();
        if (-1 < iVar1) {
          iVar1 = FUN_100b6514((int)this);
          if (-1 < iVar1) {
            iVar1 = 0;
          }
        }
      }
    }
  }
  return iVar1;
}


// ==== 100bc6ea FUN_100bc6ea

int __fastcall FUN_100bc6ea(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100bb393(param_1,0x2a);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x60))();
    if (-1 < iVar1) {
      iVar1 = FUN_100b6514((int)param_1);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


// ==== 100bc714 FUN_100bc714

int __fastcall FUN_100bc714(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100bb393(param_1,0x2b);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x60))();
    if (-1 < iVar1) {
      iVar1 = FUN_100b6514((int)param_1);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


// ==== 100bc73e FUN_100bc73e

int __fastcall FUN_100bc73e(int *param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar1 = FUN_100bb393(param_1,1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x6c))
                      (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),&local_8,
                       &local_1c,&local_18);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x70))
                        (*(undefined4 *)(param_1[0x40] + 0x10),*(undefined4 *)(param_1[0x40] + 0xc),
                         &local_c,local_18);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 100))(local_8,local_c,local_1c);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*param_1 + 0x74))
                            (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),
                             &local_8,&local_10);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*param_1 + 0x78))
                              (*(undefined4 *)(param_1[0x40] + 8),
                               *(undefined4 *)(param_1[0x40] + 0xc),local_c,&local_14);
            if (-1 < iVar1) {
              if ((local_8 & 0xb000000) == 0) {
                local_14 = local_14 | 0x1000000;
              }
              else {
                local_14 = local_14 | 0xc000000;
                local_8 = local_8 & 0xf4ffffff;
              }
              iVar1 = (**(code **)(*param_1 + 0x68))(local_8,local_14,local_10);
              if (-1 < iVar1) {
                iVar1 = (**(code **)(*param_1 + 0x60))();
                if (-1 < iVar1) {
                  iVar1 = FUN_100b6514((int)param_1);
                  if (-1 < iVar1) {
                    iVar1 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


// ==== 100bc84b FUN_100bc84b

int __fastcall FUN_100bc84b(void *param_1)

{
  int iVar1;
  uint uVar2;
  int local_c;
  uint local_8;
  
  uVar2 = **(uint **)((int)param_1 + 0x100) & 0xfffff;
  local_8 = 0;
  if (uVar2 != 0) {
    local_c = uVar2 << 2;
    do {
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x100) + 8);
      iVar1 = FUN_100bb561(param_1,0x20,
                           (int *)(*(int *)(*(int *)((int)param_1 + 0x100) + 0x10) + local_8 * 4),1,
                           (int *)(iVar1 + local_8 * 4),(int *)(local_c + iVar1),(int *)0x0,uVar2,0,
                           0,0,0);
      if (iVar1 < 0) {
        return iVar1;
      }
      local_8 = local_8 + 1;
      local_c = local_c + 4;
    } while (local_8 < uVar2);
  }
  return 0;
}


// ==== 100bc8bd FUN_100bc8bd

int __fastcall FUN_100bc8bd(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  uVar3 = *(uint *)param_1[0x40] & 0xfffff;
  uVar1 = (**(code **)(*param_1 + 0x5c))(0x12);
  iVar2 = FUN_100bb393(param_1,uVar1);
  if ((((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x6c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                           &local_8,&local_1c,&local_18), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x70))
                         (*(undefined4 *)(param_1[0x40] + 0x10),uVar3,&local_14,local_18),
      -1 < iVar2)) && (iVar2 = (**(code **)(*param_1 + 100))(local_8,local_14,local_1c), -1 < iVar2)
     ) {
    local_10 = 0;
    local_c = 0;
    do {
      piVar4 = (int *)(*(int *)(param_1[0x40] + 8) + local_c);
      iVar2 = (**(code **)(*param_1 + 0x74))
                        (*(undefined4 *)(param_1[5] + *piVar4 * 4),&local_8,&local_20);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*param_1 + 0x78))(piVar4,uVar3,local_14,&local_24);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_24,local_20);
      if (iVar2 < 0) {
        return iVar2;
      }
      local_10 = local_10 + 1;
      local_c = local_c + uVar3 * 4;
    } while (local_10 < 3);
    iVar2 = (**(code **)(*param_1 + 0x60))();
    if ((-1 < iVar2) && (iVar2 = FUN_100b6514((int)param_1), -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ==== 100bc9d8 FUN_100bc9d8

int __fastcall FUN_100bc9d8(int *param_1)

{
  int iVar1;
  uint uVar2;
  int local_18 [4];
  int *local_8;
  
  local_8 = (int *)((uint *)param_1[0x40])[4];
  uVar2 = *(uint *)param_1[0x40] & 0xfffff;
  if (param_1[0x22] != *(int *)(*(int *)(param_1[5] + *local_8 * 4) + 4)) {
    iVar1 = (**(code **)(*param_1 + 0x80))(param_1[0x3f],local_18,uVar2,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    local_8 = local_18;
  }
  iVar1 = FUN_100bb561(param_1,0x24,local_8,uVar2,*(int **)(param_1[0x40] + 8),(int *)0x0,(int *)0x0
                       ,uVar2,0,0,0,0);
  if (-1 < iVar1) {
    if ((local_8 == local_18) &&
       (iVar1 = FUN_100bb561(param_1,1,*(int **)(param_1[0x40] + 0x10),uVar2,local_18,(int *)0x0,
                             (int *)0x0,uVar2,0,0,0,0), iVar1 < 0)) {
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


// ==== 100bca7e FUN_100bca7e

int __fastcall FUN_100bca7e(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  uVar4 = *(uint *)param_1[0x40] & 0xfffff;
  uVar2 = (**(code **)(*param_1 + 0x5c))(4);
  iVar3 = FUN_100bb393(param_1,uVar2);
  if ((((-1 < iVar3) &&
       (iVar3 = (**(code **)(*param_1 + 0x6c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                           &local_c,&local_1c,&local_18), -1 < iVar3)) &&
      (iVar3 = (**(code **)(*param_1 + 0x70))
                         (*(undefined4 *)(param_1[0x40] + 0x10),uVar4,&local_10,local_18),
      -1 < iVar3)) && (iVar3 = (**(code **)(*param_1 + 100))(local_c,local_10,local_1c), -1 < iVar3)
     ) {
    local_8 = 0;
    do {
      piVar1 = (int *)(((uint *)param_1[0x40])[2] + local_8 * uVar4 * 4);
      if ((local_8 == 1) && ((*(uint *)param_1[0x40] & 0xfff00000) == 0x70400000)) {
        local_14 = 0x1000000;
      }
      else {
        local_14 = 0;
      }
      iVar3 = (**(code **)(*param_1 + 0x74))
                        (*(undefined4 *)(param_1[5] + *piVar1 * 4),&local_c,&local_20);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*param_1 + 0x78))(piVar1,uVar4,local_10,&local_24);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*param_1 + 0x68))(local_14 ^ local_c,local_24,local_20);
      if (iVar3 < 0) {
        return iVar3;
      }
      local_8 = local_8 + 1;
    } while (local_8 < 3);
    iVar3 = (**(code **)(*param_1 + 0x60))();
    if ((-1 < iVar3) && (iVar3 = FUN_100b6514((int)param_1), -1 < iVar3)) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


// ==== 100bcbbc FUN_100bcbbc

int __fastcall FUN_100bcbbc(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  uVar1 = *(uint *)param_1[0x40];
  uVar3 = uVar1 & 0xfffff;
  if (uVar1 == 0x70500003) {
    uVar4 = 0x18;
  }
  else if (uVar1 == 0x70600003) {
    uVar4 = 0x17;
  }
  else if (uVar1 == 0x70600004) {
    uVar4 = 0x15;
  }
  else if (uVar1 == 0x70700003) {
    uVar4 = 0x16;
  }
  else {
    uVar4 = local_1c;
    if (uVar1 == 0x70700004) {
      uVar4 = 0x14;
    }
  }
  iVar2 = FUN_100bb393(param_1,uVar4);
  if ((((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x6c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                           &local_8,&local_1c,&local_18), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x70))
                         (*(undefined4 *)(param_1[0x40] + 0x10),*(undefined4 *)(param_1[0x40] + 0xc)
                          ,&local_c,local_18), -1 < iVar2)) &&
     (iVar2 = (**(code **)(*param_1 + 100))(local_8,local_c,local_1c), -1 < iVar2)) {
    local_c = ((uVar3 != 3) - 1 & 0xfff80000) + 0xf0000;
    iVar2 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),&local_8,
                       &local_10);
    if (((-1 < iVar2) &&
        (iVar2 = (**(code **)(*param_1 + 0x78))
                           (*(undefined4 *)(param_1[0x40] + 8),uVar3,local_c,&local_14), -1 < iVar2)
        ) && (iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_14,local_10), -1 < iVar2)) {
      iVar2 = (**(code **)(*param_1 + 0x74))
                        (*(undefined4 *)
                          (param_1[5] + *(int *)(uVar3 * 4 + *(int *)(param_1[0x40] + 8)) * 4),
                         &local_8,&local_10);
      if (((-1 < iVar2) &&
          (iVar2 = (**(code **)(*param_1 + 0x78))
                             (*(int *)(param_1[0x40] + 8) + uVar3 * 4,uVar3,local_c,&local_14),
          -1 < iVar2)) &&
         ((iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_14,local_10), -1 < iVar2 &&
          ((iVar2 = (**(code **)(*param_1 + 0x60))(), -1 < iVar2 &&
           (iVar2 = FUN_100b6514((int)param_1), -1 < iVar2)))))) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


// ==== 100bcd6e FUN_100bcd6e

void __thiscall FUN_100bcd6e(void *this,int param_1,uint param_2)

{
  uint *this_00;
  int iVar1;
  uint uVar2;
  int *local_24 [4];
  uint local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  this_00 = *(uint **)((int)this + 0x100);
  local_14 = this_00[3];
  local_24[3] = (int *)this_00[4];
  uVar2 = *this_00 & 0xfffff;
  FUN_1006815e(this_00,0,(int *)local_24);
  FUN_1006815e(*(void **)((int)this + 0x100),1,(int *)(local_24 + 1));
  FUN_1006815e(*(void **)((int)this + 0x100),2,(int *)(local_24 + 2));
  local_10 = 0;
  if (param_2 != 0) {
    param_2 = 0;
    do {
      if (local_10 != 0) break;
      if ((local_24[param_2] != (int *)0x0) && (local_c = 0, uVar2 != 0)) {
        iVar1 = 0;
        local_8 = local_24[param_2];
        do {
          if ((*(byte *)(iVar1 + 3 + *(int *)(*(int *)((int)this + 0x14) + *local_8 * 4)) & 1) != 0)
          {
            local_10 = 1;
            break;
          }
          local_c = local_c + 1;
          local_8 = local_8 + 1;
          iVar1 = iVar1 + 0x80;
        } while (local_c < uVar2);
      }
      param_2 = param_2 + 1;
    } while (param_2 < 3);
  }
  FUN_100bb561(this,param_1,local_24[3],local_14,local_24[0],local_24[1],local_24[2],uVar2,0,0,0,
               local_10);
  return;
}


// ==== 100bce47 FUN_100bce47

int __thiscall
FUN_100bce47(void *this,int param_1,int *param_2,int *param_3,uint param_4,uint param_5,uint param_6
            )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  int local_34 [4];
  int local_24 [4];
  int *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  if (((param_5 < param_4) && (param_5 == 1)) &&
     (**(int **)(*(int *)((int)this + 0x100) + 8) == *param_3)) {
    iVar2 = FUN_100bcd6e(this,param_1,0);
  }
  else {
    iVar3 = *param_3 * 4;
    iVar2 = *param_2 * 4;
    if (((*(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar2) + 4) ==
          *(int *)(*(int *)(iVar3 + *(int *)((int)this + 0x14)) + 4)) &&
        (*(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar2) + 8) ==
         *(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar3) + 8))) &&
       (*(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar2) + 0xc) ==
        *(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar3) + 0xc))) {
      uVar6 = 0;
      bVar7 = false;
      if (param_4 != 0) {
        do {
          param_5 = 0;
          if (uVar6 != 0) {
            do {
              if (*(int *)(*(int *)(*(int *)((int)this + 0x14) + param_3[uVar6] * 4) + 0x10) ==
                  *(int *)(*(int *)(*(int *)((int)this + 0x14) + param_2[param_5] * 4) + 0x10))
              break;
              param_5 = param_5 + 1;
            } while (param_5 < uVar6);
            if (param_5 < uVar6) break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_4);
        bVar7 = uVar6 < param_4;
      }
      local_c = (uint)bVar7;
      if (local_c != 0) {
        uVar4 = 0;
        uVar6 = 0;
        if (param_4 != 0) {
          do {
            uVar1 = *(uint *)(*(int *)(*(int *)((int)this + 0x14) + param_2[uVar4] * 4) + 0x10);
            if (uVar6 <= uVar1) {
              uVar6 = uVar1 + 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < param_4);
        }
        iVar2 = (**(code **)(*(int *)this + 0x80))
                          (*(undefined4 *)((int)this + 0xfc),local_34,uVar6,0,0);
        uVar6 = 0;
        if (iVar2 < 0) {
          return iVar2;
        }
        if (param_4 != 0) {
          iVar2 = *(int *)((int)this + 0x14);
          do {
            local_24[uVar6] = local_34[*(int *)(*(int *)(iVar2 + param_2[uVar6] * 4) + 0x10)];
            uVar6 = uVar6 + 1;
          } while (uVar6 < param_4);
        }
        local_14 = param_2;
        param_2 = local_24;
      }
    }
    else {
      local_c = 0;
    }
    uVar6 = 0;
    if (param_4 != 0) {
      do {
        param_5 = 1;
        if (uVar6 + 1 < param_4) {
          piVar5 = param_3 + uVar6;
          local_10 = *(int *)(*(int *)(*(int *)((int)this + 0x14) + *piVar5 * 4) + 0x10);
          local_8 = uVar6 + 1;
          do {
            piVar5 = piVar5 + 1;
            if (*(int *)(*(int *)(*(int *)((int)this + 0x14) + *piVar5 * 4) + 0x10) != local_10)
            break;
            param_5 = param_5 + 1;
            local_8 = local_8 + 1;
          } while (local_8 < param_4);
        }
        iVar2 = FUN_100bb561(this,param_1,param_2 + uVar6,param_5,param_3 + uVar6,(int *)0x0,
                             (int *)0x0,param_5,param_6,param_6,param_6,0);
        if (iVar2 < 0) {
          return iVar2;
        }
        uVar6 = uVar6 + param_5;
      } while (uVar6 < param_4);
    }
    if ((local_c == 0) ||
       (iVar2 = FUN_100bb561(this,1,local_14,param_4,param_2,(int *)0x0,(int *)0x0,param_4,0,0,0,0),
       -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ==== 100bd046 FUN_100bd046

int __fastcall FUN_100bd046(int *param_1)

{
  int iVar1;
  int *local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_100bb393(param_1,0x26);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),&local_c,
                       &local_8);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x68))(local_c,0xe40000,local_8);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 0x60))();
        if (-1 < iVar1) {
          iVar1 = FUN_100b6514((int)param_1);
          if (-1 < iVar1) {
            iVar1 = 0;
          }
        }
      }
    }
  }
  return iVar1;
}


// ==== 100bd0b0 FUN_100bd0b0

int __fastcall FUN_100bd0b0(int *param_1)

{
  int iVar1;
  int *local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_100bb393(param_1,0x1b);
  if (-1 < iVar1) {
    local_8 = (int *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x68))(0xf0000800,0xe40000,0);
    if ((((-1 < iVar1) &&
         (iVar1 = (**(code **)(*param_1 + 0x74))
                            (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),
                             &local_8,&local_c), -1 < iVar1)) &&
        (iVar1 = (**(code **)(*param_1 + 0x68))(local_8,0xe40000,local_c), -1 < iVar1)) &&
       ((iVar1 = (**(code **)(*param_1 + 0x60))(), -1 < iVar1 &&
        (iVar1 = FUN_100b6514((int)param_1), -1 < iVar1)))) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


// ==== 100bd134 FUN_100bd134

int __fastcall FUN_100bd134(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  uint local_8;
  
  if (*(int *)((int)param_1 + 0x8c) ==
      *(int *)(*(int *)(*(int *)((int)param_1 + 0x14) +
                       **(int **)(*(int *)((int)param_1 + 0x100) + 0x10) * 4) + 4)) {
    iVar5 = FUN_100bcd6e(param_1,0x2e,0);
  }
  else {
    if ((*(byte *)((int)param_1 + 0x6e) & 0x10) == 0) {
      uVar1 = *(uint *)(*(int *)((int)param_1 + 0x100) + 0xc);
      local_8 = 0;
      if (uVar1 != 0) {
        piVar6 = *(int **)(*(int *)((int)param_1 + 0x100) + 0x10);
        iVar5 = *(int *)(*(int *)((int)param_1 + 0x100) + 8) - (int)piVar6;
        do {
          iVar2 = *(int *)(*(int *)((int)param_1 + 0x14) + *(int *)(iVar5 + (int)piVar6) * 4);
          iVar3 = *(int *)(*(int *)((int)param_1 + 0x14) + *piVar6 * 4);
          if ((((*(int *)(iVar3 + 4) != *(int *)(iVar2 + 4)) ||
               (*(int *)(iVar3 + 8) != *(int *)(iVar2 + 8))) ||
              (*(int *)(iVar3 + 0xc) != *(int *)(iVar2 + 0xc))) ||
             (((*(int *)(iVar3 + 0x10) != *(int *)(iVar2 + 0x10) ||
               (*(int *)(iVar3 + 0x3c) != *(int *)(iVar2 + 0x3c))) ||
              (((*(byte *)((int)param_1 + 0xcc) & 4) != 0 && (*(int *)(iVar3 + 0x60) != 0))))))
          break;
          local_8 = local_8 + 1;
          piVar6 = piVar6 + 1;
        } while (local_8 < uVar1);
      }
      if (local_8 == uVar1) {
        return 0;
      }
    }
    local_8 = 0;
    if (*(int *)(*(int *)((int)param_1 + 0x100) + 0xc) != 0) {
      do {
        puVar4 = *(uint **)(*(int *)((int)param_1 + 0x14) +
                           *(int *)(*(int *)(*(int *)((int)param_1 + 0x100) + 0x10) + local_8 * 4) *
                           4);
        if ((*puVar4 & 0xe000000) == 0) {
          *puVar4 = **(uint **)(*(int *)((int)param_1 + 0x14) +
                               *(int *)(*(int *)(*(int *)((int)param_1 + 0x100) + 8) + local_8 * 4)
                               * 4) & 0xe000000 | *puVar4;
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(uint *)(*(int *)((int)param_1 + 0x100) + 0xc));
    }
    iVar5 = *(int *)((int)param_1 + 0x100);
    iVar5 = FUN_100bb561(param_1,1,*(int **)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0xc),
                         *(int **)(iVar5 + 8),(int *)0x0,(int *)0x0,*(undefined4 *)(iVar5 + 0xc),0,0
                         ,0,0);
  }
  return iVar5;
}


// ==== 100bd26d FUN_100bd26d

void __fastcall FUN_100bd26d(void *param_1)

{
  FUN_100bcd6e(param_1,0x5b,0);
  return;
}


// ==== 100bd277 FUN_100bd277

void __fastcall FUN_100bd277(void *param_1)

{
  FUN_100bcd6e(param_1,0x5c,0);
  return;
}


// ==== 100bd281 FUN_100bd281

void __fastcall FUN_100bd281(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  FUN_100bce47(param_1,6,*(int **)(iVar1 + 0x10),*(int **)(iVar1 + 8),*(uint *)(iVar1 + 0xc),
               *(uint *)(iVar1 + 4),0);
  return;
}


// ==== 100bd29f FUN_100bd29f

void __fastcall FUN_100bd29f(void *param_1)

{
  FUN_100bcd6e(param_1,0x13,0);
  return;
}


// ==== 100bd2a9 FUN_100bd2a9

void __fastcall FUN_100bd2a9(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  FUN_100bce47(param_1,0xe,*(int **)(iVar1 + 0x10),*(int **)(iVar1 + 8),*(uint *)(iVar1 + 0xc),
               *(uint *)(iVar1 + 4),0);
  return;
}


// ==== 100bd2c7 FUN_100bd2c7

void __fastcall FUN_100bd2c7(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  FUN_100bce47(param_1,0xf,*(int **)(iVar1 + 0x10),*(int **)(iVar1 + 8),*(uint *)(iVar1 + 0xc),
               *(uint *)(iVar1 + 4),0);
  return;
}


// ==== 100bd2e5 FUN_100bd2e5

void __fastcall FUN_100bd2e5(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  FUN_100bce47(param_1,7,*(int **)(iVar1 + 0x10),*(int **)(iVar1 + 8),*(uint *)(iVar1 + 0xc),
               *(uint *)(iVar1 + 4),0);
  return;
}


// ==== 100bd303 FUN_100bd303

void __fastcall FUN_100bd303(void *param_1)

{
  FUN_100bcd6e(param_1,10,0);
  return;
}


// ==== 100bd30d FUN_100bd30d

void __fastcall FUN_100bd30d(void *param_1)

{
  FUN_100bcd6e(param_1,0xb,0);
  return;
}


// ==== 100bd317 FUN_100bd317

void __fastcall FUN_100bd317(void *param_1)

{
  FUN_100bcd6e(param_1,0xc,0);
  return;
}


// ==== 100bd321 FUN_100bd321

void __fastcall FUN_100bd321(void *param_1)

{
  FUN_100bcd6e(param_1,0xd,0);
  return;
}


// ==== 100bd32b FUN_100bd32b

void __fastcall FUN_100bd32b(void *param_1)

{
  FUN_100bcd6e(param_1,2,0);
  return;
}


// ==== 100bd335 FUN_100bd335

void __fastcall FUN_100bd335(void *param_1)

{
  FUN_100bcd6e(param_1,5,0);
  return;
}


// ==== 100bd33f FUN_100bd33f

void __fastcall FUN_100bd33f(void *param_1)

{
  FUN_100bcd6e(param_1,0x11,0);
  return;
}


// ==== 100bd349 FUN_100bd349

int __fastcall FUN_100bd349(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *local_c;
  int *local_8;
  
  uVar1 = *(uint *)param_1[0x40] & 0xfffff;
  local_c = param_1;
  local_8 = param_1;
  if (uVar1 == 1) {
    iVar2 = 5;
  }
  else if (uVar1 == 3) {
    iVar2 = 8;
  }
  else {
    if (uVar1 != 4) {
      iVar2 = (**(code **)(*param_1 + 0x80))(param_1[0x3f],&local_c,2,0,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = FUN_100bb561(param_1,5,(int *)&local_c,2,*(int **)(param_1[0x40] + 8),
                           *(int **)(param_1[0x40] + 8) + 2,(int *)0x0,2,0,0,0,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = FUN_100bb561(param_1,2,*(int **)(param_1[0x40] + 0x10),
                           *(undefined4 *)(param_1[0x40] + 0xc),(int *)&local_c,(int *)&local_8,
                           (int *)0x0,1,0,0,0,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      return 0;
    }
    iVar2 = 9;
  }
  iVar2 = FUN_100bcd6e(param_1,iVar2,0);
  return iVar2;
}


// ==== 100bd3fc FUN_100bd3fc

void __fastcall FUN_100bd3fc(void *param_1)

{
  FUN_100bcd6e(param_1,0x10,0);
  return;
}


// ==== 100bd406 FUN_100bd406

void __fastcall FUN_100bd406(void *param_1)

{
  FUN_100bcd6e(param_1,0x58,0);
  return;
}


// ==== 100bd410 FUN_100bd410

void __fastcall FUN_100bd410(void *param_1)

{
  FUN_100bcd6e(param_1,0x50,0);
  return;
}


// ==== 100bd41a FUN_100bd41a

void __fastcall FUN_100bd41a(void *param_1)

{
  FUN_100bcd6e(param_1,0x23,0);
  return;
}


// ==== 100bd424 FUN_100bd424

void __thiscall
FUN_100bd424(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (4 < param_4) {
    param_4 = 4;
  }
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  return;
}


// ==== 100bd46c FUN_100bd46c

undefined4 __thiscall FUN_100bd46c(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0x80004005;
  }
  else {
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *(undefined4 *)((int)this + 0xc) = param_1[3];
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    *(undefined4 *)((int)this + 0x18) = param_1[6];
    *(undefined4 *)((int)this + 0x1c) = param_1[7];
    *(undefined4 *)((int)this + 0x20) = param_1[8];
    *(undefined4 *)((int)this + 0x24) = param_1[9];
    *(undefined4 *)((int)this + 0x28) = param_1[10];
    *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
    *(undefined4 *)((int)this + 0x30) = param_1[0xc];
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 100bd4d1 FUN_100bd4d1

void __thiscall FUN_100bd4d1(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  do {
    do {
      iVar3 = param_2;
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + iVar3 * 4);
      param_2 = *(int *)(iVar2 + 0x38);
    } while (*(int *)(iVar2 + 0x38) != -1);
    *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
    *(int *)(iVar2 + 0x74) = param_1;
    if ((*(byte *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x10) + *(int *)(iVar2 + 4) * 4) + 4)
        & 0x10) == 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        *(int *)(*(int *)((int)this + 0x10) +
                (*(int *)(*(int *)((int)this + 0xc) + param_1 * 4) +
                *(int *)(*(int *)((int)this + 8) + param_1 * 4)) * 4) = iVar3;
      }
      piVar1 = (int *)(*(int *)((int)this + 8) + param_1 * 4);
      *piVar1 = *piVar1 + 1;
    }
    param_2 = *(int *)(iVar2 + 8);
  } while (*(int *)(iVar2 + 8) != -1);
  return;
}


// ==== 100bd546 FUN_100bd546

void __thiscall FUN_100bd546(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + param_2 * 4);
  if (((*(byte *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x10) + *(int *)(iVar2 + 4) * 4) + 4)
       & 0x20) == 0) && (*(int *)(iVar2 + 0x5c) != 0)) {
    if (*(int *)((int)this + 0x24) != 0) {
      *(int *)(*(int *)((int)this + 0x24) +
              (*(int *)(*(int *)((int)this + 0x20) + param_1 * 4) +
              *(int *)(*(int *)((int)this + 0x1c) + param_1 * 4)) * 4) = param_2;
    }
    piVar1 = (int *)(*(int *)((int)this + 0x1c) + param_1 * 4);
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)(iVar2 + 0x14) != -1) {
    FUN_100bd4d1(this,param_1,*(int *)(iVar2 + 0x14));
  }
  return;
}


// ==== 100bd5af FUN_100bd5af

void __thiscall FUN_100bd5af(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_2 - param_1 >> 1;
  if (uVar4 != 0) {
    iVar5 = param_1 << 2;
    iVar3 = param_2 * 4;
    param_2 = uVar4;
    do {
      iVar3 = iVar3 + -4;
      puVar1 = (undefined4 *)(iVar5 + *(int *)((int)this + 0x3c));
      uVar2 = *puVar1;
      *puVar1 = *(undefined4 *)(iVar3 + *(int *)((int)this + 0x3c));
      *(undefined4 *)(iVar3 + *(int *)((int)this + 0x3c)) = uVar2;
      iVar5 = iVar5 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}


// ==== 100bd5f9 FUN_100bd5f9

uint FUN_100bd5f9(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_3 + 0x3c) + param_1 * 4);
  uVar2 = *(uint *)(*(int *)(param_3 + 0x3c) + param_2 * 4);
  if (*(uint *)(*(int *)(param_3 + 0x2c) + uVar1 * 4) <=
      *(uint *)(*(int *)(param_3 + 0x2c) + uVar2 * 4)) {
    if (*(uint *)(*(int *)(param_3 + 0x2c) + uVar1 * 4) <
        *(uint *)(*(int *)(param_3 + 0x2c) + uVar2 * 4)) {
      return 1;
    }
    if (uVar2 <= uVar1) {
      return (uint)(uVar2 < uVar1);
    }
  }
  return 0xffffffff;
}


// ==== 100bd640 FUN_100bd640

void FUN_100bd640(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (1 < *param_2) {
    FUN_10041c64(FUN_10069360,param_1,*param_2,0);
    uVar1 = 1;
    uVar2 = 1;
    if (1 < *param_2) {
      do {
        if (param_1[uVar1] != param_1[uVar1 - 1]) {
          param_1[uVar2] = param_1[uVar1];
          uVar2 = uVar2 + 1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *param_2);
    }
    *param_2 = uVar2;
  }
  return;
}


// ==== 100bd686 FUN_100bd686

void __thiscall FUN_100bd686(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  local_1c = 0;
  local_10 = 0;
  local_14 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x3c) + local_c * 4);
      iVar5 = iVar1 * 4;
      iVar2 = *(int *)(iVar5 + *(int *)(*(int *)((int)this + 4) + 0x18));
      *(uint *)(iVar5 + *(int *)((int)this + 0x2c)) = uVar6;
      *(undefined4 *)(iVar5 + *(int *)((int)this + 0x28)) = 0;
      if ((*(ushort *)(iVar2 + 2) & 0xfff0) != 0) {
        iVar2 = *(int *)(iVar5 + *(int *)((int)this + 0xc));
        iVar3 = *(int *)((int)this + 0x10);
        local_8 = 0;
        uVar4 = *(uint *)(iVar5 + *(int *)((int)this + 8));
        if (uVar4 != 0) {
          do {
            if (iVar1 == *(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) +
                                          *(int *)(iVar3 + iVar2 * 4 + local_8 * 4) * 4) + 0x58)) {
              piVar7 = (int *)(*(int *)((int)this + 0x28) + iVar5);
              *piVar7 = *piVar7 + -1;
            }
            local_8 = local_8 + 1;
            uVar6 = local_1c;
          } while (local_8 < uVar4);
        }
        iVar1 = *(int *)(iVar5 + *(int *)((int)this + 0x20));
        iVar2 = *(int *)((int)this + 0x24);
        uVar4 = *(uint *)(iVar5 + *(int *)((int)this + 0x1c));
        local_18 = 0;
        if (uVar4 != 0) {
          do {
            if (*(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) +
                                 *(int *)(iVar2 + iVar1 * 4 + local_18 * 4) * 4) + 0x5c) != 0) {
              piVar7 = (int *)(*(int *)((int)this + 0x28) + iVar5);
              *piVar7 = *piVar7 + 1;
            }
            local_18 = local_18 + 1;
          } while (local_18 < uVar4);
        }
        local_10 = local_10 + uVar6;
        if (local_14 < uVar6) {
          local_14 = uVar6;
        }
        uVar6 = uVar6 + *(int *)(*(int *)((int)this + 0x28) + iVar5);
        local_1c = uVar6;
      }
      local_c = local_c + 1;
    } while (local_c < *(uint *)((int)this + 0x38));
  }
  if (param_1 != (int *)0x0) {
    *param_1 = local_10;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = local_14;
  }
  return;
}


// ==== 100bd7a3 FUN_100bd7a3

undefined4 __thiscall FUN_100bd7a3(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *this_00;
  void *this_01;
  void *this_02;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_44 = 0;
  local_10 = param_1 + 1;
  iVar6 = *(int *)(*(int *)((int)this + 0x3c) + param_1 * 4);
  local_14 = param_1;
  iVar2 = iVar6 * 4;
  if (*(int *)(iVar2 + *(int *)((int)this + 0x34)) != 0) {
    return 1;
  }
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) +
                  **(int **)(*(int *)(iVar2 + *(int *)(*(int *)((int)this + 4) + 0x18)) + 0x10) * 4)
  ;
  local_28 = *(int *)(iVar1 + 0x14);
  local_38 = *(int *)(iVar1 + 0x18);
  local_18 = *(uint *)(iVar2 + *(int *)((int)this + 8));
  puVar9 = (undefined4 *)
           (*(int *)((int)this + 0x10) + *(int *)(iVar2 + *(int *)((int)this + 0xc)) * 4);
  puVar11 = *(undefined4 **)((int)this + 0x14);
  for (uVar4 = local_18; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
LAB_100bd815:
  local_8 = 0;
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 1;
  for (uVar4 = local_14; uVar4 < local_10; uVar4 = uVar4 + 1) {
    iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                    *(int *)(*(int *)((int)this + 0x3c) + uVar4 * 4) * 4);
    uVar5 = 0;
    if (*(int *)(iVar2 + 0x14) != 0) {
      do {
        iVar1 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                  *(int *)(*(int *)(iVar2 + 0x18) + iVar1) * 4) + 0x24) =
             *(undefined4 *)((int)this + 0x48);
      } while (uVar5 < *(uint *)(iVar2 + 0x14));
    }
    uVar5 = 0;
    if (*(int *)(iVar2 + 0x1c) != 0) {
      do {
        iVar1 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                  *(int *)(*(int *)(iVar2 + 0x20) + iVar1) * 4) + 0x24) =
             *(undefined4 *)((int)this + 0x48);
      } while (uVar5 < *(uint *)(iVar2 + 0x1c));
    }
    local_8 = local_8 + *(int *)(*(int *)((int)this + 0x28) +
                                *(int *)(*(int *)((int)this + 0x3c) + uVar4 * 4) * 4);
  }
  uVar4 = 0;
  if (local_18 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + uVar4 * 4);
      *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)((int)this + 0x48);
      uVar4 = uVar4 + 1;
      *(uint *)(iVar2 + 0x54) = (uint)(iVar6 == *(int *)(iVar2 + 0x74));
    } while (uVar4 < local_18);
  }
  do {
    if (local_8 < 0) {
      local_2c = -1;
      local_c = local_14;
      local_3c = local_14;
    }
    else {
      if (local_8 < 1) goto LAB_100bdc00;
      local_3c = local_10 - 1;
      local_c = local_10;
      local_2c = 1;
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    param_1 = local_c;
    do {
      local_3c = local_3c + local_2c;
      if (*(uint *)((int)this + 0x38) <= local_3c) break;
      local_48 = *(int *)(*(int *)((int)this + 0x3c) + local_3c * 4);
      iVar2 = local_48 * 4;
      if (*(int *)(iVar2 + *(int *)((int)this + 0x34)) == 0) {
        iVar1 = *(int *)((int)this + 4);
        local_50 = *(int *)(*(int *)(iVar1 + 0x14) +
                           **(int **)(*(int *)(*(int *)(iVar1 + 0x18) + iVar2) + 0x10) * 4);
        iVar10 = *(int *)(local_50 + 0x18);
        for (iVar7 = *(int *)(local_50 + 0x14); iVar7 != -1; iVar7 = *(int *)(iVar7 + 0x14)) {
          if (local_28 == iVar7) goto LAB_100bd947;
          iVar7 = *(int *)(*(int *)(iVar1 + 0x14) + iVar7 * 4);
          iVar10 = *(int *)(iVar7 + 0x18);
        }
        if (local_28 != -1) goto LAB_100bdc00;
LAB_100bd947:
        if (local_38 != iVar10) goto LAB_100bdc00;
      }
      if (local_3c < local_c) {
        local_c = local_3c;
      }
      if (param_1 <= local_3c) {
        param_1 = local_3c + 1;
      }
      local_4c = (undefined4 *)
                 (*(int *)((int)this + 0x10) + *(int *)(iVar2 + *(int *)((int)this + 0xc)) * 4);
      local_34 = *(uint *)(iVar2 + *(int *)((int)this + 8));
      puVar9 = local_4c;
      puVar11 = (undefined4 *)(*(int *)((int)this + 0x18) + local_24 * 4);
      for (uVar4 = local_34; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      local_24 = local_24 + *(int *)(iVar2 + *(int *)((int)this + 8));
      local_20 = local_20 + *(int *)(*(int *)((int)this + 0x28) + iVar2);
      local_1c = local_1c |
                 *(int *)((int)this + 0x48) ==
                 *(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) + iVar2) + 0x24);
      local_30 = 0;
      if (local_34 != 0) {
        do {
          iVar1 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + local_4c[local_30] * 4);
          if ((*(int *)(iVar1 + 0x30) != *(int *)((int)this + 0x48)) ||
             (local_48 == *(int *)(iVar1 + 0x74))) {
            *(int *)(iVar1 + 0x30) = *(int *)((int)this + 0x48);
            *(uint *)(iVar1 + 0x54) = (local_48 != *(int *)(iVar1 + 0x74)) - 1;
          }
          local_30 = local_30 + 1;
        } while (local_30 < local_34);
      }
    } while (((*(int *)(iVar2 + *(int *)((int)this + 0x34)) != 0) ||
             (local_28 != *(int *)(local_50 + 0x14))) || (local_38 != *(int *)(local_50 + 0x18)));
    if (param_1 <= local_c) {
LAB_100bdc00:
      if (local_44 == 0) {
        return 1;
      }
      puVar9 = *(undefined4 **)((int)this + 0x40);
      puVar11 = *(undefined4 **)((int)this + 0x3c);
      for (uVar4 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_100bd686(this,(int *)0x0,(uint *)0x0);
      return 1;
    }
    if (local_c + 1 < param_1) {
      FUN_100bd640(*(undefined4 **)((int)this + 0x18),&local_24);
    }
    if (local_1c == 0) {
      if (local_8 < 0) {
        local_2c = local_20;
        if (local_24 != 0) {
          piVar3 = *(int **)((int)this + 0x18);
          uVar4 = local_24;
          do {
            if (*(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + *piVar3 * 4) + 0x54) ==
                1) {
              local_2c = local_2c + -1;
            }
            piVar3 = piVar3 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_2c < local_8) {
LAB_100bdab3:
          local_1c = 1;
        }
      }
      else {
        local_2c = local_8;
        if (local_18 != 0) {
          piVar3 = *(int **)((int)this + 0x14);
          uVar4 = local_18;
          do {
            if (*(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + *piVar3 * 4) + 0x54) ==
                -1) {
              local_2c = local_2c + -1;
            }
            piVar3 = piVar3 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_2c < local_20) goto LAB_100bdab3;
      }
    }
    uVar4 = local_14;
    if (local_c <= local_14) {
      uVar4 = local_c;
    }
    uVar5 = local_10;
    if (local_10 <= param_1) {
      uVar5 = param_1;
    }
    if (local_1c == 0) break;
    uVar8 = 0;
    if (local_24 != 0) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) +
                        *(int *)(*(int *)((int)this + 0x18) + uVar8 * 4) * 4);
        uVar8 = uVar8 + 1;
        *(uint *)(iVar2 + 0x54) = (uint)(*(int *)(iVar2 + 0x54) != 0);
      } while (uVar8 < local_24);
    }
    local_8 = local_8 + local_20;
    puVar9 = *(undefined4 **)((int)this + 0x18);
    puVar11 = (undefined4 *)(*(int *)((int)this + 0x14) + local_18 * 4);
    for (uVar8 = local_24; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    local_18 = local_18 + local_24;
    local_14 = uVar4;
    local_10 = uVar5;
    FUN_100bd640(*(undefined4 **)((int)this + 0x14),&local_18);
    uVar4 = local_c;
    do {
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                      *(int *)(*(int *)((int)this + 0x3c) + uVar4 * 4) * 4);
      uVar5 = 0;
      if (*(int *)(iVar2 + 0x14) != 0) {
        do {
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)
           (*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                    *(int *)(*(int *)(iVar2 + 0x18) + iVar1) * 4) + 0x24) =
               *(undefined4 *)((int)this + 0x48);
        } while (uVar5 < *(uint *)(iVar2 + 0x14));
      }
      uVar5 = 0;
      if (*(int *)(iVar2 + 0x1c) != 0) {
        do {
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)
           (*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                    *(int *)(*(int *)(iVar2 + 0x20) + iVar1) * 4) + 0x24) =
               *(undefined4 *)((int)this + 0x48);
        } while (uVar5 < *(uint *)(iVar2 + 0x1c));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_1);
  } while( true );
  FUN_100bd5af(this,local_14,local_10);
  FUN_100bd5af(this_00,local_c,param_1);
  FUN_100bd5af(this_01,uVar4,uVar5);
  FUN_100bd686(this_02,(int *)&local_40,&local_54);
  if (((local_40 < *(uint *)((int)this + 0x50)) && (local_54 <= *(uint *)((int)this + 0x4c))) ||
     ((local_40 <= *(uint *)((int)this + 0x50) && (local_54 < *(uint *)((int)this + 0x4c))))) {
    return 0;
  }
  if (local_8 < 0) {
    iVar2 = local_c - param_1;
  }
  else {
    iVar2 = param_1 - local_c;
  }
  local_14 = local_14 + iVar2;
  local_10 = local_10 + iVar2;
  local_44 = 1;
  goto LAB_100bd815;
}


// ==== 100bdc35 FUN_100bdc35

int __fastcall FUN_100bdc35(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_100bd686(param_1,(int *)((int)param_1 + 0x50),(uint *)((int)param_1 + 0x4c));
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x38) != 0) {
    do {
      *(uint *)(*(int *)((int)param_1 + 0x30) + uVar1 * 4) = uVar1;
      *(undefined4 *)(*(int *)((int)param_1 + 0x40) + uVar1 * 4) =
           *(undefined4 *)(*(int *)((int)param_1 + 0x3c) + uVar1 * 4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)param_1 + 0x38));
  }
  FUN_10041c64(FUN_100bd5f9,*(undefined4 **)((int)param_1 + 0x30),*(uint *)((int)param_1 + 0x38),
               param_1);
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x38) != 0) {
    do {
      iVar2 = FUN_100bd7a3(param_1,*(uint *)(*(int *)((int)param_1 + 0x30) + uVar1 * 4));
      if (iVar2 < 0) {
        return iVar2;
      }
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)param_1 + 0x38));
  }
  return 1;
}


// ==== 100bdca2 FUN_100bdca2

int __thiscall FUN_100bdca2(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_c;
  uint local_8;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)*(void **)((int)this + 4) + 0xc);
  FUN_1006d385(*(void **)((int)this + 4));
  iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
  *(int *)((int)this + 8) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
    *(int *)((int)this + 0x1c) = iVar2;
    if (iVar2 != 0) {
      puVar8 = *(undefined4 **)((int)this + 8);
      for (uVar5 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar8 = *(undefined4 **)((int)this + 0x1c);
      for (uVar5 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_8 = 0;
      if (*(int *)((int)this + 0x38) != 0) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) + local_8 * 4);
          if ((*(ushort *)(iVar2 + 2) & 0xfff0) != 0) {
            local_c = 0;
            if (*(int *)(iVar2 + 0xc) != 0) {
              do {
                FUN_100bd546(this,local_8,*(int *)(*(int *)(iVar2 + 0x10) + local_c * 4));
                local_c = local_c + 1;
              } while (local_c < *(uint *)(iVar2 + 0xc));
            }
            local_c = 0;
            if (*(int *)(iVar2 + 4) != 0) {
              do {
                FUN_100bd4d1(this,local_8,*(int *)(*(int *)(iVar2 + 8) + local_c * 4));
                local_c = local_c + 1;
              } while (local_c < *(uint *)(iVar2 + 4));
            }
          }
          local_8 = local_8 + 1;
        } while (local_8 < *(uint *)((int)this + 0x38));
      }
      iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
      *(int *)((int)this + 0xc) = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
        *(int *)((int)this + 0x20) = iVar2;
        if (iVar2 != 0) {
          iVar2 = 0;
          iVar7 = 0;
          uVar5 = 0;
          if (*(int *)((int)this + 0x38) != 0) {
            do {
              iVar3 = uVar5 * 4;
              *(int *)(iVar3 + *(int *)((int)this + 0xc)) = iVar2;
              iVar2 = iVar2 + *(int *)(iVar3 + *(int *)((int)this + 8));
              *(int *)(iVar3 + *(int *)((int)this + 0x20)) = iVar7;
              iVar7 = iVar7 + *(int *)(iVar3 + *(int *)((int)this + 0x1c));
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)((int)this + 0x38));
          }
          uVar5 = 0;
          iVar2 = iVar2 << 2;
          iVar3 = FUN_10001d00(iVar2);
          *(int *)((int)this + 0x10) = iVar3;
          if (iVar3 != 0) {
            iVar3 = FUN_10001d00(iVar2);
            *(int *)((int)this + 0x14) = iVar3;
            if (iVar3 != 0) {
              iVar2 = FUN_10001d00(iVar2);
              *(int *)((int)this + 0x18) = iVar2;
              if (iVar2 != 0) {
                iVar2 = FUN_10001d00(iVar7 << 2);
                *(int *)((int)this + 0x24) = iVar2;
                if (iVar2 != 0) {
                  puVar8 = *(undefined4 **)((int)this + 8);
                  for (uVar6 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar6 != 0;
                      uVar6 = uVar6 - 1) {
                    *puVar8 = 0;
                    puVar8 = puVar8 + 1;
                  }
                  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *(undefined1 *)puVar8 = 0;
                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                  }
                  puVar8 = *(undefined4 **)((int)this + 0x1c);
                  for (uVar6 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar6 != 0;
                      uVar6 = uVar6 - 1) {
                    *puVar8 = 0;
                    puVar8 = puVar8 + 1;
                  }
                  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *(undefined1 *)puVar8 = 0;
                    puVar8 = (undefined4 *)((int)puVar8 + 1);
                  }
                  local_8 = 0;
                  if (*(int *)((int)this + 0x38) != 0) {
                    do {
                      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) + local_8 * 4);
                      if ((*(ushort *)(iVar2 + 2) & 0xfff0) != 0) {
                        local_c = 0;
                        if (*(int *)(iVar2 + 4) != 0) {
                          do {
                            FUN_100bd4d1(this,local_8,*(int *)(*(int *)(iVar2 + 8) + local_c * 4));
                            local_c = local_c + 1;
                          } while (local_c < *(uint *)(iVar2 + 4));
                        }
                        local_c = 0;
                        if (*(int *)(iVar2 + 0xc) != 0) {
                          do {
                            FUN_100bd546(this,local_8,*(int *)(*(int *)(iVar2 + 0x10) + local_c * 4)
                                        );
                            local_c = local_c + 1;
                          } while (local_c < *(uint *)(iVar2 + 0xc));
                        }
                      }
                      local_8 = local_8 + 1;
                    } while (local_8 < *(uint *)((int)this + 0x38));
                  }
                  local_c = 0;
                  if (*(int *)((int)this + 0x38) != 0) {
                    do {
                      iVar2 = local_c * 4;
                      FUN_100bd640((undefined4 *)
                                   (*(int *)((int)this + 0x10) +
                                   *(int *)(iVar2 + *(int *)((int)this + 0xc)) * 4),
                                   (uint *)(*(int *)((int)this + 8) + iVar2));
                      FUN_100bd640((undefined4 *)
                                   (*(int *)((int)this + 0x24) +
                                   *(int *)(iVar2 + *(int *)((int)this + 0x20)) * 4),
                                   (uint *)(*(int *)((int)this + 0x1c) + iVar2));
                      local_c = local_c + 1;
                    } while (local_c < *(uint *)((int)this + 0x38));
                  }
                  iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
                  *(int *)((int)this + 0x3c) = iVar2;
                  if (iVar2 != 0) {
                    iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
                    *(int *)((int)this + 0x40) = iVar2;
                    if (iVar2 != 0) {
                      iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
                      *(int *)((int)this + 0x44) = iVar2;
                      if (iVar2 != 0) {
                        iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
                        *(int *)((int)this + 0x34) = iVar2;
                        if (iVar2 != 0) {
                          if (*(int *)((int)this + 0x38) != 0) {
                            do {
                              iVar2 = uVar5 * 4;
                              puVar1 = *(uint **)(iVar2 + *(int *)(*(int *)((int)this + 4) + 0x18));
                              *(uint *)(iVar2 + *(int *)((int)this + 0x3c)) = uVar5;
                              *(uint **)(iVar2 + *(int *)((int)this + 0x44)) = puVar1;
                              puVar1[9] = 0xffffffff;
                              if ((*puVar1 & 0xfff00000) == 0) {
LAB_100bdff2:
                                uVar4 = 1;
                              }
                              else {
                                iVar7 = FUN_10068393(puVar1);
                                uVar4 = 0;
                                if (iVar7 != 0) goto LAB_100bdff2;
                              }
                              uVar5 = uVar5 + 1;
                              *(undefined4 *)(iVar2 + *(int *)((int)this + 0x34)) = uVar4;
                            } while (uVar5 < *(uint *)((int)this + 0x38));
                          }
                          iVar7 = 0;
                          *(undefined4 *)((int)this + 0x48) = 0;
                          iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
                          *(int *)((int)this + 0x28) = iVar2;
                          if (iVar2 != 0) {
                            iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
                            *(int *)((int)this + 0x2c) = iVar2;
                            if (iVar2 != 0) {
                              iVar2 = FUN_10001d00(*(int *)((int)this + 0x38) << 2);
                              *(int *)((int)this + 0x30) = iVar2;
                              if (iVar2 != 0) {
                                if (param_1 != 0) {
                                  do {
                                    iVar2 = FUN_100bdc35(this);
                                    if (iVar2 < 0) {
                                      return iVar2;
                                    }
                                  } while (iVar2 != 1);
                                  uVar5 = 0;
                                  if (*(int *)((int)this + 0x38) != 0) {
                                    do {
                                      *(undefined4 *)
                                       (*(int *)(*(int *)((int)this + 4) + 0x18) + uVar5 * 4) =
                                           *(undefined4 *)
                                            (*(int *)((int)this + 0x44) +
                                            *(int *)(*(int *)((int)this + 0x3c) + uVar5 * 4) * 4);
                                      uVar5 = uVar5 + 1;
                                    } while (uVar5 < *(uint *)((int)this + 0x38));
                                  }
                                }
                                goto LAB_100be087;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  iVar7 = -0x7ff8fff2;
LAB_100be087:
  FUN_10001d20(*(undefined4 *)((int)this + 8));
  FUN_10001d20(*(undefined4 *)((int)this + 0xc));
  FUN_10001d20(*(undefined4 *)((int)this + 0x10));
  FUN_10001d20(*(undefined4 *)((int)this + 0x14));
  FUN_10001d20(*(undefined4 *)((int)this + 0x18));
  FUN_10001d20(*(undefined4 *)((int)this + 0x1c));
  FUN_10001d20(*(undefined4 *)((int)this + 0x20));
  FUN_10001d20(*(undefined4 *)((int)this + 0x24));
  FUN_10001d20(*(undefined4 *)((int)this + 0x28));
  FUN_10001d20(*(undefined4 *)((int)this + 0x2c));
  FUN_10001d20(*(undefined4 *)((int)this + 0x30));
  FUN_10001d20(*(undefined4 *)((int)this + 0x34));
  FUN_10001d20(*(undefined4 *)((int)this + 0x3c));
  FUN_10001d20(*(undefined4 *)((int)this + 0x40));
  FUN_10001d20(*(undefined4 *)((int)this + 0x44));
  return iVar7;
}


// ==== 100be10b FUN_100be10b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be10b(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  fVar6 = (float)(*param_1 & _DAT_10127a90);
  fVar10 = (float)(param_1[1] & uRam10127a94);
  fVar14 = (float)(param_1[2] & uRam10127a98);
  fVar18 = (float)(param_1[3] & uRam10127a9c);
  uVar22 = param_1[1] & uRam10127a84;
  uVar23 = param_1[2] & uRam10127a88;
  uVar24 = param_1[3] & uRam10127a8c;
  fVar7 = fVar6 * _DAT_10127a70 + _DAT_10127a20;
  fVar11 = fVar10 * fRam10127a74 + fRam10127a24;
  fVar15 = fVar14 * fRam10127a78 + fRam10127a28;
  fVar19 = fVar18 * fRam10127a7c + fRam10127a2c;
  fVar8 = fVar7 - _DAT_10127a20;
  fVar12 = fVar11 - fRam10127a24;
  fVar16 = fVar15 - fRam10127a28;
  fVar20 = fVar19 - fRam10127a2c;
  fVar6 = (((fVar6 - _DAT_10127a60 * fVar8) - _DAT_10127a50 * fVar8) - _DAT_10127a40 * fVar8) -
          _DAT_10127a30 * fVar8;
  fVar8 = (((fVar10 - fRam10127a64 * fVar12) - fRam10127a54 * fVar12) - fRam10127a44 * fVar12) -
          fRam10127a34 * fVar12;
  fVar10 = (((fVar14 - fRam10127a68 * fVar16) - fRam10127a58 * fVar16) - fRam10127a48 * fVar16) -
           fRam10127a38 * fVar16;
  fVar12 = (((fVar18 - fRam10127a6c * fVar20) - fRam10127a5c * fVar20) - fRam10127a4c * fVar20) -
           fRam10127a3c * fVar20;
  fVar14 = fVar6 * fVar6;
  fVar16 = fVar8 * fVar8;
  fVar18 = fVar10 * fVar10;
  fVar20 = fVar12 * fVar12;
  uVar25 = (uint)fVar7 & _DAT_101279f0;
  uVar26 = (uint)fVar11 & uRam101279f4;
  uVar27 = (uint)fVar15 & uRam101279f8;
  uVar28 = (uint)fVar19 & uRam101279fc;
  uVar9 = uVar25 & _DAT_101279e0;
  uVar13 = uVar26 & uRam101279e4;
  uVar17 = uVar27 & uRam101279e8;
  uVar21 = uVar28 & uRam101279ec;
  uVar1 = uVar26 - uVar13 & _DAT_101279d0;
  uVar2 = uVar27 - uVar17 & _DAT_101279d0;
  uVar3 = uVar28 - uVar21 & _DAT_101279d0;
  uVar4 = uVar25 + uVar9 & _DAT_101279d0;
  uVar26 = uVar26 + uVar13 & _DAT_101279d0;
  uVar27 = uVar27 + uVar17 & _DAT_101279d0;
  uVar28 = uVar28 + uVar21 & _DAT_101279d0;
  uVar5 = -(uint)((float)(uVar9 << 0x1e) != 0.0);
  uVar13 = -(uint)((float)(uVar13 << 0x1e) != 0.0);
  uVar17 = -(uint)((float)(uVar17 << 0x1e) != 0.0);
  uVar21 = -(uint)((float)(uVar21 << 0x1e) != 0.0);
  fVar6 = (((_DAT_10127a10 * fVar14 + _DAT_101279c0) * fVar14 + _DAT_101279a0) * fVar14 +
          _DAT_10127980) * fVar6;
  fVar8 = (((fRam10127a14 * fVar16 + fRam101279c4) * fVar16 + fRam101279a4) * fVar16 + fRam10127984)
          * fVar8;
  fVar10 = (((fRam10127a18 * fVar18 + fRam101279c8) * fVar18 + fRam101279a8) * fVar18 + fRam10127988
           ) * fVar10;
  fVar12 = (((fRam10127a1c * fVar20 + fRam101279cc) * fVar20 + fRam101279ac) * fVar20 + fRam1012798c
           ) * fVar12;
  fVar7 = (((_DAT_10127a00 * fVar14 + _DAT_101279b0) * fVar14 + _DAT_10127990) * fVar14 +
          _DAT_10127970) * fVar14 + _DAT_10127960;
  fVar11 = (((fRam10127a04 * fVar16 + fRam101279b4) * fVar16 + fRam10127994) * fVar16 + fRam10127974
           ) * fVar16 + fRam10127964;
  fVar14 = (((fRam10127a08 * fVar18 + fRam101279b8) * fVar18 + fRam10127998) * fVar18 + fRam10127978
           ) * fVar18 + fRam10127968;
  fVar15 = (((fRam10127a0c * fVar20 + fRam101279bc) * fVar20 + fRam1012799c) * fVar20 + fRam1012797c
           ) * fVar20 + fRam1012796c;
  *param_2 = (~uVar5 & (uint)fVar6 | uVar5 & (uint)fVar7) ^
             (uVar25 - uVar9 & _DAT_101279d0) << 0x1e ^ *param_1 & _DAT_10127a80;
  param_2[1] = (~uVar13 & (uint)fVar8 | uVar13 & (uint)fVar11) ^ uVar1 << 0x1e ^ uVar22;
  param_2[2] = (~uVar17 & (uint)fVar10 | uVar17 & (uint)fVar14) ^ uVar2 << 0x1e ^ uVar23;
  param_2[3] = (~uVar21 & (uint)fVar12 | uVar21 & (uint)fVar15) ^ uVar3 << 0x1e ^ uVar24;
  *param_3 = (uVar5 & (uint)fVar6 | ~uVar5 & (uint)fVar7) ^ uVar4 << 0x1e;
  param_3[1] = (uVar13 & (uint)fVar8 | ~uVar13 & (uint)fVar11) ^ uVar26 << 0x1e;
  param_3[2] = (uVar17 & (uint)fVar10 | ~uVar17 & (uint)fVar14) ^ uVar27 << 0x1e;
  param_3[3] = (uVar21 & (uint)fVar12 | ~uVar21 & (uint)fVar15) ^ uVar28 << 0x1e;
  return;
}


// ==== 100be2f7 FUN_100be2f7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100be2f7(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  
  fVar16 = (float)(*param_1 & _DAT_10127bd0);
  fVar17 = (float)(param_1[1] & uRam10127bd4);
  fVar25 = (float)(param_1[2] & uRam10127bd8);
  fVar26 = (float)(param_1[3] & uRam10127bdc);
  uVar13 = param_1[1] & uRam10127bc4;
  uVar14 = param_1[2] & uRam10127bc8;
  uVar15 = param_1[3] & uRam10127bcc;
  fVar1 = fVar16 * _DAT_10127bb0 + _DAT_10127b60;
  fVar4 = fVar17 * fRam10127bb4 + fRam10127b64;
  fVar7 = fVar25 * fRam10127bb8 + fRam10127b68;
  fVar10 = fVar26 * fRam10127bbc + fRam10127b6c;
  fVar2 = fVar1 - _DAT_10127b60;
  fVar5 = fVar4 - fRam10127b64;
  fVar8 = fVar7 - fRam10127b68;
  fVar11 = fVar10 - fRam10127b6c;
  fVar16 = (((fVar16 - _DAT_10127ba0 * fVar2) - _DAT_10127b90 * fVar2) - _DAT_10127b80 * fVar2) -
           _DAT_10127b70 * fVar2;
  fVar2 = (((fVar17 - fRam10127ba4 * fVar5) - fRam10127b94 * fVar5) - fRam10127b84 * fVar5) -
          fRam10127b74 * fVar5;
  fVar17 = (((fVar25 - fRam10127ba8 * fVar8) - fRam10127b98 * fVar8) - fRam10127b88 * fVar8) -
           fRam10127b78 * fVar8;
  fVar5 = (((fVar26 - fRam10127bac * fVar11) - fRam10127b9c * fVar11) - fRam10127b8c * fVar11) -
          fRam10127b7c * fVar11;
  fVar25 = fVar16 * fVar16;
  fVar8 = fVar2 * fVar2;
  fVar26 = fVar17 * fVar17;
  fVar11 = fVar5 * fVar5;
  uVar18 = (uint)fVar1 & _DAT_10127b30;
  uVar19 = (uint)fVar4 & uRam10127b34;
  uVar21 = (uint)fVar7 & uRam10127b38;
  uVar23 = (uint)fVar10 & uRam10127b3c;
  uVar3 = uVar18 & _DAT_10127b20;
  uVar6 = uVar19 & uRam10127b24;
  uVar9 = uVar21 & uRam10127b28;
  uVar12 = uVar23 & uRam10127b2c;
  uVar20 = uVar19 - uVar6 & uRam10127b14;
  uVar22 = uVar21 - uVar9 & uRam10127b18;
  uVar24 = uVar23 - uVar12 & uRam10127b1c;
  uVar27 = uVar18 + uVar3 & _DAT_10127b10;
  uVar28 = uVar19 + uVar6 & uRam10127b14;
  uVar21 = uVar21 + uVar9 & uRam10127b18;
  uVar23 = uVar23 + uVar12 & uRam10127b1c;
  uVar19 = -(uint)((float)(uVar3 << 0x1e) != 0.0);
  uVar6 = -(uint)((float)(uVar6 << 0x1e) != 0.0);
  uVar9 = -(uint)((float)(uVar9 << 0x1e) != 0.0);
  uVar12 = -(uint)((float)(uVar12 << 0x1e) != 0.0);
  fVar16 = (((_DAT_10127b50 * fVar25 + _DAT_10127b00) * fVar25 + _DAT_10127ae0) * fVar25 +
           _DAT_10127ac0) * fVar16;
  fVar2 = (((fRam10127b54 * fVar8 + fRam10127b04) * fVar8 + fRam10127ae4) * fVar8 + fRam10127ac4) *
          fVar2;
  fVar17 = (((fRam10127b58 * fVar26 + fRam10127b08) * fVar26 + fRam10127ae8) * fVar26 + fRam10127ac8
           ) * fVar17;
  fVar5 = (((fRam10127b5c * fVar11 + fRam10127b0c) * fVar11 + fRam10127aec) * fVar11 + fRam10127acc)
          * fVar5;
  fVar1 = (((_DAT_10127b40 * fVar25 + _DAT_10127af0) * fVar25 + _DAT_10127ad0) * fVar25 +
          _DAT_10127ab0) * fVar25 + _DAT_10127aa0;
  fVar4 = (((fRam10127b44 * fVar8 + fRam10127af4) * fVar8 + fRam10127ad4) * fVar8 + fRam10127ab4) *
          fVar8 + fRam10127aa4;
  fVar25 = (((fRam10127b48 * fVar26 + fRam10127af8) * fVar26 + fRam10127ad8) * fVar26 + fRam10127ab8
           ) * fVar26 + fRam10127aa8;
  fVar7 = (((fRam10127b4c * fVar11 + fRam10127afc) * fVar11 + fRam10127adc) * fVar11 + fRam10127abc)
          * fVar11 + fRam10127aac;
  *param_2 = (~uVar19 & (uint)fVar16 | uVar19 & (uint)fVar1) ^
             (uVar18 - uVar3 & _DAT_10127b10) << 0x1e ^ *param_1 & _DAT_10127bc0;
  param_2[1] = (~uVar6 & (uint)fVar2 | uVar6 & (uint)fVar4) ^ uVar20 << 0x1e ^ uVar13;
  param_2[2] = (~uVar9 & (uint)fVar17 | uVar9 & (uint)fVar25) ^ uVar22 << 0x1e ^ uVar14;
  param_2[3] = (~uVar12 & (uint)fVar5 | uVar12 & (uint)fVar7) ^ uVar24 << 0x1e ^ uVar15;
  *param_3 = (uVar19 & (uint)fVar16 | ~uVar19 & (uint)fVar1) ^ uVar27 << 0x1e;
  param_3[1] = (uVar6 & (uint)fVar2 | ~uVar6 & (uint)fVar4) ^ uVar28 << 0x1e;
  param_3[2] = (uVar9 & (uint)fVar17 | ~uVar9 & (uint)fVar25) ^ uVar21 << 0x1e;
  param_3[3] = (uVar12 & (uint)fVar5 | ~uVar12 & (uint)fVar7) ^ uVar23 << 0x1e;
  return;
}


// ==== 100bf0c0 FUN_100bf0c0

ulonglong FUN_100bf0c0(void)

{
  ulonglong in_MM0;
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong in_MM1;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = (DAT_10128098 & in_MM0) >> 1 | DAT_10128098 & in_MM1;
  uVar3 = in_MM1 & DAT_1012809c;
  uVar1 = in_MM0 & DAT_1012809c;
  uVar2 = PackedFloatingMAX(uVar1,uVar3);
  uVar7 = (uint)((int)uVar1 < (int)uVar3) * -0x80000000;
  uVar4 = PackedFloatingMIN(uVar3,uVar1);
  uVar5 = FloatingReciprocalAprox(uVar1,uVar2);
  uVar2 = PackedFloatingReciprocalIter1(uVar2,uVar5);
  uVar2 = PackedFloatingReciprocalIter2(uVar2,uVar5);
  uVar2 = PackedFloatingMUL(uVar2,uVar4);
  uVar4 = PackedFloatingMUL(uVar2,uVar2);
  uVar5 = PackedFloatingADD((ulonglong)DAT_101280d0,uVar4);
  uVar6 = PackedFloatingMUL((ulonglong)DAT_101280dc,uVar4);
  uVar5 = PackedFloatingMUL(uVar5,uVar4);
  uVar6 = PackedFloatingADD(uVar6,(ulonglong)DAT_101280d8);
  uVar5 = PackedFloatingADD(uVar5,(ulonglong)DAT_101280cc);
  uVar6 = PackedFloatingMUL(uVar6,uVar4);
  uVar5 = PackedFloatingMUL(uVar5,uVar4);
  uVar6 = PackedFloatingADD(uVar6,(ulonglong)DAT_101280d4);
  uVar5 = PackedFloatingADD(uVar5,(ulonglong)DAT_101280c8);
  uVar4 = PackedFloatingMUL(uVar4,uVar6);
  uVar4 = PackedFloatingMUL(uVar4,uVar2);
  uVar6 = FloatingReciprocalAprox((ulonglong)DAT_101280d4,uVar5);
  uVar8 = (int)uVar9 << 1;
  uVar5 = PackedFloatingReciprocalIter1(uVar5,uVar6);
  uVar5 = PackedFloatingReciprocalIter2(uVar5,uVar6);
  uVar4 = PackedFloatingMUL(uVar4,uVar5);
  uVar1 = PackedFloatingADD(uVar4,uVar2);
  uVar2 = PackedFloatingSUB(~(ulonglong)(uint)((int)uVar7 >> 0x1f) &
                            (ulonglong)(uVar8 ^ DAT_101280f8),(ulonglong)DAT_101280f8);
  uVar1 = PackedFloatingADD(uVar1 | uVar8 ^ uVar7,uVar2);
  return uVar1 | DAT_10128098 & uVar9;
}


// ==== 100bf1c0 FUN_100bf1c0

ulonglong FUN_100bf1c0(void)

{
  uint uVar1;
  ulonglong in_MM0;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar5;
  
  uVar2 = in_MM0 & DAT_1012809c;
  uVar6 = -(uint)(DAT_101280a8 < (int)uVar2);
  uVar3 = PackedFloatingMUL(uVar2,(ulonglong)DAT_101280ac);
  uVar3 = PackedFloatingSUBR(uVar3,(ulonglong)DAT_101280ac);
  uVar7 = PackedFloatingReciprocalSQRAprox((ulonglong)DAT_1012809c,uVar3);
  uVar8 = PackedFloatingMUL(uVar7,uVar7);
  uVar1 = (uint)((int)uVar2 < DAT_101280e0);
  uVar4 = -uVar1;
  uVar5 = (ulonglong)uVar4;
  uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar3);
  uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
  uVar9 = PackedFloatingMUL(uVar7,uVar3);
  uVar2 = ~uVar5 & uVar9 | uVar2 & uVar4;
  uVar3 = PackedFloatingMUL(uVar2,uVar2);
  uVar8 = PackedFloatingMUL((ulonglong)DAT_101280e8,uVar3);
  uVar7 = PackedFloatingADD((ulonglong)DAT_101280f0,uVar3);
  uVar8 = PackedFloatingADD(uVar8,(ulonglong)DAT_101280e4);
  uVar8 = PackedFloatingMUL(uVar8,uVar3);
  uVar3 = PackedFloatingMUL(uVar3,uVar7);
  uVar3 = PackedFloatingADD(uVar3,(ulonglong)DAT_101280ec);
  uVar8 = PackedFloatingMUL(uVar8,uVar2);
  uVar7 = FloatingReciprocalAprox(uVar7,uVar3);
  uVar3 = PackedFloatingReciprocalIter1(uVar3,uVar7);
  uVar3 = PackedFloatingReciprocalIter2(uVar3,uVar7);
  uVar3 = PackedFloatingMUL(uVar3,uVar8);
  uVar2 = PackedFloatingADD(uVar2,uVar3);
  uVar3 = PackedFloatingADD(~uVar5 & (ulonglong)DAT_101280f8 ^ DAT_10128098 & in_MM0,
                            (ulonglong)DAT_101280f4);
  uVar2 = PackedFloatingADD(uVar2,~uVar5 & uVar2);
  uVar2 = PackedFloatingADD(uVar3,uVar2 | (ulonglong)(uVar1 * -0x80000000) ^ DAT_10128098 & in_MM0);
  return (ulonglong)(DAT_101280b4 & uVar6) | ~(ulonglong)uVar6 & uVar2;
}


// ==== 100bf7a0 FUN_100bf7a0

uint FUN_100bf7a0(void)

{
  ulonglong in_MM0;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = PackedFloatingMUL(in_MM0 & DAT_1012809c,(ulonglong)DAT_10128150);
  uVar2 = PackedFloatingToIntDwordConv(uVar1,uVar1);
  uVar1 = PackedIntToFloatingDwordConv(uVar2,uVar2);
  uVar1 = PackedFloatingMUL(CONCAT44((int)uVar1,(int)uVar1),DAT_10128060);
  uVar4 = PackedFloatingADD(in_MM0 & DAT_1012809c,uVar1);
  uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar1 = PackedFloatingADD(uVar4,CONCAT44(uVar3,uVar3));
  uVar1 = CONCAT44((int)uVar1,(int)uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = PackedFloatingSUBR(uVar1,DAT_10128070);
  }
  uVar4 = PackedFloatingMUL(uVar1,uVar1);
  uVar6 = PackedFloatingMUL(DAT_10128068,uVar4);
  uVar5 = PackedFloatingMUL(DAT_10128078,uVar4);
  uVar7 = PackedFloatingADD(uVar6,DAT_10128018);
  uVar6 = PackedFloatingMUL(DAT_10128080,uVar4);
  uVar5 = PackedFloatingMUL(uVar7,uVar5);
  uVar7 = PackedFloatingADD(uVar5,DAT_10128018);
  uVar5 = PackedFloatingMUL(DAT_10128088,uVar4);
  uVar4 = PackedFloatingMUL(uVar6,uVar7);
  uVar4 = PackedFloatingADD(uVar4,DAT_10128018);
  uVar4 = PackedFloatingMUL(uVar4,CONCAT44((int)DAT_10128018,(int)uVar5));
  uVar4 = PackedFloatingADD(uVar4,DAT_10128018 >> 0x20);
  PackedFloatingMUL(uVar4,CONCAT44((int)uVar1,(int)DAT_10128018));
  return (uint)in_MM0 ^ (uint)in_MM0 & 0x80000000;
}


// ==== 100bf8a0 FUN_100bf8a0

uint FUN_100bf8a0(void)

{
  ulonglong in_MM0;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = PackedFloatingMUL(in_MM0 & DAT_1012809c,(ulonglong)DAT_10128150);
  uVar2 = PackedFloatingToIntDwordConv(uVar1,uVar1);
  uVar1 = PackedIntToFloatingDwordConv(uVar2,uVar2);
  uVar1 = PackedFloatingMUL(CONCAT44((int)uVar1,(int)uVar1),DAT_10128060);
  uVar4 = PackedFloatingADD(in_MM0 & DAT_1012809c,uVar1);
  uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar1 = PackedFloatingADD(uVar4,CONCAT44(uVar3,uVar3));
  uVar1 = CONCAT44((int)uVar1,(int)uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = PackedFloatingSUBR(uVar1,DAT_10128070);
  }
  uVar4 = PackedFloatingMUL(uVar1,uVar1);
  uVar6 = PackedFloatingMUL(DAT_10128068,uVar4);
  uVar5 = PackedFloatingMUL(DAT_10128078,uVar4);
  uVar7 = PackedFloatingADD(uVar6,DAT_10128018);
  uVar6 = PackedFloatingMUL(DAT_10128080,uVar4);
  uVar5 = PackedFloatingMUL(uVar7,uVar5);
  uVar7 = PackedFloatingADD(uVar5,DAT_10128018);
  uVar5 = PackedFloatingMUL(DAT_10128088,uVar4);
  uVar4 = PackedFloatingMUL(uVar6,uVar7);
  uVar4 = PackedFloatingADD(uVar4,DAT_10128018);
  uVar4 = PackedFloatingMUL(uVar4,CONCAT44((int)DAT_10128018,(int)uVar5));
  uVar4 = PackedFloatingADD(uVar4,DAT_10128018 >> 0x20);
  PackedFloatingMUL(uVar4,CONCAT44((int)uVar1,(int)DAT_10128018));
  return (uint)in_MM0 ^ (uint)in_MM0 & 0x80000000;
}


// ==== 100bfc58 FUN_100bfc58

void FUN_100bfc58(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = *(uint *)(*(int *)(in_EAX + 0x1c) + 0x14);
  if (*(uint *)(in_EAX + 0x10) < uVar4) {
    uVar4 = *(uint *)(in_EAX + 0x10);
  }
  if (uVar4 != 0) {
    puVar5 = *(undefined4 **)(*(int *)(in_EAX + 0x1c) + 0x10);
    puVar6 = *(undefined4 **)(in_EAX + 0xc);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + uVar4;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x10);
    *piVar1 = *piVar1 + uVar4;
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + uVar4;
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) - uVar4;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x14);
    *piVar1 = *piVar1 - uVar4;
    iVar2 = *(int *)(in_EAX + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return;
}


// ==== 100bfcac FUN_100bfcac

char * __thiscall FUN_100bfcac(void *this,uint param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar6;
  char *pcVar7;
  uint local_14;
  char *local_10;
  uint local_c;
  char local_6;
  char local_5;
  char *pcVar5;
  
  local_c = *(uint *)((int)this + 0x74);
  uVar1 = *(uint *)((int)this + 100);
  pcVar3 = (char *)(*(int *)((int)this + 0x30) + uVar1);
  pcVar7 = *(char **)((int)this + 0x70);
  if (*(int *)((int)this + 0x24) - 0x106U < uVar1) {
    local_14 = (uVar1 - *(int *)((int)this + 0x24)) + 0x106;
  }
  else {
    local_14 = 0;
  }
  local_5 = (pcVar7 + -1)[(int)pcVar3];
  local_6 = pcVar7[(int)pcVar3];
  if (*(char **)((int)this + 0x84) <= pcVar7) {
    local_c = local_c >> 2;
  }
  pcVar2 = *(char **)((int)this + 0x6c);
  local_10 = *(char **)((int)this + 0x88);
  if (pcVar2 < *(char **)((int)this + 0x88)) {
    local_10 = pcVar2;
  }
  do {
    pcVar6 = (char *)(*(int *)((int)this + 0x30) + param_1);
    if ((((pcVar6[(int)pcVar7] == local_6) && ((pcVar6 + -1)[(int)pcVar7] == local_5)) &&
        (*pcVar6 == *pcVar3)) && (pcVar6[1] == pcVar3[1])) {
      pcVar6 = pcVar6 + 2;
      pcVar5 = pcVar3 + 2;
      while (((((pcVar4 = pcVar5 + 1, *pcVar4 == pcVar6[1] &&
                (pcVar4 = pcVar5 + 2, *pcVar4 == pcVar6[2])) &&
               ((pcVar4 = pcVar5 + 3, *pcVar4 == pcVar6[3] &&
                ((pcVar4 = pcVar5 + 4, *pcVar4 == pcVar6[4] &&
                 (pcVar4 = pcVar5 + 5, *pcVar4 == pcVar6[5])))))) &&
              (pcVar4 = pcVar5 + 6, *pcVar4 == pcVar6[6])) &&
             (pcVar4 = pcVar5 + 7, *pcVar4 == pcVar6[7]))) {
        pcVar4 = pcVar5 + 8;
        pcVar6 = pcVar6 + 8;
        if ((*pcVar4 != *pcVar6) || (pcVar5 = pcVar4, pcVar3 + 0x102 <= pcVar4)) break;
      }
      pcVar4 = pcVar4 + (0x102 - (int)(pcVar3 + 0x102));
      if ((int)pcVar7 < (int)pcVar4) {
        *(uint *)((int)this + 0x68) = param_1;
        if ((int)local_10 <= (int)pcVar4) {
LAB_100bfde8:
          if (pcVar4 <= pcVar2) {
            pcVar2 = pcVar4;
          }
          return pcVar2;
        }
        local_5 = (pcVar4 + (int)pcVar3)[-1];
        local_6 = pcVar4[(int)pcVar3];
        pcVar7 = pcVar4;
      }
    }
    pcVar4 = pcVar7;
    param_1 = (uint)*(ushort *)
                     (*(int *)((int)this + 0x38) + (*(uint *)((int)this + 0x2c) & param_1) * 2);
    if ((param_1 <= local_14) || (local_c = local_c - 1, pcVar7 = pcVar4, local_c == 0))
    goto LAB_100bfde8;
  } while( true );
}


// ==== 100bfdf8 FUN_100bfdf8

void FUN_100bfdf8(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *unaff_EBX;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint local_8;
  
  uVar1 = unaff_EBX[9];
  do {
    uVar8 = unaff_EBX[0x19];
    uVar5 = (unaff_EBX[0xd] - uVar8) - unaff_EBX[0x1b];
    if (uVar5 == 0) {
      if ((uVar8 != 0) || (uVar7 = uVar1, unaff_EBX[0x1b] != 0)) {
LAB_100bfe30:
        uVar7 = uVar5;
        if ((uVar1 - 0x106) + unaff_EBX[9] <= uVar8) {
          puVar10 = (undefined4 *)(unaff_EBX[0xc] + uVar1);
          puVar11 = (undefined4 *)unaff_EBX[0xc];
          for (uVar8 = uVar1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          iVar9 = unaff_EBX[0x11];
          unaff_EBX[0x1a] = unaff_EBX[0x1a] - uVar1;
          unaff_EBX[0x19] = unaff_EBX[0x19] - uVar1;
          unaff_EBX[0x15] = unaff_EBX[0x15] - uVar1;
          puVar6 = (ushort *)(unaff_EBX[0xf] + iVar9 * 2);
          do {
            puVar6 = puVar6 + -1;
            iVar9 = iVar9 + -1;
            *puVar6 = ~-(ushort)(*puVar6 < uVar1) & *puVar6 - (short)uVar1;
          } while (iVar9 != 0);
          puVar6 = (ushort *)(unaff_EBX[0xe] + uVar1 * 2);
          uVar8 = uVar1;
          do {
            puVar6 = puVar6 + -1;
            uVar8 = uVar8 - 1;
            *puVar6 = ~-(ushort)(*puVar6 < uVar1) & *puVar6 - (short)uVar1;
          } while (uVar8 != 0);
          uVar7 = uVar5 + uVar1;
        }
      }
    }
    else {
      if (uVar5 != 0xffffffff) goto LAB_100bfe30;
      uVar7 = 0xfffffffe;
    }
    piVar2 = (int *)*unaff_EBX;
    if (piVar2[1] == 0) {
      return;
    }
    iVar9 = unaff_EBX[0x1b];
    iVar3 = unaff_EBX[0x19];
    uVar8 = piVar2[1];
    iVar4 = unaff_EBX[0xc];
    local_8 = uVar8;
    if (uVar7 < uVar8) {
      local_8 = uVar7;
    }
    if (local_8 == 0) {
      local_8 = 0;
    }
    else {
      piVar2[1] = uVar8 - local_8;
      if (*(int *)(piVar2[7] + 0x18) == 0) {
        uVar8 = FUN_100c06aa(piVar2[0xc],(byte *)*piVar2,local_8);
        piVar2[0xc] = uVar8;
      }
      puVar10 = (undefined4 *)*piVar2;
      puVar11 = (undefined4 *)(iVar9 + iVar3 + iVar4);
      for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *piVar2 = *piVar2 + local_8;
      piVar2[2] = piVar2[2] + local_8;
    }
    unaff_EBX[0x1b] = unaff_EBX[0x1b] + local_8;
    if (2 < (uint)unaff_EBX[0x1b]) {
      uVar8 = (uint)*(byte *)(unaff_EBX[0x19] + unaff_EBX[0xc]);
      unaff_EBX[0x10] = uVar8;
      unaff_EBX[0x10] =
           (uVar8 << ((byte)unaff_EBX[0x14] & 0x1f) ^
           (uint)((byte *)(unaff_EBX[0x19] + unaff_EBX[0xc]))[1]) & unaff_EBX[0x13];
    }
    if (0x105 < (uint)unaff_EBX[0x1b]) {
      return;
    }
    if (*(int *)(*unaff_EBX + 4) == 0) {
      return;
    }
  } while( true );
}


// ==== 100bff52 FUN_100bff52

char FUN_100bff52(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar5 = param_1[3] - 5U;
  }
  do {
    uVar3 = param_1[0x1b];
    if (uVar3 < 2) {
      FUN_100bfdf8();
      uVar3 = param_1[0x1b];
      if (uVar3 == 0) {
        if (param_2 == 0) {
          return '\0';
        }
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_100c1a64((int)param_1,puVar4,param_1[0x19] - iVar2,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_100bfc58();
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 != 4) {
            return '\0';
          }
          return '\x02';
        }
        return (param_2 == 4) * '\x02' + '\x01';
      }
    }
    piVar1 = param_1 + 0x19;
    *piVar1 = *piVar1 + uVar3;
    iVar2 = param_1[0x15];
    param_1[0x1b] = 0;
    uVar3 = iVar2 + uVar5;
    if ((*piVar1 == 0) || (uVar3 <= (uint)param_1[0x19])) {
      param_1[0x1b] = param_1[0x19] - uVar3;
      param_1[0x19] = uVar3;
      if (iVar2 < 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_100c1a64((int)param_1,puVar4,uVar3 - iVar2,0);
      param_1[0x15] = param_1[0x19];
      FUN_100bfc58();
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
    iVar2 = param_1[0x15];
    if (param_1[9] - 0x106U <= (uint)(param_1[0x19] - iVar2)) {
      if (iVar2 < 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_100c1a64((int)param_1,puVar4,param_1[0x19] - iVar2,0);
      param_1[0x15] = param_1[0x19];
      FUN_100bfc58();
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
  } while( true );
}


// ==== 100c0078 FUN_100c0078

char FUN_100c0078(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = 0;
  do {
    uVar6 = param_1[0x1b];
    if (uVar6 < 0x106) {
      FUN_100bfdf8();
      uVar6 = param_1[0x1b];
      if ((uVar6 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar6 == 0) {
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          puVar7 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_100c1a64((int)param_1,puVar7,param_1[0x19] - iVar2,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_100bfc58();
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 != 4) {
            return '\0';
          }
          return '\x02';
        }
        return (param_2 == 4) * '\x02' + '\x01';
      }
    }
    if (2 < uVar6) {
      uVar9 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar9;
      uVar4 = *(ushort *)(param_1[0xf] + uVar9 * 2);
      uVar9 = (uint)uVar4;
      *(ushort *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) = uVar4;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    if (((uVar9 != 0) && (param_1[0x19] - uVar9 <= param_1[9] - 0x106U)) && (param_1[0x20] != 2)) {
      pcVar5 = FUN_100bfcac(param_1,uVar9);
      param_1[0x16] = (int)pcVar5;
    }
    if ((uint)param_1[0x16] < 3) {
      bVar8 = *(byte *)(param_1[0x19] + param_1[0xc]);
      *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar8;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + bVar8 + 0x23) = (short)param_1[bVar8 + 0x23] + 1;
      bVar10 = param_1[0x5a6] == param_1[0x5a5] + -1;
      param_1[0x1b] = param_1[0x1b] + -1;
LAB_100c0282:
      param_1[0x19] = param_1[0x19] + 1;
    }
    else {
      sVar3 = (short)param_1[0x19] - (short)param_1[0x1a];
      bVar8 = (char)param_1[0x16] - 3;
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar3;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar8;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      uVar4 = sVar3 - 1;
      *(short *)(param_1 + (byte)(&DAT_10101c98)[bVar8] + 0x124) =
           (short)param_1[(byte)(&DAT_10101c98)[bVar8] + 0x124] + 1;
      if (uVar4 < 0x100) {
        bVar8 = (&DAT_10101a98)[uVar4];
      }
      else {
        bVar8 = (&DAT_10101b98)[uVar4 >> 7];
      }
      *(short *)(param_1 + bVar8 + 0x260) = (short)param_1[bVar8 + 0x260] + 1;
      bVar10 = param_1[0x5a6] == param_1[0x5a5] + -1;
      uVar6 = param_1[0x16];
      param_1[0x1b] = param_1[0x1b] - uVar6;
      if ((uVar6 <= (uint)param_1[0x1e]) && (2 < (uint)param_1[0x1b])) {
        param_1[0x16] = uVar6 - 1;
        do {
          param_1[0x19] = param_1[0x19] + 1;
          uVar9 = ((uint)*(byte *)(param_1[0x19] + 2U + param_1[0xc]) ^
                  param_1[0x10] << ((byte)param_1[0x14] & 0x1f)) & param_1[0x13];
          param_1[0x10] = uVar9;
          uVar4 = *(ushort *)(param_1[0xf] + uVar9 * 2);
          uVar9 = (uint)uVar4;
          *(ushort *)(param_1[0xe] + (param_1[0x19] & param_1[0xb]) * 2) = uVar4;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
          piVar1 = param_1 + 0x16;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        goto LAB_100c0282;
      }
      param_1[0x19] = param_1[0x19] + uVar6;
      param_1[0x16] = 0;
      uVar6 = (uint)*(byte *)(param_1[0x19] + param_1[0xc]);
      param_1[0x10] = uVar6;
      param_1[0x10] =
           (uVar6 << ((byte)param_1[0x14] & 0x1f) ^
           (uint)((byte *)(param_1[0x19] + param_1[0xc]))[1]) & param_1[0x13];
    }
    if (bVar10) {
      iVar2 = param_1[0x15];
      if (iVar2 < 0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar7 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_100c1a64((int)param_1,puVar7,param_1[0x19] - iVar2,0);
      param_1[0x15] = param_1[0x19];
      FUN_100bfc58();
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
  } while( true );
}


// ==== 100c0324 FUN_100c0324

char FUN_100c0324(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  undefined1 *puVar12;
  uint local_8;
  
  local_8 = 0;
LAB_100c0334:
  do {
    uVar8 = param_1[0x1b];
    if (uVar8 < 0x106) {
      FUN_100bfdf8();
      uVar8 = param_1[0x1b];
      if ((uVar8 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar8 == 0) {
        if (param_1[0x18] != 0) {
          bVar11 = *(byte *)(param_1[0x19] + -1 + param_1[0xc]);
          piVar1 = param_1 + 0x5a6;
          *(undefined2 *)(param_1[0x5a7] + *piVar1 * 2) = 0;
          *(byte *)(param_1[0x5a4] + *piVar1) = bVar11;
          *piVar1 = *piVar1 + 1;
          *(short *)(param_1 + bVar11 + 0x23) = (short)param_1[bVar11 + 0x23] + 1;
          param_1[0x18] = 0;
        }
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar12 = (undefined1 *)0x0;
        }
        else {
          puVar12 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_100c1a64((int)param_1,puVar12,param_1[0x19] - iVar2,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_100bfc58();
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 != 4) {
            return '\0';
          }
          return '\x02';
        }
        return (param_2 == 4) * '\x02' + '\x01';
      }
    }
    if (2 < uVar8) {
      uVar8 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar8;
      uVar7 = *(ushort *)(param_1[0xf] + uVar8 * 2);
      local_8 = (uint)uVar7;
      *(ushort *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) = uVar7;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    param_1[0x1c] = param_1[0x16];
    param_1[0x17] = param_1[0x1a];
    param_1[0x16] = 2;
    if (((local_8 != 0) && ((uint)param_1[0x1c] < (uint)param_1[0x1e])) &&
       (param_1[0x19] - local_8 <= param_1[9] - 0x106U)) {
      if (param_1[0x20] != 2) {
        pcVar9 = FUN_100bfcac(param_1,local_8);
        param_1[0x16] = (int)pcVar9;
      }
      if (((uint)param_1[0x16] < 6) &&
         ((param_1[0x20] == 1 ||
          ((param_1[0x16] == 3 && (0x1000 < (uint)(param_1[0x19] - param_1[0x1a]))))))) {
        param_1[0x16] = 2;
      }
    }
    if (((uint)param_1[0x1c] < 3) || ((uint)param_1[0x1c] < (uint)param_1[0x16])) {
      if (param_1[0x18] == 0) {
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x1b] = param_1[0x1b] + -1;
        param_1[0x18] = 1;
        goto LAB_100c0334;
      }
      bVar11 = *(byte *)(param_1[0x19] + -1 + param_1[0xc]);
      *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar11;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + bVar11 + 0x23) = (short)param_1[bVar11 + 0x23] + 1;
      if (param_1[0x5a6] == param_1[0x5a5] + -1) {
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar12 = (undefined1 *)0x0;
        }
        else {
          puVar12 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_100c1a64((int)param_1,puVar12,param_1[0x19] - iVar2,0);
        param_1[0x15] = param_1[0x19];
        FUN_100bfc58();
      }
      param_1[0x19] = param_1[0x19] + 1;
      param_1[0x1b] = param_1[0x1b] + -1;
    }
    else {
      iVar2 = param_1[0x1b];
      iVar3 = param_1[0x19];
      sVar6 = (short)param_1[0x19] - (short)param_1[0x17];
      bVar11 = (char)param_1[0x1c] - 3;
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar6 + -1;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar11;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      uVar7 = sVar6 - 2;
      *(short *)(param_1 + (byte)(&DAT_10101c98)[bVar11] + 0x124) =
           (short)param_1[(byte)(&DAT_10101c98)[bVar11] + 0x124] + 1;
      if (uVar7 < 0x100) {
        bVar11 = (&DAT_10101a98)[uVar7];
      }
      else {
        bVar11 = (&DAT_10101b98)[uVar7 >> 7];
      }
      *(short *)(param_1 + bVar11 + 0x260) = (short)param_1[bVar11 + 0x260] + 1;
      iVar4 = param_1[0x5a5];
      iVar5 = param_1[0x5a6];
      param_1[0x1b] = param_1[0x1b] + (1 - param_1[0x1c]);
      param_1[0x1c] = param_1[0x1c] + -2;
      do {
        param_1[0x19] = param_1[0x19] + 1;
        uVar8 = param_1[0x19];
        if (uVar8 <= (uint)(iVar3 + -3 + iVar2)) {
          uVar10 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
                   (uint)*(byte *)(param_1[0xc] + 2 + uVar8)) & param_1[0x13];
          param_1[0x10] = uVar10;
          uVar7 = *(ushort *)(param_1[0xf] + uVar10 * 2);
          local_8 = (uint)uVar7;
          *(ushort *)(param_1[0xe] + (param_1[0xb] & uVar8) * 2) = uVar7;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
        }
        piVar1 = param_1 + 0x1c;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      param_1[0x18] = 0;
      param_1[0x19] = param_1[0x19] + 1;
      param_1[0x16] = 2;
      if (iVar5 != iVar4 + -1) goto LAB_100c0334;
      iVar2 = param_1[0x15];
      if (iVar2 < 0) {
        puVar12 = (undefined1 *)0x0;
      }
      else {
        puVar12 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_100c1a64((int)param_1,puVar12,param_1[0x19] - iVar2,0);
      param_1[0x15] = param_1[0x19];
      FUN_100bfc58();
    }
    if (*(int *)(*param_1 + 0x10) == 0) {
      return '\0';
    }
  } while( true );
}


// ==== 100c06aa FUN_100c06aa

uint FUN_100c06aa(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  uVar3 = param_1 & 0xffff;
  uVar19 = param_1 >> 0x10;
  if (param_2 == (byte *)0x0) {
    uVar3 = 1;
  }
  else {
    while (param_3 != 0) {
      uVar2 = 0x15b0;
      if (param_3 < 0x15b0) {
        uVar2 = param_3;
      }
      param_3 = param_3 - uVar2;
      if (0xf < (int)uVar2) {
        uVar1 = uVar2 >> 4;
        uVar2 = uVar2 + uVar1 * -0x10;
        do {
          iVar4 = uVar3 + *param_2;
          iVar5 = iVar4 + (uint)param_2[1];
          iVar6 = iVar5 + (uint)param_2[2];
          iVar7 = iVar6 + (uint)param_2[3];
          iVar8 = iVar7 + (uint)param_2[4];
          iVar9 = iVar8 + (uint)param_2[5];
          iVar10 = iVar9 + (uint)param_2[6];
          iVar11 = iVar10 + (uint)param_2[7];
          iVar12 = iVar11 + (uint)param_2[8];
          iVar13 = iVar12 + (uint)param_2[9];
          iVar14 = iVar13 + (uint)param_2[10];
          iVar15 = iVar14 + (uint)param_2[0xb];
          iVar16 = iVar15 + (uint)param_2[0xc];
          iVar17 = iVar16 + (uint)param_2[0xd];
          iVar18 = iVar17 + (uint)param_2[0xe];
          uVar3 = iVar18 + (uint)param_2[0xf];
          uVar19 = uVar19 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12
                   + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
          param_2 = param_2 + 0x10;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        uVar3 = uVar3 + *param_2;
        param_2 = param_2 + 1;
        uVar19 = uVar19 + uVar3;
      }
      uVar3 = uVar3 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
    }
    uVar3 = uVar19 << 0x10 | uVar3;
  }
  return uVar3;
}


// ==== 100c07c7 FUN_100c07c7

void FUN_100c07c7(void)

{
  int in_EAX;
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)(in_EAX + 0x8c);
  iVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_EAX + 0x980);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_EAX + 0xa74);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)(in_EAX + 0x48c) = 1;
  *(undefined4 *)(in_EAX + 0x16a4) = 0;
  *(undefined4 *)(in_EAX + 0x16a0) = 0;
  *(undefined4 *)(in_EAX + 0x16a8) = 0;
  *(undefined4 *)(in_EAX + 0x1698) = 0;
  return;
}


// ==== 100c0827 FUN_100c0827

void FUN_100c0827(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  bool bVar8;
  
  iVar3 = *(int *)(in_EAX + 0xb54 + param_1 * 4);
  iVar6 = *(int *)(in_EAX + 0x1448);
  iVar7 = param_1 * 2;
  bVar8 = SBORROW4(iVar7,iVar6);
  iVar5 = iVar7 - iVar6;
  if (iVar7 <= iVar6) {
    do {
      iVar6 = iVar7;
      if (bVar8 != iVar5 < 0) {
        iVar5 = *(int *)(in_EAX + 0xb58 + iVar7 * 4);
        uVar1 = *(ushort *)(unaff_EDI + iVar5 * 4);
        uVar2 = *(ushort *)(unaff_EDI + *(int *)(in_EAX + 0xb54 + iVar7 * 4) * 4);
        if ((uVar1 < uVar2) ||
           ((uVar1 == uVar2 &&
            (*(byte *)(iVar5 + 0x1450 + in_EAX) <=
             *(byte *)(*(int *)(in_EAX + 0xb54 + iVar7 * 4) + 0x1450 + in_EAX))))) {
          iVar6 = iVar7 + 1;
        }
      }
      iVar5 = *(int *)(in_EAX + 0xb54 + iVar6 * 4);
      uVar1 = *(ushort *)(unaff_EDI + iVar3 * 4);
      uVar2 = *(ushort *)(unaff_EDI + iVar5 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar3 + 0x1450 + in_EAX) <= *(byte *)(iVar5 + 0x1450 + in_EAX))))) break;
      *(int *)(in_EAX + 0xb54 + param_1 * 4) = iVar5;
      iVar4 = *(int *)(in_EAX + 0x1448);
      iVar7 = iVar6 * 2;
      bVar8 = SBORROW4(iVar7,iVar4);
      iVar5 = iVar7 - iVar4;
      param_1 = iVar6;
    } while (iVar5 == 0 || iVar7 < iVar4);
  }
  *(int *)(in_EAX + 0xb54 + param_1 * 4) = iVar3;
  return;
}


// ==== 100c08db FUN_100c08db

void __fastcall FUN_100c08db(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *in_EAX;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  short *psVar16;
  int local_20;
  int *local_18;
  int local_14;
  int local_8;
  
  iVar4 = in_EAX[1];
  local_8 = 0;
  iVar5 = *in_EAX;
  piVar14 = (int *)in_EAX[2];
  iVar13 = *piVar14;
  iVar6 = piVar14[1];
  iVar7 = piVar14[2];
  uVar8 = piVar14[4];
  puVar15 = (undefined4 *)(param_2 + 0xb34);
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  *(undefined2 *)(iVar5 + 2 + *(int *)(param_2 + 0xb54 + *(int *)(param_2 + 0x144c) * 4) * 4) = 0;
  iVar10 = *(int *)(param_2 + 0x144c) + 1;
  if (iVar10 < 0x23d) {
    local_18 = (int *)(param_2 + 0xb54 + iVar10 * 4);
    local_20 = 0x23d - iVar10;
    iVar10 = iVar10 + local_20;
    do {
      iVar9 = *local_18;
      iVar11 = iVar9 * 4;
      uVar12 = *(ushort *)(iVar5 + 2 + (uint)*(ushort *)(iVar11 + 2 + iVar5) * 4) + 1;
      if ((int)uVar8 < (int)uVar12) {
        local_8 = local_8 + 1;
        uVar12 = uVar8;
      }
      *(short *)(iVar11 + 2 + iVar5) = (short)uVar12;
      if (iVar9 <= iVar4) {
        psVar16 = (short *)(param_2 + 0xb34 + uVar12 * 2);
        *psVar16 = *psVar16 + 1;
        local_14 = 0;
        if (iVar7 <= iVar9) {
          local_14 = *(int *)(iVar6 + (iVar9 - iVar7) * 4);
        }
        uVar3 = *(ushort *)(iVar11 + iVar5);
        *(int *)(param_2 + 0x16a0) = *(int *)(param_2 + 0x16a0) + (local_14 + uVar12) * (uint)uVar3;
        if (iVar13 != 0) {
          *(int *)(param_2 + 0x16a4) =
               *(int *)(param_2 + 0x16a4) +
               ((uint)*(ushort *)(iVar11 + 2 + iVar13) + local_14) * (uint)uVar3;
        }
      }
      local_18 = local_18 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    if (local_8 != 0) {
      puVar2 = (ushort *)(param_2 + 0xb34 + uVar8 * 2);
      do {
        iVar13 = uVar8 - 1;
        for (psVar16 = (short *)(param_2 + 0xb34 + iVar13 * 2); *psVar16 == 0;
            psVar16 = psVar16 + -1) {
          iVar13 = iVar13 + -1;
        }
        psVar16 = (short *)(param_2 + 0xb34 + iVar13 * 2);
        *psVar16 = *psVar16 + -1;
        local_8 = local_8 + -2;
        psVar16 = (short *)(param_2 + 0xb36 + iVar13 * 2);
        *psVar16 = *psVar16 + 2;
        *puVar2 = *puVar2 - 1;
      } while (0 < local_8);
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        local_18 = (int *)(uint)*puVar2;
        if (local_18 != (int *)0x0) {
          piVar14 = (int *)(param_2 + 0xb54 + iVar10 * 4);
          do {
            piVar14 = piVar14 + -1;
            iVar10 = iVar10 + -1;
            if (*piVar14 <= iVar4) {
              puVar1 = (ushort *)(iVar5 + *piVar14 * 4);
              if (puVar1[1] != uVar8) {
                local_8._0_2_ = (ushort)uVar8;
                *(int *)(param_2 + 0x16a0) =
                     *(int *)(param_2 + 0x16a0) + (uVar8 - puVar1[1]) * (uint)*puVar1;
                puVar1[1] = (ushort)local_8;
              }
              local_18 = (int *)((int)local_18 - 1);
            }
          } while (local_18 != (int *)0x0);
        }
        puVar2 = puVar2 + -1;
      }
    }
  }
  return;
}


// ==== 100c0a95 scan_tree

/* Library Function - Single Match
    _scan_tree@12
   
   Library: Visual Studio 2005 Release
   __stdcall scan_tree,12 */

void scan_tree(int param_1)

{
  short *psVar1;
  ushort uVar2;
  int in_EAX;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_1c;
  uint local_c;
  ushort *local_8;
  
  local_c = 0xffffffff;
  uVar2 = *(ushort *)(in_EAX + 2);
  iVar5 = 7;
  iVar6 = 0;
  iStack_1c = 4;
  if (uVar2 == 0) {
    iVar5 = 0x8a;
    iStack_1c = 3;
  }
  *(undefined2 *)(in_EAX + 6 + in_ECX * 4) = 0xffff;
  if (-1 < in_ECX) {
    local_8 = (ushort *)(in_EAX + 6);
    iVar7 = in_ECX + 1;
    uVar3 = (uint)uVar2;
    do {
      uVar4 = (uint)*local_8;
      iVar6 = iVar6 + 1;
      if ((iVar5 <= iVar6) || (uVar3 != uVar4)) {
        if (iVar6 < iStack_1c) {
          psVar1 = (short *)(param_1 + 0xa74 + uVar3 * 4);
          *psVar1 = *psVar1 + (short)iVar6;
        }
        else if (uVar3 == 0) {
          if (iVar6 < 0xb) {
            *(short *)(param_1 + 0xab8) = *(short *)(param_1 + 0xab8) + 1;
          }
          else {
            *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
          }
        }
        else {
          if (uVar3 != local_c) {
            psVar1 = (short *)(param_1 + 0xa74 + uVar3 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xab4) = *(short *)(param_1 + 0xab4) + 1;
        }
        iVar6 = 0;
        local_c = uVar3;
        if (uVar4 == 0) {
          iVar5 = 0x8a;
        }
        else {
          if (uVar3 != uVar4) {
            iVar5 = 7;
            iStack_1c = 4;
            goto LAB_100c0b47;
          }
          iVar5 = 6;
        }
        iStack_1c = 3;
      }
LAB_100c0b47:
      local_8 = local_8 + 2;
      iVar7 = iVar7 + -1;
      uVar3 = uVar4;
    } while (iVar7 != 0);
  }
  return;
}


// ==== 100c0b55 FUN_100c0b55

void __fastcall FUN_100c0b55(int param_1,int param_2)

{
  ushort uVar1;
  int in_EAX;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iStack_2c;
  int local_1c;
  uint local_18;
  ushort *local_10;
  uint local_c;
  
  local_18 = 0xffffffff;
  iVar7 = 7;
  iStack_2c = 4;
  if (*(ushort *)(param_1 + 2) == 0) {
    iVar7 = 0x8a;
    iStack_2c = 3;
  }
  if (-1 < param_2) {
    local_10 = (ushort *)(param_1 + 6);
    local_1c = param_2 + 1;
    iVar6 = 0;
    local_c = (uint)*(ushort *)(param_1 + 2);
    do {
      uVar3 = (uint)*local_10;
      iVar5 = iVar6 + 1;
      if ((iVar7 <= iVar5) || (local_c != uVar3)) {
        if (iVar5 < iStack_2c) {
          do {
            uVar8 = (uint)*(ushort *)(in_EAX + 0xa76 + local_c * 4);
            bVar2 = (byte)*(int *)(in_EAX + 0x16b4);
            if ((int)(0x10 - uVar8) < *(int *)(in_EAX + 0x16b4)) {
              uVar4 = *(ushort *)(in_EAX + 0xa74 + local_c * 4);
              *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar4 << (bVar2 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar7 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar4 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              iVar7 = *(int *)(in_EAX + 0x16b4);
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) |
                   *(short *)(in_EAX + 0xa74 + local_c * 4) << (bVar2 & 0x1f);
            }
            iVar5 = iVar5 + -1;
            *(uint *)(in_EAX + 0x16b4) = iVar7 + uVar8;
          } while (iVar5 != 0);
        }
        else {
          if (local_c == 0) {
            iVar7 = *(int *)(in_EAX + 0x16b4);
            bVar2 = (byte)iVar7;
            if (iVar5 < 0xb) {
              uVar4 = *(ushort *)(in_EAX + 0xaba);
              if ((int)(0x10 - (uint)uVar4) < iVar7) {
                uVar1 = *(ushort *)(in_EAX + 0xab8);
                *(ushort *)(in_EAX + 0x16b0) =
                     *(ushort *)(in_EAX + 0x16b0) | uVar1 << (bVar2 & 0x1f);
                *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                     *(undefined1 *)(in_EAX + 0x16b0);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                     *(undefined1 *)(in_EAX + 0x16b1);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                iVar7 = *(int *)(in_EAX + 0x16b4) + -0x10;
                *(ushort *)(in_EAX + 0x16b0) =
                     uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
              }
              else {
                *(ushort *)(in_EAX + 0x16b0) =
                     *(ushort *)(in_EAX + 0x16b0) | *(short *)(in_EAX + 0xab8) << (bVar2 & 0x1f);
              }
              iVar7 = iVar7 + (uint)uVar4;
              iVar6 = iVar6 + -2;
              *(int *)(in_EAX + 0x16b4) = iVar7;
              if (iVar7 < 0xe) {
                *(ushort *)(in_EAX + 0x16b0) =
                     *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
                iVar7 = iVar7 + 3;
LAB_100c0fb9:
                *(int *)(in_EAX + 0x16b4) = iVar7;
                goto LAB_100c0fbf;
              }
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              uVar4 = (ushort)iVar6 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
              iVar7 = *(int *)(in_EAX + 0x16b4) + -0xd;
            }
            else {
              uVar4 = *(ushort *)(in_EAX + 0xabe);
              if ((int)(0x10 - (uint)uVar4) < iVar7) {
                uVar1 = *(ushort *)(in_EAX + 0xabc);
                *(ushort *)(in_EAX + 0x16b0) =
                     *(ushort *)(in_EAX + 0x16b0) | uVar1 << (bVar2 & 0x1f);
                *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                     *(undefined1 *)(in_EAX + 0x16b0);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                     *(undefined1 *)(in_EAX + 0x16b1);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                iVar7 = *(int *)(in_EAX + 0x16b4) + -0x10;
                *(ushort *)(in_EAX + 0x16b0) =
                     uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
              }
              else {
                *(ushort *)(in_EAX + 0x16b0) =
                     *(ushort *)(in_EAX + 0x16b0) | *(short *)(in_EAX + 0xabc) << (bVar2 & 0x1f);
              }
              iVar7 = iVar7 + (uint)uVar4;
              iVar6 = iVar6 + -10;
              *(int *)(in_EAX + 0x16b4) = iVar7;
              if (iVar7 < 10) {
                *(ushort *)(in_EAX + 0x16b0) =
                     *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
                iVar7 = iVar7 + 7;
                goto LAB_100c0fb9;
              }
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              uVar4 = (ushort)iVar6 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
              iVar7 = *(int *)(in_EAX + 0x16b4) + -9;
            }
          }
          else {
            if (local_c != local_18) {
              uVar8 = (uint)*(ushort *)(in_EAX + 0xa76 + local_c * 4);
              bVar2 = (byte)*(int *)(in_EAX + 0x16b4);
              if ((int)(0x10 - uVar8) < *(int *)(in_EAX + 0x16b4)) {
                uVar4 = *(ushort *)(in_EAX + 0xa74 + local_c * 4);
                *(ushort *)(in_EAX + 0x16b0) =
                     *(ushort *)(in_EAX + 0x16b0) | uVar4 << (bVar2 & 0x1f);
                *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                     *(undefined1 *)(in_EAX + 0x16b0);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                     *(undefined1 *)(in_EAX + 0x16b1);
                *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
                iVar7 = *(int *)(in_EAX + 0x16b4) + -0x10;
                *(ushort *)(in_EAX + 0x16b0) =
                     uVar4 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
              }
              else {
                iVar7 = *(int *)(in_EAX + 0x16b4);
                *(ushort *)(in_EAX + 0x16b0) =
                     *(ushort *)(in_EAX + 0x16b0) |
                     *(short *)(in_EAX + 0xa74 + local_c * 4) << (bVar2 & 0x1f);
              }
              *(uint *)(in_EAX + 0x16b4) = iVar7 + uVar8;
              iVar5 = iVar6;
            }
            uVar4 = *(ushort *)(in_EAX + 0xab6);
            iVar7 = *(int *)(in_EAX + 0x16b4);
            if ((int)(0x10 - (uint)uVar4) < iVar7) {
              uVar1 = *(ushort *)(in_EAX + 0xab4);
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar7 & 0x1f);
              *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                   *(undefined1 *)(in_EAX + 0x16b0);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                   *(undefined1 *)(in_EAX + 0x16b1);
              *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
              iVar7 = *(int *)(in_EAX + 0x16b4) + -0x10;
              *(ushort *)(in_EAX + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            }
            else {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | *(short *)(in_EAX + 0xab4) << ((byte)iVar7 & 0x1f)
              ;
            }
            iVar7 = iVar7 + (uint)uVar4;
            iVar5 = iVar5 + -3;
            *(int *)(in_EAX + 0x16b4) = iVar7;
            if (iVar7 < 0xf) {
              *(ushort *)(in_EAX + 0x16b0) =
                   *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar5 << ((byte)iVar7 & 0x1f));
              iVar7 = iVar7 + 2;
              goto LAB_100c0fb9;
            }
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar5 << ((byte)iVar7 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b1);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            uVar4 = (ushort)iVar5 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
            iVar7 = *(int *)(in_EAX + 0x16b4) + -0xe;
          }
          *(ushort *)(in_EAX + 0x16b0) = uVar4;
          *(int *)(in_EAX + 0x16b4) = iVar7;
        }
LAB_100c0fbf:
        iVar5 = 0;
        local_18 = local_c;
        if (uVar3 == 0) {
          iVar7 = 0x8a;
        }
        else {
          if (local_c != uVar3) {
            iVar7 = 7;
            iStack_2c = 4;
            goto LAB_100c0fe2;
          }
          iVar7 = 6;
        }
        iStack_2c = 3;
      }
LAB_100c0fe2:
      local_10 = local_10 + 2;
      local_1c = local_1c + -1;
      iVar6 = iVar5;
      local_c = uVar3;
    } while (local_1c != 0);
  }
  return;
}


// ==== 100c0ff4 FUN_100c0ff4

void FUN_100c0ff4(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  iVar3 = *(int *)(in_EAX + 0x16b4);
  if (iVar3 < 0xc) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_1 + -0x101 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_1 + -0x101 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
    iVar3 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar3 + -0xb;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_1 + -0x101) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_EAX + 0x16b4);
  if (iVar3 < 0xc) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_2 + -1 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_2 + -1 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
    iVar3 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar3 + -0xb;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_2 + -1) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_EAX + 0x16b4);
  if (iVar3 < 0xd) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_3 + -4 << ((byte)iVar3 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar3 + 4;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_3 + -4 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
    iVar3 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar3 + -0xc;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_3 + -4) >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(in_EAX + 0x16b4);
      if (iVar2 < 0xe) {
        *(ushort *)(in_EAX + 0x16b0) =
             *(ushort *)(in_EAX + 0x16b0) |
             *(short *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_1010158c)[iVar3] * 4) <<
             ((byte)iVar2 & 0x1f);
        *(int *)(in_EAX + 0x16b4) = iVar2 + 3;
      }
      else {
        uVar1 = *(ushort *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_1010158c)[iVar3] * 4);
        *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b0);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b1);
        iVar2 = *(int *)(in_EAX + 0x16b4);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(int *)(in_EAX + 0x16b4) = iVar2 + -0xd;
        *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar2 & 0x1f);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  iVar3 = FUN_100c0b55(in_EAX + 0x8c,param_1 + -1);
  FUN_100c0b55(iVar3 + 0x980,param_2 + -1);
  return;
}


// ==== 100c1231 FUN_100c1231

void FUN_100c1231(int param_1,int param_2)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar5 = 0;
  if (*(int *)(in_EAX + 0x1698) != 0) {
    do {
      uVar12 = (uint)*(ushort *)(*(int *)(in_EAX + 0x169c) + uVar5 * 2);
      uVar11 = (uint)*(byte *)(uVar5 + *(int *)(in_EAX + 0x1690));
      uVar5 = uVar5 + 1;
      if (uVar12 == 0) {
        iVar6 = *(int *)(in_EAX + 0x16b4);
        puVar1 = (ushort *)(param_1 + uVar11 * 4);
        uVar11 = (uint)puVar1[1];
        if ((int)(0x10 - uVar11) < iVar6) {
          uVar3 = *puVar1;
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | uVar3 << ((byte)iVar6 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b1);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          iVar6 = *(int *)(in_EAX + 0x16b4) + -0x10 + uVar11;
          *(ushort *)(in_EAX + 0x16b0) = uVar3 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | *puVar1 << ((byte)iVar6 & 0x1f);
          iVar6 = iVar6 + uVar11;
        }
LAB_100c1533:
        *(int *)(in_EAX + 0x16b4) = iVar6;
      }
      else {
        uVar10 = (uint)(byte)(&DAT_10101c98)[uVar11];
        iVar7 = uVar10 * 4;
        uVar8 = (uint)*(ushort *)(iVar7 + 0x406 + param_1);
        iVar9 = *(int *)(in_EAX + 0x16b4);
        if ((int)(0x10 - uVar8) < iVar9) {
          uVar3 = *(ushort *)(param_1 + 0x404 + uVar10 * 4);
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | uVar3 << ((byte)iVar9 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b1);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          iVar9 = *(int *)(in_EAX + 0x16b4) + -0x10;
          *(ushort *)(in_EAX + 0x16b0) = uVar3 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) |
               *(short *)(param_1 + 0x404 + uVar10 * 4) << ((byte)iVar9 & 0x1f);
        }
        *(uint *)(in_EAX + 0x16b4) = iVar9 + uVar8;
        iVar9 = *(int *)(&DAT_10101450 + iVar7);
        if (iVar9 != 0) {
          iVar6 = uVar11 - *(int *)(&DAT_10101d98 + iVar7);
          iVar7 = *(int *)(in_EAX + 0x16b4);
          if (0x10 - iVar9 < iVar7) {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b1);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar7 = *(int *)(in_EAX + 0x16b4) + -0x10;
            *(ushort *)(in_EAX + 0x16b0) =
                 (ushort)iVar6 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
          }
          *(int *)(in_EAX + 0x16b4) = iVar7 + iVar9;
        }
        uVar11 = uVar12 - 1;
        if (uVar11 < 0x100) {
          bVar2 = (&DAT_10101a97)[uVar12];
        }
        else {
          bVar2 = (&DAT_10101b98)[uVar11 >> 7];
        }
        iVar7 = (uint)bVar2 * 4;
        puVar1 = (ushort *)(iVar7 + param_2);
        uVar3 = puVar1[1];
        iVar9 = *(int *)(in_EAX + 0x16b4);
        if ((int)(0x10 - (uint)uVar3) < iVar9) {
          uVar4 = *puVar1;
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | uVar4 << ((byte)iVar9 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b0);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b1);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          iVar9 = *(int *)(in_EAX + 0x16b4) + -0x10;
          *(ushort *)(in_EAX + 0x16b0) = uVar4 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b0) =
               *(ushort *)(in_EAX + 0x16b0) | *puVar1 << ((byte)iVar9 & 0x1f);
        }
        iVar9 = iVar9 + (uint)uVar3;
        *(int *)(in_EAX + 0x16b4) = iVar9;
        iVar6 = *(int *)(&DAT_101014c8 + iVar7);
        if (iVar6 != 0) {
          iVar7 = uVar11 - *(int *)(&DAT_10101e10 + iVar7);
          if (0x10 - iVar6 < iVar9) {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar7 << ((byte)iVar9 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b0);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b1);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar6 = *(int *)(in_EAX + 0x16b4) + -0x10 + iVar6;
            *(ushort *)(in_EAX + 0x16b0) =
                 (ushort)iVar7 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b0) =
                 *(ushort *)(in_EAX + 0x16b0) | (ushort)(iVar7 << ((byte)iVar9 & 0x1f));
            iVar6 = iVar9 + iVar6;
          }
          goto LAB_100c1533;
        }
      }
    } while (uVar5 < *(uint *)(in_EAX + 0x1698));
  }
  uVar3 = *(ushort *)(param_1 + 0x402);
  iVar9 = *(int *)(in_EAX + 0x16b4);
  if ((int)(0x10 - (uint)uVar3) < iVar9) {
    uVar4 = *(ushort *)(param_1 + 0x400);
    *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar4 << ((byte)iVar9 & 0x1f);
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    iVar9 = *(int *)(in_EAX + 0x16b4) + -0x10;
    *(ushort *)(in_EAX + 0x16b0) = uVar4 >> (0x10U - (char)*(int *)(in_EAX + 0x16b4) & 0x1f);
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | *(short *)(param_1 + 0x400) << ((byte)iVar9 & 0x1f);
  }
  *(uint *)(in_EAX + 0x16b4) = iVar9 + (uint)uVar3;
  *(uint *)(in_EAX + 0x16ac) = (uint)*(ushort *)(param_1 + 0x402);
  return;
}


// ==== 100c15e7 FUN_100c15e7

void __fastcall FUN_100c15e7(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar4 = 0;
  puVar1 = (ushort *)(param_1 + 0x8c);
  iVar3 = 7;
  do {
    uVar4 = uVar4 + *puVar1;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = (ushort *)(param_1 + 0xa8);
  iVar3 = 0x79;
  do {
    uVar2 = uVar2 + *puVar1;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = (ushort *)(param_1 + 0x28c);
  iVar3 = 0x80;
  do {
    uVar4 = uVar4 + *puVar1;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(char *)(param_1 + 0x1c) = '\x01' - (uVar2 >> 2 < uVar4);
  return;
}


// ==== 100c163e FUN_100c163e

void FUN_100c163e(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x16b4) < 9) {
    if (*(int *)(in_EAX + 0x16b4) < 1) goto LAB_100c1684;
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
  }
  else {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b1);
  }
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
LAB_100c1684:
  *(undefined2 *)(in_EAX + 0x16b0) = 0;
  *(undefined4 *)(in_EAX + 0x16b4) = 0;
  return;
}


// ==== 100c1695 FUN_100c1695

void __fastcall FUN_100c1695(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_100c163e();
  *(undefined4 *)(iVar1 + 0x16ac) = 8;
  if (param_3 != 0) {
    *(byte *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = (byte)param_1;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    bVar2 = (byte)((uint)param_1 >> 8);
    *(byte *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = bVar2;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    *(byte *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = ~(byte)param_1;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    *(byte *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = ~bVar2;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *(undefined1 *)(*(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 8)) = *param_2;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    param_2 = param_2 + 1;
  }
  return;
}


// ==== 100c1711 FUN_100c1711

void FUN_100c1711(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_EDI;
  ushort auStack_28 [16];
  int local_8;
  
  local_8 = DAT_101281d0;
  iVar7 = 0;
  uVar3 = 0;
  iVar5 = 1;
  do {
    uVar3 = (*(short *)(param_2 + iVar5 * 2 + -2) + uVar3) * 2;
    auStack_28[iVar5] = uVar3;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  if (-1 < param_1) {
    do {
      uVar6 = (uint)*(ushort *)(unaff_EDI + 2 + iVar7 * 4);
      if (uVar6 != 0) {
        uVar3 = auStack_28[uVar6];
        uVar8 = (uint)uVar3;
        auStack_28[uVar6] = uVar3 + 1;
        uVar1 = 0;
        do {
          uVar2 = uVar1;
          uVar4 = uVar8 & 1;
          uVar8 = uVar8 >> 1;
          uVar6 = uVar6 - 1;
          uVar1 = (uVar2 | uVar4) << 1;
        } while (0 < (int)uVar6);
        *(ushort *)(unaff_EDI + iVar7 * 4) = (ushort)uVar2 | (ushort)uVar4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= param_1);
  }
  __security_check_cookie(local_8);
  return;
}


// ==== 100c1796 FUN_100c1796

void FUN_100c1796(int *param_1)

{
  short *psVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int local_10;
  int local_c;
  
  local_c = -1;
  local_10 = ((int *)param_1[2])[3];
  iVar8 = *(int *)param_1[2];
  iVar7 = 0;
  iVar4 = *param_1;
  *(undefined4 *)(in_EAX + 0x1448) = 0;
  *(undefined4 *)(in_EAX + 0x144c) = 0x23d;
  if (0 < local_10) {
    do {
      if (*(short *)(iVar4 + iVar7 * 4) == 0) {
        *(undefined2 *)(iVar4 + 2 + iVar7 * 4) = 0;
      }
      else {
        *(int *)(in_EAX + 0x1448) = *(int *)(in_EAX + 0x1448) + 1;
        *(int *)(in_EAX + 0xb54 + *(int *)(in_EAX + 0x1448) * 4) = iVar7;
        *(undefined1 *)(iVar7 + 0x1450 + in_EAX) = 0;
        local_c = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_10);
  }
  while (*(int *)(in_EAX + 0x1448) < 2) {
    if (local_c < 2) {
      iVar7 = local_c + 1;
      local_c = iVar7;
    }
    else {
      iVar7 = 0;
    }
    *(int *)(in_EAX + 0x1448) = *(int *)(in_EAX + 0x1448) + 1;
    *(int *)(in_EAX + 0xb54 + *(int *)(in_EAX + 0x1448) * 4) = iVar7;
    *(undefined2 *)(iVar7 * 4 + iVar4) = 1;
    *(undefined1 *)(in_EAX + 0x1450 + iVar7) = 0;
    *(int *)(in_EAX + 0x16a0) = *(int *)(in_EAX + 0x16a0) + -1;
    if (iVar8 != 0) {
      *(int *)(in_EAX + 0x16a4) =
           *(int *)(in_EAX + 0x16a4) - (uint)*(ushort *)(iVar7 * 4 + 2 + iVar8);
    }
  }
  param_1[1] = local_c;
  for (iVar8 = *(int *)(in_EAX + 0x1448) / 2; 0 < iVar8; iVar8 = iVar8 + -1) {
    FUN_100c0827(iVar8);
  }
  do {
    uVar5 = *(undefined4 *)(in_EAX + 0xb54 + *(int *)(in_EAX + 0x1448) * 4);
    iVar8 = *(int *)(in_EAX + 0xb58);
    *(int *)(in_EAX + 0x1448) = *(int *)(in_EAX + 0x1448) + -1;
    *(undefined4 *)(in_EAX + 0xb58) = uVar5;
    FUN_100c0827(1);
    *(int *)(in_EAX + 0x144c) = *(int *)(in_EAX + 0x144c) + -1;
    iVar7 = *(int *)(in_EAX + 0xb58);
    *(int *)(in_EAX + 0xb54 + *(int *)(in_EAX + 0x144c) * 4) = iVar8;
    *(int *)(in_EAX + 0x144c) = *(int *)(in_EAX + 0x144c) + -1;
    *(int *)(in_EAX + 0xb54 + *(int *)(in_EAX + 0x144c) * 4) = iVar7;
    psVar1 = (short *)(iVar4 + iVar7 * 4);
    psVar2 = (short *)(iVar4 + iVar8 * 4);
    *(short *)(iVar4 + local_10 * 4) = *psVar1 + *psVar2;
    bVar3 = *(byte *)(in_EAX + 0x1450 + iVar8);
    bVar6 = *(byte *)(in_EAX + 0x1450 + iVar7);
    if (bVar6 <= bVar3) {
      bVar6 = bVar3;
    }
    *(byte *)(in_EAX + 0x1450 + local_10) = bVar6 + 1;
    psVar1[1] = (short)local_10;
    psVar2[1] = (short)local_10;
    *(int *)(in_EAX + 0xb58) = local_10;
    local_10 = local_10 + 1;
    FUN_100c0827(1);
  } while (1 < *(int *)(in_EAX + 0x1448));
  *(int *)(in_EAX + 0x144c) = *(int *)(in_EAX + 0x144c) + -1;
  uVar5 = *(undefined4 *)(in_EAX + 0xb58);
  *(undefined4 *)(in_EAX + 0xb54 + *(int *)(in_EAX + 0x144c) * 4) = uVar5;
  FUN_100c08db(uVar5,in_EAX);
  FUN_100c1711(local_c,in_EAX + 0xb34);
  return;
}


// ==== 100c197e FUN_100c197e

void FUN_100c197e(void)

{
  int iVar1;
  int unaff_ESI;
  
  scan_tree(unaff_ESI);
  scan_tree(unaff_ESI);
  FUN_100c1796((int *)(unaff_ESI + 0xb28));
  iVar1 = 0x12;
  do {
    if (*(short *)(unaff_ESI + 0xa76 + (uint)(byte)(&DAT_1010158c)[iVar1] * 4) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)(unaff_ESI + 0x16a0) = *(int *)(unaff_ESI + 0x16a0) + iVar1 * 3 + 0x11;
  return;
}


// ==== 100c19d6 FUN_100c19d6

void FUN_100c19d6(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x16b4);
  if (iVar1 < 0xe) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(int *)(param_1 + 0x16b4) = iVar1 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b1);
    iVar1 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16b4) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16b0) = (ushort)param_4 >> (0x10U - (char)iVar1 & 0x1f);
  }
  FUN_100c1695(param_3,param_2,1);
  return;
}


// ==== 100c1a64 FUN_100c1a64

void FUN_100c1a64(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x7c) < 1) {
    uVar4 = param_3 + 5;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      FUN_100c15e7(param_1);
    }
    FUN_100c1796((int *)(param_1 + 0xb10));
    FUN_100c1796((int *)(param_1 + 0xb1c));
    iVar2 = FUN_100c197e();
    uVar5 = *(int *)(param_1 + 0x16a0) + 10U >> 3;
    uVar4 = *(int *)(param_1 + 0x16a4) + 10U >> 3;
    if (uVar5 < uVar4) goto LAB_100c1ac9;
  }
  uVar5 = uVar4;
LAB_100c1ac9:
  if ((uVar5 < param_3 + 4U) || (param_2 == (undefined1 *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x16b4);
    bVar3 = (byte)iVar1;
    if (uVar4 == uVar5) {
      iVar2 = param_4 + 2;
      if (iVar1 < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar2 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16b4) = iVar1 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar2 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
             *(undefined1 *)(param_1 + 0x16b0);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
             *(undefined1 *)(param_1 + 0x16b1);
        iVar1 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16b4) = iVar1 + -0xd;
        *(ushort *)(param_1 + 0x16b0) = (ushort)iVar2 >> (0x10U - (char)iVar1 & 0x1f);
      }
      puVar8 = &DAT_10101a20;
      puVar7 = &DAT_101015a0;
    }
    else {
      iVar6 = param_4 + 4;
      if (iVar1 < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar6 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16b4) = iVar1 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar6 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
             *(undefined1 *)(param_1 + 0x16b0);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
             *(undefined1 *)(param_1 + 0x16b1);
        iVar1 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16b4) = iVar1 + -0xd;
        *(ushort *)(param_1 + 0x16b0) = (ushort)iVar6 >> (0x10U - (char)iVar1 & 0x1f);
      }
      FUN_100c0ff4(*(int *)(param_1 + 0xb14) + 1,*(int *)(param_1 + 0xb20) + 1,iVar2 + 1);
      puVar8 = (undefined *)(param_1 + 0x980);
      puVar7 = (undefined *)(param_1 + 0x8c);
    }
    FUN_100c1231((int)puVar7,(int)puVar8);
  }
  else {
    FUN_100c19d6(param_1,param_2,param_3,param_4);
  }
  FUN_100c07c7();
  if (param_4 != 0) {
    FUN_100c163e();
  }
  return;
}


// ==== 100c1c20 DDRAW.DLL::DirectDrawCreateEx thunk -> EXTERNAL:00000003

// ==== 100c1c26 CORE.DLL::UObject::QueryInterface thunk -> EXTERNAL:00000017

// ==== 100c1c2c CORE.DLL::UObject::AddRef thunk -> EXTERNAL:00000018

// ==== 100c1c32 CORE.DLL::UObject::Release thunk -> EXTERNAL:00000019

// ==== 100c1c38 CORE.DLL::UObject::ProcessEvent thunk -> EXTERNAL:0000001a

// ==== 100c1c3e CORE.DLL::UObject::ProcessDelegate thunk -> EXTERNAL:0000001b

// ==== 100c1c44 CORE.DLL::UObject::ProcessState thunk -> EXTERNAL:0000001c

// ==== 100c1c4a CORE.DLL::UObject::ProcessRemoteFunction thunk -> EXTERNAL:0000001d

// ==== 100c1c50 CORE.DLL::UObject::Modify thunk -> EXTERNAL:0000001e

// ==== 100c1c56 CORE.DLL::UObject::PostLoad thunk -> EXTERNAL:0000001f

// ==== 100c1c5c CORE.DLL::UObject::Destroy thunk -> EXTERNAL:00000020

// ==== 100c1c62 CORE.DLL::UObject::Serialize thunk -> EXTERNAL:00000021

// ==== 100c1c68 CORE.DLL::UObject::IsPendingKill thunk -> EXTERNAL:00000022

// ==== 100c1c6e CORE.DLL::UObject::GotoState thunk -> EXTERNAL:00000023

// ==== 100c1c74 CORE.DLL::UObject::GotoLabel thunk -> EXTERNAL:00000024

// ==== 100c1c7a CORE.DLL::UObject::InitExecution thunk -> EXTERNAL:00000025

// ==== 100c1c80 CORE.DLL::UObject::ShutdownAfterError thunk -> EXTERNAL:00000026

// ==== 100c1c86 CORE.DLL::UObject::PostEditChange thunk -> EXTERNAL:00000027

// ==== 100c1c8c CORE.DLL::UObject::CallFunction thunk -> EXTERNAL:00000028

// ==== 100c1c92 CORE.DLL::UObject::ScriptConsoleExec thunk -> EXTERNAL:00000029

// ==== 100c1c98 CORE.DLL::UObject::Register thunk -> EXTERNAL:0000002a

// ==== 100c1c9e CORE.DLL::UObject::LanguageChange thunk -> EXTERNAL:0000002b

// ==== 100c1ca4 CORE.DLL::UObject::ClearL2Game thunk -> EXTERNAL:0000002c

// ==== 100c1caa CORE.DLL::UObject::Rename thunk -> EXTERNAL:0000002d

// ==== 100c1cb0 CORE.DLL::UObject::NetDirty thunk -> EXTERNAL:0000002e

// ==== 100c1cb6 CORE.DLL::UObject::IsLoaded thunk -> EXTERNAL:0000002f

// ==== 100c1cbc CORE.DLL::USubsystem::Tick thunk -> EXTERNAL:00000030

// ==== 100c1cc2 CORE.DLL::UField::PostLoad thunk -> EXTERNAL:00000062

// ==== 100c1cc8 CORE.DLL::UBoolProperty::Serialize thunk -> EXTERNAL:00000063

// ==== 100c1cce CORE.DLL::UField::Register thunk -> EXTERNAL:00000064

// ==== 100c1cd4 CORE.DLL::UField::AddCppProperty thunk -> EXTERNAL:00000065

// ==== 100c1cda CORE.DLL::UField::MergeBools thunk -> EXTERNAL:00000066

// ==== 100c1ce0 CORE.DLL::UField::Bind thunk -> EXTERNAL:00000067

// ==== 100c1ce6 CORE.DLL::UField::GetOwnerClass thunk -> EXTERNAL:00000068

// ==== 100c1cec CORE.DLL::UField::GetPropertiesSize thunk -> EXTERNAL:00000069

// ==== 100c1cf2 CORE.DLL::UProperty::CleanupDestroyed thunk -> EXTERNAL:0000006a

// ==== 100c1cf8 CORE.DLL::UBoolProperty::Link thunk -> EXTERNAL:0000006b

// ==== 100c1cfe CORE.DLL::UBoolProperty::Identical thunk -> EXTERNAL:0000006c

// ==== 100c1d04 CORE.DLL::UProperty::ExportCpp thunk -> EXTERNAL:0000006d

// ==== 100c1d0a CORE.DLL::UBoolProperty::ExportCppItem thunk -> EXTERNAL:0000006e

// ==== 100c1d10 CORE.DLL::UBoolProperty::SerializeItem thunk -> EXTERNAL:0000006f

// ==== 100c1d16 CORE.DLL::UBoolProperty::NetSerializeItem thunk -> EXTERNAL:00000070

// ==== 100c1d1c CORE.DLL::UBoolProperty::ExportTextItem thunk -> EXTERNAL:00000071

// ==== 100c1d22 CORE.DLL::UBoolProperty::ImportText thunk -> EXTERNAL:00000072

// ==== 100c1d28 CORE.DLL::UProperty::ExportText thunk -> EXTERNAL:00000073

// ==== 100c1d2e CORE.DLL::UBoolProperty::CopySingleValue thunk -> EXTERNAL:00000074

// ==== 100c1d34 CORE.DLL::UProperty::CopyCompleteValue thunk -> EXTERNAL:00000075

// ==== 100c1d3a CORE.DLL::UProperty::DestroyValue thunk -> EXTERNAL:00000076

// ==== 100c1d40 CORE.DLL::UProperty::Port thunk -> EXTERNAL:00000077

// ==== 100c1d46 CORE.DLL::UProperty::GetID thunk -> EXTERNAL:00000078

// ==== 100c1d4c CORE.DLL::UProperty::Serialize thunk -> EXTERNAL:00000079

// ==== 100c1d52 CORE.DLL::UIntProperty::Link thunk -> EXTERNAL:0000007a

// ==== 100c1d58 CORE.DLL::UIntProperty::Identical thunk -> EXTERNAL:0000007b

// ==== 100c1d5e CORE.DLL::UIntProperty::ExportCppItem thunk -> EXTERNAL:0000007c

// ==== 100c1d64 CORE.DLL::UIntProperty::SerializeItem thunk -> EXTERNAL:0000007d

// ==== 100c1d6a CORE.DLL::UIntProperty::NetSerializeItem thunk -> EXTERNAL:0000007e

// ==== 100c1d70 CORE.DLL::UIntProperty::ExportTextItem thunk -> EXTERNAL:0000007f

// ==== 100c1d76 CORE.DLL::UIntProperty::ImportText thunk -> EXTERNAL:00000080

// ==== 100c1d7c CORE.DLL::UIntProperty::CopySingleValue thunk -> EXTERNAL:00000081

// ==== 100c1d82 CORE.DLL::UIntProperty::CopyCompleteValue thunk -> EXTERNAL:00000082

// ==== 100c1d88 CORE.DLL::UFloatProperty::Link thunk -> EXTERNAL:00000083

// ==== 100c1d8e CORE.DLL::UFloatProperty::Identical thunk -> EXTERNAL:00000084

// ==== 100c1d94 CORE.DLL::UFloatProperty::ExportCppItem thunk -> EXTERNAL:00000085

// ==== 100c1d9a CORE.DLL::UFloatProperty::SerializeItem thunk -> EXTERNAL:00000086

// ==== 100c1da0 CORE.DLL::UFloatProperty::NetSerializeItem thunk -> EXTERNAL:00000087

// ==== 100c1da6 CORE.DLL::UFloatProperty::ExportTextItem thunk -> EXTERNAL:00000088

// ==== 100c1dac CORE.DLL::UFloatProperty::ImportText thunk -> EXTERNAL:00000089

// ==== 100c1db2 CORE.DLL::UFloatProperty::CopySingleValue thunk -> EXTERNAL:0000008a

// ==== 100c1db8 CORE.DLL::UFloatProperty::CopyCompleteValue thunk -> EXTERNAL:0000008b

// ==== 100c1dbe ENGINE.DLL::URenderDevice::ClearCompiledShaders thunk -> EXTERNAL:000000d9

// ==== 100c1dc4 ENGINE.DLL::URenderDevice::ClearCompiledShader thunk -> EXTERNAL:000000da

// ==== 100c1dca ENGINE.DLL::FRenderResource::GetCacheId thunk -> EXTERNAL:000000f9

// ==== 100c1dd0 __cfltcvt_init

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_10128274 = __cfltcvt;
  PTR_LAB_10128278 = &LAB_100c6fec;
  PTR_LAB_1012827c = &LAB_100c6faa;
  PTR_LAB_10128280 = &LAB_100c6fde;
  PTR_LAB_10128284 = &LAB_100c6f54;
  PTR_LAB_10128288 = __cfltcvt;
  PTR_LAB_1012828c = __cfltcvt_l;
  PTR_LAB_10128290 = __fassign_l;
  PTR_LAB_10128294 = __cropzeros_l;
  PTR_LAB_10128298 = __forcdecpt_l;
  return;
}


// ==== 100c1e30 __fpmath

/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  DAT_101acdc8 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}


// ==== 100c1e50 __alldiv

/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 100c1f40 FUN_100c1f40

void __fastcall FUN_100c1f40(void *param_1)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_101aeb60 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_100c79e0(param_1);
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_100c7de8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100c1f98(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


// ==== 100c1f8f FUN_100c1f8f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_100c1f8f(void *this,int param_1)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100c7d8c();
    }
    if (DAT_101acdc4 == 0) {
      __startOneArgErrorHandling
                (&DAT_10128180,0x12,in_FPUControlWord,unaff_retaddr,param_1,in_stack_00000008);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fcos(extraout_ST0);
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_10103fba) * _DAT_10103fba;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_101acdc4 == 0) {
      uVar1 = __math_exit(&DAT_10128180,0x12,unaff_retaddr,param_1,in_stack_00000008);
      return uVar1;
    }
  }
  return uVar1;
}


// ==== 100c1f98 FUN_100c1f98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_100c1f98(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100c7d8c();
    }
    if (DAT_101acdc4 == 0) {
      __startOneArgErrorHandling(&DAT_10128180,0x12,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fcos(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_10103fba) * _DAT_10103fba;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_101acdc4 == 0) {
      uVar1 = __math_exit(&DAT_10128180,0x12,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}


// ==== 100c2070 FUN_100c2070

void __fastcall FUN_100c2070(void *param_1)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_101aeb60 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_100c7f50(param_1);
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_100c7de8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100c20c8(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


// ==== 100c20bf FUN_100c20bf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_100c20bf(void *this,int param_1)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100c7d8c();
    }
    if (DAT_101acdc4 == 0) {
      __startOneArgErrorHandling
                (&DAT_10128190,0x1e,in_FPUControlWord,unaff_retaddr,param_1,in_stack_00000008);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fsin(extraout_ST0);
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_10103fba) * _DAT_10103fba;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_101acdc4 == 0) {
      uVar1 = __math_exit(&DAT_10128190,0x1e,unaff_retaddr,param_1,in_stack_00000008);
      return uVar1;
    }
  }
  return uVar1;
}


// ==== 100c20c8 FUN_100c20c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_100c20c8(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100c7d8c();
    }
    if (DAT_101acdc4 == 0) {
      __startOneArgErrorHandling(&DAT_10128190,0x1e,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fsin(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_10103fba) * _DAT_10103fba;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_101acdc4 == 0) {
      uVar1 = __math_exit(&DAT_10128190,0x1e,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}


// ==== 100c2159 _JumpToContinuation

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x100c2182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


// ==== 100c2189 FID_conflict:_CallMemberFunction1

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100c218e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 100c2190 _UnwindNestedFrames

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x100c21b9,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


// ==== 100c21e2 FID_conflict:___CxxFrameHandler3

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


// ==== 100c2248 _CallSETranslator

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  int local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x100c22f1;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_101281d0 ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_3c;
}


// ==== 100c231d TranslatorGuardHandler

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
             *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x100c23b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}


// ==== 100c23ba _GetRangeOfTrysToCheck

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = param_1->pTryBlockMap;
  uVar5 = param_1->nTryBlocks;
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      _inconsistency();
    }
    uVar5 = uVar5 - 1;
    if (((pTVar1[uVar5].tryHigh < param_3) && (param_3 <= pTVar1[uVar5].catchHigh)) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((param_1->nTryBlocks < uVar3) || (uVar3 < uVar5)) {
    _inconsistency();
  }
  return pTVar1 + uVar5;
}


// ==== 100c242d __CreateFrameInfo

/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}


// ==== 100c2455 __IsExceptionObjectToBeDestroyed

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}


// ==== 100c2476 __FindAndUnlinkFrame

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2005 Release */

void __cdecl __FindAndUnlinkFrame(void *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_pFrameInfoChain) {
    p_Var2 = __getptd();
    p_Var2->_pFrameInfoChain = *(void **)((int)param_1 + 4);
    return;
  }
  p_Var2 = __getptd();
  pvVar1 = p_Var2->_pFrameInfoChain;
  do {
    pvVar3 = pvVar1;
    if (*(int *)((int)pvVar3 + 4) == 0) {
      _inconsistency();
      return;
    }
    pvVar1 = *(void **)((int)pvVar3 + 4);
  } while (param_1 != *(void **)((int)pvVar3 + 4));
  *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)param_1 + 4);
  return;
}


// ==== 100c24c2 _CallCatchBlock2

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  undefined1 *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_101281d0 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_100c2218;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}


// ==== 100c2520 FUN_100c2520

ulonglong __fastcall FUN_100c2520(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_101aeb64 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    local_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((local_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}


// ==== 100c25cb __CxxThrowException@8

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2005 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_10103468;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}


// ==== 100c2615 type_info::~type_info

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}


// ==== 100c2623 type_info::`scalar_deleting_destructor'

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_10001d20(this);
  }
  return this;
}


// ==== 100c263f type_info::operator==

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}


// ==== 100c2660 _memcpy

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_100c2843_caseD_2;
        case 3:
          goto switchD_100c2843_caseD_3;
        }
        goto switchD_100c2843_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_100c2843_caseD_0;
      case 1:
        goto switchD_100c2843_caseD_1;
      case 2:
        goto switchD_100c2843_caseD_2;
      case 3:
        goto switchD_100c2843_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_100c2843_caseD_2;
            case 3:
              goto switchD_100c2843_caseD_3;
            }
            goto switchD_100c2843_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_100c2843_caseD_2;
            case 3:
              goto switchD_100c2843_caseD_3;
            }
            goto switchD_100c2843_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_100c2843_caseD_2;
            case 3:
              goto switchD_100c2843_caseD_3;
            }
            goto switchD_100c2843_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_100c2843_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_100c2843_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_100c2843_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_100c2843_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_101aeb64 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_100c26bc_caseD_2;
      case 3:
        goto switchD_100c26bc_caseD_3;
      }
      goto switchD_100c26bc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100c26bc_caseD_0;
    case 1:
      goto switchD_100c26bc_caseD_1;
    case 2:
      goto switchD_100c26bc_caseD_2;
    case 3:
      goto switchD_100c26bc_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100c26bc_caseD_2;
          case 3:
            goto switchD_100c26bc_caseD_3;
          }
          goto switchD_100c26bc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100c26bc_caseD_2;
          case 3:
            goto switchD_100c26bc_caseD_3;
          }
          goto switchD_100c26bc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100c26bc_caseD_2;
          case 3:
            goto switchD_100c26bc_caseD_3;
          }
          goto switchD_100c26bc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_100c26bc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100c26bc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100c26bc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100c26bc_caseD_0:
  return _Dst;
}


// ==== 100c29c5 __ArrayUnwind

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}


// ==== 100c2a23 `eh_vector_destructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_100c2a6e();
  return;
}


// ==== 100c2a6e FUN_100c2a6e

void FUN_100c2a6e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


// ==== 100c2a86 `eh_vector_copy_constructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector copy constructor iterator'(void *,void *,unsigned int,int,void
   (__thiscall*)(void *,void *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_copy_constructor_iterator_
               (void *param_1,void *param_2,uint param_3,int param_4,
               _func_void_void_ptr_void_ptr *param_5,_func_void_void_ptr *param_6)

{
  void *in_stack_ffffffcc;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
    (*param_5)(param_2,in_stack_ffffffcc);
    param_2 = (void *)((int)param_2 + param_3);
  }
  FUN_100c2ad7();
  return;
}


// ==== 100c2ad7 FUN_100c2ad7

void FUN_100c2ad7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x1c));
  }
  return;
}


// ==== 100c2aef `eh_vector_constructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *in_stack_ffffffcc;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_100c2b3c();
  return;
}


// ==== 100c2b3c FUN_100c2b3c

void FUN_100c2b3c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}


// ==== 100c2b60 __allmul

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


// ==== 100c2b94 __purecall

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_100c8e85(DAT_101ad19c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_100c9a17(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}


// ==== 100c2bbe FUN_100c2bbe

int __cdecl FUN_100c2bbe(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_100c8e85(DAT_101aeb70);
  piVar2 = (int *)FUN_100c8e85(DAT_101aeb6c);
  if (_Memory <= piVar2) {
    uVar1 = ((int)piVar2 - (int)_Memory) + 4;
    if (3 < uVar1) {
      sVar3 = __msize(_Memory);
      if (sVar3 < uVar1) {
        sVar4 = 0x800;
        if (sVar3 < 0x800) {
          sVar4 = sVar3;
        }
        if ((sVar4 + sVar3 < sVar3) ||
           (pvVar5 = __realloc_crt(_Memory,sVar4 + sVar3), pvVar5 == (void *)0x0)) {
          if (sVar3 + 0x10 < sVar3) {
            return 0;
          }
          pvVar5 = __realloc_crt(_Memory,sVar3 + 0x10);
          if (pvVar5 == (void *)0x0) {
            return 0;
          }
        }
        piVar2 = (int *)((int)pvVar5 + ((int)piVar2 - (int)_Memory >> 2) * 4);
        DAT_101aeb70 = FUN_100c8e0e((int)pvVar5);
      }
      iVar6 = FUN_100c8e0e(param_1);
      *piVar2 = iVar6;
      DAT_101aeb6c = FUN_100c8e0e((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}


// ==== 100c2ca6 __onexit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_100c69c6();
  p_Var1 = (_onexit_t)FUN_100c2bbe((int)_Func);
  FUN_100c2cdc();
  return p_Var1;
}


// ==== 100c2cdc FUN_100c2cdc

void FUN_100c2cdc(void)

{
  FUN_100c69cf();
  return;
}


// ==== 100c2ce2 _atexit

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


// ==== 100c2d00 __alloca_probe_16

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2005 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// ==== 100c2d16 __alloca_probe_8

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// ==== 100c2d30 __alloca_probe

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}


// ==== 100c2d60 _memset

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_101aeb64 != 0)) {
    pauVar2 = __VEC_memzero(_Dst,_Val,_Size);
    return pauVar2;
  }
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


// ==== 100c2dda __CRT_INIT@12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2005 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2,int param_3)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  LPOSVERSIONINFOA lpVersionInformation;
  BOOL BVar5;
  int iVar6;
  DWORD *_Memory;
  code *pcVar7;
  uint uVar8;
  DWORD DVar9;
  undefined4 uVar10;
  SIZE_T dwBytes;
  DWORD *pDVar11;
  
  if (param_2 == 1) {
    dwBytes = 0x94;
    DVar9 = 0;
    pvVar4 = GetProcessHeap();
    lpVersionInformation = HeapAlloc(pvVar4,DVar9,dwBytes);
    if (lpVersionInformation != (LPOSVERSIONINFOA)0x0) {
      lpVersionInformation->dwOSVersionInfoSize = 0x94;
      BVar5 = GetVersionExA(lpVersionInformation);
      DVar9 = 0;
      if (BVar5 == 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
      }
      else {
        DVar1 = lpVersionInformation->dwPlatformId;
        DVar2 = lpVersionInformation->dwMajorVersion;
        DVar3 = lpVersionInformation->dwMinorVersion;
        uVar8 = lpVersionInformation->dwBuildNumber & 0x7fff;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
        if (DVar1 != 2) {
          uVar8 = uVar8 | 0x8000;
        }
        _DAT_101acdf0 = DVar2 * 0x100 + DVar3;
        DAT_101acde8 = DVar1;
        _DAT_101acdec = uVar8;
        DAT_101acdf4 = DVar2;
        _DAT_101acdf8 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_101aeb7c = GetCommandLineA();
            DAT_101acdd0 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_101acdcc = DAT_101acdcc + 1;
                return 1;
              }
              __ioterm();
            }
            __mtterm();
          }
          __heap_term();
        }
      }
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_101acdcc) {
      DAT_101acdcc = DAT_101acdcc + -1;
      if (DAT_101ace24 == 0) {
        __cexit();
      }
      if (param_3 == 0) {
        __ioterm();
        __mtterm();
        __heap_term();
      }
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 1;
      }
      __freeptd((_ptiddata)0x0);
      return 1;
    }
    FUN_100c8efc();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_10128310;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_100c8e85(DAT_101ace6c);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_100c8f6b((int)_Memory,0);
        DVar9 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar9;
        return 1;
      }
      _free(_Memory);
    }
  }
  return 0;
}


// ==== 100c2fb3 ___DllMainCRTStartup

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x100c3045) */
/* WARNING: Removing unreachable block (ram,0x100c2ff2) */
/* WARNING: Removing unreachable block (ram,0x100c3072) */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  if (((param_2 == 0) && (DAT_101acdcc == 0)) ||
     (((param_2 == 1 || (param_2 == 2)) &&
      (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)))) {
    local_20 = 0;
  }
  else {
    local_20 = _DllMain_12(param_3);
    if ((param_2 == 1) && (local_20 == 0)) {
      _DllMain_12(param_3);
      __CRT_INIT_12(param_3,0,param_1);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0)) {
      local_20 = 0;
    }
  }
  return local_20;
}


// ==== 100c30a9 entry

void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}


// ==== 100c3110 FUN_100c3110

void FUN_100c3110(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_101aeb60 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_100caa20();
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_100c7de8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100c3168(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


// ==== 100c3168 FUN_100c3168

void __cdecl FUN_100c3168(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_100c7d8c();
    }
LAB_100c31f7:
    if (DAT_101acdc4 == 0) {
      __startOneArgErrorHandling(&DAT_101281c0,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_100c7d75();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_100c31f7;
    if (DAT_101acdc4 == 0) {
      __math_exit(&DAT_101281c0,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}


// ==== 100c3216 __copysign

/* Library Function - Single Match
    __copysign
   
   Library: Visual Studio 2005 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,SUB84(_Number,0))
  ;
}


// ==== 100c323c FUN_100c323c

bool __cdecl FUN_100c323c(undefined4 param_1,undefined4 param_2)

{
  return (param_2._2_2_ & 0x7ff0) != 0x7ff0;
}


// ==== 100c3251 __isnan

/* Library Function - Single Match
    __isnan
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __cdecl __isnan(double _X)

{
  if ((((_X._6_2_ & 0x7ff8) != 0x7ff0) ||
      ((((ulonglong)_X & 0x7ffff00000000) == 0 && (_X._0_4_ == 0)))) &&
     ((_X._6_2_ & 0x7ff8) != 0x7ff8)) {
    return 0;
  }
  return 1;
}


// ==== 100c327f __fpclass

/* Library Function - Single Match
    __fpclass
   
   Library: Visual Studio 2005 Release */

int __cdecl __fpclass(double _X)

{
  int iVar1;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype(_X._0_4_,(uint)((ulonglong)_X >> 0x20));
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      iVar1 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      iVar1 = 2;
    }
    return iVar1;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (_X == 0.0) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}


// ==== 100c3320 __ftol

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}


// ==== 100c3347 __security_check_cookie

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_101281d0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


// ==== 100c33a0 FUN_100c33a0

void FUN_100c33a0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_101aeb60 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_100cb990();
    return;
  }
  FUN_100c33fd(SUB84((double)in_ST1,0),(uint)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}


// ==== 100c33fd FUN_100c33fd (decompilacao falhou: falhou: Low-level Error: Overlapping input varnodes)

// ==== 100c35c2 FUN_100c35c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c35c2(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}


// ==== 100c35f0 _strncpy

/* Library Function - Single Match
    _strncpy
   
   Library: Visual Studio */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x100c363c;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100c3683;
        goto LAB_100c36f9;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x100c36f5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100c36f9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100c3683;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100c36f5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100c36f5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100c36f5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x100c363c:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_100c3683:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


// ==== 100c3714 __global_unwind2

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100c372c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 100c3779 __local_unwind2

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_100c3734;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_100c3848();
    }
  }
  ExceptionList = local_20;
  return;
}


// ==== 100c3820 __NLG_Notify1

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_101281f8 = param_1;
  DAT_101281f4 = in_EAX;
  DAT_101281fc = unaff_EBP;
  return in_EAX;
}


// ==== 100c3829 __NLG_Notify

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_101281f8 = param_1;
  DAT_101281f4 = in_EAX;
  DAT_101281fc = unaff_EBP;
  return;
}


// ==== 100c3848 FUN_100c3848

void FUN_100c3848(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}


// ==== 100c384c FUN_100c384c

void FUN_100c384c(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}


// ==== 100c386b _LocaleUpdate::_LocaleUpdate

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_10128c58) && ((p_Var2->_ownlocale & DAT_10128b70) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_10128a78) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_10128b70) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}


// ==== 100c38ed __isleadbyte_l

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}


// ==== 100c3923 _isleadbyte

/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2005 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 100c3931 _iswalpha

/* Library Function - Single Match
    _iswalpha
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswalpha(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  return iVar1;
}


// ==== 100c3942 _iswdigit

/* Library Function - Single Match
    _iswdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswdigit(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,4);
  return iVar1;
}


// ==== 100c3950 _iswspace

/* Library Function - Single Match
    _iswspace
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswspace(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,8);
  return iVar1;
}


// ==== 100c395e _iswpunct

/* Library Function - Single Match
    _iswpunct
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswpunct(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x10);
  return iVar1;
}


// ==== 100c3ab8 __vsnprintf_l

/* Library Function - Single Match
    __vsnprintf_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  DWORD *pDVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (char *)0x0) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((_MaxCount == 0) || (_DstBuf != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      local_24._cnt = _MaxCount;
    }
    local_24._flag = 0x42;
    local_24._base = _DstBuf;
    local_24._ptr = _DstBuf;
    iVar2 = FUN_100cd601(&local_24,(byte *)_Format,_Locale,(wchar_t *)_ArgList);
    if (_DstBuf != (char *)0x0) {
      local_24._cnt = local_24._cnt - 1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}


// ==== 100c3b69 __vsnprintf

/* Library Function - Single Match
    __vsnprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsnprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}


// ==== 100c3b84 __snprintf

/* Library Function - Single Match
    __snprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  DWORD *pDVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (char *)0x0) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((_Count == 0) || (_Dest != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (_Count < 0x80000000) {
      local_24._cnt = _Count;
    }
    local_24._flag = 0x42;
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    iVar2 = FUN_100cd601(&local_24,(byte *)_Format,(localeinfo_struct *)0x0,
                         (wchar_t *)&stack0x00000010);
    if (_Dest != (char *)0x0) {
      local_24._cnt = local_24._cnt - 1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}


// ==== 100c3c31 ___ascii_stricmp

/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}


// ==== 100c3c66 __stricmp_l

/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  DWORD *pDVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
    }
    else {
      do {
        iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
        _Str1 = _Str1 + 1;
        iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}


// ==== 100c3d39 __stricmp

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (DAT_101acde0 == 0) {
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
      return iVar2;
    }
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 100c3d89 __hw_cw

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2005 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


// ==== 100c3e17 ___hw_cw_sse2

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2005 Release */

uint __fastcall ___hw_cw_sse2(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_2 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_2 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = param_2 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}


// ==== 100c3eb7 __control87

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2005 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~_Mask & uVar5 | _NewValue & _Mask;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  if (DAT_101aeb64 != 0) {
    uVar5 = 0;
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar4 = MXCSR & 0x8040;
    if (uVar4 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    uVar4 = ~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue;
    if (uVar4 != uVar5) {
      uVar5 = ___hw_cw_sse2(uVar3,uVar4);
      ___set_fpsr_sse2(uVar5);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}


// ==== 100c41ba __controlfp

/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2005 Release */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~(_Mask & 0xfff7ffff) & uVar5 | _Mask & 0xfff7ffff & _NewValue;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  if (DAT_101aeb64 != 0) {
    uVar5 = 0;
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar4 = MXCSR & 0x8040;
    if (uVar4 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    uVar4 = ~(_Mask & 0x300031f) & uVar5 | _Mask & 0x300031f & _NewValue;
    if (uVar4 != uVar5) {
      uVar5 = ___hw_cw_sse2(uVar3,uVar4);
      ___set_fpsr_sse2(uVar5);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}


// ==== 100c44c3 __strdup

/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2005 Release */

char * __cdecl __strdup(char *_Src)

{
  char *_Dst;
  size_t sVar1;
  errno_t eVar2;
  
  if (_Src == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else {
    sVar1 = _strlen(_Src);
    _Dst = _malloc(sVar1 + 1);
    if (_Dst == (char *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}


// ==== 100c4513 ___freetlocinfo

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2005 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_10128eb8)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_10128df8) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_10128b78) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar4[-1] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _free(param_1);
  return;
}


// ==== 100c4653 ___addlocaleref

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2005 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar1 = param_1 + 0x14;
  iVar2 = 6;
  do {
    if (((undefined *)pLVar1[-2] != &DAT_10128b78) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar1);
    }
    if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar1[1]);
    }
    pLVar1 = pLVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  InterlockedIncrement((LONG *)(param_1[0x35] + 0xb4));
  return;
}


// ==== 100c46d9 ___removelocaleref

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2005 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar1 = param_1 + 0x14;
    iVar2 = 6;
    do {
      if (((undefined *)pLVar1[-2] != &DAT_10128b78) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar1);
      }
      if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar1[1]);
      }
      pLVar1 = pLVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    InterlockedDecrement((LONG *)(param_1[0x35] + 0xb4));
  }
  return param_1;
}


// ==== 100c4765 __copytlocinfo_nolock

/* Library Function - Single Match
    __copytlocinfo_nolock
   
   Library: Visual Studio 2005 Release */

void __fastcall __copytlocinfo_nolock(LONG *param_1)

{
  LONG *in_EAX;
  int iVar1;
  LONG *pLVar2;
  
  if (((param_1 != (LONG *)0x0) && (in_EAX != (LONG *)0x0)) && (in_EAX != param_1)) {
    pLVar2 = in_EAX;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar2 = *param_1;
      param_1 = param_1 + 1;
      pLVar2 = pLVar2 + 1;
    }
    *in_EAX = 0;
    ___addlocaleref(in_EAX);
  }
  return;
}


// ==== 100c4789 __updatetlocinfoEx_nolock

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

LONG * __updatetlocinfoEx_nolock(void)

{
  LONG *pLVar1;
  undefined4 *in_EAX;
  LONG *unaff_EDI;
  
  if ((unaff_EDI != (LONG *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    pLVar1 = (LONG *)*in_EAX;
    if (pLVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref(unaff_EDI);
      if (pLVar1 != (LONG *)0x0) {
        ___removelocaleref(pLVar1);
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_10128b80)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}


// ==== 100c47c7 ___updatetlocinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10128b70) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_100c4831();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}


// ==== 100c4831 FUN_100c4831

void FUN_100c4831(void)

{
  FUN_100cf46a(0xc);
  return;
}


// ==== 100c483d sync_legacy_variables_lk

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _sync_legacy_variables_lk
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl sync_legacy_variables_lk(void)

{
  _DAT_101ad610 = *(undefined4 *)(PTR_DAT_10128c58 + 4);
  _DAT_101ad614 = *(undefined4 *)(PTR_DAT_10128c58 + 8);
  _DAT_10128c5c = *(undefined4 *)(PTR_DAT_10128c58 + 0xa8);
  PTR_PTR_10128eb0 = *(undefined **)(PTR_DAT_10128c58 + 0xd4);
  PTR_PTR_10128ee8 = *(undefined **)(PTR_DAT_10128c58 + 0xbc);
  PTR_DAT_10128df0 = *(undefined **)(PTR_DAT_10128c58 + 200);
  _DAT_10129010 = *(undefined4 *)(PTR_DAT_10128c58 + 0xac);
  return;
}


// ==== 100c4890 __strcats

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2005 Release */

void __cdecl __strcats(char *param_1,rsize_t param_2,int param_3)

{
  errno_t eVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < param_3) {
    piVar2 = &param_3;
    iVar3 = param_3;
    do {
      piVar2 = piVar2 + 1;
      eVar1 = _strcat_s(param_1,param_2,(char *)*piVar2);
      if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


// ==== 100c48ce ___lc_strtolc

/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  errno_t eVar2;
  uint _MaxCount;
  char *_Dst;
  char *_Str;
  rsize_t _SizeInBytes;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (char *)0x0;
      _MaxCount = _strcspn(_Str,"_.,");
      while( true ) {
        if (_MaxCount == 0) {
          return 0xffffffff;
        }
        cVar1 = _Str[_MaxCount];
        if (param_2 == (char *)0x0) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '.') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1;
        }
        else if (param_2 == (char *)0x1) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '_') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1 + 0x40;
        }
        else {
          if (param_2 != (char *)0x2) {
            return 0xffffffff;
          }
          if (0xf < _MaxCount) {
            return 0xffffffff;
          }
          if ((cVar1 != '\0') && (cVar1 != ',')) {
            return 0xffffffff;
          }
          _SizeInBytes = 0x10;
          _Dst = param_1 + 0x80;
        }
        eVar2 = _strncpy_s(_Dst,_SizeInBytes,_Str,_MaxCount);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (cVar1 == ',') break;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + 1;
        _Str = _Str + _MaxCount + 1;
        _MaxCount = _strcspn(_Str,"_.,");
      }
      return 0;
    }
    eVar2 = _strncpy_s(param_1 + 0x80,0x10,param_2 + 1,0xf);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    param_1[0x8f] = '\0';
  }
  return 0;
}


// ==== 100c49f7 ___lc_lctostr

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2005 Release */

void __cdecl ___lc_lctostr(char *param_1,rsize_t param_2,char *param_3)

{
  errno_t eVar1;
  
  eVar1 = _strcpy_s(param_1,param_2,param_3);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_3[0x40] != '\0') {
    __strcats(param_1,param_2,2);
  }
  if (param_3[0x80] != '\0') {
    __strcats(param_1,param_2,2);
  }
  return;
}


// ==== 100c4a62 __setlocale_get_all

/* Library Function - Single Match
    __setlocale_get_all
   
   Library: Visual Studio 2005 Release */

char * __setlocale_get_all(void)

{
  bool bVar1;
  char *_Memory;
  errno_t eVar2;
  int iVar3;
  LONG LVar4;
  char *_Dst;
  undefined4 *puVar5;
  int unaff_ESI;
  undefined **local_10;
  int local_c;
  
  bVar1 = true;
  _Memory = __malloc_crt(0x355);
  _Dst = _Memory;
  if (_Memory != (char *)0x0) {
    _Dst = _Memory + 4;
    *_Dst = '\0';
    _Memory[0] = '\x01';
    _Memory[1] = '\0';
    _Memory[2] = '\0';
    _Memory[3] = '\0';
    iVar3 = unaff_ESI + 0x10;
    local_c = 1;
    puVar5 = (undefined4 *)(unaff_ESI + 0x58);
    __strcats(_Dst,0x351,3);
    local_10 = &PTR_s_LC_COLLATE_1010352c;
    do {
      eVar2 = _strcat_s(_Dst,0x351,";");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = _strcmp((char *)*puVar5,*(char **)(iVar3 + 0x58));
      if (iVar3 != 0) {
        bVar1 = false;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 3;
      iVar3 = local_c * 0x10 + unaff_ESI;
      puVar5 = (undefined4 *)(iVar3 + 0x48);
      __strcats(_Dst,0x351,3);
    } while ((int)local_10 < 0x1010355c);
    if (bVar1) {
      _free(_Memory);
      if (*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) {
        LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50));
        if (LVar4 == 0) {
          _free(*(void **)(unaff_ESI + 0x50));
        }
      }
      if (*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) {
        LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54));
        if (LVar4 == 0) {
          _free(*(void **)(unaff_ESI + 0x54));
        }
      }
      _Dst = *(char **)(unaff_ESI + 0x68);
      *(undefined4 *)(unaff_ESI + 0x50) = 0;
      *(undefined4 *)(unaff_ESI + 0x48) = 0;
    }
    else {
      if (*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) {
        LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50));
        if (LVar4 == 0) {
          _free(*(void **)(unaff_ESI + 0x50));
        }
      }
      if (*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) {
        LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54));
        if (LVar4 == 0) {
          _free(*(void **)(unaff_ESI + 0x54));
        }
      }
      *(char **)(unaff_ESI + 0x50) = _Memory;
      *(char **)(unaff_ESI + 0x48) = _Dst;
    }
    *(undefined4 *)(unaff_ESI + 0x4c) = 0;
    *(undefined4 *)(unaff_ESI + 0x54) = 0;
  }
  return _Dst;
}


// ==== 100c4bd3 __expandlocale

/* Library Function - Single Match
    __expandlocale
   
   Library: Visual Studio 2005 Release */

void __cdecl
__expandlocale(char *param_1,char *param_2,rsize_t param_3,undefined2 *param_4,undefined4 *param_5)

{
  wchar_t *_Src;
  wchar_t *_Str1;
  wchar_t *_LpCodePage;
  _ptiddata p_Var1;
  char *_Str1_00;
  errno_t eVar2;
  size_t sVar3;
  int iVar4;
  BOOL BVar5;
  char local_98 [52];
  undefined1 local_64 [92];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)local_64;
  p_Var1 = __getptd();
  _Src = (p_Var1->_setloc_data)._cachein + 6;
  _Str1 = (p_Var1->_setloc_data)._cachein + 8;
  _LpCodePage = (p_Var1->_setloc_data)._cachein + 2;
  _Str1_00 = (char *)((int)(p_Var1->_setloc_data)._cachein + 0x93);
  if (((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (param_3 != 0)) {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      eVar2 = _strcpy_s(param_2,param_3,"C");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
    }
    else {
      sVar3 = _strlen(param_1);
      if ((0x82 < sVar3) ||
         ((iVar4 = _strcmp(_Str1_00,param_1), iVar4 != 0 &&
          (iVar4 = _strcmp((char *)_Str1,param_1), iVar4 != 0)))) {
        iVar4 = ___lc_strtolc(local_98,param_1);
        if ((iVar4 != 0) ||
           (BVar5 = ___get_qualified_locale
                              ((LPLC_STRINGS)local_98,(UINT *)_LpCodePage,(LPLC_STRINGS)local_98),
           BVar5 == 0)) goto LAB_100c4d95;
        *(uint *)_Src = (uint)(ushort)(p_Var1->_setloc_data)._cachein[4];
        ___lc_lctostr(_Str1_00,0x83,local_98);
        if ((*param_1 == '\0') || (0x82 < sVar3)) {
          sVar3 = 0;
          param_1 = "";
        }
        eVar2 = _strncpy_s((char *)_Str1,0x83,param_1,sVar3 + 1);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (param_4 != (undefined2 *)0x0) {
        _memcpy(param_4,_LpCodePage,6);
      }
      if (param_5 != (undefined4 *)0x0) {
        _memcpy(param_5,_Src,4);
      }
      eVar2 = _strcpy_s(param_2,param_3,_Str1_00);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
LAB_100c4d95:
  __security_check_cookie(local_8 ^ (uint)local_64);
  return;
}


// ==== 100c4da7 __setlocale_set_cat

/* Library Function - Single Match
    __setlocale_set_cat
   
   Library: Visual Studio 2005 Release */

void __thiscall __setlocale_set_cat(void *this,int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  _ptiddata p_Var3;
  int iVar4;
  int iVar5;
  errno_t eVar6;
  wchar_t *pwVar7;
  BOOL BVar8;
  uint uVar9;
  LONG LVar10;
  int unaff_ESI;
  wchar_t *pwVar11;
  undefined1 local_1c8 [8];
  int local_1c0;
  undefined4 local_1b8;
  ushort local_1b4 [4];
  uint local_1ac;
  undefined *local_1a8;
  void *local_1a0;
  undefined4 local_19c;
  uint *local_198;
  undefined4 *local_194;
  size_t local_190;
  WORD local_18c [128];
  char local_8c [20];
  undefined1 local_78 [112];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)local_78;
  p_Var3 = __getptd();
  pwVar11 = (p_Var3->_setloc_data)._cacheout + 9;
  iVar4 = __expandlocale(this,local_8c,0x83,local_1b4,&local_19c);
  if (iVar4 != 0) {
    iVar4 = param_1 * 0x10 + unaff_ESI;
    iVar5 = _strcmp(local_8c,*(char **)(iVar4 + 0x48));
    if (iVar5 != 0) {
      local_190 = _strlen(local_8c);
      local_190 = local_190 + 5;
      local_194 = __malloc_crt(local_190);
      if (local_194 != (undefined4 *)0x0) {
        local_1a8 = *(undefined **)(iVar4 + 0x48);
        local_198 = (uint *)(unaff_ESI + 0xc + param_1 * 4);
        local_1ac = *local_198;
        local_1a0 = (void *)((param_1 + 6) * 6 + unaff_ESI);
        _memcpy(local_1c8,local_1a0,6);
        local_1b8 = *(undefined4 *)(unaff_ESI + 4);
        eVar6 = _strcpy_s((char *)(local_194 + 1),local_190 - 4,local_8c);
        if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(iVar4 + 0x48) = local_194 + 1;
        *local_198 = (uint)local_1b4[0];
        _memcpy(local_1a0,local_1b4,6);
        if (param_1 == 2) {
          local_190 = 0;
          *(undefined4 *)(unaff_ESI + 4) = local_19c;
          pwVar7 = pwVar11;
          iVar5 = *(int *)((p_Var3->_setloc_data)._cacheout + 0x19);
          local_1a0 = *(void **)((p_Var3->_setloc_data)._cacheout + 0x1b);
          do {
            if (*(int *)(unaff_ESI + 4) == *(int *)pwVar7) {
              if (local_190 != 0) {
                pwVar7 = pwVar11 + local_190 * 4;
                *(int *)pwVar11 = *(int *)pwVar7;
                *(int *)((p_Var3->_setloc_data)._cacheout + 0xb) = *(int *)(pwVar7 + 2);
                *(int *)pwVar7 = iVar5;
                *(void **)(pwVar7 + 2) = local_1a0;
              }
              break;
            }
            local_1c0 = *(int *)pwVar7;
            local_190 = local_190 + 1;
            *(int *)pwVar7 = iVar5;
            pvVar2 = *(void **)(pwVar7 + 2);
            *(void **)(pwVar7 + 2) = local_1a0;
            pwVar7 = pwVar7 + 4;
            iVar5 = local_1c0;
            local_1a0 = pvVar2;
          } while ((int)local_190 < 5);
          if (local_190 == 5) {
            BVar8 = ___crtGetStringTypeA
                              ((_locale_t)0x0,1,
                               "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                               ,0x7f,local_18c,*(int *)(unaff_ESI + 4),*(BOOL *)(unaff_ESI + 0x14));
            if (BVar8 == 0) {
              (p_Var3->_setloc_data)._cacheout[0xb] = L'\0';
              (p_Var3->_setloc_data)._cacheout[0xc] = L'\0';
            }
            else {
              uVar9 = 0;
              do {
                local_18c[uVar9] = local_18c[uVar9] & 0x1ff;
                uVar9 = uVar9 + 1;
              } while (uVar9 < 0x7f);
              iVar5 = _memcmp(local_18c,PTR_DAT_10128200,0xfe);
              *(uint *)((p_Var3->_setloc_data)._cacheout + 0xb) = (uint)(iVar5 == 0);
            }
            *(int *)pwVar11 = *(int *)(unaff_ESI + 4);
          }
          *(undefined4 *)(unaff_ESI + 0xa8) =
               *(undefined4 *)((p_Var3->_setloc_data)._cacheout + 0xb);
        }
        if (param_1 == 1) {
          *(undefined4 *)(unaff_ESI + 8) = local_19c;
        }
        iVar5 = (**(code **)(&DAT_10103528 + param_1 * 0xc))();
        if (iVar5 == 0) {
          if (local_1a8 != &DAT_10128b78) {
            puVar1 = (undefined4 *)((param_1 + 5) * 0x10 + unaff_ESI);
            LVar10 = InterlockedDecrement((LONG *)*puVar1);
            if (LVar10 == 0) {
              _free((void *)*puVar1);
              _free(*(void **)(iVar4 + 0x54));
              *(undefined4 *)(iVar4 + 0x4c) = 0;
            }
          }
          *local_194 = 1;
          *(undefined4 **)((param_1 + 5) * 0x10 + unaff_ESI) = local_194;
        }
        else {
          *(undefined **)(iVar4 + 0x48) = local_1a8;
          _free(local_194);
          *local_198 = local_1ac;
          *(undefined4 *)(unaff_ESI + 4) = local_1b8;
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_78);
  return;
}


// ==== 100c509d __setlocale_nolock

/* Library Function - Single Match
    __setlocale_nolock
   
   Library: Visual Studio 2005 Release */

void __fastcall __setlocale_nolock(char *param_1,int param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  errno_t eVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  int local_98;
  int local_90;
  char local_8c [20];
  undefined1 local_78 [112];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)local_78;
  iVar7 = 0;
  if (param_3 != 0) {
    if (param_1 != (char *)0x0) {
      __setlocale_set_cat(param_1,param_3);
    }
    goto LAB_100c5259;
  }
  bVar1 = true;
  local_90 = 0;
  if (param_1 != (char *)0x0) {
    if (((*param_1 == 'L') && (param_1[1] == 'C')) && (param_1[2] == '_')) {
      do {
        pcVar2 = _strpbrk(param_1,"=;");
        if (((pcVar2 == (char *)0x0) || (sVar3 = (int)pcVar2 - (int)param_1, sVar3 == 0)) ||
           (*pcVar2 == ';')) goto LAB_100c5259;
        local_98 = 1;
        ppuVar8 = &PTR_s_LC_COLLATE_1010352c;
        do {
          iVar7 = _strncmp(*ppuVar8,param_1,sVar3);
          if ((iVar7 == 0) && (sVar4 = _strlen(*ppuVar8), sVar3 == sVar4)) break;
          local_98 = local_98 + 1;
          ppuVar8 = ppuVar8 + 3;
        } while ((int)ppuVar8 < 0x1010355d);
        pcVar2 = pcVar2 + 1;
        sVar3 = _strcspn(pcVar2,";");
        if ((sVar3 == 0) && (*pcVar2 != ';')) goto LAB_100c5259;
        if (local_98 < 6) {
          eVar5 = _strncpy_s(local_8c,0x83,pcVar2,sVar3);
          if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          local_8c[sVar3] = '\0';
          iVar7 = __setlocale_set_cat(local_8c,local_98);
          if (iVar7 != 0) {
            local_90 = local_90 + 1;
          }
        }
      } while ((pcVar2[sVar3] != '\0') && (param_1 = pcVar2 + sVar3 + 1, *param_1 != '\0'));
    }
    else {
      iVar6 = __expandlocale(param_1,local_8c,0x83,(undefined2 *)0x0,(undefined4 *)0x0);
      if (iVar6 == 0) goto LAB_100c5259;
      puVar9 = (undefined4 *)(param_2 + 0x48);
      do {
        if (iVar7 != 0) {
          iVar6 = _strcmp(local_8c,(char *)*puVar9);
          if ((iVar6 == 0) || (iVar6 = __setlocale_set_cat(local_8c,iVar7), iVar6 != 0)) {
            local_90 = local_90 + 1;
          }
          else {
            bVar1 = false;
          }
        }
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 4;
      } while (iVar7 < 6);
      if (bVar1) goto LAB_100c5254;
    }
    if (local_90 == 0) goto LAB_100c5259;
  }
LAB_100c5254:
  __setlocale_get_all();
LAB_100c5259:
  __security_check_cookie(local_8 ^ (uint)local_78);
  return;
}


// ==== 100c526b _setlocale

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _setlocale
   
   Library: Visual Studio 2005 Release */

char * __cdecl _setlocale(int _Category,char *_Locale)

{
  DWORD *pDVar1;
  _ptiddata p_Var2;
  LONG *pLVar3;
  int iVar4;
  char *local_24;
  
  local_24 = (char *)0x0;
  if ((uint)_Category < 6) {
    p_Var2 = __getptd();
    ___updatetlocinfo();
    p_Var2->_ownlocale = p_Var2->_ownlocale | 0x10;
    pLVar3 = __calloc_crt(0xd8,1);
    if (pLVar3 != (LONG *)0x0) {
      __lock(0xc);
      __copytlocinfo_nolock(&p_Var2->ptlocinfo->refcount);
      FUN_100c5399();
      local_24 = (char *)__setlocale_nolock(_Locale,(int)pLVar3,_Category);
      if (local_24 == (char *)0x0) {
        ___removelocaleref(pLVar3);
        ___freetlocinfo(pLVar3);
      }
      else {
        if (_Locale != (char *)0x0) {
          iVar4 = _strcmp(_Locale,&DAT_10128b78);
          if (iVar4 != 0) {
            DAT_101acde0 = 1;
          }
        }
        __lock(0xc);
        __updatetlocinfoEx_nolock();
        ___removelocaleref(pLVar3);
        if (((p_Var2->_ownlocale & 2) == 0) && (((byte)DAT_10128b70 & 1) == 0)) {
          __updatetlocinfoEx_nolock();
          _memcpy(&DAT_101ad5f8,PTR_DAT_10128c58 + 0xc,0x18);
          sync_legacy_variables_lk();
        }
        FUN_100c53a5();
      }
    }
    FUN_100c53d6();
  }
  else {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_24 = (char *)0x0;
  }
  return local_24;
}


// ==== 100c5399 FUN_100c5399

void FUN_100c5399(void)

{
  FUN_100cf46a(0xc);
  return;
}


// ==== 100c53a5 FUN_100c53a5

void FUN_100c53a5(void)

{
  FUN_100cf46a(0xc);
  return;
}


// ==== 100c53d6 FUN_100c53d6

void FUN_100c53d6(void)

{
  int unaff_ESI;
  
  *(uint *)(unaff_ESI + 0x70) = *(uint *)(unaff_ESI + 0x70) & 0xffffffef;
  return;
}


// ==== 100c53db _free

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_101aea40 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_100d182c(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_100c5431();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_101ad2b4,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_100ce0fa();
      DVar4 = GetLastError();
      DVar4 = FUN_100ce0bf(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}


// ==== 100c5431 FUN_100c5431

void FUN_100c5431(void)

{
  FUN_100cf46a(4);
  return;
}


// ==== 100c5469 __atof_l

/* Library Function - Single Match
    __atof_l
   
   Library: Visual Studio 2005 Release */

double __cdecl __atof_l(char *_String,_locale_t _Locale)

{
  double dVar1;
  DWORD *pDVar2;
  uint uVar3;
  _locale_t _Locale_00;
  FLT p_Var4;
  _flt local_2c;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_String == (char *)0x0) {
    pDVar2 = FUN_100ce0fa();
    *pDVar2 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    dVar1 = 0.0;
  }
  else {
    while( true ) {
      if ((int)(local_14.locinfo)->locale_name[3] < 2) {
        uVar3 = (byte)local_14.locinfo[1].lc_category[0].locale[(uint)(byte)*_String * 2] & 8;
      }
      else {
        uVar3 = __isctype_l((uint)(byte)*_String,8,&local_14);
      }
      if (uVar3 == 0) break;
      _String = _String + 1;
    }
    _Locale_00 = (_locale_t)_strlen(_String);
    p_Var4 = __fltin2(&local_2c,_String,_Locale_00);
    dVar1 = p_Var4->dval;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return dVar1;
}


// ==== 100c5512 _atof

/* Library Function - Single Match
    _atof
   
   Library: Visual Studio 2005 Release */

double __cdecl _atof(char *_String)

{
  double dVar1;
  
  dVar1 = __atof_l(_String,(_locale_t)0x0);
  return dVar1;
}


// ==== 100c5520 __tolower_l

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  DWORD *pDVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_100c557f:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      pDVar4 = FUN_100ce0fa();
      *pDVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_100c557f;
    if (iVar3 == 1) {
      uVar2 = (uint)local_c;
    }
    else {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}


// ==== 100c5637 _tolower

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_101acde0 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}


// ==== 100c565e __isalpha_l

/* Library Function - Single Match
    __isalpha_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalpha_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x103;
  }
  else {
    uVar1 = __isctype_l(_C,0x103,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 100c56b2 _isalpha

/* Library Function - Single Match
    _isalpha
   
   Library: Visual Studio 2005 Release */

int __cdecl _isalpha(int _C)

{
  int iVar1;
  
  if (DAT_101acde0 == 0) {
    return *(ushort *)(PTR_DAT_10128c48 + _C * 2) & 0x103;
  }
  iVar1 = __isalpha_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 100c56dd __isdigit_l

/* Library Function - Single Match
    __isdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 100c572c _isdigit

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_101acde0 == 0) {
    return (byte)PTR_DAT_10128c48[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 100c5755 __isxdigit_l

/* Library Function - Single Match
    __isxdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isxdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x80;
  }
  else {
    uVar1 = __isctype_l(_C,0x80,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 100c57a9 _isxdigit

/* Library Function - Single Match
    _isxdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isxdigit(int _C)

{
  int iVar1;
  
  if (DAT_101acde0 == 0) {
    return (byte)PTR_DAT_10128c48[_C * 2] & 0x80;
  }
  iVar1 = __isxdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 100c57d4 __isspace_l

/* Library Function - Single Match
    __isspace_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isspace_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 8;
  }
  else {
    uVar1 = __isctype_l(_C,8,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 100c5823 _isspace

/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2005 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (DAT_101acde0 == 0) {
    return (byte)PTR_DAT_10128c48[_C * 2] & 8;
  }
  iVar1 = __isspace_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 100c584c __isalnum_l

/* Library Function - Single Match
    __isalnum_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalnum_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x107;
  }
  else {
    uVar1 = __isctype_l(_C,0x107,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 100c58a0 _isalnum

/* Library Function - Single Match
    _isalnum
   
   Library: Visual Studio 2005 Release */

int __cdecl _isalnum(int _C)

{
  int iVar1;
  
  if (DAT_101acde0 == 0) {
    return *(ushort *)(PTR_DAT_10128c48 + _C * 2) & 0x107;
  }
  iVar1 = __isalnum_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 100c58cb __toupper_l

/* Library Function - Single Match
    __toupper_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __toupper_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  DWORD *pDVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 2;
    }
    else {
      uVar2 = __isctype_l(_C,2,&local_1c);
    }
    if (uVar2 == 0) {
LAB_100c5928:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].refcount + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      pDVar4 = FUN_100ce0fa();
      *pDVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x200,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_100c5928;
    if (iVar3 == 1) {
      uVar2 = (uint)local_c;
    }
    else {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}


// ==== 100c59e3 _toupper

/* Library Function - Single Match
    _toupper
   
   Library: Visual Studio 2005 Release */

int __cdecl _toupper(int _C)

{
  if (DAT_101acde0 == 0) {
    if (_C - 0x61U < 0x1a) {
      return _C + -0x20;
    }
  }
  else {
    _C = __toupper_l(_C,(_locale_t)0x0);
  }
  return _C;
}


// ==== 100c5a0a _atol

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}


// ==== 100c5a1b _atol thunk -> 100c5a0a

// ==== 100c5a20 _memmove

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_100c5c03_caseD_2;
        case 3:
          goto switchD_100c5c03_caseD_3;
        }
        goto switchD_100c5c03_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_100c5c03_caseD_0;
      case 1:
        goto switchD_100c5c03_caseD_1;
      case 2:
        goto switchD_100c5c03_caseD_2;
      case 3:
        goto switchD_100c5c03_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_100c5c03_caseD_2;
            case 3:
              goto switchD_100c5c03_caseD_3;
            }
            goto switchD_100c5c03_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_100c5c03_caseD_2;
            case 3:
              goto switchD_100c5c03_caseD_3;
            }
            goto switchD_100c5c03_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_100c5c03_caseD_2;
            case 3:
              goto switchD_100c5c03_caseD_3;
            }
            goto switchD_100c5c03_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_100c5c03_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_100c5c03_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_100c5c03_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_100c5c03_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_101aeb64 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_100c5a7c_caseD_2;
      case 3:
        goto switchD_100c5a7c_caseD_3;
      }
      goto switchD_100c5a7c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_100c5a7c_caseD_0;
    case 1:
      goto switchD_100c5a7c_caseD_1;
    case 2:
      goto switchD_100c5a7c_caseD_2;
    case 3:
      goto switchD_100c5a7c_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100c5a7c_caseD_2;
          case 3:
            goto switchD_100c5a7c_caseD_3;
          }
          goto switchD_100c5a7c_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100c5a7c_caseD_2;
          case 3:
            goto switchD_100c5a7c_caseD_3;
          }
          goto switchD_100c5a7c_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_100c5a7c_caseD_2;
          case 3:
            goto switchD_100c5a7c_caseD_3;
          }
          goto switchD_100c5a7c_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_100c5a7c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_100c5a7c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_100c5a7c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_100c5a7c_caseD_0:
  return _Dst;
}


// ==== 100c5d90 swap

/* Library Function - Single Match
    _swap
   
   Library: Visual Studio 2005 Release */

void __cdecl swap(void)

{
  undefined1 uVar1;
  undefined1 *in_EAX;
  undefined1 *in_ECX;
  int in_EDX;
  
  if (in_EAX != in_ECX) {
    for (; in_EDX != 0; in_EDX = in_EDX + -1) {
      uVar1 = *in_EAX;
      *in_EAX = *in_ECX;
      *in_ECX = uVar1;
      in_EAX = in_EAX + 1;
      in_ECX = in_ECX + 1;
    }
  }
  return;
}


// ==== 100c5dc0 shortsort

/* Library Function - Single Match
    _shortsort
   
   Library: Visual Studio 2005 Release */

void __cdecl shortsort(undefined1 *param_1,undefined1 *param_2,int param_3,undefined *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  for (; puVar2 = param_1, puVar4 = param_1, param_1 < param_2; param_2 = param_2 + -param_3) {
    while (puVar4 = puVar4 + param_3, puVar4 <= param_2) {
      iVar3 = (*(code *)param_4)(puVar4,puVar2);
      if (0 < iVar3) {
        puVar2 = puVar4;
      }
    }
    if ((puVar2 != param_2) && (param_3 != 0)) {
      puVar4 = param_2;
      iVar3 = param_3;
      do {
        uVar1 = puVar4[(int)puVar2 - (int)param_2];
        puVar4[(int)puVar2 - (int)param_2] = *puVar4;
        iVar3 = iVar3 + -1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0);
    }
  }
  return;
}


// ==== 100c5e50 _qsort

/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2005 Release */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  undefined1 uVar1;
  DWORD *pDVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  size_t sVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *local_100;
  undefined1 *local_fc;
  int local_f4;
  undefined4 auStack_f0 [30];
  undefined4 auStack_78 [30];
  
  if ((_Base == (void *)0x0) && (_NumOfElements != 0)) {
    pDVar2 = FUN_100ce0fa();
    *pDVar2 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return;
  }
  if ((_SizeOfElements == 0) || (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    pDVar2 = FUN_100ce0fa();
    *pDVar2 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return;
  }
  if (_NumOfElements < 2) {
    return;
  }
  local_f4 = 0;
  local_100 = _Base;
  local_fc = (undefined1 *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_100c5ef3:
  while (uVar3 = (uint)((int)local_fc - (int)local_100) / _SizeOfElements + 1, 8 < uVar3) {
    puVar4 = local_100 + (uVar3 >> 1) * _SizeOfElements;
    iVar5 = (*_PtFuncCompare)(local_100,puVar4);
    if (0 < iVar5) {
      swap();
    }
    iVar5 = (*_PtFuncCompare)(local_100,local_fc);
    if (0 < iVar5) {
      swap();
    }
    iVar5 = (*_PtFuncCompare)(puVar4,local_fc);
    puVar8 = local_100;
    puVar9 = local_fc;
    if (0 < iVar5) {
      swap();
    }
LAB_100c5fa0:
    if (puVar8 < puVar4) {
      do {
        puVar8 = puVar8 + _SizeOfElements;
        if (puVar4 <= puVar8) goto LAB_100c5fc0;
        iVar5 = (*_PtFuncCompare)(puVar8,puVar4);
      } while (iVar5 < 1);
      if (puVar4 <= puVar8) goto LAB_100c5fc0;
    }
    else {
LAB_100c5fc0:
      do {
        puVar8 = puVar8 + _SizeOfElements;
        if (local_fc < puVar8) break;
        iVar5 = (*_PtFuncCompare)(puVar8,puVar4);
      } while (iVar5 < 1);
    }
    do {
      puVar9 = puVar9 + -_SizeOfElements;
      if (puVar9 <= puVar4) break;
      iVar5 = (*_PtFuncCompare)(puVar9,puVar4);
    } while (0 < iVar5);
    if (puVar8 <= puVar9) {
      if (puVar8 != puVar9) {
        puVar6 = puVar9;
        sVar7 = _SizeOfElements;
        do {
          uVar1 = puVar6[(int)puVar8 - (int)puVar9];
          puVar6[(int)puVar8 - (int)puVar9] = *puVar6;
          sVar7 = sVar7 - 1;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (sVar7 != 0);
      }
      if (puVar4 == puVar9) {
        puVar4 = puVar8;
      }
      goto LAB_100c5fa0;
    }
    puVar9 = puVar9 + _SizeOfElements;
    if (puVar4 < puVar9) {
      do {
        puVar9 = puVar9 + -_SizeOfElements;
        if (puVar9 <= puVar4) goto LAB_100c6060;
        iVar5 = (*_PtFuncCompare)(puVar9,puVar4);
      } while (iVar5 == 0);
      if (puVar9 <= puVar4) goto LAB_100c6060;
    }
    else {
LAB_100c6060:
      do {
        puVar9 = puVar9 + -_SizeOfElements;
        if (puVar9 <= local_100) break;
        iVar5 = (*_PtFuncCompare)(puVar9,puVar4);
      } while (iVar5 == 0);
    }
    if ((int)puVar9 - (int)local_100 < (int)local_fc - (int)puVar8) goto LAB_100c60bd;
    if (local_100 < puVar9) {
      auStack_f0[local_f4] = local_100;
      auStack_78[local_f4] = puVar9;
      local_f4 = local_f4 + 1;
    }
    local_100 = puVar8;
    if (local_fc <= puVar8) goto LAB_100c5f16;
  }
  shortsort(local_100,local_fc,_SizeOfElements,_PtFuncCompare);
  goto LAB_100c5f16;
LAB_100c60bd:
  if (puVar8 < local_fc) {
    auStack_f0[local_f4] = puVar8;
    auStack_78[local_f4] = local_fc;
    local_f4 = local_f4 + 1;
  }
  local_fc = puVar9;
  if (puVar9 <= local_100) {
LAB_100c5f16:
    local_f4 = local_f4 + -1;
    if (local_f4 < 0) {
      return;
    }
    local_100 = (undefined1 *)auStack_f0[local_f4];
    local_fc = (undefined1 *)auStack_78[local_f4];
  }
  goto LAB_100c5ef3;
}


// ==== 100c6100 FUN_100c6100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100c6100(double param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if ((DAT_101aeb60 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      if (uVar1 < 0x3ff) {
        return (float10)0;
      }
      if (uVar1 < 0x433) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    else {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0xbff) {
        return (float10)(double)((-(ulonglong)(param_1 < -0.0) | (ulonglong)DAT_10103630) &
                                0xbff0000000000000);
      }
      if (uVar1 < 0xc33) {
        return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & 0x3ff0000000000000));
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ed);
    }
    return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
  }
  uVar2 = __ctrlfp();
  uVar1 = (uint)(CONCAT26(param_1._6_2_,param_1._0_6_) >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype((int)param_1._0_6_,uVar1);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp();
        return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
      }
      if (iVar3 == 3) {
        fVar4 = __handle_qnan1(0xb,(double)CONCAT44((int)(CONCAT26(param_1._6_2_,param_1._0_6_) >>
                                                         0x20),(int)param_1._0_6_));
        return fVar4;
      }
    }
    dVar5 = (double)CONCAT26(param_1._6_2_,param_1._0_6_) + 1.0;
    uVar7 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar1 = 8;
  }
  else {
    fVar4 = __frnd((double)CONCAT44(uVar1,(int)param_1._0_6_));
    dVar5 = (double)fVar4;
    if (((double)CONCAT26(param_1._6_2_,param_1._0_6_) == dVar5) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp();
      return (float10)dVar5;
    }
    uVar7 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar1 = 0x10;
  }
  fVar4 = (float10)__except1(uVar1,0xb,uVar7,dVar5,uVar2);
                    /* WARNING: Read-only address (ram,0x10103630) is written */
  return fVar4;
}


// ==== 100c6270 FUN_100c6270

void FUN_100c6270(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_101aeb60 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_100d31f0();
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_100c7de8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100c62c8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


// ==== 100c62c8 FUN_100c62c8

void __cdecl FUN_100c62c8(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_100c7d8c();
    }
LAB_100c6357:
    if (DAT_101acdc4 == 0) {
      __startOneArgErrorHandling(&DAT_10128210,0xe,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_100c7d75();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_100c6357;
    if (DAT_101acdc4 == 0) {
      __math_exit(&DAT_10128210,0xe,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}


// ==== 100c6390 _strchr

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2019 */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}


// ==== 100c6556 FUN_100c6556

void FUN_100c6556(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}


// ==== 100c6580 __aullshr

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2005 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}


// ==== 100c65a0 FUN_100c65a0

float10 __cdecl FUN_100c65a0(double param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if ((DAT_101aeb60 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0x3ff) {
        return (float10)(double)(-(ulonglong)(0.0 < param_1) & 0x3ff0000000000000);
      }
      if (uVar1 < 0x433) {
        return (float10)(dVar5 + (double)(-(ulonglong)(dVar5 < param_1) & 0x3ff0000000000000));
      }
    }
    else {
      if (uVar1 < 0xbff) {
        return (float10)-0.0;
      }
      if (uVar1 < 0xc33) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ec);
    }
    return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
  }
  uVar2 = __ctrlfp();
  uVar1 = (uint)(CONCAT26(param_1._6_2_,param_1._0_6_) >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype((int)param_1._0_6_,uVar1);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp();
        return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
      }
      if (iVar3 == 3) {
        fVar4 = __handle_qnan1(0xc,(double)CONCAT44((int)(CONCAT26(param_1._6_2_,param_1._0_6_) >>
                                                         0x20),(int)param_1._0_6_));
        return fVar4;
      }
    }
    dVar5 = (double)CONCAT26(param_1._6_2_,param_1._0_6_) + 1.0;
    uVar7 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar1 = 8;
  }
  else {
    fVar4 = __frnd((double)CONCAT44(uVar1,(int)param_1._0_6_));
    dVar5 = (double)fVar4;
    if (((double)CONCAT26(param_1._6_2_,param_1._0_6_) == dVar5) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp();
      return (float10)dVar5;
    }
    uVar7 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar1 = 0x10;
  }
  fVar4 = (float10)__except1(uVar1,0xc,uVar7,dVar5,uVar2);
  return fVar4;
}


// ==== 100c66d8 FUN_100c66d8

void __fastcall FUN_100c66d8(undefined4 param_1)

{
  __cintrindisp1(param_1,0x1012904a);
  return;
}


// ==== 100c66e2 FUN_100c66e2

void FUN_100c66e2(void)

{
  undefined4 in_ECX;
  
  __cintrindisp1(in_ECX,0x1012906a);
  return;
}


// ==== 100c66e9 FUN_100c66e9

void FUN_100c66e9(void)

{
  undefined4 in_ECX;
  
  __cintrindisp1(in_ECX,0x1012908a);
  return;
}


// ==== 100c66fa FUN_100c66fa

void __fastcall FUN_100c66fa(undefined4 param_1)

{
  __cintrindisp2(param_1,0x10128220);
  return;
}


// ==== 100c676c FUN_100c676c

void __fastcall FUN_100c676c(undefined4 param_1)

{
  ushort in_FPUControlWord;
  
  if ((DAT_101aeb60 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_100d4e00();
    return;
  }
  __cintrindisp1(param_1,0x1012862a);
  return;
}


// ==== 100c67bb _sprintf

/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  DWORD *pDVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_Dest == (char *)0x0)) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = FUN_100cd601(&local_24,(byte *)_Format,(localeinfo_struct *)0x0,
                         (wchar_t *)&stack0x0000000c);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}


// ==== 100c6838 FID_conflict:___longjmp_internal

/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Multiple Matches With Different Base Names
    ___longjmp_internal
    _longjmp
   
   Library: Visual Studio 2019 Release */

void __cdecl FID_conflict____longjmp_internal(int *_Buf,int _Value)

{
  int iVar1;
  PVOID TargetFrame;
  EXCEPTION_RECORD local_54;
  
  local_54.ExceptionCode = 0x80000026;
  local_54.ExceptionFlags = 0;
  local_54.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_54.ExceptionAddress = (PVOID)0x0;
  local_54.NumberParameters = 0;
  TargetFrame = (PVOID)_Buf[6];
  if (TargetFrame != ExceptionList) {
    RtlUnwind(TargetFrame,(PVOID)0x100c6886,&local_54,(PVOID)0x0);
  }
  if (TargetFrame != (PVOID)0x0) {
    iVar1 = __rt_probe_read4_4();
    if ((iVar1 == 0) || (_Buf[8] != 0x56433230)) {
      __local_unwind2((int)TargetFrame,_Buf[7]);
    }
    else if ((code *)_Buf[9] != (code *)0x0) {
      (*(code *)_Buf[9])(_Buf);
    }
  }
  __NLG_Notify(0);
                    /* WARNING: Could not recover jumptable at 0x100c68e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_Buf[5])();
  return;
}


// ==== 100c6967 __amsg_exit

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_100c9a17(param_1);
  pcVar1 = (code *)FUN_100c8e85((int)PTR___exit_10128270);
  (*pcVar1)(0xff);
  return;
}


// ==== 100c698b FUN_100c698b

void __cdecl FUN_100c698b(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}


// ==== 100c69b1 ___crtExitProcess

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_100c698b(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


// ==== 100c69c6 FUN_100c69c6

void FUN_100c69c6(void)

{
  __lock(8);
  return;
}


// ==== 100c69cf FUN_100c69cf

void FUN_100c69cf(void)

{
  FUN_100cf46a(8);
  return;
}


// ==== 100c69d8 FUN_100c69d8

void __cdecl FUN_100c69d8(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}


// ==== 100c69f0 __initterm_e

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2005 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 100c6a10 __get_osplatform

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_101acde8 != 0)) {
    *param_1 = DAT_101acde8;
    return 0;
  }
  pDVar1 = FUN_100ce0fa();
  *pDVar1 = 0x16;
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 100c6a47 __get_winmajor

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_101acde8 != 0)) {
    *param_1 = DAT_101acdf4;
    return 0;
  }
  pDVar1 = FUN_100ce0fa();
  *pDVar1 = 0x16;
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 100c6a83 __cinit

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_1010345c);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_100dd6d4,(undefined4 *)&DAT_100dd6ec);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_100ca6c1);
    puVar3 = &DAT_100dd6a4;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_100dd6d0);
    if ((DAT_101aeb78 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_101aeb78), BVar1 != 0)) {
      (*DAT_101aeb78)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ==== 100c6b15 FUN_100c6b15

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x100c6be8) */

void __cdecl FUN_100c6b15(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_101ace28 != 1) {
    DAT_101ace24 = 1;
    DAT_101ace20 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_100c8e85(DAT_101aeb70);
      piVar3 = (int *)FUN_100c8e85(DAT_101aeb6c);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_100c8e85(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_100c69d8((undefined4 *)&DAT_100dd700);
    }
    FUN_100c69d8((undefined4 *)&DAT_100dd708);
  }
  FUN_100c6be2();
  if (param_3 != 0) {
    return;
  }
  DAT_101ace28 = 1;
  FUN_100cf46a(8);
  ___crtExitProcess(param_1);
  return;
}


// ==== 100c6be2 FUN_100c6be2

void FUN_100c6be2(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_100cf46a(8);
  }
  return;
}


// ==== 100c6bf7 __exit

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_100c6b15(_Code,1,0);
  return;
}


// ==== 100c6c08 __cexit

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_100c6b15(0,0,1);
  return;
}


// ==== 100c6c17 __init_pointers

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_100d5334(uVar1);
  FUN_100d5255(uVar1);
  FUN_100cdf95(uVar1);
  FUN_100c9d4a(uVar1);
  FUN_100d524b(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_1006813e();
  __initp_eh_hooks();
  PTR___exit_10128270 = (undefined *)FUN_100c8e0e(0x100c6bf7);
  return;
}


// ==== 100c6c63 _V6_HeapAlloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_101aea2c) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_100c6ca9();
  }
  return local_20;
}


// ==== 100c6ca9 FUN_100c6ca9

void FUN_100c6ca9(void)

{
  FUN_100cf46a(4);
  return;
}


// ==== 100c6cb2 _malloc

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    pDVar3 = FUN_100ce0fa();
    *pDVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_101ad2b4 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_100c9a17(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_101aea40 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_100c6d23:
      piVar1 = HeapAlloc(DAT_101ad2b4,0,dwBytes);
    }
    else if ((DAT_101aea40 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_100c6d23;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_101ad8c8 == 0) {
      pDVar3 = FUN_100ce0fa();
      *pDVar3 = 0xc;
      goto LAB_100c6d51;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_100c6d51:
      pDVar3 = FUN_100ce0fa();
      *pDVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}


// ==== 100c6d75 FUN_100c6d75

undefined4 __cdecl FUN_100c6d75(FILE *param_1)

{
  DWORD *pDVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  if (param_1 == (FILE *)0x0) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar4 = 0xffffffff;
  }
  else {
    if ((param_1->_flag & 0x83) != 0) {
      uVar4 = FUN_100d552e(param_1);
      FUN_100d5eb8(&param_1->_ptr);
      uVar2 = __fileno(param_1);
      iVar3 = FUN_100d5deb(uVar2);
      if (iVar3 < 0) {
        uVar4 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        _free(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    param_1->_flag = 0;
  }
  return uVar4;
}


// ==== 100c6de7 FUN_100c6de7

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_100c6de7(FILE *param_1)

{
  DWORD *pDVar1;
  undefined4 local_20;
  
  local_20 = 0xffffffff;
  if (param_1 == (FILE *)0x0) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = 0xffffffff;
  }
  else if ((param_1->_flag & 0x40) == 0) {
    FUN_100d5464((uint)param_1);
    local_20 = FUN_100c6d75(param_1);
    FUN_100c6e5b();
  }
  else {
    param_1->_flag = 0;
  }
  return local_20;
}


// ==== 100c6e5b FUN_100c6e5b

void FUN_100c6e5b(void)

{
  uint unaff_ESI;
  
  FUN_100d54ce(unaff_ESI);
  return;
}


// ==== 100c6e63 __forcdecpt_l

/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = _Buf + 2;
  }
  bVar2 = *_Buf;
  *_Buf = *(byte *)**(undefined4 **)(local_14[0] + 0xbc);
  do {
    _Buf = _Buf + 1;
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 100c6ed4 __cropzeros_l

/* Library Function - Single Match
    __cropzeros_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale)

{
  char *pcVar1;
  char cVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  char *pcVar2;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 100c6f6a __fassign_l

/* Library Function - Single Match
    __fassign_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atoflt_l((_CRT_FLOAT *)&flag,number,param_4);
    *(int *)argument = flag;
  }
  else {
    FID_conflict___atoflt_l(&local_c,number,param_4);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}


// ==== 100c6fc1 __shift

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2005 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}


// ==== 100c6ffa __cftoe2_l

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  DWORD *pDVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *_Dst;
  DWORD DVar7;
  DWORD DVar8;
  char *pcVar9;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    pDVar1 = FUN_100ce0fa();
    DVar7 = 0x16;
  }
  else {
    iVar3 = param_2;
    if (param_2 < 1) {
      iVar3 = 0;
    }
    if (iVar3 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar5 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar5 = in_EAX + 1;
      }
      puVar6 = puVar5;
      if (0 < param_2) {
        puVar6 = puVar5 + 1;
        *puVar5 = *puVar6;
        *puVar6 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar6 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar5 = (undefined1 *)0xffffffff;
      }
      else {
        puVar5 = in_EAX + (param_1 - (int)_Dst);
      }
      pcVar9 = "e+000";
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar5,"e+000");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar3 = param_4[1] + -1;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
          _Dst[1] = '-';
        }
        if (99 < iVar3) {
          pcVar9 = (char *)0x64;
          iVar4 = iVar3 / 100;
          iVar3 = iVar3 % 100;
          _Dst[2] = _Dst[2] + (char)iVar4;
        }
        if (9 < iVar3) {
          pcVar9 = (char *)0xa;
          iVar4 = iVar3 / 10;
          iVar3 = iVar3 % 10;
          _Dst[3] = _Dst[3] + (char)iVar4;
        }
        _Dst[4] = _Dst[4] + (char)iVar3;
      }
      if (((DAT_101ad8d8 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return (DWORD)pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return (DWORD)pcVar9;
    }
    pDVar1 = FUN_100ce0fa();
    DVar7 = 0x22;
  }
  DVar8 = 0;
  *pDVar1 = DVar7;
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return DVar8;
}


// ==== 100c7167 __cftoe_l

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
         localeinfo_struct *param_6)

{
  DWORD *pDVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      __cftoe2_l(param_3,param_4,param_5,&local_30.sign,'\0',param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100c7235 __cftoe

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return eVar1;
}


// ==== 100c7253 __cftoa_l

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  DWORD *pDVar2;
  size_t _SizeInBytes;
  errno_t eVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short sVar8;
  DWORD unaff_EBX;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  DWORD DVar14;
  DWORD DVar15;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_100ce0fa();
    DVar14 = 0x16;
LAB_100c728c:
    DVar15 = 0;
    *pDVar2 = DVar14;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return DVar15;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    pDVar2 = FUN_100ce0fa();
    DVar14 = 0x22;
    goto LAB_100c728c;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar3 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar3 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return unaff_EBX;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return unaff_EBX;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar4 = _strrchr(param_2 + 2,0x65);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar4[3] = '\0';
    }
    goto LAB_100c75b0;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar8 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar10 = param_2 + 3;
  pcVar4 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar10 = '\0';
  }
  else {
    *pcVar10 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar12 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar12 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar8;
      }
      local_8 = local_8 + -4;
      *pcVar4 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar4 = pcVar4 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar12 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar9 = pcVar4, 8 < (ushort)uVar12)) {
      while( true ) {
        pcVar5 = pcVar9 + -1;
        if ((*pcVar5 != 'f') && (*pcVar5 != 'F')) break;
        *pcVar5 = '0';
        pcVar9 = pcVar5;
      }
      if (pcVar5 == pcVar10) {
        pcVar9[-2] = pcVar9[-2] + '\x01';
      }
      else if (*pcVar5 == '9') {
        *pcVar5 = (char)sVar8 + ':';
      }
      else {
        *pcVar5 = *pcVar5 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar4,0x30,param_4);
    pcVar4 = pcVar4 + param_4;
  }
  if (*pcVar10 == '\0') {
    pcVar4 = pcVar10;
  }
  *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar12 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar6 = (uint)(uVar12 & 0x7ff);
  uVar7 = uVar6 - local_18;
  uVar6 = -(uint)(uVar6 < local_18);
  if ((int)uVar6 < 0) {
    pcVar4[1] = '-';
    bVar11 = uVar7 != 0;
    uVar7 = -uVar7;
    uVar6 = -(uVar6 + bVar11);
  }
  else {
    pcVar4[1] = '+';
  }
  pcVar9 = pcVar4 + 2;
  *pcVar9 = '0';
  pcVar10 = pcVar9;
  if (((int)uVar6 < 0) || (((int)uVar6 < 1 && (uVar7 < 1000)))) {
LAB_100c755f:
    if ((-1 < (int)uVar6) && ((0 < (int)uVar6 || (99 < uVar7)))) goto LAB_100c756a;
  }
  else {
    uVar13 = __alldvrm(uVar7,uVar6,1000,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar9 = (char)uVar13 + '0';
    pcVar10 = pcVar4 + 3;
    uVar6 = 0;
    uVar7 = extraout_ECX;
    if (pcVar10 == pcVar9) goto LAB_100c755f;
LAB_100c756a:
    uVar13 = __alldvrm(uVar7,uVar6,100,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar10 = (char)uVar13 + '0';
    pcVar10 = pcVar10 + 1;
    uVar6 = 0;
    uVar7 = extraout_ECX_00;
  }
  if ((pcVar10 != pcVar9) || ((-1 < (int)uVar6 && ((0 < (int)uVar6 || (9 < uVar7)))))) {
    uVar13 = __alldvrm(uVar7,uVar6,10,0);
    *pcVar10 = (char)uVar13 + '0';
    pcVar10 = pcVar10 + 1;
    uVar7 = extraout_ECX_01;
  }
  *pcVar10 = (char)uVar7 + '0';
  pcVar10[1] = '\0';
LAB_100c75b0:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}


// ==== 100c75c4 __cftof2_l

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  DWORD *pDVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    pDVar2 = FUN_100ce0fa();
    uVar4 = 0x16;
    *pDVar2 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      puVar3 = (undefined1 *)((uint)(*in_EAX == 0x2d) + (iVar1 - 1U) + (int)this);
      *puVar3 = 0x30;
      puVar3[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *(undefined1 *)this = 0x2d;
      this = (void *)((int)this + 1);
    }
    if (in_EAX[1] < 1) {
      __shift();
      *(undefined1 *)this = 0x30;
      puVar3 = (undefined1 *)((int)this + 1);
    }
    else {
      puVar3 = (undefined1 *)((int)this + in_EAX[1]);
    }
    if (0 < (int)param_2) {
      __shift();
      *puVar3 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar5 = -in_EAX[1];
        if ((param_3 != '\0') || ((int)sVar5 <= (int)param_2)) {
          param_2 = sVar5;
        }
        __shift();
        _memset(puVar3 + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}


// ==== 100c76b9 __cftof_l

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  DWORD *pDVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,local_30.decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      __cftof2_l(param_2,param_3,param_4,'\0',param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100c7772 __cftog_l

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  DWORD *pDVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_100ce0fa();
    *pDVar2 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || ((int)param_4 <= local_34.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_34.sign,'\x01',param_6);
      }
      else {
        pcVar1 = param_2 + (local_34.sign == 0x2d);
        if (local_24 < local_34.decpt) {
          do {
            pcVar4 = pcVar1;
            pcVar1 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          pcVar4[-1] = '\0';
        }
        __cftof2_l(param_2,param_3,param_4,'\x01',param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100c786a __cfltcvt_l

/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  errno_t extraout_EAX;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
      eVar1 = extraout_EAX;
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}


// ==== 100c78f0 __cfltcvt

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  eVar1 = __cfltcvt_l(arg,buffer,sizeInBytes,format,precision,caps,(_locale_t)0x0);
  return eVar1;
}


// ==== 100c7911 __initp_misc_cfltcvt_tab

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2005 Release */

void __initp_misc_cfltcvt_tab(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_10128274 + uVar3);
    iVar2 = FUN_100c8e0e(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}


// ==== 100c7930 __setdefaultprecision

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2005 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}


// ==== 100c7959 __ms_p5_test_fdiv

/* WARNING: Removing unreachable block (ram,0x100c798c) */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  return 0;
}


// ==== 100c7995 __ms_p5_mp_test_fdiv

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Library: Visual Studio 2005 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}


// ==== 100c79e0 FUN_100c79e0

void __fastcall FUN_100c79e0(void *param_1)

{
  float10 in_ST0;
  
  FUN_100c79fe(param_1,SUB84((double)in_ST0,0));
  return;
}


// ==== 100c79fe FUN_100c79fe

float10 __thiscall FUN_100c79fe(void *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 extraout_ST0;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar9 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar3 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    dVar10 = dVar9 * 3.798187816439979e-12;
    dVar4 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar14 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - dVar9 * 3.798187816439979e-12;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_10103700 + iVar3) + *(double *)(&DAT_10103718 + iVar3);
    dVar12 = *(double *)(&DAT_10103718 + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_10103700 + iVar3);
    dVar13 = dVar12 + *(double *)(&DAT_10103708 + iVar3);
    dVar17 = dVar16 + dVar13;
    return (float10)(dVar17 + (dVar9 * 1.2639164054974691e-22 - ((dVar14 - dVar15) - dVar10)) *
                              (*(double *)(&DAT_10103708 + iVar3) * dVar15 - dVar11) +
                              *(double *)(&DAT_10103710 + iVar3) +
                              (*(double *)(&DAT_10103708 + iVar3) - dVar13) + dVar12 +
                              (dVar13 - dVar17) + dVar16 +
                              (dVar6 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar4 * 2.7557319223985893e-06 * dVar5 + -0.0001984126984126984) *
                              dVar6 * dVar6) * dVar11 * dVar15 * dVar6 +
                              (dVar8 * 0.041666666666666664 + -0.5 +
                              (dVar4 * 2.48015873015873e-05 * dVar7 + -0.001388888888888889) *
                              dVar8 * dVar8) * *(double *)(&DAT_10103708 + iVar3) * dVar8);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(1.0 - (double)((ulonglong)in_XMM0_Qa & 0xffffffffffff |
                                   (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  FUN_100c1f8f(param_1,param_2);
  return extraout_ST0;
}


// ==== 100c7b90 __trandisp1

/* Library Function - Single Match
    __trandisp1
   
   Library: Visual Studio */

void __fastcall __trandisp1(undefined4 param_1,int param_2)

{
  float10 fVar1;
  byte bVar2;
  undefined2 uVar3;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar3 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar3 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar3;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  bVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x100c7bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)(&DAT_101282bc)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10
              ))();
  return;
}


// ==== 100c7bf7 __trandisp2

/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __fastcall __trandisp2(undefined4 param_1,int param_2)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x100c7c81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)((&DAT_101282bc)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                               (&DAT_101282bc)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2)
              + 0x10))();
  return;
}


// ==== 100c7d60 FUN_100c7d60

undefined1  [10] FUN_100c7d60(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}


// ==== 100c7d75 FUN_100c7d75

void FUN_100c7d75(void)

{
  return;
}


// ==== 100c7d8c FUN_100c7d8c

undefined4 FUN_100c7d8c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}


// ==== 100c7da5 __fload_withFB

/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}


// ==== 100c7de8 FUN_100c7de8

uint __cdecl FUN_100c7de8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


// ==== 100c7dfe FUN_100c7dfe

void FUN_100c7dfe(void)

{
  return;
}


// ==== 100c7e0b __math_exit

/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
    return;
  }
  return;
}


// ==== 100c7e49 FUN_100c7e49

void __fastcall
FUN_100c7e49(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  ushort unaff_retaddr;
  uint uStack_4;
  
  uStack_4 = (uint)((ulonglong)(double)in_ST0 >> 0x20);
  if (((ulonglong)(double)in_ST0 & 0x7ff0000000000000) == 0) {
    fscale(in_ST0,(float10)1536.0);
  }
  else if ((uStack_4 & 0x7ff00000) == 0x7ff00000) {
    fscale(in_ST0,(float10)-1536.0);
  }
  else if (((unaff_retaddr == 0x27f) || ((unaff_retaddr & 0x20) != 0)) ||
          ((in_FPUStatusWord & 0x20) == 0)) {
    return;
  }
  if (param_2 == 0x1d) {
    FUN_100c7ef0(param_1,0x1d,unaff_retaddr,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
  return;
}


// ==== 100c7ef0 FUN_100c7ef0

float10 __fastcall
FUN_100c7ef0(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  __87except(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}


// ==== 100c7f07 __startOneArgErrorHandling

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio 2005 Release */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  __87except(param_2,&local_24,&param_3);
  return (float10)local_c;
}


// ==== 100c7f50 FUN_100c7f50

void __fastcall FUN_100c7f50(void *param_1)

{
  float10 in_ST0;
  
  FUN_100c7f6e(param_1,SUB84((double)in_ST0,0));
  return;
}


// ==== 100c7f6e FUN_100c7f6e

float10 __thiscall FUN_100c7f6e(void *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float10 extraout_ST0;
  double in_XMM0_Qa;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar1 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar8 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar2 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7600U & 0x3f) * 0x20;
    dVar9 = dVar8 * 3.798187816439979e-12;
    dVar3 = in_XMM0_Qa - dVar8 * 0.09817477042088285;
    dVar13 = in_XMM0_Qa - dVar8 * 0.09817477042088285;
    dVar14 = dVar13 - dVar9;
    dVar4 = dVar3 - dVar9;
    dVar6 = dVar3 - dVar8 * 3.798187816439979e-12;
    dVar5 = dVar4 * dVar4;
    dVar7 = dVar6 * dVar6;
    dVar10 = *(double *)(&DAT_10104000 + iVar2) + *(double *)(&DAT_10104018 + iVar2);
    dVar11 = *(double *)(&DAT_10104018 + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&DAT_10104000 + iVar2);
    dVar12 = dVar11 + *(double *)(&DAT_10104008 + iVar2);
    dVar16 = dVar15 + dVar12;
    return (float10)(dVar16 + (dVar8 * 1.2639164054974691e-22 - ((dVar13 - dVar14) - dVar9)) *
                              (*(double *)(&DAT_10104008 + iVar2) * dVar14 - dVar10) +
                              *(double *)(&DAT_10104010 + iVar2) +
                              (*(double *)(&DAT_10104008 + iVar2) - dVar12) + dVar11 +
                              (dVar12 - dVar16) + dVar15 +
                              (dVar5 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar3 * 2.7557319223985893e-06 * dVar4 + -0.0001984126984126984) *
                              dVar5 * dVar5) * dVar10 * dVar14 * dVar5 +
                              (dVar7 * 0.041666666666666664 + -0.5 +
                              (dVar3 * 2.48015873015873e-05 * dVar6 + -0.001388888888888889) *
                              dVar7 * dVar7) * *(double *)(&DAT_10104008 + iVar2) * dVar7);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(in_XMM0_Qa * 0.9999999999999999);
    }
    return (float10)in_XMM0_Qa;
  }
  FUN_100c20bf(param_1,param_2);
  return extraout_ST0;
}


// ==== 100c8123 FUN_100c8123

exception * __thiscall FUN_100c8123(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_10001d20(this);
  }
  return this;
}


// ==== 100c8145 ___TypeMatch

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100c819b:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_100c8179:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100c819b;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_100c8179;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== 100c81e5 ___FrameUnwindToState

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2005 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar4 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_100c82ab();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}


// ==== 100c82ab FUN_100c82ab

void FUN_100c82ab(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}


// ==== 100c830b ___DestructExceptionObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(param_1[7] + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    FID_conflict__CallMemberFunction1(param_1[6],UNRECOVERED_JUMPTABLE);
  }
  return;
}


// ==== 100c835f ___AdjustPointer

/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2005 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}


// ==== 100c8384 IsInExceptionSpec

/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  uchar extraout_AL;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_c;
  uchar local_5;
  
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
    return extraout_AL;
  }
  local_c = 0;
  local_5 = '\0';
  if (0 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        do {
          piVar3 = piVar3 + 1;
          iVar1 = ___TypeMatch((byte *)(unaff_EDI[1] + local_c * 0x10),(byte *)*piVar3,
                               *(uint **)(param_1 + 0x1c));
          if (iVar1 != 0) {
            local_5 = '\x01';
            break;
          }
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < *unaff_EDI);
  }
  return local_5;
}


// ==== 100c83fd CallUnexpected

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    void __cdecl CallUnexpected(struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl CallUnexpected(_s_ESTypeList *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  unexpected();
  terminate();
  return;
}


// ==== 100c842e Catch_All@100c842e

void Catch_All_100c842e(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 100c8446 CallCatchBlock

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2005 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined4 local_40 [2];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10116a00;
  uStack_c = 0x100c8452;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_100c856c();
  return local_20;
}


// ==== 100c856c FUN_100c856c

void FUN_100c856c(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(void **)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject(unaff_ESI);
    }
  }
  return;
}


// ==== 100c85e2 ___BuildCatchObjectHelper

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2005 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  uint in_stack_ffffffd0;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar2 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,pvVar2,_Size);
          return '\0';
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) &&
           (iVar1 = _ValidateRead(*(void **)(param_4 + 0x18),in_stack_ffffffd0), iVar1 != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar1 = *param_2;
        if (iVar1 == 0) {
          return '\0';
        }
        goto LAB_100c8667;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_100c8667:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}


// ==== 100c8761 ___BuildCatchObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  
  piVar2 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    piVar2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  cVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  return;
}


// ==== 100c87f2 CatchIt

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2005 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  uint *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int *unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject((int)param_1,(int *)unaff_ESI,unaff_EBX,(byte *)param_5);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  *(int *)(unaff_ESI + 8) = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}


// ==== 100c885e FindHandlerForForeignException

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint extraout_var;
  uint uVar6;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var2 = __getptd();
    uVar6 = extraout_var;
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)__encoded_null();
      if (((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,(uint *)&stack0xfffffff4);
    if (local_8 < uVar6) {
      do {
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          pTVar1 = p_Var5->pHandlerArray[p_Var5->nCatches + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((p_Var5->pHandlerArray[p_Var5->nCatches + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)0x0,
                    (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EBX,unaff_EDI,
                    unaff_ESI,(uchar)uVar6);
          }
        }
        local_8 = local_8 + 1;
        p_Var5 = p_Var5 + 1;
      } while (local_8 < uVar6);
    }
  }
  return;
}


// ==== 100c8950 FindHandler

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  uchar uVar3;
  bool bVar4;
  _ptiddata p_Var5;
  int iVar6;
  _s_TryBlockMapEntry *p_Var7;
  EHRegistrationNode *unaff_EBX;
  int iVar8;
  HandlerType *pHVar9;
  _s_FuncInfo *p_Var10;
  int unaff_ESI;
  _s_FuncInfo *p_Var11;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar12;
  undefined4 in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var10 = param_5;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var11 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar6 = *(int *)(param_1 + 0x14), iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
         (iVar6 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var5 = __getptd();
      if (p_Var5->_curexception == (void *)0x0) {
        return;
      }
      p_Var5 = __getptd();
      p_Var11 = p_Var5->_curexception;
      param_1 = (EHExceptionRecord *)p_Var11;
      p_Var5 = __getptd();
      param_3 = p_Var5->_curcontext;
      iVar6 = _ValidateRead(p_Var11,1);
      if (iVar6 == 0) {
        _inconsistency();
      }
      if ((((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
           (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
          ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
           ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
         (p_Var11->pESTypeList == (ESTypeList *)0x0)) {
        _inconsistency();
      }
      p_Var5 = __getptd();
      if (p_Var5->_curexcspec != (void *)0x0) {
        p_Var5 = __getptd();
        piVar2 = p_Var5->_curexcspec;
        p_Var5 = __getptd();
        iVar6 = 0;
        p_Var5->_curexcspec = (void *)0x0;
        uVar3 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
        p_Var11 = (_s_FuncInfo *)param_1;
        if (uVar3 == '\0') {
          iVar8 = 0;
          if (0 < *piVar2) {
            do {
              bVar4 = type_info::operator==
                                (*(type_info **)(iVar8 + 4 + piVar2[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar4) {
                ___DestructExceptionObject((int *)param_1);
                param_1 = (EHExceptionRecord *)s_bad_exception_101048b0;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_10116a64);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_100c8a8e;
        }
      }
    }
    p_Var10 = param_5;
    if (((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
        ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        p_Var7 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
        for (; local_14 < local_20; local_14 = local_14 + 1) {
          if ((p_Var7->tryLow <= local_c) && (local_c <= p_Var7->tryHigh)) {
            local_10 = p_Var7->pHandlerArray;
            for (local_1c = p_Var7->nCatches; 0 < local_1c; local_1c = local_1c + -1) {
              pHVar9 = p_Var11->pESTypeList[1].pTypeArray;
              for (local_18 = pHVar9->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                pHVar9 = (HandlerType *)&pHVar9->pType;
                p_Var10 = *(_s_FuncInfo **)pHVar9;
                iVar6 = ___TypeMatch((byte *)local_10,(byte *)p_Var10,(uint *)p_Var11->pESTypeList);
                if (iVar6 != 0) {
                  local_5 = '\x01';
                  CatchIt((EHExceptionRecord *)p_Var11,(EHRegistrationNode *)param_3,param_4,param_5
                          ,p_Var10,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                          unaff_ESI,unaff_EBX,(uchar)SUB41(in_stack_ffffffd0,0));
                  p_Var11 = (_s_FuncInfo *)param_1;
                  goto LAB_100c8bb8;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_100c8bb8:
          p_Var7 = p_Var7 + 1;
        }
      }
      p_Var10 = param_5;
      if (param_6 != '\0') {
        ___DestructExceptionObject((int *)p_Var11);
      }
      if ((((local_5 != '\0') || ((p_Var10->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (p_Var10->pESTypeList == (ESTypeList *)0x0)) ||
         (uVar3 = IsInExceptionSpec((EHExceptionRecord *)p_Var11,(_s_ESTypeList *)unaff_EDI),
         uVar3 != '\0')) goto LAB_100c8c8e;
      __getptd();
      __getptd();
      p_Var5 = __getptd();
      p_Var5->_curexception = p_Var11;
      p_Var5 = __getptd();
      p_Var5->_curcontext = param_3;
      pEVar12 = param_8;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar12 = param_2;
      }
      _UnwindNestedFrames(pEVar12,(EHExceptionRecord *)p_Var11);
      p_Var11 = param_5;
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
      CallUnexpected(p_Var11->pESTypeList);
      p_Var10 = param_5;
    }
  }
  if (p_Var10->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_100c8a8e:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_100c8c8e:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}


// ==== 100c8cbe ___InternalCxxFrameHandler

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
          (param_5->pESTypeList != (ESTypeList *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}


// ==== 100c8da2 FUN_100c8da2

undefined4 FUN_100c8da2(void)

{
  int iVar1;
  HMODULE pHVar2;
  int iVar3;
  uint uVar4;
  char *_Str2;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  __get_winmajor(&local_8);
  if (local_8 < 6) {
    pHVar2 = GetModuleHandleA((LPCSTR)0x0);
    iVar1 = pHVar2[0xf].unused;
    _Str2 = (char *)((int)&pHVar2[6].unused +
                    iVar1 + (uint)*(ushort *)((int)&pHVar2[5].unused + iVar1));
    if (*(short *)((int)&pHVar2[1].unused + iVar1 + 2) != 0) {
      do {
        iVar3 = _strcmp(".mixcrt",_Str2);
        if (iVar3 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        _Str2 = _Str2 + 0x28;
      } while (uVar4 < *(ushort *)((int)&pHVar2[1].unused + iVar1 + 2));
    }
  }
  return 1;
}


// ==== 100c8e0e FUN_100c8e0e

int __cdecl FUN_100c8e0e(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10128314);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10128310 != -1)) {
    iVar3 = DAT_10128310;
    pcVar2 = TlsGetValue(DAT_10128314);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_100c8e68;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_100c8da2();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_100c8e68:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 100c8e7c __encoded_null

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_100c8e0e(0);
  return;
}


// ==== 100c8e85 FUN_100c8e85

int __cdecl FUN_100c8e85(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_10128314);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_10128310 != -1)) {
    iVar3 = DAT_10128310;
    pcVar2 = TlsGetValue(DAT_10128314);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_100c8edf;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_100c8da2();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_100c8edf:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 100c8efc FUN_100c8efc

LPVOID FUN_100c8efc(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_10128314);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_100c8e85(DAT_101ace68);
    TlsSetValue(DAT_10128314,lpTlsValue);
  }
  return lpTlsValue;
}


// ==== 100c8f2e __mtterm

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_10128310 != -1) {
    iVar2 = DAT_10128310;
    pcVar1 = (code *)FUN_100c8e85(DAT_101ace70);
    (*pcVar1)(iVar2);
    DAT_10128310 = -1;
  }
  if (DAT_10128314 != 0xffffffff) {
    TlsFree(DAT_10128314);
    DAT_10128314 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}


// ==== 100c8f6b FUN_100c8f6b

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_100c8f6b(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_10128430;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_100c8da2();
    if (iVar1 != 0) {
      pFVar2 = GetProcAddress(hModule,"EncodePointer");
      *(FARPROC *)(param_1 + 0x1f8) = pFVar2;
      pFVar2 = GetProcAddress(hModule,"DecodePointer");
      *(FARPROC *)(param_1 + 0x1fc) = pFVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 200) = 0x43;
  *(undefined1 *)(param_1 + 0x14b) = 0x43;
  *(undefined **)(param_1 + 0x68) = &DAT_10128650;
  InterlockedIncrement((LONG *)&DAT_10128650);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_10128c58;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_100c9021();
  return;
}


// ==== 100c9021 FUN_100c9021

void FUN_100c9021(void)

{
  FUN_100cf46a(0xc);
  return;
}


// ==== 100c902a FUN_100c902a

DWORD * FUN_100c902a(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_10128310;
  pcVar1 = FUN_100c8efc();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_10128310;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_100c8e85(DAT_101ace6c);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_100c8f6b((int)_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}


// ==== 100c90a1 __getptd

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_100c902a();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}


// ==== 100c90b9 __freefls@4

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2005 Release */

void __freefls_4(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10128430) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_10128650)) {
        _free(pLVar1);
      }
    }
    FUN_100c91c5();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_10128c58) && (pLVar1 != (LONG *)&DAT_10128b80)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_100c91d1();
    _free(param_1);
  }
  return;
}


// ==== 100c91c5 FUN_100c91c5

void FUN_100c91c5(void)

{
  FUN_100cf46a(0xd);
  return;
}


// ==== 100c91d1 FUN_100c91d1

void FUN_100c91d1(void)

{
  FUN_100cf46a(0xc);
  return;
}


// ==== 100c91da __freeptd

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_10128310 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_10128314), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_10128310;
      pcVar2 = TlsGetValue(DAT_10128314);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_10128310;
    pcVar2 = (code *)FUN_100c8e85(DAT_101ace6c);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_10128314 != 0xffffffff) {
    TlsSetValue(DAT_10128314,(LPVOID)0x0);
  }
  return;
}


// ==== 100c9243 __mtinit

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  code *pcVar6;
  DWORD *pDVar7;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_101ace64 = GetProcAddress(hModule,"FlsAlloc");
  DAT_101ace68 = GetProcAddress(hModule,"FlsGetValue");
  DAT_101ace6c = GetProcAddress(hModule,"FlsSetValue");
  DAT_101ace70 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_101ace64 == (FARPROC)0x0) || (DAT_101ace68 == (FARPROC)0x0)) ||
      (DAT_101ace6c == (FARPROC)0x0)) || (DAT_101ace70 == (FARPROC)0x0)) {
    DAT_101ace68 = TlsGetValue_exref;
    DAT_101ace64 = (FARPROC)&LAB_100c8ef3;
    DAT_101ace6c = TlsSetValue_exref;
    DAT_101ace70 = TlsFree_exref;
  }
  DAT_10128314 = TlsAlloc();
  if ((DAT_10128314 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10128314,DAT_101ace68), BVar1 != 0))
  {
    __init_pointers();
    DAT_101ace64 = (FARPROC)FUN_100c8e0e((int)DAT_101ace64);
    DAT_101ace68 = (FARPROC)FUN_100c8e0e((int)DAT_101ace68);
    DAT_101ace6c = (FARPROC)FUN_100c8e0e((int)DAT_101ace6c);
    DAT_101ace70 = (FARPROC)FUN_100c8e0e((int)DAT_101ace70);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_100c8e85((int)DAT_101ace64);
      DAT_10128310 = (*pcVar3)(pcVar6);
      if ((DAT_10128310 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_10128310;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_100c8e85((int)DAT_101ace6c);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_100c8f6b((int)pDVar4,0);
          DVar5 = GetCurrentThreadId();
          pDVar4[1] = 0xffffffff;
          *pDVar4 = DVar5;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}


// ==== 100c93c7 terminate

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


// ==== 100c9400 unexpected

/* Library Function - Single Match
    void __cdecl unexpected(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl unexpected(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
  terminate();
  return;
}


// ==== 100c9413 _inconsistency

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_100c8e85(DAT_101ace74);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}


// ==== 100c944a __initp_eh_hooks

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_101ace74 = FUN_100c8e0e(0x100c93c7);
  return;
}


// ==== 100c9460 __CallSettingFrame@12

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}


// ==== 100c94ac type_info::_Type_info_dtor

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_101ace7c;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_101ace78;
    do {
      piVar2 = piVar1;
      if (DAT_101ace7c == (int *)0x0) goto LAB_100c94f0;
      piVar1 = DAT_101ace7c;
    } while (*DAT_101ace7c != *(int *)(param_1 + 4));
    piVar2[1] = DAT_101ace7c[1];
    _free(_Memory);
LAB_100c94f0:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_100c9513();
  return;
}


// ==== 100c9513 FUN_100c9513

void FUN_100c9513(void)

{
  FUN_100cf46a(0xe);
  return;
}


// ==== 100c9520 _strcmp

/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_100c9564;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100c9530;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_100c9564;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_100c9564;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100c9530:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_100c9564:
  return (uint)bVar5 * -2 + 1;
}


// ==== 100c95a8 FUN_100c95a8

void __cdecl FUN_100c95a8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  uVar16 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  return;
}


// ==== 100c962f __VEC_memcpy

/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_100c95a8(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined4 *)((int)param_1 + iVar1),(undefined4 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}


// ==== 100c9714 __SEH_prolog4

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_101281d0 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 100c9759 __SEH_epilog4

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}


// ==== 100c9770 __except_handler4

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_101281d0);
  bVar3 = false;
  local_c = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_8 = param_1;
    local_4 = param_3;
    *(int ***)((int)param_2 + -4) = &local_8;
    uVar7 = *(uint *)((int)param_2 + 0xc);
    if (*(uint *)((int)param_2 + 0xc) == 0xfffffffe) {
      return 1;
    }
    do {
      uVar2 = piVar8[uVar7 * 3 + 4];
      if ((undefined *)piVar8[uVar7 * 3 + 5] != (undefined *)0x0) {
        iVar4 = _EH4_CallFilterFunc((undefined *)piVar8[uVar7 * 3 + 5]);
        bVar3 = true;
        if (iVar4 < 0) {
          local_c = 0;
          goto LAB_100c981b;
        }
        if (0 < iVar4) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_101048a0)
             , BVar5 != 0)) {
            ___DestructExceptionObject(param_1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_101281d0);
          }
          *(uint *)((int)param_2 + 0xc) = uVar2;
          if (*piVar8 != -2) {
            __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
          }
          __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
          uVar6 = _EH4_TransferToHandler((undefined *)(piVar8 + uVar7 * 3 + 4)[2]);
          return uVar6;
        }
      }
      uVar7 = uVar2;
    } while (uVar2 != 0xfffffffe);
    if (!bVar3) {
      return 1;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0xc) == -2) {
      return 1;
    }
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_101281d0);
  }
LAB_100c981b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}


// ==== 100c9906 _abort

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_10128330 & 1) != 0) {
    FUN_100c9a17(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_10128330 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


// ==== 100c99f9 __set_abort_behavior

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_10128330;
  DAT_10128330 = ~_Mask & DAT_10128330 | _Flags & _Mask;
  return uVar1;
}


// ==== 100c9a17 FUN_100c9a17

void __cdecl FUN_100c9a17(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_10128338)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_101acddc == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x1012833c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_101ace80,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_101acf9d = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_101ace99,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_101ace99,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_101ace99);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_101ace99);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x101ace5e),
                           (int)&DAT_101ad194 - (int)(sVar5 + 0x101ace5e),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_101ace80,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_101ace80,0x314,*(char **)(uVar6 * 8 + 0x1012833c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_100d692f(&DAT_101ace80,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


// ==== 100c9bb7 __FF_MSGBANNER

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2005 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_101acddc != 1) {
      return;
    }
  }
  FUN_100c9a17(0xfc);
  FUN_100c9a17(0xff);
  return;
}


// ==== 100c9bf0 ___getlocaleinfo

/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2005 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  LPSTR _LpLCData;
  char *_Dst;
  int iVar5;
  errno_t eVar6;
  byte *pbVar7;
  CHAR local_88 [32];
  undefined1 local_68 [96];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)local_68;
  if (_Lc_type != 1) {
    if (_Lc_type == 0) {
      pbVar7 = &DAT_101ad194;
      iVar5 = ___crtGetLocaleInfoW
                        (_Locale,(ulong)_LocaleName,_FieldType,(wchar_t *)&DAT_101ad194,4,0);
      if (iVar5 != 0) {
        *(undefined1 *)_Address = 0;
        do {
          bVar1 = *pbVar7;
          iVar5 = _isdigit((uint)bVar1);
          if (iVar5 == 0) break;
          pbVar7 = pbVar7 + 2;
          *(byte *)_Address = *(char *)_Address * '\n' + bVar1 + -0x30;
        } while ((int)pbVar7 < 0x101ad19c);
      }
    }
    goto LAB_100c9cbd;
  }
  _LpLCData = local_88;
  bVar2 = false;
  sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) ||
        (sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,(LPSTR)0x0,0), sVar3 == 0)) ||
       (_LpLCData = __calloc_crt(sVar3,1), _LpLCData == (LPSTR)0x0)) goto LAB_100c9cbd;
    bVar2 = true;
    sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,sVar3);
    if (sVar3 != 0) goto LAB_100c9c9b;
  }
  else {
LAB_100c9c9b:
    _Dst = __calloc_crt(sVar3,1);
    *(char **)_Address = _Dst;
    if (_Dst != (char *)0x0) {
      eVar6 = _strncpy_s(_Dst,sVar3,_LpLCData,sVar3 - 1);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (bVar2) {
        _free(_LpLCData);
      }
      goto LAB_100c9cbd;
    }
    if (!bVar2) goto LAB_100c9cbd;
  }
  _free(_LpLCData);
LAB_100c9cbd:
  iVar5 = __security_check_cookie(local_8 ^ (uint)local_68);
  return iVar5;
}


// ==== 100c9d4a FUN_100c9d4a

void __cdecl FUN_100c9d4a(undefined4 param_1)

{
  DAT_101ad19c = param_1;
  return;
}


// ==== 100c9d54 __malloc_crt

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_101ad1a0 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_101ad1a0 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 100c9d94 __calloc_crt

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_101ad1a0 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_101ad1a0 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 100c9ddc __realloc_crt

/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_101ad1a0 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_101ad1a0 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}


// ==== 100c9e27 __msize

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  DWORD *pDVar1;
  size_t sVar2;
  int iVar3;
  void *this;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_101aea40 == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_100d182c(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_100c9ec1();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_101ad2b4,0,_Memory);
  }
  return sVar2;
}


// ==== 100c9ec1 FUN_100c9ec1

void FUN_100c9ec1(void)

{
  FUN_100cf46a(4);
  return;
}


// ==== 100c9eca fastzero_I

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}


// ==== 100c9f21 __VEC_memzero

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 (*) [16] __cdecl
__VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)((int)param_1 + (param_3 - uVar2));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    pauVar5 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*pauVar5)[0] = 0;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    }
    __VEC_memzero((undefined1 (*) [16])((int)param_1 + iVar3),0,param_3 - iVar3);
  }
  return param_1;
}


// ==== 100c9fb0 __ioinit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __ioinit(void)

{
  undefined4 *puVar1;
  undefined1 *hFile;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE hFile_00;
  int iVar4;
  UINT *pUVar5;
  int iVar6;
  int *piVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x100c9fbc;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_100ca1e7:
    iVar6 = -1;
  }
  else {
    DAT_101aea44 = 0x20;
    DAT_101aea60 = puVar2;
    for (; puVar2 < DAT_101aea60 + 0x1c0; puVar2 = puVar2 + 0xe) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 10;
      *(undefined1 *)((int)puVar2 + 0x26) = 10;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar8 = *(UINT *)local_68.lpReserved2;
      pUVar5 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar5 + UVar8);
      if (0x7ff < (int)UVar8) {
        UVar8 = 0x800;
      }
      iVar6 = 1;
      while ((UVar9 = UVar8, (int)DAT_101aea44 < (int)UVar8 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar9 = DAT_101aea44, puVar2 != (undefined4 *)0x0)))
      {
        (&DAT_101aea60)[iVar6] = puVar2;
        DAT_101aea44 = DAT_101aea44 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_101aea60)[iVar6];
        }
        iVar6 = iVar6 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar9) {
        do {
          hFile = *(undefined1 **)local_20;
          if ((((hFile != (undefined1 *)0xffffffff) && (hFile != &DAT_fffffffe)) &&
              ((*pUVar5 & 1) != 0)) &&
             (((*pUVar5 & 8) != 0 || (DVar3 = GetFileType(hFile), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_101aea60)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar5;
            iVar6 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar6 == 0) goto LAB_100ca1e7;
            puVar2[2] = puVar2[2] + 1;
          }
          local_24 = local_24 + 1;
          pUVar5 = (UINT *)((int)pUVar5 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar9);
      }
    }
    iVar6 = 0;
    do {
      piVar7 = DAT_101aea60 + iVar6 * 0xe;
      if ((*piVar7 == -1) || (*piVar7 == -2)) {
        *(undefined1 *)(piVar7 + 1) = 0x81;
        if (iVar6 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar6 != 1);
        }
        hFile_00 = GetStdHandle(DVar3);
        if (((hFile_00 == (HANDLE)0xffffffff) || (hFile_00 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(hFile_00), DVar3 == 0)) {
          *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
          *piVar7 = -2;
        }
        else {
          *piVar7 = (int)hFile_00;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 8;
          }
          iVar4 = ___crtInitCritSecAndSpinCount(piVar7 + 3,4000);
          if (iVar4 == 0) goto LAB_100ca1e7;
          piVar7[2] = piVar7[2] + 1;
        }
      }
      else {
        *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x80;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    SetHandleCount(DAT_101aea44);
    iVar6 = 0;
  }
  return iVar6;
}


// ==== 100ca1f0 __ioterm

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_101aea60;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x700; uVar3 = uVar3 + 0x38) {
        if (*(int *)(uVar3 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x101aeb60);
  return;
}


// ==== 100ca23c __setenvp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_101aeb74 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_101acdd0;
  if (DAT_101acdd0 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_101acdd0;
    DAT_101ace08 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_101acdd0);
          DAT_101acdd0 = (char *)0x0;
          *puVar1 = 0;
          _DAT_101aeb68 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_101ace08);
            DAT_101ace08 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}


// ==== 100ca317 parse_cmdline

/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2005 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_100ca3a9;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_100ca3a9:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}


// ==== 100ca4af __setargv

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  uint uVar1;
  undefined4 *puVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_101aeb74 == 0) {
    ___initmbctable();
  }
  DAT_101ad2ac = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_101ad1a8,0x104);
  _DAT_101ace18 = &DAT_101ad1a8;
  if ((DAT_101aeb7c == (char *)0x0) || (local_8 = DAT_101aeb7c, *DAT_101aeb7c == '\0')) {
    local_8 = &DAT_101ad1a8;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_101acdfc = local_c - 1;
      _DAT_101ace00 = puVar2;
      return 0;
    }
  }
  return -1;
}


// ==== 100ca568 ___crtGetEnvironmentStringsA

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2005 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  WCHAR *pWVar5;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_101ad2b0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_101ad2b0 = 1;
      goto LAB_100ca5ba;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_101ad2b0 = 2;
    }
  }
  if (DAT_101ad2b0 != 1) {
    if ((DAT_101ad2b0 != 2) && (DAT_101ad2b0 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = __malloc_crt((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (LPVOID)0x0;
    }
    _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_100ca5ba:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = __malloc_crt(_Size), lpMultiByteStr != (LPSTR)0x0)) &&
     (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                  (LPBOOL)0x0), local_8 = lpMultiByteStr, iVar6 == 0)) {
    _free(lpMultiByteStr);
    local_8 = (LPSTR)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}


// ==== 100ca69d __RTC_Initialize

/* WARNING: Removing unreachable block (ram,0x100ca6af) */
/* WARNING: Removing unreachable block (ram,0x100ca6b5) */
/* WARNING: Removing unreachable block (ram,0x100ca6b7) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  return;
}


// ==== 100ca6e5 ___heap_select

/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2005 Release */

undefined4 ___heap_select(void)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = __get_osplatform(&local_8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar1 = __get_winmajor(&local_c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if ((local_8 == 2) && (4 < local_c)) {
    return 1;
  }
  return 3;
}


// ==== 100ca740 __heap_init

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_101ad2b4 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_101ad2b4 == (HANDLE)0x0) {
    return 0;
  }
  DAT_101aea40 = ___heap_select();
  if ((DAT_101aea40 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_101ad2b4);
    DAT_101ad2b4 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}


// ==== 100ca79a __heap_term

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_101aea40 == 3) {
    iVar2 = 0;
    if (0 < DAT_101aea24) {
      puVar1 = (undefined4 *)((int)DAT_101aea28 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_101ad2b4,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_101aea24);
    }
    HeapFree(DAT_101ad2b4,0,DAT_101aea28);
  }
  HeapDestroy(DAT_101ad2b4);
  DAT_101ad2b4 = (HANDLE)0x0;
  return;
}


// ==== 100ca80e FUN_100ca80e

undefined4 __cdecl FUN_100ca80e(int param_1,DWORD param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  pDVar5 = FUN_100c902a();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_101284b4 * 3);
    if ((piVar1 + DAT_101284b4 * 3 <= piVar6) || (*piVar6 != param_1)) {
      piVar6 = (int *)0x0;
    }
    if ((piVar6 == (int *)0x0) || (pcVar2 = (code *)piVar6[2], pcVar2 == (code *)0x0)) {
      uVar7 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      piVar6[2] = 0;
      uVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        DVar3 = pDVar5[0x18];
        pDVar5[0x18] = param_2;
        if (piVar6[1] == 8) {
          if (DAT_101284a8 < DAT_101284ac + DAT_101284a8) {
            iVar8 = DAT_101284a8 * 0xc;
            iVar9 = DAT_101284a8;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_101284ac + DAT_101284a8);
          }
          iVar9 = *piVar6;
          DVar4 = pDVar5[0x19];
          if (iVar9 == -0x3fffff72) {
            pDVar5[0x19] = 0x83;
          }
          else if (iVar9 == -0x3fffff70) {
            pDVar5[0x19] = 0x81;
          }
          else if (iVar9 == -0x3fffff6f) {
            pDVar5[0x19] = 0x84;
          }
          else if (iVar9 == -0x3fffff6d) {
            pDVar5[0x19] = 0x85;
          }
          else if (iVar9 == -0x3fffff73) {
            pDVar5[0x19] = 0x82;
          }
          else if (iVar9 == -0x3fffff71) {
            pDVar5[0x19] = 0x86;
          }
          else if (iVar9 == -0x3fffff6e) {
            pDVar5[0x19] = 0x8a;
          }
          (*pcVar2)(8,pDVar5[0x19]);
          pDVar5[0x19] = DVar4;
        }
        else {
          piVar6[2] = 0;
          (*pcVar2)(piVar6[1]);
        }
        pDVar5[0x18] = DVar3;
      }
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
}


// ==== 100ca987 ___security_init_cookie

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2005 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_101281d0 == 0xbb40e64e) || ((DAT_101281d0 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_101281d0 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_101281d0 == 0xbb40e64e) {
      DAT_101281d0 = 0xbb40e64f;
    }
    else if ((DAT_101281d0 & 0xffff0000) == 0) {
      DAT_101281d0 = DAT_101281d0 | DAT_101281d0 << 0x10;
    }
  }
  DAT_101281d4 = ~DAT_101281d0;
  return;
}


// ==== 100caa20 FUN_100caa20

void FUN_100caa20(void)

{
  float10 in_ST0;
  
  FUN_100caa3e((double)in_ST0);
  return;
}


// ==== 100caa3e FUN_100caa3e

float10 __cdecl FUN_100caa3e(double param_1)

{
  undefined1 auVar1 [12];
  double dVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dd;
  double dVar8;
  double dVar9;
  ulonglong in_XMM2_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong in_XMM7_Qb;
  undefined1 auVar19 [16];
  double local_c;
  
  dVar2 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
  uVar4 = in_XMM0_Db >> 0xc & 0x7ffff;
  if (uVar4 - 0x3fb00 < 0x3bb) {
    auVar10._0_8_ = ((ulonglong)in_XMM0_Db & 0xffffc000) << 0x20;
    auVar10._8_8_ = in_XMM2_Qb & in_XMM7_Qb;
    iVar5 = (in_XMM0_Db >> 0xc & 0xfffc) - 0xfb00;
    iVar6 = iVar5 * 4;
    dVar13 = SUB168(auVar10 | ZEXT816(0x200000000000),0);
    dVar12 = SQRT(1.0 - dVar2 * dVar2) * dVar13;
    dVar8 = dVar2 * *(double *)(&DAT_10105df0 + iVar5 * 2) - dVar12;
    uVar4 = SUB164(auVar10 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar9 = dVar8 * dVar8;
    auVar3._4_8_ = 0;
    auVar3._0_4_ = uVar4;
    auVar11._0_12_ = auVar3 << 0x20;
    auVar11._12_4_ = uVar4;
    return (float10)((((dVar9 * -0.044642857142857144 + -0.075) * dVar8 * dVar9 * dVar9 +
                      (dVar8 * dVar9 * -0.16666666666666666 -
                      ((double)(*(ulonglong *)(&DAT_10104ef0 + iVar6) ^ (ulonglong)uVar4 << 0x20) -
                      6.123233995736766e-17))) -
                     ((dVar2 + dVar13) * ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) - dVar13)) /
                     (dVar2 * *(double *)(&DAT_10105df0 + iVar5 * 2) + dVar12)) -
                    ((double)(*(ulonglong *)(&DAT_10104ef8 + iVar6) ^ auVar11._8_8_) -
                    1.5707963267948966));
  }
  if (uVar4 - 0x3febb < 0x41) {
    dVar18 = (double)((ulonglong)(in_XMM0_Db >> 6) << 0x26);
    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = in_XMM0_Da;
    auVar1._8_4_ = in_XMM0_Dd >> 0xc;
    dVar13 = 1.0 - dVar18 * dVar18;
    dVar8 = ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + dVar18) * (dVar2 - dVar18);
    dVar12 = SQRT(dVar13 - dVar8);
    iVar5 = -(uint)(SUB121(auVar1 >> 0x3f,0) & 1);
    dVar9 = (double)((ulonglong)dVar12 & 0xffffc00000000000 |
                    ((ulonglong)in_XMM0_Db & 0x80000000) << 0x20 | 0x200000000000);
    auVar14._0_8_ = CONCAT44(iVar5,iVar5);
    auVar14._8_4_ = iVar5;
    auVar14._12_4_ = iVar5;
    iVar6 = (ushort)((ulonglong)((longlong)dVar12 << 2) >> 0x30) - 0xfec0;
    dVar12 = dVar12 * *(double *)(&DAT_10105df0 + iVar6 * 8);
    dVar18 = (dVar18 * dVar9 - dVar12) + (dVar2 - dVar18) * dVar9;
    dVar2 = ((dVar13 - dVar9 * dVar9) - dVar8) / (dVar12 + dVar12 + dVar18);
    iVar6 = iVar6 * 0x10;
    dVar9 = (double)(auVar14._8_8_ & 0xc00921fb54442d18) + *(double *)(&DAT_10104ef8 + iVar6);
    dVar13 = dVar18 * dVar18;
    dVar8 = dVar2 + dVar9;
    return (float10)(double)((ulonglong)
                             ((dVar13 * -0.044642857142857144 + -0.075) * dVar18 * dVar13 * dVar13 +
                              dVar18 * dVar13 * -0.16666666666666666 +
                              (double)(auVar14._0_8_ & 0xbca1a62633145c07) +
                              *(double *)(&DAT_10104ef0 + iVar6) + dVar2 + (dVar9 - dVar8) + dVar8)
                            ^ (ulonglong)((ushort)iVar5 & 0x8000) << 0x30);
  }
  if (uVar4 - 0x3c300 < 0x3800) {
    dVar8 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar9 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar13 = dVar2 * dVar8;
    return (float10)((1.5707963267948966 - dVar2) +
                    (((6.123233995736766e-17 -
                      dVar13 * dVar13 * dVar13 *
                      (dVar8 * 0.022372159090909092 + 0.030381944444444444 +
                      dVar8 * dVar8 * 0.017352764423076924)) -
                     (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * dVar9 *
                     (dVar9 * 0.075 + 0.16666666666666666 + dVar9 * dVar9 * 0.044642857142857144)) -
                    (dVar2 - (1.5707963267948966 - (1.5707963267948966 - dVar2)))));
  }
  if (uVar4 - 0x3fefc < 4) {
    dVar2 = 0.5 - ABS(dVar2) * 0.5;
    uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar19._8_4_ = SUB84(dVar2,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar16;
    dVar8 = SQRT(dVar2);
    dVar13 = auVar19._8_8_;
    auVar17._8_4_ = SUB84(dVar2,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar16;
    uVar7 = -(ulonglong)((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) < 0.0);
    dVar9 = (double)((ulonglong)dVar8 & 0xfffffffff8000000);
    auVar15._8_4_ = SUB84(dVar8,0);
    auVar15._0_8_ = dVar8;
    auVar15._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    return (float10)(double)((ulonglong)
                             ((double)(uVar7 & 0xc00921fb54442d18) +
                             (dVar2 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar2 * dVar2 * 0.017352764423076924) * dVar2 * dVar2 * dVar2 * dVar2 *
                             (dVar8 + dVar8) + (double)(uVar7 & 0xbca1a62633145c07) +
                             (dVar13 * 0.075 + 0.16666666666666666 +
                             dVar13 * dVar13 * 0.044642857142857144) * auVar17._8_8_ *
                             (auVar15._8_8_ + auVar15._8_8_) +
                             ((dVar2 - dVar9 * dVar9) -
                             (dVar8 - dVar9) * ((dVar8 + dVar8) - (dVar8 - dVar9))) / dVar8 +
                             dVar8 + dVar8) ^
                            (ulonglong)((ushort)(in_XMM0_Db >> 0x10) & 0x8000) << 0x30);
  }
  if (uVar4 < 0x3ff00) {
    return (float10)1.5707963267948966;
  }
  if ((in_XMM0_Db & 0x7fffffff) != 0x3ff00000 || in_XMM0_Da != 0) {
    if ((int)((((uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff) + 0x80100000) -
             (uint)(SUB84(param_1,0) == 0)) < 0) {
      local_c = -NAN;
      iVar6 = 0x3a;
    }
    else {
      local_c = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + 0.0;
      iVar6 = 0x3f0;
    }
    ___libm_error_support(&param_1,&param_1,&local_c,iVar6);
    return (float10)local_c;
  }
  uVar7 = CONCAT44((int)in_XMM0_Db >> 0x1f,(int)in_XMM0_Db >> 0x1f);
  return (float10)((double)(uVar7 & 0x400921fb54442d18) + (double)(uVar7 & 0x3ca1a62633145c07));
}


// ==== 100caf74 __set_exp

/* Library Function - Single Match
    __set_exp
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

float10 __cdecl __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}


// ==== 100caf9e __sptype

/* Library Function - Single Match
    __sptype
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __sptype(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}


// ==== 100caff9 FUN_100caff9

void __cdecl FUN_100caff9(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int extraout_EDX;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    iVar3 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar3 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar3;
      param_2._2_1_ = (byte)((uint)iVar3 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar3 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar2) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = extraout_EDX;
  }
  else {
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = ((param_2 >> 0x10 & 0x7ff0) >> 4) - 0x3fe;
  }
  *param_3 = iVar3;
  return;
}


// ==== 100cb0a8 __raise_exc_ex

/* Library Function - Single Match
    __raise_exc_ex
   
   Library: Visual Studio 2005 Release */

void __cdecl
__raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
              int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_1[1] = param_1[1] | 1;
    param_3 = 0xc000008f;
  }
  if ((uVar3 & 2) != 0) {
    param_1[1] = param_1[1] | 2;
    param_3 = 0xc0000093;
  }
  if ((uVar3 & 1) != 0) {
    param_1[1] = param_1[1] | 4;
    param_3 = 0xc0000091;
  }
  if ((uVar3 & 4) != 0) {
    param_1[1] = param_1[1] | 8;
    param_3 = 0xc000008e;
  }
  if ((uVar3 & 8) != 0) {
    param_1[1] = param_1[1] | 0x10;
    param_3 = 0xc0000090;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  uVar3 = __statfp();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_100cb205;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_100cb205:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_100cb23b:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_100cb23b;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  __clrfp();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_100cb340;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_100cb340:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_100cb36c;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_100cb36c:
  if (param_7 == 0) {
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *puVar2 = param_1[0x14];
  }
  return;
}


// ==== 100cb382 __raise_exc

/* Library Function - Single Match
    __raise_exc
   
   Library: Visual Studio 2005 Release */

void __cdecl
__raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


// ==== 100cb3a3 __handle_exc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2005 Release */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  ulonglong uVar4;
  double dVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  uVar6 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar6;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_100cb7c2();
    uVar6 = param_1 & 0x17;
    goto LAB_100cb562;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_100cb7c2();
    uVar6 = param_1 & 0x1b;
    goto LAB_100cb562;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar7 = (param_1 & 0x10) != 0;
      if (*param_2 != 0.0) {
        fVar8 = (float10)FUN_100caff9(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_c
                                     );
        dVar2 = (double)fVar8;
        local_c = local_c + -0x600;
        if (local_c < -0x432) {
          local_14 = dVar2 * 0.0;
          bVar7 = bVar3;
        }
        else {
          local_14 = (double)((ulonglong)dVar2 & 0xfffffffffffff | 0x10000000000000);
          if (local_c < -0x3fd) {
            local_c = -0x3fd - local_c;
            do {
              if ((((ulonglong)local_14 & 1) != 0) && (!bVar7)) {
                bVar7 = bVar3;
              }
              uVar6 = (uint)local_14 >> 1;
              uVar4 = (ulonglong)local_14 & 0x100000000;
              local_14._0_4_ = uVar6;
              if (uVar4 != 0) {
                local_14._0_4_ = uVar6 | 0x80000000;
              }
              local_14 = (double)CONCAT44(local_14._4_4_ >> 1,(uint)local_14);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          if (dVar2 < 0.0) {
            local_14 = -local_14;
          }
        }
        *param_2 = local_14;
        bVar3 = bVar7;
      }
      if (bVar3) {
        FUN_100cb7c2();
      }
      uVar6 = local_8 & 0xfffffffd;
      local_8 = uVar6;
    }
    goto LAB_100cb562;
  }
  FUN_100cb7c2();
  uVar6 = param_3 & 0xc00;
  dVar2 = _DAT_101284c0;
  dVar5 = _DAT_101284c0;
  if (uVar6 == 0) {
    dVar1 = *param_2;
joined_r0x100cb445:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar5;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar6 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_101284d0;
      goto joined_r0x100cb445;
    }
    dVar5 = _DAT_101284d0;
    if (uVar6 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x100cb445;
    }
    if (uVar6 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_101284d0;
      goto joined_r0x100cb445;
    }
  }
  uVar6 = param_1 & 0x1e;
LAB_100cb562:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_100cb7c2();
    uVar6 = uVar6 & 0xffffffef;
  }
  return uVar6 == 0;
}


// ==== 100cb584 __set_errno_from_matherr

/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2005 Release */

void __cdecl __set_errno_from_matherr(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x22;
    return;
  }
  return;
}


// ==== 100cb5ac __errcode

/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 2005 Release */

char __cdecl __errcode(byte param_1)

{
  char cVar1;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return '\x01';
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * '\x02';
      }
      cVar1 = '\x03';
    }
    else {
      cVar1 = '\x02';
    }
  }
  else {
    cVar1 = '\x05';
  }
  return cVar1;
}


// ==== 100cb5d9 __umatherr

/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2005 Release */

float10 __cdecl __umatherr(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = 0;
  do {
    if ((&DAT_101284e8)[iVar1 * 2] == param_2) {
      iVar1 = *(int *)(iVar1 * 8 + 0x101284ec);
      goto LAB_100cb5f5;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  iVar1 = 0;
LAB_100cb5f5:
  if (iVar1 != 0) {
    __ctrlfp();
    iVar1 = FUN_100ac1f5();
    if (iVar1 == 0) {
      __set_errno_from_matherr(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  __ctrlfp();
  __set_errno_from_matherr(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}


// ==== 100cb677 __handle_qnan1

/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2005 Release */

float10 __cdecl __handle_qnan1(int param_1,double param_2)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_101295a4 == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_100ce0fa();
  *pDVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}


// ==== 100cb6ca __except1

/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2005 Release */

void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint local_90 [16];
  uint local_50;
  uint local_14;
  int iVar3;
  
  local_14 = DAT_101281d0 ^ (uint)local_90;
  bVar1 = __handle_exc(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc_ex(local_90,&param_5,param_1,param_2,(uint *)&param_3,(uint *)&param_4,0);
  }
  cVar2 = __errcode((byte)param_1);
  iVar3 = CONCAT31(extraout_var_00,cVar2);
  if ((DAT_101295a4 == 0) && (iVar3 != 0)) {
    __umatherr(iVar3,param_2);
  }
  else {
    __set_errno_from_matherr(iVar3);
    __ctrlfp();
  }
  __security_check_cookie(local_14 ^ (uint)local_90);
  return;
}


// ==== 100cb784 __statfp

/* Library Function - Single Match
    __statfp
   
   Library: Visual Studio 2005 Release */

int __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


// ==== 100cb78f __clrfp

/* Library Function - Single Match
    __clrfp
   
   Library: Visual Studio 2005 Release */

int __clrfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


// ==== 100cb79b __ctrlfp

/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2005 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


// ==== 100cb7c2 FUN_100cb7c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cb7c2(void)

{
  return;
}


// ==== 100cb818 ___set_fpsr_sse2

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_101aeb64 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_101285e8 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}


// ==== 100cb88a ___report_gsfailure

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_101ad3d0 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_101ad3d4 = &stack0x00000004;
  _DAT_101ad310 = 0x10001;
  _DAT_101ad2b8 = 0xc0000409;
  _DAT_101ad2bc = 1;
  local_32c = DAT_101281d0;
  local_328 = DAT_101281d4;
  _DAT_101ad2c4 = unaff_retaddr;
  _DAT_101ad39c = in_GS;
  _DAT_101ad3a0 = in_FS;
  _DAT_101ad3a4 = in_ES;
  _DAT_101ad3a8 = in_DS;
  _DAT_101ad3ac = unaff_EDI;
  _DAT_101ad3b0 = unaff_ESI;
  _DAT_101ad3b4 = unaff_EBX;
  _DAT_101ad3b8 = in_EDX;
  _DAT_101ad3bc = in_ECX;
  _DAT_101ad3c0 = in_EAX;
  _DAT_101ad3c4 = unaff_EBP;
  DAT_101ad3c8 = unaff_retaddr;
  _DAT_101ad3cc = in_CS;
  _DAT_101ad3d8 = in_SS;
  DAT_101ad308 = IsDebuggerPresent();
  FUN_100d71bd();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_10106738);
  if (DAT_101ad308 == 0) {
    FUN_100d71bd();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// ==== 100cb990 FUN_100cb990

void FUN_100cb990(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_100cb9a9((double)in_ST1,SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}


// ==== 100cb9a9 FUN_100cb9a9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100cb9a9(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  ulonglong uVar20;
  ulonglong in_XMM2_Qb;
  undefined1 auVar21 [16];
  longlong lVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  dVar11 = (double)((ulonglong)param_1 >> 0x2c);
  uVar10 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (SUB82(dVar11,0) & 0xff) + 1 & 0x1fe;
  dVar33 = (double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)((int)&DAT_10106740 + uVar3 * 4);
  dVar29 = *(double *)((int)&DAT_10106740 + uVar3 * 4);
  dVar12 = *(double *)(&DAT_10106b50 + uVar3 * 8);
  dVar31 = *(double *)(&UNK_10106b58 + uVar3 * 8);
  uVar3 = 0x7fef - uVar10;
  iVar6 = SUB84(param_1,0);
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  dVar30 = param_1;
  if (0x7fffffff < (uVar10 - 0x10 | uVar3)) {
    auVar21._4_4_ = param_3;
    auVar21._0_4_ = param_2;
    in_XMM3._0_8_ = 0x7fffffffffffffff;
    auVar21._8_8_ = in_XMM2_Qb;
    uVar8 = param_3 & 0x7fffffff;
    if (uVar8 < 0x7ff00000) {
      if (param_2 == 0 && uVar8 == 0) {
        dVar29 = 1.0;
        iVar9 = 0x1a;
        if (iVar6 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          iVar9 = 0x1d;
          if (((uVar7 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar7 & 0x7fffffff) < 0x7ff00000 || (iVar6 == 0)))) {
            return (float10)1.0;
          }
        }
        goto LAB_100cc1b0;
      }
      if ((int)uVar3 < 0) {
        auVar25._8_8_ = in_XMM3._8_8_ << 0x34;
        auVar25._0_8_ = 0xfff0000000000000;
        iVar9 = (uVar8 >> 0x14) - 0x3f3;
        in_XMM3 = (undefined1  [16])0x0;
        uVar26 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar9) * (short)((uint)iVar9 >> 0x10),
                          (ushort)(-1 < (short)iVar9) * (short)iVar9);
        lVar19 = SUB168(auVar21 | auVar25,0) << uVar26;
        lVar24 = SUB168(auVar21 | auVar25,8) << uVar26;
        auVar22._0_4_ = -(uint)((int)lVar19 == 0);
        auVar22._4_4_ = -(uint)((int)((ulonglong)lVar19 >> 0x20) == 0);
        auVar22._8_4_ = -(uint)((int)lVar24 == 0);
        auVar22._12_4_ = -(uint)((int)((ulonglong)lVar24 >> 0x20) == 0);
        bVar1 = SUB161(auVar22 >> 7,0) & 1 | (SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar22 >> 0x17,0) & 1) << 2 | (SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar22 >> 0x27,0) & 1) << 4 | (SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar22 >> 0x37,0) & 1) << 6 | SUB161(auVar22 >> 0x3f,0) << 7;
        uVar8 = 0x7fef - uVar3 & 0x7fff;
        uVar26 = auVar22._8_8_;
        if (0x7fef < uVar8) {
          auVar15._0_4_ = -(uint)((int)((ulonglong)param_1 & 0xfffffffffffff) == 0);
          auVar15._4_4_ = -(uint)((int)(((ulonglong)param_1 & 0xfffffffffffff) >> 0x20) == 0);
          auVar15._8_4_ = 0xffffffff;
          auVar15._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar15 >> 7,0) & 1 | (SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar15 >> 0x17,0) & 1) << 2 | (SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar15 >> 0x27,0) & 1) << 4 | (SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar15 >> 0x37,0) & 1) << 6 | SUB161(auVar15 >> 0x3f,0) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (uVar20 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4),
                 lVar19 = CONCAT44(param_3,param_2) << uVar20, lVar24 = uVar26 << uVar20,
                 auVar23._0_4_ = -(uint)((int)lVar19 == 0),
                 auVar23._4_4_ = -(uint)((int)((ulonglong)lVar19 >> 0x20) == 0),
                 auVar23._8_4_ = -(uint)((int)lVar24 == 0),
                 auVar23._12_4_ = -(uint)((int)((ulonglong)lVar24 >> 0x20) == 0),
                 (byte)(SUB161(auVar23 >> 7,0) & 1 | (SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar23 >> 0x17,0) & 1) << 2 | (SUB161(auVar23 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar23 >> 0x2f,0) & 1) << 5 | (SUB161(auVar23 >> 0x37,0) & 1) << 6
                       | SUB161(auVar23 >> 0x3f,0) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_100cc137;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)-INFINITY;
              }
              goto LAB_100cbfc9;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_100cc137;
          }
          goto LAB_100cc00f;
        }
        if (bVar1 == 0xff) {
          uVar20 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4);
          in_XMM3 = ZEXT816(0x8000000000000000);
          lVar19 = CONCAT44(param_3,param_2) << uVar20;
          lVar24 = uVar26 << uVar20;
          auVar21._0_4_ = -(uint)((int)lVar19 == 0);
          auVar21._4_4_ = -(uint)((int)((ulonglong)lVar19 >> 0x20) == in_XMM3._4_4_);
          auVar21._8_4_ = -(uint)((int)lVar24 == 0);
          auVar21._12_4_ = -(uint)((int)((ulonglong)lVar24 >> 0x20) == 0);
          uVar3 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar8) {
            uVar8 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar21._8_8_;
            goto LAB_100cba26;
          }
          goto LAB_100cbe44;
        }
        uVar20 = (ulonglong)param_1 >> 0x20;
        in_XMM2_Qb = uVar26 >> 0x20;
        uVar3 = 0;
        uVar8 = 0;
        if (iVar6 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          dVar29 = -NAN;
          iVar9 = 0x1c;
          goto LAB_100cc1b0;
        }
LAB_100cbeca:
        dVar30 = dVar11;
        if ((uVar8 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar8 & uVar3 << 0xd) == 0) {
              return (float10)0;
            }
LAB_100cbfc9:
            return (float10)-0.0;
          }
          dVar29 = (double)((ulonglong)(uVar8 & uVar3 << 0xd | 0x7ff00000) << 0x20);
          iVar9 = 0x1b;
          goto LAB_100cc1b0;
        }
      }
      else {
        uVar3 = 0;
LAB_100cbe44:
        dVar33 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar21._8_8_;
        uVar20 = 0x3ff0000000000000;
        dVar11 = param_1 * 1.8446744073709552e+19;
        uVar8 = uVar7;
        dVar30 = dVar11;
        if (iVar6 == 0) goto LAB_100cbeca;
      }
      dVar11 = (double)((ulonglong)ABS(dVar30) >> 0x2c);
      uVar8 = (SUB82(dVar11,0) & 0xff) + 1 & 0x1fe;
      dVar33 = (double)((ulonglong)dVar33 & (ulonglong)dVar30 | uVar20) *
               *(double *)((int)&DAT_10106740 + uVar8 * 4);
      dVar29 = *(double *)((int)&DAT_10106740 + uVar8 * 4);
      dVar12 = *(double *)(&DAT_10106b50 + uVar8 * 8);
      dVar31 = *(double *)(&UNK_10106b58 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_100cba26;
    }
    dVar12 = param_1;
    if ((0x7fefffff < (uVar7 & 0x7fffffff)) && ((0x7ff00000 < (uVar7 & 0x7fffffff) || (iVar6 != 0)))
       ) {
LAB_100cc00f:
      dVar29 = param_1 + param_1;
      iVar9 = 0x3ee;
      goto LAB_100cc1b0;
    }
    goto LAB_100cc0c5;
  }
  uVar3 = 0;
  uVar8 = 0x3fe7f;
LAB_100cba26:
  uVar26 = in_XMM3._8_8_;
  uVar4 = ((ushort)((ulonglong)dVar33 >> 0x26) & 0xff) + 1 & 0x1fe;
  dVar27 = (double)((ulonglong)dVar30 & 0xfffffffffffff | DAT_10109fe0);
  dVar13 = (double)((ulonglong)dVar27 & 0xfffffffff8000000);
  dVar27 = dVar27 - dVar13;
  uVar5 = ((ushort)((ulonglong)(dVar33 * *(double *)(&DAT_10107360 + uVar4 * 4)) >> 0x1f) & 0x1ff) +
          1 & 0x3fe;
  dVar28 = dVar29 * *(double *)(&DAT_10107360 + uVar4 * 4) * *(double *)(&DAT_10107f80 + uVar5 * 4);
  dVar33 = dVar33 * *(double *)(&DAT_10107360 + uVar4 * 4) * *(double *)(&DAT_10107f80 + uVar5 * 4);
  dVar30 = dVar12 + *(double *)(&DAT_10107770 + uVar4 * 8) +
           (double)(int)((longlong)dVar11 - (ulonglong)uVar8 >> 8) +
           *(double *)(&DAT_10108790 + uVar5 * 8);
  dVar32 = dVar31 + *(double *)(&DAT_10107778 + uVar4 * 8) + *(double *)(&DAT_10108798 + uVar5 * 8);
  dVar12 = (double)((ulonglong)dVar28 & 0xfffffffff8000000);
  dVar28 = dVar28 - dVar12;
  dVar34 = dVar33 + -1.442694902420044;
  dVar31 = dVar30 + dVar34;
  dVar29 = (double)CONCAT44(param_3,param_2);
  uVar2 = (ushort)(param_3 >> 0x10);
  dVar30 = dVar30 - dVar31;
  uVar4 = (uint)(ushort)((ulonglong)dVar31 >> 0x30);
  dVar12 = (((dVar33 - dVar12 * dVar13) - dVar13 * dVar28) - dVar12 * dVar27) - dVar27 * dVar28;
  dVar33 = dVar34 - dVar12;
  dVar11 = dVar31 - dVar12;
  uVar8 = uVar2 & 0x7ff0;
  if (0x7fef < uVar8) {
    dVar29 = (double)CONCAT44(param_3,param_2);
    auVar21._8_8_ = in_XMM2_Qb;
    auVar21._0_8_ = dVar29;
    in_XMM3._0_8_ = (ulonglong)dVar29 & 0xfffffffffffff;
    in_XMM3._8_8_ = uVar26 >> 0x1f & in_XMM2_Qb;
    auVar16._0_4_ = -(uint)((int)in_XMM3._0_8_ == 0);
    auVar16._4_4_ = -(uint)((int)(in_XMM3._0_8_ >> 0x20) == 0);
    auVar16._8_4_ = -(uint)((int)in_XMM3._8_8_ == 0);
    auVar16._12_4_ = -(uint)((int)(in_XMM3._8_8_ >> 0x20) == 0);
    if ((byte)(SUB161(auVar16 >> 7,0) & 1 | (SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar16 >> 0x17,0) & 1) << 2 | (SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar16 >> 0x27,0) & 1) << 4 | (SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar16 >> 0x37,0) & 1) << 6 | SUB161(auVar16 >> 0x3f,0) << 7) == 0xff) {
      dVar12 = (double)CONCAT44(uVar3,uVar4);
      if (iVar6 == 0) {
        if (uVar7 != 0x3ff00000) {
          dVar12 = (double)CONCAT44(uVar3,uVar7);
          if (uVar7 == 0xbff00000) {
            return (float10)1;
          }
          goto LAB_100cc0c5;
        }
      }
      else {
LAB_100cc0c5:
        dVar29 = auVar21._0_8_;
        uVar26 = in_XMM3._8_8_ & auVar21._8_8_;
        auVar17._0_4_ = -(uint)((int)((ulonglong)dVar29 & 0xfffffffffffff) == 0);
        auVar17._4_4_ = -(uint)((int)(((ulonglong)dVar29 & 0xfffffffffffff) >> 0x20) == 0);
        auVar17._8_4_ = -(uint)((int)uVar26 == 0);
        auVar17._12_4_ = -(uint)((int)(uVar26 >> 0x20) == 0);
        if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                   (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                   (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                   (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) != 0xff)
        goto LAB_100cc13e;
        if (dVar12 != -1.0) {
          if ((auVar21._6_2_ & 0x8000) == 0) {
            if ((uVar10 & 0x7ff0) < 0x3ff0) {
              return (float10)0;
            }
          }
          else if (0x3fef < (uVar10 & 0x7ff0)) {
            return (float10)0;
          }
LAB_100cc137:
          return (float10)INFINITY;
        }
      }
      dVar29 = 1.0;
      iVar9 = 0x1c;
    }
    else {
LAB_100cc13e:
      dVar29 = dVar29 + dVar29;
      iVar9 = 0x3ee;
    }
    goto LAB_100cc1b0;
  }
  iVar6 = (uVar8 - 0x3ff0) + (uVar4 & 0x7ff0);
  if ((0x40a0U - iVar6 | iVar6 - 0x3c70U) < 0x80000000) {
LAB_100cbb78:
    dVar13 = (double)((ulonglong)dVar29 & 0xfffffffff8000000);
    dVar27 = (double)((ulonglong)dVar11 & 0xfffffffff8000000);
    dVar12 = (dVar30 + dVar34) - (dVar12 - (dVar31 - dVar11));
    dVar31 = dVar13 * dVar27 * 128.0;
    uVar7 = (uint)ROUND(dVar31);
    dVar29 = dVar13 * (dVar11 - dVar27) + dVar27 * (dVar29 - dVar13) +
             (dVar11 - dVar27) * (dVar29 - dVar13);
    if (0 < (int)(0x1ff7f - uVar7 | uVar7 + 0x1e1ff)) {
      iVar6 = (uVar7 & 0x7f) * 0x10;
      auVar14._0_8_ = (double)((ulonglong)((uVar3 + uVar7 & 0xffffff80) + 0x1ff80) << 0x2d);
      auVar14._8_4_ = 0;
      auVar14._12_4_ = (int)((ulonglong)auVar14._0_8_ >> 0x20);
      dVar30 = *(double *)(&DAT_101097c0 + iVar6) * auVar14._0_8_;
      dVar29 = (dVar31 - ((dVar31 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
               dVar29 + ((dVar33 * 0.16015105075297303 + dVar33 * dVar33 * -0.08325619496072671) *
                         dVar33 * dVar33 +
                         dVar33 * 9.597935033233511e-08 + dVar33 * dVar33 * -0.3465736568077919 +
                        dVar32 + dVar12) * (double)CONCAT44(param_3,param_2);
      return (float10)(dVar29 * dVar29 * dVar30 *
                       (dVar29 * 0.0013333558146428443 + 0.009618129107628477) * dVar29 * dVar29 +
                       *(double *)(&UNK_101097c8 + iVar6) * auVar14._8_8_ +
                       (dVar29 * 0.055504108664821576 + 0.2402265069591007) * dVar29 * dVar29 *
                       dVar30 + dVar29 * 0.6931471805599453 * dVar30 + dVar30);
    }
    if ((int)uVar7 < 1) {
      if ((int)uVar7 < -0x3fdff) {
LAB_100cc409:
        dVar29 = (double)((ulonglong)uVar3 << 0x2d);
        iVar9 = 0x19;
        goto LAB_100cc1b0;
      }
      uVar3 = uVar3 + 0x80;
      uVar8 = (uVar7 & 0xffffff80) + 0x3fe80;
      uVar10 = 0;
    }
    else {
      if (0x3ffff < uVar7) goto LAB_100cc42c;
      uVar3 = uVar3 + 0x3ff00;
      uVar8 = uVar7 - 0x80 & 0xffffff80;
      uVar10 = 0x3ff0;
    }
    iVar6 = (uVar7 & 0x7f) * 0x10;
    uVar7 = ((int)-(uVar8 - 0x1ff80) >> 7) + 2;
    auVar18._0_8_ = (double)((ulonglong)uVar8 << 0x2d);
    auVar18._8_4_ = 0;
    auVar18._12_4_ = (int)((ulonglong)auVar18._0_8_ >> 0x20);
    dVar11 = *(double *)(&DAT_101097c0 + iVar6) * auVar18._0_8_;
    dVar12 = (dVar31 - ((dVar31 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
             dVar29 + ((dVar33 * 0.16015105075297303 + dVar33 * dVar33 * -0.08325619496072671) *
                       dVar33 * dVar33 +
                       dVar33 * 9.597935033233511e-08 + dVar33 * dVar33 * -0.3465736568077919 +
                      dVar32 + dVar12) * (double)CONCAT44(param_3,param_2);
    dVar29 = (double)((ulonglong)uVar3 << 0x2d);
    uVar26 = (ulonglong)(uVar7 + (uVar7 & 0x20));
    dVar31 = (double)(-1L << uVar26 & (ulonglong)dVar11);
    dVar12 = dVar12 * dVar12 * dVar11 *
             (dVar12 * 0.0013333558146428443 + 0.009618129107628477) * dVar12 * dVar12 +
             *(double *)(&UNK_101097c8 + iVar6) * auVar18._8_8_ +
             (dVar12 * 0.055504108664821576 + 0.2402265069591007) * dVar12 * dVar12 * dVar11 +
             dVar12 * 0.6931471805599453 * dVar11;
    dVar30 = (double)((ulonglong)(dVar31 + dVar12) & -1L << uVar26);
    dVar12 = dVar12 + (dVar31 - dVar30) + (dVar11 - dVar31);
    if ((int)(uVar8 - 0x1ff80) < 1) {
      dVar29 = dVar12 * dVar29 + dVar30 * dVar29;
      dVar29 = dVar29 + (double)((ulonglong)uVar10 << 0x30) * dVar29;
      iVar9 = 0x18;
      if ((((ushort)((ulonglong)dVar29 >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (iVar9 = 0x19, ((ulonglong)dVar29 & 0x7ff0000000000000) != 0)) {
        return (float10)dVar29;
      }
    }
    else {
      dVar29 = (dVar12 + dVar30) * dVar29;
      dVar29 = dVar29 + (double)((ulonglong)uVar10 << 0x30) * dVar29;
      iVar9 = 0x18;
      if ((((ushort)((ulonglong)dVar29 >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (iVar9 = 0x19, ((ulonglong)dVar29 & 0x7ff0000000000000) != 0)) {
        return (float10)dVar29;
      }
    }
  }
  else {
    dVar31 = dVar29 * dVar11;
    uVar7 = (ushort)((ulonglong)dVar31 >> 0x30) & 0x7ff0;
    uVar8 = uVar7 - 0x3c70;
    if ((0x40a0 - uVar7 | uVar8) < 0x80000000) goto LAB_100cbb78;
    if (0x7fffffff < uVar8) {
      return (float10)(double)((ulonglong)(uVar3 | 0x1ff80) << 0x2d);
    }
    if (((uVar2 ^ (uVar10 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_100cc409;
LAB_100cc42c:
    iVar9 = 0x18;
    if (uVar3 == 0) {
      dVar29 = INFINITY;
    }
    else {
      dVar29 = -INFINITY;
    }
  }
LAB_100cc1b0:
  ___libm_error_support(&param_1,(undefined8 *)&param_2,(double *)&stack0xfffffff4,iVar9);
  return (float10)dVar29;
}


// ==== 100cc6f7 __d_inttype

/* Library Function - Single Match
    __d_inttype
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __d_inttype(double param_1)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = __frnd(param_1);
    if (fVar2 == (float10)param_1) {
      fVar2 = __frnd(param_1 * 0.5);
      if (fVar2 == (float10)(param_1 * 0.5)) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}


// ==== 100cc75b FUN_100cc75b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100cc75b(int param_1,int param_2,int param_3,int param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  dVar2 = 0.0;
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar3 = _DAT_101284c0;
  if (param_4 == 0x7ff00000) {
    if (param_3 == 0) {
      if ((dVar1 <= 1.0) && (dVar3 = 1.0, dVar1 < 1.0)) {
        dVar3 = dVar2;
      }
      goto LAB_100cc888;
    }
  }
  else if ((param_4 == -0x100000) && (param_3 == 0)) {
    dVar3 = dVar2;
    if ((dVar1 <= 1.0) && (dVar3 = _DAT_101284c0, 1.0 <= dVar1)) {
      *param_5 = _DAT_101284c8;
      return 1;
    }
    goto LAB_100cc888;
  }
  if (param_2 == 0x7ff00000) {
    if (param_1 != 0) {
      return 0;
    }
    if (((double)CONCAT44(param_4,param_3) <= 0.0) &&
       (dVar3 = dVar2, 0.0 <= (double)CONCAT44(param_4,param_3))) {
      dVar3 = 1.0;
    }
  }
  else {
    if (param_2 != -0x100000) {
      return 0;
    }
    if (param_1 != 0) {
      return 0;
    }
    iVar4 = __d_inttype((double)CONCAT44(param_4,param_3));
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        dVar3 = 1.0;
      }
      else {
        dVar3 = 0.0;
        if (iVar4 == 1) {
          dVar3 = _DAT_101284e0;
        }
      }
    }
    else {
      dVar3 = _DAT_101284c0;
      if (iVar4 == 1) {
        dVar3 = -_DAT_101284c0;
      }
    }
  }
LAB_100cc888:
  *param_5 = dVar3;
  return 0;
}


// ==== 100cc899 FUN_100cc899

undefined4 FUN_100cc899(void)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}


// ==== 100cc8c8 setSBCS

/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x101;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  _memset(puVar1,0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  do {
    *puVar1 = puVar1[(int)&DAT_10128650 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_10128650 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 100cc91d setSBUpLow

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [52];
  undefined1 local_4a0 [408];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_100cca84:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_100cca84;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_100cca2b;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_100cca2b:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}


// ==== 100ccaa7 ___updatetmbcinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2005 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_10128b70) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_10128a78) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_10128650)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_10128a78;
      lpAddend = (pthreadmbcinfo)PTR_DAT_10128a78;
      InterlockedIncrement((LONG *)PTR_DAT_10128a78);
    }
    FUN_100ccb42();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}


// ==== 100ccb42 FUN_100ccb42

void FUN_100ccb42(void)

{
  FUN_100cf46a(0xd);
  return;
}


// ==== 100ccb4b getSystemCP

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_101ad5dc = 0;
  if (unaff_ESI == -2) {
    DAT_101ad5dc = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_101ad5dc = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_101ad5dc = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_101ad5dc = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}


// ==== 100ccbc5 FUN_100ccbc5

void __cdecl FUN_100ccbc5(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int extraout_ECX;
  undefined2 *puVar10;
  int iVar11;
  undefined4 extraout_EDX;
  BYTE *pBVar12;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_100ccc01:
    if (*(uint *)((int)&DAT_10128a80 + uVar5) != uVar4) goto code_r0x100ccc0d;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_10128a90 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x10128a7c);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_100cc899();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_10128a84 + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_100ccd32;
  }
LAB_100ccbee:
  setSBCS(unaff_EDI);
LAB_100ccd8f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x100ccc0d:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x100ccc1a;
  goto LAB_100ccc01;
code_r0x100ccc1a:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_100ccd8f;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar12 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar12;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar12[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar12 + 1;
          pBVar12 = pBVar12 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar11 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar9 = FUN_100cc899();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_100ccd32:
    setSBUpLow(unaff_EDI);
    goto LAB_100ccd8f;
  }
  if (DAT_101ad5dc == 0) goto LAB_100ccd8f;
  goto LAB_100ccbee;
}


// ==== 100ccd9e __setmbcp

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  DWORD *pDVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = __malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = FUN_100ccbc5(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_10128650)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_10128b70 & 1) == 0)) {
          __lock(0xd);
          _DAT_101ad5ec = ptVar3->mbcodepage;
          _DAT_101ad5f0 = ptVar3->ismbcodepage;
          _DAT_101ad5f4 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_101ad5e0)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_10128870)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_10128978)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_10128a78);
          if ((LVar4 == 0) && (PTR_DAT_10128a78 != &DAT_10128650)) {
            _free(PTR_DAT_10128a78);
          }
          PTR_DAT_10128a78 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_100cceff();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_10128650) {
          _free(ptVar3);
        }
        pDVar5 = FUN_100ce0fa();
        *pDVar5 = 0x16;
      }
    }
  }
  return local_24;
}


// ==== 100cceff FUN_100cceff

void FUN_100cceff(void)

{
  FUN_100cf46a(0xd);
  return;
}


// ==== 100ccf38 ___initmbctable

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_101aeb74 == 0) {
    __setmbcp(-3);
    DAT_101aeb74 = 1;
  }
  return 0;
}


// ==== 100ccf56 __iswctype_l

/* Library Function - Single Match
    __iswctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    local_8[0] = 0;
  }
  else if (_C < 0x100) {
    local_8[0] = *(ushort *)(PTR_DAT_10128df4 + (uint)_C * 2) & _Type;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
    iVar1 = ___crtGetStringTypeW
                      (&local_18,1,(wchar_t *)&_C,1,local_8,(local_18.locinfo)->lc_codepage,
                       (int)(local_18.locinfo)->lc_category[0].wlocale);
    if (iVar1 == 0) {
      local_8[0] = 0;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return (uint)(local_8[0] & _Type);
}


// ==== 100ccfd8 _iswctype

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    return (uint)(*(ushort *)(PTR_DAT_10128df4 + (uint)_C * 2) & _Type);
  }
  if (DAT_101acde0 == 0) {
    ___crtGetStringTypeW
              ((localeinfo_struct *)&PTR_DAT_10128c60,1,(wchar_t *)&_C,1,local_8,DAT_10128b84,
               DAT_10128b94);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}


// ==== 100cd046 __modf_default

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __modf_default
   
   Library: Visual Studio 2005 Release */

float10 __cdecl __modf_default(double param_1,double *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  
  uVar1 = param_1._6_2_;
  uVar2 = __ctrlfp();
  __ctrlfp();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    *param_2 = _DAT_101284c8;
    iVar3 = __sptype(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        *param_2 = param_1;
        dVar5 = __copysign(0.0,param_1);
        param_1._0_6_ = SUB86(dVar5,0);
        param_1._6_2_ = (ushort)((ulonglong)dVar5 >> 0x30);
        __ctrlfp();
        goto LAB_100cd148;
      }
      if (iVar3 == 3) {
        *param_2 = param_1;
        fVar4 = __handle_qnan1(0x1c,param_1);
        return fVar4;
      }
    }
    *param_2 = param_1 + 1.0;
    fVar4 = (float10)__except1(8,0x1c,param_1,param_1 + 1.0,uVar2);
  }
  else {
    fVar4 = __frnd(param_1);
    *param_2 = (double)fVar4;
    dVar5 = (double)((float10)param_1 - fVar4);
    param_1._0_6_ = SUB86(dVar5,0);
    param_1._6_2_ = (ushort)((ulonglong)dVar5 >> 0x30);
    if (dVar5 == 0.0) {
      param_1._6_2_ = param_1._6_2_ | uVar1 & 0x8000;
    }
    __ctrlfp();
LAB_100cd148:
    fVar4 = (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
  }
  return fVar4;
}


// ==== 100cd150 ___libm_error_support

/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2005 Release */

void __cdecl ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  DWORD *pDVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  uStack_9 = 0;
  uStack_8 = 0;
  uStack_7 = 0;
  uStack_6 = 0;
  uStack_5 = 0;
  if (DAT_101ad618 == 0) {
    pcVar1 = FUN_100ac1f5;
  }
  else {
    pcVar1 = (code *)FUN_100c8e85(DAT_101aea3c);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_100cd1ff:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        pDVar3 = FUN_100ce0fa();
        *pDVar3 = 0x22;
      }
    }
    else if (param_4 < 0x1a) {
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_100cd26d;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_100cd26d;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_100cd1f8;
              }
              local_28 = "exp";
              goto LAB_100cd234;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_100cd1ff;
      }
      local_28 = "pow";
LAB_100cd234:
      local_24 = *param_1;
      local_1c = *param_2;
      local_2c = 4;
      local_14 = *param_3;
      (*pcVar1)(&local_2c);
    }
    else {
      if (param_4 != 0x1a) {
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_100cd32a_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_100cd32a_caseD_3f1;
            }
            goto switchD_100cd32a_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_100cd2e3;
        }
        local_2c = 2;
LAB_100cd1f8:
        local_28 = "pow";
        goto LAB_100cd1ff;
      }
      local_14 = 1.0;
    }
    goto LAB_100cd3c3;
  }
  switch(param_4) {
  case 1000:
    local_28 = "log";
    break;
  case 0x3e9:
    local_28 = "log10";
    break;
  case 0x3ea:
    local_28 = "exp";
    break;
  case 0x3eb:
    local_28 = "atan";
    break;
  case 0x3ec:
    local_28 = "ceil";
    break;
  case 0x3ed:
    local_28 = "floor";
    break;
  case 0x3ee:
switchD_100cd32a_caseD_3ee:
    local_28 = "pow";
    goto LAB_100cd26d;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_100cd32a_caseD_3f0:
    local_28 = "acos";
    goto LAB_100cd26d;
  case 0x3f1:
switchD_100cd32a_caseD_3f1:
    local_28 = "asin";
    goto LAB_100cd26d;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_100cd38f;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_100cd38f;
  case 0x3f4:
    local_28 = "tan";
LAB_100cd38f:
    local_14 = *param_1 *
               (double)CONCAT17(uStack_5,CONCAT16(uStack_6,CONCAT15(uStack_7,CONCAT14(uStack_8,
                                                  CONCAT13(uStack_9,CONCAT12(uStack_a,CONCAT11(
                                                  uStack_b,local_c)))))));
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_100cd3a0;
  default:
    goto switchD_100cd32a_default;
  }
LAB_100cd2e3:
  *param_3 = *param_1;
LAB_100cd26d:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_100cd3a0:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    pDVar3 = FUN_100ce0fa();
    *pDVar3 = 0x21;
  }
LAB_100cd3c3:
  *param_3 = local_14;
switchD_100cd32a_default:
  return;
}


// ==== 100cd400 __flsbuf

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  DWORD *pDVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint uVar6;
  longlong lVar7;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar6 = _File_00->_flag;
  if ((uVar6 & 0x82) == 0) {
    pDVar2 = FUN_100ce0fa();
    *pDVar2 = 9;
LAB_100cd424:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    pDVar2 = FUN_100ce0fa();
    *pDVar2 = 0x22;
    goto LAB_100cd424;
  }
  if ((uVar6 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar6 & 0x10) == 0) {
      _File_00->_flag = uVar6 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar6 & 0xfffffffe;
  }
  uVar6 = _File_00->_flag;
  _File_00->_flag = uVar6 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar6 & 0x10c) == 0) &&
     (((ppuVar3 = FUN_100d538d(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_100d538d(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
      (iVar4 = __isatty((int)_File), iVar4 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108) == 0) {
    uVar6 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar6 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar6 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)&DAT_fffffffe)) {
        puVar5 = &DAT_101283f0;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x38 + (&DAT_101aea60)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_100cd54a;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_100cd54a:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}


// ==== 100cd560 write_char

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}


// ==== 100cd593 write_multi_char

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}


// ==== 100cd5b7 write_string

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2005 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  DWORD *pDVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        pDVar1 = FUN_100ce0fa();
        if (*pDVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}


// ==== 100cd601 FUN_100cd601

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_100cd601(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  DWORD *pDVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined3 extraout_var;
  int iVar8;
  code *pcVar9;
  errno_t eVar10;
  int extraout_ECX;
  uint uVar11;
  byte *pbVar12;
  size_t sVar13;
  wchar_t *pwVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  wchar_t *pwVar18;
  undefined4 uVar19;
  localeinfo_struct *plVar20;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  int local_26c [2];
  size_t local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  wchar_t *local_250;
  int local_24c;
  int local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  undefined1 local_234;
  char local_233;
  int local_230;
  FILE *local_22c;
  wchar_t *local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [10];
  undefined1 local_1fc [491];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)local_1fc;
  local_22c = param_1;
  local_228 = param_4;
  local_248 = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_24c = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,param_3);
  if (local_22c != (FILE *)0x0) {
    if ((local_22c->_flag & 0x40) == 0) {
      iVar5 = __fileno(local_22c);
      if ((iVar5 == -1) || (iVar5 = __fileno(local_22c), iVar5 == -2)) {
        puVar7 = &DAT_101283f0;
      }
      else {
        iVar5 = __fileno(local_22c);
        uVar6 = __fileno(local_22c);
        puVar7 = (undefined *)((uVar6 & 0x1f) * 0x38 + (&DAT_101aea60)[iVar5 >> 5]);
      }
      if ((puVar7[0x24] & 0x7f) == 0) {
        iVar5 = __fileno(local_22c);
        if ((iVar5 == -1) || (iVar5 = __fileno(local_22c), iVar5 == -2)) {
          puVar7 = &DAT_101283f0;
        }
        else {
          iVar5 = __fileno(local_22c);
          uVar6 = __fileno(local_22c);
          puVar7 = (undefined *)((uVar6 & 0x1f) * 0x38 + (&DAT_101aea60)[iVar5 >> 5]);
        }
        if ((puVar7[0x24] & 0x80) == 0) goto LAB_100cd73f;
      }
    }
    else {
LAB_100cd73f:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_230 = 0;
        local_224 = 0;
        local_250 = (wchar_t *)0x0;
        iVar5 = 0;
        while ((local_215 != 0 && (pbVar12 = param_2 + 1, local_244 = pbVar12, -1 < local_230))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar6 = (byte)"exp10"[(char)local_215] & 0xf;
          }
          else {
            uVar6 = 0;
          }
          local_270 = (int)(char)(&DAT_1010a108)[uVar6 * 8 + iVar5] >> 4;
          switch(local_270) {
          case 0:
switchD_100cd7a3_caseD_0:
            local_240 = 0;
            iVar5 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar5 != 0) {
              write_char();
              local_244 = param_2 + 2;
              if (*pbVar12 == 0) {
LAB_100cdf36:
                pDVar4 = FUN_100ce0fa();
                *pDVar4 = 0x16;
                goto LAB_100cd671;
              }
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_274 = 0;
            local_24c = 0;
            local_23c = 0;
            local_238 = 0;
            local_214 = 0;
            local_240 = 0;
            break;
          case 2:
            if (local_215 == 0x20) {
              local_214 = local_214 | 2;
            }
            else if (local_215 == 0x23) {
              local_214 = local_214 | 0x80;
            }
            else if (local_215 == 0x2b) {
              local_214 = local_214 | 1;
            }
            else if (local_215 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else if (local_215 == 0x30) {
              local_214 = local_214 | 8;
            }
            break;
          case 3:
            if (local_215 == 0x2a) {
              local_228 = param_4 + 2;
              local_23c = *(int *)param_4;
              if (local_23c < 0) {
                local_214 = local_214 | 4;
                local_23c = -local_23c;
              }
            }
            else {
              local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 4:
            local_21c = 0;
            break;
          case 5:
            if (local_215 == 0x2a) {
              local_228 = param_4 + 2;
              local_21c = *(int *)param_4;
              if (local_21c < 0) {
                local_21c = -1;
              }
            }
            else {
              local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 6:
            if (local_215 == 0x49) {
              bVar1 = *pbVar12;
              if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                local_214 = local_214 | 0x8000;
                local_244 = param_2 + 3;
              }
              else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                local_214 = local_214 & 0xffff7fff;
                local_244 = param_2 + 3;
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                local_270 = 0;
                goto switchD_100cd7a3_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar12 == 0x6c) {
                local_214 = local_214 | 0x1000;
                local_244 = param_2 + 2;
              }
              else {
                local_214 = local_214 | 0x10;
              }
            }
            else if (local_215 == 0x77) {
              local_214 = local_214 | 0x800;
            }
            break;
          case 7:
            if ((char)local_215 < 'e') {
              if (local_215 == 100) {
LAB_100cdb82:
                local_214 = local_214 | 0x40;
LAB_100cdb86:
                local_224 = 10;
LAB_100cdb8d:
                if (((short)local_214 < 0) || ((local_214 & 0x1000) != 0)) {
                  uVar6 = *(uint *)param_4;
                  uVar11 = *(uint *)(param_4 + 2);
                  local_228 = param_4 + 4;
                }
                else {
                  local_228 = param_4 + 2;
                  if ((local_214 & 0x20) == 0) {
                    uVar6 = *(uint *)param_4;
                    if ((local_214 & 0x40) == 0) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = (int)uVar6 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_214 & 0x40) == 0) {
                      uVar6 = (uint)(ushort)*param_4;
                    }
                    else {
                      uVar6 = (uint)*param_4;
                    }
                    uVar11 = (int)uVar6 >> 0x1f;
                  }
                }
                if ((((local_214 & 0x40) != 0) && ((int)uVar11 < 1)) && ((int)uVar11 < 0)) {
                  bVar15 = uVar6 != 0;
                  uVar6 = -uVar6;
                  uVar11 = -(uVar11 + bVar15);
                  local_214 = local_214 | 0x100;
                }
                uVar16 = CONCAT44(uVar11,uVar6);
                if ((local_214 & 0x9000) == 0) {
                  uVar11 = 0;
                }
                if (local_21c < 0) {
                  local_21c = 1;
                }
                else {
                  local_214 = local_214 & 0xfffffff7;
                  if (0x200 < local_21c) {
                    local_21c = 0x200;
                  }
                }
                if (uVar6 == 0 && uVar11 == 0) {
                  local_238 = 0;
                }
                pwVar14 = &local_11;
                while( true ) {
                  uVar6 = uVar11;
                  iVar5 = local_21c + -1;
                  if ((local_21c < 1) && ((uint)uVar16 == 0 && uVar6 == 0)) break;
                  local_21c = iVar5;
                  uVar16 = __aulldvrm((uint)uVar16,uVar6,local_224,(int)local_224 >> 0x1f);
                  iVar5 = extraout_ECX + 0x30;
                  if (0x39 < iVar5) {
                    iVar5 = iVar5 + local_248;
                  }
                  *(char *)pwVar14 = (char)iVar5;
                  pwVar14 = (wchar_t *)((int)pwVar14 + -1);
                  uVar11 = (uint)((ulonglong)uVar16 >> 0x20);
                  local_264 = uVar6;
                }
                local_224 = (int)&local_11 + -(int)pwVar14;
                local_220 = (wchar_t *)((int)pwVar14 + 1);
                local_21c = iVar5;
                if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0'))))
                {
                  *(char *)pwVar14 = '0';
                  local_224 = (int)&local_11 + -(int)pwVar14 + 1;
                  local_220 = pwVar14;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_100cda0b;
                }
                if (local_215 == 0x41) {
LAB_100cd9b7:
                  local_215 = local_215 + 0x20;
                  local_274 = 1;
LAB_100cd9c4:
                  local_214 = local_214 | 0x40;
                  local_264 = 0x200;
                  pwVar14 = local_210;
                  sVar13 = local_264;
                  pwVar18 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      sVar13 = local_21c + 0x15d;
                      local_220 = local_210;
                      local_250 = __malloc_crt(sVar13);
                      pwVar14 = local_250;
                      pwVar18 = local_250;
                      if (local_250 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar14 = local_210;
                        sVar13 = local_264;
                        pwVar18 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar18;
                  local_264 = sVar13;
                  local_27c = *(undefined4 *)param_4;
                  local_228 = param_4 + 4;
                  local_278 = *(undefined4 *)(param_4 + 2);
                  plVar20 = &local_260;
                  iVar8 = (int)(char)local_215;
                  puVar17 = &local_27c;
                  pwVar18 = pwVar14;
                  sVar13 = local_264;
                  iVar5 = local_21c;
                  uVar19 = local_274;
                  pcVar9 = (code *)FUN_100c8e85((int)PTR_LAB_1012828c);
                  (*pcVar9)(puVar17,pwVar18,sVar13,iVar8,iVar5,uVar19,plVar20);
                  uVar6 = local_214 & 0x80;
                  if ((uVar6 != 0) && (local_21c == 0)) {
                    plVar20 = &local_260;
                    pwVar18 = pwVar14;
                    pcVar9 = (code *)FUN_100c8e85((int)PTR_LAB_10128298);
                    (*pcVar9)(pwVar18,plVar20);
                  }
                  if ((local_215 == 0x67) && (uVar6 == 0)) {
                    plVar20 = &local_260;
                    pwVar18 = pwVar14;
                    pcVar9 = (code *)FUN_100c8e85((int)PTR_LAB_10128294);
                    (*pcVar9)(pwVar18,plVar20);
                  }
                  if ((char)*pwVar14 == '-') {
                    local_214 = local_214 | 0x100;
                    local_220 = (wchar_t *)((int)pwVar14 + 1);
                    pwVar14 = local_220;
                  }
LAB_100cdaf8:
                  local_224 = _strlen((char *)pwVar14);
                }
                else if (local_215 == 0x43) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_100cda68:
                  local_228 = param_4 + 2;
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*param_4;
                    local_224 = 1;
                  }
                  else {
                    eVar10 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*param_4);
                    if (eVar10 != 0) {
                      local_24c = 1;
                    }
                  }
                  local_220 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_100cd9b7;
              }
              else {
                if (local_215 == 0x58) goto LAB_100cdc8d;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)param_4;
                  local_228 = param_4 + 2;
                  pwVar14 = (wchar_t *)PTR_s__null__10128c6c;
                  local_220 = (wchar_t *)PTR_s__null__10128c6c;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar18 = *(wchar_t **)(psVar2 + 2), pwVar18 == (wchar_t *)0x0))
                  goto LAB_100cdaf8;
                  local_224 = (size_t)*psVar2;
                  local_220 = pwVar18;
                  if ((local_214 & 0x800) == 0) {
                    local_240 = 0;
                  }
                  else {
                    local_224 = (int)local_224 / 2;
                    local_240 = 1;
                  }
                }
                else {
                  if (local_215 == 0x61) goto LAB_100cd9c4;
                  if (local_215 == 99) goto LAB_100cda68;
                }
              }
LAB_100cde05:
              if (local_24c == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_100cde3b;
                      local_234 = 0x20;
                    }
                    else {
                      local_234 = 0x2b;
                    }
                  }
                  else {
                    local_234 = 0x2d;
                  }
                  local_238 = 1;
                }
LAB_100cde3b:
                iVar5 = (local_23c - local_224) - local_238;
                if ((local_214 & 0xc) == 0) {
                  write_multi_char(0x20,iVar5);
                }
                write_string(local_238);
                if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                  write_multi_char(0x30,iVar5);
                }
                if ((local_240 == 0) || ((int)local_224 < 1)) {
                  write_string(local_224);
                }
                else {
                  local_264 = local_224;
                  pwVar14 = local_220;
                  do {
                    _WCh = *pwVar14;
                    local_264 = local_264 - 1;
                    pwVar14 = pwVar14 + 1;
                    eVar10 = _wctomb_s(local_26c,(char *)((int)&local_11 + 1),6,_WCh);
                    if ((eVar10 != 0) || (local_26c[0] == 0)) {
                      local_230 = -1;
                      break;
                    }
                    write_string(local_26c[0]);
                  } while (local_264 != 0);
                }
                if ((-1 < local_230) && ((local_214 & 4) != 0)) {
                  write_multi_char(0x20,iVar5);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_100cda0b:
                  iVar5 = local_21c;
                  if (local_21c == -1) {
                    iVar5 = 0x7fffffff;
                  }
                  local_228 = param_4 + 2;
                  local_220 = *(wchar_t **)param_4;
                  if ((local_214 & 0x810) == 0) {
                    pwVar14 = local_220;
                    if (local_220 == (wchar_t *)0x0) {
                      pwVar14 = (wchar_t *)PTR_s__null__10128c6c;
                      local_220 = (wchar_t *)PTR_s__null__10128c6c;
                    }
                    for (; (iVar5 != 0 && (iVar5 = iVar5 + -1, (char)*pwVar14 != '\0'));
                        pwVar14 = (wchar_t *)((int)pwVar14 + 1)) {
                    }
                    local_224 = (int)pwVar14 - (int)local_220;
                  }
                  else {
                    if (local_220 == (wchar_t *)0x0) {
                      local_220 = (wchar_t *)PTR_u__null__10128c70;
                    }
                    local_240 = 1;
                    for (pwVar14 = local_220;
                        (iVar5 != 0 && (iVar5 = iVar5 + -1, *pwVar14 != L'\0'));
                        pwVar14 = pwVar14 + 1) {
                    }
                    local_224 = (int)pwVar14 - (int)local_220 >> 1;
                  }
                  goto LAB_100cde05;
                }
                if (local_215 == 0x75) goto LAB_100cdb86;
                if (local_215 != 0x78) goto LAB_100cde05;
                local_248 = 0x27;
LAB_100cdcb3:
                local_224 = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_233 = (char)local_248 + 'Q';
                  local_234 = 0x30;
                  local_238 = 2;
                }
                goto LAB_100cdb8d;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_100cdc8d:
                local_248 = 7;
                goto LAB_100cdcb3;
              }
              if ((char)local_215 < 'e') goto LAB_100cde05;
              if ((char)local_215 < 'h') goto LAB_100cd9c4;
              if (local_215 == 0x69) goto LAB_100cdb82;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_100cde05;
                local_224 = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_100cdb8d;
              }
              piVar3 = *(int **)param_4;
              local_228 = param_4 + 2;
              bVar15 = FUN_100d7676();
              if (CONCAT31(extraout_var,bVar15) == 0) goto LAB_100cdf36;
              if ((local_214 & 0x20) == 0) {
                *piVar3 = local_230;
              }
              else {
                *(undefined2 *)piVar3 = (undefined2)local_230;
              }
              local_24c = 1;
            }
            if (local_250 != (wchar_t *)0x0) {
              _free(local_250);
              local_250 = (wchar_t *)0x0;
            }
          }
          local_215 = *local_244;
          iVar5 = local_270;
          param_2 = local_244;
          param_4 = local_228;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_100cdf5d;
      }
    }
  }
  pDVar4 = FUN_100ce0fa();
  *pDVar4 = 0x16;
LAB_100cd671:
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_100cdf5d:
  __security_check_cookie(local_8 ^ (uint)local_1fc);
  return;
}


// ==== 100cdf95 FUN_100cdf95

void __cdecl FUN_100cdf95(undefined4 param_1)

{
  DAT_101ad61c = param_1;
  return;
}


// ==== 100cdf9f __invoke_watson

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  int iVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  iVar1 = DAT_101281d0;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_100d71bd();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}


// ==== 100ce09b FUN_100ce09b

void __cdecl
FUN_100ce09b(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_100c8e85(DAT_101ad61c);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100ce0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_100d71bd();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


// ==== 100ce0bf FUN_100ce0bf

int __cdecl FUN_100ce0bf(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10128c78)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x10128c7c);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}


// ==== 100ce0fa FUN_100ce0fa

DWORD * FUN_100ce0fa(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100c902a();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10128de0;
  }
  return pDVar1 + 2;
}


// ==== 100ce10d FUN_100ce10d

DWORD * FUN_100ce10d(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100c902a();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_10128de4;
  }
  return pDVar1 + 3;
}


// ==== 100ce120 FUN_100ce120

void __cdecl FUN_100ce120(DWORD param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  pDVar1 = FUN_100ce10d();
  *pDVar1 = param_1;
  DVar2 = FUN_100ce0bf(param_1);
  pDVar1 = FUN_100ce0fa();
  *pDVar1 = DVar2;
  return;
}


// ==== 100ce13e __controlfp_s

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  DWORD *pDVar2;
  errno_t eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar1);
    }
    else {
      uVar1 = __control87(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = __control87(0,0);
      *_CurrentState = uVar1;
    }
    pDVar2 = FUN_100ce0fa();
    eVar3 = 0x16;
    *pDVar2 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}


// ==== 100ce1a8 __initp_misc_winsig

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_101ad620 = param_1;
  DAT_101ad624 = param_1;
  DAT_101ad628 = param_1;
  DAT_101ad62c = param_1;
  return;
}


// ==== 100ce1c1 siglookup

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2005 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_101284b4 * 0xc + param_1);
  if ((DAT_101284b4 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 100ce1f5 ___get_sigabrt

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_100c8e85(DAT_101ad628);
  return p_Var1;
}


// ==== 100ce202 _raise

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD *pDVar7;
  DWORD local_34;
  DWORD local_30;
  int local_28;
  
  pDVar7 = (DWORD *)0x0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar6 = &DAT_101ad620;
        iVar3 = DAT_101ad620;
        goto LAB_100ce2b7;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_100ce295;
        if (_SigNum != 8) goto LAB_100ce279;
      }
    }
    pDVar7 = FUN_100c902a();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_101ad62c;
      iVar3 = DAT_101ad62c;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_101ad624;
      iVar3 = DAT_101ad624;
    }
    else {
      if (_SigNum != 0x16) {
LAB_100ce279:
        pDVar7 = FUN_100ce0fa();
        *pDVar7 = 0x16;
        FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_100ce295:
      puVar6 = &DAT_101ad628;
      iVar3 = DAT_101ad628;
    }
LAB_100ce2b7:
    bVar1 = true;
    pcVar4 = (code *)FUN_100c8e85(iVar3);
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = pDVar7[0x18];
    pDVar7[0x18] = 0;
    if (_SigNum == 8) {
      local_34 = pDVar7[0x19];
      pDVar7[0x19] = 0x8c;
      goto LAB_100ce31b;
    }
  }
  else {
LAB_100ce31b:
    if (_SigNum == 8) {
      for (local_28 = DAT_101284a8; local_28 < DAT_101284ac + DAT_101284a8; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_100ce355;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_100ce355:
  FUN_100ce376();
  if (_SigNum == 8) {
    (*pcVar4)(8,pDVar7[0x19]);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  pDVar7[0x18] = local_30;
  if (_SigNum == 8) {
    pDVar7[0x19] = local_34;
  }
  return 0;
}


// ==== 100ce376 FUN_100ce376

void FUN_100ce376(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_100cf46a(0);
  }
  return;
}


// ==== 100ce3b2 _strcpy_s

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      pDVar2 = FUN_100ce0fa();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_100ce3d1;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_100ce0fa();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_100ce3d1:
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 100ce420 _strlen

/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_100ce450;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100ce483:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100ce450:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_100ce483;
}


// ==== 100ce4ab __get_lc_time

/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2005 Release */

uint __get_lc_time(void)

{
  LPCWSTR pWVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  void *unaff_ESI;
  localeinfo_struct local_14;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  local_8 = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x42);
  local_c = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x44);
  if (unaff_ESI == (void *)0x0) {
    return 0xffffffff;
  }
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  uVar2 = ___getlocaleinfo(&local_14,1,local_8,0x31,(void *)((int)unaff_ESI + 4));
  uVar3 = ___getlocaleinfo(&local_14,1,local_8,0x32,(void *)((int)unaff_ESI + 8));
  uVar4 = ___getlocaleinfo(&local_14,1,local_8,0x33,(void *)((int)unaff_ESI + 0xc));
  uVar5 = ___getlocaleinfo(&local_14,1,local_8,0x34,(void *)((int)unaff_ESI + 0x10));
  uVar6 = ___getlocaleinfo(&local_14,1,local_8,0x35,(void *)((int)unaff_ESI + 0x14));
  uVar7 = ___getlocaleinfo(&local_14,1,local_8,0x36,(void *)((int)unaff_ESI + 0x18));
  uVar8 = ___getlocaleinfo(&local_14,1,local_8,0x37,unaff_ESI);
  uVar9 = ___getlocaleinfo(&local_14,1,local_8,0x2a,(void *)((int)unaff_ESI + 0x20));
  uVar10 = ___getlocaleinfo(&local_14,1,local_8,0x2b,(void *)((int)unaff_ESI + 0x24));
  uVar11 = ___getlocaleinfo(&local_14,1,local_8,0x2c,(void *)((int)unaff_ESI + 0x28));
  uVar12 = ___getlocaleinfo(&local_14,1,local_8,0x2d,(void *)((int)unaff_ESI + 0x2c));
  uVar13 = ___getlocaleinfo(&local_14,1,local_8,0x2e,(void *)((int)unaff_ESI + 0x30));
  uVar14 = ___getlocaleinfo(&local_14,1,local_8,0x2f,(void *)((int)unaff_ESI + 0x34));
  uVar15 = ___getlocaleinfo(&local_14,1,local_8,0x30,(void *)((int)unaff_ESI + 0x1c));
  uVar16 = ___getlocaleinfo(&local_14,1,local_8,0x44,(void *)((int)unaff_ESI + 0x38));
  uVar17 = ___getlocaleinfo(&local_14,1,local_8,0x45,(void *)((int)unaff_ESI + 0x3c));
  uVar18 = ___getlocaleinfo(&local_14,1,local_8,0x46,(void *)((int)unaff_ESI + 0x40));
  uVar19 = ___getlocaleinfo(&local_14,1,local_8,0x47,(void *)((int)unaff_ESI + 0x44));
  uVar20 = ___getlocaleinfo(&local_14,1,local_8,0x48,(void *)((int)unaff_ESI + 0x48));
  uVar21 = ___getlocaleinfo(&local_14,1,local_8,0x49,(void *)((int)unaff_ESI + 0x4c));
  uVar22 = ___getlocaleinfo(&local_14,1,local_8,0x4a,(void *)((int)unaff_ESI + 0x50));
  uVar23 = ___getlocaleinfo(&local_14,1,local_8,0x4b,(void *)((int)unaff_ESI + 0x54));
  uVar24 = ___getlocaleinfo(&local_14,1,local_8,0x4c,(void *)((int)unaff_ESI + 0x58));
  uVar25 = ___getlocaleinfo(&local_14,1,local_8,0x4d,(void *)((int)unaff_ESI + 0x5c));
  uVar26 = ___getlocaleinfo(&local_14,1,local_8,0x4e,(void *)((int)unaff_ESI + 0x60));
  uVar27 = ___getlocaleinfo(&local_14,1,local_8,0x4f,(void *)((int)unaff_ESI + 100));
  uVar28 = ___getlocaleinfo(&local_14,1,local_8,0x38,(void *)((int)unaff_ESI + 0x68));
  uVar29 = ___getlocaleinfo(&local_14,1,local_8,0x39,(void *)((int)unaff_ESI + 0x6c));
  uVar30 = ___getlocaleinfo(&local_14,1,local_8,0x3a,(void *)((int)unaff_ESI + 0x70));
  uVar31 = ___getlocaleinfo(&local_14,1,local_8,0x3b,(void *)((int)unaff_ESI + 0x74));
  uVar32 = ___getlocaleinfo(&local_14,1,local_8,0x3c,(void *)((int)unaff_ESI + 0x78));
  uVar33 = ___getlocaleinfo(&local_14,1,local_8,0x3d,(void *)((int)unaff_ESI + 0x7c));
  uVar34 = ___getlocaleinfo(&local_14,1,local_8,0x3e,(void *)((int)unaff_ESI + 0x80));
  uVar35 = ___getlocaleinfo(&local_14,1,local_8,0x3f,(void *)((int)unaff_ESI + 0x84));
  uVar36 = ___getlocaleinfo(&local_14,1,local_8,0x40,(void *)((int)unaff_ESI + 0x88));
  uVar37 = ___getlocaleinfo(&local_14,1,local_8,0x41,(void *)((int)unaff_ESI + 0x8c));
  uVar38 = ___getlocaleinfo(&local_14,1,local_8,0x42,(void *)((int)unaff_ESI + 0x90));
  uVar39 = ___getlocaleinfo(&local_14,1,local_8,0x43,(void *)((int)unaff_ESI + 0x94));
  uVar40 = ___getlocaleinfo(&local_14,1,local_8,0x28,(void *)((int)unaff_ESI + 0x98));
  uVar41 = ___getlocaleinfo(&local_14,1,local_8,0x29,(void *)((int)unaff_ESI + 0x9c));
  uVar42 = ___getlocaleinfo(&local_14,1,local_c,0x1f,(void *)((int)unaff_ESI + 0xa0));
  uVar43 = ___getlocaleinfo(&local_14,1,local_c,0x20,(void *)((int)unaff_ESI + 0xa4));
  uVar44 = ___getlocaleinfo(&local_14,1,local_c,0x1003,(void *)((int)unaff_ESI + 0xa8));
  pWVar1 = local_c;
  uVar45 = ___getlocaleinfo(&local_14,0,local_c,0x1009,(void *)((int)unaff_ESI + 0xb0));
  *(LPCWSTR *)((int)unaff_ESI + 0xac) = pWVar1;
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 |
         uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 |
         uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 | uVar42 |
         uVar43 | uVar44 | uVar45;
}


// ==== 100ce8c4 ___free_lc_time

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}


// ==== 100cea54 ___init_time

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  uint uVar2;
  int **ppiVar3;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_10128df8;
  }
  else {
    _Memory = __calloc_crt(1,0xb8);
    if (_Memory == (undefined **)0x0) {
      return 1;
    }
    uVar2 = __get_lc_time();
    if (uVar2 != 0) {
      ___free_lc_time(_Memory);
      _free(_Memory);
      return 1;
    }
    _Memory[0x2d] = (undefined *)0x1;
  }
  ppiVar3 = &_LocInfo[1].lc_category[0].wrefcount;
  ppuVar1 = (undefined **)*ppiVar3;
  if (ppuVar1 != &PTR_DAT_10128df8) {
    InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
  }
  *ppiVar3 = (int *)_Memory;
  return 0;
}


// ==== 100ceac7 ___free_lconv_num

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_10128eb8) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_10128ebc) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_10128ec0) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


// ==== 100ceb07 ___init_numeric

/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  threadlocinfo *ptVar3;
  threadlocinfo *_Address;
  uint uVar4;
  char *pcVar5;
  LONG LVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  threadlocinfo *ptVar10;
  LPCWSTR _LocaleName;
  localeinfo_struct local_1c;
  uint *local_14;
  uint local_10;
  wchar_t *local_c;
  wchar_t *local_8;
  
  ptVar3 = _LocInfo;
  local_1c.locinfo = _LocInfo;
  local_1c.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].wrefcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].refcount == (int *)0x0)) {
    local_8 = (wchar_t *)0x0;
    local_c = (wchar_t *)0x0;
    _LocInfo = (threadlocinfo *)&PTR_DAT_10128eb8;
LAB_100cec71:
    if (ptVar3->locale_name[5] != (wchar_t *)0x0) {
      InterlockedDecrement((LONG *)ptVar3->locale_name[5]);
    }
    if ((ptVar3->locale_name[4] != (wchar_t *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)ptVar3->locale_name[4]), LVar6 == 0)) {
      _free(ptVar3->locale_name[4]);
      _free((void *)ptVar3[1].lc_codepage);
    }
    ptVar3->locale_name[5] = local_8;
    ptVar3->locale_name[4] = local_c;
    ptVar3[1].lc_codepage = (uint)_LocInfo;
    iVar7 = 0;
  }
  else {
    _Address = __calloc_crt(1,0x30);
    if (_Address != (threadlocinfo *)0x0) {
      piVar8 = (int *)_LocInfo[1].lc_codepage;
      ptVar10 = _Address;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar10->refcount = *piVar8;
        piVar8 = piVar8 + 1;
        ptVar10 = (threadlocinfo *)&ptVar10->lc_codepage;
      }
      local_c = __malloc_crt(4);
      if (local_c != (wchar_t *)0x0) {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].wrefcount == (int *)0x0) {
          _Address->refcount = (int)PTR_DAT_10128eb8;
          _Address->lc_codepage = (uint)PTR_DAT_10128ebc;
          local_8 = (wchar_t *)0x0;
          _Address->lc_collate_cp = (uint)PTR_DAT_10128ec0;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar7 = 1;
LAB_100ceb97:
            _free(_Address);
            _free(local_c);
            return iVar7;
          }
          local_8[0] = L'\0';
          local_8[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*(ushort *)((int)&_LocInfo->lc_category[2].wrefcount + 2);
          local_10 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xe,_Address);
          uVar4 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xf,&_Address->lc_codepage);
          local_10 = local_10 | uVar4;
          local_14 = &_Address->lc_collate_cp;
          iVar7 = ___getlocaleinfo(&local_1c,1,_LocaleName,0x10,local_14);
          if (iVar7 != 0 || local_10 != 0) {
            ___free_lconv_num(&_Address->refcount);
            iVar7 = -1;
            goto LAB_100ceb97;
          }
          pcVar5 = (char *)*local_14;
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar5;
              if (cVar2 != ';') goto LAB_100cec21;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_100cec21:
              pcVar5 = pcVar5 + 1;
            }
          }
        }
        local_c[0] = L'\x01';
        local_c[1] = L'\0';
        _LocInfo = _Address;
        if (local_8 != (wchar_t *)0x0) {
          local_8[0] = L'\x01';
          local_8[1] = L'\0';
        }
        goto LAB_100cec71;
      }
      _free(_Address);
    }
    iVar7 = 1;
  }
  return iVar7;
}


// ==== 100ceccf ___free_lconv_mon

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_10128ec4) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_10128ec8) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_10128ecc) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_10128ed0) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_10128ed4) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_10128ed8) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_10128edc) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}


// ==== 100ced58 ___init_monetary

/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  uint *puVar18;
  LONG LVar19;
  int iVar20;
  undefined **_Memory;
  LPCWSTR _LocaleName;
  char *pcVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  localeinfo_struct local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].refcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].wrefcount == (int *)0x0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (wchar_t *)0x0;
    _Memory = &PTR_DAT_10128eb8;
LAB_100cefbf:
    if ((LONG *)_LocInfo[1].refcount != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].refcount);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar19 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar19 == 0)) {
      _free((void *)_LocInfo[1].lc_codepage);
      _free(_LocInfo->locale_name[4]);
    }
    _LocInfo[1].refcount = (int)local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Memory;
    iVar20 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0x30);
    if (_Memory != (undefined **)0x0) {
      local_c = __malloc_crt(4);
      if (local_c == (wchar_t *)0x0) {
        _free(_Memory);
      }
      else {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].refcount == (int *)0x0) {
          ppuVar22 = &PTR_DAT_10128eb8;
          ppuVar23 = _Memory;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *ppuVar23 = *ppuVar22;
            ppuVar22 = ppuVar22 + 1;
            ppuVar23 = ppuVar23 + 1;
          }
LAB_100cef8a:
          puVar18 = &_LocInfo[1].lc_codepage;
          *_Memory = *(undefined **)*puVar18;
          _Memory[1] = *(undefined **)(*puVar18 + 4);
          _Memory[2] = *(undefined **)(*puVar18 + 8);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_100cefbf;
        }
        local_8 = __malloc_crt(4);
        if (local_8 == (undefined4 *)0x0) {
          _free(_Memory);
          _free(local_c);
        }
        else {
          *local_8 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].refcount;
          iVar20 = ___getlocaleinfo(&local_14,1,_LocaleName,0x15,_Memory + 3);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x14,_Memory + 4);
          iVar4 = ___getlocaleinfo(&local_14,1,_LocaleName,0x16,_Memory + 5);
          iVar5 = ___getlocaleinfo(&local_14,1,_LocaleName,0x17,_Memory + 6);
          iVar6 = ___getlocaleinfo(&local_14,1,_LocaleName,0x18,_Memory + 7);
          iVar7 = ___getlocaleinfo(&local_14,1,_LocaleName,0x50,_Memory + 8);
          iVar8 = ___getlocaleinfo(&local_14,1,_LocaleName,0x51,_Memory + 9);
          iVar9 = ___getlocaleinfo(&local_14,0,_LocaleName,0x1a,_Memory + 10);
          iVar10 = ___getlocaleinfo(&local_14,0,_LocaleName,0x19,(void *)((int)_Memory + 0x29));
          iVar11 = ___getlocaleinfo(&local_14,0,_LocaleName,0x54,(void *)((int)_Memory + 0x2a));
          iVar12 = ___getlocaleinfo(&local_14,0,_LocaleName,0x55,(void *)((int)_Memory + 0x2b));
          iVar13 = ___getlocaleinfo(&local_14,0,_LocaleName,0x56,_Memory + 0xb);
          iVar14 = ___getlocaleinfo(&local_14,0,_LocaleName,0x57,(void *)((int)_Memory + 0x2d));
          iVar15 = ___getlocaleinfo(&local_14,0,_LocaleName,0x52,(void *)((int)_Memory + 0x2e));
          iVar16 = ___getlocaleinfo(&local_14,0,_LocaleName,0x53,(void *)((int)_Memory + 0x2f));
          if (iVar16 == 0 &&
              (((((((((((((iVar20 == 0 && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) && iVar6 == 0)
                      && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0)
                 && iVar12 == 0) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0)) {
            pcVar17 = _Memory[7];
            while (*pcVar17 != '\0') {
              cVar2 = *pcVar17;
              if ((cVar2 < '0') || ('9' < cVar2)) {
                pcVar21 = pcVar17;
                if (cVar2 != ';') goto LAB_100cef5f;
                do {
                  pcVar1 = pcVar21 + 1;
                  *pcVar21 = *pcVar1;
                  pcVar21 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar17 = cVar2 + -0x30;
LAB_100cef5f:
                pcVar17 = pcVar17 + 1;
              }
            }
            goto LAB_100cef8a;
          }
          ___free_lconv_mon((int)_Memory);
          _free(_Memory);
          _free(local_c);
          _free(local_8);
        }
      }
    }
    iVar20 = 1;
  }
  return iVar20;
}


// ==== 100cf01c ___init_ctype

/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  BYTE *pBVar1;
  byte bVar2;
  LONG *lpAddend;
  undefined2 *_Dst;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  LONG LVar6;
  BYTE *pBVar7;
  uint uVar8;
  localeinfo_struct local_4c;
  wchar_t *local_44;
  LPWORD local_40;
  undefined2 *local_3c;
  int *local_38;
  wchar_t *local_34;
  undefined4 *local_30;
  void *local_2c;
  undefined2 *local_28;
  LPCSTR local_24;
  BYTE *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  local_28 = (undefined2 *)0x0;
  local_20 = (BYTE *)0x0;
  local_2c = (void *)0x0;
  local_24 = (LPCSTR)0x0;
  local_4c.locinfo = _LocInfo;
  local_4c.mbcinfo = (pthreadmbcinfo)0x0;
  if (_LocInfo->lc_category[0].wlocale == (wchar_t *)0x0) {
    lpAddend = (LONG *)_LocInfo[1].lc_collate_cp;
    if (lpAddend != (LONG *)0x0) {
      InterlockedDecrement(lpAddend);
    }
    _LocInfo[1].lc_collate_cp = 0;
    _LocInfo[1].lc_time_cp = 0;
    _LocInfo[1].lc_category[0].locale = " ";
    _LocInfo[1].lc_category[0].wlocale = (wchar_t *)&DAT_1010a6f0;
    _LocInfo[1].lc_category[0].refcount = (int *)&DAT_1010a870;
    _LocInfo->locale_name[3] = (wchar_t *)0x1;
    goto LAB_100cf3a2;
  }
  if ((_LocInfo->lc_codepage == 0) &&
     (iVar3 = ___getlocaleinfo(&local_4c,0,
                               (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].locale,0x1004,
                               &_LocInfo->lc_codepage), iVar3 != 0)) {
LAB_100cf335:
    _free(local_30);
    _free(local_28);
    _free(local_20);
    _free(local_2c);
  }
  else {
    local_30 = __malloc_crt(4);
    local_28 = __calloc_crt(0x180,2);
    local_20 = __calloc_crt(0x180,1);
    local_2c = __calloc_crt(0x180,1);
    local_24 = __calloc_crt(0x101,1);
    if ((local_30 == (undefined4 *)0x0) ||
       ((((local_28 == (undefined2 *)0x0 || (local_24 == (LPCSTR)0x0)) || (local_20 == (BYTE *)0x0))
        || (local_2c == (void *)0x0)))) goto LAB_100cf335;
    *local_30 = 0;
    iVar3 = 0;
    do {
      local_24[iVar3] = (CHAR)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    BVar4 = GetCPInfo(_LocInfo->lc_codepage,&local_1c);
    if ((BVar4 == 0) || (5 < local_1c.MaxCharSize)) goto LAB_100cf335;
    local_34 = (wchar_t *)(local_1c.MaxCharSize & 0xffff);
    if (((wchar_t *)0x1 < local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar5 = local_1c.LeadByte + 1;
      do {
        bVar2 = *pBVar5;
        if (bVar2 == 0) break;
        for (uVar8 = (uint)pBVar5[-1]; (int)uVar8 <= (int)(uint)bVar2; uVar8 = uVar8 + 1) {
          local_24[uVar8] = ' ';
          bVar2 = *pBVar5;
        }
        pBVar7 = pBVar5 + 1;
        pBVar5 = pBVar5 + 2;
      } while (*pBVar7 != 0);
    }
    local_40 = local_28 + 0x80;
    BVar4 = ___crtGetStringTypeA((_locale_t)0x0,1,local_24,0x100,local_40,_LocInfo->lc_codepage,0);
    if (((BVar4 == 0) ||
        (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x100,
                                    local_24 + 1,0xff,(LPSTR)(local_20 + 0x81),0xff,
                                    _LocInfo->lc_codepage,0), iVar3 == 0)) ||
       (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x200,
                                   local_24 + 1,0xff,(LPSTR)((int)local_2c + 0x81),0xff,
                                   _LocInfo->lc_codepage,0), pBVar5 = local_20, _Dst = local_28,
       iVar3 == 0)) goto LAB_100cf335;
    local_3c = local_28 + 0x7f;
    *local_3c = 0;
    local_44 = (wchar_t *)(local_20 + 0x80);
    local_20[0x7f] = 0;
    *(undefined1 *)((int)local_2c + 0x7f) = 0;
    *(byte *)local_44 = 0;
    local_38 = (int *)((int)local_2c + 0x80);
    *(undefined1 *)local_38 = 0;
    if ((1 < (int)local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar7 = local_1c.LeadByte + 1;
      do {
        local_20 = pBVar7;
        if (*pBVar7 == 0) break;
        uVar8 = (uint)pBVar7[-1];
        if (uVar8 <= *pBVar7) {
          local_28 = _Dst + uVar8 + 0x80;
          do {
            *local_28 = 0x8000;
            uVar8 = uVar8 + 1;
            local_28 = local_28 + 1;
          } while ((int)uVar8 <= (int)(uint)*pBVar7);
        }
        local_20 = pBVar7 + 2;
        pBVar1 = pBVar7 + 1;
        pBVar7 = local_20;
      } while (*pBVar1 != 0);
    }
    _memcpy(_Dst,_Dst + 0x100,0xfe);
    _memcpy(pBVar5,pBVar5 + 0x100,0x7f);
    _memcpy(local_2c,(void *)((int)local_2c + 0x100),0x7f);
    if (((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp), LVar6 == 0)) {
      _free((void *)(_LocInfo[1].lc_time_cp - 0xfe));
      _free(_LocInfo[1].lc_category[0].wlocale + -0x40);
      _free(_LocInfo[1].lc_category[0].refcount + -0x20);
      _free((void *)_LocInfo[1].lc_collate_cp);
    }
    *local_30 = 1;
    _LocInfo[1].lc_collate_cp = (uint)local_30;
    _LocInfo[1].lc_category[0].locale = (char *)local_40;
    _LocInfo[1].lc_time_cp = (uint)local_3c;
    _LocInfo[1].lc_category[0].wlocale = local_44;
    _LocInfo[1].lc_category[0].refcount = local_38;
    _LocInfo->locale_name[3] = local_34;
  }
  _free(local_24);
LAB_100cf3a2:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 100cf3b1 __freea

/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2005 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}


// ==== 100cf3cc __mtinitlocks

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_101ad638;
  do {
    if ((&DAT_10128ef4)[iVar2 * 2] == 1) {
      (&DAT_10128ef0)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10128ef0)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10128ef0)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


// ==== 100cf415 __mtdeletelocks

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_10128ef0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10129010);
  puVar1 = &DAT_10128ef0;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x10129010);
  return;
}


// ==== 100cf46a FUN_100cf46a

void __cdecl FUN_100cf46a(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10128ef0)[param_1 * 2]);
  return;
}


// ==== 100cf47f __mtinitlocknum

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *piVar1;
  void *_Memory;
  DWORD *pDVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_101ad2b4 == 0) {
    __FF_MSGBANNER();
    FUN_100c9a17(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10128ef0 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      pDVar2 = FUN_100ce0fa();
      *pDVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          pDVar2 = FUN_100ce0fa();
          *pDVar2 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_100cf539();
      iVar3 = local_20;
    }
  }
  return iVar3;
}


// ==== 100cf539 FUN_100cf539

void FUN_100cf539(void)

{
  FUN_100cf46a(10);
  return;
}


// ==== 100cf542 __lock

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_10128ef0)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10128ef0)[_File * 2]);
  return;
}


// ==== 100cf573 _strcat_s

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        pDVar2 = FUN_100ce0fa();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_100cf592;
      }
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_100ce0fa();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_100cf592:
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 100cf5f0 _strcspn

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}


// ==== 100cf636 _strncpy_s

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_100cf65a:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar4 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          pDVar2 = FUN_100ce0fa();
          eVar5 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_100cf66b;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_100cf65a;
  pDVar2 = FUN_100ce0fa();
  eVar5 = 0x16;
  *pDVar2 = 0x16;
LAB_100cf66b:
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}


// ==== 100cf6e9 _TranslateName

/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2005 Release */

bool __cdecl _TranslateName(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}


// ==== 100cf749 _ProcessCodePage

/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2005 Release */

void __fastcall _ProcessCodePage(CHAR *param_1)

{
  int iVar1;
  int unaff_EDI;
  LCTYPE LCType;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (CHAR *)0x0) || (*param_1 == '\0')) {
LAB_100cf791:
    LCType = 0x1004;
LAB_100cf79c:
    iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),LCType,local_10,8);
    if (iVar1 == 0) goto LAB_100cf7b3;
    param_1 = local_10;
  }
  else {
    iVar1 = _strcmp(param_1,"ACP");
    if (iVar1 == 0) goto LAB_100cf791;
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 == 0) {
      LCType = 0xb;
      goto LAB_100cf79c;
    }
  }
  _atol(param_1);
LAB_100cf7b3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100cf7c0 _TestDefaultCountry

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_1010b268 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}


// ==== 100cf7de _LcidFromHexString

/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2005 Release */

int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *param_2, cVar1 != '\0') {
    param_2 = param_2 + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    iVar2 = iVar2 * 0x10 + -0x30 + (int)cVar1;
  }
  return iVar2;
}


// ==== 100cf810 _GetPrimaryLen

/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2005 Release */

int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// ==== 100cf82b _CountryEnumProc@4

/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _CountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
  }
  else {
    iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
    if ((iVar3 == 0) && (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 4;
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
      (p_Var2->_setloc_data)._cachecp = Locale;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100cf8c1 _TestDefaultLanguage

/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2005 Release */

void __thiscall _TestDefaultLanguage(void *this,uint param_1,int param_2)

{
  char *_Str;
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  iVar1 = GetLocaleInfoA(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (((iVar1 != 0) && (uVar2 = _LcidFromHexString(extraout_ECX,local_80), param_1 != uVar2)) &&
     (param_2 != 0)) {
    _Str = *(char **)this;
    _GetPrimaryLen(extraout_ECX_00,_Str);
    _strlen(_Str);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100cf933 _LangCountryEnumProc@4

/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _LangCountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  size_t sVar4;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_100cf984:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_100cfaf2;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_100cf984;
    iVar3 = __stricmp((char *)this->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_100cfa34:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) || (iVar3 = __strnicmp((char *)this->pchLanguage,local_80,sVar4), iVar3 != 0)
         ) {
        if ((((p_Var2->_setloc_data).iLocState & 1U) == 0) &&
           (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
          (p_Var2->_setloc_data).iLocState = extraout_EDX | 1;
          goto LAB_100cfa34;
        }
      }
      else {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        sVar4 = _strlen((char *)this->pchLanguage);
        if (sVar4 == (p_Var2->_setloc_data).iPrimaryLen) {
          (p_Var2->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_100cfaf2;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_100cf984;
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)this->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen))
      {
        iVar3 = 1;
        goto LAB_100cfaca;
      }
      goto LAB_100cfad8;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_100cfaf2;
    iVar3 = 0;
LAB_100cfaca:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_100cfaf2;
LAB_100cfad8:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_100cfaf2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100cfb03 _LanguageEnumProc@4

/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _LanguageEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_100cfbb2;
  }
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      iVar3 = 1;
      goto LAB_100cfb8f;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_100cfbb2;
    iVar3 = 0;
LAB_100cfb8f:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_100cfbb2;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_100cfbb2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100cfbc2 _GetLcidFromLangCountry

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2005 Release */

void _GetLcidFromLangCountry(void)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar2 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar2 == 3);
  sVar2 = _strlen((char *)unaff_ESI[1]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (uint)(sVar2 == 3);
  if (unaff_ESI[4] == 0) {
    iVar3 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar3 = 2;
  }
  unaff_ESI[3] = iVar3;
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  uVar1 = unaff_ESI[2];
  if ((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) || ((uVar1 & 7) == 0)) {
    unaff_ESI[2] = 0;
  }
  return;
}


// ==== 100cfc27 _GetLcidFromLanguage

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2005 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar1 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    iVar2 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar2 = 2;
  }
  unaff_ESI[3] = iVar2;
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((*(byte *)(unaff_ESI + 2) & 4) == 0) {
    unaff_ESI[2] = 0;
  }
  return;
}


// ==== 100cfc63 ___get_qualified_locale

/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  int *piVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  _ptiddata p_Var5;
  undefined3 extraout_var;
  size_t sVar6;
  LCID LVar7;
  uint _Value;
  BOOL BVar8;
  errno_t eVar9;
  int iVar10;
  _setloc_struct *p_Var11;
  
  p_Var5 = __getptd();
  p_Var11 = &p_Var5->_setloc_data;
  if (_LpInStr == (LPLC_STRINGS)0x0) {
    piVar1 = &(p_Var5->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x104;
LAB_100cfd3b:
    LVar7 = GetUserDefaultLCID();
    (p_Var5->_setloc_data)._cachecp = LVar7;
    *(LCID *)(p_Var5->_setloc_data)._cachein = LVar7;
  }
  else {
    pwVar3 = _LpInStr->szLanguage + 0x20;
    ppwVar2 = &(p_Var5->_setloc_data).pchCountry;
    p_Var11->pchLanguage = _LpInStr->szLanguage;
    *ppwVar2 = pwVar3;
    if ((pwVar3 != (wchar_t *)0x0) && ((char)*pwVar3 != '\0')) {
      _TranslateName(0x1010b1b0,0x16,ppwVar2);
    }
    (p_Var5->_setloc_data).iLocState = 0;
    if ((p_Var11->pchLanguage == (wchar_t *)0x0) || ((char)*p_Var11->pchLanguage == '\0')) {
      pwVar3 = *ppwVar2;
      if ((pwVar3 == (wchar_t *)0x0) || ((char)*pwVar3 == '\0')) {
        (p_Var5->_setloc_data).iLocState = 0x104;
        goto LAB_100cfd3b;
      }
      sVar6 = _strlen((char *)pwVar3);
      (p_Var5->_setloc_data).bAbbrevCountry = (uint)(sVar6 == 3);
      EnumSystemLocalesA(_CountryEnumProc_4,1);
      if (((p_Var5->_setloc_data).iLocState & 4) == 0) {
        (p_Var5->_setloc_data).iLocState = 0;
      }
    }
    else {
      if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
        _GetLcidFromLanguage();
      }
      else {
        _GetLcidFromLangCountry();
      }
      if ((p_Var5->_setloc_data).iLocState != 0) goto LAB_100cfd50;
      bVar4 = _TranslateName(0x1010afa8,0x40,&p_Var11->pchLanguage);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
    }
  }
  if ((p_Var5->_setloc_data).iLocState == 0) {
    return 0;
  }
LAB_100cfd50:
  _Value = _ProcessCodePage((CHAR *)(-(uint)(_LpInStr != (LPLC_STRINGS)0x0) &
                                    (uint)_LpInStr->szCountry));
  if ((((_Value == 0) || (_Value == 65000)) || (_Value == 0xfde9)) ||
     ((BVar8 = IsValidCodePage(_Value & 0xffff), BVar8 == 0 ||
      (BVar8 = IsValidLocale((p_Var5->_setloc_data)._cachecp,1), BVar8 == 0)))) {
    return 0;
  }
  if (_LpCodePage != (UINT *)0x0) {
    *(short *)_LpCodePage = (short)(p_Var5->_setloc_data)._cachecp;
    *(wchar_t *)((int)_LpCodePage + 2) = (p_Var5->_setloc_data)._cachein[0];
    *(short *)(_LpCodePage + 1) = (short)_Value;
  }
  if (_LpOutStr != (LPLC_STRINGS)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar9 = _strcpy_s((char *)_LpOutStr,0x40,"Norwegian-Nynorsk");
      if (eVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    else {
      iVar10 = GetLocaleInfoA((p_Var5->_setloc_data)._cachecp,0x1001,(LPSTR)_LpOutStr,0x40);
      if (iVar10 == 0) {
        return 0;
      }
    }
    iVar10 = GetLocaleInfoA(*(LCID *)(p_Var5->_setloc_data)._cachein,0x1002,
                            (LPSTR)(_LpOutStr->szLanguage + 0x20),0x40);
    if (iVar10 == 0) {
      return 0;
    }
    __itoa_s(_Value,(char *)_LpOutStr->szCountry,0x10,10);
  }
  return 1;
}


// ==== 100cfe46 _memcmp

/* Library Function - Single Match
    _memcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (_Size == 0) {
    return 0;
  }
  if (_Size == 1) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
LAB_100d139d:
    if (uVar2 == uVar3) {
      return 0;
    }
    return (uint)(0 < (int)(uVar2 - uVar3)) * 2 + -1;
  }
  if (_Size == 2) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    goto LAB_100d139d;
  }
  if (_Size == 3) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    goto LAB_100d139d;
  }
  if (_Size == 4) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 3);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 3);
    goto LAB_100d139d;
  }
  for (; 0x1f < _Size; _Size = _Size - 0x20) {
    if (*(int *)_Buf1 == *(int *)_Buf2) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)_Buf1;
      uVar2 = (uint)*(byte *)_Buf2;
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 1);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 1);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 2);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 2);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 3) != (uint)*(byte *)((int)_Buf2 + 3)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 3) - (uint)*(byte *)((int)_Buf2 + 3)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 4) == *(int *)((int)_Buf2 + 4)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 4);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 4);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 5);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 5);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 6);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 6);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 7) != (uint)*(byte *)((int)_Buf2 + 7)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 7) - (uint)*(byte *)((int)_Buf2 + 7)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 8) == *(int *)((int)_Buf2 + 8)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 8);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 8);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 9);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 9);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 10);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xb) != (uint)*(byte *)((int)_Buf2 + 0xb)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xb) -
                                (uint)*(byte *)((int)_Buf2 + 0xb))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0xc) == *(int *)((int)_Buf2 + 0xc)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xc);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xc);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xd);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xd);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xe);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xe);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xf) != (uint)*(byte *)((int)_Buf2 + 0xf)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xf) -
                                (uint)*(byte *)((int)_Buf2 + 0xf))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x10) == *(int *)((int)_Buf2 + 0x10)) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x10);
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x11);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x11);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x12);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x12);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x13) != (uint)*(byte *)((int)_Buf2 + 0x13)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x13) -
                                (uint)*(byte *)((int)_Buf2 + 0x13))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x14) == *(int *)((int)_Buf2 + 0x14)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x14);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x14);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x15);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x15);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x16);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x16);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x17) != (uint)*(byte *)((int)_Buf2 + 0x17)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x17) -
                                (uint)*(byte *)((int)_Buf2 + 0x17))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x18) == *(int *)((int)_Buf2 + 0x18)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x18);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x18);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x19);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x19);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1a);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1a);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1b) != (uint)*(byte *)((int)_Buf2 + 0x1b)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1b) -
                                (uint)*(byte *)((int)_Buf2 + 0x1b))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x1c) == *(int *)((int)_Buf2 + 0x1c)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1c);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1c);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1d);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1d);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1e);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1e);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1f) != (uint)*(byte *)((int)_Buf2 + 0x1f)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1f) -
                                (uint)*(byte *)((int)_Buf2 + 0x1f))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    _Buf1 = (void *)((int)_Buf1 + 0x20);
    _Buf2 = (void *)((int)_Buf2 + 0x20);
  }
  switch(_Size) {
  default:
    goto switchD_100d030b_caseD_0;
  case 1:
    goto switchD_100d030b_caseD_1;
  case 2:
    goto switchD_100d030b_caseD_2;
  case 3:
    goto switchD_100d030b_caseD_3;
  case 4:
    goto switchD_100d030b_caseD_4;
  case 5:
    goto switchD_100d030b_caseD_5;
  case 6:
    goto switchD_100d030b_caseD_6;
  case 7:
    goto switchD_100d030b_caseD_7;
  case 8:
    goto switchD_100d030b_caseD_8;
  case 9:
    goto switchD_100d030b_caseD_9;
  case 10:
    goto switchD_100d030b_caseD_a;
  case 0xb:
    goto switchD_100d030b_caseD_b;
  case 0xc:
    goto switchD_100d030b_caseD_c;
  case 0xd:
    goto switchD_100d030b_caseD_d;
  case 0xe:
    goto switchD_100d030b_caseD_e;
  case 0xf:
    goto switchD_100d030b_caseD_f;
  case 0x10:
    goto switchD_100d030b_caseD_10;
  case 0x11:
    goto switchD_100d030b_caseD_11;
  case 0x12:
    goto switchD_100d030b_caseD_12;
  case 0x13:
    goto switchD_100d030b_caseD_13;
  case 0x14:
    goto switchD_100d030b_caseD_14;
  case 0x15:
    goto switchD_100d030b_caseD_15;
  case 0x16:
    goto switchD_100d030b_caseD_16;
  case 0x17:
    goto switchD_100d030b_caseD_17;
  case 0x18:
    goto switchD_100d030b_caseD_18;
  case 0x1a:
    goto switchD_100d030b_caseD_1a;
  case 0x1b:
    goto switchD_100d030b_caseD_1b;
  case 0x1c:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1c)) == *(uint *)((int)_Buf2 + (_Size - 0x1c))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1c)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x19))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x19)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_18:
    if (*(uint *)((int)_Buf1 + (_Size - 0x18)) == *(uint *)((int)_Buf2 + (_Size - 0x18))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x18)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x15))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x15)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_14:
    if (*(uint *)((int)_Buf1 + (_Size - 0x14)) == *(uint *)((int)_Buf2 + (_Size - 0x14))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x14)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x11))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x11)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_10:
    if (*(uint *)((int)_Buf1 + (_Size - 0x10)) == *(uint *)((int)_Buf2 + (_Size - 0x10))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x10)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xd))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xd)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_c:
    if (*(int *)((int)_Buf1 + (_Size - 0xc)) == *(int *)((int)_Buf2 + (_Size - 0xc))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 9)) != (uint)*(byte *)((int)_Buf2 + (_Size - 9))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 9)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 9)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_8:
    if (*(uint *)((int)_Buf1 + (_Size - 8)) == *(uint *)((int)_Buf2 + (_Size - 8))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 8)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 5)) != (uint)*(byte *)((int)_Buf2 + (_Size - 5))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 5)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 5)))) * 2 + -1;
      }
    }
    if (iVar1 == 0) {
switchD_100d030b_caseD_4:
      if (*(uint *)((int)_Buf1 + (_Size - 4)) == *(uint *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = 0;
      }
      else {
        uVar3 = *(uint *)((int)_Buf1 + (_Size - 4)) & 0xff;
        uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
        if ((uVar3 == uVar2) ||
           (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
          uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
          uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
          if ((uVar3 == uVar2) ||
             (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
            uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
            uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
            if ((uVar3 == uVar2) ||
               (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
              iVar1 = 0;
              if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) !=
                  (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
                iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                                        (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
              }
            }
          }
        }
      }
      if (iVar1 == 0) {
switchD_100d030b_caseD_0:
        iVar1 = 0;
      }
    }
    return iVar1;
  case 0x1d:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1d)) == *(uint *)((int)_Buf2 + (_Size - 0x1d))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1d)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  case 0x19:
    if (*(uint *)((int)_Buf1 + (_Size - 0x19)) == *(uint *)((int)_Buf2 + (_Size - 0x19))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x19)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x16))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x16)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_15:
    if (*(uint *)((int)_Buf1 + (_Size - 0x15)) == *(uint *)((int)_Buf2 + (_Size - 0x15))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x15)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x12))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x12)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_11:
    if (*(uint *)((int)_Buf1 + (_Size - 0x11)) == *(uint *)((int)_Buf2 + (_Size - 0x11))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x11)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xe))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xe)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_d:
    if (*(uint *)((int)_Buf1 + (_Size - 0xd)) == *(uint *)((int)_Buf2 + (_Size - 0xd))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xd)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 10)) != (uint)*(byte *)((int)_Buf2 + (_Size - 10)))
      {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_9:
    if (*(int *)((int)_Buf1 + (_Size - 9)) == *(int *)((int)_Buf2 + (_Size - 9))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 6)) != (uint)*(byte *)((int)_Buf2 + (_Size - 6))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 6)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 6)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_5:
    if (*(uint *)((int)_Buf1 + (_Size - 5)) == *(uint *)((int)_Buf2 + (_Size - 5))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 5)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 2)) != (uint)*(byte *)((int)_Buf2 + (_Size - 2))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 2)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 2)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_1:
    if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) == (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
      return 0;
    }
    return (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                           (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
  case 0x1e:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1e)) == *(uint *)((int)_Buf2 + (_Size - 0x1e))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1e)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_1a:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1a)) == *(uint *)((int)_Buf2 + (_Size - 0x1a))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1a)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x17))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x17)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_16:
    if (*(uint *)((int)_Buf1 + (_Size - 0x16)) == *(uint *)((int)_Buf2 + (_Size - 0x16))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x16)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x13))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x13)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_12:
    if (*(uint *)((int)_Buf1 + (_Size - 0x12)) == *(uint *)((int)_Buf2 + (_Size - 0x12))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x12)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xf))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xf)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_e:
    if (*(uint *)((int)_Buf1 + (_Size - 0xe)) == *(uint *)((int)_Buf2 + (_Size - 0xe))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xe)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xb))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xb)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_a:
    if (*(int *)((int)_Buf1 + (_Size - 10)) == *(int *)((int)_Buf2 + (_Size - 10))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 7)) != (uint)*(byte *)((int)_Buf2 + (_Size - 7))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 7)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 7)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_6:
    if (*(uint *)((int)_Buf1 + (_Size - 6)) == *(uint *)((int)_Buf2 + (_Size - 6))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 6)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 3)) != (uint)*(byte *)((int)_Buf2 + (_Size - 3))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 3)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 3)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_2:
    if (*(short *)((int)_Buf1 + (_Size - 2)) != *(short *)((int)_Buf2 + (_Size - 2))) {
LAB_100d0ef1:
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      goto switchD_100d030b_caseD_1;
    }
    goto switchD_100d030b_caseD_0;
  case 0x1f:
    if (*(int *)((int)_Buf1 + (_Size - 0x1f)) == *(int *)((int)_Buf2 + (_Size - 0x1f))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1f));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1f));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1e));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_1b:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1b)) == *(uint *)((int)_Buf2 + (_Size - 0x1b))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1b)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x18))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x18)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_17:
    if (*(uint *)((int)_Buf1 + (_Size - 0x17)) == *(uint *)((int)_Buf2 + (_Size - 0x17))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x17)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x14))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x14)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_13:
    if (*(uint *)((int)_Buf1 + (_Size - 0x13)) == *(uint *)((int)_Buf2 + (_Size - 0x13))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x13)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x10))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_f:
    if (*(int *)((int)_Buf1 + (_Size - 0xf)) == *(int *)((int)_Buf2 + (_Size - 0xf))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xc))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xc)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_b:
    if (*(uint *)((int)_Buf1 + (_Size - 0xb)) == *(uint *)((int)_Buf2 + (_Size - 0xb))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xb)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 8)) != (uint)*(byte *)((int)_Buf2 + (_Size - 8))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 8)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 8)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_7:
    if (*(uint *)((int)_Buf1 + (_Size - 7)) == *(uint *)((int)_Buf2 + (_Size - 7))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 7)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 4)) != (uint)*(byte *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 4)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 4)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_100d030b_caseD_3:
    uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
    uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
    if ((uVar3 != uVar2) &&
       (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    goto LAB_100d0ef1;
  }
}


// ==== 100d14c6 __crtGetStringTypeA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_101ad788 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_101ad788 = 2;
      }
      goto LAB_100d151f;
    }
    DAT_101ad788 = 1;
  }
  else {
LAB_100d151f:
    if ((DAT_101ad788 == 2) || (DAT_101ad788 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if ((puVar5 != (ushort *)0xffffffff) &&
         (((puVar5 == param_5 ||
           (_Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,
                                           (uint *)&param_3,(LPSTR)0x0,0), param_2 = (ulong)_Memory,
           _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_100d166c;
    }
    if (DAT_101ad788 != 1) goto LAB_100d166c;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_100d166c;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_100d15af:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_100d15af;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_100d166c:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


// ==== 100d167e ___crtGetStringTypeA

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 100d16be _strncmp

/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (_MaxCount != 0) {
    if ((3 < _MaxCount) && (pbVar1 = (byte *)_Str1, pbVar3 = (byte *)_Str2, _MaxCount != 4)) {
      do {
        _Str1 = (char *)(pbVar1 + 4);
        _Str2 = (char *)(pbVar3 + 4);
        if ((*pbVar1 == 0) || (*pbVar1 != *pbVar3)) {
          uVar2 = (uint)*pbVar1;
          uVar4 = (uint)*pbVar3;
          goto LAB_100d1778;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_100d1778;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_100d1778;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_100d1778;
        }
        local_8 = local_8 + 4;
        pbVar1 = (byte *)_Str1;
        pbVar3 = (byte *)_Str2;
      } while (local_8 < _MaxCount - 4);
    }
    for (; local_8 < _MaxCount; local_8 = local_8 + 1) {
      if ((*_Str1 == 0) || (*_Str1 != *_Str2)) {
        uVar2 = (uint)(byte)*_Str1;
        uVar4 = (uint)(byte)*_Str2;
LAB_100d1778:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}


// ==== 100d1780 _strpbrk

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}


// ==== 100d17c0 ___sbh_heap_init

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_101aea28 = HeapAlloc(DAT_101ad2b4,0,0x140);
  if (DAT_101aea28 == (LPVOID)0x0) {
    return 0;
  }
  DAT_101ad78c = 0;
  DAT_101aea24 = 0;
  DAT_101aea30 = DAT_101aea28;
  DAT_101aea2c = param_1;
  DAT_101aea34 = 0x10;
  return 1;
}


// ==== 100d1808 thunk_FUN_100d182c thunk -> 100d182c

// ==== 100d182c FUN_100d182c

void __thiscall FUN_100d182c(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}


// ==== 100d1833 ___sbh_free_block

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2005 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_101ad78c != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_101aea38 * 0x8000 + DAT_101ad78c[3]),0x8000,0x4000);
        DAT_101ad78c[2] = DAT_101ad78c[2] | 0x80000000U >> ((byte)DAT_101aea38 & 0x1f);
        *(undefined4 *)(DAT_101ad78c[4] + 0xc4 + DAT_101aea38 * 4) = 0;
        *(char *)(DAT_101ad78c[4] + 0x43) = *(char *)(DAT_101ad78c[4] + 0x43) + -1;
        if (*(char *)(DAT_101ad78c[4] + 0x43) == '\0') {
          DAT_101ad78c[1] = DAT_101ad78c[1] & 0xfffffffe;
        }
        if (DAT_101ad78c[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_101ad78c[3],0,0x8000);
          HeapFree(DAT_101ad2b4,0,(LPVOID)DAT_101ad78c[4]);
          _memmove(DAT_101ad78c,DAT_101ad78c + 5,
                   (DAT_101aea24 * 0x14 - (int)DAT_101ad78c) + -0x14 + DAT_101aea28);
          DAT_101aea24 = DAT_101aea24 + -1;
          if (DAT_101ad78c < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_101aea30 = DAT_101aea28;
        }
      }
      DAT_101ad78c = param_1;
      DAT_101aea38 = uVar14;
    }
  }
  return;
}


// ==== 100d1b47 ___sbh_alloc_new_region

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_101aea24 == DAT_101aea34) {
    pvVar1 = HeapReAlloc(DAT_101ad2b4,0,DAT_101aea28,(DAT_101aea34 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_101aea34 = DAT_101aea34 + 0x10;
    DAT_101aea28 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_101aea24 * 0x14 + (int)DAT_101aea28);
  pvVar1 = HeapAlloc(DAT_101ad2b4,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_101aea24 = DAT_101aea24 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_101ad2b4,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}


// ==== 100d1bf7 ___sbh_alloc_new_group

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2005 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}


// ==== 100d1cfd ___sbh_resize_block

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}


// ==== 100d1fdc ___sbh_alloc_block

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2005 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint local_c;
  int local_8;
  
  puVar9 = DAT_101aea28 + DAT_101aea24 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_101aea30;
  if (iVar8 < 0x20) {
    uVar15 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar9 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  puVar13 = DAT_101aea28;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_101aea30 && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_101aea30) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_101aea28;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_101aea30 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_101aea30) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar15) == 0)) {
    local_8 = 0;
    puVar9 = (uint *)(piVar5 + 0x11);
    uVar11 = piVar5[0x31];
    while ((uVar11 & local_c) == 0 && (*puVar9 & uVar15) == 0) {
      local_8 = local_8 + 1;
      puVar13 = puVar9 + 0x21;
      puVar9 = puVar9 + 1;
      uVar11 = *puVar13;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar8 = 0;
  uVar15 = piVar5[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 * 2) {
    iVar8 = iVar8 + 1;
  }
  piVar12 = (int *)piVar3[iVar8 * 2 + 1];
  iVar10 = *piVar12 - uVar7;
  iVar16 = (iVar10 >> 4) + -1;
  if (0x3f < iVar16) {
    iVar16 = 0x3f;
  }
  DAT_101aea30 = param_1;
  if (iVar16 != iVar8) {
    if (piVar12[1] == piVar12[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar15 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar15;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar12[2] + 4) = piVar12[1];
    *(int *)(piVar12[1] + 8) = piVar12[2];
    if (iVar10 == 0) goto LAB_100d227c;
    piVar1 = piVar3 + iVar16 * 2;
    iVar8 = piVar1[1];
    piVar12[2] = (int)piVar1;
    piVar12[1] = iVar8;
    piVar1[1] = (int)piVar12;
    *(int **)(piVar12[1] + 8) = piVar12;
    if (piVar12[1] == piVar12[2]) {
      cVar4 = *(char *)(iVar16 + 4 + (int)piVar5);
      *(char *)(iVar16 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar6 = (byte)iVar16;
      if (iVar16 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar12 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar12) = iVar10;
  }
LAB_100d227c:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_101ad78c)) && (local_8 == DAT_101aea38)) {
    DAT_101ad78c = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}


// ==== 100d22bf __fltin2

/* Library Function - Single Match
    __fltin2
   
   Library: Visual Studio 2005 Release */

FLT __cdecl __fltin2(FLT _Flt,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  FLT p_Var2;
  uint uVar3;
  int *in_stack_00000018;
  int local_28;
  char *local_24;
  _CRT_DOUBLE local_20;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  local_24 = _Str;
  uVar3 = 0;
  local_18 = FUN_100d241a((undefined2 *)&local_14,&local_28,_Str,0,0,0,0,in_stack_00000018);
  if ((local_18 & 4) == 0) {
    IVar1 = __ld12tod(&local_14,&local_20);
    if (((local_18 & 2) != 0) || (IVar1 == INTRNCVT_OVERFLOW)) {
      uVar3 = 0x80;
    }
    if (((local_18 & 1) != 0) || (IVar1 == INTRNCVT_UNDERFLOW)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_20.x._0_4_ = 0;
    local_20.x._4_4_ = 0;
  }
  _Flt->nbytes = local_28 - (int)local_24;
  *(undefined4 *)&_Flt->dval = local_20.x._0_4_;
  *(undefined4 *)((int)&_Flt->dval + 4) = local_20.x._4_4_;
  _Flt->flags = uVar3;
  p_Var2 = (FLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var2;
}


// ==== 100d2364 __isctype_l

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}


// ==== 100d241a FUN_100d241a

void __cdecl
FUN_100d241a(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  DWORD *pDVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined *puVar20;
  short *psVar21;
  uint uVar22;
  undefined4 uVar23;
  ushort uVar24;
  char *pcVar25;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort uStack_38;
  ushort local_36;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  iVar15 = 0;
  pcVar25 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((cVar8 = *param_3, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) ||
           (cVar8 == '\r')); param_3 = param_3 + 1) {
    }
LAB_100d249f:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_100d24bc:
        iVar15 = 3;
        goto LAB_100d24be;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_100d24d3:
        iVar15 = 5;
        param_3 = pcVar18;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar15 = 2;
        param_3 = pcVar18;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_100d24ed;
          goto LAB_100d2678;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_100d249f;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_100d24bc;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_100d2524;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_100d2554;
      if (cVar8 == '0') goto LAB_100d24ed;
      goto LAB_100d2534;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_100d24bc;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_100d24d3;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_100d26a3;
LAB_100d24ed:
      iVar15 = 1;
      param_3 = pcVar18;
      goto LAB_100d249f;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_100d25c7;
LAB_100d2524:
      bVar4 = true;
      iVar15 = 4;
      param_3 = pcVar18;
      goto LAB_100d249f;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_100d25c7:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_100d2554:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_100d2534:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_100d2678;
        iVar15 = 6;
        param_3 = pcVar18;
      }
      goto LAB_100d249f;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_100d24be;
      }
      goto LAB_100d26a3;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_100d265f;
        if (cVar8 == '-') goto LAB_100d2653;
LAB_100d2646:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_100d26a3;
        iVar15 = 8;
        param_3 = pcVar18;
        goto LAB_100d249f;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_100d2646;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_100d2678;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_100d2705;
    default:
      goto switchD_100d24ab_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_100d265f:
          iVar15 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_100d26a3;
LAB_100d2653:
          local_6c = -1;
          iVar15 = 7;
          param_3 = pcVar18;
        }
        goto LAB_100d249f;
      }
      iVar15 = 10;
      pcVar18 = param_3;
switchD_100d24ab_caseD_a:
      param_3 = pcVar18;
      if (iVar15 != 10) goto LAB_100d249f;
      goto LAB_100d26a3;
    }
    iVar15 = 9;
LAB_100d24be:
    param_3 = pcVar18 + -1;
    goto LAB_100d249f;
  }
  pDVar10 = FUN_100ce0fa();
  *pDVar10 = 0x16;
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_100d2a9b;
LAB_100d2705:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_100d2720;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_100d2705;
  }
  local_68 = 0x1451;
LAB_100d2720:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_100d2678:
  param_3 = pcVar18 + -1;
LAB_100d26a3:
  *param_2 = (int)param_3;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar25 = pcVar25 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_100d2a7d;
    while (pcVar25 = pcVar25 + -1, *pcVar25 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar13 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + param_5);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_100d2a7d;
      puVar20 = &DAT_10129630;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar20 = &DAT_10129790;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar22 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x100d27ab:
        if (local_58 != (char *)0x0) {
          uVar16 = (int)local_58 >> 3;
          puVar20 = puVar20 + 0x54;
          uVar11 = (uint)local_58 & 7;
          local_58 = (char *)uVar16;
          if (uVar11 != 0) {
            puVar12 = (ushort *)(puVar20 + uVar11 * 0xc);
            if (0x7fff < *puVar12) {
              local_4c = (ushort)*(undefined4 *)puVar12;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar12 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar12 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar12 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar12 + 4);
              iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar15;
              uStack_4a._2_2_ = (undefined2)((uint)iVar15 >> 0x10);
              puVar12 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar16 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar3 = 0;
            uStack_26 = 0;
            uVar14 = local_36 & 0x7fff;
            uVar17 = puVar12[5] & 0x7fff;
            uVar9 = (puVar12[5] ^ local_36) & 0x8000;
            uVar24 = uVar17 + uVar14;
            uVar22 = 0;
            iVar1 = 0;
            if (((uVar14 < 0x7fff) && (uVar22 = 0, iVar1 = 0, uVar17 < 0x7fff)) &&
               (uVar22 = uVar16, iVar1 = iVar3, uVar24 < 0xbffe)) {
              if (0x3fbf < uVar24) {
                if (((uVar14 == 0) &&
                    (uVar24 = uVar24 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar13 == 0 && (uVar2 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar17 == 0) &&
                         (uVar24 = uVar24 + 1, (*(uint *)(puVar12 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar12 + 2) == 0 && (*(int *)puVar12 == 0)))) {
                  uStack_38 = 0;
                  local_36 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar2 = 0;
                  iVar13 = 0;
                }
                else {
                  local_6c = 0;
                  psVar21 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar12 + 4;
                      do {
                        bVar4 = false;
                        uVar22 = *(uint *)(psVar21 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar22 < *(uint *)(psVar21 + -2)) ||
                           (uVar22 < (uint)*local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar21 + -2) = uVar22;
                        if (bVar4) {
                          *psVar21 = *psVar21 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar21 = psVar21 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar24 = uVar24 + 0xc002;
                  if ((short)uVar24 < 1) {
LAB_100d2961:
                    uVar24 = uVar24 - 1;
                    if ((short)uVar24 < 0) {
                      uVar22 = (uint)(ushort)-uVar24;
                      uVar24 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar13 << 0x1f) >> 0x10);
                        uVar16 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar22 = uVar22 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar2 >> 1);
                        local_30 = (byte)uVar16;
                        uStack_2f = (undefined1)(uVar16 >> 8);
                      } while (uVar22 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar14 = (ushort)uStack_2e;
                      if ((uStack_26 & 0x8000) != 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar14 >> 0xf;
                      iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar13 | (ushort)uStack_2a >> 0xf;
                      uVar24 = uVar24 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar13 >> 0x10);
                    } while (0 < (short)uVar24);
                    if ((short)uVar24 < 1) goto LAB_100d2961;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      uVar22 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar24 = uVar24 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar1;
                        uStack_2a._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      }
                    }
                    else {
                      uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)uVar22;
                      uStack_2e._2_2_ = (ushort)(uVar22 >> 0x10);
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar24) goto LAB_100d2a20;
                  local_40 = uVar22;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar24 | uVar9;
                  uVar2 = uVar22;
                  iVar13 = iVar1;
                }
                goto joined_r0x100d27ab;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_100d2a20:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar13 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar13;
            local_36 = (ushort)((uint)iVar13 >> 0x10);
            uVar2 = 0;
            iVar13 = 0;
          }
          goto joined_r0x100d27ab;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar13 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar13;
      local_40._2_2_ = (undefined2)(uVar2 >> 0x10);
      local_40._0_2_ = (undefined2)uVar2;
      uVar23 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar24 = local_36;
      uStack_4a = iVar15;
      uStack_2e = uVar22;
      uStack_2a = iVar1;
      local_3c = iVar13;
    }
    else {
      uVar23 = 0;
      uVar24 = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_100d2a7d:
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar24 = 0;
    uVar19 = 0;
    uVar23 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar24 | uVar7;
  *(undefined4 *)(param_1 + 1) = uVar23;
  *(undefined4 *)(param_1 + 3) = uVar19;
LAB_100d2a9b:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100d2ada __crtLCMapStringA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  undefined4 *puVar6;
  LPCWSTR lpDestStr;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPSTR lpMultiByteStr;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  if (DAT_101ad790 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_101ad790 = 2;
      }
    }
    else {
      DAT_101ad790 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_100d2b49;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_100d2b49:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_101ad790 == 2) || (DAT_101ad790 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_100d2e6a;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_100d2e6a;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_100d2e47;
          pcVar5 = &stack0xffffffe4;
        }
        else {
          pcVar5 = _malloc(local_c + 8);
          if (pcVar5 != (char *)0x0) {
            pcVar5[0] = -0x23;
            pcVar5[1] = -0x23;
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 8;
          }
        }
        if (pcVar5 != (char *)0x0) {
          _memset(pcVar5,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pcVar5,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pcVar5,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pcVar5);
        }
      }
    }
LAB_100d2e47:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_100d2e6a;
  }
  if (DAT_101ad790 != 1) goto LAB_100d2e6a;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_100d2e6a;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_100d2bf1:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_100d2bf1;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_100d2e6a;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_100d2d00;
          lpDestStr = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          lpDestStr = _malloc(uVar1);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,lpDestStr,local_c);
        if (iVar3 != 0) {
          lpMultiByteStr = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            lpMultiByteStr = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,lpMultiByteStr,(int)pcVar5,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_100d2d00:
  __freea(local_10);
LAB_100d2e6a:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 100d2e7c ___crtLCMapStringA

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 100d2ebf strtoxl

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  DWORD *pDVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    pDVar3 = FUN_100ce0fa();
    *pDVar3 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = (byte)ptVar5[1].lc_category[0].locale[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_100d2f76:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_100d2f76;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_100d2fdc;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_100d2fdc;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_100d2fdc;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_100d2fdc:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_100d3036:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          pDVar3 = FUN_100ce0fa();
          *pDVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_100d3036;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_100d3036;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}


// ==== 100d30ea _strtol

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_101acde0 == 0) {
    ppuVar2 = &PTR_DAT_10128c60;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


// ==== 100d31f0 FUN_100d31f0

void FUN_100d31f0(void)

{
  float10 in_ST0;
  
  FUN_100d320e((double)in_ST0);
  return;
}


// ==== 100d320e FUN_100d320e

float10 __cdecl FUN_100d320e(double param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  uint uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  uint uVar11;
  ulonglong in_XMM2_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined4 in_XMM7_Dc;
  undefined4 in_XMM7_Dd;
  double local_c;
  
  dVar8 = in_XMM0._0_8_;
  uVar11 = in_XMM0._4_4_;
  uVar5 = uVar11 >> 0xc & 0x7ffff;
  if (uVar5 - 0x3fb00 < 0x3bb) {
    auVar9._0_8_ = ((ulonglong)uVar11 & 0xffffc000) << 0x20;
    auVar9._8_8_ = in_XMM2_Qb & CONCAT44(in_XMM7_Dd,in_XMM7_Dc);
    iVar6 = (uVar11 >> 0xc & 0xfffc) - 0xfb00;
    iVar7 = iVar6 * 4;
    dVar13 = SUB168(auVar9 | ZEXT816(0x200000000000),0);
    dVar12 = SQRT(1.0 - dVar8 * dVar8) * dVar13;
    dVar1 = dVar8 * *(double *)(&DAT_1010c1b0 + iVar6 * 2) - dVar12;
    uVar11 = SUB164(auVar9 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar2 = dVar1 * dVar1;
    auVar4._4_8_ = 0;
    auVar4._0_4_ = uVar11;
    auVar10._0_12_ = auVar4 << 0x20;
    auVar10._12_4_ = uVar11;
    return (float10)(((dVar8 - dVar13) * (dVar8 + dVar13)) /
                     (dVar8 * *(double *)(&DAT_1010c1b0 + iVar6 * 2) + dVar12) +
                     (dVar2 * 0.044642857142857144 + 0.075) * dVar1 * dVar2 * dVar2 +
                     dVar1 * dVar2 * 0.16666666666666666 +
                     (double)(*(ulonglong *)(&DAT_1010b2b0 + iVar7) ^ (ulonglong)uVar11 << 0x20) +
                    (double)(*(ulonglong *)(&UNK_1010b2b8 + iVar7) ^ auVar10._8_8_));
  }
  if (uVar5 - 0x3febb < 0x43) {
    dVar13 = SQRT(1.0 - dVar8 * dVar8);
    auVar3._8_4_ = in_XMM7_Dc;
    auVar3._0_8_ = dVar8;
    auVar3._12_4_ = in_XMM7_Dd;
    dVar2 = (double)((ulonglong)dVar8 & 0x7fffffc000000000);
    dVar1 = ABS(dVar8) - dVar2;
    dVar12 = (double)((ulonglong)dVar13 & 0xffffc00000000000 | 0x200000000000);
    iVar7 = (ushort)((ulonglong)((longlong)dVar13 << 2) >> 0x30) - 0xfec0;
    dVar13 = dVar13 * *(double *)(&DAT_1010c1b0 + iVar7 * 8);
    dVar14 = (dVar2 * dVar12 - dVar13) + dVar1 * dVar12;
    iVar7 = iVar7 * 0x10;
    dVar15 = dVar14 * dVar14;
    return (float10)(double)((ulonglong)
                             ((((dVar15 * 0.044642857142857144 + 0.075) * dVar14 * dVar15 * dVar15 +
                               dVar14 * dVar15 * 0.16666666666666666 +
                               (6.123233995736766e-17 - *(double *)(&DAT_1010b2b0 + iVar7))) -
                              (((1.0 - dVar2 * dVar2) - dVar12 * dVar12) -
                              (ABS(dVar8) + dVar2) * dVar1) / (dVar13 + dVar13 + dVar14)) +
                             (1.5707963267948966 - *(double *)(&UNK_1010b2b8 + iVar7))) |
                            (ulonglong)(ushort)((ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 0xf) <<
                            0x30);
  }
  if (uVar5 - 0x3c300 < 0x3800) {
    dVar2 = dVar8 * dVar8;
    dVar13 = dVar8 * dVar8;
    dVar1 = dVar8 * dVar2;
    return (float10)(dVar8 + dVar1 * dVar1 * dVar1 *
                             (dVar2 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar2 * dVar2 * 0.017352764423076924) +
                             dVar8 * dVar13 *
                             (dVar13 * 0.075 + 0.16666666666666666 +
                             dVar13 * dVar13 * 0.044642857142857144));
  }
  if (uVar5 - 0x3fefe < 2) {
    dVar14 = SQRT(1.0 - dVar8 * dVar8);
    dVar1 = (double)((ulonglong)dVar8 & 0xfffffffff8000000);
    dVar15 = (double)((ulonglong)dVar14 & 0xfffffffff8000000);
    dVar8 = dVar8 - dVar1;
    auVar17._8_4_ = SUB84(dVar14,0);
    auVar17._0_8_ = dVar14;
    auVar17._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    dVar2 = dVar14 * dVar14;
    dVar13 = dVar14 * dVar14;
    dVar16 = dVar14 * dVar2;
    dVar12 = dVar16 * dVar16 * dVar16;
    return (float10)(double)((ulonglong)
                             (((((dVar2 * 0.011551800896136895 + 0.01396484375) *
                                 dVar16 * dVar16 * dVar12 + 6.123233995736766e-17) -
                               ((dVar2 * dVar2 * 0.017352764423076924 +
                                dVar2 * 0.022372159090909092 + 0.030381944444444444) * dVar12 +
                                (dVar13 * dVar13 * 0.044642857142857144 +
                                dVar13 * 0.075 + 0.16666666666666666) * auVar17._8_8_ * dVar13 +
                               (((((1.0 - dVar1 * dVar1) - (dVar1 + dVar1) * dVar8) -
                                 dVar15 * dVar15) - dVar8 * dVar8) +
                               (dVar14 + dVar14 + (dVar15 - dVar14)) * (dVar15 - dVar14)) /
                               (dVar14 + dVar14))) -
                              (dVar14 - ((dVar14 - 1.5707963267948966) + 1.5707963267948966))) -
                             (dVar14 - 1.5707963267948966)) |
                            (ulonglong)(in_XMM0._6_2_ & 0x8000) << 0x30);
  }
  if (uVar5 < 0x3ff00) {
    if (0x7fdf < ((ushort)((ulonglong)param_1 >> 0x30) & 0x7ff0) - 0x10) {
      param_1 = (double)((ulonglong)param_1 | (ulonglong)(param_1 + 0.0));
    }
    return (float10)param_1;
  }
  if ((uVar11 & 0x7fffffff) != 0x3ff00000 || in_XMM0._0_4_ != 0) {
    if ((int)((((uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff) + 0x80100000) -
             (uint)(SUB84(param_1,0) == 0)) < 0) {
      local_c = -NAN;
      iVar7 = 0x3d;
    }
    else {
      local_c = param_1 + 0.0;
      iVar7 = 0x3f1;
    }
    ___libm_error_support(&param_1,&param_1,&local_c,iVar7);
    return (float10)local_c;
  }
  return (float10)(double)((ulonglong)dVar8 & 0x8000000000000000 | 0x3ff921fb54442d18);
}


// ==== 100d3770 _CallDestructExceptionObject

/* Library Function - Single Match
    _CallDestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void __cdecl _CallDestructExceptionObject(int *param_1)

{
  BOOL BVar1;
  
  if ((*param_1 == -0x1f928c9d) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_101048a0),
     BVar1 != 0)) {
    ___DestructExceptionObject(param_1);
  }
  return;
}


// ==== 100d37b0 _ValidateScopeTableHandlers

/* Library Function - Single Match
    _ValidateScopeTableHandlers
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall _ValidateScopeTableHandlers(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  uint uVar4;
  uint uVar5;
  PBYTE unaff_EDI;
  
  p_Var3 = (PIMAGE_SECTION_HEADER)0x0;
  uVar4 = 0xffffffff;
  while( true ) {
    if (this == (void *)0xffffffff) {
      return 1;
    }
    piVar1 = (int *)(param_1 + (int)this * 0xc);
    uVar5 = *(int *)(param_1 + 8 + (int)this * 0xc) - (int)unaff_EDI & 0xfffff000;
    if (((uVar5 != uVar4) &&
        ((((uVar4 = uVar5, p_Var3 == (PIMAGE_SECTION_HEADER)0x0 || (uVar5 < p_Var3->VirtualAddress))
          || ((p_Var3->Misc).PhysicalAddress + p_Var3->VirtualAddress <= uVar5)) &&
         ((p_Var3 = __FindPESection(unaff_EDI,uVar5), p_Var3 == (PIMAGE_SECTION_HEADER)0x0 ||
          ((p_Var3->Characteristics & 0x20000000) == 0)))))) ||
       (((iVar2 = piVar1[1], iVar2 != 0 &&
         ((uVar5 = iVar2 - (int)unaff_EDI & 0xfffff000, uVar5 != uVar4 &&
          ((uVar4 = uVar5, uVar5 < p_Var3->VirtualAddress ||
           ((p_Var3->Misc).PhysicalAddress + p_Var3->VirtualAddress <= uVar5)))))) &&
        ((p_Var3 = __FindPESection(unaff_EDI,uVar5), p_Var3 == (PIMAGE_SECTION_HEADER)0x0 ||
         ((p_Var3->Characteristics & 0x20000000) == 0)))))) break;
    this = (void *)*piVar1;
  }
  return 0;
}


// ==== 100d3870 __ValidateEH3RN

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ValidateEH3RN
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __ValidateEH3RN(void *param_1)

{
  uint uVar1;
  PBYTE pBVar2;
  PVOID pImageBase;
  void *pvVar3;
  BOOL BVar4;
  int iVar5;
  PIMAGE_SECTION_HEADER p_Var6;
  SIZE_T SVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  PBYTE pBVar11;
  bool bVar12;
  uint uStack_54;
  _MEMORY_BASIC_INFORMATION local_44;
  void *local_28;
  uint local_24;
  uint *local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_101281d0 ^ 0x10116c40;
  uStack_54 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_54;
  local_20 = *(uint **)((int)param_1 + 8);
  if (((uint)local_20 & 3) != 0) {
    return 0;
  }
  if ((StackLimit <= local_20) && (local_20 < StackBase)) {
    return 0;
  }
  local_28 = *(void **)((int)param_1 + 0xc);
  if (local_28 == (void *)0xffffffff) {
    return 1;
  }
  bVar12 = false;
  pvVar3 = (void *)0x0;
  puVar8 = local_20;
  do {
    if (((void *)*puVar8 != (void *)0xffffffff) && (pvVar3 <= (void *)*puVar8)) {
      return 0;
    }
    if (puVar8[1] != 0) {
      bVar12 = true;
    }
    pvVar3 = (void *)((int)pvVar3 + 1);
    puVar8 = puVar8 + 3;
  } while (pvVar3 <= local_28);
  if (bVar12) {
    if (*(void **)((int)param_1 + -8) < StackLimit) {
      return 0;
    }
    if (param_1 <= *(void **)((int)param_1 + -8)) {
      return 0;
    }
  }
  local_24 = (uint)local_20 & 0xfffff000;
  for (iVar10 = 0; ExceptionList = &local_14, puVar8 = &uStack_54, iVar10 < DAT_101ad798;
      iVar10 = iVar10 + 1) {
    uVar9 = (&DAT_101ad7a0)[iVar10 * 2];
    pBVar11 = (PBYTE)(&DAT_101ad7a4)[iVar10 * 2];
    if (uVar9 == local_24) {
      local_8 = 0;
      BVar4 = __ValidateImageBase(pBVar11);
      puVar8 = (uint *)local_1c;
      if (((BVar4 != 0) &&
          (iVar5 = _ValidateScopeTableHandlers(local_28,(int)local_20), puVar8 = (uint *)local_1c,
          iVar5 != 0)) &&
         (p_Var6 = __FindPESection(pBVar11,*(int *)((int)param_1 + 4) - (int)pBVar11),
         puVar8 = (uint *)local_1c, p_Var6 != (PIMAGE_SECTION_HEADER)0x0)) {
        if (iVar10 < 1) {
          ExceptionList = local_14;
          return 1;
        }
        LOCK();
        UNLOCK();
        if (DAT_101ad820 != 0) {
          DAT_101ad820 = 1;
          ExceptionList = local_14;
          return 1;
        }
        if ((&DAT_101ad7a0)[iVar10 * 2] == local_24) goto LAB_100d3a13;
        iVar10 = DAT_101ad798 + -1;
        if (iVar10 < 0) goto LAB_100d3a02;
        goto LAB_100d39e0;
      }
      break;
    }
  }
  local_1c = (undefined1 *)puVar8;
  local_8 = 0xfffffffe;
  SVar7 = VirtualQuery(local_20,&local_44,0x1c);
  if (SVar7 == 0) {
    ExceptionList = local_14;
    return 1;
  }
  if (local_44.Type != 0x1000000) {
    if (local_44.Type != 0x20000) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
    if (DAT_101ad79c == 0) {
      _DAT_101ad828 = 0x94;
      BVar4 = GetVersionExA((LPOSVERSIONINFOA)&DAT_101ad828);
      if (BVar4 == 0) {
        if (DAT_101ad79c == 0) goto LAB_100d3b00;
      }
      else {
        DAT_101ad79c = 1;
      }
    }
    if (DAT_101ad838 != 1) {
      ExceptionList = local_14;
      return 0xffffffff;
    }
  }
LAB_100d3b00:
  pImageBase = local_44.AllocationBase;
  BVar4 = __ValidateImageBase(local_44.AllocationBase);
  if (BVar4 == 0) {
    ExceptionList = local_14;
    return 0xffffffff;
  }
  if ((((((byte)local_44.Protect & 0xcc) != 0) &&
       ((p_Var6 = __FindPESection(pImageBase,(int)local_20 - (int)pImageBase),
        p_Var6 == (PIMAGE_SECTION_HEADER)0x0 || ((p_Var6->Characteristics & 0x80000000) != 0)))) ||
      (iVar10 = _ValidateScopeTableHandlers(local_28,(int)local_20), iVar10 == 0)) ||
     (p_Var6 = __FindPESection(pImageBase,*(int *)((int)param_1 + 4) - (int)pImageBase),
     p_Var6 == (PIMAGE_SECTION_HEADER)0x0)) {
    ExceptionList = local_14;
    return 0;
  }
  LOCK();
  UNLOCK();
  if (DAT_101ad820 != 0) {
    DAT_101ad820 = 1;
    ExceptionList = local_14;
    return 1;
  }
  iVar10 = DAT_101ad798;
  if (0 < DAT_101ad798) {
    puVar8 = (uint *)(&DAT_101ad798 + DAT_101ad798 * 2);
    do {
      if (*puVar8 == local_24) break;
      iVar10 = iVar10 + -1;
      puVar8 = puVar8 + -2;
    } while (0 < iVar10);
  }
  if (iVar10 == 0) {
    iVar10 = DAT_101ad798;
    if (0xf < DAT_101ad798) {
      iVar10 = 0xf;
    }
    if (-1 < iVar10) {
      puVar8 = &DAT_101ad7a0;
      iVar10 = iVar10 + 1;
      do {
        uVar9 = *puVar8;
        pBVar11 = (PBYTE)puVar8[1];
        *puVar8 = local_24;
        puVar8[1] = (uint)local_44.AllocationBase;
        puVar8 = puVar8 + 2;
        iVar10 = iVar10 + -1;
        local_24 = uVar9;
        local_44.AllocationBase = pBVar11;
      } while (iVar10 != 0);
    }
    if (DAT_101ad798 < 0x10) {
      DAT_101ad798 = DAT_101ad798 + 1;
    }
  }
  else {
    (&DAT_101ad79c)[iVar10 * 2] = (int)local_44.AllocationBase;
  }
LAB_100d3bf2:
  LOCK();
  UNLOCK();
  DAT_101ad820 = 0;
  ExceptionList = local_14;
  return 1;
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
LAB_100d39e0:
    if ((&DAT_101ad7a0)[iVar10 * 2] == local_24) {
      uVar9 = (&DAT_101ad7a0)[iVar10 * 2];
      pBVar11 = (PBYTE)(&DAT_101ad7a4)[iVar10 * 2];
      break;
    }
  }
  bVar12 = false;
  if (iVar10 < 0) {
LAB_100d3a02:
    if (DAT_101ad798 < 0x10) {
      DAT_101ad798 = DAT_101ad798 + 1;
    }
    iVar10 = DAT_101ad798 + -1;
LAB_100d3a13:
    bVar12 = iVar10 < 0;
  }
  if ((iVar10 != 0 && !bVar12) && (iVar5 = 0, -1 < iVar10)) {
    do {
      uVar1 = (&DAT_101ad7a0)[iVar5 * 2];
      pBVar2 = (PBYTE)(&DAT_101ad7a4)[iVar5 * 2];
      (&DAT_101ad7a0)[iVar5 * 2] = uVar9;
      (&DAT_101ad7a4)[iVar5 * 2] = pBVar11;
      iVar5 = iVar5 + 1;
      uVar9 = uVar1;
      pBVar11 = pBVar2;
    } while (iVar5 <= iVar10);
  }
  goto LAB_100d3bf2;
}


// ==== 100d3df0 __cintrindisp2

/* Library Function - Single Match
    __cintrindisp2
   
   Library: Visual Studio */

void __fastcall __cintrindisp2(undefined4 param_1,int param_2)

{
  __trandisp2(param_1,param_2);
  FUN_100d3eba();
  return;
}


// ==== 100d3e2e __cintrindisp1

/* Library Function - Single Match
    __cintrindisp1
   
   Library: Visual Studio */

void __fastcall __cintrindisp1(undefined4 param_1,int param_2)

{
  __trandisp1(param_1,param_2);
  FUN_100d3eba();
  return;
}


// ==== 100d3e6b __ctrandisp2

/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2(extraout_ECX,extraout_EDX);
  FUN_100d3eb3();
  return;
}


// ==== 100d3eb3 FUN_100d3eb3

void FUN_100d3eb3(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_101acdc4 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_100d3f9f;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_100d3f9f;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_100d3f9f;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_100d3f9f:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  __87except((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
             (ushort *)(unaff_EBP + -0xa4));
  return;
}


// ==== 100d3eba FUN_100d3eba

void FUN_100d3eba(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_101acdc4 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_100d3f9f;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_100d3f9f;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_100d3f9f;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_100d3f9f:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  __87except((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
             (ushort *)(unaff_EBP + -0xa4));
  return;
}


// ==== 100d4001 __ctrandisp1

/* Library Function - Single Match
    __ctrandisp1
   
   Library: Visual Studio */

void __cdecl __ctrandisp1(uint param_1,int param_2)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __trandisp1(extraout_ECX,extraout_EDX);
  FUN_100d3eb3();
  return;
}


// ==== 100d4034 __fload

/* Library Function - Single Match
    __fload
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

float10 __cdecl __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}


// ==== 100d4876 FUN_100d4876

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100d4876(undefined4 param_1,uint param_2,ushort param_3)

{
  undefined4 in_EAX;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  ushort in_stack_00000024;
  
  if ((((((CONCAT22(param_3,param_2._2_2_) ^ 0x700) & 0x700) == 0) &&
       ((&DAT_101290cc)[(param_2._2_2_ & 0x7800) >> 0xb] != '\0')) && ((param_3 & 0x7fff) != 0x7fff)
      ) && ((((in_stack_00000024 & 0x7fff) != 0 && ((in_stack_00000024 & 0x7fff) != 0x7fff)) &&
            (((CONCAT22(in_stack_00000022,in_stack_00000020) & 0x7fffffff) == 0 &&
             ((param_2 & 0x7fffffff) == 0)))))) {
    if ((ushort)((param_3 & 0x7fff) + 0x3f) < (in_stack_00000024 & 0x7fff)) {
      iVar1 = ((in_stack_00000024 & 0x7fff) - (param_3 & 0x7fff) & 0x3f | 0x20) + 1;
      fVar3 = ABS((float10)CONCAT28(in_stack_00000024 & 0x7fff | param_3 & 0x8000,
                                    CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))));
      fVar2 = ABS((float10)CONCAT28(in_stack_00000024,
                                    CONCAT26(in_stack_00000022,
                                             CONCAT24(in_stack_00000020,in_stack_0000001c))));
      do {
        if (fVar3 <= fVar2) {
          fVar2 = fVar2 - fVar3;
        }
        fVar3 = fVar3 * (float10)_DAT_101290fc;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      while (-1 < (int)((in_stack_00000024 & 0x7fff) - ((param_3 & 0x7fff) + 10))) {
        fVar2 = (float10)CONCAT28(in_stack_00000024,
                                  CONCAT26(in_stack_00000022,
                                           CONCAT24(in_stack_00000020,in_stack_0000001c)));
        fVar3 = (float10)CONCAT28((in_stack_00000024 & 0x7fff) -
                                  ((in_stack_00000024 & 0x7fff) - param_3 & 7 | 4) |
                                  param_3 & 0x8000,
                                  CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)));
        fVar2 = fVar2 - (float10)(unkint10)(fVar2 / fVar3) * fVar3;
        in_stack_0000001c = SUB104(fVar2,0);
        in_stack_00000020 = (undefined2)((unkuint10)fVar2 >> 0x20);
        in_stack_00000022 = (undefined2)((unkuint10)fVar2 >> 0x30);
        in_stack_00000024 = (ushort)((unkuint10)fVar2 >> 0x40);
      }
    }
  }
  return in_EAX;
}


// ==== 100d4a7c FUN_100d4a7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100d4a7c(void)

{
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 in_ST1;
  uint uVar2;
  float10 fVar1;
  
  uVar2 = (uint)((unkuint10)in_ST1 >> 0x20);
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    FUN_100d4876(SUB104(in_ST1,0),uVar2,(ushort)((unkuint10)in_ST1 >> 0x40));
    return extraout_ST0;
  }
  if (SUB104(in_ST1,0) != 0 || uVar2 != 0) {
    fVar1 = in_ST1 * (float10)_DAT_101290e4;
    FUN_100d4876(SUB104(fVar1,0),(uint)((unkuint10)fVar1 >> 0x20),(ushort)((unkuint10)fVar1 >> 0x40)
                );
    return extraout_ST0_00;
  }
  return in_ST0 - (float10)(unkint10)(in_ST0 / in_ST1) * in_ST1;
}


// ==== 100d4e00 FUN_100d4e00

void FUN_100d4e00(void)

{
  float10 in_ST0;
  
  FUN_100d4e1e(SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}


// ==== 100d4e1e FUN_100d4e1e

float10 __cdecl FUN_100d4e1e(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  double in_XMM0_Qa;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar4 = in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0;
    dVar5 = (in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar4,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar3 = (in_XMM0_Qa - (dVar4 - 6755399441055744.0) * 0.010830424696223417) -
            (dVar4 - 6755399441055744.0) * 2.572804622327669e-14;
    dVar5 = (in_XMM0_Qa - dVar5 * 0.010830424696223417) - dVar5 * 2.572804622327669e-14;
    dVar4 = (double)(*(ulonglong *)(&UNK_1010cb68 + iVar2) |
                    ((ulonglong)dVar4 & 0xffffffc0) + 0xffc0 << 0x2e);
    dVar3 = dVar5 * dVar5 * (dVar5 * 0.16666666669815094 + 0.4999999999995663) +
            dVar3 + *(double *)(&DAT_1010cb60 + iVar2) +
            dVar3 * dVar3 * dVar3 * dVar3 * (dVar3 * 0.008332168270616733 + 0.04166672086872847);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar3 * dVar4 + dVar4);
    }
    dVar5 = (double)(*(ulonglong *)(&UNK_1010cb68 + iVar2) & 0xfffffffffffff |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar5 >> 0x30);
    in_XMM0_Qa = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
                 (dVar5 + dVar3 * dVar5);
    if (((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)in_XMM0_Qa & 0x7ff0000000000000) != 0) goto LAB_100d5012;
      iVar2 = 0xf;
    }
    else {
      iVar2 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + 1.0);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        in_XMM0_Qa = INFINITY;
        iVar2 = 0xe;
      }
      else {
        in_XMM0_Qa = 0.0;
        iVar2 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)0.0;
        }
        return (float10)INFINITY;
      }
      iVar2 = 0x3ea;
    }
  }
  uStack_c = SUB82(in_XMM0_Qa,0);
  uStack_a = (undefined6)((ulonglong)in_XMM0_Qa >> 0x10);
  ___libm_error_support((double *)&param_1,(undefined8 *)&param_1,(double *)&uStack_c,iVar2);
  in_XMM0_Qa = (double)CONCAT62(uStack_a,uStack_c);
LAB_100d5012:
  return (float10)in_XMM0_Qa;
}


// ==== 100d50c0 __rt_probe_read4@4

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __rt_probe_read4@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2019 Release */

undefined4 __rt_probe_read4_4(void)

{
  return 1;
}


// ==== 100d5110 __ValidateImageBase

/* Library Function - Single Match
    __ValidateImageBase
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}


// ==== 100d5140 __FindPESection

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2005 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}


// ==== 100d5190 __IsNonwritableInCurrentImage

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_101281d0 ^ 0x10116c80;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_10000000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10000000,(DWORD_PTR)(pTarget + -0x10000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// ==== 100d524b FUN_100d524b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100d524b(undefined4 param_1)

{
  _DAT_101ad8bc = param_1;
  return;
}


// ==== 100d5255 FUN_100d5255

void __cdecl FUN_100d5255(undefined4 param_1)

{
  DAT_101ad8c0 = param_1;
  return;
}


// ==== 100d525f ___crtInitCritSecNoSpinCount@8

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}


// ==== 100d526f ___crtInitCritSecAndSpinCount

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2005 Release */

int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  HMODULE hModule;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10116ca0;
  uStack_c = 0x100d527b;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_100c8e85(DAT_101ad8c0);
  if (pcVar1 != (FARPROC)0x0) goto LAB_100d52e5;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_100d52d4:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_100d52d4;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_100d52d4;
  }
  DAT_101ad8c0 = FUN_100c8e0e((int)pcVar1);
LAB_100d52e5:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}


// ==== 100d5334 FUN_100d5334

void __cdecl FUN_100d5334(undefined4 param_1)

{
  DAT_101ad8c4 = param_1;
  return;
}


// ==== 100d533e __callnewh

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_100c8e85(DAT_101ad8c4);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 100d5360 __fileno

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2005 Release */

int __cdecl __fileno(FILE *_File)

{
  DWORD *pDVar1;
  
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  return _File->_file;
}


// ==== 100d538d FUN_100d538d

undefined ** FUN_100d538d(void)

{
  return &PTR_DAT_10129310;
}


// ==== 100d5464 FUN_100d5464

void __cdecl FUN_100d5464(uint param_1)

{
  if ((0x1012930f < param_1) && (param_1 < 0x10129571)) {
    __lock(((int)(param_1 + 0xefed6cf0) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


// ==== 100d54a0 FUN_100d54a0

void __cdecl FUN_100d54a0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    __lock(param_1 + 0x10);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


// ==== 100d54ce FUN_100d54ce

void __cdecl FUN_100d54ce(uint param_1)

{
  if ((0x1012930f < param_1) && (param_1 < 0x10129571)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_100cf46a(((int)(param_1 + 0xefed6cf0) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


// ==== 100d5504 FUN_100d5504

void __cdecl FUN_100d5504(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_100cf46a(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


// ==== 100d552e FUN_100d552e

undefined4 __cdecl FUN_100d552e(FILE *param_1)

{
  int _FileHandle;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *_Buf;
  
  uVar2 = 0;
  if ((((byte)param_1->_flag & 3) == 2) && ((param_1->_flag & 0x108U) != 0)) {
    _Buf = param_1->_base;
    uVar3 = (int)param_1->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(param_1);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)param_1->_flag < '\0') {
          param_1->_flag = param_1->_flag & 0xfffffffd;
        }
      }
      else {
        param_1->_flag = param_1->_flag | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1->_cnt = 0;
  param_1->_ptr = param_1->_base;
  return uVar2;
}


// ==== 100d5590 FUN_100d5590

int __cdecl FUN_100d5590(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  
  if (param_1 == (FILE *)0x0) {
    iVar1 = FUN_100d55d2(0);
    return iVar1;
  }
  iVar1 = FUN_100d552e(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) != 0) {
    uVar2 = __fileno(param_1);
    DVar3 = FUN_100d8bb7(uVar2);
    return -(uint)(DVar3 != 0);
  }
  return 0;
}


// ==== 100d55d2 FUN_100d55d2

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_100d55d2(int param_1)

{
  int *piVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (iVar4 = 0; iVar4 < DAT_101aea20; iVar4 = iVar4 + 1) {
    piVar1 = (int *)(DAT_101ada08 + iVar4 * 4);
    if ((*piVar1 != 0) && (iVar3 = *piVar1, (*(byte *)(iVar3 + 0xc) & 0x83) != 0)) {
      FUN_100d54a0(iVar4,iVar3);
      pFVar2 = *(FILE **)(DAT_101ada08 + iVar4 * 4);
      if ((pFVar2->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar3 = FUN_100d5590(pFVar2);
          if (iVar3 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((pFVar2->_flag & 2U) != 0)) {
          iVar3 = FUN_100d5590(pFVar2);
          if (iVar3 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_100d5674();
    }
  }
  FUN_100d56a3();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}


// ==== 100d5674 FUN_100d5674

void FUN_100d5674(void)

{
  int unaff_ESI;
  
  FUN_100d5504(unaff_ESI,*(int *)(DAT_101ada08 + unaff_ESI * 4));
  return;
}


// ==== 100d56a3 FUN_100d56a3

void FUN_100d56a3(void)

{
  FUN_100cf46a(1);
  return;
}


// ==== 100d56ac FUN_100d56ac

void FUN_100d56ac(void)

{
  FUN_100d55d2(1);
  return;
}


// ==== 100d56b5 __write_nolock

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR *pWVar1;
  char cVar2;
  wchar_t *pwVar3;
  WCHAR WVar4;
  wchar_t wVar5;
  DWORD *pDVar6;
  int iVar7;
  _ptiddata p_Var8;
  BOOL BVar9;
  DWORD DVar10;
  int iVar11;
  uint uVar12;
  WCHAR *pWVar13;
  uint uVar14;
  char *pcVar15;
  int unaff_EDI;
  int *piVar16;
  UINT local_598;
  uint local_594;
  WCHAR *local_590;
  int *local_58c;
  char *local_588;
  int local_584;
  WCHAR *local_580;
  char *local_57c;
  WCHAR *local_578;
  char local_571;
  DWORD local_570;
  WCHAR *local_56c;
  WCHAR local_568 [38];
  undefined1 local_51c [264];
  CHAR local_414 [688];
  WCHAR local_164 [170];
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) goto LAB_100d5c65;
  if (_Buf == (void *)0x0) {
    pDVar6 = FUN_100ce10d();
    *pDVar6 = 0;
    pDVar6 = FUN_100ce0fa();
    *pDVar6 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_100d5c65;
  }
  iVar11 = (_FileHandle & 0x1fU) * 0x38;
  piVar16 = &DAT_101aea60 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar16 + iVar11 + 0x24) * '\x02') >> 1;
  local_58c = piVar16;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    pDVar6 = FUN_100ce10d();
    *pDVar6 = 0;
    pDVar6 = FUN_100ce0fa();
    *pDVar6 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_100d5c65;
  }
  if ((*(byte *)(*piVar16 + iVar11 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar11 + 4 + *piVar16) & 0x80) == 0)) {
LAB_100d59a0:
    if ((*(byte *)((undefined4 *)(*piVar16 + iVar11) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar16 + iVar11),local_580,_MaxCharCount,(LPDWORD)&local_588,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_100d5bfa:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_100d5c03:
      piVar16 = local_58c;
      if (local_57c != (char *)0x0) goto LAB_100d5c65;
      goto LAB_100d5c0d;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_100d5c34;
      do {
        local_578 = (WCHAR *)0x0;
        uVar12 = (int)local_56c - (int)local_580;
        pWVar13 = local_568;
        do {
          if (_MaxCharCount <= uVar12) break;
          pWVar1 = (WCHAR *)((int)local_56c + 1);
          WVar4 = *local_56c;
          uVar12 = uVar12 + 1;
          if ((char)WVar4 == '\n') {
            local_584 = local_584 + 1;
            *(char *)pWVar13 = '\r';
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          *(char *)pWVar13 = (char)WVar4;
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          local_56c = pWVar1;
        } while (local_578 < (WCHAR *)0x400);
        BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_568,(int)pWVar13 - (int)local_568,
                          (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_100d5bfa;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_100d5c03;
    }
    if (local_571 == '\x02') {
      local_56c = local_580;
      if (_MaxCharCount != 0) {
        do {
          uVar14 = 0;
          uVar12 = (int)local_56c - (int)local_580;
          pWVar13 = local_568;
          do {
            if (_MaxCharCount <= uVar12) break;
            pWVar1 = local_56c + 1;
            WVar4 = *local_56c;
            uVar12 = uVar12 + 2;
            if (WVar4 == L'\n') {
              local_584 = local_584 + 2;
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              uVar14 = uVar14 + 2;
            }
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
            uVar14 = uVar14 + 2;
            piVar16 = local_58c;
            local_56c = pWVar1;
          } while (uVar14 < 0x3ff);
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_568,(int)pWVar13 - (int)local_568,
                            (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_100d5bfa;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_100d5c03;
      }
    }
    else {
      local_578 = local_580;
      if (_MaxCharCount != 0) {
        do {
          local_56c = (WCHAR *)0x0;
          uVar12 = (int)local_578 - (int)local_580;
          pWVar13 = local_164;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar4 = *local_578;
            local_578 = local_578 + 1;
            uVar12 = uVar12 + 2;
            if (WVar4 == L'\n') {
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              local_56c = local_56c + 1;
            }
            local_56c = local_56c + 1;
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
          } while (local_56c < (WCHAR *)0x152);
          pcVar15 = (char *)0x0;
          iVar7 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar13 - (int)local_164) / 2,
                                      local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 == 0) goto LAB_100d5bfa;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_58c),local_414 + (int)pcVar15,
                              iVar7 - (int)pcVar15,(LPDWORD)&local_588,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_570 = GetLastError();
              break;
            }
            pcVar15 = pcVar15 + (int)local_588;
          } while ((int)pcVar15 < iVar7);
        } while ((iVar7 <= (int)pcVar15) &&
                (local_57c = (char *)((int)local_578 - (int)local_580), local_57c < _MaxCharCount));
        goto LAB_100d5c03;
      }
    }
LAB_100d5c34:
    DVar10 = 0;
    if (((*(byte *)(iVar11 + 4 + *piVar16) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_100d5c65;
    pDVar6 = FUN_100ce0fa();
    *pDVar6 = 0x1c;
  }
  else {
    p_Var8 = __getptd();
    pwVar3 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar11 + *piVar16),&local_598);
    if ((BVar9 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_100d59a0;
    local_598 = GetConsoleCP();
    local_56c = (WCHAR *)0x0;
    local_590 = local_580;
    if (_MaxCharCount != 0) {
      local_578 = (WCHAR *)0x0;
      do {
        pWVar13 = local_590;
        if (local_571 == '\0') {
          cVar2 = (char)*local_590;
          local_594 = (uint)(cVar2 == '\n');
          iVar7 = _isleadbyte(CONCAT22(cVar2 >> 7,(short)cVar2));
          if (iVar7 == 0) {
            iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,1);
            if (iVar7 == -1) break;
          }
          else {
            if (((char *)((int)local_580 + (_MaxCharCount - (int)pWVar13)) < (char *)0x2) ||
               (iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,2), iVar7 == -1)) break;
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          local_590 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          DVar10 = WideCharToMultiByte(local_598,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                       (LPBOOL)0x0);
          if (DVar10 == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,DVar10,(LPDWORD)&local_56c,
                            (LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_100d5bfa;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)DVar10) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,1,(LPDWORD)&local_56c,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_100d5bfa;
            if ((int)local_56c < 1) break;
            local_584 = local_584 + 1;
            local_57c = local_57c + 1;
          }
        }
        else {
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            local_570 = (DWORD)(ushort)*local_590;
            local_594 = (uint)(*local_590 == L'\n');
            local_590 = local_590 + 1;
            local_578 = local_578 + 1;
          }
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            wVar5 = __putwch_nolock((wchar_t)local_570);
            if (wVar5 != (wchar_t)local_570) goto LAB_100d5bfa;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_100d5bfa;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_100d5c03;
    }
LAB_100d5c0d:
    if (local_570 == 0) goto LAB_100d5c34;
    DVar10 = 5;
    if (local_570 != 5) {
      FUN_100ce120(local_570);
      goto LAB_100d5c65;
    }
    pDVar6 = FUN_100ce0fa();
    *pDVar6 = 9;
  }
  pDVar6 = FUN_100ce10d();
  *pDVar6 = DVar10;
LAB_100d5c65:
  iVar11 = __security_check_cookie(local_8 ^ (uint)local_51c);
  return iVar11;
}


// ==== 100d5c7b __write

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2005 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  DWORD *pDVar1;
  int iVar2;
  int local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_100ce10d();
    *pDVar1 = 0;
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_101aea44)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_101aea60)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_101aea60)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_100ce0fa();
          *pDVar1 = 9;
          pDVar1 = FUN_100ce10d();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_100d5d4d();
        return local_20;
      }
    }
    pDVar1 = FUN_100ce10d();
    *pDVar1 = 0;
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}


// ==== 100d5d4d FUN_100d5d4d

void FUN_100d5d4d(void)

{
  int unaff_EBP;
  
  FUN_100d8af6(*(uint *)(unaff_EBP + 8));
  return;
}


// ==== 100d5d57 __close_nolock

/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_101aea60 + 0x74) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_101aea60 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_100d5db6;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_100d5db8;
    }
  }
LAB_100d5db6:
  DVar4 = 0;
LAB_100d5db8:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_101aea60)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_100ce120(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}


// ==== 100d5deb FUN_100d5deb

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_100d5deb(uint param_1)

{
  DWORD *pDVar1;
  int iVar2;
  int local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_100ce10d();
    *pDVar1 = 0;
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_101aea44)) {
      iVar2 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)((&DAT_101aea60)[(int)param_1 >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(param_1);
        if ((*(byte *)((&DAT_101aea60)[(int)param_1 >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_100ce0fa();
          *pDVar1 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(param_1);
        }
        FUN_100d5eae();
        return local_20;
      }
    }
    pDVar1 = FUN_100ce10d();
    *pDVar1 = 0;
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}


// ==== 100d5eae FUN_100d5eae

void FUN_100d5eae(void)

{
  int unaff_EBP;
  
  FUN_100d8af6(*(uint *)(unaff_EBP + 8));
  return;
}


// ==== 100d5eb8 FUN_100d5eb8

void __cdecl FUN_100d5eb8(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    _free((void *)param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}


// ==== 100d5ee4 xtoa_s

/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2005 Release
   __stdcall xtoa_s,20 */

DWORD xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  DWORD *pDVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  DWORD DVar7;
  uint local_8;
  
  if (in_ECX == (char *)0x0) {
    pDVar3 = FUN_100ce0fa();
    *pDVar3 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_100d5f16:
    pDVar3 = FUN_100ce0fa();
    DVar7 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_100d5f16;
      pcVar6 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar6 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      local_8 = (uint)(param_3 != 0);
      pcVar2 = pcVar6;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        local_8 = local_8 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, local_8 < param_1));
      if (local_8 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar6;
          pcVar4 = pcVar4 + -1;
          *pcVar6 = cVar5;
          pcVar6 = pcVar6 + 1;
        } while (pcVar6 < pcVar4);
        return 0;
      }
      *in_ECX = '\0';
    }
    pDVar3 = FUN_100ce0fa();
    DVar7 = 0x22;
  }
  *pDVar3 = DVar7;
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return DVar7;
}


// ==== 100d5fbf __itoa_s

/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  DWORD DVar1;
  int iVar2;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar2 = 1;
    _Radix = 10;
  }
  else {
    iVar2 = 0;
  }
  DVar1 = xtoa_s(_Size,_Radix,iVar2);
  return DVar1;
}


// ==== 100d6061 FUN_100d6061

void FUN_100d6061(void)

{
  int unaff_ESI;
  
  FUN_100d5504(unaff_ESI,*(int *)(DAT_101ada08 + unaff_ESI * 4));
  return;
}


// ==== 100d6087 FUN_100d6087

void FUN_100d6087(void)

{
  FUN_100cf46a(1);
  return;
}


// ==== 100d6090 _strrchr

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}


// ==== 100d60bd FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_100d241a((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = __ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_100d6114:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_100d6154;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_100d6146:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_100d6154;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_100d6146;
    goto LAB_100d6114;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_100d6154:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 100d6163 FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_100d241a((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = __ld12tof(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_100d61ba:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_100d61fa;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_100d61ec:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_100d61fa;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_100d61ec;
    goto LAB_100d61ba;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_100d61fa:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 100d6209 __fptostr

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  DWORD *pDVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    pDVar1 = FUN_100ce0fa();
    eVar7 = 0x16;
    *pDVar1 = 0x16;
  }
  else {
    *_Buf = '\0';
    iVar2 = _Digits;
    if (_Digits < 1) {
      iVar2 = 0;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      *_Buf = '0';
      pcVar3 = _Buf;
      for (; pcVar3 = pcVar3 + 1, 0 < _Digits; _Digits = _Digits + -1) {
        cVar5 = *pcVar6;
        if (cVar5 == '\0') {
          cVar5 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar3 = cVar5;
      }
      *pcVar3 = '\0';
      if ((-1 < _Digits) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        _PtFlt->decpt = _PtFlt->decpt + 1;
      }
      else {
        sVar4 = _strlen(_Buf + 1);
        _memmove(_Buf,_Buf + 1,sVar4 + 1);
      }
      return 0;
    }
    pDVar1 = FUN_100ce0fa();
    eVar7 = 0x22;
    *pDVar1 = 0x22;
  }
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}


// ==== 100d62c6 ___dtold

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2005 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar2 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar4 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar3 = uVar2 & 0x7ff;
  uVar1 = *param_2;
  local_8 = 0x80000000;
  if ((uVar2 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar1 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_100d6378;
    }
    uVar3 = uVar3 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    uVar3 = 0x7fff;
  }
  else {
    uVar3 = uVar3 + 0x3c00;
  }
  param_1[1] = uVar1 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar1 << 0xb;
  while (local_8 == 0) {
    uVar1 = param_1[1];
    uVar3 = uVar3 - 1;
    param_1[1] = uVar1 * 2 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar1 * 2 & 0x80000000;
  }
  uVar4 = uVar4 | uVar3;
LAB_100d6378:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}


// ==== 100d6381 __fltout2

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2005 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  STRFLT p_Var3;
  short local_30;
  char local_2e;
  char local_2c [24];
  uint local_14;
  uint uStack_10;
  ushort uStack_c;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_100d8d5a(local_14,uStack_10,uStack_c,0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  eVar2 = _strcpy_s(_ResultStr,_SizeInBytes,local_2c);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _Flt->mantissa = _ResultStr;
  p_Var3 = (STRFLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var3;
}


// ==== 100d6410 __alldvrm

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 100d64f8 FUN_100d64f8

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_100d64f8(void)

{
  return 1;
}


// ==== 100d6548 __get_sse2_info

/* WARNING: Removing unreachable block (ram,0x100d6583) */
/* WARNING: Removing unreachable block (ram,0x100d6570) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_100d64f8(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ==== 100d65b5 __87except

/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2005 Release */

void __cdecl __87except(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_94;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_101281d0 ^ (uint)&local_94;
  local_94 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_100d660f:
    uVar3 = 8;
LAB_100d6611:
    bVar1 = __handle_exc(uVar3,(double *)(param_2 + 6),local_94);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_94,uVar3,param_1,(uint *)(param_2 + 2),(uint *)(param_2 + 6));
    }
  }
  else {
    if (iVar2 == 2) {
      uVar3 = 4;
      goto LAB_100d6611;
    }
    if (iVar2 == 3) {
      uVar3 = 0x11;
      goto LAB_100d6611;
    }
    if (iVar2 == 4) {
      uVar3 = 0x12;
      goto LAB_100d6611;
    }
    if (iVar2 == 5) goto LAB_100d660f;
    if (iVar2 == 7) {
      *param_2 = 1;
    }
    else if (iVar2 == 8) {
      uVar3 = 0x10;
      goto LAB_100d6611;
    }
  }
  __ctrlfp();
  if ((*param_2 != 8) && (DAT_101295a4 == 0)) {
    iVar2 = FUN_100ac1f5();
    if (iVar2 != 0) goto LAB_100d669c;
  }
  __set_errno_from_matherr(*param_2);
LAB_100d669c:
  __security_check_cookie(local_14 ^ (uint)&local_94);
  return;
}


// ==== 100d66b1 std::exception::exception

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = vftable;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}


// ==== 100d66ff FUN_100d66ff

undefined4 * __thiscall FUN_100d66ff(void *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = std::exception::vftable;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)((int)this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)((int)this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    *(char **)((int)this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}


// ==== 100d6757 exception::~exception

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = std::exception::vftable;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}


// ==== 100d676d FUN_100d676d

char * __fastcall FUN_100d676d(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


// ==== 100d677a FUN_100d677a

exception * __thiscall FUN_100d677a(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_10001d20(this);
  }
  return this;
}


// ==== 100d6796 __EH_prolog3_catch

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_catch(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_101281d0 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 100d67cc _ValidateRead

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}


// ==== 100d67dc __local_unwind4

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_100d686c;
  pvStack_28 = ExceptionList;
  local_20 = DAT_101281d0 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_100c3848();
    }
  }
  ExceptionList = pvStack_28;
  return;
}


// ==== 100d68b2 FUN_100d68b2

void FUN_100d68b2(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}


// ==== 100d68ce _EH4_CallFilterFunc

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}


// ==== 100d68e5 _EH4_TransferToHandler

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x100d68fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 100d68fe _EH4_GlobalUnwind

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100d6913,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 100d6918 _EH4_LocalUnwind

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}


// ==== 100d692f FUN_100d692f

undefined4 __cdecl FUN_100d692f(undefined4 param_1,undefined4 param_2,uint param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 local_24 [8];
  byte local_1c;
  undefined1 local_18 [4];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = __encoded_null();
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  if (DAT_101ad918 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_101ad918 = FUN_100c8e0e((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_101ad91c = FUN_100c8e0e((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_101ad920 = FUN_100c8e0e((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_101ad928 = FUN_100c8e0e((int)pFVar1);
      if (DAT_101ad928 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_101ad924 = FUN_100c8e0e((int)pFVar1);
      }
    }
  }
  if ((DAT_101ad924 != local_c) && (DAT_101ad928 != local_c)) {
    pcVar3 = (code *)FUN_100c8e85(DAT_101ad924);
    pcVar4 = (code *)FUN_100c8e85(DAT_101ad928);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar2 = (*pcVar3)(), iVar2 == 0 ||
         (iVar2 = (*pcVar4)(iVar2,1,local_24,0xc,local_18), iVar2 == 0)) || ((local_1c & 1) == 0))))
    {
      iVar2 = __get_winmajor(&local_14);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_14 < 4) {
        param_3 = param_3 | 0x40000;
      }
      else {
        param_3 = param_3 | 0x200000;
      }
      goto LAB_100d6ac5;
    }
  }
  if ((((DAT_101ad91c != local_c) &&
       (pcVar3 = (code *)FUN_100c8e85(DAT_101ad91c), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_101ad920 != local_c &&
      (pcVar3 = (code *)FUN_100c8e85(DAT_101ad920), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_100d6ac5:
  pcVar3 = (code *)FUN_100c8e85(DAT_101ad918);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}


// ==== 100d6aec __set_error_mode

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_101acdd8;
      DAT_101acdd8 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_101acdd8;
    }
  }
  pDVar2 = FUN_100ce0fa();
  *pDVar2 = 0x16;
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 100d6b32 __crtGetLocaleInfoW_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoW_stat(struct localeinfo_struct *,unsigned long,unsigned
   long,wchar_t *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoW_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          int param_6)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPSTR lpLCData;
  
  uVar1 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  if (DAT_101ad92c == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_101ad92c = 2;
      }
      goto LAB_100d6b84;
    }
    DAT_101ad92c = 1;
  }
  else {
LAB_100d6b84:
    if (DAT_101ad92c != 1) {
      if ((DAT_101ad92c == 2) || (DAT_101ad92c == 0)) {
        if (param_6 == 0) {
          param_6 = param_1->locinfo->lc_codepage;
        }
        cchData = GetLocaleInfoA(param_2,param_3,(LPSTR)0x0,0);
        if (cchData != 0) {
          if (((int)cchData < 1) || (0xffffffe0 / cchData == 0)) {
            lpLCData = (LPSTR)0x0;
          }
          else if (cchData + 8 < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_100d6c5b;
            lpLCData = &stack0xfffffff0;
          }
          else {
            lpLCData = _malloc(cchData + 8);
            if (lpLCData != (LPSTR)0x0) {
              lpLCData[0] = -0x23;
              lpLCData[1] = -0x23;
              lpLCData[2] = '\0';
              lpLCData[3] = '\0';
              lpLCData = lpLCData + 8;
            }
          }
          if (lpLCData != (LPSTR)0x0) {
            iVar2 = GetLocaleInfoA(param_2,param_3,lpLCData,cchData);
            if (iVar2 != 0) {
              if (param_5 == 0) {
                param_5 = 0;
                param_4 = (LPWSTR)0x0;
              }
              MultiByteToWideChar(param_6,1,lpLCData,-1,param_4,param_5);
            }
            __freea(lpLCData);
          }
        }
      }
      goto LAB_100d6c5b;
    }
  }
  GetLocaleInfoW(param_2,param_3,param_4,param_5);
LAB_100d6c5b:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 100d6c6d ___crtGetLocaleInfoW

/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 2005 Release */

void __cdecl
___crtGetLocaleInfoW
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          int param_6)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetLocaleInfoW_stat(&local_14,param_2,param_3,param_4,param_5,param_6);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 100d6ca8 __crtGetLocaleInfoA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          int param_6)

{
  uint _Size;
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPWSTR lpLCData;
  
  uVar1 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  if (DAT_101ad930 == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_101ad930 = 2;
      }
      goto LAB_100d6cfa;
    }
    DAT_101ad930 = 1;
  }
  else {
LAB_100d6cfa:
    if ((DAT_101ad930 == 2) || (DAT_101ad930 == 0)) {
      GetLocaleInfoA(param_2,param_3,param_4,param_5);
      goto LAB_100d6dd3;
    }
    if (DAT_101ad930 != 1) goto LAB_100d6dd3;
  }
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchData = GetLocaleInfoW(param_2,param_3,(LPWSTR)0x0,0);
  if (cchData != 0) {
    if (((int)cchData < 1) || (0xffffffe0 / cchData < 2)) {
      lpLCData = (LPWSTR)0x0;
    }
    else {
      _Size = cchData * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_100d6dd3;
        lpLCData = (LPWSTR)&stack0xfffffff0;
      }
      else {
        lpLCData = _malloc(_Size);
        if (lpLCData != (LPWSTR)0x0) {
          lpLCData[0] = L'\xdddd';
          lpLCData[1] = L'\0';
          lpLCData = lpLCData + 4;
        }
      }
    }
    if (lpLCData != (LPWSTR)0x0) {
      iVar2 = GetLocaleInfoW(param_2,param_3,lpLCData,cchData);
      if (iVar2 != 0) {
        if (param_5 == 0) {
          param_5 = 0;
          param_4 = (LPSTR)0x0;
        }
        WideCharToMultiByte(param_6,0,lpLCData,-1,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      __freea(lpLCData);
    }
  }
LAB_100d6dd3:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 100d6de5 ___crtGetLocaleInfoA

/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  int in_stack_00000018;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtGetLocaleInfoA_stat
                    (&local_14,(ulong)_LocaleName,_LCType,_LpLCData,_CchData,in_stack_00000018);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 100d6e20 __calloc_impl

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  DWORD *pDVar1;
  int iVar2;
  uint *_Size;
  int *_Dst;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      _Dst = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_101aea40 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_101aea2c)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_100d6f1c();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_100d6ed1;
          }
        }
        else {
LAB_100d6ed1:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_101ad2b4,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_101ad8c8 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0xc;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}


// ==== 100d6f1c FUN_100d6f1c

void FUN_100d6f1c(void)

{
  FUN_100cf46a(4);
  return;
}


// ==== 100d6f3e _realloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  void *this;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_101aea40 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_100d7117;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_100d182c(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_101aea2c) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_100d182c(this,(int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_101ad2b4,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_100d7082();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_101ad2b4,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_101ad8c8 == 0) {
        pDVar4 = FUN_100ce0fa();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_100d7144;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_100ce0fa();
    if (local_24 != (uint *)0x0) goto LAB_100d7123;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_100d7117;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_101ad2b4,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_101ad8c8 == 0) {
        pDVar4 = FUN_100ce0fa();
LAB_100d7144:
        DVar5 = GetLastError();
        DVar5 = FUN_100ce0bf(DVar5);
        *pDVar4 = DVar5;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_100ce0fa();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_100ce0bf(DVar5);
  *pDVar4 = DVar5;
  return (void *)0x0;
LAB_100d7117:
  __callnewh(_NewSize);
  pDVar4 = FUN_100ce0fa();
LAB_100d7123:
  *pDVar4 = 0xc;
  return (void *)0x0;
}


// ==== 100d7082 FUN_100d7082

void FUN_100d7082(void)

{
  FUN_100cf46a(4);
  return;
}


// ==== 100d7159 x_ismbbtype_l

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_100d719b;
  }
  iVar2 = 1;
LAB_100d719b:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}


// ==== 100d71aa __ismbblead

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}


// ==== 100d71bd FUN_100d71bd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d71bd(void)

{
  _DAT_101ada04 = 0;
  return;
}


// ==== 100d71c5 __frnd

/* Library Function - Single Match
    __frnd
   
   Library: Visual Studio 2005 Release */

float10 __cdecl __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}


// ==== 100d71d6 __crtGetStringTypeW_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeW_stat(struct localeinfo_struct *,unsigned long,wchar_t const
   *,int,unsigned short *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeW_stat
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  LPWORD pWVar1;
  uint _Size;
  LPSTR lpSrcStr;
  BOOL BVar2;
  DWORD DVar3;
  uint _Size_00;
  undefined4 *puVar4;
  LPWORD lpCharType;
  int iVar5;
  LPSTR local_c;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_100d73e8;
  if (DAT_101ad934 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_101ad934 = 2;
      }
      goto LAB_100d723d;
    }
    DAT_101ad934 = 1;
  }
  else {
LAB_100d723d:
    if (DAT_101ad934 != 1) {
      if ((DAT_101ad934 != 2) && (DAT_101ad934 != 0)) goto LAB_100d73e8;
      if (param_7 == 0) {
        param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
      }
      if (param_6 == 0) {
        param_6 = param_1->locinfo->lc_codepage;
      }
      iVar5 = ___ansicp(param_7);
      if ((param_6 != iVar5) && (iVar5 != -1)) {
        param_6 = iVar5;
      }
      _Size_00 = WideCharToMultiByte(param_6,0,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      if (_Size_00 == 0) goto LAB_100d73e8;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_100d72ee:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_100d72ee;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_100d73e8;
      _memset(local_c,0,_Size_00);
      iVar5 = WideCharToMultiByte(param_6,0,param_3,param_4,local_c,_Size_00,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (iVar5 != 0) {
        if (((int)(_Size_00 + 1) < 1) || (0x7ffffff0 < _Size_00 + 1)) {
          lpCharType = (LPWORD)0x0;
        }
        else {
          _Size = _Size_00 * 2 + 10;
          if (_Size < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_100d73dc;
            lpCharType = (LPWORD)&stack0xffffffe8;
          }
          else {
            lpCharType = _malloc(_Size);
            if (lpCharType != (LPWORD)0x0) {
              lpCharType[0] = 0xdddd;
              lpCharType[1] = 0;
              lpCharType = lpCharType + 4;
            }
          }
        }
        lpSrcStr = local_c;
        if (lpCharType != (LPWORD)0x0) {
          if (param_7 == 0) {
            param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
          }
          pWVar1 = lpCharType + param_4;
          *pWVar1 = 0xffff;
          pWVar1[-1] = 0xffff;
          GetStringTypeA(param_7,param_2,lpSrcStr,_Size_00,lpCharType);
          if ((pWVar1[-1] != 0xffff) && (*pWVar1 == 0xffff)) {
            _memmove(param_5,lpCharType,param_4 * 2);
          }
          __freea(lpCharType);
        }
      }
LAB_100d73dc:
      __freea(local_c);
      goto LAB_100d73e8;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_100d73e8:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


// ==== 100d73fa ___crtGetStringTypeW

/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 2005 Release */

void __cdecl
___crtGetStringTypeW
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetStringTypeW_stat(&local_14,param_2,param_3,param_4,param_5,param_6,param_7);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 100d7438 __lseeki64_nolock

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_100ce0fa();
    *pDVar2 = 9;
LAB_100d7467:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_100ce120(DVar4);
        goto LAB_100d7467;
      }
    }
    pbVar1 = (byte *)((&DAT_101aea60)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}


// ==== 100d74bb __lseeki64

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  DWORD *pDVar1;
  int iVar2;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_100ce10d();
    *pDVar1 = 0;
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_101aea44)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_101aea60)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        pDVar1 = FUN_100ce10d();
        *pDVar1 = 0;
        pDVar1 = FUN_100ce0fa();
        *pDVar1 = 9;
        FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_101aea60)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_100ce0fa();
          *pDVar1 = 9;
          pDVar1 = FUN_100ce10d();
          *pDVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_100d75ca();
      }
      goto LAB_100d75c4;
    }
    pDVar1 = FUN_100ce10d();
    *pDVar1 = 0;
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_100d75c4:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}


// ==== 100d75ca FUN_100d75ca

void FUN_100d75ca(void)

{
  int unaff_EBP;
  
  FUN_100d8af6(*(uint *)(unaff_EBP + 8));
  return;
}


// ==== 100d75d4 __getbuf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_101ad8cc = _DAT_101ad8cc + 1;
  pcVar1 = __malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}


// ==== 100d7618 __isatty

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  DWORD *pDVar1;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
    return 0;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_101aea44)) {
    return *(byte *)((&DAT_101aea60)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) & 0x40;
  }
  pDVar1 = FUN_100ce0fa();
  *pDVar1 = 9;
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}


// ==== 100d7676 FUN_100d7676

bool FUN_100d7676(void)

{
  return DAT_101ad938 == (DAT_101281d0 | 1);
}


// ==== 100d768c __wctomb_s_l

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_100d76ae:
    DVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      pDVar2 = FUN_100ce0fa();
      *pDVar2 = 0x16;
      FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_100d773e;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_100d7775:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_100d76ae;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar3 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar3 == 0) {
        DVar1 = GetLastError();
        if (DVar1 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_100d773e:
          pDVar2 = FUN_100ce0fa();
          *pDVar2 = 0x22;
          FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          if (local_8 == '\0') {
            return 0x22;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar3;
        }
        goto LAB_100d7775;
      }
    }
    pDVar2 = FUN_100ce0fa();
    *pDVar2 = 0x2a;
    pDVar2 = FUN_100ce0fa();
    DVar1 = *pDVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return DVar1;
}


// ==== 100d77eb _wctomb_s

/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}


// ==== 100d7810 __aulldvrm

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 100d78a5 __strnicmp_l

/* Library Function - Single Match
    __strnicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  DWORD *pDVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      pDVar1 = FUN_100ce0fa();
      *pDVar1 = 0x16;
      FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
    else if (_MaxCount < 0x80000000) {
      if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      }
      else {
        do {
          iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
          _Str1 = _Str1 + 1;
          iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
          _Str2 = _Str2 + 1;
          _MaxCount = _MaxCount - 1;
          if ((_MaxCount == 0) || (iVar2 == 0)) break;
        } while (iVar2 == iVar3);
        iVar2 = iVar2 - iVar3;
      }
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else {
      pDVar1 = FUN_100ce0fa();
      *pDVar1 = 0x16;
      FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}


// ==== 100d7995 __strnicmp

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (DAT_101acde0 == 0) {
    if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      return iVar2;
    }
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 0x16;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 100d79f1 ___ansicp

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100d7a38 ___convertcp

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2005 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_100d7bd8;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_100d7bd8;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      puVar4 = (undefined4 *)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_100d7b18:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_100d7b18;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = __calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_100d7bd8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100d7bea __ld12tod

/* Library Function - Single Match
    __ld12tod
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_100d80e9;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10129668 - 1;
    iVar4 = (int)(DAT_10129668 + ((int)DAT_10129668 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_10129668 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_100d7d1d;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_100d7d24;
LAB_100d7d1d:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_100d7d24:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_100d7d32;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_100d7d32:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_10129664 - DAT_10129668)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_10129664 < iVar12) {
        if (iVar12 < DAT_10129660) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_10129674;
          iVar2 = (int)(DAT_1012966c + ((int)DAT_1012966c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1012966c & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_1012966c + ((int)DAT_1012966c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1012966c & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_10129674 + DAT_10129660;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_100d80e9;
      }
      local_14 = DAT_10129664 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_10129668 - 1;
      iVar12 = (int)(DAT_10129668 + ((int)DAT_10129668 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_10129668 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_100d7ed5;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_100d7ed5:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1012966c + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_100d80e9:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1012966c & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_10129670 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_10129670 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 100d812c __ld12tof

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  uint uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  byte bVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  _LDBL12 *p_Var8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  uint local_24;
  float local_20;
  uint local_1c [5];
  _LDBL12 *local_8;
  
  local_1c[1] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar9 = *(uint *)(_Ifp->ld12 + 6);
  local_24 = uVar9;
  fVar12 = *(float *)(_Ifp->ld12 + 2);
  uVar10 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar11 = uVar10 - 0x3fff;
  uVar1 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_20 = fVar12;
  local_1c[0] = uVar1;
  if (iVar11 == -0x3fff) {
    iVar11 = 0;
    iVar2 = 0;
    do {
      if ((&local_24)[iVar2] != 0) {
        local_24 = 0;
        local_20 = 0.0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_100d862b;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_10129680 - 1;
    iVar2 = (int)(DAT_10129680 + ((int)DAT_10129680 >> 0x1f & 0x1fU)) >> 5;
    uVar7 = DAT_10129680 & 0x8000001f;
    local_1c[2] = iVar11;
    local_1c[3] = iVar2;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
    }
    puVar6 = &local_24 + iVar2;
    bVar4 = (byte)(0x1f - uVar7);
    local_1c[4] = 0x1f - uVar7;
    if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
      uVar7 = (&local_24)[iVar2] & ~(-1 << (bVar4 & 0x1f));
      while( true ) {
        if (uVar7 != 0) {
          iVar2 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var8 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar5 = &local_24 + iVar2;
          _Ifp = (_LDBL12 *)(p_Var8->ld12 + *puVar5);
          if (_Ifp < (_LDBL12 *)*puVar5) goto LAB_100d825f;
          bVar14 = _Ifp < p_Var8;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_100d8266;
LAB_100d825f:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_100d8266:
              iVar2 = iVar2 + -1;
              *puVar5 = (uint)_Ifp;
              if ((iVar2 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_100d8274;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar5 = &local_24 + iVar2;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar5)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar5);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar2 = iVar2 + 1;
        if (2 < iVar2) break;
        uVar7 = (&local_24)[iVar2];
      }
    }
LAB_100d8274:
    *puVar6 = *puVar6 & -1 << ((byte)local_1c[4] & 0x1f);
    iVar2 = local_1c[3] + 1;
    if (iVar2 < 3) {
      puVar6 = &local_24 + iVar2;
      for (iVar13 = 3 - iVar2; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar11 = uVar10 - 0x3ffe;
    }
    if (iVar11 < (int)(DAT_1012967c - DAT_10129680)) {
      local_24 = 0;
      local_20 = 0.0;
    }
    else {
      if (DAT_1012967c < iVar11) {
        if (iVar11 < DAT_10129678) {
          local_24 = local_24 & 0x7fffffff;
          iVar11 = iVar11 + DAT_1012968c;
          iVar2 = (int)(DAT_10129684 + ((int)DAT_10129684 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_10129684 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            local_1c[2] = (&local_24)[(int)_Ifp] & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = (&local_24)[(int)_Ifp] >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar13 = 2;
          puVar6 = local_1c + -iVar2;
          do {
            if (iVar13 < iVar2) {
              (&local_24)[iVar13] = 0;
            }
            else {
              (&local_24)[iVar13] = *puVar6;
            }
            iVar13 = iVar13 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar13);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_20 = 0.0;
          local_1c[0] = 0;
          local_24 = 0x80000000;
          iVar11 = (int)(DAT_10129684 + ((int)DAT_10129684 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_10129684 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            uVar1 = (&local_24)[(int)_Ifp];
            local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar6 = local_1c + -iVar11;
          do {
            if (iVar2 < iVar11) {
              (&local_24)[iVar2] = 0;
            }
            else {
              (&local_24)[iVar2] = *puVar6;
            }
            iVar2 = iVar2 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar2);
          iVar11 = DAT_1012968c + DAT_10129678;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_100d862b;
      }
      local_1c[2] = DAT_1012967c - local_1c[2];
      local_24 = uVar9;
      local_20 = fVar12;
      iVar11 = (int)(local_1c[2] + ((int)local_1c[2] >> 0x1f & 0x1fU)) >> 5;
      uVar9 = local_1c[2] & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_10129680 - 1;
      iVar11 = (int)(DAT_10129680 + ((int)DAT_10129680 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = DAT_10129680 & 0x8000001f;
      local_1c[3] = iVar11;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      bVar4 = (byte)(0x1f - uVar9);
      puVar6 = &local_24 + iVar11;
      local_1c[2] = 0x1f - uVar9;
      if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
        uVar9 = (&local_24)[iVar11] & ~(-1 << (bVar4 & 0x1f));
        while (uVar9 == 0) {
          iVar11 = iVar11 + 1;
          if (2 < iVar11) goto LAB_100d8417;
          uVar9 = (&local_24)[iVar11];
        }
        iVar11 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar10 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar1 = (&local_24)[iVar11];
        uVar9 = uVar1 + uVar10;
        if ((uVar9 < uVar1) || (uVar9 < uVar10)) {
          bVar14 = true;
        }
        (&local_24)[iVar11] = uVar9;
        while ((iVar11 = iVar11 + -1, -1 < iVar11 && (bVar14))) {
          uVar1 = (&local_24)[iVar11];
          uVar9 = uVar1 + 1;
          bVar14 = false;
          if ((uVar9 < uVar1) || (uVar9 == 0)) {
            bVar14 = true;
          }
          (&local_24)[iVar11] = uVar9;
        }
      }
LAB_100d8417:
      *puVar6 = *puVar6 & -1 << ((byte)local_1c[2] & 0x1f);
      iVar11 = local_1c[3] + 1;
      if (iVar11 < 3) {
        puVar6 = &local_24 + iVar11;
        for (iVar2 = 3 - iVar11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      uVar9 = DAT_10129684 + 1;
      iVar11 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = uVar9 & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
    }
    iVar11 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_100d862b:
  fVar12 = (float)(iVar11 << (0x1fU - (char)DAT_10129684 & 0x1f) |
                   -(uint)(local_1c[1] != 0) & 0x80000000 | local_24);
  if (DAT_10129688 == 0x40) {
    _F[1].f = fVar12;
    _F->f = local_20;
  }
  else if (DAT_10129688 == 0x20) {
    _F->f = fVar12;
  }
  return IVar3;
}


// ==== 100d866e ___mtold12

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2005 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  sVar6 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = *param_3;
    uVar9 = param_3[1];
    uVar10 = *param_3;
    uVar1 = param_3[1];
    uVar11 = param_3[2];
    bVar4 = false;
    uVar8 = (param_3[2] * 2 | uVar9 >> 0x1f) * 2 | (uVar9 & 0x7fffffff) >> 0x1e;
    uVar3 = uVar2 * 4;
    uVar9 = (uVar9 * 2 | uVar2 >> 0x1f) * 2 | (uVar2 & 0x7fffffff) >> 0x1e;
    uVar2 = uVar3 + uVar10;
    *param_3 = uVar3;
    param_3[1] = uVar9;
    param_3[2] = uVar8;
    if ((uVar2 < uVar3) || (uVar2 < uVar10)) {
      bVar4 = true;
    }
    bVar5 = false;
    *param_3 = uVar2;
    if (bVar4) {
      uVar10 = uVar9 + 1;
      if ((uVar10 < uVar9) || (uVar10 == 0)) {
        bVar5 = true;
      }
      param_3[1] = uVar10;
      if (bVar5) {
        param_3[2] = uVar8 + 1;
      }
    }
    uVar10 = param_3[1] + uVar1;
    bVar4 = false;
    if ((uVar10 < param_3[1]) || (uVar10 < uVar1)) {
      bVar4 = true;
    }
    param_3[1] = uVar10;
    if (bVar4) {
      param_3[2] = param_3[2] + 1;
    }
    param_3[2] = param_3[2] + uVar11;
    bVar4 = false;
    uVar1 = uVar2 * 2;
    uVar11 = uVar10 * 2 | uVar2 >> 0x1f;
    uVar10 = param_3[2] * 2 | uVar10 >> 0x1f;
    *param_3 = uVar1;
    param_3[1] = uVar11;
    param_3[2] = uVar10;
    uVar2 = uVar1 + (int)*param_1;
    if ((uVar2 < uVar1) || (uVar2 < (uint)(int)*param_1)) {
      bVar4 = true;
    }
    *param_3 = uVar2;
    if (bVar4) {
      uVar2 = uVar11 + 1;
      bVar4 = false;
      if ((uVar2 < uVar11) || (uVar2 == 0)) {
        bVar4 = true;
      }
      param_3[1] = uVar2;
      if (bVar4) {
        param_3[2] = uVar10 + 1;
      }
    }
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    sVar6 = sVar6 + -0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
  }
  uVar2 = param_3[2];
  while ((uVar2 & 0x8000) == 0) {
    uVar10 = *param_3;
    uVar1 = param_3[1];
    sVar6 = sVar6 + -1;
    *param_3 = uVar10 * 2;
    uVar2 = param_3[2] * 2;
    param_3[1] = uVar1 * 2 | uVar10 >> 0x1f;
    param_3[2] = uVar2 | uVar1 >> 0x1f;
  }
  *(short *)((int)param_3 + 10) = sVar6;
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100d883a __mbtowc_l

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  DWORD *pDVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale != (wchar_t *)0x0) {
        iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
        if (iVar2 == 0) {
          iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar2 != 0) goto LAB_100d8885;
        }
        else {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,
                                           _DstCh,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
             (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
            pwVar1 = (local_14.locinfo)->locale_name[3];
            if (local_8 == '\0') {
              return (int)pwVar1;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return (int)pwVar1;
          }
        }
        pDVar3 = FUN_100ce0fa();
        *pDVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_100d8885:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}


// ==== 100d894d _mbtowc

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2005 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}


// ==== 100d8964 __free_osfhnd

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_101aea44)) {
    iVar3 = (param_1 & 0x1fU) * 0x38;
    piVar1 = (int *)((&DAT_101aea60)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_101acddc == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100d89c2;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100d89c2:
      *(undefined4 *)(iVar3 + (&DAT_101aea60)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_100ce0fa();
  *pDVar2 = 9;
  pDVar2 = FUN_100ce10d();
  *pDVar2 = 0;
  return -1;
}


// ==== 100d89e5 __get_osfhandle

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  DWORD *pDVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_100ce10d();
    *pDVar1 = 0;
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_101aea44)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_101aea60)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  pDVar1 = FUN_100ce10d();
  *pDVar1 = 0;
  pDVar1 = FUN_100ce0fa();
  *pDVar1 = 9;
  FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 100d8a56 ___lock_fhandle

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2005 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_101aea60)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_100d8aed();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_101aea60)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}


// ==== 100d8aed FUN_100d8aed

void FUN_100d8aed(void)

{
  FUN_100cf46a(10);
  return;
}


// ==== 100d8af6 FUN_100d8af6

void __cdecl FUN_100d8af6(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_101aea60)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x38));
  return;
}


// ==== 100d8b18 FUN_100d8b18

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_100d8b18(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar4 = 3; iVar4 < DAT_101aea20; iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 4;
    if (*(int *)(DAT_101ada08 + iVar3) != 0) {
      pFVar1 = *(FILE **)(DAT_101ada08 + iVar3);
      if ((pFVar1->_flag & 0x83) != 0) {
        iVar2 = FUN_100c6de7(pFVar1);
        if (iVar2 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar4) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_101ada08) + 0x20));
        _free(*(void **)(iVar3 + DAT_101ada08));
        *(undefined4 *)(iVar3 + DAT_101ada08) = 0;
      }
    }
  }
  FUN_100d8bae();
  return local_20;
}


// ==== 100d8bae FUN_100d8bae

void FUN_100d8bae(void)

{
  FUN_100cf46a(1);
  return;
}


// ==== 100d8bb7 FUN_100d8bb7

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

DWORD __cdecl FUN_100d8bb7(uint param_1)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  DWORD local_20;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_101aea44)) {
      iVar3 = (param_1 & 0x1f) * 0x38;
      if ((*(byte *)(iVar3 + 4 + (&DAT_101aea60)[(int)param_1 >> 5]) & 1) != 0) {
        ___lock_fhandle(param_1);
        if ((*(byte *)(iVar3 + 4 + (&DAT_101aea60)[(int)param_1 >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(param_1);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_100d8c79;
          pDVar1 = FUN_100ce10d();
          *pDVar1 = local_20;
        }
        pDVar1 = FUN_100ce0fa();
        *pDVar1 = 9;
        local_20 = 0xffffffff;
LAB_100d8c79:
        FUN_100d8c8e();
        return local_20;
      }
    }
    pDVar1 = FUN_100ce0fa();
    *pDVar1 = 9;
    FUN_100ce09b((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0xffffffff;
}


// ==== 100d8c8e FUN_100d8c8e

void FUN_100d8c8e(void)

{
  int unaff_EBP;
  
  FUN_100d8af6(*(uint *)(unaff_EBP + 8));
  return;
}


// ==== 100d8c98 __putwch_nolock

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  wint_t wVar1;
  BOOL BVar2;
  DWORD DVar3;
  UINT CodePage;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  if (DAT_1012994c != 0) {
    if (DAT_101299c4 == &DAT_fffffffe) {
      ___initconout();
    }
    if (DAT_101299c4 == (undefined1 *)0xffffffff) goto LAB_100d8d41;
    BVar2 = WriteConsoleW(DAT_101299c4,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_1012994c = 1;
      goto LAB_100d8d41;
    }
    if ((DAT_1012994c != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_100d8d41;
    DAT_1012994c = 0;
  }
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 5;
  lpMultiByteStr = local_10;
  cchWideChar = 1;
  lpWideCharStr = &_WCh;
  DVar3 = 0;
  CodePage = GetConsoleOutputCP();
  DVar3 = WideCharToMultiByte(CodePage,DVar3,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  if (DAT_101299c4 != (undefined1 *)0xffffffff) {
    WriteConsoleA(DAT_101299c4,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_100d8d41:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}


// ==== 100d8d5a FUN_100d8d5a

/* WARNING: Removing unreachable block (ram,0x100d924b) */
/* WARNING: Removing unreachable block (ram,0x100d9255) */
/* WARNING: Removing unreachable block (ram,0x100d925a) */

void __cdecl
FUN_100d8d5a(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  errno_t eVar6;
  short *psVar7;
  ushort uVar8;
  ushort uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ushort uVar23;
  ushort uVar24;
  char *pcVar25;
  undefined *local_6c;
  ushort *local_60;
  ushort *local_5c;
  ushort *local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  uint local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  undefined4 local_10;
  ushort local_c;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_101281d0 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10._0_2_ = (ushort)param_2;
  iVar17 = CONCAT22((ushort)local_10,uStack_12);
  local_10._2_2_ = (ushort)(param_2 >> 0x10);
  local_c = param_3;
  uVar8 = param_3 & 0x8000;
  uVar14 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (uVar8 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar14 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    goto LAB_100d95d8;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_100d8e89;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_100d8e89:
          pcVar25 = "1#QNAN";
          goto LAB_100d8e8e;
        }
        pcVar25 = "1#IND";
      }
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar25 = "1#SNAN";
LAB_100d8e8e:
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    goto LAB_100d95d8;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_10129630;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_10129790;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_100d91af;
      puVar10 = (ushort *)(local_6c + (uVar14 & 7) * 0xc);
      if (0x7fff < *puVar10) {
        local_40 = (ushort)*(undefined4 *)puVar10;
        uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar10 >> 0x10);
        puVar2 = puVar10 + 4;
        uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar10 + 2);
        uStack_3a = (ushort)((uint)*(undefined4 *)(puVar10 + 2) >> 0x10);
        puVar10 = &local_40;
        local_38 = *(int *)puVar2;
        iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
        uStack_3e._0_2_ = (undefined2)iVar1;
        uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
      }
      uVar13 = CONCAT11(bStack_19,local_1a) & 0x7fff;
      uVar23 = puVar10[5] & 0x7fff;
      local_4c = (ushort *)0x0;
      local_14 = 0;
      uStack_13 = 0;
      uStack_12 = 0;
      local_10._0_2_ = 0;
      iVar11 = 0;
      local_10._2_2_ = 0;
      local_c = 0;
      iVar5 = 0;
      uStack_a = 0;
      uVar9 = (puVar10[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
      uVar24 = uVar23 + uVar13;
      iVar17 = 0;
      iVar3 = 0;
      if (((uVar13 < 0x7fff) && (iVar17 = 0, iVar3 = 0, uVar23 < 0x7fff)) &&
         (iVar17 = iVar11, iVar3 = iVar5, uVar24 < 0xbffe)) {
        if (uVar24 < 0x3fc0) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else if (((uVar13 == 0) &&
                 (uVar24 = uVar24 + 1,
                 (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
                ((CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0 &&
                 (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)))) {
          local_1a = 0;
          bStack_19 = 0;
        }
        else if ((((uVar23 == 0) &&
                  (uVar24 = uVar24 + 1, (*(uint *)(puVar10 + 4) & 0x7fffffff) == 0)) &&
                 (*(int *)(puVar10 + 2) == 0)) && (*(int *)puVar10 == 0)) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else {
          psVar7 = (short *)&local_10;
          local_60 = (ushort *)0x0;
          local_44 = 5;
          do {
            local_54 = local_44;
            if (0 < local_44) {
              local_5c = (ushort *)((int)&local_24 + (int)local_60 * 2);
              local_58 = puVar10 + 4;
              do {
                bVar4 = false;
                uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_5c * (uint)*local_58;
                if ((uVar16 < *(uint *)(psVar7 + -2)) ||
                   (uVar16 < (uint)*local_5c * (uint)*local_58)) {
                  bVar4 = true;
                }
                *(uint *)(psVar7 + -2) = uVar16;
                if (bVar4) {
                  *psVar7 = *psVar7 + 1;
                }
                local_5c = local_5c + 1;
                local_58 = local_58 + -1;
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            psVar7 = psVar7 + 1;
            local_60 = (ushort *)((int)local_60 + 1);
            local_44 = local_44 + -1;
          } while (0 < local_44);
          uVar24 = uVar24 + 0xc002;
          if ((short)uVar24 < 1) {
LAB_100d90d3:
            uVar24 = uVar24 - 1;
            if ((short)uVar24 < 0) {
              local_48 = (uint)(ushort)-uVar24;
              uVar24 = 0;
              do {
                if ((local_14 & 1) != 0) {
                  local_4c = (ushort *)((int)local_4c + 1);
                }
                iVar20 = CONCAT22(uStack_a,local_c);
                uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
                iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
                local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
                uStack_a = uStack_a >> 1;
                local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
                uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
                local_48 = local_48 - 1;
                local_10._0_2_ = (ushort)(uVar16 >> 1);
                local_14 = (byte)uVar12;
                uStack_13 = (undefined1)(uVar12 >> 8);
              } while (local_48 != 0);
              if (local_4c != (ushort *)0x0) {
                local_14 = local_14 | 1;
              }
            }
          }
          else {
            do {
              uVar13 = uStack_12;
              if ((uStack_a & 0x8000) != 0) break;
              iVar17 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
              local_14 = (byte)iVar17;
              uStack_13 = (undefined1)((uint)iVar17 >> 8);
              uStack_12 = (ushort)((uint)iVar17 >> 0x10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
              local_10._0_2_ = (ushort)iVar17 | uVar13 >> 0xf;
              iVar20 = CONCAT22(uStack_a,local_c) * 2;
              local_c = (ushort)iVar20 | local_10._2_2_ >> 0xf;
              uVar24 = uVar24 - 1;
              local_10._2_2_ = (ushort)((uint)iVar17 >> 0x10);
              uStack_a = (ushort)((uint)iVar20 >> 0x10);
            } while (0 < (short)uVar24);
            if ((short)uVar24 < 1) goto LAB_100d90d3;
          }
          if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
             (iVar3 = CONCAT22(local_c,local_10._2_2_),
             iVar17 = CONCAT22((ushort)local_10,uStack_12),
             (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
            if (CONCAT22((ushort)local_10,uStack_12) == -1) {
              uStack_12 = 0;
              local_10._0_2_ = 0;
              iVar17 = 0;
              if (CONCAT22(local_c,local_10._2_2_) == -1) {
                local_10._2_2_ = 0;
                local_c = 0;
                if (uStack_a == 0xffff) {
                  uStack_a = 0x8000;
                  uVar24 = uVar24 + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
                else {
                  uStack_a = uStack_a + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
              }
              else {
                iVar3 = CONCAT22(local_c,local_10._2_2_) + 1;
                local_10._2_2_ = (ushort)iVar3;
                local_c = (ushort)((uint)iVar3 >> 0x10);
              }
            }
            else {
              iVar17 = CONCAT22((ushort)local_10,uStack_12) + 1;
              uStack_12 = (ushort)iVar17;
              local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
              iVar3 = CONCAT22(local_c,local_10._2_2_);
            }
          }
          local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
          uStack_12 = (ushort)iVar17;
          local_c = (ushort)((uint)iVar3 >> 0x10);
          local_10._2_2_ = (ushort)iVar3;
          if (0x7ffe < uVar24) goto LAB_100d9193;
          local_24._0_2_ = uStack_12;
          local_24._2_2_ = (ushort)local_10;
          uStack_20._0_2_ = local_10._2_2_;
          iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10);
          bStack_19 = (byte)(uVar24 >> 8) | (byte)(uVar9 >> 8);
          uStack_20._2_2_ = local_c;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
      }
      else {
LAB_100d9193:
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        iVar11 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        iVar20 = 0;
        uStack_1c = (ushort)iVar11;
        local_1a = (undefined1)((uint)iVar11 >> 0x10);
        bStack_19 = (byte)((uint)iVar11 >> 0x18);
      }
LAB_100d91af:
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_c = (ushort)((uint)iVar3 >> 0x10);
      local_10._2_2_ = (ushort)iVar3;
      local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
      uStack_12 = (ushort)iVar17;
      param_1 = CONCAT22(uStack_12,local_24._2_2_);
      param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
      uVar14 = (int)uVar14 >> 3;
    }
  }
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
  if (0x3ffe < (ushort)(uVar16 >> 0x10)) {
    local_50 = local_50 + 1;
    uVar16 = uVar16 >> 0x10 & 0x7fff;
    iVar17 = uVar16 + 0x3ffb;
    local_5c = (ushort *)0x0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    param_1 = param_1 & 0xffff;
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    param_2 = 0;
    local_c = 0;
    uStack_a = 0;
    if (((ushort)uVar16 < 0x7fff) && ((ushort)iVar17 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar17) {
        if (((((ushort)uVar16 == 0) &&
             (iVar17 = uVar16 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0)) &&
           (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
          goto LAB_100d9417;
        }
        local_58 = (ushort *)0x0;
        psVar7 = (short *)&local_10;
        local_44 = 5;
        do {
          local_54 = local_44;
          if (0 < local_44) {
            local_60 = &local_2c;
            local_4c = (ushort *)((int)&local_24 + (int)local_58 * 2);
            do {
              bVar4 = false;
              uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_60 * (uint)*local_4c;
              if ((uVar16 < *(uint *)(psVar7 + -2)) || (uVar16 < (uint)*local_60 * (uint)*local_4c))
              {
                bVar4 = true;
              }
              *(uint *)(psVar7 + -2) = uVar16;
              if (bVar4) {
                *psVar7 = *psVar7 + 1;
              }
              local_4c = local_4c + 1;
              local_60 = local_60 + -1;
              local_54 = local_54 + -1;
            } while (0 < local_54);
          }
          psVar7 = psVar7 + 1;
          local_58 = (ushort *)((int)local_58 + 1);
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar17 = iVar17 + 0xc002;
        if ((short)iVar17 < 1) {
LAB_100d9325:
          uVar24 = (ushort)(iVar17 + 0xffff);
          if ((short)uVar24 < 0) {
            uVar16 = -(iVar17 + 0xffff);
            uVar14 = uVar16 & 0xffff;
            uVar24 = uVar24 + (short)uVar16;
            do {
              if ((local_14 & 1) != 0) {
                local_5c = (ushort *)((int)local_5c + 1);
              }
              iVar20 = CONCAT22(uStack_a,local_c);
              uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
              local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
              uStack_a = uStack_a >> 1;
              local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
              uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
              uVar14 = uVar14 - 1;
              local_10._0_2_ = (ushort)(uVar16 >> 1);
              local_14 = (byte)uVar12;
              uStack_13 = (undefined1)(uVar12 >> 8);
            } while (uVar14 != 0);
            if (local_5c != (ushort *)0x0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar24 = uStack_12;
            if ((uStack_a & 0x8000) != 0) break;
            iVar20 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar20;
            uStack_13 = (undefined1)((uint)iVar20 >> 8);
            uStack_12 = (ushort)((uint)iVar20 >> 0x10);
            iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
            local_10._0_2_ = (ushort)iVar20 | uVar24 >> 0xf;
            iVar3 = CONCAT22(uStack_a,local_c) * 2;
            local_c = (ushort)iVar3 | local_10._2_2_ >> 0xf;
            iVar17 = iVar17 + 0xffff;
            local_10._2_2_ = (ushort)((uint)iVar20 >> 0x10);
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar17);
          uVar24 = (ushort)iVar17;
          if ((short)uVar24 < 1) goto LAB_100d9325;
        }
        iVar17 = 0;
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uStack_20 = CONCAT22(local_c,local_10._2_2_),
           iVar20 = CONCAT22((ushort)local_10,uStack_12),
           (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22((ushort)local_10,uStack_12) == -1) {
            if (CONCAT22(local_c,local_10._2_2_) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar24 = uVar24 + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
              else {
                uStack_a = uStack_a + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
            }
            else {
              uStack_20 = CONCAT22(local_c,local_10._2_2_) + 1;
              iVar20 = iVar17;
            }
          }
          else {
            iVar20 = CONCAT22((ushort)local_10,uStack_12) + 1;
            uStack_20 = CONCAT22(local_c,local_10._2_2_);
          }
        }
        local_10._0_2_ = (ushort)((uint)iVar20 >> 0x10);
        uStack_12 = (ushort)iVar20;
        local_c = (ushort)((uint)uStack_20 >> 0x10);
        local_10._2_2_ = (ushort)uStack_20;
        param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        if (uVar24 < 0x7fff) {
          bStack_19 = (byte)(uVar24 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
        else {
          iVar20 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar20;
          local_1a = (undefined1)((uint)iVar20 >> 0x10);
          bStack_19 = (byte)((uint)iVar20 >> 0x18);
          uStack_20 = iVar17;
          iVar20 = iVar17;
        }
        local_24._2_2_ = (ushort)((uint)iVar20 >> 0x10);
        local_24._0_2_ = (ushort)iVar20;
        param_1 = CONCAT22(uStack_12,local_24._2_2_);
        goto LAB_100d9417;
      }
      uStack_1c = 0;
      local_1a = 0;
      bStack_19 = 0;
    }
    else {
      iVar17 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
      uStack_1c = (ushort)iVar17;
      local_1a = (undefined1)((uint)iVar17 >> 0x10);
      bStack_19 = (byte)((uint)iVar17 >> 0x18);
    }
    local_24._0_2_ = 0;
    param_1 = 0;
    param_2 = 0;
    uStack_20 = 0;
  }
LAB_100d9417:
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    iVar17 = 8;
    do {
      uVar24 = local_24._2_2_;
      iVar3 = CONCAT22(local_24._2_2_,(ushort)local_24) << 1;
      local_24._0_2_ = (ushort)iVar3;
      local_24._2_2_ = (ushort)((uint)iVar3 >> 0x10);
      uVar16 = uStack_20 * 2;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)((uint)uStack_20 >> 0x1f);
      iVar17 = iVar17 + -1;
      uStack_20._0_2_ = (ushort)(uVar16 | uVar24 >> 0xf);
      uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
    } while (iVar17 != 0);
    if ((iVar20 < 0) && (uVar16 = -iVar20 & 0xff, uVar16 != 0)) {
      do {
        iVar20 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar12 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        iVar17 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar14;
        local_1a = (undefined1)(uVar14 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_20._2_2_ = uStack_20._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
        uVar14 = CONCAT22(local_24._2_2_,(ushort)local_24);
        local_24._2_2_ = local_24._2_2_ >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
        uVar16 = uVar16 - 1;
        uStack_20._0_2_ = (ushort)(uVar12 >> 1);
        local_24._0_2_ = (ushort)(uVar14 >> 1);
      } while (0 < (int)uVar16);
    }
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    psVar7 = param_6 + 2;
    psVar18 = psVar7;
    uVar24 = uStack_20._2_2_;
    for (iVar17 = param_4 + 1; 0 < iVar17; iVar17 = iVar17 + -1) {
      local_24._2_2_ = (ushort)(uVar16 >> 0x10);
      local_24._0_2_ = (ushort)uVar16;
      iVar1 = CONCAT22((ushort)uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar12 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar24 >> 0xf)) * 2 |
               (CONCAT22(uVar24,(ushort)uStack_20) & 0x7fffffff) >> 0x1e;
      uVar21 = (CONCAT22(uVar24,(ushort)uStack_20) * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 |
               (uVar16 & 0x7fffffff) >> 0x1e;
      uVar14 = uVar16 * 5;
      if ((uVar14 < uVar16 * 4) || (uVar22 = uVar21, uVar14 < uVar16)) {
        uVar22 = uVar21 + 1;
        bVar4 = false;
        if ((uVar22 < uVar21) || (uVar22 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar12 = uVar12 + 1;
        }
      }
      uVar21 = CONCAT22(uVar24,(ushort)uStack_20) + uVar22;
      if ((uVar21 < uVar22) || (uVar21 < CONCAT22(uVar24,(ushort)uStack_20))) {
        uVar12 = uVar12 + 1;
      }
      iVar20 = (uVar12 + local_38) * 2;
      uStack_1c = (ushort)iVar20 | (ushort)(uVar21 >> 0x1f);
      uVar16 = uVar16 * 10;
      local_1a = (undefined1)((uint)iVar20 >> 0x10);
      uStack_20._0_2_ = (ushort)(uVar21 * 2) | (ushort)(uVar14 >> 0x1f);
      *(char *)psVar18 = (char)((uint)iVar20 >> 0x18) + '0';
      psVar18 = (short *)((int)psVar18 + 1);
      uStack_20._2_2_ = (ushort)(uVar21 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uVar24;
      uVar24 = uStack_20._2_2_;
    }
    uStack_20 = CONCAT22(uVar24,(ushort)uStack_20);
    psVar19 = psVar18 + -1;
    if (*(char *)((int)psVar18 + -1) < '5') {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = (short *)((int)psVar19 + -1))
      {
      }
      if (psVar19 < psVar7) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar7 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_100d95d8;
      }
    }
    else {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = (short *)((int)psVar19 + -1))
      {
        *(char *)psVar19 = '0';
      }
      if (psVar19 < psVar7) {
        psVar19 = (short *)((int)psVar19 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar19 = (char)*psVar19 + '\x01';
    }
    cVar15 = ((char)psVar19 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar15;
    *(undefined1 *)(cVar15 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_100d95d8:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 100d9620 ___ascii_strnicmp

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_100d9671;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_100d9671:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// ==== 100d9681 ___initconout

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_101299c4 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


// ==== 100d96ce KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:00000147

// ==== 100d96f0 Unwind@100d96f0

void Unwind_100d96f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d96f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}


// ==== 100d96fc Unwind@100d96fc

void Unwind_100d96fc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x78));
  return;
}


// ==== 100d9708 Unwind@100d9708

void Unwind_100d9708(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0xb8));
  return;
}


// ==== 100d9730 Unwind@100d9730

void Unwind_100d9730(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}


// ==== 100d973c Unwind@100d973c

void Unwind_100d973c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x78));
  return;
}


// ==== 100d9748 Unwind@100d9748

void Unwind_100d9748(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0xb8));
  return;
}


// ==== 100d9770 Unwind@100d9770

void Unwind_100d9770(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 100d9790 Unwind@100d9790

void Unwind_100d9790(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d97b0 Unwind@100d97b0

void Unwind_100d97b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d97b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d97d0 Unwind@100d97d0

void Unwind_100d97d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d97d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d97f0 Unwind@100d97f0

void Unwind_100d97f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d97f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9810 Unwind@100d9810

void Unwind_100d9810(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9830 Unwind@100d9830

void Unwind_100d9830(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9850 Unwind@100d9850

void Unwind_100d9850(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9870 Unwind@100d9870

void Unwind_100d9870(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 100d9890 Unwind@100d9890

void Unwind_100d9890(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d98b0 Unwind@100d98b0

void Unwind_100d98b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d98b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d98d0 Unwind@100d98d0

void Unwind_100d98d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d98d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d98f0 Unwind@100d98f0

void Unwind_100d98f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d98f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9910 Unwind@100d9910

void Unwind_100d9910(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9930 Unwind@100d9930

void Unwind_100d9930(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9950 Unwind@100d9950

void Unwind_100d9950(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + 4) + 4));
  return;
}


// ==== 100d9970 Unwind@100d9970

void Unwind_100d9970(void)

{
  int unaff_EBP;
  
  FUN_10002a50(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9990 Unwind@100d9990

void Unwind_100d9990(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x10),0x9b8,0x80,FUN_10001e00);
  return;
}


// ==== 100d99ac Unwind@100d99ac

void Unwind_100d99ac(void)

{
  int unaff_EBP;
  
  FUN_10003060((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x4e9dc));
  return;
}


// ==== 100d99ba Unwind@100d99ba

void Unwind_100d99ba(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d99c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_char>::~TArray<unsigned_char>
            ((TArray<unsigned_char> *)(*(int *)(unaff_EBP + -0x10) + 0x4e9ec));
  return;
}


// ==== 100d99c9 Unwind@100d99c9

void Unwind_100d99c9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d99d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x4ef50));
  return;
}


// ==== 100d99f0 Unwind@100d99f0

void Unwind_100d99f0(void)

{
  int unaff_EBP;
  
  FUN_10002d70(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9a10 Unwind@100d9a10

void Unwind_100d9a10(void)

{
  int unaff_EBP;
  
  FUN_10002d70(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9a30 Unwind@100d9a30

void Unwind_100d9a30(void)

{
  int unaff_EBP;
  
  FUN_10002e00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9a50 Unwind@100d9a50

void Unwind_100d9a50(void)

{
  int unaff_EBP;
  
  FUN_10002e00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9a70 Unwind@100d9a70

void Unwind_100d9a70(void)

{
  int unaff_EBP;
  
  FUN_10002e90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9a90 Unwind@100d9a90

void Unwind_100d9a90(void)

{
  int unaff_EBP;
  
  FUN_10002e90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9ab0 Unwind@100d9ab0

void Unwind_100d9ab0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9ad0 Unwind@100d9ad0

void Unwind_100d9ad0(void)

{
  int unaff_EBP;
  
  FUN_10003290(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9af0 Unwind@100d9af0

void Unwind_100d9af0(void)

{
  int unaff_EBP;
  
  FUN_10003360(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9b10 Unwind@100d9b10

void Unwind_100d9b10(void)

{
  int unaff_EBP;
  
  FUN_10002a50(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 100d9b18 Unwind@100d9b18

void Unwind_100d9b18(void)

{
  int unaff_EBP;
  
  FUN_10003060((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x4e9dc));
  return;
}


// ==== 100d9b26 Unwind@100d9b26

void Unwind_100d9b26(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_char>::~TArray<unsigned_char>
            ((TArray<unsigned_char> *)(*(int *)(unaff_EBP + -0x10) + 0x4e9ec));
  return;
}


// ==== 100d9b35 Unwind@100d9b35

void Unwind_100d9b35(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x4ef50));
  return;
}


// ==== 100d9b50 Unwind@100d9b50

void Unwind_100d9b50(void)

{
  int unaff_EBP;
  
  FUN_100031c0(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9b70 Unwind@100d9b70

void Unwind_100d9b70(void)

{
  int unaff_EBP;
  
  FUN_100033d0(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9b90 Unwind@100d9b90

void Unwind_100d9b90(void)

{
  int unaff_EBP;
  
  FUN_100033d0(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9bb0 Unwind@100d9bb0

void Unwind_100d9bb0(void)

{
  int unaff_EBP;
  
  FUN_10003a30(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9bd0 Unwind@100d9bd0

void Unwind_100d9bd0(void)

{
  int unaff_EBP;
  
  FUN_10003990((FArray *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 100d9bdb Unwind@100d9bdb

void Unwind_100d9bdb(void)

{
  int unaff_EBP;
  
  FUN_100031c0(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9bf0 Unwind@100d9bf0

void Unwind_100d9bf0(void)

{
  int unaff_EBP;
  
  FUN_100031c0(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 100d9bf8 Unwind@100d9bf8

void Unwind_100d9bf8(void)

{
  int unaff_EBP;
  
  FUN_10003990((FArray *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 100d9c10 Unwind@100d9c10

void Unwind_100d9c10(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 4),0x20,4,FUN_10003b50);
  return;
}


// ==== 100d9c30 Unwind@100d9c30

void Unwind_100d9c30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  URenderDevice::~URenderDevice(*(URenderDevice **)(unaff_EBP + -0x14));
  return;
}


// ==== 100d9c39 Unwind@100d9c39

void Unwind_100d9c39(void)

{
  int unaff_EBP;
  
  FUN_10003420((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x40d4));
  return;
}


// ==== 100d9c47 Unwind@100d9c47

void Unwind_100d9c47(void)

{
  int unaff_EBP;
  
  FUN_10003aa0((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x40e8));
  return;
}


// ==== 100d9c55 Unwind@100d9c55

void Unwind_100d9c55(void)

{
  int unaff_EBP;
  
  FUN_10003460((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x40fc));
  return;
}


// ==== 100d9c63 Unwind@100d9c63

void Unwind_100d9c63(void)

{
  int unaff_EBP;
  
  FUN_10002b40((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x472c));
  return;
}


// ==== 100d9c71 Unwind@100d9c71

void Unwind_100d9c71(void)

{
  int unaff_EBP;
  
  FUN_10002c50((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x475c));
  return;
}


// ==== 100d9c7f Unwind@100d9c7f

void Unwind_100d9c7f(void)

{
  int unaff_EBP;
  
  FUN_100030d0(*(int *)(unaff_EBP + -0x14) + 0x47d0);
  return;
}


// ==== 100d9c8d Unwind@100d9c8d

void Unwind_100d9c8d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_char>::~TArray<unsigned_char>
            ((TArray<unsigned_char> *)(*(int *)(unaff_EBP + -0x14) + 0x53760));
  return;
}


// ==== 100d9c9c Unwind@100d9c9c

void Unwind_100d9c9c(void)

{
  int unaff_EBP;
  
  FUN_10004110(*(int *)(unaff_EBP + -0x14) + 0x58f08);
  return;
}


// ==== 100d9caa Unwind@100d9caa

void Unwind_100d9caa(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 4),0x20,4,FUN_10003b50);
  return;
}


// ==== 100d9cc0 Unwind@100d9cc0

void Unwind_100d9cc0(void)

{
  int unaff_EBP;
  
  FUN_10003360(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9cc8 Unwind@100d9cc8

void Unwind_100d9cc8(void)

{
  int unaff_EBP;
  
  FUN_10003a30(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9cd0 Unwind@100d9cd0

void Unwind_100d9cd0(void)

{
  int unaff_EBP;
  
  FUN_10003290(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9cf0 Unwind@100d9cf0

void Unwind_100d9cf0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  URenderDevice::~URenderDevice(*(URenderDevice **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9cf9 Unwind@100d9cf9

void Unwind_100d9cf9(void)

{
  int unaff_EBP;
  
  FUN_10003290(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 100d9d01 Unwind@100d9d01

void Unwind_100d9d01(void)

{
  int unaff_EBP;
  
  FUN_10003420((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x40d4));
  return;
}


// ==== 100d9d0f Unwind@100d9d0f

void Unwind_100d9d0f(void)

{
  int unaff_EBP;
  
  FUN_10003a30(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 100d9d17 Unwind@100d9d17

void Unwind_100d9d17(void)

{
  int unaff_EBP;
  
  FUN_10003aa0((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x40e8));
  return;
}


// ==== 100d9d25 Unwind@100d9d25

void Unwind_100d9d25(void)

{
  int unaff_EBP;
  
  FUN_10003360(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 100d9d2d Unwind@100d9d2d

void Unwind_100d9d2d(void)

{
  int unaff_EBP;
  
  FUN_10003460((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x40fc));
  return;
}


// ==== 100d9d3b Unwind@100d9d3b

void Unwind_100d9d3b(void)

{
  int unaff_EBP;
  
  FUN_10002b40((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x472c));
  return;
}


// ==== 100d9d49 Unwind@100d9d49

void Unwind_100d9d49(void)

{
  int unaff_EBP;
  
  FUN_10002c50((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x475c));
  return;
}


// ==== 100d9d57 Unwind@100d9d57

void Unwind_100d9d57(void)

{
  int unaff_EBP;
  
  FUN_100030d0(*(int *)(unaff_EBP + -0x10) + 0x47d0);
  return;
}


// ==== 100d9d65 Unwind@100d9d65

void Unwind_100d9d65(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_char>::~TArray<unsigned_char>
            ((TArray<unsigned_char> *)(*(int *)(unaff_EBP + -0x10) + 0x53760));
  return;
}


// ==== 100d9d74 Unwind@100d9d74

void Unwind_100d9d74(void)

{
  int unaff_EBP;
  
  FUN_10004110(*(int *)(unaff_EBP + -0x10) + 0x58f08);
  return;
}


// ==== 100d9de0 Unwind@100d9de0

void Unwind_100d9de0(void)

{
  int unaff_EBP;
  
  FUN_10005800((undefined4 *)(unaff_EBP + -0x34));
  return;
}


// ==== 100d9df2 Unwind@100d9df2

void Unwind_100d9df2(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 4),0x20,4,FUN_10003b50);
  return;
}


// ==== 100d9e20 Unwind@100d9e20

void Unwind_100d9e20(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9e29 Unwind@100d9e29

void Unwind_100d9e29(void)

{
  int unaff_EBP;
  
  FUN_10002d70(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9e40 Unwind@100d9e40

void Unwind_100d9e40(void)

{
  int unaff_EBP;
  
  FUN_100031c0(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 100d9e48 Unwind@100d9e48

void Unwind_100d9e48(void)

{
  int unaff_EBP;
  
  FUN_10003990((FArray *)(*(int *)(unaff_EBP + -0x14) + 0xc));
  return;
}


// ==== 100d9e60 Unwind@100d9e60

void Unwind_100d9e60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9e69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xdc4));
  return;
}


// ==== 100d9e6f Unwind@100d9e6f

void Unwind_100d9e6f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xdd0));
  return;
}


// ==== 100d9e7e Unwind@100d9e7e

void Unwind_100d9e7e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMaterialProperty::~FMaterialProperty((FMaterialProperty *)(*(int *)(unaff_EBP + -0x10) + 0xde8));
  return;
}


// ==== 100d9e97 Unwind@100d9e97

void Unwind_100d9e97(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x34));
  return;
}


// ==== 100d9ea0 Unwind@100d9ea0

void Unwind_100d9ea0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x28));
  return;
}


// ==== 100d9ea9 Unwind@100d9ea9

void Unwind_100d9ea9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x1c));
  return;
}


// ==== 100d9eb2 Unwind@100d9eb2

void Unwind_100d9eb2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9eb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x10));
  return;
}


// ==== 100d9ebb Unwind@100d9ebb

void Unwind_100d9ebb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x148));
  return;
}


// ==== 100d9ec7 Unwind@100d9ec7

void Unwind_100d9ec7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x114));
  return;
}


// ==== 100d9ed3 Unwind@100d9ed3

void Unwind_100d9ed3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x13c));
  return;
}


// ==== 100d9edf Unwind@100d9edf

void Unwind_100d9edf(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x130));
  return;
}


// ==== 100d9eeb Unwind@100d9eeb

void Unwind_100d9eeb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x124));
  return;
}


// ==== 100d9ef7 Unwind@100d9ef7

void Unwind_100d9ef7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9efd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x124));
  return;
}


// ==== 100d9f03 Unwind@100d9f03

void Unwind_100d9f03(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x124));
  return;
}


// ==== 100d9f0f Unwind@100d9f0f

void Unwind_100d9f0f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x124));
  return;
}


// ==== 100d9f1b Unwind@100d9f1b

void Unwind_100d9f1b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x124));
  return;
}


// ==== 100d9f27 Unwind@100d9f27

void Unwind_100d9f27(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x124));
  return;
}


// ==== 100d9f33 Unwind@100d9f33

void Unwind_100d9f33(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x124));
  return;
}


// ==== 100d9f3f Unwind@100d9f3f

void Unwind_100d9f3f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x124));
  return;
}


// ==== 100d9f4b Unwind@100d9f4b

void Unwind_100d9f4b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x124));
  return;
}


// ==== 100d9f57 Unwind@100d9f57

void Unwind_100d9f57(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100d9f60 Unwind@100d9f60

void Unwind_100d9f60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x84));
  return;
}


// ==== 100d9f6c Unwind@100d9f6c

void Unwind_100d9f6c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xe4));
  return;
}


// ==== 100d9f78 Unwind@100d9f78

void Unwind_100d9f78(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 100d9f81 Unwind@100d9f81

void Unwind_100d9f81(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xcc));
  return;
}


// ==== 100d9f8d Unwind@100d9f8d

void Unwind_100d9f8d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x6c));
  return;
}


// ==== 100d9f96 Unwind@100d9f96

void Unwind_100d9f96(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xb4));
  return;
}


// ==== 100d9fa2 Unwind@100d9fa2

void Unwind_100d9fa2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x108));
  return;
}


// ==== 100d9fae Unwind@100d9fae

void Unwind_100d9fae(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x9c));
  return;
}


// ==== 100d9fba Unwind@100d9fba

void Unwind_100d9fba(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 100d9fc3 Unwind@100d9fc3

void Unwind_100d9fc3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xfc));
  return;
}


// ==== 100d9fcf Unwind@100d9fcf

void Unwind_100d9fcf(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xf0));
  return;
}


// ==== 100d9fdb Unwind@100d9fdb

void Unwind_100d9fdb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xd8));
  return;
}


// ==== 100d9fe7 Unwind@100d9fe7

void Unwind_100d9fe7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xc0));
  return;
}


// ==== 100d9ff3 Unwind@100d9ff3

void Unwind_100d9ff3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100d9ff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xa8));
  return;
}


// ==== 100d9fff Unwind@100d9fff

void Unwind_100d9fff(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x90));
  return;
}


// ==== 100da00b Unwind@100da00b

void Unwind_100da00b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da00e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x78));
  return;
}


// ==== 100da014 Unwind@100da014

void Unwind_100da014(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x60));
  return;
}


// ==== 100da01d Unwind@100da01d

void Unwind_100da01d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 100da026 Unwind@100da026

void Unwind_100da026(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 100da02f Unwind@100da02f

void Unwind_100da02f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 100da038 Unwind@100da038

void Unwind_100da038(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x118) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x118) = *(uint *)(unaff_EBP + -0x118) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x100da051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 100da062 Unwind@100da062

void Unwind_100da062(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x58) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x58) = *(uint *)(unaff_EBP + -0x58) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x100da075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 100da07c Unwind@100da07c

void Unwind_100da07c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da07f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100da085 Unwind@100da085

void Unwind_100da085(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 100da08e Unwind@100da08e

void Unwind_100da08e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 100da097 Unwind@100da097

void Unwind_100da097(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da09a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 100da0a0 Unwind@100da0a0

void Unwind_100da0a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 100da0a9 Unwind@100da0a9

void Unwind_100da0a9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 100da0b2 Unwind@100da0b2

void Unwind_100da0b2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da0b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 100da0c5 Unwind@100da0c5

void Unwind_100da0c5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da0cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xac));
  return;
}


// ==== 100da0d1 Unwind@100da0d1

void Unwind_100da0d1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xb8));
  return;
}


// ==== 100da0dd Unwind@100da0dd

void Unwind_100da0dd(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xa0) = *(uint *)(unaff_EBP + -0xa0) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x100da0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 100da0fd Unwind@100da0fd

void Unwind_100da0fd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100da106 Unwind@100da106

void Unwind_100da106(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x84));
  return;
}


// ==== 100da112 Unwind@100da112

void Unwind_100da112(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 100da11b Unwind@100da11b

void Unwind_100da11b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da11e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x6c));
  return;
}


// ==== 100da124 Unwind@100da124

void Unwind_100da124(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da12a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x9c));
  return;
}


// ==== 100da130 Unwind@100da130

void Unwind_100da130(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 100da139 Unwind@100da139

void Unwind_100da139(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x90));
  return;
}


// ==== 100da145 Unwind@100da145

void Unwind_100da145(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x78));
  return;
}


// ==== 100da14e Unwind@100da14e

void Unwind_100da14e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x60));
  return;
}


// ==== 100da157 Unwind@100da157

void Unwind_100da157(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da15a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 100da160 Unwind@100da160

void Unwind_100da160(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 100da169 Unwind@100da169

void Unwind_100da169(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 100da17c Unwind@100da17c

void Unwind_100da17c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x74) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x74) = *(uint *)(unaff_EBP + -0x74) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x100da18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 100da196 Unwind@100da196

void Unwind_100da196(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 100da19f Unwind@100da19f

void Unwind_100da19f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 100da1a8 Unwind@100da1a8

void Unwind_100da1a8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x60));
  return;
}


// ==== 100da1b1 Unwind@100da1b1

void Unwind_100da1b1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 100da1ba Unwind@100da1ba

void Unwind_100da1ba(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 100da1c3 Unwind@100da1c3

void Unwind_100da1c3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100da1cc Unwind@100da1cc

void Unwind_100da1cc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x6c));
  return;
}


// ==== 100da1d5 Unwind@100da1d5

void Unwind_100da1d5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x10));
  return;
}


// ==== 100da1de Unwind@100da1de

void Unwind_100da1de(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0xc));
  return;
}


// ==== 100da1e7 Unwind@100da1e7

void Unwind_100da1e7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 100da1f0 Unwind@100da1f0

void Unwind_100da1f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x70));
  return;
}


// ==== 100da1f9 Unwind@100da1f9

void Unwind_100da1f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 100da202 Unwind@100da202

void Unwind_100da202(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x10));
  return;
}


// ==== 100da20b Unwind@100da20b

void Unwind_100da20b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da20e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0xc));
  return;
}


// ==== 100da214 Unwind@100da214

void Unwind_100da214(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 100da21d Unwind@100da21d

void Unwind_100da21d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x70));
  return;
}


// ==== 100da226 Unwind@100da226

void Unwind_100da226(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 100da22f Unwind@100da22f

void Unwind_100da22f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x10));
  return;
}


// ==== 100da238 Unwind@100da238

void Unwind_100da238(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da23b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0xc));
  return;
}


// ==== 100da241 Unwind@100da241

void Unwind_100da241(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 100da24a Unwind@100da24a

void Unwind_100da24a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x70));
  return;
}


// ==== 100da253 Unwind@100da253

void Unwind_100da253(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 100da266 Unwind@100da266

void Unwind_100da266(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xf98));
  return;
}


// ==== 100da272 Unwind@100da272

void Unwind_100da272(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xf8c));
  return;
}


// ==== 100da27e Unwind@100da27e

void Unwind_100da27e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xf9c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xf9c) = *(uint *)(unaff_EBP + -0xf9c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x100da297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 100da29e Unwind@100da29e

void Unwind_100da29e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0xf98));
  return;
}


// ==== 100da2c0 Unwind@100da2c0

void Unwind_100da2c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da2c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 100da2d6 Unwind@100da2d6

void Unwind_100da2d6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da2d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x4c));
  return;
}


// ==== 100da2df Unwind@100da2df

void Unwind_100da2df(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da2e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0xcc));
  return;
}


// ==== 100da2eb Unwind@100da2eb

void Unwind_100da2eb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da2f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x8c));
  return;
}


// ==== 100da30b Unwind@100da30b

void Unwind_100da30b(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0xc);
  return;
}


// ==== 100da31d Unwind@100da31d

void Unwind_100da31d(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0xc);
  return;
}


// ==== 100da32f Unwind@100da32f

void Unwind_100da32f(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0xc);
  return;
}


// ==== 100da341 Unwind@100da341

void Unwind_100da341(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0xc);
  return;
}


// ==== 100da349 Unwind@100da349

void Unwind_100da349(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x118);
  return;
}


// ==== 100da354 Unwind@100da354

void Unwind_100da354(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x2c8);
  return;
}


// ==== 100da35f Unwind@100da35f

void Unwind_100da35f(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x3f8);
  return;
}


// ==== 100da36a Unwind@100da36a

void Unwind_100da36a(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x490);
  return;
}


// ==== 100da375 Unwind@100da375

void Unwind_100da375(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x1b0);
  return;
}


// ==== 100da380 Unwind@100da380

void Unwind_100da380(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x360);
  return;
}


// ==== 100da38b Unwind@100da38b

void Unwind_100da38b(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x528);
  return;
}


// ==== 100da396 Unwind@100da396

void Unwind_100da396(void)

{
  DAT_10129b8c = DAT_10129b8c & 0xfffffffe;
  return;
}


// ==== 100da3ae Unwind@100da3ae

void Unwind_100da3ae(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0xb8);
  return;
}


// ==== 100da3b9 Unwind@100da3b9

void Unwind_100da3b9(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x150);
  return;
}


// ==== 100da3c4 Unwind@100da3c4

void Unwind_100da3c4(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x1e8);
  return;
}


// ==== 100da3d9 Unwind@100da3d9

void Unwind_100da3d9(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0x1c);
  return;
}


// ==== 100da3e1 Unwind@100da3e1

void Unwind_100da3e1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + 0x2c));
  return;
}


// ==== 100da3f4 Unwind@100da3f4

void Unwind_100da3f4(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0xc);
  return;
}


// ==== 100da3fc Unwind@100da3fc

void Unwind_100da3fc(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x518);
  return;
}


// ==== 100da407 Unwind@100da407

void Unwind_100da407(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x350);
  return;
}


// ==== 100da412 Unwind@100da412

void Unwind_100da412(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 100da41b Unwind@100da41b

void Unwind_100da41b(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x648);
  return;
}


// ==== 100da426 Unwind@100da426

void Unwind_100da426(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x220);
  return;
}


// ==== 100da431 Unwind@100da431

void Unwind_100da431(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x188);
  return;
}


// ==== 100da43c Unwind@100da43c

void Unwind_100da43c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da43f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 100da445 Unwind@100da445

void Unwind_100da445(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    FUN_1000f050(unaff_EBP + -0x5b0);
    return;
  }
  return;
}


// ==== 100da461 Unwind@100da461

void Unwind_100da461(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0xf0);
  return;
}


// ==== 100da46c Unwind@100da46c

void Unwind_100da46c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffd;
    FUN_1000f050(unaff_EBP + -0x648);
    return;
  }
  return;
}


// ==== 100da488 Unwind@100da488

void Unwind_100da488(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -1000);
  return;
}


// ==== 100da493 Unwind@100da493

void Unwind_100da493(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x5b0);
  return;
}


// ==== 100da49e Unwind@100da49e

void Unwind_100da49e(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x480);
  return;
}


// ==== 100da4a9 Unwind@100da4a9

void Unwind_100da4a9(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x6e0);
  return;
}


// ==== 100da4b4 Unwind@100da4b4

void Unwind_100da4b4(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x2b8);
  return;
}


// ==== 100da4bf Unwind@100da4bf

void Unwind_100da4bf(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 100da4c8 Unwind@100da4c8

void Unwind_100da4c8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da4cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 100da4db Unwind@100da4db

void Unwind_100da4db(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0xc);
  return;
}


// ==== 100da4e3 Unwind@100da4e3

void Unwind_100da4e3(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0xd0);
  return;
}


// ==== 100da4f8 Unwind@100da4f8

void Unwind_100da4f8(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0xc);
  return;
}


// ==== 100da50a Unwind@100da50a

void Unwind_100da50a(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0xc);
  return;
}


// ==== 100da512 Unwind@100da512

void Unwind_100da512(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -800);
  return;
}


// ==== 100da51d Unwind@100da51d

void Unwind_100da51d(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x288);
  return;
}


// ==== 100da528 Unwind@100da528

void Unwind_100da528(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x1f0);
  return;
}


// ==== 100da533 Unwind@100da533

void Unwind_100da533(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0xc0);
  return;
}


// ==== 100da53e Unwind@100da53e

void Unwind_100da53e(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x3b8);
  return;
}


// ==== 100da549 Unwind@100da549

void Unwind_100da549(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x288);
  return;
}


// ==== 100da554 Unwind@100da554

void Unwind_100da554(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x288);
  return;
}


// ==== 100da55f Unwind@100da55f

void Unwind_100da55f(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x288);
  return;
}


// ==== 100da56a Unwind@100da56a

void Unwind_100da56a(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x158);
  return;
}


// ==== 100da575 Unwind@100da575

void Unwind_100da575(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x1f0);
  return;
}


// ==== 100da580 Unwind@100da580

void Unwind_100da580(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x3b8);
  return;
}


// ==== 100da58b Unwind@100da58b

void Unwind_100da58b(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x3b8);
  return;
}


// ==== 100da5a0 Unwind@100da5a0

void Unwind_100da5a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da5a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 100da5d0 Unwind@100da5d0

void Unwind_100da5d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da5f0 Unwind@100da5f0

void Unwind_100da5f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da5f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da610 Unwind@100da610

void Unwind_100da610(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da619 Unwind@100da619

void Unwind_100da619(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da630 Unwind@100da630

void Unwind_100da630(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da638 Unwind@100da638

void Unwind_100da638(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da63b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da650 Unwind@100da650

void Unwind_100da650(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da658 Unwind@100da658

void Unwind_100da658(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da680 Unwind@100da680

void Unwind_100da680(void)

{
  int unaff_EBP;
  
  FUN_1000fe10(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da6b0 Unwind@100da6b0

void Unwind_100da6b0(void)

{
  int unaff_EBP;
  
  FUN_1000fe10(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da6b8 Unwind@100da6b8

void Unwind_100da6b8(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da6c0 Unwind@100da6c0

void Unwind_100da6c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da6e0 Unwind@100da6e0

void Unwind_100da6e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da6e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da6e9 Unwind@100da6e9

void Unwind_100da6e9(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da700 Unwind@100da700

void Unwind_100da700(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da708 Unwind@100da708

void Unwind_100da708(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da70b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da720 Unwind@100da720

void Unwind_100da720(void)

{
  int unaff_EBP;
  
  FUN_10010790(*(FRenderResource **)(unaff_EBP + -0x14));
  return;
}


// ==== 100da728 Unwind@100da728

void Unwind_100da728(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x14) + 0xc));
  return;
}


// ==== 100da733 Unwind@100da733

void Unwind_100da733(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x14) + 0x40));
  return;
}


// ==== 100da73e Unwind@100da73e

void Unwind_100da73e(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x14) + 0x74));
  return;
}


// ==== 100da749 Unwind@100da749

void Unwind_100da749(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x14) + 0xa8));
  return;
}


// ==== 100da757 Unwind@100da757

void Unwind_100da757(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x14) + 0xdc));
  return;
}


// ==== 100da765 Unwind@100da765

void Unwind_100da765(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x14) + 0x110));
  return;
}


// ==== 100da773 Unwind@100da773

void Unwind_100da773(void)

{
  int unaff_EBP;
  
  FUN_1000fe10(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da77b Unwind@100da77b

void Unwind_100da77b(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da783 Unwind@100da783

void Unwind_100da783(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da78c Unwind@100da78c

void Unwind_100da78c(void)

{
  int unaff_EBP;
  
  FUN_1000fe10(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da794 Unwind@100da794

void Unwind_100da794(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da79c Unwind@100da79c

void Unwind_100da79c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da79f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7a5 Unwind@100da7a5

void Unwind_100da7a5(void)

{
  int unaff_EBP;
  
  FUN_1000fe10(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7ad Unwind@100da7ad

void Unwind_100da7ad(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7b5 Unwind@100da7b5

void Unwind_100da7b5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7be Unwind@100da7be

void Unwind_100da7be(void)

{
  int unaff_EBP;
  
  FUN_1000fe10(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7c6 Unwind@100da7c6

void Unwind_100da7c6(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7ce Unwind@100da7ce

void Unwind_100da7ce(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da7d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7d7 Unwind@100da7d7

void Unwind_100da7d7(void)

{
  int unaff_EBP;
  
  FUN_1000fe10(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7df Unwind@100da7df

void Unwind_100da7df(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7e7 Unwind@100da7e7

void Unwind_100da7e7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da7ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7f0 Unwind@100da7f0

void Unwind_100da7f0(void)

{
  int unaff_EBP;
  
  FUN_1000fe10(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da7f8 Unwind@100da7f8

void Unwind_100da7f8(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da800 Unwind@100da800

void Unwind_100da800(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da809 Unwind@100da809

void Unwind_100da809(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x14));
  return;
}


// ==== 100da811 Unwind@100da811

void Unwind_100da811(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x14));
  return;
}


// ==== 100da830 Unwind@100da830

void Unwind_100da830(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da838 Unwind@100da838

void Unwind_100da838(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da83b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da850 Unwind@100da850

void Unwind_100da850(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x90));
  return;
}


// ==== 100da85c Unwind@100da85c

void Unwind_100da85c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da85f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x4c));
  return;
}


// ==== 100da870 Unwind@100da870

void Unwind_100da870(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x90));
  return;
}


// ==== 100da87c Unwind@100da87c

void Unwind_100da87c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x4c));
  return;
}


// ==== 100da890 Unwind@100da890

void Unwind_100da890(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x90));
  return;
}


// ==== 100da89c Unwind@100da89c

void Unwind_100da89c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da89f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x4c));
  return;
}


// ==== 100da8b0 Unwind@100da8b0

void Unwind_100da8b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da8b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x90));
  return;
}


// ==== 100da8bc Unwind@100da8bc

void Unwind_100da8bc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da8bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x4c));
  return;
}


// ==== 100da8d0 Unwind@100da8d0

void Unwind_100da8d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x90));
  return;
}


// ==== 100da8dc Unwind@100da8dc

void Unwind_100da8dc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da8df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x4c));
  return;
}


// ==== 100da8f0 Unwind@100da8f0

void Unwind_100da8f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da8f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x90));
  return;
}


// ==== 100da8fc Unwind@100da8fc

void Unwind_100da8fc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da8ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + -0x4c));
  return;
}


// ==== 100da910 Unwind@100da910

void Unwind_100da910(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0x18);
  return;
}


// ==== 100da918 Unwind@100da918

void Unwind_100da918(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x168);
  return;
}


// ==== 100da923 Unwind@100da923

void Unwind_100da923(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0x200);
  return;
}


// ==== 100da92e Unwind@100da92e

void Unwind_100da92e(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + -0xd0);
  return;
}


// ==== 100da950 Unwind@100da950

void Unwind_100da950(void)

{
  int unaff_EBP;
  
  FUN_1000fe10(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da958 Unwind@100da958

void Unwind_100da958(void)

{
  int unaff_EBP;
  
  FUN_1000fd00(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da960 Unwind@100da960

void Unwind_100da960(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FRenderResource::~FRenderResource(*(FRenderResource **)(unaff_EBP + -0x10));
  return;
}


// ==== 100da980 Unwind@100da980

void Unwind_100da980(void)

{
  int unaff_EBP;
  
  FUN_10010790(*(FRenderResource **)(unaff_EBP + -0x34));
  return;
}


// ==== 100da988 Unwind@100da988

void Unwind_100da988(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x34) + 0xc));
  return;
}


// ==== 100da993 Unwind@100da993

void Unwind_100da993(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x34) + 0x40));
  return;
}


// ==== 100da99e Unwind@100da99e

void Unwind_100da99e(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x34) + 0x74));
  return;
}


// ==== 100da9a9 Unwind@100da9a9

void Unwind_100da9a9(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x34) + 0xa8));
  return;
}


// ==== 100da9b7 Unwind@100da9b7

void Unwind_100da9b7(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x34) + 0xdc));
  return;
}


// ==== 100da9c5 Unwind@100da9c5

void Unwind_100da9c5(void)

{
  int unaff_EBP;
  
  FUN_100106f0((FRenderResource *)(*(int *)(unaff_EBP + -0x34) + 0x110));
  return;
}


// ==== 100da9f0 Unwind@100da9f0

void Unwind_100da9f0(void)

{
  int unaff_EBP;
  
  FUN_1000f050(unaff_EBP + 0x14);
  return;
}


// ==== 100da9f8 Unwind@100da9f8

void Unwind_100da9f8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100da9fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FMatrix::~FMatrix((FMatrix *)(unaff_EBP + 0x24));
  return;
}


// ==== 100daa6a Unwind@100daa6a

void Unwind_100daa6a(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daa75 Unwind@100daa75

void Unwind_100daa75(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daa80 Unwind@100daa80

void Unwind_100daa80(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daa8b Unwind@100daa8b

void Unwind_100daa8b(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daa96 Unwind@100daa96

void Unwind_100daa96(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daaa1 Unwind@100daaa1

void Unwind_100daaa1(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daaac Unwind@100daaac

void Unwind_100daaac(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daab7 Unwind@100daab7

void Unwind_100daab7(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daac2 Unwind@100daac2

void Unwind_100daac2(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daacd Unwind@100daacd

void Unwind_100daacd(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daad8 Unwind@100daad8

void Unwind_100daad8(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daae3 Unwind@100daae3

void Unwind_100daae3(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daaee Unwind@100daaee

void Unwind_100daaee(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100daaf9 Unwind@100daaf9

void Unwind_100daaf9(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab04 Unwind@100dab04

void Unwind_100dab04(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab0f Unwind@100dab0f

void Unwind_100dab0f(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab1a Unwind@100dab1a

void Unwind_100dab1a(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab25 Unwind@100dab25

void Unwind_100dab25(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab30 Unwind@100dab30

void Unwind_100dab30(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab3b Unwind@100dab3b

void Unwind_100dab3b(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab46 Unwind@100dab46

void Unwind_100dab46(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab51 Unwind@100dab51

void Unwind_100dab51(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab5c Unwind@100dab5c

void Unwind_100dab5c(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab67 Unwind@100dab67

void Unwind_100dab67(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab72 Unwind@100dab72

void Unwind_100dab72(void)

{
  int unaff_EBP;
  
  FUN_10001d20(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 100dab87 Unwind@100dab87

void Unwind_100dab87(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x100dab9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 100dabab Unwind@100dabab

void Unwind_100dabab(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dabae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 100dabb4 Unwind@100dabb4

void Unwind_100dabb4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dabb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 100dabe5 Unwind@100dabe5

void Unwind_100dabe5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dabe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 100dac0c Unwind@100dac0c

void Unwind_100dac0c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100dac15 Unwind@100dac15

void Unwind_100dac15(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100dac1e Unwind@100dac1e

void Unwind_100dac1e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100dac27 Unwind@100dac27

void Unwind_100dac27(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100dac30 Unwind@100dac30

void Unwind_100dac30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100dac39 Unwind@100dac39

void Unwind_100dac39(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100dac42 Unwind@100dac42

void Unwind_100dac42(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 100dac5f Unwind@100dac5f

void Unwind_100dac5f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 100dac72 Unwind@100dac72

void Unwind_100dac72(void)

{
  DAT_10129bb0 = DAT_10129bb0 & 0xfffffffe;
  return;
}


// ==== 100dac8a Unwind@100dac8a

void Unwind_100dac8a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dac93 Unwind@100dac93

void Unwind_100dac93(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100dac9c Unwind@100dac9c

void Unwind_100dac9c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dac9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100daca5 Unwind@100daca5

void Unwind_100daca5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100daca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dacae Unwind@100dacae

void Unwind_100dacae(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dacb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100dacb7 Unwind@100dacb7

void Unwind_100dacb7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dacba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dacc0 Unwind@100dacc0

void Unwind_100dacc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dacc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100dacc9 Unwind@100dacc9

void Unwind_100dacc9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100daccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dacd2 Unwind@100dacd2

void Unwind_100dacd2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dacd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100dacdb Unwind@100dacdb

void Unwind_100dacdb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dacde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dace4 Unwind@100dace4

void Unwind_100dace4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dace7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100daced Unwind@100daced

void Unwind_100daced(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dacf6 Unwind@100dacf6

void Unwind_100dacf6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dacf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100dacff Unwind@100dacff

void Unwind_100dacff(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dad02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dad08 Unwind@100dad08

void Unwind_100dad08(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dad0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100dad11 Unwind@100dad11

void Unwind_100dad11(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dad1a Unwind@100dad1a

void Unwind_100dad1a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dad1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100dad23 Unwind@100dad23

void Unwind_100dad23(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dad26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dad2c Unwind@100dad2c

void Unwind_100dad2c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dad2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


// ==== 100dad35 Unwind@100dad35

void Unwind_100dad35(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 100dad3e Unwind@100dad3e

void Unwind_100dad3e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x100dad41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x24));
  return;
}


