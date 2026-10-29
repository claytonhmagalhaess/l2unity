// ==== 10384650 FUN_10384650

void FUN_10384650(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10384760 FUN_10384760

void FUN_10384760(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10384870 FUN_10384870

void FUN_10384870(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10384980 FUN_10384980

void FUN_10384980(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10384a90 FUN_10384a90

void FUN_10384a90(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10384bc0 FUN_10384bc0

void FUN_10384bc0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10384cd0 FUN_10384cd0

void FUN_10384cd0(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10384d70 FUN_10384d70

void FUN_10384d70(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10384e10 FUN_10384e10

void FUN_10384e10(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10384e80 FUN_10384e80

void FUN_10384e80(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10384f20 FUN_10384f20

void FUN_10384f20(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10384f90 FUN_10384f90

void FUN_10384f90(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10385030 FUN_10385030

void FUN_10385030(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103850a0 FUN_103850a0

void FUN_103850a0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10385140 FUN_10385140

void FUN_10385140(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10385250 FUN_10385250

void FUN_10385250(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103852c0 FUN_103852c0

void FUN_103852c0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10385360 FUN_10385360

void FUN_10385360(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103853d0 FUN_103853d0

void FUN_103853d0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10385470 FUN_10385470

void FUN_10385470(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103854e0 FUN_103854e0

void FUN_103854e0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10385580 FUN_10385580

void FUN_10385580(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10385690 FUN_10385690

void FUN_10385690(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103857a0 FUN_103857a0

void FUN_103857a0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103858b0 FUN_103858b0

void FUN_103858b0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103859c0 FUN_103859c0

void FUN_103859c0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10385a30 FUN_10385a30

void FUN_10385a30(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10385ad0 FUN_10385ad0

void FUN_10385ad0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10385b40 FUN_10385b40

void FUN_10385b40(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10385be0 FUN_10385be0

void FUN_10385be0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10385c50 FUN_10385c50

void FUN_10385c50(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10385cf0 FUN_10385cf0

void FUN_10385cf0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10385e00 FUN_10385e00

void FUN_10385e00(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x18,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10385f50 FUN_10385f50

void FUN_10385f50(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10386060 FUN_10386060

void FUN_10386060(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10386170 FUN_10386170

void FUN_10386170(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103862b0 FUN_103862b0

void FUN_103862b0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103863c0 FUN_103863c0

FArray * FUN_103863c0(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x28,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x28);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x28);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x28);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return in_ECX;
}


// ==== 10386500 FUN_10386500

void FUN_10386500(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10386640 FUN_10386640

void FUN_10386640(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0xe0,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0xe0);
        puVar3 = (undefined4 *)(iVar2 * 0xe0 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x38; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0xe0);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10386780 FUN_10386780

FArray * FUN_10386780(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x1c,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x1c);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x1c);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x1c);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return in_ECX;
}


// ==== 103868c0 FUN_103868c0

void FUN_103868c0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x18,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10386a10 FUN_10386a10

void FUN_10386a10(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x20,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x20);
        puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x20);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10386aa0 FUN_10386aa0

void FUN_10386aa0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x34);
  return;
}


// ==== 10386b40 FUN_10386b40

void FUN_10386b40(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x34,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x34);
        puVar3 = (undefined4 *)(iVar2 * 0x34 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x34);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10386c70 FUN_10386c70

void FUN_10386c70(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x20,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x20);
        puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x20);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10386da0 FUN_10386da0

void FUN_10386da0(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10386ee0 FUN_10386ee0

void FUN_10386ee0(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10386f80 FUN_10386f80

void FUN_10386f80(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faedc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x48;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(*(int *)in_ECX + iVar1 + 8));
      iVar1 = iVar1 + 0x48;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x48);
  ExceptionList = local_c;
  return;
}


// ==== 10387080 FUN_10387080

void FUN_10387080(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    thunk_FUN_1036fe50(*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x48);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x48);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x48);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 103871b0 FUN_103871b0

void FUN_103871b0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103872e0 FUN_103872e0

void FUN_103872e0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10387410 FUN_10387410

void FUN_10387410(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10387520 FUN_10387520

void FUN_10387520(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10387630 FUN_10387630

void FUN_10387630(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10387760 FUN_10387760

void FUN_10387760(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar2 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[4]);
  }
  if (0 < in_ECX[1]) {
    iVar2 = 0;
    iVar5 = 0;
    do {
      puVar6 = (undefined4 *)(*in_ECX + iVar2);
      puVar3 = FString::operator*((FString *)(puVar6 + 1));
      uVar4 = thunk_FUN_1032ff50(puVar3);
      iVar2 = iVar2 + 0x1c;
      uVar4 = in_ECX[4] - 1U & uVar4;
      *puVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      *(int *)(iVar1 + uVar4 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10387850 FUN_10387850

void FUN_10387850(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faef9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x1c);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x1c);
      if (*(int *)in_ECX + iVar1 * 0x1c != 0) {
        thunk_FUN_1036f500(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10387920 FUN_10387920

void FUN_10387920(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10387fc0 FUN_10387fc0

void FUN_10387fc0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x3c);
  return;
}


// ==== 10388080 FUN_10388080

void FUN_10388080(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar1 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar1) {
    iVar1 = iVar1 - param_1;
    do {
      thunk_FUN_10588cf0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x118);
  return;
}


// ==== 10388150 FUN_10388150

void FUN_10388150(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      thunk_FUN_10588cf0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x118,param_1);
  return;
}


// ==== 103881a0 FUN_103881a0

void FUN_103881a0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10388260 FUN_10388260

void FUN_10388260(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x10);
  return;
}


// ==== 10388540 FUN_10388540

void FUN_10388540(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,8);
  return;
}


// ==== 103889a0 FUN_103889a0

void FUN_103889a0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faf19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10388b30 FUN_10388b30

void FUN_10388b30(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10388bd0 FUN_10388bd0

void FUN_10388bd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faf39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x34);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x34);
      puVar3 = (undefined4 *)(iVar2 * 0x34 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x34);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10388d80 FUN_10388d80

void FUN_10388d80(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x34,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x34);
        puVar3 = (undefined4 *)(iVar2 * 0x34 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x34);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10388e10 FUN_10388e10

void FUN_10388e10(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,8);
  return;
}


// ==== 10389110 FUN_10389110

void FUN_10389110(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x3c);
  return;
}


// ==== 103891d0 FUN_103891d0

void FUN_103891d0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x2c);
  return;
}


// ==== 103899b0 FUN_103899b0

void FUN_103899b0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x2c;
    iVar2 = iVar2 - param_1;
    do {
      (*(code *)**(undefined4 **)(*(int *)in_ECX + iVar1))(0);
      iVar1 = iVar1 + 0x2c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x2c);
  return;
}


// ==== 10389a80 FUN_10389a80

void FUN_10389a80(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x1c;
    iVar2 = iVar2 - param_1;
    do {
      (*(code *)**(undefined4 **)(*(int *)in_ECX + iVar1))(0);
      iVar1 = iVar1 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  return;
}


// ==== 10389b50 FUN_10389b50

void FUN_10389b50(FArray *param_1)

{
  FRawIndexBuffer *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_10370070(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x1c);
      this = (FRawIndexBuffer *)(*(int *)in_ECX + iVar1 * 0x1c);
      if (this != (FRawIndexBuffer *)0x0) {
        FRawIndexBuffer::FRawIndexBuffer(this,(FRawIndexBuffer *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10389d80 FUN_10389d80

void FUN_10389d80(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10389f00 FUN_10389f00

void FUN_10389f00(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  return;
}


// ==== 10389fc0 FUN_10389fc0

void FUN_10389fc0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x1c;
    iVar2 = iVar2 - param_1;
    do {
      (*(code *)**(undefined4 **)(*(int *)in_ECX + iVar1))(0);
      iVar1 = iVar1 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  return;
}


// ==== 1038a090 FUN_1038a090

void FUN_1038a090(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(iVar1 + *(int *)in_ECX))(0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x1c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x1c,param_1);
  return;
}


// ==== 1038a0e0 FUN_1038a0e0

void FUN_1038a0e0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x68;
    iVar2 = iVar2 - param_1;
    do {
      (*(code *)**(undefined4 **)(*(int *)in_ECX + iVar1))(0);
      iVar1 = iVar1 + 0x68;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x68);
  return;
}


// ==== 1038a1b0 FUN_1038a1b0

void FUN_1038a1b0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(iVar1 + *(int *)in_ECX))(0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x68;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x68,param_1);
  return;
}


// ==== 1038a500 FUN_1038a500

void FUN_1038a500(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 << 5;
    iVar2 = iVar2 - param_1;
    do {
      (*(code *)**(undefined4 **)(*(int *)in_ECX + iVar1))(0);
      iVar1 = iVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x20);
  return;
}


// ==== 1038a5d0 FUN_1038a5d0

void FUN_1038a5d0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(iVar1 + *(int *)in_ECX))(0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x20,param_1);
  return;
}


// ==== 1038a9c0 FUN_1038a9c0

void FUN_1038a9c0(int param_1)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0x104,param_1);
  return;
}


// ==== 1038a9e0 FUN_1038a9e0

void FUN_1038a9e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faf59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x18);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1038ab90 FUN_1038ab90

void FUN_1038ab90(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 1038ac30 FUN_1038ac30

void FUN_1038ac30(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1038aca0 FUN_1038aca0

void FUN_1038aca0(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar2 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[4]);
  }
  if (0 < in_ECX[1]) {
    iVar2 = 0;
    iVar5 = 0;
    do {
      puVar6 = (undefined4 *)(*in_ECX + iVar2);
      puVar3 = FString::operator*((FString *)(puVar6 + 1));
      uVar4 = thunk_FUN_1032ff50(puVar3);
      iVar2 = iVar2 + 0x14;
      uVar4 = in_ECX[4] - 1U & uVar4;
      *puVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
      *(int *)(iVar1 + uVar4 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 1038ad90 FUN_1038ad90

void FUN_1038ad90(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faf79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x14);
      if (*(int *)in_ECX + iVar1 * 0x14 != 0) {
        thunk_FUN_1036f620(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1038ae50 FUN_1038ae50

void FUN_1038ae50(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar1 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar1) {
    iVar1 = iVar1 - param_1;
    do {
      thunk_FUN_10444ed0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x20);
  return;
}


// ==== 1038af10 FUN_1038af10

void FUN_1038af10(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      thunk_FUN_10444ed0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x20,param_1);
  return;
}


// ==== 1038af60 FUN_1038af60

void FUN_1038af60(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar1 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar1) {
    iVar1 = iVar1 - param_1;
    do {
      thunk_FUN_104a1de0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  return;
}


// ==== 1038b020 FUN_1038b020

void FUN_1038b020(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      thunk_FUN_104a1de0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  return;
}


// ==== 1038b070 FUN_1038b070

void FUN_1038b070(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar1 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar1) {
    iVar1 = iVar1 - param_1;
    do {
      thunk_FUN_104a1ca0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  return;
}


// ==== 1038b130 FUN_1038b130

void FUN_1038b130(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      thunk_FUN_104a1ca0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  return;
}


// ==== 1038b180 FUN_1038b180

void FUN_1038b180(byte param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107faf99;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1038b1f0 FUN_1038b1f0

void FUN_1038b1f0(byte param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fafb9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1038b260 FUN_1038b260

void FUN_1038b260(undefined2 *param_1)

{
  undefined2 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fafdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  thunk_FUN_1032bc20(param_1 + 10);
  ExceptionList = local_c;
  return;
}


// ==== 1038b320 FUN_1038b320

void FUN_1038b320(undefined2 *param_1)

{
  undefined2 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  thunk_FUN_1032bcd0(param_1 + 10);
  return;
}


// ==== 1038b3a0 FUN_1038b3a0

void FUN_1038b3a0(byte param_1)

{
  TArray<unsigned_short> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107faff9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_short>::~TArray<unsigned_short>(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1038b410 FUN_1038b410

void FUN_1038b410(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb01c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 8));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1038b480 FUN_1038b480

void FUN_1038b480(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb03b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10379700();
  ExceptionList = local_c;
  return;
}


// ==== 1038b4d0 FUN_1038b4d0

void FUN_1038b4d0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb05b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1038b520 FUN_1038b520

void FUN_1038b520(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb07b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  ExceptionList = local_c;
  return;
}


// ==== 1038b570 FUN_1038b570

void FUN_1038b570(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb09b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  ExceptionList = local_c;
  return;
}


// ==== 1038b5c0 FUN_1038b5c0

void FUN_1038b5c0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb0bb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  ExceptionList = local_c;
  return;
}


// ==== 1038b610 FUN_1038b610

void FUN_1038b610(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb0db;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1038b660 FUN_1038b660

void FUN_1038b660(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb0f8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  ExceptionList = local_c;
  return;
}


// ==== 1038b6b0 FUN_1038b6b0

void FUN_1038b6b0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb11b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1038b700 FUN_1038b700

void FUN_1038b700(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb13b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1038b7f0 FUN_1038b7f0

void FUN_1038b7f0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1038b860 FUN_1038b860

void FUN_1038b860(int param_1)

{
  FArray *in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  FArray::Empty(in_ECX,8,param_1);
  return;
}


// ==== 1038b8c0 FUN_1038b8c0

void FUN_1038b8c0(int param_1)

{
  FArray *in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  FArray::Empty(in_ECX,0xc,param_1);
  return;
}


// ==== 1038b920 FUN_1038b920

void FUN_1038b920(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb159;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x28,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1038b9b0 FUN_1038b9b0

void FUN_1038b9b0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb179;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x34;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x34,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1038ba40 FUN_1038ba40

void FUN_1038ba40(int param_1)

{
  FArray *in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  FArray::Empty(in_ECX,4,param_1);
  return;
}


// ==== 1038baa0 FUN_1038baa0

void FUN_1038baa0(int param_1)

{
  FArray *in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  FArray::Empty(in_ECX,4,param_1);
  return;
}


// ==== 1038bb00 FUN_1038bb00

void FUN_1038bb00(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb199;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x38);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x38);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x38);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x38);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1038bdd0 FUN_1038bdd0

void FUN_1038bdd0(byte param_1)

{
  thunk_FUN_10370220();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1038be00 FUN_1038be00

void FUN_1038be00(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb1bc;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1038be70 FUN_1038be70

void FUN_1038be70(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb1e8;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3 + 0x10));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3 + 4));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x1c,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1038bf10 FUN_1038bf10

void FUN_1038bf10(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb20c;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x14,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1038c190 FUN_1038c190

void FUN_1038c190(int param_1)

{
  undefined1 *puVar1;
  FString *this;
  ushort *puVar2;
  ushort *puVar3;
  AStatLog *in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107fb229;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &stack0xffffffcc;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  this = (FString *)AStatLog::eventGetLocalLogFileName(in_ECX);
  local_8._0_1_ = 1;
  puVar2 = FString::operator*(this);
  puVar3 = FString::operator*((FString *)(in_ECX + 0x428));
  appCreateProc(puVar3,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1038c239 Catch@1038c239

void Catch_1038c239(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1038c24d Catch@1038c24d

void Catch_1038c24d(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLog::execExecuteLocalLogBatcher");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038c2e0 FUN_1038c2e0

void FUN_1038c2e0(int param_1)

{
  undefined1 *puVar1;
  FString *this;
  ushort *puVar2;
  ushort *puVar3;
  AStatLog *in_ECX;
  FString *pFVar4;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107fb252;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &stack0xffffffc0;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  pFVar4 = local_34;
  this = (FString *)AStatLog::eventGetLocalLogFileName(in_ECX);
  local_8._0_1_ = 1;
  puVar2 = FString::operator*(this);
  FString::Printf((ushort *)local_28,L"-b false %s",puVar2,pFVar4);
  local_8._0_1_ = 3;
  FString::~FString(local_34);
  puVar2 = FString::operator*(local_28);
  puVar3 = FString::operator*((FString *)(in_ECX + 0x428));
  appCreateProc(puVar3,puVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1038c3b2 Catch@1038c3b2

void Catch_1038c3b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1038c3c6 Catch@1038c3c6

void Catch_1038c3c6(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLog::execExecuteSilentLogBatcher");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038c460 FUN_1038c460

void FUN_1038c460(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  UObject *pUVar5;
  uint *puVar6;
  UObject *in_ECX;
  FOutputDevice *this;
  FOutputDevice *this_00;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb270;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &stack0xffffffd4;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (*(int *)(*(int *)(in_ECX + 0xe0) + 0x614) == 0) {
    appFailAssert("Level->Game",".\\AStatLog.cpp",0x3f);
  }
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
  }
  if (DAT_10b1b468 != 0) {
    local_18 = 0;
    iVar2 = appGetProcReturnCode((void *)DAT_10b1b468,&local_18);
    if (iVar2 == 0) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(this,*(ushort **)GLog_exref);
      }
    }
    else if (local_18 < 1) {
      if (*(int *)GLog_exref != 0) {
        FOutputDevice::Logf2(*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref);
      }
      *(uint *)(in_ECX + 0x488) = *(uint *)(in_ECX + 0x488) | 1;
    }
    else {
      *(uint *)(in_ECX + 0x488) = *(uint *)(in_ECX + 0x488) & 0xfffffffe;
    }
  }
  puVar3 = FString::operator*((FString *)(in_ECX + 0x458));
  puVar4 = FString::operator*((FString *)(in_ECX + 0x44c));
  DAT_10b1b468 = (int)appCreateProc(puVar4,puVar3);
  if ((void *)DAT_10b1b468 == (void *)0x0) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(this_00,*(ushort **)GLog_exref);
    }
    *(uint *)(in_ECX + 0x488) = *(uint *)(in_ECX + 0x488) | 1;
  }
  if (*(int *)GLog_exref != 0) {
    FOutputDevice::Logf2((FOutputDevice *)(*(uint *)(in_ECX + 0x488) & 1),*(ushort **)GLog_exref);
  }
  pUVar5 = UClass::GetDefaultObject(&AStatLog::PrivateStaticClass);
  iVar2 = thunk_FUN_10373780(pUVar5);
  puVar6 = (uint *)(iVar2 + 0x488);
  *puVar6 = *puVar6 ^ (*(uint *)(in_ECX + 0x488) ^ *puVar6) & 1;
  UObject::SaveConfig(in_ECX,0x4000,(ushort *)0x0);
  ExceptionList = local_10;
  return;
}


// ==== 1038c606 Catch@1038c606

void Catch_1038c606(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1038c61a Catch@1038c61a

void Catch_1038c61a(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLog::execExecuteWorldLogBatcher");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038c6f0 FUN_1038c6f0

void FUN_1038c6f0(int param_1)

{
  byte bVar1;
  UClass *this;
  ushort *puVar2;
  FString local_3c [12];
  FString local_30 [20];
  AStatLog *local_1c;
  UObject *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107fb292;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  local_18 = (UObject *)0x0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar2 = (ushort *)0x0;
  this = UObject::GetClass(local_18);
  puVar2 = UObject::GetFullName((UObject *)this,puVar2);
  FString::FString(local_3c,puVar2);
  local_8._0_1_ = 1;
  FString::FString(local_30,(ushort *)L"GameMutator");
  local_8._0_1_ = 2;
  AStatLog::eventLogGameSpecial(local_1c,local_30,local_3c);
  local_8._0_1_ = 1;
  FString::~FString(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_3c);
  ExceptionList = local_10;
  return;
}


// ==== 1038c7d8 Catch@1038c7d8

void Catch_1038c7d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_10914c48);
}


// ==== 1038c7ec Catch@1038c7ec

void Catch_1038c7ec(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLog::execInitialCheck");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038c890 FUN_1038c890

void FUN_1038c890(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb2b9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038c950 FUN_1038c950

void FUN_1038c950(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    piVar2 = *(int **)in_ECX;
    do {
      if (*piVar2 == *param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  iVar1 = FArray::Add(in_ECX,1,4);
  *(int *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 1038c9c0 FUN_1038c9c0

void FUN_1038c9c0(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = -1;
  if (param_1 == 0) {
    appFailAssert("Class","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",
                  0x505);
  }
  thunk_FUN_103737b0();
  return;
}


// ==== 1038ca10 FUN_1038ca10

float10 FUN_1038ca10(float *param_1,int param_2,FArray *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float10 fVar9;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_4c = 0.0;
  local_10 = 1.0 / (float)(param_2 + -1);
  fVar2 = (*param_1 + (param_1[6] - param_1[3] * 2.0)) * 3.0;
  fVar3 = ((param_1[7] - param_1[4] * 2.0) + param_1[1]) * 3.0;
  fVar4 = ((param_1[8] - param_1[5] * 2.0) + param_1[2]) * 3.0;
  local_48 = *param_1;
  local_44 = param_1[1];
  local_40 = param_1[2];
  fVar7 = ((param_1[9] - param_1[6] * 3.0) + param_1[3] * 3.0) - *param_1;
  fVar6 = ((param_1[10] - param_1[7] * 3.0) + param_1[4] * 3.0) - param_1[1];
  fVar5 = ((param_1[0xb] - param_1[8] * 3.0) + param_1[5] * 3.0) - param_1[2];
  local_3c = (param_1[3] - *param_1) * 3.0 * local_10 + fVar2 * local_10 * local_10 +
             local_10 * fVar7 * local_10 * local_10;
  local_38 = (param_1[4] - param_1[1]) * 3.0 * local_10 + fVar3 * local_10 * local_10 +
             fVar6 * local_10 * local_10 * local_10;
  local_34 = (param_1[5] - param_1[2]) * 3.0 * local_10 + fVar4 * local_10 * local_10 +
             fVar5 * local_10 * local_10 * local_10;
  fVar7 = fVar7 * 6.0;
  fVar6 = fVar6 * 6.0;
  fVar5 = fVar5 * 6.0;
  local_30 = fVar2 * 2.0 * local_10 * local_10 + fVar7 * local_10 * local_10 * local_10;
  local_2c = fVar3 * 2.0 * local_10 * local_10 + fVar6 * local_10 * local_10 * local_10;
  local_28 = fVar4 * 2.0 * local_10 * local_10 + fVar5 * local_10 * local_10 * local_10;
  local_c = fVar7 * local_10 * local_10;
  local_8 = fVar6 * local_10 * local_10;
  local_4 = fVar5 * local_10 * local_10;
  local_18 = local_c * local_10;
  local_14 = local_8 * local_10;
  local_10 = local_10 * local_4;
  local_24 = local_48;
  local_20 = local_44;
  local_1c = local_40;
  iVar8 = FArray::Add(param_3,1,0xc);
  pfVar1 = (float *)(*(int *)param_3 + iVar8 * 0xc);
  *pfVar1 = *param_1;
  pfVar1[1] = param_1[1];
  pfVar1[2] = param_1[2];
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      local_48 = local_3c + local_48;
      local_44 = local_38 + local_44;
      local_40 = local_34 + local_40;
      local_3c = local_30 + local_3c;
      local_38 = local_2c + local_38;
      local_34 = local_28 + local_34;
      local_30 = local_18 + local_30;
      local_2c = local_2c + local_14;
      local_28 = local_28 + local_10;
      fVar9 = (float10)thunk_FUN_10373830(&local_48,&local_24);
      fVar4 = local_40;
      fVar3 = local_44;
      fVar2 = local_48;
      local_4c = (float)(fVar9 + (float10)local_4c);
      local_24 = local_48;
      local_20 = local_44;
      local_1c = local_40;
      iVar8 = FArray::Add(param_3,1,0xc);
      param_2 = param_2 + -1;
      pfVar1 = (float *)(*(int *)param_3 + iVar8 * 0xc);
      *pfVar1 = fVar2;
      pfVar1[1] = fVar3;
      pfVar1[2] = fVar4;
    } while (param_2 != 0);
  }
  return (float10)local_4c;
}


// ==== 1038d0b0 FUN_1038d0b0

void FUN_1038d0b0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_103795a0(param_1 + 0x44);
  return;
}


// ==== 1038d100 FUN_1038d100

void FUN_1038d100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = FArray::Add(in_ECX,1,0xc);
  puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  iVar2 = FArray::Add(in_ECX + 0xc,1,0xc);
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xc) + iVar2 * 0xc);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  iVar2 = FArray::Add(in_ECX + 0x18,1,4);
  *(undefined4 *)(*(int *)(in_ECX + 0x18) + iVar2 * 4) = param_7;
  return;
}


// ==== 1038d190 FUN_1038d190

void FUN_1038d190(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000020;
  
  iVar1 = FArray::Add((FArray *)(in_ECX + 0x24),1,0x1c);
  puVar3 = (undefined4 *)(*(int *)(in_ECX + 0x24) + iVar1 * 0x1c);
  for (iVar2 = 7; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)register0x00000010;
    puVar3 = puVar3 + 1;
  }
  iVar1 = FArray::Add((FArray *)(in_ECX + 0x30),1,4);
  *(undefined4 *)(*(int *)(in_ECX + 0x30) + iVar1 * 4) = in_stack_00000020;
  return;
}


// ==== 1038d1f0 FUN_1038d1f0

void FUN_1038d1f0(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb2eb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10379700();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038d250 FUN_1038d250

void FUN_1038d250(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb31b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FIndexBuffer::vftable;
  local_4 = 1;
  *in_ECX = FRaw32BitIndexBuffer::vftable;
  thunk_FUN_10379670(param_1 + 0xc);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 1038d300 FUN_1038d300

void FUN_1038d300(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_103797c0(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 1038d340 FUN_1038d340

void FUN_1038d340(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb34b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10379700();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1038d3c0 FUN_1038d3c0

FRaw32BitIndexBuffer * FUN_1038d3c0(byte param_1)

{
  FRaw32BitIndexBuffer *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x1c,*(int *)(in_ECX + -4),FRaw32BitIndexBuffer::~FRaw32BitIndexBuffer);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FRaw32BitIndexBuffer::~FRaw32BitIndexBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1038d440 FUN_1038d440

void FUN_1038d440(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10374410(param_1);
  *in_ECX = FSolidColorTexture::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  ExceptionList = local_c;
  return;
}


// ==== 1038d4c0 FUN_1038d4c0

void FUN_1038d4c0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1038d4f0 FUN_1038d4f0

void FUN_1038d4f0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb38b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TLazyArray<unsigned_char>::TLazyArray<unsigned_char>
            ((TLazyArray<unsigned_char> *)(in_ECX + 0x10),0);
  ExceptionList = local_c;
  return;
}


// ==== 1038d550 FUN_1038d550

void FUN_1038d550(byte param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb3ab;
  local_c = ExceptionList;
  iVar2 = 1 << (param_1 & 0x1f);
  iVar1 = 1 << (param_2 & 0x1f);
  ExceptionList = &local_c;
  *(byte *)((int)in_ECX + 0xd) = param_2;
  in_ECX[2] = iVar1;
  *in_ECX = 0;
  in_ECX[1] = iVar2;
  *(byte *)(in_ECX + 3) = param_1;
  TLazyArray<unsigned_char>::TLazyArray<unsigned_char>
            ((TLazyArray<unsigned_char> *)(in_ECX + 4),iVar1 * iVar2);
  ExceptionList = local_c;
  return;
}


// ==== 1038d5e0 FUN_1038d5e0

void FUN_1038d5e0(byte param_1,byte param_2,int param_3)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb3cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(byte *)(in_ECX + 3) = param_1;
  in_ECX[1] = 1 << (param_1 & 0x1f);
  *(byte *)((int)in_ECX + 0xd) = param_2;
  *in_ECX = 0;
  in_ECX[2] = 1 << (param_2 & 0x1f);
  TLazyArray<unsigned_char>::TLazyArray<unsigned_char>
            ((TLazyArray<unsigned_char> *)(in_ECX + 4),param_3);
  ExceptionList = local_c;
  return;
}


// ==== 1038d670 FUN_1038d670

void FUN_1038d670(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb3eb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TLazyArray<unsigned_char>::~TLazyArray<unsigned_char>
            ((TLazyArray<unsigned_char> *)(in_ECX + 0x10));
  ExceptionList = local_c;
  return;
}


// ==== 1038d6c0 FUN_1038d6c0

void FUN_1038d6c0(int param_1)

{
  TArray<unsigned_char> *pTVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb40b;
  local_c = ExceptionList;
  if (param_1 == 0) {
    pTVar1 = (TArray<unsigned_char> *)0x0;
  }
  else {
    pTVar1 = (TArray<unsigned_char> *)(param_1 + 0xc);
  }
  ExceptionList = &local_c;
  TArray<unsigned_char>::TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 3),pTVar1);
  *in_ECX = FLazyLoader::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = TLazyArray<unsigned_char>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1038d750 FUN_1038d750

void FUN_1038d750(int param_1)

{
  TArray<unsigned_char> *pTVar1;
  int in_ECX;
  
  if (param_1 == 0) {
    pTVar1 = (TArray<unsigned_char> *)0x0;
  }
  else {
    pTVar1 = (TArray<unsigned_char> *)(param_1 + 0xc);
  }
  TArray<unsigned_char>::operator=((TArray<unsigned_char> *)(in_ECX + 0xc),pTVar1);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 1038d790 FUN_1038d790

undefined2 FUN_1038d790(undefined2 param_1)

{
  undefined2 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x60) == 0) {
    return param_1;
  }
  puVar1 = (undefined2 *)thunk_FUN_1037ad30(&param_1);
  if (puVar1 != (undefined2 *)0x0) {
    return *puVar1;
  }
  return 0x20;
}


// ==== 1038d7d0 FUN_1038d7d0

void FUN_1038d7d0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb434;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1038d830 FUN_1038d830

FArchive * FUN_1038d830(FArchive *param_1,int param_2)

{
  undefined4 uVar1;
  FArchive *this;
  int iVar2;
  
  uVar1 = (**(code **)(*(int *)param_1 + 0x18))(param_2,param_2 + 4);
  this = (FArchive *)thunk_FUN_10378f20(uVar1);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x14),4);
  iVar2 = FArchive::Ver(param_1);
  if (0x5a < iVar2) {
    FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x30),4);
  }
  iVar2 = FArchive::Ver(param_1);
  if (0x6a < iVar2) {
    FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x18),4);
    FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x1c),4);
    FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x20),4);
    FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x24),4);
  }
  return param_1;
}


// ==== 1038d900 FUN_1038d900

FArchive * FUN_1038d900(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  FArchive *this;
  
  uVar1 = thunk_FUN_1037a940(param_1,param_2 + 0xc,param_2 + 0x24);
  this = (FArchive *)thunk_FUN_1037a940(uVar1);
  (**(code **)(*(int *)this + 4))(param_2 + 0x3c,1);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x40),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x44),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x48),4);
  return this;
}


// ==== 1038d980 FUN_1038d980

void FUN_1038d980(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb47e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_
            (in_ECX + 0xc,0x18,2,TLazyArray<unsigned_char>::~TLazyArray<unsigned_char>);
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038d9f0 FUN_1038d9f0

void FUN_1038d9f0(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb4a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10374410(param_1);
  local_4 = 0;
  *in_ECX = FStaticLightMapTexture::vftable;
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 3,(void *)(param_1 + 0xc),0x18,2,
             TLazyArray<unsigned_char>::TLazyArray<unsigned_char>,
             TLazyArray<unsigned_char>::~TLazyArray<unsigned_char>);
  *(undefined1 *)(in_ECX + 0xf) = *(undefined1 *)(param_1 + 0x3c);
  in_ECX[0x10] = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0x11] = *(undefined4 *)(param_1 + 0x44);
  in_ECX[0x12] = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = local_c;
  return;
}


// ==== 1038daa0 FUN_1038daa0

void FUN_1038daa0(int param_1)

{
  TArray<unsigned_char> *pTVar1;
  int iVar2;
  int iVar3;
  TArray<unsigned_char> *pTVar4;
  TArray<unsigned_char> *in_ECX;
  TArray<unsigned_char> *this;
  undefined4 *puVar5;
  
  iVar2 = param_1;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  iVar3 = param_1 - (int)in_ECX;
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  puVar5 = (undefined4 *)(param_1 + 0x14);
  param_1 = 2;
  pTVar1 = in_ECX;
  do {
    this = pTVar1 + 0x18;
    if (puVar5 == (undefined4 *)0x8) {
      pTVar4 = (TArray<unsigned_char> *)0x0;
    }
    else {
      pTVar4 = this + iVar3;
    }
    TArray<unsigned_char>::operator=(this,pTVar4);
    *(undefined4 *)(pTVar1 + 0x10) = puVar5[-1];
    *(undefined4 *)(pTVar1 + 0x14) = *puVar5;
    puVar5 = puVar5 + 6;
    param_1 = param_1 + -1;
    pTVar1 = this;
  } while (param_1 != 0);
  in_ECX[0x3c] = *(TArray<unsigned_char> *)(iVar2 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(iVar2 + 0x48);
  return;
}


// ==== 1038db50 FUN_1038db50

void FUN_1038db50(byte param_1)

{
  FStaticLightMapTexture *in_ECX;
  
  FStaticLightMapTexture::~FStaticLightMapTexture(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1038db80 FUN_1038db80

FStaticLightMapTexture * FUN_1038db80(byte param_1)

{
  FStaticLightMapTexture *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x4c,*(int *)(in_ECX + -4),FStaticLightMapTexture::~FStaticLightMapTexture);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FStaticLightMapTexture::~FStaticLightMapTexture(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1038dc00 FUN_1038dc00

void FUN_1038dc00(void)

{
  TLazyArray<unsigned_char> *in_ECX;
  
  TLazyArray<unsigned_char>::TLazyArray<unsigned_char>(in_ECX,0);
  return;
}


// ==== 1038dc10 FUN_1038dc10

void FUN_1038dc10(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107fb4ee;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FStaticLightMapTexture::~FStaticLightMapTexture((FStaticLightMapTexture *)(in_ECX + 0x1c));
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10325f90();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038dc80 FUN_1038dc80

void FUN_1038dc80(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb52e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10336700(param_1);
  local_4 = 0;
  *in_ECX = FLightMapTexture::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  thunk_FUN_1032bc20(param_1 + 0x10);
  local_4 = CONCAT31(local_4._1_3_,1);
  FStaticLightMapTexture::FStaticLightMapTexture
            ((FStaticLightMapTexture *)(in_ECX + 7),(FStaticLightMapTexture *)(param_1 + 0x1c));
  in_ECX[0x1a] = *(undefined4 *)(param_1 + 0x68);
  ExceptionList = local_c;
  return;
}


// ==== 1038dd30 FUN_1038dd30

void FUN_1038dd30(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  thunk_FUN_1032bcd0(param_1 + 0x10);
  FStaticLightMapTexture::operator=
            ((FStaticLightMapTexture *)(in_ECX + 0x1c),(FStaticLightMapTexture *)(param_1 + 0x1c));
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  return;
}


// ==== 1038dd80 FUN_1038dd80

void FUN_1038dd80(byte param_1)

{
  FLightMapTexture *in_ECX;
  
  FLightMapTexture::~FLightMapTexture(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1038ddb0 FUN_1038ddb0

FLightMapTexture * FUN_1038ddb0(byte param_1)

{
  FLightMapTexture *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x6c,*(int *)(in_ECX + -4),FLightMapTexture::~FLightMapTexture);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FLightMapTexture::~FLightMapTexture(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1038de30 FUN_1038de30

void FUN_1038de30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb550;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  thunk_FUN_1037b100(param_1 + 1);
  ExceptionList = local_10;
  return;
}


// ==== 1038de84 Catch@1038de84

void Catch_1038de84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1038de98 Catch@1038de98

void Catch_1038de98(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SkinNotifyInfo_TimeBase::operator =");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038dee0 FUN_1038dee0

void FUN_1038dee0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb560;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  thunk_FUN_1037b100(param_1 + 2);
  ExceptionList = local_10;
  return;
}


// ==== 1038df3a Catch@1038df3a

void Catch_1038df3a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1038df4e Catch@1038df4e

void Catch_1038df4e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SkinNotifyInfo_RandomBase::operator =");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038df90 FUN_1038df90

void FUN_1038df90(undefined4 param_1)

{
  TLazyArray<unsigned_char> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TLazyArray<unsigned_char>::TLazyArray<unsigned_char>(in_ECX,0);
  *(undefined ***)in_ECX = FSoundData::vftable;
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 1038e000 FUN_1038e000

void FUN_1038e000(void)

{
  TLazyArray<unsigned_char> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb598;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TLazyArray<unsigned_char>::~TLazyArray<unsigned_char>(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038e050 FUN_1038e050

void FUN_1038e050(TLazyArray<unsigned_char> *param_1)

{
  TLazyArray<unsigned_char> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb5b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TLazyArray<unsigned_char>::TLazyArray<unsigned_char>(in_ECX,param_1);
  *(undefined ***)in_ECX = FSoundData::vftable;
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 1038e0c0 FUN_1038e0c0

void FUN_1038e0c0(int param_1)

{
  TArray<unsigned_char> *pTVar1;
  int in_ECX;
  
  if (param_1 == 0) {
    pTVar1 = (TArray<unsigned_char> *)0x0;
  }
  else {
    pTVar1 = (TArray<unsigned_char> *)(param_1 + 0xc);
  }
  TArray<unsigned_char>::operator=((TArray<unsigned_char> *)(in_ECX + 0xc),pTVar1);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 1038e110 FUN_1038e110

void FUN_1038e110(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107fb5f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USound::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x54));
  local_4 = (uint)local_4._1_3_ << 8;
  TLazyArray<unsigned_char>::~TLazyArray<unsigned_char>
            ((TLazyArray<unsigned_char> *)(in_ECX + 0x34));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038e1b0 FUN_1038e1b0

void FUN_1038e1b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb630;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = USound::vftable;
  FSoundData::FSoundData((FSoundData *)(in_ECX + 0x34),(USound *)in_ECX);
  local_4 = CONCAT31(local_4._1_3_,1);
  FName::FName((FName *)(in_ECX + 0x50));
  FString::FString((FString *)(in_ECX + 0x54));
  *(undefined4 *)(in_ECX + 100) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1038e250 FUN_1038e250

void FUN_1038e250(ushort *param_1,uint param_2)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb670;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = USound::vftable;
  FSoundData::FSoundData((FSoundData *)(in_ECX + 0x34),(USound *)in_ECX);
  local_4._0_1_ = 1;
  FName::FName((FName *)(in_ECX + 0x50));
  FString::FString((FString *)(in_ECX + 0x54));
  local_4 = CONCAT31(local_4._1_3_,2);
  FString::operator=((FString *)(in_ECX + 0x54),param_1);
  *(undefined4 *)(in_ECX + 100) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(uint *)(in_ECX + 0x6c) = param_2 | 4;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1038e320 FUN_1038e320

void FUN_1038e320(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb6b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = USound::vftable;
  FSoundData::FSoundData((FSoundData *)(in_ECX + 0x34),(FSoundData *)(param_1 + 0x34));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  FString::FString((FString *)(in_ECX + 0x54),(FString *)(param_1 + 0x54));
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  ExceptionList = local_c;
  return;
}


// ==== 1038e3f0 FUN_1038e3f0

void FUN_1038e3f0(UObject *param_1)

{
  TArray<unsigned_char> *pTVar1;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  if (param_1 == (UObject *)0xffffffcc) {
    pTVar1 = (TArray<unsigned_char> *)0x0;
  }
  else {
    pTVar1 = (TArray<unsigned_char> *)(param_1 + 0x40);
  }
  TArray<unsigned_char>::operator=((TArray<unsigned_char> *)(in_ECX + 0x40),pTVar1);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  FString::operator=((FString *)(in_ECX + 0x54),(FString *)(param_1 + 0x54));
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  return;
}


// ==== 1038e490 FUN_1038e490

void FUN_1038e490(byte param_1)

{
  USound *in_ECX;
  
  USound::~USound(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 1038e4c0 FUN_1038e4c0

USound * FUN_1038e4c0(byte param_1)

{
  USound *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x78,*(int *)(in_ECX + -4),USound::~USound);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USound::~USound(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return in_ECX;
}


// ==== 1038e540 FUN_1038e540

void FUN_1038e540(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  thunk_FUN_103795a0(param_1 + 7);
  thunk_FUN_103795a0(param_1 + 10);
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  return;
}


// ==== 1038e630 FUN_1038e630

void FUN_1038e630(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb6d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    FName::FName((FName *)&param_1,0);
    in_ECX[0x2a] = param_1;
    for (iVar1 = 0; iVar1 < (int)in_ECX[0x19]; iVar1 = iVar1 + 1) {
    }
    FArray::Empty((FArray *)(in_ECX + 0x18),4,0);
    in_ECX[0xf] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[5] = 0xffffffff;
    in_ECX[0xd] = 0;
    in_ECX[6] = 0;
    in_ECX[7] = 0;
    in_ECX[4] = 0xffffffff;
    *in_ECX = 0;
    in_ECX[0xb] = 0;
    in_ECX[0x11] = 0;
  }
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x10] = 0;
  for (iVar1 = 0; iVar1 < (int)in_ECX[0x1c]; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x1b),4,0);
  FArray::Empty((FArray *)(in_ECX + 0x1e),4,0);
  for (iVar1 = 0; iVar1 < (int)in_ECX[0x22]; iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(in_ECX + 0x21),0xc,0);
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1038e735 Catch@1038e735

void Catch_1038e735(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1038e749 Catch@1038e749

void Catch_1038e749(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038e7c0 FUN_1038e7c0

void FUN_1038e7c0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb6e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xf] = param_1[0xf];
  *in_ECX = *param_1;
  for (iVar1 = 0; iVar1 < (int)param_1[0x19]; iVar1 = iVar1 + 1) {
    thunk_FUN_1037ae60(param_1[0x18] + iVar1 * 4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1038e850 Catch@1038e850

void Catch_1038e850(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1038e864 Catch@1038e864

void Catch_1038e864(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FNMagicInfo::operator=");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038e8c0 FUN_1038e8c0

void FUN_1038e8c0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb6f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032bc20(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1038e920 FUN_1038e920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1038e920(undefined4 *param_1)

{
  UFunction *pUVar1;
  int *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_4c;
  undefined4 local_38 [3];
  FQuat local_2c [20];
  undefined4 uStack_18;
  undefined4 local_4;
  
  uStack_4c = 0x1038e933;
  FQuat::FQuat(local_2c);
  uStack_4c = 0;
  puVar4 = local_38;
  local_4 = 0;
  puVar3 = param_1;
  puVar5 = local_38;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *in_ECX;
  uVar7 = 0;
  uVar6 = _ENGINE_KUpdateState;
  pUVar1 = UObject::FindFunctionChecked();
  (**(code **)(iVar2 + 0x10))(pUVar1,uVar6,uVar7,puVar4);
  puVar4 = &uStack_4c;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  return uStack_18;
}


// ==== 1038e9b0 FUN_1038e9b0

void FUN_1038e9b0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb718;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103792c0();
  ExceptionList = local_c;
  return;
}


// ==== 1038ea00 FUN_1038ea00

void FUN_1038ea00(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10379230(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1038ea60 FUN_1038ea60

void FUN_1038ea60(UParticleMaterial *param_1)

{
  if (param_1 != (UParticleMaterial *)0x0) {
    UParticleMaterial::UParticleMaterial(param_1);
    return;
  }
  return;
}


// ==== 1038ea80 FUN_1038ea80

void FUN_1038ea80(undefined4 param_1)

{
  thunk_FUN_1032bfc0(param_1);
  return;
}


// ==== 1038eaa0 FUN_1038eaa0

void FUN_1038eaa0(undefined4 param_1)

{
  thunk_FUN_1032bfc0(param_1);
  return;
}


// ==== 1038eac0 FUN_1038eac0

void FUN_1038eac0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  FString::operator=((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  FString::operator=((FString *)(in_ECX + 4),(FString *)(param_1 + 4));
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  thunk_FUN_1037e6d0(param_1 + 0x10);
  thunk_FUN_1032bcd0(param_1 + 0x13);
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  in_ECX[0x1e] = param_1[0x1e];
  in_ECX[0x1f] = param_1[0x1f];
  in_ECX[0x20] = param_1[0x20];
  in_ECX[0x21] = param_1[0x21];
  in_ECX[0x22] = param_1[0x22];
  in_ECX[0x23] = param_1[0x23];
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x26] = param_1[0x26];
  in_ECX[0x27] = param_1[0x27];
  in_ECX[0x28] = param_1[0x28];
  in_ECX[0x29] = param_1[0x29];
  in_ECX[0x2a] = param_1[0x2a];
  in_ECX[0x2b] = param_1[0x2b];
  in_ECX[0x2c] = param_1[0x2c];
  in_ECX[0x2d] = param_1[0x2d];
  thunk_FUN_1032bcd0(param_1 + 0x2e);
  in_ECX[0x31] = param_1[0x31];
  in_ECX[0x32] = param_1[0x32];
  in_ECX[0x33] = param_1[0x33];
  in_ECX[0x34] = param_1[0x34];
  in_ECX[0x35] = param_1[0x35];
  in_ECX[0x36] = param_1[0x36];
  in_ECX[0x37] = param_1[0x37];
  return;
}


// ==== 1038ed00 FUN_1038ed00

void FUN_1038ed00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  thunk_FUN_1032bfc0(param_1 + 0xb);
  return;
}


// ==== 1038ed70 FUN_1038ed70

void FUN_1038ed70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb773;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  FString::FString((FString *)(in_ECX + 2),(FString *)(param_1 + 2));
  local_4 = 0;
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  thunk_FUN_1032bc20(param_1 + 7);
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  FString::FString((FString *)(in_ECX + 0xc),(FString *)(param_1 + 0xc));
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  ExceptionList = local_c;
  return;
}


// ==== 1038eea0 FUN_1038eea0

void FUN_1038eea0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  FString::operator=((FString *)(in_ECX + 2),(FString *)(param_1 + 2));
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  thunk_FUN_1032bcd0(param_1 + 7);
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  FString::operator=((FString *)(in_ECX + 0xc),(FString *)(param_1 + 0xc));
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  return;
}


// ==== 1038ef80 FUN_1038ef80

void FUN_1038ef80(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb7a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FLevelSceneNode::FLevelSceneNode(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = FWaterSheetSceneNode::vftable;
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(in_ECX + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(in_ECX + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(param_1 + 0x208);
  thunk_FUN_1032bc20(param_1 + 0x20c);
  ExceptionList = local_c;
  return;
}


// ==== 1038f0a0 FUN_1038f0a0

void FUN_1038f0a0(FLevelSceneNode *param_1)

{
  FLevelSceneNode *in_ECX;
  
  FLevelSceneNode::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(in_ECX + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(in_ECX + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(param_1 + 0x208);
  thunk_FUN_1032bcd0(param_1 + 0x20c);
  return;
}


// ==== 1038f170 FUN_1038f170

void FUN_1038f170(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  thunk_FUN_1037f190(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 1038f1d0 FUN_1038f1d0

void FUN_1038f1d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar3 = param_1;
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  iVar6 = 0;
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  piVar1 = (int *)(param_1 + 0x24);
  param_1 = 0;
  if (0 < *piVar1) {
    do {
      iVar2 = *(int *)(iVar3 + 0x20);
      iVar4 = FArray::Add((FArray *)(in_ECX + 0x20),1,0x20);
      param_1 = param_1 + 1;
      puVar7 = (undefined4 *)(iVar2 + iVar6);
      puVar8 = (undefined4 *)(iVar4 * 0x20 + *(int *)(in_ECX + 0x20));
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar6 = iVar6 + 0x20;
    } while (param_1 < *(int *)(iVar3 + 0x24));
  }
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(iVar3 + 0x30);
  return;
}


// ==== 1038f290 FUN_1038f290

void FUN_1038f290(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_1037f190(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


// ==== 1038f310 FUN_1038f310

void FUN_1038f310(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb7c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  thunk_FUN_1037f710(param_1 + 1);
  thunk_FUN_103795a0(param_1 + 4);
  thunk_FUN_10379900(param_1 + 7);
  ExceptionList = local_10;
  return;
}


// ==== 1038f37a Catch@1038f37a

void Catch_1038f37a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1038f38e Catch@1038f38e

void Catch_1038f38e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AnalogTrack::operator=");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038f450 FUN_1038f450

void FUN_1038f450(ULodMeshInstance *param_1)

{
  ULodMeshInstance *in_ECX;
  int iVar1;
  ULodMeshInstance *pUVar2;
  ULodMeshInstance *pUVar3;
  
  ULodMeshInstance::operator=(in_ECX,param_1);
  thunk_FUN_103795a0(param_1 + 0x88);
  thunk_FUN_103795a0(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  pUVar2 = param_1 + 0xb8;
  pUVar3 = in_ECX + 0xb8;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  return;
}


// ==== 1038f510 FUN_1038f510

void FUN_1038f510(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_10379900(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 1038f550 FUN_1038f550

FArchive * FUN_1038f550(int *param_1,int param_2)

{
  undefined4 uVar1;
  FArchive *this;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_2);
  this = (FArchive *)thunk_FUN_10378f20(uVar1,param_2 + 4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x10),4);
  return this;
}


// ==== 1038f5a0 FUN_1038f5a0

void FUN_1038f5a0(void)

{
  TArray<unsigned_char> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb7d8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038f5f0 FUN_1038f5f0

void FUN_1038f5f0(TArray<unsigned_char> *param_1)

{
  TArray<unsigned_char> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb7f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TArray<unsigned_char>::TArray<unsigned_char>(in_ECX,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1038f650 FUN_1038f650

void FUN_1038f650(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  thunk_FUN_10379900(param_1 + 1);
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  FString::operator=((FString *)(in_ECX + 6),(FString *)(param_1 + 6));
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  return;
}


// ==== 1038f6c0 FUN_1038f6c0

void FUN_1038f6c0(UOrcMove *param_1)

{
  if (param_1 != (UOrcMove *)0x0) {
    UOrcMove::UOrcMove(param_1);
    return;
  }
  return;
}


// ==== 1038f6e0 FUN_1038f6e0

void FUN_1038f6e0(UL2OrcMove *param_1)

{
  UL2OrcMove *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb823;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UL2OrcMove::UL2OrcMove(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UOrcMove::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UOrcMove::vftable_for_FExec_;
  thunk_FUN_10378a50(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x59c) = *(undefined4 *)(param_1 + 0x59c);
  ExceptionList = local_c;
  return;
}


// ==== 1038f780 FUN_1038f780

void FUN_1038f780(USubsystem *param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::operator=(in_ECX,param_1);
  thunk_FUN_10378b70(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x59c) = *(undefined4 *)(param_1 + 0x59c);
  return;
}


// ==== 1038f7c0 FUN_1038f7c0

void FUN_1038f7c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb849;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038f880 FUN_1038f880

FArchive * FUN_1038f880(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb860;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10330040(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_1032ad90(4,param_2);
      thunk_FUN_10330040(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1038f941 Catch@1038f941

void Catch_1038f941(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1038f955 Catch@1038f955

void Catch_1038f955(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038f9b0 FUN_1038f9b0

void FUN_1038f9b0(TArray<unsigned_char> *param_1)

{
  TArray<unsigned_char> *pTVar1;
  TArray<unsigned_char> *in_ECX;
  
  if (in_ECX != param_1) {
    pTVar1 = TArray<unsigned_char>::operator+(in_ECX,param_1);
    TArray<unsigned_char>::operator=(in_ECX,pTVar1);
  }
  return;
}


// ==== 1038f9e0 FUN_1038f9e0

void FUN_1038f9e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb879;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10381e30(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038fa50 FUN_1038fa50

void FUN_1038fa50(FArray *param_1)

{
  int iVar1;
  FRebuildOptions *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_10381ef0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x2c);
      this = (FRebuildOptions *)(iVar1 * 0x2c + *(int *)in_ECX);
      if (this != (FRebuildOptions *)0x0) {
        FRebuildOptions::FRebuildOptions(this,(FRebuildOptions *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1038fad0 FUN_1038fad0

void FUN_1038fad0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb899;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038fb90 FUN_1038fb90

FArchive * FUN_1038fb90(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb8b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0xc);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_103301d0(param_1,*(int *)param_2 + iVar1 * 0xc);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0xc,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10370680(0xc,param_2);
      thunk_FUN_103301d0(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1038fc63 Catch@1038fc63

void Catch_1038fc63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1038fc77 Catch@1038fc77

void Catch_1038fc77(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038fce0 FUN_1038fce0

void FUN_1038fce0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb8c9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038fda0 FUN_1038fda0

FArchive * FUN_1038fda0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb8e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10330060(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_103706d0(4,param_2);
      thunk_FUN_10330060(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1038fe70 Catch@1038fe70

void Catch_1038fe70(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1038fe84 Catch@1038fe84

void Catch_1038fe84(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1038fef0 FUN_1038fef0

void FUN_1038fef0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb8f9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1038ffb0 FUN_1038ffb0

void FUN_1038ffb0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10390040 FUN_10390040

void FUN_10390040(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fb919;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x1c);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x1c);
      if (*(int *)in_ECX + iVar1 * 0x1c != 0) {
        thunk_FUN_10381680(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10390110 FUN_10390110

void FUN_10390110(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb939;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103901d0 FUN_103901d0

void FUN_103901d0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10390260 FUN_10390260

void FUN_10390260(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb959;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10382200(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103902d0 FUN_103902d0

void FUN_103902d0(FArray *param_1)

{
  FWayPoint *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_10382300(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x18);
      this = (FWayPoint *)(*(int *)in_ECX + iVar1 * 0x18);
      if (this != (FWayPoint *)0x0) {
        FWayPoint::FWayPoint(this,(FWayPoint *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10390350 FUN_10390350

void FUN_10390350(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103903c0 FUN_103903c0

void FUN_103903c0(int param_1)

{
  FArray *in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  FArray::Empty(in_ECX,0x14c,param_1);
  return;
}


// ==== 10390420 FUN_10390420

int FUN_10390420(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = FArray::Add(in_ECX,param_1,0x14c);
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  iVar3 = 0;
  puVar4 = (undefined4 *)(iVar1 * 0x14c + *(int *)in_ECX);
  for (uVar2 = (uint)(param_1 * 0x14c) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return iVar1;
}


// ==== 103904c0 FUN_103904c0

void FUN_103904c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb979;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10390580 FUN_10390580

void FUN_10390580(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb999;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10390640 FUN_10390640

void FUN_10390640(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103906e0 FUN_103906e0

void FUN_103906e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb9b9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103907a0 FUN_103907a0

FArchive * FUN_103907a0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FTangent *pFVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fb9d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0xc);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,(FTangent *)(*(int *)param_2 + iVar1 * 0xc));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0xc,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      pFVar2 = (FTangent *)thunk_FUN_10370870(0xc,param_2);
      operator<<(param_1,pFVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10390873 Catch@10390873

void Catch_10390873(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10390887 Catch@10390887

void Catch_10390887(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103908f0 FUN_103908f0

void FUN_103908f0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10390980 FUN_10390980

void FUN_10390980(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fb9e9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x2c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10390a40 FUN_10390a40

FArchive * FUN_10390a40(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FUntransformedVertex *pFVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fba00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x2c);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,(FUntransformedVertex *)(iVar1 * 0x2c + *(int *)param_2));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x2c,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      pFVar2 = (FUntransformedVertex *)thunk_FUN_103708a0(0x2c,param_2);
      operator<<(param_1,pFVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10390b12 Catch@10390b12

void Catch_10390b12(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10390b26 Catch@10390b26

void Catch_10390b26(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10390b90 FUN_10390b90

void FUN_10390b90(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x2c,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x2c);
        puVar3 = (undefined4 *)(iVar2 * 0x2c + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x2c);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10390c20 FUN_10390c20

void FUN_10390c20(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fba19;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10390ce0 FUN_10390ce0

FArchive * FUN_10390ce0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fba30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_103327c0(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_103708c0(4,param_2);
      thunk_FUN_103327c0(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10390db0 Catch@10390db0

void Catch_10390db0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10390dc4 Catch@10390dc4

void Catch_10390dc4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10390e30 FUN_10390e30

void FUN_10390e30(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10390ea0 FUN_10390ea0

void FUN_10390ea0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fba49;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10390f60 FUN_10390f60

FArchive * FUN_10390f60(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FUV2Data *pFVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fba60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,8);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,(FUV2Data *)(*(int *)param_2 + iVar1 * 8));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,8,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      pFVar2 = (FUV2Data *)thunk_FUN_103708e0(8,param_2);
      operator<<(param_1,pFVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10391030 Catch@10391030

void Catch_10391030(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10391044 Catch@10391044

void Catch_10391044(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103910b0 FUN_103910b0

void FUN_103910b0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10391120 FUN_10391120

void FUN_10391120(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fba79;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x28);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103911e0 FUN_103911e0

FArchive * FUN_103911e0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FPosNormTexData *pFVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fba90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x28);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,(FPosNormTexData *)(*(int *)param_2 + iVar1 * 0x28));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x28,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      pFVar2 = (FPosNormTexData *)thunk_FUN_10370900(0x28,param_2);
      operator<<(param_1,pFVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 103912b3 Catch@103912b3

void Catch_103912b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 103912c7 Catch@103912c7

void Catch_103912c7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10391330 FUN_10391330

FArray * FUN_10391330(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x28,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x28);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x28);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x28);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return in_ECX;
}


// ==== 103913d0 FUN_103913d0

void FUN_103913d0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbaa9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x40);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10391490 FUN_10391490

void FUN_10391490(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x40,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x40);
        puVar3 = (undefined4 *)(iVar2 * 0x40 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x40);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10391520 FUN_10391520

void FUN_10391520(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbac9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103915e0 FUN_103915e0

void FUN_103915e0(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10391680 FUN_10391680

void FUN_10391680(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbae9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10391740 FUN_10391740

void FUN_10391740(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103917b0 FUN_103917b0

void FUN_103917b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbb09;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x1c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10391870 FUN_10391870

FArray * FUN_10391870(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x1c,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x1c);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x1c);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x1c);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return in_ECX;
}


// ==== 10391910 FUN_10391910

void FUN_10391910(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbb29;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x18);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103919d0 FUN_103919d0

void FUN_103919d0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x18,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10391a80 FUN_10391a80

void FUN_10391a80(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbb49;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10391b40 FUN_10391b40

void FUN_10391b40(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x14,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10391be0 FUN_10391be0

void FUN_10391be0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbb69;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10391ca0 FUN_10391ca0

void FUN_10391ca0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10391d10 FUN_10391d10

void FUN_10391d10(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbb89;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x28);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10391dd0 FUN_10391dd0

FArchive * FUN_10391dd0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FBspVertex *pFVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fbba0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x28);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,(FBspVertex *)(*(int *)param_2 + iVar1 * 0x28));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x28,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      pFVar2 = (FBspVertex *)thunk_FUN_10370a70(0x28,param_2);
      operator<<(param_1,pFVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10391ea3 Catch@10391ea3

void Catch_10391ea3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10391eb7 Catch@10391eb7

void Catch_10391eb7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10391f20 FUN_10391f20

FArray * FUN_10391f20(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x28,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x28);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x28);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x28);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return in_ECX;
}


// ==== 10391fc0 FUN_10391fc0

void FUN_10391fc0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fbbb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x38);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x38);
      if (*(int *)in_ECX + iVar1 * 0x38 != 0) {
        thunk_FUN_10381780(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x38;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10392090 FUN_10392090

void FUN_10392090(int *param_1)

{
  int iVar1;
  FLightMapTexture *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fbbd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x6c);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x6c);
      this = (FLightMapTexture *)(iVar1 * 0x6c + *(int *)in_ECX);
      if (this != (FLightMapTexture *)0x0) {
        FLightMapTexture::FLightMapTexture(this,(FLightMapTexture *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x6c;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10392150 FUN_10392150

void FUN_10392150(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbbf9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103830e0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103921c0 FUN_103921c0

void FUN_103921c0(FArray *param_1)

{
  int iVar1;
  FLightMapTexture *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103831b0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x6c);
      this = (FLightMapTexture *)(iVar1 * 0x6c + *(int *)in_ECX);
      if (this != (FLightMapTexture *)0x0) {
        FLightMapTexture::FLightMapTexture(this,(FLightMapTexture *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x6c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10392240 FUN_10392240

void FUN_10392240(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbc19;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10392300 FUN_10392300

void FUN_10392300(undefined4 param_1,int param_2)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fbc41;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_2,0xc);
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 10392370 FUN_10392370

void FUN_10392370(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fbc69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x44);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x44);
      if (*(int *)in_ECX + iVar1 * 0x44 != 0) {
        thunk_FUN_103818c0(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x44;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10392430 FUN_10392430

void FUN_10392430(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbc89;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103924f0 FUN_103924f0

void FUN_103924f0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x14,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10392590 FUN_10392590

void FUN_10392590(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbca9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10392650 FUN_10392650

void FUN_10392650(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103926c0 FUN_103926c0

void FUN_103926c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbcc9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10383420(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10392730 FUN_10392730

void FUN_10392730(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbce9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103927f0 FUN_103927f0

void FUN_103927f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbd09;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103928b0 FUN_103928b0

void FUN_103928b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbd29;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10392970 FUN_10392970

void FUN_10392970(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10392a00 FUN_10392a00

void FUN_10392a00(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fbd51;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10392a50 FUN_10392a50

void FUN_10392a50(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbd79;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10392b10 FUN_10392b10

void FUN_10392b10(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10392b80 FUN_10392b80

void FUN_10392b80(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbd99;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10392c40 FUN_10392c40

void FUN_10392c40(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10392ce0 FUN_10392ce0

void FUN_10392ce0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbdb9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10383b20(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10392d50 FUN_10392d50

FArchive * FUN_10392d50(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FKSphereElem *this;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fbdd0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x44);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      thunk_FUN_1033d1a0(param_1,*(int *)param_2 + iVar3 * 0x44);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_1037b4c0(local_18);
    while (iVar3 < local_18) {
      this = (FKSphereElem *)thunk_FUN_10370d10(0x44,param_2);
      if (this == (FKSphereElem *)0x0) {
        thunk_FUN_1033d1a0(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = FKSphereElem::FKSphereElem(this);
        thunk_FUN_1033d1a0(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10392e2e Catch@10392e2e

void Catch_10392e2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10392e42 Catch@10392e42

void Catch_10392e42(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10392eb0 FUN_10392eb0

void FUN_10392eb0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbde9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10383c20(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10392f20 FUN_10392f20

FArchive * FUN_10392f20(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FKBoxElem *this;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fbe00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x4c);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      thunk_FUN_1033d360(param_1,iVar3 * 0x4c + *(int *)param_2);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_1037b6d0(local_18);
    while (iVar3 < local_18) {
      this = (FKBoxElem *)thunk_FUN_10370d40(0x4c,param_2);
      if (this == (FKBoxElem *)0x0) {
        thunk_FUN_1033d360(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = FKBoxElem::FKBoxElem(this);
        thunk_FUN_1033d360(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10392ff9 Catch@10392ff9

void Catch_10392ff9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1039300d Catch@1039300d

void Catch_1039300d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10393070 FUN_10393070

void FUN_10393070(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbe19;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10383d20(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103930e0 FUN_103930e0

FArchive * FUN_103930e0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FKCylinderElem *this;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fbe30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x48);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      thunk_FUN_1033d4d0(param_1,*(int *)param_2 + iVar3 * 0x48);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_1037b8d0(local_18);
    while (iVar3 < local_18) {
      this = (FKCylinderElem *)thunk_FUN_10370d60(0x48,param_2);
      if (this == (FKCylinderElem *)0x0) {
        thunk_FUN_1033d4d0(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = FKCylinderElem::FKCylinderElem(this);
        thunk_FUN_1033d4d0(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 103931ba Catch@103931ba

void Catch_103931ba(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 103931ce Catch@103931ce

void Catch_103931ce(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10393250 FUN_10393250

void FUN_10393250(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103932e0 FUN_103932e0

void FUN_103932e0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10393390 FUN_10393390

void FUN_10393390(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbe49;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x24);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393450 FUN_10393450

void FUN_10393450(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbe69;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10384080(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103934c0 FUN_103934c0

FArchive * FUN_103934c0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FKeyValuePair *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fbe80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x18);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      operator<<(param_1,(FKeyValuePair *)(*(int *)param_2 + iVar3 * 0x18));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103841b0(local_18);
    while (iVar3 < local_18) {
      pFVar2 = (FKeyValuePair *)thunk_FUN_10370e60(0x18,param_2);
      if (pFVar2 == (FKeyValuePair *)0x0) {
        operator<<(param_1,(FKeyValuePair *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FKeyValuePair *)FKeyValuePair::FKeyValuePair(pFVar2);
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1039359a Catch@1039359a

void Catch_1039359a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 103935ae Catch@103935ae

void Catch_103935ae(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10393610 FUN_10393610

void FUN_10393610(FArray *param_1)

{
  FKeyValuePair *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103841b0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x18);
      this = (FKeyValuePair *)(*(int *)in_ECX + iVar1 * 0x18);
      if (this != (FKeyValuePair *)0x0) {
        FKeyValuePair::FKeyValuePair(this,(FKeyValuePair *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103936b0 FUN_103936b0

void FUN_103936b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbe99;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393790 FUN_10393790

void FUN_10393790(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbeb9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393870 FUN_10393870

void FUN_10393870(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbed9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393930 FUN_10393930

void FUN_10393930(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fbf01;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 103939a0 FUN_103939a0

void FUN_103939a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fbf31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10393a30 FUN_10393a30

void FUN_10393a30(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbf59;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393b10 FUN_10393b10

void FUN_10393b10(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbf79;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393bf0 FUN_10393bf0

void FUN_10393bf0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbf99;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393cd0 FUN_10393cd0

void FUN_10393cd0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbfb9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393db0 FUN_10393db0

void FUN_10393db0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbfd9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393e90 FUN_10393e90

void FUN_10393e90(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fbff9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10393f70 FUN_10393f70

void FUN_10393f70(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc019;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394050 FUN_10394050

void FUN_10394050(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc039;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394130 FUN_10394130

void FUN_10394130(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc059;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394210 FUN_10394210

void FUN_10394210(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc079;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103942f0 FUN_103942f0

void FUN_103942f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc099;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103943d0 FUN_103943d0

void FUN_103943d0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc0b9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103944b0 FUN_103944b0

void FUN_103944b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc0d9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394590 FUN_10394590

void FUN_10394590(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc0f9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394670 FUN_10394670

void FUN_10394670(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc119;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394750 FUN_10394750

void FUN_10394750(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc139;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394830 FUN_10394830

void FUN_10394830(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc159;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394910 FUN_10394910

void FUN_10394910(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc179;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103949f0 FUN_103949f0

void FUN_103949f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc199;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394ad0 FUN_10394ad0

void FUN_10394ad0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc1b9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394b90 FUN_10394b90

void FUN_10394b90(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fc1e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10394c20 FUN_10394c20

void FUN_10394c20(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc209;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394d00 FUN_10394d00

void FUN_10394d00(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc229;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394de0 FUN_10394de0

void FUN_10394de0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc249;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x18);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10394ea0 FUN_10394ea0

void FUN_10394ea0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fc271;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10394f30 FUN_10394f30

void FUN_10394f30(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc299;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395010 FUN_10395010

void FUN_10395010(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc2b9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103950f0 FUN_103950f0

void FUN_103950f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc2d9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103951d0 FUN_103951d0

void FUN_103951d0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc2f9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103952b0 FUN_103952b0

void FUN_103952b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc319;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x28);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395370 FUN_10395370

void FUN_10395370(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fc341;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 103953e0 FUN_103953e0

void FUN_103953e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc369;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103954c0 FUN_103954c0

void FUN_103954c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc389;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xe0);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103955a0 FUN_103955a0

void FUN_103955a0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc3a9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x1c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395680 FUN_10395680

void FUN_10395680(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc3c9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x18);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395760 FUN_10395760

void FUN_10395760(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc3e9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x20);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395840 FUN_10395840

void FUN_10395840(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc409;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x34);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395920 FUN_10395920

void FUN_10395920(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc429;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x20);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395a00 FUN_10395a00

void FUN_10395a00(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc449;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395ae0 FUN_10395ae0

void FUN_10395ae0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc469;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395bc0 FUN_10395bc0

void FUN_10395bc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc489;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10386f80(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395c50 FUN_10395c50

void FUN_10395c50(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc4a9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395d10 FUN_10395d10

void FUN_10395d10(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fc4d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10395d80 FUN_10395d80

void FUN_10395d80(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc4f9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395e60 FUN_10395e60

void FUN_10395e60(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc519;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10395f40 FUN_10395f40

void FUN_10395f40(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc539;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396020 FUN_10396020

void FUN_10396020(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc559;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103960e0 FUN_103960e0

void FUN_103960e0(undefined4 param_1,int param_2)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fc581;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_2,4);
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 10396150 FUN_10396150

void FUN_10396150(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc5a9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396210 FUN_10396210

void FUN_10396210(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x14,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103962b0 FUN_103962b0

void FUN_103962b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc5c9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396370 FUN_10396370

void FUN_10396370(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103963e0 FUN_103963e0

void FUN_103963e0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc5e9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103964a0 FUN_103964a0

void FUN_103964a0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc609;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396560 FUN_10396560

void FUN_10396560(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103965d0 FUN_103965d0

void FUN_103965d0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc629;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396690 FUN_10396690

void FUN_10396690(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10396700 FUN_10396700

void FUN_10396700(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc649;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103967c0 FUN_103967c0

void FUN_103967c0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10396830 FUN_10396830

void FUN_10396830(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc669;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103968f0 FUN_103968f0

void FUN_103968f0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10396960 FUN_10396960

void FUN_10396960(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc689;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396a20 FUN_10396a20

void FUN_10396a20(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x14,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10396ac0 FUN_10396ac0

void FUN_10396ac0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc6a9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396b80 FUN_10396b80

void FUN_10396b80(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10396bf0 FUN_10396bf0

void FUN_10396bf0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc6c9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396cb0 FUN_10396cb0

void FUN_10396cb0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10396d40 FUN_10396d40

void FUN_10396d40(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc6e9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x3c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396e00 FUN_10396e00

FArray * FUN_10396e00(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x3c,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x3c);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x3c);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x3c);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return in_ECX;
}


// ==== 10396ea0 FUN_10396ea0

void FUN_10396ea0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc709;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10388080(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10396f10 FUN_10396f10

void FUN_10396f10(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    thunk_FUN_10388150(*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x118);
        puVar3 = (undefined4 *)(iVar2 * 0x118 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x118);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10396fa0 FUN_10396fa0

void FUN_10396fa0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &UViewport::PrivateStaticClass;
  in_ECX[1] = 0xffffffff;
  thunk_FUN_103737b0();
  return;
}


// ==== 10396fc0 FUN_10396fc0

void FUN_10396fc0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc729;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397080 FUN_10397080

void FUN_10397080(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103970f0 FUN_103970f0

void FUN_103970f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc749;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103971b0 FUN_103971b0

void FUN_103971b0(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10397250 FUN_10397250

void FUN_10397250(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc769;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397310 FUN_10397310

void FUN_10397310(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10397380 FUN_10397380

void FUN_10397380(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc789;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x20);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397440 FUN_10397440

FArchive * FUN_10397440(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fc7a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x20);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10360a10(param_1,iVar1 * 0x20 + *(int *)param_2);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x20,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10371860(0x20,param_2);
      thunk_FUN_10360a10(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10397512 Catch@10397512

void Catch_10397512(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10397526 Catch@10397526

void Catch_10397526(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10397590 FUN_10397590

void FUN_10397590(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc7b9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397650 FUN_10397650

void FUN_10397650(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103976c0 FUN_103976c0

void FUN_103976c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc7d9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397780 FUN_10397780

void FUN_10397780(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103977f0 FUN_103977f0

void FUN_103977f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc7f9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103978b0 FUN_103978b0

void FUN_103978b0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10397940 FUN_10397940

void FUN_10397940(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc819;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397a00 FUN_10397a00

void FUN_10397a00(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10397a70 FUN_10397a70

void FUN_10397a70(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc839;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397b30 FUN_10397b30

FArchive * FUN_10397b30(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FSpringVertex *pFVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fc850;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x10);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,(FSpringVertex *)(iVar1 * 0x10 + *(int *)param_2));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x10,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      pFVar2 = (FSpringVertex *)thunk_FUN_10371930(0x10,param_2);
      operator<<(param_1,pFVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10397c02 Catch@10397c02

void Catch_10397c02(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10397c16 Catch@10397c16

void Catch_10397c16(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10397c80 FUN_10397c80

void FUN_10397c80(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10397d20 FUN_10397d20

void FUN_10397d20(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc869;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397de0 FUN_10397de0

void FUN_10397de0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc889;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397ea0 FUN_10397ea0

void FUN_10397ea0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10397f30 FUN_10397f30

void FUN_10397f30(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc8a9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10397ff0 FUN_10397ff0

void FUN_10397ff0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc8c9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x34);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103980b0 FUN_103980b0

void FUN_103980b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fc8e9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10398170 FUN_10398170

void FUN_10398170(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103981e0 FUN_103981e0

void FUN_103981e0(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fc914;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 3),param_1,0xc);
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = TLazyArray<FMeshWedge>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103982a0 FUN_103982a0

FArchive * FUN_103982a0(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,2);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  return param_1;
}


// ==== 10398310 FUN_10398310

void FUN_10398310(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fc957;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = TLazyArray<FMeshWedge>::vftable;
  local_8 = 1;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x44))();
  }
  local_8 = 0xffffffff;
  thunk_FUN_103977f0();
  ExceptionList = local_10;
  return;
}


// ==== 10398376 Catch@10398376

void Catch_10398376(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1039838a Catch@1039838a

void Catch_1039838a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::~TLazyArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103983d0 FUN_103983d0

void FUN_103983d0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fc970;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) < 0) {
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x10); iVar1 = iVar1 + 1) {
    }
    ExceptionList = &local_10;
    FArray::Empty((FArray *)(in_ECX + 0xc),0xc,0);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1039843c Catch@1039843c

void Catch_1039843c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10398450 Catch@10398450

void Catch_10398450(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Unload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103984a0 FUN_103984a0

void FUN_103984a0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fc9a7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = TLazyArray<FMeshFace>::vftable;
  local_8 = 1;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x44))();
  }
  local_8 = 0xffffffff;
  thunk_FUN_103976c0();
  ExceptionList = local_10;
  return;
}


// ==== 10398506 Catch@10398506

void Catch_10398506(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1039851a Catch@1039851a

void Catch_1039851a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::~TLazyArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10398560 FUN_10398560

FArchive * FUN_10398560(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,2);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 2),2);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),2);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 6),2);
  return param_1;
}


// ==== 103985e0 FUN_103985e0

void FUN_103985e0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fc9c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) < 0) {
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x10); iVar1 = iVar1 + 1) {
    }
    ExceptionList = &local_10;
    FArray::Empty((FArray *)(in_ECX + 0xc),8,0);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1039864c Catch@1039864c

void Catch_1039864c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10398660 Catch@10398660

void Catch_10398660(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Unload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103986b0 FUN_103986b0

void FUN_103986b0(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fc9e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 3),param_1,0xc);
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = TLazyArray<FVector>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10398730 FUN_10398730

void FUN_10398730(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fca00;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) < 0) {
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x10); iVar1 = iVar1 + 1) {
    }
    ExceptionList = &local_10;
    FArray::Empty((FArray *)(in_ECX + 0xc),0xc,0);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1039879c Catch@1039879c

void Catch_1039879c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 103987b0 Catch@103987b0

void Catch_103987b0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Unload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10398800 FUN_10398800

void FUN_10398800(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fca37;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = TLazyArray<FVector>::vftable;
  local_8 = 1;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x44))();
  }
  local_8 = 0xffffffff;
  thunk_FUN_1038fad0();
  ExceptionList = local_10;
  return;
}


// ==== 10398866 Catch@10398866

void Catch_10398866(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1039887a Catch@1039887a

void Catch_1039887a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::~TLazyArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103988c0 FUN_103988c0

void FUN_103988c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fca50;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x28))();
    (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(*(undefined4 *)(in_ECX + 8));
    thunk_FUN_1038fb90(*(undefined4 *)(in_ECX + 4),in_ECX + 0xc);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
    (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(uVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10398945 Catch@10398945

void Catch_10398945(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10398959 Catch@10398959

void Catch_10398959(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103989b0 FUN_103989b0

void FUN_103989b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fca69;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x30);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10398a70 FUN_10398a70

void FUN_10398a70(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x30,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x30);
        puVar4 = (undefined4 *)(iVar2 * 0x30 + *(int *)in_ECX);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x30);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10398b00 FUN_10398b00

void FUN_10398b00(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fca89;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x20);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10398bc0 FUN_10398bc0

void FUN_10398bc0(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x20,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x20);
        puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x20);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10398c50 FUN_10398c50

void FUN_10398c50(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fcaa9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x18);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x18);
      if (*(int *)in_ECX + iVar1 * 0x18 != 0) {
        thunk_FUN_10381a20(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10398d10 FUN_10398d10

void FUN_10398d10(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcac9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x70);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10398dd0 FUN_10398dd0

void FUN_10398dd0(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x70,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x70);
        puVar3 = (undefined4 *)(iVar2 * 0x70 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x70);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10398e60 FUN_10398e60

void FUN_10398e60(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcae9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x3c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10398f20 FUN_10398f20

FArray * FUN_10398f20(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x3c,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x3c);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x3c);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x3c);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return in_ECX;
}


// ==== 10398fc0 FUN_10398fc0

void FUN_10398fc0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcb09;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x2c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399080 FUN_10399080

void FUN_10399080(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x2c,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x2c);
        puVar3 = (undefined4 *)(iVar2 * 0x2c + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x2c);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10399110 FUN_10399110

void FUN_10399110(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcb29;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103991d0 FUN_103991d0

void FUN_103991d0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10399260 FUN_10399260

void FUN_10399260(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcb49;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399320 FUN_10399320

void FUN_10399320(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10399390 FUN_10399390

void FUN_10399390(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fcb74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 3),param_1,0xc);
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = TLazyArray<VTriangle>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10399410 FUN_10399410

FArchive * FUN_10399410(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,2);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 2),2);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),2);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 6,1);
  (**(code **)(*(int *)param_1 + 4))((int)param_2 + 7,1);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  return param_1;
}


// ==== 103994b0 FUN_103994b0

void FUN_103994b0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fcbb7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = TLazyArray<VTriangle>::vftable;
  local_8 = 1;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x44))();
  }
  local_8 = 0xffffffff;
  thunk_FUN_10397de0();
  ExceptionList = local_10;
  return;
}


// ==== 10399516 Catch@10399516

void Catch_10399516(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1039952a Catch@1039952a

void Catch_1039952a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::~TLazyArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10399570 FUN_10399570

void FUN_10399570(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fcbd0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) < 0) {
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x10); iVar1 = iVar1 + 1) {
    }
    ExceptionList = &local_10;
    FArray::Empty((FArray *)(in_ECX + 0xc),0xc,0);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 103995dc Catch@103995dc

void Catch_103995dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 103995f0 Catch@103995f0

void Catch_103995f0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Unload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10399640 FUN_10399640

void FUN_10399640(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcbe9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x40);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399700 FUN_10399700

void FUN_10399700(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x40,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x40);
        puVar3 = (undefined4 *)(iVar2 * 0x40 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x40);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 10399790 FUN_10399790

void FUN_10399790(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcc09;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399850 FUN_10399850

void FUN_10399850(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103998c0 FUN_103998c0

void FUN_103998c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcc29;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399980 FUN_10399980

void FUN_10399980(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10399a20 FUN_10399a20

void FUN_10399a20(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcc49;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x2c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399ae0 FUN_10399ae0

void FUN_10399ae0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcc69;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x20);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399ba0 FUN_10399ba0

void FUN_10399ba0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcc89;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xa8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399c60 FUN_10399c60

void FUN_10399c60(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcca9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399d20 FUN_10399d20

void FUN_10399d20(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10399db0 FUN_10399db0

void FUN_10399db0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fccc9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x10);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399e70 FUN_10399e70

void FUN_10399e70(FArray *param_1)

{
  int iVar1;
  FSphere *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      this = (FSphere *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (this != (FSphere *)0x0) {
        FSphere::FSphere(this,(FSphere *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10399ef0 FUN_10399ef0

void FUN_10399ef0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcce9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103899b0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399f80 FUN_10399f80

void FUN_10399f80(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcd09;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10389a80(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10399ff0 FUN_10399ff0

void FUN_10399ff0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcd29;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x24);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039a0b0 FUN_1039a0b0

FArchive * FUN_1039a0b0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FTerrainVertex *pFVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fcd40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x24);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,(FTerrainVertex *)(*(int *)param_2 + iVar1 * 0x24));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x24,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      pFVar2 = (FTerrainVertex *)thunk_FUN_10371d20(0x24,param_2);
      operator<<(param_1,pFVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1039a183 Catch@1039a183

void Catch_1039a183(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1039a197 Catch@1039a197

void Catch_1039a197(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039a200 FUN_1039a200

FArray * FUN_1039a200(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x24,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x24);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x24);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x24);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return in_ECX;
}


// ==== 1039a2a0 FUN_1039a2a0

void FUN_1039a2a0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fcd64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1;
        *puVar2 = *(undefined4 *)(iVar1 + iVar4);
        TArray<unsigned_char>::TArray<unsigned_char>
                  ((TArray<unsigned_char> *)(puVar2 + 1),
                   (TArray<unsigned_char> *)(iVar1 + iVar4 + 4));
        local_4 = local_4 & 0xffffff00;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039a370 FUN_1039a370

void FUN_1039a370(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcd89;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x60);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039a430 FUN_1039a430

void FUN_1039a430(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x60,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x60);
        puVar4 = (undefined4 *)(iVar2 * 0x60 + *(int *)in_ECX);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x60);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 1039a4c0 FUN_1039a4c0

void FUN_1039a4c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcda9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039a580 FUN_1039a580

void FUN_1039a580(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1039a5f0 FUN_1039a5f0

void FUN_1039a5f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcdc9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x18);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039a6b0 FUN_1039a6b0

void FUN_1039a6b0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x18,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039a760 FUN_1039a760

void FUN_1039a760(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcde9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039a820 FUN_1039a820

void FUN_1039a820(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x14,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039a8c0 FUN_1039a8c0

void FUN_1039a8c0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fce09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x14);
      if (*(int *)in_ECX + iVar1 * 0x14 != 0) {
        thunk_FUN_10381b60(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039a980 FUN_1039a980

void FUN_1039a980(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fce29;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10389fc0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039a9f0 FUN_1039a9f0

void FUN_1039a9f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fce54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1;
        *puVar2 = *(undefined4 *)(iVar1 + iVar4);
        TArray<unsigned_char>::TArray<unsigned_char>
                  ((TArray<unsigned_char> *)(puVar2 + 1),
                   (TArray<unsigned_char> *)(iVar1 + iVar4 + 4));
        local_4 = local_4 & 0xffffff00;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039aac0 FUN_1039aac0

void FUN_1039aac0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fce79;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1038a0e0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039ab30 FUN_1039ab30

void FUN_1039ab30(FArray *param_1)

{
  int iVar1;
  UTerrainBrush *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_1038a1b0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x68);
      this = (UTerrainBrush *)(iVar1 * 0x68 + *(int *)in_ECX);
      if (this != (UTerrainBrush *)0x0) {
        UTerrainBrush::UTerrainBrush(this,(UTerrainBrush *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x68;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039abb0 FUN_1039abb0

void FUN_1039abb0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fce99;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039ac70 FUN_1039ac70

void FUN_1039ac70(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1039ace0 FUN_1039ace0

void FUN_1039ace0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fceb9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039ada0 FUN_1039ada0

void FUN_1039ada0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x14,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039ae40 FUN_1039ae40

void FUN_1039ae40(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fced9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x18);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039af00 FUN_1039af00

FArchive * FUN_1039af00(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FStaticMeshVertex *pFVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fcef0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x18);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,(FStaticMeshVertex *)(*(int *)param_2 + iVar1 * 0x18));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x18,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      pFVar2 = (FStaticMeshVertex *)thunk_FUN_10371fc0(0x18,param_2);
      operator<<(param_1,pFVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1039afd3 Catch@1039afd3

void Catch_1039afd3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1039afe7 Catch@1039afe7

void Catch_1039afe7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039b050 FUN_1039b050

void FUN_1039b050(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x18,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039b100 FUN_1039b100

void FUN_1039b100(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcf09;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039b1c0 FUN_1039b1c0

FArchive * FUN_1039b1c0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FStaticMeshUV *pFVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fcf20;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,8);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      operator<<(param_1,(FStaticMeshUV *)(*(int *)param_2 + iVar1 * 8));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,8,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      pFVar2 = (FStaticMeshUV *)thunk_FUN_10371ff0(8,param_2);
      operator<<(param_1,pFVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1039b290 Catch@1039b290

void Catch_1039b290(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1039b2a4 Catch@1039b2a4

void Catch_1039b2a4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039b310 FUN_1039b310

void FUN_1039b310(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1039b380 FUN_1039b380

void FUN_1039b380(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcf39;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1038a500(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039b3f0 FUN_1039b3f0

void FUN_1039b3f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcf59;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039b4b0 FUN_1039b4b0

void FUN_1039b4b0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x14,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039b550 FUN_1039b550

void FUN_1039b550(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcf79;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x14);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039b610 FUN_1039b610

void FUN_1039b610(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x14,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039b6b0 FUN_1039b6b0

void FUN_1039b6b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcf99;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x54);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039b770 FUN_1039b770

void FUN_1039b770(FArray *param_1)

{
  int iVar1;
  FStaticMeshCollisionTriangle *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x54,*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x54);
      this = (FStaticMeshCollisionTriangle *)(iVar1 * 0x54 + *(int *)in_ECX);
      if (this != (FStaticMeshCollisionTriangle *)0x0) {
        FStaticMeshCollisionTriangle::FStaticMeshCollisionTriangle
                  (this,(FStaticMeshCollisionTriangle *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x54;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039b7f0 FUN_1039b7f0

void FUN_1039b7f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcfb9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x2c);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039b8b0 FUN_1039b8b0

void FUN_1039b8b0(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x2c,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x2c);
        puVar3 = (undefined4 *)(iVar2 * 0x2c + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x2c);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 1039b940 FUN_1039b940

void FUN_1039b940(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fcfd9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x104);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039ba00 FUN_1039ba00

void FUN_1039ba00(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x104,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x104);
        puVar3 = (undefined4 *)(iVar2 * 0x104 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x104);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 1039baa0 FUN_1039baa0

void FUN_1039baa0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fcff9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x14);
      if (*(int *)in_ECX + iVar1 * 0x14 != 0) {
        thunk_FUN_10381c90(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039bb80 FUN_1039bb80

void FUN_1039bb80(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd019;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039bc40 FUN_1039bc40

void FUN_1039bc40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd039;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1038ae50(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039bcb0 FUN_1039bcb0

void FUN_1039bcb0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd059;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1038af60(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039bd20 FUN_1039bd20

void FUN_1039bd20(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_1038b020(*(int *)(param_1 + 4));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar3;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar4 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039bdc0 FUN_1039bdc0

void FUN_1039bdc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd079;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1038b070(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039be30 FUN_1039be30

void FUN_1039be30(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_1038b130(*(int *)(param_1 + 4));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar3;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar4 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039bed0 FUN_1039bed0

void FUN_1039bed0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd09b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  thunk_FUN_103794b0(param_1 + 4);
  ExceptionList = local_c;
  return;
}


// ==== 1039bf50 FUN_1039bf50

void FUN_1039bf50(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd0bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  FSphere::FSphere((FSphere *)(in_ECX + 0xb),(FSphere *)(param_1 + 0xb));
  FSphere::FSphere((FSphere *)(in_ECX + 0xf),(FSphere *)(param_1 + 0xf));
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  *(undefined2 *)(in_ECX + 0x15) = *(undefined2 *)(param_1 + 0x15);
  *(undefined1 *)((int)in_ECX + 0x56) = *(undefined1 *)((int)param_1 + 0x56);
  *(undefined1 *)((int)in_ECX + 0x57) = *(undefined1 *)((int)param_1 + 0x57);
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  thunk_FUN_10379bd0(param_1 + 0x1b);
  ExceptionList = local_c;
  return;
}


// ==== 1039c190 FUN_1039c190

void FUN_1039c190(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd0db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  thunk_FUN_10383550(param_1 + 1);
  ExceptionList = local_c;
  return;
}


// ==== 1039c1f0 FUN_1039c1f0

void FUN_1039c1f0(undefined2 *param_1)

{
  undefined2 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0xe) = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_1037f190(param_1 + 0x12);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1a) = *(undefined4 *)(param_1 + 0x1a);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x1e) = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)(in_ECX + 0x22) = *(undefined4 *)(param_1 + 0x22);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0x26),(TArray<unsigned_short> *)(param_1 + 0x26));
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return;
}


// ==== 1039c2d0 FUN_1039c2d0

void FUN_1039c2d0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd111;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  thunk_FUN_1037f620(param_1 + 1);
  local_4 = 0;
  thunk_FUN_103794b0(param_1 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_10379830(param_1 + 7);
  ExceptionList = local_c;
  return;
}


// ==== 1039c370 FUN_1039c370

void FUN_1039c370(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd14b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FTerrainVertexStream::vftable;
  thunk_FUN_10380630(param_1 + 0xc);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 1039c420 FUN_1039c420

undefined4 FUN_1039c420(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 1039c430 FUN_1039c430

int FUN_1039c430(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) * 0x24;
}


// ==== 1039c440 FUN_1039c440

undefined4 FUN_1039c440(void)

{
  return 0x24;
}


// ==== 1039c450 FUN_1039c450

void FUN_1039c450(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[1] = 0;
  param_1[4] = 4;
  param_1[5] = 2;
  param_1[6] = 2;
  param_1[7] = 4;
  return;
}


// ==== 1039c490 FUN_1039c490

void FUN_1039c490(void *param_1)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 0x24);
  return;
}


// ==== 1039c4c0 FUN_1039c4c0

void FUN_1039c4c0(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = *(int *)(in_ECX + 0xc) + param_2 * 0x24;
  return;
}


// ==== 1039c580 FUN_1039c580

void FUN_1039c580(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd16b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  thunk_FUN_103794b0(param_1 + 1);
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  ExceptionList = local_c;
  return;
}


// ==== 1039c610 FUN_1039c610

void FUN_1039c610(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd18b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10392730();
  ExceptionList = local_c;
  return;
}


// ==== 1039c660 FUN_1039c660

void FUN_1039c660(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd1ab;
  local_c = ExceptionList;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0xc;
  }
  ExceptionList = &local_c;
  thunk_FUN_1037f300(iVar1);
  *in_ECX = FLazyLoader::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = TLazyArray<FMeshFace>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1039c730 FUN_1039c730

void FUN_1039c730(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd1cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  thunk_FUN_10383550(param_1 + 2);
  ExceptionList = local_c;
  return;
}


// ==== 1039c7a0 FUN_1039c7a0

void FUN_1039c7a0(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    thunk_FUN_103903c0(*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x14c);
        if (*(int *)GUndo_exref != 0) {
          (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
        }
        puVar3 = (undefined4 *)(iVar2 * 0x14c + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x53; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x14c);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 1039c880 FUN_1039c880

FArchive * FUN_1039c880(FArchive *param_1,int *param_2)

{
  int iVar1;
  FPoly *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fd1e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10368ba0(param_1);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 1));
    for (; iVar3 < param_2[1]; iVar3 = iVar3 + 1) {
      operator<<(param_1,(FPoly *)(iVar3 * 0x14c + *param_2));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103824b0(local_18);
    while (iVar3 < local_18) {
      pFVar2 = (FPoly *)thunk_FUN_103707f0(0x14c,param_2);
      if (pFVar2 == (FPoly *)0x0) {
        operator<<(param_1,(FPoly *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FPoly *)FPoly::FPoly(pFVar2);
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1039c95c Catch@1039c95c

void Catch_1039c95c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1039c970 Catch@1039c970

void Catch_1039c970(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039ca00 FUN_1039ca00

void FUN_1039ca00(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd1f9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039cac0 FUN_1039cac0

void FUN_1039cac0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)GUndo_exref != 0) {
      (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
    }
    FArray::Empty(in_ECX,8,iVar3);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        if (*(int *)GUndo_exref != 0) {
          (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
        }
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1039cbb0 FUN_1039cbb0

void FUN_1039cbb0(FArray *param_1)

{
  undefined4 *puVar1;
  FArray *pFVar2;
  int iVar3;
  undefined4 *puVar4;
  FArray *in_ECX;
  int iVar5;
  
  pFVar2 = param_1;
  if (in_ECX != param_1) {
    iVar5 = *(int *)(param_1 + 4);
    if (*(int *)GUndo_exref != 0) {
      (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
    }
    FArray::Empty(in_ECX,0xc,iVar5);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar3 = FArray::Add(in_ECX,1,0xc);
        if (*(int *)GUndo_exref != 0) {
          (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
        }
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
        if (puVar1 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar2 + (int)param_1);
          *puVar1 = *puVar4;
          puVar1[1] = puVar4[1];
          puVar1[2] = puVar4[2];
        }
        param_1 = (FArray *)((int)param_1 + 0xc);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(pFVar2 + 4));
    }
    return;
  }
  return;
}


// ==== 1039ccb0 FUN_1039ccb0

void FUN_1039ccb0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd224;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1;
        *puVar2 = *(undefined4 *)(iVar1 + iVar4);
        thunk_FUN_10383550(iVar1 + iVar4 + 4);
        local_4 = local_4 & 0xffffff00;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039cd80 FUN_1039cd80

void FUN_1039cd80(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd249;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x28;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x28);
  ExceptionList = local_c;
  return;
}


// ==== 1039ce80 FUN_1039ce80

void FUN_1039ce80(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_1038b920(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x28);
      if (*(int *)in_ECX + iVar1 * 0x28 != 0) {
        thunk_FUN_1036a690(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039cf00 FUN_1039cf00

void FUN_1039cf00(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd269;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x34;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x34;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x34);
  ExceptionList = local_c;
  return;
}


// ==== 1039d000 FUN_1039d000

void FUN_1039d000(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_1038b9b0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x34);
      if (iVar1 * 0x34 + *(int *)in_ECX != 0) {
        thunk_FUN_1036a790(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x34;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039d080 FUN_1039d080

void FUN_1039d080(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)GUndo_exref != 0) {
      (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
    }
    FArray::Empty(in_ECX,4,iVar3);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        if (*(int *)GUndo_exref != 0) {
          (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
        }
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1039d160 FUN_1039d160

void FUN_1039d160(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)GUndo_exref != 0) {
      (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
    }
    FArray::Empty(in_ECX,4,iVar3);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        if (*(int *)GUndo_exref != 0) {
          (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
        }
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1039d240 FUN_1039d240

FArchive * FUN_1039d240(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fd280;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,8);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10398560(param_1,*(int *)param_2 + iVar1 * 8);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,8,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_103718c0(8,param_2);
      thunk_FUN_10398560(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1039d310 Catch@1039d310

void Catch_1039d310(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1039d324 Catch@1039d324

void Catch_1039d324(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039d390 FUN_1039d390

FArchive * FUN_1039d390(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fd290;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0xc);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_103982a0(param_1,*(int *)param_2 + iVar1 * 0xc);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0xc,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_103718e0(0xc,param_2);
      thunk_FUN_103982a0(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1039d463 Catch@1039d463

void Catch_1039d463(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1039d477 Catch@1039d477

void Catch_1039d477(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039d4e0 FUN_1039d4e0

void FUN_1039d4e0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd2a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x28);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x28);
      if (*(int *)in_ECX + iVar1 * 0x28 != 0) {
        thunk_FUN_1039c2d0(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039d5a0 FUN_1039d5a0

FArchive * FUN_1039d5a0(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fd2c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0xc);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_10399410(param_1,*(int *)param_2 + iVar1 * 0xc);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0xc,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_103719a0(0xc,param_2);
      thunk_FUN_10399410(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1039d673 Catch@1039d673

void Catch_1039d673(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 1039d687 Catch@1039d687

void Catch_1039d687(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039d6f0 FUN_1039d6f0

void FUN_1039d6f0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd2d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x20);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x20);
      if (iVar1 * 0x20 + *(int *)in_ECX != 0) {
        thunk_FUN_1038b260(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039d7b0 FUN_1039d7b0

void FUN_1039d7b0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd2f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 << 4;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>
                ((TArray<unsigned_short> *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x10);
  ExceptionList = local_c;
  return;
}


// ==== 1039d8b0 FUN_1039d8b0

void FUN_1039d8b0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd319;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>
                ((TArray<unsigned_short> *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x10,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1039d940 FUN_1039d940

void FUN_1039d940(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd339;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x38);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039da00 FUN_1039da00

void FUN_1039da00(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd35c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x24;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>
                ((TArray<unsigned_short> *)(*(int *)in_ECX + iVar1 + 8));
      iVar1 = iVar1 + 0x24;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x24);
  ExceptionList = local_c;
  return;
}


// ==== 1039db00 FUN_1039db00

void FUN_1039db00(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd37c;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>
                ((TArray<unsigned_short> *)(*(int *)in_ECX + iVar1 + 8));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x24;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x24,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1039db90 FUN_1039db90

void FUN_1039db90(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd399;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,0x18);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039dc50 FUN_1039dc50

void FUN_1039dc50(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd3bb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10379700();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039dcc0 FUN_1039dcc0

void FUN_1039dcc0(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd3db;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TLazyArray<unsigned_char>::~TLazyArray<unsigned_char>
            ((TLazyArray<unsigned_char> *)(in_ECX + 0x10));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039dd30 FUN_1039dd30

void FUN_1039dd30(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd3fb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039dda0 FUN_1039dda0

void FUN_1039dda0(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd41b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039de10 FUN_1039de10

void FUN_1039de10(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd43b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039de80 FUN_1039de80

void FUN_1039de80(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd45b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039def0 FUN_1039def0

void FUN_1039def0(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1038bb00(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 1039dfc0 FUN_1039dfc0

void FUN_1039dfc0(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd49b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039e030 FUN_1039e030

void FUN_1039e030(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd4b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10325f90();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039e0a0 FUN_1039e0a0

void FUN_1039e0a0(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd4db;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039e110 FUN_1039e110

void FUN_1039e110(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd4fb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039e180 FUN_1039e180

void FUN_1039e180(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd51b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1038fad0();
  ExceptionList = local_c;
  return;
}


// ==== 1039e1d0 FUN_1039e1d0

void FUN_1039e1d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd53b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326570();
  ExceptionList = local_c;
  return;
}


// ==== 1039e220 FUN_1039e220

void FUN_1039e220(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd558;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1039d940();
  ExceptionList = local_c;
  return;
}


// ==== 1039e270 FUN_1039e270

void FUN_1039e270(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd57b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1039db90();
  ExceptionList = local_c;
  return;
}


// ==== 1039e2c0 FUN_1039e2c0

void FUN_1039e2c0(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd5a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar3 = param_1 * 0x1c;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3 + 0x10));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3 + 4));
      iVar3 = iVar3 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 1039e3f0 FUN_1039e3f0

void FUN_1039e3f0(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_1038be70(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x1c);
      if (*(int *)in_ECX + iVar1 * 0x1c != 0) {
        thunk_FUN_1036f500(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039e480 FUN_1039e480

void FUN_1039e480(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd5cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x14;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)in_ECX + iVar1 + 4));
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x14);
  ExceptionList = local_c;
  return;
}


// ==== 1039e580 FUN_1039e580

void FUN_1039e580(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_1038bf10(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x14);
      if (*(int *)in_ECX + iVar1 * 0x14 != 0) {
        thunk_FUN_1036f620(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1039e650 FUN_1039e650

void FUN_1039e650(int param_1)

{
  void **ppvVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd60b;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 0xffffffff;
      thunk_FUN_10325f90();
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FArray::Empty(in_ECX,0x44,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1039e740 FUN_1039e740

void FUN_1039e740(void)

{
  UClass *pUVar1;
  undefined4 *in_ECX;
  
  pUVar1 = UClass::StaticClass();
  *in_ECX = pUVar1;
  in_ECX[1] = 0xffffffff;
  if (pUVar1 == (UClass *)0x0) {
    appFailAssert("Class","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnObjBas.h",
                  0x505);
  }
  thunk_FUN_103737b0();
  return;
}


// ==== 1039e790 FUN_1039e790

void FUN_1039e790(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd62b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  thunk_FUN_103793f0(param_1 + 2);
  ExceptionList = local_c;
  return;
}


// ==== 1039e800 FUN_1039e800

void FUN_1039e800(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  thunk_FUN_1038fa50(param_1 + 2);
  return;
}


// ==== 1039e830 FUN_1039e830

void FUN_1039e830(void)

{
  FName *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd68b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FName::FName(in_ECX);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 8));
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x14));
  local_4._0_1_ = 1;
  FName::FName(in_ECX + 0x20);
  FArray::FArray((FArray *)(in_ECX + 0x24));
  local_4._0_1_ = 3;
  FWhenExtinctionCreate::FWhenExtinctionCreate((FWhenExtinctionCreate *)(in_ECX + 0x30));
  local_4 = CONCAT31(local_4._1_3_,4);
  FArray::FArray((FArray *)(in_ECX + 0x4c));
  ExceptionList = local_c;
  return;
}


// ==== 1039e8f0 FUN_1039e8f0

void FUN_1039e8f0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107fd6e9;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  thunk_FUN_10390260();
  local_4._0_1_ = 2;
  FWhenExtinctionCreate::~FWhenExtinctionCreate((FWhenExtinctionCreate *)(in_ECX + 0x30));
  local_4._0_1_ = 1;
  thunk_FUN_10390110();
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x14));
  local_4 = 0xffffffff;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 1039e990 FUN_1039e990

void FUN_1039e990(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd749;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 2),(FStringNoInit *)(param_1 + 2));
  local_4 = 0;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 5),(FStringNoInit *)(param_1 + 5));
  local_4._0_1_ = 1;
  in_ECX[8] = param_1[8];
  thunk_FUN_10379a40(param_1 + 9);
  local_4._0_1_ = 2;
  FWhenExtinctionCreate::FWhenExtinctionCreate
            ((FWhenExtinctionCreate *)(in_ECX + 0xc),(FWhenExtinctionCreate *)(param_1 + 0xc));
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0x12] = param_1[0x12];
  thunk_FUN_10379b10(param_1 + 0x13);
  ExceptionList = local_c;
  return;
}


// ==== 1039ea70 FUN_1039ea70

void FUN_1039ea70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 2),(FStringNoInit *)(param_1 + 2));
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 5),(FStringNoInit *)(param_1 + 5));
  in_ECX[8] = param_1[8];
  thunk_FUN_103901d0(param_1 + 9);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0xc),(FStringNoInit *)(param_1 + 0xc));
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0xf),(FStringNoInit *)(param_1 + 0xf));
  in_ECX[0x12] = param_1[0x12];
  thunk_FUN_103902d0(param_1 + 0x13);
  return;
}


// ==== 1039eb10 FUN_1039eb10

void FUN_1039eb10(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd778;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103904c0();
  ExceptionList = local_c;
  return;
}


// ==== 1039eb60 FUN_1039eb60

void FUN_1039eb60(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10379c80(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 1039ebd0 FUN_1039ebd0

void FUN_1039ebd0(void)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *in_ECX;
  longlong lVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd7d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FTangentStream::vftable;
  FArray::FArray((FArray *)(in_ECX + 3));
  pcVar3 = GMakeCacheIDIndex_exref;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar4 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)pcVar3 = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(in_ECX + 1) = lVar4 + 0xe1;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1039ecc0 FUN_1039ecc0

FArchive * FUN_1039ecc0(undefined4 param_1,int param_2)

{
  FArchive *this;
  
  this = (FArchive *)thunk_FUN_103907a0(param_1,param_2 + 0xc);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x18),4);
  return this;
}


// ==== 1039ed00 FUN_1039ed00

void FUN_1039ed00(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd80b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103906e0();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039ed60 FUN_1039ed60

void FUN_1039ed60(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd83b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FTangentStream::vftable;
  thunk_FUN_10379e50(param_1 + 0xc);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 1039ee10 FUN_1039ee10

void FUN_1039ee10(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_103908f0(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 1039ee50 FUN_1039ee50

void FUN_1039ee50(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fd86b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103906e0();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1039eed0 FUN_1039eed0

FTangentStream * FUN_1039eed0(byte param_1)

{
  FTangentStream *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x1c,*(int *)(in_ECX + -4),FTangentStream::~FTangentStream);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FTangentStream::~FTangentStream(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1039ef50 FUN_1039ef50

void FUN_1039ef50(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107fd893;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UVertexBuffer::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10390980();
  local_4 = 0xffffffff;
  UVertexStreamBase::~UVertexStreamBase((UVertexStreamBase *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039efd0 FUN_1039efd0

void FUN_1039efd0(void)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd8cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,0x2c,0,4);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexBuffer::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039f050 FUN_1039f050

void FUN_1039f050(ulong param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd8fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,0x2c,param_1,0);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexBuffer::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039f0d0 FUN_1039f0d0

void FUN_1039f0d0(FArchive *param_1)

{
  int iVar1;
  UVertexStreamBase *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fd910;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UVertexStreamBase::Serialize(in_ECX,param_1);
  thunk_FUN_10390a40(param_1,in_ECX + 0x44);
  iVar1 = FArchive::Ver(param_1);
  if (0x48 < iVar1) {
    iVar1 = FArchive::Ver(param_1);
    if (iVar1 < 0x4b) {
      thunk_FUN_10330020(param_1,in_ECX + 0x3c);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1039f151 Catch@1039f151

void Catch_1039f151(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1039f165 Catch@1039f165

void Catch_1039f165(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertexBuffer::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039f1b0 FUN_1039f1b0

void FUN_1039f1b0(UVertexStreamBase *param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd933;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexBuffer::vftable;
  thunk_FUN_10379f20(param_1 + 0x44);
  ExceptionList = local_c;
  return;
}


// ==== 1039f230 FUN_1039f230

void FUN_1039f230(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_10390b90(param_1 + 0x44);
  return;
}


// ==== 1039f280 FUN_1039f280

void FUN_1039f280(byte param_1)

{
  UVertexBuffer *in_ECX;
  
  UVertexBuffer::~UVertexBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return;
}


// ==== 1039f2b0 FUN_1039f2b0

UVertexBuffer * FUN_1039f2b0(byte param_1)

{
  UVertexBuffer *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x50,*(int *)(in_ECX + -4),UVertexBuffer::~UVertexBuffer)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UVertexBuffer::~UVertexBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return in_ECX;
}


// ==== 1039f330 FUN_1039f330

void FUN_1039f330(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107fd963;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UVertexStreamVECTOR::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_1038fad0();
  local_4 = 0xffffffff;
  UVertexStreamBase::~UVertexStreamBase((UVertexStreamBase *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039f3b0 FUN_1039f3b0

void FUN_1039f3b0(void)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd99c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,0xc,0,1);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamVECTOR::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039f430 FUN_1039f430

void FUN_1039f430(ulong param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fd9cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,0xc,param_1,1);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamVECTOR::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039f4b0 FUN_1039f4b0

void FUN_1039f4b0(FArchive *param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fd9e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UVertexStreamBase::Serialize(in_ECX,param_1);
  thunk_FUN_1038fb90(param_1,in_ECX + 0x44);
  ExceptionList = local_10;
  return;
}


// ==== 1039f50a Catch@1039f50a

void Catch_1039f50a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1039f51e Catch@1039f51e

void Catch_1039f51e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertexStreamVECTOR::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039f560 FUN_1039f560

void FUN_1039f560(UVertexStreamBase *param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fda03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamVECTOR::vftable;
  thunk_FUN_103794b0(param_1 + 0x44);
  ExceptionList = local_c;
  return;
}


// ==== 1039f5e0 FUN_1039f5e0

void FUN_1039f5e0(byte param_1)

{
  UVertexStreamVECTOR *in_ECX;
  
  UVertexStreamVECTOR::~UVertexStreamVECTOR(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return;
}


// ==== 1039f610 FUN_1039f610

UVertexStreamVECTOR * FUN_1039f610(byte param_1)

{
  UVertexStreamVECTOR *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x50,*(int *)(in_ECX + -4),UVertexStreamVECTOR::~UVertexStreamVECTOR);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UVertexStreamVECTOR::~UVertexStreamVECTOR(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return in_ECX;
}


// ==== 1039f690 FUN_1039f690

void FUN_1039f690(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107fda33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UVertexStreamCOLOR::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10390c20();
  local_4 = 0xffffffff;
  UVertexStreamBase::~UVertexStreamBase((UVertexStreamBase *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039f710 FUN_1039f710

void FUN_1039f710(void)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fda6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,4,0,2);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamCOLOR::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039f790 FUN_1039f790

void FUN_1039f790(ulong param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fda9c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,4,param_1,2);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamCOLOR::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039f810 FUN_1039f810

void FUN_1039f810(FArchive *param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fdab0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UVertexStreamBase::Serialize(in_ECX,param_1);
  thunk_FUN_10390ce0(param_1,in_ECX + 0x44);
  ExceptionList = local_10;
  return;
}


// ==== 1039f86a Catch@1039f86a

void Catch_1039f86a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1039f87e Catch@1039f87e

void Catch_1039f87e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertexStreamCOLOR::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039f8c0 FUN_1039f8c0

void FUN_1039f8c0(UVertexStreamBase *param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdad3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamCOLOR::vftable;
  thunk_FUN_1037a010(param_1 + 0x44);
  ExceptionList = local_c;
  return;
}


// ==== 1039f940 FUN_1039f940

void FUN_1039f940(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_10390e30(param_1 + 0x44);
  return;
}


// ==== 1039f990 FUN_1039f990

void FUN_1039f990(byte param_1)

{
  UVertexStreamCOLOR *in_ECX;
  
  UVertexStreamCOLOR::~UVertexStreamCOLOR(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return;
}


// ==== 1039f9c0 FUN_1039f9c0

UVertexStreamCOLOR * FUN_1039f9c0(byte param_1)

{
  UVertexStreamCOLOR *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x50,*(int *)(in_ECX + -4),UVertexStreamCOLOR::~UVertexStreamCOLOR);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UVertexStreamCOLOR::~UVertexStreamCOLOR(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return in_ECX;
}


// ==== 1039fa40 FUN_1039fa40

void FUN_1039fa40(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107fdb03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UVertexStreamUV::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10390ea0();
  local_4 = 0xffffffff;
  UVertexStreamBase::~UVertexStreamBase((UVertexStreamBase *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039fac0 FUN_1039fac0

void FUN_1039fac0(void)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdb3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,8,0,3);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamUV::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039fb40 FUN_1039fb40

void FUN_1039fb40(ulong param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdb6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,8,param_1,3);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamUV::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039fbc0 FUN_1039fbc0

void FUN_1039fbc0(FArchive *param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fdb80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UVertexStreamBase::Serialize(in_ECX,param_1);
  thunk_FUN_10390f60(param_1,in_ECX + 0x44);
  ExceptionList = local_10;
  return;
}


// ==== 1039fc1a Catch@1039fc1a

void Catch_1039fc1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1039fc2e Catch@1039fc2e

void Catch_1039fc2e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertexStreamUV::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1039fc70 FUN_1039fc70

void FUN_1039fc70(UVertexStreamBase *param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamUV::vftable;
  thunk_FUN_1037a0c0(param_1 + 0x44);
  ExceptionList = local_c;
  return;
}


// ==== 1039fcf0 FUN_1039fcf0

void FUN_1039fcf0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_103910b0(param_1 + 0x44);
  return;
}


// ==== 1039fd40 FUN_1039fd40

void FUN_1039fd40(byte param_1)

{
  UVertexStreamUV *in_ECX;
  
  UVertexStreamUV::~UVertexStreamUV(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return;
}


// ==== 1039fd70 FUN_1039fd70

UVertexStreamUV * FUN_1039fd70(byte param_1)

{
  UVertexStreamUV *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x50,*(int *)(in_ECX + -4),UVertexStreamUV::~UVertexStreamUV);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UVertexStreamUV::~UVertexStreamUV(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return in_ECX;
}


// ==== 1039fdf0 FUN_1039fdf0

void FUN_1039fdf0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107fdbd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UVertexStreamPosNormTex::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10391120();
  local_4 = 0xffffffff;
  UVertexStreamBase::~UVertexStreamBase((UVertexStreamBase *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1039fe70 FUN_1039fe70

void FUN_1039fe70(void)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdc0c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,0x28,0,5);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamPosNormTex::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039fef0 FUN_1039fef0

void FUN_1039fef0(ulong param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdc3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,0x28,param_1,5);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamPosNormTex::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x44));
  ExceptionList = local_c;
  return;
}


// ==== 1039ff70 FUN_1039ff70

void FUN_1039ff70(FArchive *param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fdc50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UVertexStreamBase::Serialize(in_ECX,param_1);
  thunk_FUN_103911e0(param_1,in_ECX + 0x44);
  ExceptionList = local_10;
  return;
}


// ==== 1039ffca Catch@1039ffca

void Catch_1039ffca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1039ffde Catch@1039ffde

void Catch_1039ffde(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UVertexStreamPosNormTex::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103a0020 FUN_103a0020

void FUN_103a0020(UVertexStreamBase *param_1)

{
  UVertexStreamBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdc73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVertexStreamBase::UVertexStreamBase(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertexStreamPosNormTex::vftable;
  thunk_FUN_1037a180(param_1 + 0x44);
  ExceptionList = local_c;
  return;
}


// ==== 103a00a0 FUN_103a00a0

void FUN_103a00a0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_10391330(param_1 + 0x44);
  return;
}


// ==== 103a00f0 FUN_103a00f0

void FUN_103a00f0(byte param_1)

{
  UVertexStreamPosNormTex *in_ECX;
  
  UVertexStreamPosNormTex::~UVertexStreamPosNormTex(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return;
}


// ==== 103a0120 FUN_103a0120

UVertexStreamPosNormTex * FUN_103a0120(byte param_1)

{
  UVertexStreamPosNormTex *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x50,*(int *)(in_ECX + -4),UVertexStreamPosNormTex::~UVertexStreamPosNormTex);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UVertexStreamPosNormTex::~UVertexStreamPosNormTex(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return in_ECX;
}


// ==== 103a01a0 FUN_103a01a0

void FUN_103a01a0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107fdca3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USkinVertexBuffer::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_103913d0();
  local_4 = 0xffffffff;
  URenderResource::~URenderResource((URenderResource *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a0220 FUN_103a0220

void FUN_103a0220(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdce5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = URenderResource::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = USkinVertexBuffer::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x38));
  ExceptionList = local_c;
  return;
}


// ==== 103a02b0 FUN_103a02b0

void FUN_103a02b0(URenderResource *param_1)

{
  URenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdd13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderResource::URenderResource(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = USkinVertexBuffer::vftable;
  thunk_FUN_1037a260(param_1 + 0x38);
  ExceptionList = local_c;
  return;
}


// ==== 103a0330 FUN_103a0330

void FUN_103a0330(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10391490(param_1 + 0x38);
  return;
}


// ==== 103a0370 FUN_103a0370

void FUN_103a0370(byte param_1)

{
  USkinVertexBuffer *in_ECX;
  
  USkinVertexBuffer::~USkinVertexBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return;
}


// ==== 103a03a0 FUN_103a03a0

USkinVertexBuffer * FUN_103a03a0(byte param_1)

{
  USkinVertexBuffer *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x44,*(int *)(in_ECX + -4),USkinVertexBuffer::~USkinVertexBuffer);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USkinVertexBuffer::~USkinVertexBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return in_ECX;
}


// ==== 103a0420 FUN_103a0420

void FUN_103a0420(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fdd4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FLineBatcher::vftable;
  thunk_FUN_1037a350(param_1 + 0xc);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 103a04d0 FUN_103a04d0

void FUN_103a04d0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_103915e0(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return;
}


// ==== 103a0510 FUN_103a0510

void FUN_103a0510(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fddc1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  FArray::FArray(in_ECX + 0xc);
  local_4._0_1_ = 3;
  FArray::FArray(in_ECX + 0x18);
  local_4._0_1_ = 5;
  FArray::FArray(in_ECX + 0x24);
  local_4 = CONCAT31(local_4._1_3_,7);
  FArray::FArray(in_ECX + 0x30);
  ExceptionList = local_c;
  return;
}


// ==== 103a05c0 FUN_103a05c0

void FUN_103a05c0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107fde24;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  thunk_FUN_10391680();
  local_4._0_1_ = 2;
  thunk_FUN_103917b0();
  local_4._0_1_ = 1;
  thunk_FUN_10391680();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_1038fad0();
  local_4 = 0xffffffff;
  thunk_FUN_1038fad0();
  ExceptionList = local_c;
  return;
}


// ==== 103a0650 FUN_103a0650

void FUN_103a0650(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fde74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103794b0(param_1);
  local_4 = 0;
  thunk_FUN_103794b0(param_1 + 0xc);
  local_4._0_1_ = 1;
  thunk_FUN_1037a420(param_1 + 0x18);
  local_4._0_1_ = 2;
  thunk_FUN_1037a500(param_1 + 0x24);
  local_4 = CONCAT31(local_4._1_3_,3);
  thunk_FUN_1037a420(param_1 + 0x30);
  ExceptionList = local_c;
  return;
}


// ==== 103a0700 FUN_103a0700

void FUN_103a0700(int param_1)

{
  thunk_FUN_103795a0(param_1);
  thunk_FUN_103795a0(param_1 + 0xc);
  thunk_FUN_10391740(param_1 + 0x18);
  thunk_FUN_10391870(param_1 + 0x24);
  thunk_FUN_10391740(param_1 + 0x30);
  return;
}


// ==== 103a0760 FUN_103a0760

void FUN_103a0760(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fdec6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  *in_ECX = FCanvasUtil::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = in_ECX + 7;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x5c);
  puVar3 = in_ECX + 0x17;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4 = 3;
  thunk_FUN_1037a630(param_1 + 0x9c);
  ExceptionList = local_c;
  return;
}


// ==== 103a0850 FUN_103a0850

void FUN_103a0850(int param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)(in_ECX + 0x1c);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x5c);
  puVar3 = (undefined4 *)(in_ECX + 0x5c);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_103919d0(param_1 + 0x9c);
  return;
}


// ==== 103a08d0 FUN_103a08d0

void FUN_103a08d0(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fdefb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10391680();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a0930 FUN_103a0930

void FUN_103a0930(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fdf2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FRawColorStream::vftable;
  thunk_FUN_1037a420(param_1 + 0xc);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 103a09e0 FUN_103a09e0

void FUN_103a09e0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_10391740(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 103a0a20 FUN_103a0a20

void FUN_103a0a20(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fdf5b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10391680();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 103a0aa0 FUN_103a0aa0

FRawColorStream * FUN_103a0aa0(byte param_1)

{
  FRawColorStream *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x1c,*(int *)(in_ECX + -4),FRawColorStream::~FRawColorStream);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FRawColorStream::~FRawColorStream(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 103a0b20 FUN_103a0b20

void FUN_103a0b20(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107fdf84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UPalette::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10391680();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a0ba0 FUN_103a0ba0

void FUN_103a0ba0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdfb4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UPalette::vftable;
  thunk_FUN_1037a420(param_1 + 0x34);
  ExceptionList = local_c;
  return;
}


// ==== 103a0c20 FUN_103a0c20

void FUN_103a0c20(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  thunk_FUN_10391740(param_1 + 0x34);
  return;
}


// ==== 103a0c50 FUN_103a0c50

void FUN_103a0c50(byte param_1)

{
  UPalette *in_ECX;
  
  UPalette::~UPalette(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x40);
  }
  return;
}


// ==== 103a0c80 FUN_103a0c80

UPalette * FUN_103a0c80(byte param_1)

{
  UPalette *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x40,*(int *)(in_ECX + -4),UPalette::~UPalette);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPalette::~UPalette(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x40);
  }
  return in_ECX;
}


// ==== 103a0d00 FUN_103a0d00

void FUN_103a0d00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fdfdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  TLazyArray<unsigned_char>::TLazyArray<unsigned_char>
            ((TLazyArray<unsigned_char> *)(in_ECX + 4),(TLazyArray<unsigned_char> *)(param_1 + 4));
  ExceptionList = local_c;
  return;
}


// ==== 103a0d80 FUN_103a0d80

void FUN_103a0d80(undefined4 *param_1)

{
  TArray<unsigned_char> *pTVar1;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  if (param_1 == (undefined4 *)0xfffffff0) {
    pTVar1 = (TArray<unsigned_char> *)0x0;
  }
  else {
    pTVar1 = (TArray<unsigned_char> *)(param_1 + 7);
  }
  TArray<unsigned_char>::operator=((TArray<unsigned_char> *)(in_ECX + 7),pTVar1);
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  return;
}


// ==== 103a0de0 FUN_103a0de0

void FUN_103a0de0(void)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *in_ECX;
  longlong lVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe014;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FBspVertexStream::vftable;
  FArray::FArray((FArray *)(in_ECX + 3));
  pcVar3 = GMakeCacheIDIndex_exref;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar4 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)pcVar3 = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(in_ECX + 1) = lVar4 + 0xe1;
  in_ECX[6] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103a0ed0 FUN_103a0ed0

FArchive * FUN_103a0ed0(undefined4 param_1,int param_2)

{
  FArchive *this;
  
  this = (FArchive *)thunk_FUN_10391dd0(param_1,param_2 + 0xc);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x18),4);
  return this;
}


// ==== 103a0f10 FUN_103a0f10

void FUN_103a0f10(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe04b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10391d10();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a0f70 FUN_103a0f70

void FUN_103a0f70(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe07b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FBspVertexStream::vftable;
  thunk_FUN_1037ad80(param_1 + 0xc);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 103a1020 FUN_103a1020

void FUN_103a1020(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_10391f20(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 103a1060 FUN_103a1060

void FUN_103a1060(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe0ab;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10391d10();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 103a10e0 FUN_103a10e0

FBspVertexStream * FUN_103a10e0(byte param_1)

{
  FBspVertexStream *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x1c,*(int *)(in_ECX + -4),FBspVertexStream::~FBspVertexStream);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FBspVertexStream::~FBspVertexStream(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 103a1160 FUN_103a1160

void FUN_103a1160(void)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *in_ECX;
  longlong lVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe0de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10336430();
  local_4 = 0;
  *in_ECX = FStaticLightMapTexture::vftable;
  _eh_vector_constructor_iterator_
            (in_ECX + 3,0x18,2,TLazyArray<unsigned_char>::_default_constructor_closure_,
             TLazyArray<unsigned_char>::~TLazyArray<unsigned_char>);
  pcVar3 = GMakeCacheIDIndex_exref;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar4 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)pcVar3 = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(in_ECX + 1) = lVar4 + 0xe0;
  in_ECX[0x12] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103a1240 FUN_103a1240

void FUN_103a1240(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe127;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10336630();
  local_4 = 0;
  *in_ECX = FLightMapTexture::vftable;
  FArray::FArray((FArray *)(in_ECX + 4));
  local_4 = CONCAT31(local_4._1_3_,2);
  FStaticLightMapTexture::FStaticLightMapTexture((FStaticLightMapTexture *)(in_ECX + 7));
  ExceptionList = local_c;
  return;
}


// ==== 103a12c0 FUN_103a12c0

FArchive * FUN_103a12c0(FArchive *param_1,int param_2)

{
  undefined4 uVar1;
  FArchive *this;
  int iVar2;
  
  uVar1 = (**(code **)(*(int *)param_1 + 0x18))(param_2 + 0xc,param_2 + 0x10);
  this = (FArchive *)thunk_FUN_1038f880(uVar1);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 4),8);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x68),4);
  iVar2 = FArchive::Ver(param_1);
  if (0x73 < iVar2) {
    operator<<(param_1,(FStaticLightMapTexture *)(param_2 + 0x1c));
  }
  return param_1;
}


// ==== 103a1340 FUN_103a1340

void FUN_103a1340(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 4));
  local_4 = 1;
  FArray::FArray((FArray *)(in_ECX + 0x10));
  ExceptionList = local_c;
  return;
}


// ==== 103a13c0 FUN_103a13c0

void FUN_103a13c0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe1a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 1));
  local_4 = 1;
  FArray::FArray((FArray *)(in_ECX + 4));
  *in_ECX = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 103a1450 FUN_103a1450

void FUN_103a1450(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe1d6;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10392150();
  local_4 = 0xffffffff;
  thunk_FUN_10325f90();
  ExceptionList = local_c;
  return;
}


// ==== 103a14b0 FUN_103a14b0

void FUN_103a14b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe206;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  thunk_FUN_1032bc20(param_1 + 1);
  local_4 = 0;
  thunk_FUN_10392090(param_1 + 4);
  ExceptionList = local_c;
  return;
}


// ==== 103a1530 FUN_103a1530

void FUN_103a1530(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  thunk_FUN_1032bcd0(param_1 + 1);
  thunk_FUN_103921c0(param_1 + 4);
  return;
}


// ==== 103a1570 FUN_103a1570

void FUN_103a1570(void)

{
  FBspVertexStream *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FBspVertexStream::FBspVertexStream(in_ECX);
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103a15e0 FUN_103a15e0

FArchive * FUN_103a15e0(FArchive *param_1,int param_2)

{
  FArchive *pFVar1;
  int iVar2;
  
  pFVar1 = (FArchive *)thunk_FUN_10391dd0(param_1,param_2 + 0xc);
  FArchive::ByteOrderSerialize(pFVar1,(void *)(param_2 + 0x18),4);
  pFVar1 = (FArchive *)(**(code **)(*(int *)pFVar1 + 0x18))(param_2 + 0x20);
  FArchive::ByteOrderSerialize(pFVar1,(void *)(param_2 + 0x1c),4);
  FArchive::ByteOrderSerialize(pFVar1,(void *)(param_2 + 0x24),4);
  FArchive::ByteOrderSerialize(pFVar1,(undefined4 *)(param_2 + 0x28),4);
  iVar2 = FArchive::Ver(param_1);
  if (iVar2 < 0x6b) {
    iVar2 = FArchive::IsLoading(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
      return param_1;
    }
  }
  return param_1;
}


// ==== 103a1690 FUN_103a1690

void FUN_103a1690(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe263;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  thunk_FUN_10391d10();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a16f0 FUN_103a16f0

void FUN_103a16f0(FBspVertexStream *param_1)

{
  FBspVertexStream *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FBspVertexStream::FBspVertexStream(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  ExceptionList = local_c;
  return;
}


// ==== 103a1780 FUN_103a1780

void FUN_103a1780(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_10391f20(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return;
}


// ==== 103a17f0 FUN_103a17f0

void FUN_103a17f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe2a8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10392240();
  ExceptionList = local_c;
  return;
}


// ==== 103a1840 FUN_103a1840

void FUN_103a1840(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe2c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1038fad0();
  ExceptionList = local_c;
  return;
}


// ==== 103a1890 FUN_103a1890

void FUN_103a1890(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe2e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037ae90(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103a1900 FUN_103a1900

void FUN_103a1900(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103794b0(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103a1970 FUN_103a1970

void FUN_103a1970(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe32b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10392730();
  ExceptionList = local_c;
  return;
}


// ==== 103a19c0 FUN_103a19c0

void FUN_103a19c0(USound *param_1)

{
  if (param_1 != (USound *)0x0) {
    USound::USound(param_1);
    return;
  }
  return;
}


// ==== 103a19e0 FUN_103a19e0

void FUN_103a19e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe356;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1038fad0();
  local_4 = 0xffffffff;
  thunk_FUN_1038fad0();
  ExceptionList = local_c;
  return;
}


// ==== 103a1a40 FUN_103a1a40

void FUN_103a1a40(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe386;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  thunk_FUN_103794b0(param_1 + 7);
  local_4 = 0;
  thunk_FUN_103794b0(param_1 + 10);
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  ExceptionList = local_c;
  return;
}


// ==== 103a1b70 FUN_103a1b70

void FUN_103a1b70(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe3a8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1038fad0();
  ExceptionList = local_c;
  return;
}


// ==== 103a1bc0 FUN_103a1bc0

void FUN_103a1bc0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032bef0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a1c20 FUN_103a1c20

void FUN_103a1c20(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe3e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103794b0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a1c80 FUN_103a1c80

void FUN_103a1c80(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe416;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FNViewShakeMgr::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  thunk_FUN_1037b260(param_1 + 0x10);
  local_4 = 0;
  thunk_FUN_10379830(param_1 + 0x1c);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return;
}


// ==== 103a1d50 FUN_103a1d50

void FUN_103a1d50(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  thunk_FUN_10392b10(param_1 + 0x10);
  thunk_FUN_10379900(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


// ==== 103a1dd0 FUN_103a1dd0

void FUN_103a1dd0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe461;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 0x40));
  local_4 = CONCAT31(local_4._1_3_,2);
  FArray::FArray((FArray *)(in_ECX + 0x4c));
  ExceptionList = local_c;
  return;
}


// ==== 103a1e50 FUN_103a1e50

void FUN_103a1e50(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_10330350(param_1,param_2,param_2 + 0x40);
  thunk_FUN_1038fb90(uVar1);
  return;
}


// ==== 103a1e80 FUN_103a1e80

void FUN_103a1e80(void)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107fe49f;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  thunk_FUN_10392b80();
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_1038fad0();
  local_4 = 0xffffffff;
  FMatrix::~FMatrix(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a1ef0 FUN_103a1ef0

void FUN_103a1ef0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe4df;
  local_c = ExceptionList;
  puVar2 = param_1;
  ExceptionList = &local_c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *puVar2;
    puVar2 = puVar2 + 1;
    in_ECX = in_ECX + 1;
  }
  local_4 = 0;
  thunk_FUN_103794b0(param_1 + 0x10);
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_1037b310(param_1 + 0x13);
  ExceptionList = local_c;
  return;
}


// ==== 103a1f80 FUN_103a1f80

void FUN_103a1f80(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *puVar2;
    puVar2 = puVar2 + 1;
    in_ECX = in_ECX + 1;
  }
  thunk_FUN_103795a0(param_1 + 0x10);
  thunk_FUN_10392c40(param_1 + 0x13);
  return;
}


// ==== 103a1fd0 FUN_103a1fd0

void FUN_103a1fd0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037b9f0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2030 FUN_103a2030

void FUN_103a2030(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037bab0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2090 FUN_103a2090

void FUN_103a2090(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10379bd0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a20f0 FUN_103a20f0

void FUN_103a20f0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037bb60(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2150 FUN_103a2150

void FUN_103a2150(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037bc10(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a21b0 FUN_103a21b0

void FUN_103a21b0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe5a8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393390();
  ExceptionList = local_c;
  return;
}


// ==== 103a2200 FUN_103a2200

void FUN_103a2200(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe5c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037bcc0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2260 FUN_103a2260

void FUN_103a2260(FArchive *param_1,void *param_2)

{
  FArchive *this;
  
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  this = operator<<(param_1,(FString *)((int)param_2 + 8));
  FArchive::ByteOrderSerialize(this,(void *)((int)param_2 + 0x14),4);
  FArchive::ByteOrderSerialize(this,(void *)((int)param_2 + 0x18),4);
  FArchive::ByteOrderSerialize(this,(void *)((int)param_2 + 0x1c),4);
  thunk_FUN_103934c0(this,(int)param_2 + 0x20);
  return;
}


// ==== 103a22f0 FUN_103a22f0

void FUN_103a22f0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe600;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 8));
  local_4 = 0;
  FArray::FArray((FArray *)(in_ECX + 0x20));
  ExceptionList = local_c;
  return;
}


// ==== 103a2360 FUN_103a2360

void FUN_103a2360(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe637;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10393450();
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 103a23d0 FUN_103a23d0

void FUN_103a23d0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe667;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  FString::FString((FString *)(in_ECX + 2),(FString *)(param_1 + 2));
  local_4 = 0;
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  thunk_FUN_1037bda0(param_1 + 8);
  ExceptionList = local_c;
  return;
}


// ==== 103a2470 FUN_103a2470

void FUN_103a2470(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  FString::operator=((FString *)(in_ECX + 2),(FString *)(param_1 + 2));
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  thunk_FUN_10393610(param_1 + 8);
  return;
}


// ==== 103a24d0 FUN_103a24d0

void FUN_103a24d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe688;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103936b0();
  ExceptionList = local_c;
  return;
}


// ==== 103a2520 FUN_103a2520

void FUN_103a2520(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe6a8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393790();
  ExceptionList = local_c;
  return;
}


// ==== 103a2570 FUN_103a2570

void FUN_103a2570(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037be60(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a25d0 FUN_103a25d0

void FUN_103a25d0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe6e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037bf10(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2630 FUN_103a2630

void FUN_103a2630(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe708;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393870();
  ExceptionList = local_c;
  return;
}


// ==== 103a2680 FUN_103a2680

void FUN_103a2680(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe728;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10390110();
  ExceptionList = local_c;
  return;
}


// ==== 103a26d0 FUN_103a26d0

void FUN_103a26d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe748;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10390260();
  ExceptionList = local_c;
  return;
}


// ==== 103a2720 FUN_103a2720

void FUN_103a2720(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c140(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2780 FUN_103a2780

void FUN_103a2780(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10379a40(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a27e0 FUN_103a27e0

void FUN_103a27e0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10379b10(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2840 FUN_103a2840

void FUN_103a2840(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe7c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393a30();
  ExceptionList = local_c;
  return;
}


// ==== 103a2890 FUN_103a2890

void FUN_103a2890(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c220(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a28f0 FUN_103a28f0

void FUN_103a28f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe808;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393b10();
  ExceptionList = local_c;
  return;
}


// ==== 103a2940 FUN_103a2940

void FUN_103a2940(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe828;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393bf0();
  ExceptionList = local_c;
  return;
}


// ==== 103a2990 FUN_103a2990

void FUN_103a2990(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c2d0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a29f0 FUN_103a29f0

void FUN_103a29f0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c380(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2a50 FUN_103a2a50

void FUN_103a2a50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe888;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393cd0();
  ExceptionList = local_c;
  return;
}


// ==== 103a2aa0 FUN_103a2aa0

void FUN_103a2aa0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe8a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c430(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2b00 FUN_103a2b00

void FUN_103a2b00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe8c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393db0();
  ExceptionList = local_c;
  return;
}


// ==== 103a2b50 FUN_103a2b50

void FUN_103a2b50(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c4e0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2bb0 FUN_103a2bb0

void FUN_103a2bb0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe908;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393e90();
  ExceptionList = local_c;
  return;
}


// ==== 103a2c00 FUN_103a2c00

void FUN_103a2c00(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c5b0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2c60 FUN_103a2c60

void FUN_103a2c60(undefined4 *param_1)

{
  undefined4 *in_ECX;
  uint uVar1;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = in_ECX[2] ^ (in_ECX[2] ^ param_1[2]) & 1;
  uVar1 = (param_1[2] ^ in_ECX[2]) & 2 ^ in_ECX[2];
  in_ECX[2] = uVar1;
  uVar1 = (param_1[2] ^ uVar1) & 4 ^ uVar1;
  in_ECX[2] = uVar1;
  in_ECX[2] = (param_1[2] ^ uVar1) & 8 ^ uVar1;
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  thunk_FUN_10384cd0(param_1 + 8);
  return;
}


// ==== 103a2d00 FUN_103a2d00

void FUN_103a2d00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe948;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10393f70();
  ExceptionList = local_c;
  return;
}


// ==== 103a2d50 FUN_103a2d50

void FUN_103a2d50(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fe968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c6e0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a2db0 FUN_103a2db0

void FUN_103a2db0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe988;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394050();
  ExceptionList = local_c;
  return;
}


// ==== 103a2e00 FUN_103a2e00

void FUN_103a2e00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe9a8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394130();
  ExceptionList = local_c;
  return;
}


// ==== 103a2e50 FUN_103a2e50

void FUN_103a2e50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe9c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394210();
  ExceptionList = local_c;
  return;
}


// ==== 103a2ea0 FUN_103a2ea0

void FUN_103a2ea0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fe9e8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103942f0();
  ExceptionList = local_c;
  return;
}


// ==== 103a2ef0 FUN_103a2ef0

void FUN_103a2ef0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fea08;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103943d0();
  ExceptionList = local_c;
  return;
}


// ==== 103a2f40 FUN_103a2f40

void FUN_103a2f40(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fea28;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103944b0();
  ExceptionList = local_c;
  return;
}


// ==== 103a2f90 FUN_103a2f90

void FUN_103a2f90(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fea48;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394590();
  ExceptionList = local_c;
  return;
}


// ==== 103a2fe0 FUN_103a2fe0

void FUN_103a2fe0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fea68;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394670();
  ExceptionList = local_c;
  return;
}


// ==== 103a3030 FUN_103a3030

void FUN_103a3030(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fea88;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394750();
  ExceptionList = local_c;
  return;
}


// ==== 103a3080 FUN_103a3080

void FUN_103a3080(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feaa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c7b0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a30e0 FUN_103a30e0

void FUN_103a30e0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c860(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a3140 FUN_103a3140

void FUN_103a3140(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c910(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a31a0 FUN_103a31a0

void FUN_103a31a0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feb08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037c9c0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a3200 FUN_103a3200

void FUN_103a3200(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feb28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037ca70(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a3260 FUN_103a3260

void FUN_103a3260(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feb48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037cb20(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a32c0 FUN_103a32c0

void FUN_103a32c0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feb68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037cbd0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a3320 FUN_103a3320

void FUN_103a3320(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feb88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037cc80(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a3380 FUN_103a3380

void FUN_103a3380(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037cd30(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a33e0 FUN_103a33e0

void FUN_103a33e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107febc8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394830();
  ExceptionList = local_c;
  return;
}


// ==== 103a3430 FUN_103a3430

void FUN_103a3430(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107febe8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394910();
  ExceptionList = local_c;
  return;
}


// ==== 103a3480 FUN_103a3480

void FUN_103a3480(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fec08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037cde0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a34e0 FUN_103a34e0

void FUN_103a34e0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fec28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037ce90(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a3540 FUN_103a3540

void FUN_103a3540(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fec48;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103949f0();
  ExceptionList = local_c;
  return;
}


// ==== 103a3590 FUN_103a3590

void FUN_103a3590(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fec68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037cf40(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a35f0 FUN_103a35f0

void FUN_103a35f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fec88;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394ad0();
  ExceptionList = local_c;
  return;
}


// ==== 103a3640 FUN_103a3640

void FUN_103a3640(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037cff0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a36a0 FUN_103a36a0

void FUN_103a36a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fecc8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10392a50();
  ExceptionList = local_c;
  return;
}


// ==== 103a36f0 FUN_103a36f0

void FUN_103a36f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fece8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394c20();
  ExceptionList = local_c;
  return;
}


// ==== 103a3740 FUN_103a3740

void FUN_103a3740(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fed08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037b260(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a37a0 FUN_103a37a0

void FUN_103a37a0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fed28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d0a0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a3800 FUN_103a3800

void FUN_103a3800(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fed48;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394d00();
  ExceptionList = local_c;
  return;
}


// ==== 103a3850 FUN_103a3850

void FUN_103a3850(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fed68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d150(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a38b0 FUN_103a38b0

void FUN_103a38b0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fed88;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394de0();
  ExceptionList = local_c;
  return;
}


// ==== 103a3900 FUN_103a3900

void FUN_103a3900(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feda8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d200(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a3960 FUN_103a3960

void FUN_103a3960(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  int iVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(uint *)(in_ECX + 0x40) =
       *(uint *)(in_ECX + 0x40) ^ (*(uint *)(in_ECX + 0x40) ^ *(uint *)(param_1 + 0x40)) & 1;
  *(uint *)(in_ECX + 0x40) =
       (*(uint *)(param_1 + 0x40) ^ *(uint *)(in_ECX + 0x40)) & 2 ^ *(uint *)(in_ECX + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(uint *)(in_ECX + 0x68) =
       *(uint *)(in_ECX + 0x68) ^ (*(uint *)(param_1 + 0x68) ^ *(uint *)(in_ECX + 0x68)) & 1;
  thunk_FUN_10392c40(param_1 + 0x6c);
  *(uint *)(in_ECX + 0x78) =
       *(uint *)(in_ECX + 0x78) ^ (*(uint *)(param_1 + 0x78) ^ *(uint *)(in_ECX + 0x78)) & 1;
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(uint *)(in_ECX + 0xa4) =
       *(uint *)(in_ECX + 0xa4) ^ (*(uint *)(in_ECX + 0xa4) ^ *(uint *)(param_1 + 0xa4)) & 1;
  *(uint *)(in_ECX + 0xa4) =
       (*(uint *)(param_1 + 0xa4) ^ *(uint *)(in_ECX + 0xa4)) & 2 ^ *(uint *)(in_ECX + 0xa4);
  thunk_FUN_10385f50(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(uint *)(in_ECX + 0xec) =
       *(uint *)(in_ECX + 0xec) ^ (*(uint *)(param_1 + 0xec) ^ *(uint *)(in_ECX + 0xec)) & 1;
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(uint *)(in_ECX + 0x104) =
       *(uint *)(in_ECX + 0x104) ^ (*(uint *)(in_ECX + 0x104) ^ *(uint *)(param_1 + 0x104)) & 1;
  *(uint *)(in_ECX + 0x104) =
       (*(uint *)(param_1 + 0x104) ^ *(uint *)(in_ECX + 0x104)) & 2 ^ *(uint *)(in_ECX + 0x104);
  in_ECX[0x108] = param_1[0x108];
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(uint *)(in_ECX + 0x110) =
       *(uint *)(in_ECX + 0x110) ^ (*(uint *)(param_1 + 0x110) ^ *(uint *)(in_ECX + 0x110)) & 1;
  in_ECX[0x114] = param_1[0x114];
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  in_ECX[0x120] = param_1[0x120];
  *(uint *)(in_ECX + 0x124) =
       *(uint *)(in_ECX + 0x124) ^ (*(uint *)(param_1 + 0x124) ^ *(uint *)(in_ECX + 0x124)) & 1;
  thunk_FUN_10386060(param_1 + 0x128);
  *(uint *)(in_ECX + 0x134) =
       *(uint *)(in_ECX + 0x134) ^ (*(uint *)(in_ECX + 0x134) ^ *(uint *)(param_1 + 0x134)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ *(uint *)(in_ECX + 0x134)) & 2 ^ *(uint *)(in_ECX + 0x134);
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  *(uint *)(in_ECX + 0x134) = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x100 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x140),(FStringNoInit *)(param_1 + 0x140));
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  in_ECX[0x174] = param_1[0x174];
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(in_ECX + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(in_ECX + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  in_ECX[0x1a4] = param_1[0x1a4];
  *(uint *)(in_ECX + 0x1a8) =
       *(uint *)(in_ECX + 0x1a8) ^ (*(uint *)(param_1 + 0x1a8) ^ *(uint *)(in_ECX + 0x1a8)) & 1;
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(uint *)(in_ECX + 0x1dc) =
       *(uint *)(in_ECX + 0x1dc) ^ (*(uint *)(in_ECX + 0x1dc) ^ *(uint *)(param_1 + 0x1dc)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x1dc) ^ *(uint *)(in_ECX + 0x1dc)) & 2 ^ *(uint *)(in_ECX + 0x1dc);
  *(uint *)(in_ECX + 0x1dc) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1dc) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x1dc) = uVar1;
  *(uint *)(in_ECX + 0x1dc) = (*(uint *)(param_1 + 0x1dc) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(uint *)(in_ECX + 0x1f8) =
       *(uint *)(in_ECX + 0x1f8) ^ (*(uint *)(in_ECX + 0x1f8) ^ *(uint *)(param_1 + 0x1f8)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x1f8) ^ *(uint *)(in_ECX + 0x1f8)) & 2 ^ *(uint *)(in_ECX + 0x1f8);
  *(uint *)(in_ECX + 0x1f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1f8) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x1f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1f8) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x1f8) = uVar1;
  *(uint *)(in_ECX + 0x1f8) = (*(uint *)(param_1 + 0x1f8) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(in_ECX + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(in_ECX + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(in_ECX + 0x210) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(in_ECX + 0x218) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(in_ECX + 0x21c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(in_ECX + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(in_ECX + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(in_ECX + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(uint *)(in_ECX + 0x22c) =
       *(uint *)(in_ECX + 0x22c) ^ (*(uint *)(param_1 + 0x22c) ^ *(uint *)(in_ECX + 0x22c)) & 1;
  thunk_FUN_10386170(param_1 + 0x230);
  *(undefined4 *)(in_ECX + 0x23c) = *(undefined4 *)(param_1 + 0x23c);
  in_ECX[0x240] = param_1[0x240];
  *(uint *)(in_ECX + 0x244) =
       *(uint *)(in_ECX + 0x244) ^ (*(uint *)(param_1 + 0x244) ^ *(uint *)(in_ECX + 0x244)) & 1;
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(in_ECX + 0x24c) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(in_ECX + 0x250) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(in_ECX + 0x254) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(in_ECX + 600) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(in_ECX + 0x25c) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(in_ECX + 0x260) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(in_ECX + 0x264) = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(in_ECX + 0x268) = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(in_ECX + 0x26c) = *(undefined4 *)(param_1 + 0x26c);
  *(undefined4 *)(in_ECX + 0x270) = *(undefined4 *)(param_1 + 0x270);
  *(undefined4 *)(in_ECX + 0x274) = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(in_ECX + 0x278) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(in_ECX + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(in_ECX + 0x280) = *(undefined4 *)(param_1 + 0x280);
  *(undefined4 *)(in_ECX + 0x284) = *(undefined4 *)(param_1 + 0x284);
  *(undefined4 *)(in_ECX + 0x288) = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)(in_ECX + 0x28c) = *(undefined4 *)(param_1 + 0x28c);
  *(uint *)(in_ECX + 0x290) =
       *(uint *)(in_ECX + 0x290) ^ (*(uint *)(param_1 + 0x290) ^ *(uint *)(in_ECX + 0x290)) & 1;
  *(undefined4 *)(in_ECX + 0x294) = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(in_ECX + 0x298) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)(in_ECX + 0x29c) = *(undefined4 *)(param_1 + 0x29c);
  *(undefined4 *)(in_ECX + 0x2a0) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined4 *)(in_ECX + 0x2a4) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(in_ECX + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(in_ECX + 0x2ac) = *(undefined4 *)(param_1 + 0x2ac);
  *(undefined4 *)(in_ECX + 0x2b0) = *(undefined4 *)(param_1 + 0x2b0);
  *(undefined4 *)(in_ECX + 0x2b4) = *(undefined4 *)(param_1 + 0x2b4);
  *(uint *)(in_ECX + 0x2b8) =
       *(uint *)(in_ECX + 0x2b8) ^ (*(uint *)(in_ECX + 0x2b8) ^ *(uint *)(param_1 + 0x2b8)) & 1;
  *(uint *)(in_ECX + 0x2b8) =
       (*(uint *)(param_1 + 0x2b8) ^ *(uint *)(in_ECX + 0x2b8)) & 2 ^ *(uint *)(in_ECX + 0x2b8);
  thunk_FUN_103862b0(param_1 + 700);
  *(undefined4 *)(in_ECX + 0x2c8) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(in_ECX + 0x2cc) = *(undefined4 *)(param_1 + 0x2cc);
  *(undefined4 *)(in_ECX + 0x2d0) = *(undefined4 *)(param_1 + 0x2d0);
  *(undefined4 *)(in_ECX + 0x2d4) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(in_ECX + 0x2d8) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(in_ECX + 0x2dc) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(in_ECX + 0x2e0) = *(undefined4 *)(param_1 + 0x2e0);
  *(uint *)(in_ECX + 0x2e4) =
       *(uint *)(in_ECX + 0x2e4) ^ (*(uint *)(param_1 + 0x2e4) ^ *(uint *)(in_ECX + 0x2e4)) & 1;
  in_ECX[0x2e8] = param_1[0x2e8];
  *(undefined4 *)(in_ECX + 0x2ec) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(in_ECX + 0x2f0) = *(undefined4 *)(param_1 + 0x2f0);
  *(undefined4 *)(in_ECX + 0x2f4) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(in_ECX + 0x2f8) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(in_ECX + 0x2fc) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(in_ECX + 0x300) = *(undefined4 *)(param_1 + 0x300);
  thunk_FUN_103863c0(param_1 + 0x304);
  in_ECX[0x310] = param_1[0x310];
  *(undefined4 *)(in_ECX + 0x314) = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(in_ECX + 0x318) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(in_ECX + 0x31c) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(in_ECX + 800) = *(undefined4 *)(param_1 + 800);
  in_ECX[0x324] = param_1[0x324];
  *(undefined4 *)(in_ECX + 0x328) = *(undefined4 *)(param_1 + 0x328);
  *(undefined4 *)(in_ECX + 0x32c) = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(in_ECX + 0x330) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(in_ECX + 0x334) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(in_ECX + 0x338) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(in_ECX + 0x33c) = *(undefined4 *)(param_1 + 0x33c);
  *(uint *)(in_ECX + 0x340) =
       *(uint *)(in_ECX + 0x340) ^ (*(uint *)(param_1 + 0x340) ^ *(uint *)(in_ECX + 0x340)) & 1;
  in_ECX[0x344] = param_1[0x344];
  *(undefined4 *)(in_ECX + 0x348) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(in_ECX + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(in_ECX + 0x350) = *(undefined4 *)(param_1 + 0x350);
  *(uint *)(in_ECX + 0x354) =
       *(uint *)(in_ECX + 0x354) ^ (*(uint *)(in_ECX + 0x354) ^ *(uint *)(param_1 + 0x354)) & 1;
  *(uint *)(in_ECX + 0x354) =
       (*(uint *)(param_1 + 0x354) ^ *(uint *)(in_ECX + 0x354)) & 2 ^ *(uint *)(in_ECX + 0x354);
  thunk_FUN_10379900(param_1 + 0x358);
  *(undefined4 *)(in_ECX + 0x364) = *(undefined4 *)(param_1 + 0x364);
  *(undefined4 *)(in_ECX + 0x368) = *(undefined4 *)(param_1 + 0x368);
  *(uint *)(in_ECX + 0x36c) =
       *(uint *)(in_ECX + 0x36c) ^ (*(uint *)(param_1 + 0x36c) ^ *(uint *)(in_ECX + 0x36c)) & 1;
  *(undefined4 *)(in_ECX + 0x370) = *(undefined4 *)(param_1 + 0x370);
  *(undefined4 *)(in_ECX + 0x374) = *(undefined4 *)(param_1 + 0x374);
  *(undefined4 *)(in_ECX + 0x378) = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(in_ECX + 0x37c) = *(undefined4 *)(param_1 + 0x37c);
  *(undefined4 *)(in_ECX + 0x380) = *(undefined4 *)(param_1 + 0x380);
  *(undefined4 *)(in_ECX + 900) = *(undefined4 *)(param_1 + 900);
  *(undefined4 *)(in_ECX + 0x388) = *(undefined4 *)(param_1 + 0x388);
  *(undefined4 *)(in_ECX + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
  *(uint *)(in_ECX + 0x390) =
       *(uint *)(in_ECX + 0x390) ^ (*(uint *)(in_ECX + 0x390) ^ *(uint *)(param_1 + 0x390)) & 1;
  *(uint *)(in_ECX + 0x390) =
       (*(uint *)(param_1 + 0x390) ^ *(uint *)(in_ECX + 0x390)) & 2 ^ *(uint *)(in_ECX + 0x390);
  *(undefined4 *)(in_ECX + 0x394) = *(undefined4 *)(param_1 + 0x394);
  *(undefined4 *)(in_ECX + 0x398) = *(undefined4 *)(param_1 + 0x398);
  *(undefined4 *)(in_ECX + 0x39c) = *(undefined4 *)(param_1 + 0x39c);
  *(undefined4 *)(in_ECX + 0x3a0) = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined4 *)(in_ECX + 0x3a4) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(in_ECX + 0x3a8) = *(undefined4 *)(param_1 + 0x3a8);
  *(undefined4 *)(in_ECX + 0x3ac) = *(undefined4 *)(param_1 + 0x3ac);
  *(undefined4 *)(in_ECX + 0x3b0) = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined4 *)(in_ECX + 0x3b4) = *(undefined4 *)(param_1 + 0x3b4);
  *(undefined4 *)(in_ECX + 0x3b8) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)(in_ECX + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(in_ECX + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(in_ECX + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(in_ECX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(in_ECX + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(in_ECX + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(in_ECX + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(in_ECX + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(in_ECX + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(in_ECX + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(in_ECX + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(in_ECX + 0x3f4) = *(undefined4 *)(param_1 + 0x3f4);
  *(undefined4 *)(in_ECX + 0x3f8) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined4 *)(in_ECX + 0x3fc) = *(undefined4 *)(param_1 + 0x3fc);
  in_ECX[0x400] = param_1[0x400];
  *(uint *)(in_ECX + 0x404) =
       *(uint *)(in_ECX + 0x404) ^ (*(uint *)(param_1 + 0x404) ^ *(uint *)(in_ECX + 0x404)) & 1;
  thunk_FUN_10386500(param_1 + 0x408);
  *(undefined4 *)(in_ECX + 0x414) = *(undefined4 *)(param_1 + 0x414);
  *(undefined4 *)(in_ECX + 0x418) = *(undefined4 *)(param_1 + 0x418);
  *(undefined4 *)(in_ECX + 0x41c) = *(undefined4 *)(param_1 + 0x41c);
  *(undefined4 *)(in_ECX + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(uint *)(in_ECX + 0x424) =
       *(uint *)(in_ECX + 0x424) ^ (*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 1;
  *(uint *)(in_ECX + 0x424) =
       (*(uint *)(param_1 + 0x424) ^ *(uint *)(in_ECX + 0x424)) & 2 ^ *(uint *)(in_ECX + 0x424);
  *(undefined4 *)(in_ECX + 0x428) = *(undefined4 *)(param_1 + 0x428);
  thunk_FUN_10386640(param_1 + 0x42c);
  *(undefined4 *)(in_ECX + 0x438) = *(undefined4 *)(param_1 + 0x438);
  *(undefined4 *)(in_ECX + 0x43c) = *(undefined4 *)(param_1 + 0x43c);
  *(undefined4 *)(in_ECX + 0x440) = *(undefined4 *)(param_1 + 0x440);
  pUVar3 = param_1 + 0x444;
  pUVar4 = in_ECX + 0x444;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(undefined4 *)(in_ECX + 0x460) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(in_ECX + 0x464) = *(undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(in_ECX + 0x468) = *(undefined4 *)(param_1 + 0x468);
  *(uint *)(in_ECX + 0x46c) =
       *(uint *)(in_ECX + 0x46c) ^ (*(uint *)(in_ECX + 0x46c) ^ *(uint *)(param_1 + 0x46c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x46c) ^ *(uint *)(in_ECX + 0x46c)) & 2 ^ *(uint *)(in_ECX + 0x46c);
  *(uint *)(in_ECX + 0x46c) = uVar1;
  *(uint *)(in_ECX + 0x46c) = (*(uint *)(param_1 + 0x46c) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x470) = *(undefined4 *)(param_1 + 0x470);
  *(undefined4 *)(in_ECX + 0x474) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(in_ECX + 0x478) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(in_ECX + 0x47c) = *(undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)(in_ECX + 0x480) = *(undefined4 *)(param_1 + 0x480);
  *(undefined4 *)(in_ECX + 0x484) = *(undefined4 *)(param_1 + 0x484);
  *(undefined4 *)(in_ECX + 0x488) = *(undefined4 *)(param_1 + 0x488);
  *(undefined4 *)(in_ECX + 0x48c) = *(undefined4 *)(param_1 + 0x48c);
  *(undefined4 *)(in_ECX + 0x490) = *(undefined4 *)(param_1 + 0x490);
  *(undefined4 *)(in_ECX + 0x494) = *(undefined4 *)(param_1 + 0x494);
  *(undefined4 *)(in_ECX + 0x498) = *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)(in_ECX + 0x49c) = *(undefined4 *)(param_1 + 0x49c);
  *(undefined4 *)(in_ECX + 0x4a0) = *(undefined4 *)(param_1 + 0x4a0);
  *(undefined4 *)(in_ECX + 0x4a4) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(in_ECX + 0x4a8) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(in_ECX + 0x4ac) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(in_ECX + 0x4b0) = *(undefined4 *)(param_1 + 0x4b0);
  thunk_FUN_103795a0(param_1 + 0x4b4);
  *(undefined4 *)(in_ECX + 0x4c0) = *(undefined4 *)(param_1 + 0x4c0);
  *(uint *)(in_ECX + 0x4c4) =
       *(uint *)(in_ECX + 0x4c4) ^ (*(uint *)(param_1 + 0x4c4) ^ *(uint *)(in_ECX + 0x4c4)) & 1;
  *(undefined4 *)(in_ECX + 0x4c8) = *(undefined4 *)(param_1 + 0x4c8);
  *(uint *)(in_ECX + 0x4cc) =
       *(uint *)(in_ECX + 0x4cc) ^ (*(uint *)(param_1 + 0x4cc) ^ *(uint *)(in_ECX + 0x4cc)) & 1;
  return;
}


// ==== 103a4cc0 FUN_103a4cc0

void FUN_103a4cc0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fedc8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10392b80();
  ExceptionList = local_c;
  return;
}


// ==== 103a4d10 FUN_103a4d10

void FUN_103a4d10(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fede8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10394f30();
  ExceptionList = local_c;
  return;
}


// ==== 103a4d60 FUN_103a4d60

void FUN_103a4d60(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fee08;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395010();
  ExceptionList = local_c;
  return;
}


// ==== 103a4db0 FUN_103a4db0

void FUN_103a4db0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fee28;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103950f0();
  ExceptionList = local_c;
  return;
}


// ==== 103a4e00 FUN_103a4e00

void FUN_103a4e00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fee48;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103951d0();
  ExceptionList = local_c;
  return;
}


// ==== 103a4e50 FUN_103a4e50

void FUN_103a4e50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fee68;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103952b0();
  ExceptionList = local_c;
  return;
}


// ==== 103a4ea0 FUN_103a4ea0

void FUN_103a4ea0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107fee88;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1038fce0();
  ExceptionList = local_c;
  return;
}


// ==== 103a4ef0 FUN_103a4ef0

void FUN_103a4ef0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107feea8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103953e0();
  ExceptionList = local_c;
  return;
}


// ==== 103a4f40 FUN_103a4f40

void FUN_103a4f40(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107feec8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103954c0();
  ExceptionList = local_c;
  return;
}


// ==== 103a4f90 FUN_103a4f90

void FUN_103a4f90(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107feee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037b310(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a4ff0 FUN_103a4ff0

void FUN_103a4ff0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fef08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d2e0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a5050 FUN_103a5050

void FUN_103a5050(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fef28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d3a0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a50b0 FUN_103a50b0

void FUN_103a50b0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fef48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d460(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a5110 FUN_103a5110

void FUN_103a5110(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fef68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d530(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a5170 FUN_103a5170

void FUN_103a5170(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fef88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d5f0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a51d0 FUN_103a51d0

void FUN_103a51d0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fefa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10379830(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a5230 FUN_103a5230

void FUN_103a5230(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fefc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d6f0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a5290 FUN_103a5290

void FUN_103a5290(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fefe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d7c0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a52f0 FUN_103a52f0

void FUN_103a52f0(UParticleEmitter *param_1)

{
  UParticleEmitter *in_ECX;
  
  UParticleEmitter::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  *(uint *)(in_ECX + 0x4dc) =
       *(uint *)(in_ECX + 0x4dc) ^ (*(uint *)(param_1 + 0x4dc) ^ *(uint *)(in_ECX + 0x4dc)) & 1;
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  thunk_FUN_10386780(param_1 + 0x4e4);
  thunk_FUN_103868c0(param_1 + 0x4f0);
  *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(param_1 + 0x4fc);
  *(undefined4 *)(in_ECX + 0x500) = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x504) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(in_ECX + 0x508) = *(undefined4 *)(param_1 + 0x508);
  *(undefined4 *)(in_ECX + 0x50c) = *(undefined4 *)(param_1 + 0x50c);
  return;
}


// ==== 103a53e0 FUN_103a53e0

void FUN_103a53e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff008;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103955a0();
  ExceptionList = local_c;
  return;
}


// ==== 103a5430 FUN_103a5430

void FUN_103a5430(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff028;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395680();
  ExceptionList = local_c;
  return;
}


// ==== 103a5480 FUN_103a5480

void FUN_103a5480(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d8c0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a54e0 FUN_103a54e0

void FUN_103a54e0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037d9b0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a5540 FUN_103a5540

void FUN_103a5540(UParticleEmitter *param_1)

{
  UParticleEmitter *in_ECX;
  
  UParticleEmitter::operator=(in_ECX,param_1);
  in_ECX[0x4d0] = param_1[0x4d0];
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  *(undefined4 *)(in_ECX + 0x4dc) = *(undefined4 *)(param_1 + 0x4dc);
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(in_ECX + 0x4e4) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(in_ECX + 0x4e8) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined4 *)(in_ECX + 0x4ec) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(in_ECX + 0x4f0) = *(undefined4 *)(param_1 + 0x4f0);
  *(undefined4 *)(in_ECX + 0x4f4) = *(undefined4 *)(param_1 + 0x4f4);
  return;
}


// ==== 103a55f0 FUN_103a55f0

void FUN_103a55f0(UParticleEmitter *param_1)

{
  UParticleEmitter *in_ECX;
  
  UParticleEmitter::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  *(undefined4 *)(in_ECX + 0x4dc) = *(undefined4 *)(param_1 + 0x4dc);
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(in_ECX + 0x4e4) = *(undefined4 *)(param_1 + 0x4e4);
  thunk_FUN_10386a10(param_1 + 0x4e8);
  *(undefined4 *)(in_ECX + 0x4f4) = *(undefined4 *)(param_1 + 0x4f4);
  *(undefined4 *)(in_ECX + 0x4f8) = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(param_1 + 0x4fc);
  *(undefined4 *)(in_ECX + 0x500) = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x504) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(in_ECX + 0x508) = *(undefined4 *)(param_1 + 0x508);
  return;
}


// ==== 103a56e0 FUN_103a56e0

void FUN_103a56e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff088;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395760();
  ExceptionList = local_c;
  return;
}


// ==== 103a5730 FUN_103a5730

void FUN_103a5730(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff0a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037da90(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a5790 FUN_103a5790

void FUN_103a5790(UParticleEmitter *param_1)

{
  uint uVar1;
  UParticleEmitter *in_ECX;
  int iVar2;
  UParticleEmitter *pUVar3;
  UParticleEmitter *pUVar4;
  
  UParticleEmitter::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  in_ECX[0x4dc] = param_1[0x4dc];
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(in_ECX + 0x4e4) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(in_ECX + 0x4e8) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined4 *)(in_ECX + 0x4ec) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(in_ECX + 0x4f0) = *(undefined4 *)(param_1 + 0x4f0);
  in_ECX[0x4f4] = param_1[0x4f4];
  *(undefined4 *)(in_ECX + 0x4f8) = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(param_1 + 0x4fc);
  *(undefined4 *)(in_ECX + 0x500) = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x504) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(in_ECX + 0x508) = *(undefined4 *)(param_1 + 0x508);
  *(undefined4 *)(in_ECX + 0x50c) = *(undefined4 *)(param_1 + 0x50c);
  *(undefined4 *)(in_ECX + 0x510) = *(undefined4 *)(param_1 + 0x510);
  *(undefined4 *)(in_ECX + 0x514) = *(undefined4 *)(param_1 + 0x514);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  thunk_FUN_10379900(param_1 + 0x51c);
  *(undefined4 *)(in_ECX + 0x528) = *(undefined4 *)(param_1 + 0x528);
  *(undefined4 *)(in_ECX + 0x52c) = *(undefined4 *)(param_1 + 0x52c);
  *(undefined4 *)(in_ECX + 0x530) = *(undefined4 *)(param_1 + 0x530);
  *(undefined4 *)(in_ECX + 0x534) = *(undefined4 *)(param_1 + 0x534);
  *(undefined4 *)(in_ECX + 0x538) = *(undefined4 *)(param_1 + 0x538);
  *(undefined4 *)(in_ECX + 0x53c) = *(undefined4 *)(param_1 + 0x53c);
  *(undefined4 *)(in_ECX + 0x540) = *(undefined4 *)(param_1 + 0x540);
  *(undefined4 *)(in_ECX + 0x544) = *(undefined4 *)(param_1 + 0x544);
  thunk_FUN_10386b40(param_1 + 0x548);
  *(uint *)(in_ECX + 0x554) =
       *(uint *)(in_ECX + 0x554) ^ (*(uint *)(param_1 + 0x554) ^ *(uint *)(in_ECX + 0x554)) & 1;
  *(undefined4 *)(in_ECX + 0x558) = *(undefined4 *)(param_1 + 0x558);
  *(undefined4 *)(in_ECX + 0x55c) = *(undefined4 *)(param_1 + 0x55c);
  *(uint *)(in_ECX + 0x560) =
       *(uint *)(in_ECX + 0x560) ^ (*(uint *)(in_ECX + 0x560) ^ *(uint *)(param_1 + 0x560)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ *(uint *)(in_ECX + 0x560)) & 2 ^ *(uint *)(in_ECX + 0x560);
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  *(uint *)(in_ECX + 0x560) = (*(uint *)(param_1 + 0x560) ^ uVar1) & 0x80 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x564) = *(undefined4 *)(param_1 + 0x564);
  *(undefined4 *)(in_ECX + 0x568) = *(undefined4 *)(param_1 + 0x568);
  *(undefined4 *)(in_ECX + 0x56c) = *(undefined4 *)(param_1 + 0x56c);
  *(undefined4 *)(in_ECX + 0x570) = *(undefined4 *)(param_1 + 0x570);
  *(undefined4 *)(in_ECX + 0x574) = *(undefined4 *)(param_1 + 0x574);
  pUVar3 = param_1 + 0x578;
  pUVar4 = in_ECX + 0x578;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(uint *)(in_ECX + 0x5ac) =
       *(uint *)(in_ECX + 0x5ac) ^ (*(uint *)(in_ECX + 0x5ac) ^ *(uint *)(param_1 + 0x5ac)) & 1;
  *(uint *)(in_ECX + 0x5ac) =
       (*(uint *)(param_1 + 0x5ac) ^ *(uint *)(in_ECX + 0x5ac)) & 2 ^ *(uint *)(in_ECX + 0x5ac);
  return;
}


// ==== 103a5b20 FUN_103a5b20

void FUN_103a5b20(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff0c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395840();
  ExceptionList = local_c;
  return;
}


// ==== 103a5b70 FUN_103a5b70

void FUN_103a5b70(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff0e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037db80(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a5bd0 FUN_103a5bd0

void FUN_103a5bd0(UParticleEmitter *param_1)

{
  uint uVar1;
  UParticleEmitter *in_ECX;
  
  UParticleEmitter::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(uint *)(in_ECX + 0x4d4) =
       *(uint *)(in_ECX + 0x4d4) ^ (*(uint *)(in_ECX + 0x4d4) ^ *(uint *)(param_1 + 0x4d4)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x4d4) ^ *(uint *)(in_ECX + 0x4d4)) & 2 ^ *(uint *)(in_ECX + 0x4d4);
  *(uint *)(in_ECX + 0x4d4) = uVar1;
  *(uint *)(in_ECX + 0x4d4) = (*(uint *)(param_1 + 0x4d4) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  *(undefined4 *)(in_ECX + 0x4dc) = *(undefined4 *)(param_1 + 0x4dc);
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  return;
}


// ==== 103a5c80 FUN_103a5c80

void FUN_103a5c80(UParticleEmitter *param_1)

{
  uint uVar1;
  UParticleEmitter *in_ECX;
  
  UParticleEmitter::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  thunk_FUN_10386c70(param_1 + 0x4d8);
  in_ECX[0x4e4] = param_1[0x4e4];
  *(undefined4 *)(in_ECX + 0x4e8) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined4 *)(in_ECX + 0x4ec) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(in_ECX + 0x4f0) = *(undefined4 *)(param_1 + 0x4f0);
  *(uint *)(in_ECX + 0x4f4) =
       *(uint *)(in_ECX + 0x4f4) ^ (*(uint *)(param_1 + 0x4f4) ^ *(uint *)(in_ECX + 0x4f4)) & 1;
  *(undefined4 *)(in_ECX + 0x4f8) = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(param_1 + 0x4fc);
  *(undefined4 *)(in_ECX + 0x500) = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x504) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(in_ECX + 0x508) = *(undefined4 *)(param_1 + 0x508);
  *(undefined4 *)(in_ECX + 0x50c) = *(undefined4 *)(param_1 + 0x50c);
  *(undefined4 *)(in_ECX + 0x510) = *(undefined4 *)(param_1 + 0x510);
  *(undefined4 *)(in_ECX + 0x514) = *(undefined4 *)(param_1 + 0x514);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(in_ECX + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined4 *)(in_ECX + 0x520) = *(undefined4 *)(param_1 + 0x520);
  *(undefined4 *)(in_ECX + 0x524) = *(undefined4 *)(param_1 + 0x524);
  *(undefined4 *)(in_ECX + 0x528) = *(undefined4 *)(param_1 + 0x528);
  *(undefined4 *)(in_ECX + 0x52c) = *(undefined4 *)(param_1 + 0x52c);
  thunk_FUN_10386da0(param_1 + 0x530);
  thunk_FUN_10386da0(param_1 + 0x53c);
  *(undefined4 *)(in_ECX + 0x548) = *(undefined4 *)(param_1 + 0x548);
  *(undefined4 *)(in_ECX + 0x54c) = *(undefined4 *)(param_1 + 0x54c);
  *(uint *)(in_ECX + 0x550) =
       *(uint *)(in_ECX + 0x550) ^ (*(uint *)(in_ECX + 0x550) ^ *(uint *)(param_1 + 0x550)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x550) ^ *(uint *)(in_ECX + 0x550)) & 2 ^ *(uint *)(in_ECX + 0x550);
  *(uint *)(in_ECX + 0x550) = uVar1;
  *(uint *)(in_ECX + 0x550) = (*(uint *)(param_1 + 0x550) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x554) = *(undefined4 *)(param_1 + 0x554);
  *(undefined4 *)(in_ECX + 0x558) = *(undefined4 *)(param_1 + 0x558);
  *(undefined4 *)(in_ECX + 0x55c) = *(undefined4 *)(param_1 + 0x55c);
  *(undefined4 *)(in_ECX + 0x560) = *(undefined4 *)(param_1 + 0x560);
  *(undefined4 *)(in_ECX + 0x564) = *(undefined4 *)(param_1 + 0x564);
  *(undefined4 *)(in_ECX + 0x568) = *(undefined4 *)(param_1 + 0x568);
  *(undefined4 *)(in_ECX + 0x56c) = *(undefined4 *)(param_1 + 0x56c);
  *(undefined4 *)(in_ECX + 0x570) = *(undefined4 *)(param_1 + 0x570);
  *(undefined4 *)(in_ECX + 0x574) = *(undefined4 *)(param_1 + 0x574);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(uint *)(in_ECX + 0x57c) =
       *(uint *)(in_ECX + 0x57c) ^ (*(uint *)(param_1 + 0x57c) ^ *(uint *)(in_ECX + 0x57c)) & 1;
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(in_ECX + 0x58c) = *(undefined4 *)(param_1 + 0x58c);
  *(undefined4 *)(in_ECX + 0x590) = *(undefined4 *)(param_1 + 0x590);
  *(undefined4 *)(in_ECX + 0x594) = *(undefined4 *)(param_1 + 0x594);
  *(undefined4 *)(in_ECX + 0x598) = *(undefined4 *)(param_1 + 0x598);
  *(uint *)(in_ECX + 0x59c) =
       *(uint *)(in_ECX + 0x59c) ^ (*(uint *)(param_1 + 0x59c) ^ *(uint *)(in_ECX + 0x59c)) & 1;
  *(undefined4 *)(in_ECX + 0x5a0) = *(undefined4 *)(param_1 + 0x5a0);
  *(undefined4 *)(in_ECX + 0x5a4) = *(undefined4 *)(param_1 + 0x5a4);
  *(undefined4 *)(in_ECX + 0x5a8) = *(undefined4 *)(param_1 + 0x5a8);
  *(undefined4 *)(in_ECX + 0x5ac) = *(undefined4 *)(param_1 + 0x5ac);
  *(undefined4 *)(in_ECX + 0x5b0) = *(undefined4 *)(param_1 + 0x5b0);
  thunk_FUN_10386ee0(param_1 + 0x5b4);
  thunk_FUN_103795a0(param_1 + 0x5c0);
  thunk_FUN_1032bfc0(param_1 + 0x5cc);
  *(undefined4 *)(in_ECX + 0x5d8) = *(undefined4 *)(param_1 + 0x5d8);
  return;
}


// ==== 103a6070 FUN_103a6070

void FUN_103a6070(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff108;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395920();
  ExceptionList = local_c;
  return;
}


// ==== 103a60c0 FUN_103a60c0

void FUN_103a60c0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff128;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395a00();
  ExceptionList = local_c;
  return;
}


// ==== 103a6110 FUN_103a6110

void FUN_103a6110(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff148;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395ae0();
  ExceptionList = local_c;
  return;
}


// ==== 103a6160 FUN_103a6160

void FUN_103a6160(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037dc70(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a61c0 FUN_103a61c0

void FUN_103a61c0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037dd60(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a6220 FUN_103a6220

void FUN_103a6220(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff1a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037de30(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a6280 FUN_103a6280

void FUN_103a6280(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  thunk_FUN_10387080(param_1 + 0x578);
  in_ECX[0x584] = param_1[0x584];
  *(uint *)(in_ECX + 0x588) =
       *(uint *)(in_ECX + 0x588) ^ (*(uint *)(param_1 + 0x588) ^ *(uint *)(in_ECX + 0x588)) & 1;
  return;
}


// ==== 103a62e0 FUN_103a62e0

void FUN_103a62e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff1c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395bc0();
  ExceptionList = local_c;
  return;
}


// ==== 103a6330 FUN_103a6330

void FUN_103a6330(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff1e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037df00(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a6390 FUN_103a6390

void FUN_103a6390(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  thunk_FUN_103871b0(param_1 + 0x57c);
  in_ECX[0x588] = param_1[0x588];
  *(uint *)(in_ECX + 0x58c) =
       *(uint *)(in_ECX + 0x58c) ^ (*(uint *)(in_ECX + 0x58c) ^ *(uint *)(param_1 + 0x58c)) & 1;
  *(uint *)(in_ECX + 0x58c) =
       (*(uint *)(param_1 + 0x58c) ^ *(uint *)(in_ECX + 0x58c)) & 2 ^ *(uint *)(in_ECX + 0x58c);
  *(undefined4 *)(in_ECX + 0x590) = *(undefined4 *)(param_1 + 0x590);
  *(undefined4 *)(in_ECX + 0x594) = *(undefined4 *)(param_1 + 0x594);
  *(undefined4 *)(in_ECX + 0x598) = *(undefined4 *)(param_1 + 0x598);
  return;
}


// ==== 103a6450 FUN_103a6450

void FUN_103a6450(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff208;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395c50();
  ExceptionList = local_c;
  return;
}


// ==== 103a64a0 FUN_103a64a0

void FUN_103a64a0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037dfe0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a6500 FUN_103a6500

void FUN_103a6500(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107ff25e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMaterialSwitch::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10326910();
  local_4 = 0xffffffff;
  UModifier::~UModifier((UModifier *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a6590 FUN_103a6590

void FUN_103a6590(UModifier *param_1)

{
  UModifier *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff29e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UModifier::UModifier(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UMaterialSwitch::vftable;
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  thunk_FUN_1037bb60(param_1 + 0x580);
  ExceptionList = local_c;
  return;
}


// ==== 103a6630 FUN_103a6630

void FUN_103a6630(byte param_1)

{
  UMaterialSwitch *in_ECX;
  
  UMaterialSwitch::~UMaterialSwitch(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58c);
  }
  return;
}


// ==== 103a6660 FUN_103a6660

UMaterialSwitch * FUN_103a6660(byte param_1)

{
  UMaterialSwitch *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x58c,*(int *)(in_ECX + -4),UMaterialSwitch::~UMaterialSwitch);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMaterialSwitch::~UMaterialSwitch(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58c);
  }
  return in_ECX;
}


// ==== 103a66e0 FUN_103a66e0

void FUN_103a66e0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107ff2fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMatAction::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  thunk_FUN_1038fad0();
  local_4._0_1_ = 1;
  thunk_FUN_10393790();
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x38));
  local_4 = 0xffffffff;
  UMatObject::~UMatObject((UMatObject *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a6790 FUN_103a6790

void FUN_103a6790(UMatObject *param_1)

{
  UMatObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff35a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMatObject::UMatObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UMatAction::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x38),(FStringNoInit *)(param_1 + 0x38));
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  thunk_FUN_1037bf10(param_1 + 0x48);
  local_4 = CONCAT31(local_4._1_3_,3);
  *(uint *)(in_ECX + 0x54) =
       *(uint *)(in_ECX + 0x54) ^ (*(uint *)(param_1 + 0x54) ^ *(uint *)(in_ECX + 0x54)) & 1;
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(uint *)(in_ECX + 0x70) =
       *(uint *)(in_ECX + 0x70) ^ (*(uint *)(param_1 + 0x70) ^ *(uint *)(in_ECX + 0x70)) & 1;
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  thunk_FUN_103794b0(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  ExceptionList = local_c;
  return;
}


// ==== 103a68e0 FUN_103a68e0

void FUN_103a68e0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x38),(FStringNoInit *)(param_1 + 0x38));
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  thunk_FUN_10384400(param_1 + 0x48);
  *(uint *)(in_ECX + 0x54) =
       *(uint *)(in_ECX + 0x54) ^ (*(uint *)(param_1 + 0x54) ^ *(uint *)(in_ECX + 0x54)) & 1;
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(uint *)(in_ECX + 0x70) =
       *(uint *)(in_ECX + 0x70) ^ (*(uint *)(param_1 + 0x70) ^ *(uint *)(in_ECX + 0x70)) & 1;
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  thunk_FUN_103795a0(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  return;
}


// ==== 103a69c0 FUN_103a69c0

void FUN_103a69c0(byte param_1)

{
  UMatAction *in_ECX;
  
  UMatAction::~UMatAction(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x94);
  }
  return;
}


// ==== 103a69f0 FUN_103a69f0

UMatAction * FUN_103a69f0(byte param_1)

{
  UMatAction *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x94,*(int *)(in_ECX + -4),UMatAction::~UMatAction);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMatAction::~UMatAction(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x94);
  }
  return in_ECX;
}


// ==== 103a6a70 FUN_103a6a70

void FUN_103a6a70(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UActionWarp::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UMatAction::~UMatAction((UMatAction *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a6ae0 FUN_103a6ae0

void FUN_103a6ae0(UMatAction *param_1)

{
  UMatAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff3a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMatAction::UMatAction(in_ECX,param_1);
  *(undefined ***)in_ECX = UActionWarp::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103a6b50 FUN_103a6b50

void FUN_103a6b50(UMatAction *param_1)

{
  UMatAction *in_ECX;
  
  UMatAction::operator=(in_ECX,param_1);
  return;
}


// ==== 103a6b70 FUN_103a6b70

void FUN_103a6b70(byte param_1)

{
  UActionWarp *in_ECX;
  
  UActionWarp::~UActionWarp(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x94);
  }
  return;
}


// ==== 103a6ba0 FUN_103a6ba0

UActionWarp * FUN_103a6ba0(byte param_1)

{
  UActionWarp *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x94,*(int *)(in_ECX + -4),UActionWarp::~UActionWarp);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UActionWarp::~UActionWarp(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x94);
  }
  return in_ECX;
}


// ==== 103a6c20 FUN_103a6c20

void FUN_103a6c20(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UActionPause::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UMatAction::~UMatAction((UMatAction *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a6c90 FUN_103a6c90

void FUN_103a6c90(UMatAction *param_1)

{
  UMatAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff3e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMatAction::UMatAction(in_ECX,param_1);
  *(undefined ***)in_ECX = UActionPause::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103a6d00 FUN_103a6d00

void FUN_103a6d00(UMatAction *param_1)

{
  UMatAction *in_ECX;
  
  UMatAction::operator=(in_ECX,param_1);
  return;
}


// ==== 103a6d20 FUN_103a6d20

void FUN_103a6d20(byte param_1)

{
  UActionPause *in_ECX;
  
  UActionPause::~UActionPause(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x94);
  }
  return;
}


// ==== 103a6d50 FUN_103a6d50

UActionPause * FUN_103a6d50(byte param_1)

{
  UActionPause *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x94,*(int *)(in_ECX + -4),UActionPause::~UActionPause);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UActionPause::~UActionPause(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x94);
  }
  return in_ECX;
}


// ==== 103a6dd0 FUN_103a6dd0

void FUN_103a6dd0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UActionMoveCamera::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UMatAction::~UMatAction((UMatAction *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a6e40 FUN_103a6e40

void FUN_103a6e40(UMatAction *param_1)

{
  UMatAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMatAction::UMatAction(in_ECX,param_1);
  *(undefined ***)in_ECX = UActionMoveCamera::vftable;
  in_ECX[0x94] = param_1[0x94];
  ExceptionList = local_c;
  return;
}


// ==== 103a6ec0 FUN_103a6ec0

void FUN_103a6ec0(UMatAction *param_1)

{
  UMatAction *in_ECX;
  
  UMatAction::operator=(in_ECX,param_1);
  in_ECX[0x94] = param_1[0x94];
  return;
}


// ==== 103a6ef0 FUN_103a6ef0

void FUN_103a6ef0(byte param_1)

{
  UActionMoveCamera *in_ECX;
  
  UActionMoveCamera::~UActionMoveCamera(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x98);
  }
  return;
}


// ==== 103a6f20 FUN_103a6f20

UActionMoveCamera * FUN_103a6f20(byte param_1)

{
  UActionMoveCamera *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x98,*(int *)(in_ECX + -4),UActionMoveCamera::~UActionMoveCamera);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UActionMoveCamera::~UActionMoveCamera(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x98);
  }
  return in_ECX;
}


// ==== 103a6fa0 FUN_103a6fa0

void FUN_103a6fa0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  thunk_FUN_1032cfe0(param_1 + 0x40);
  *(uint *)(in_ECX + 0x4c) =
       *(uint *)(in_ECX + 0x4c) ^ (*(uint *)(param_1 + 0x4c) ^ *(uint *)(in_ECX + 0x4c)) & 1;
  return;
}


// ==== 103a6ff0 FUN_103a6ff0

void FUN_103a6ff0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff45d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FArray::FArray((FArray *)(in_ECX + 0x10));
  ExceptionList = local_c;
  return;
}


// ==== 103a7060 FUN_103a7060

void FUN_103a7060(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff484;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1032cf20();
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a70c0 FUN_103a70c0

void FUN_103a70c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff4b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a7110 FUN_103a7110

void FUN_103a7110(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff4d8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1032cf20();
  ExceptionList = local_c;
  return;
}


// ==== 103a7160 FUN_103a7160

void FUN_103a7160(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff501;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a71b0 FUN_103a71b0

void FUN_103a71b0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff528;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1032cf20();
  ExceptionList = local_c;
  return;
}


// ==== 103a7200 FUN_103a7200

void FUN_103a7200(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff551;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a7250 FUN_103a7250

void FUN_103a7250(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff578;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1032cf20();
  ExceptionList = local_c;
  return;
}


// ==== 103a72a0 FUN_103a72a0

void FUN_103a72a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff5a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a72f0 FUN_103a72f0

void FUN_103a72f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff5c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1032cf20();
  ExceptionList = local_c;
  return;
}


// ==== 103a7340 FUN_103a7340

void FUN_103a7340(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff5fd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  FString::FString((FString *)(in_ECX + 0x10));
  ExceptionList = local_c;
  return;
}


// ==== 103a73b0 FUN_103a73b0

void FUN_103a73b0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff624;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  thunk_FUN_1032cf20();
  ExceptionList = local_c;
  return;
}


// ==== 103a7410 FUN_103a7410

void FUN_103a7410(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(uint *)(in_ECX + 0x34) =
       *(uint *)(in_ECX + 0x34) ^ (*(uint *)(param_1 + 0x34) ^ *(uint *)(in_ECX + 0x34)) & 1;
  thunk_FUN_103872e0(param_1 + 0x38);
  thunk_FUN_103872e0(param_1 + 0x44);
  thunk_FUN_103872e0(param_1 + 0x50);
  thunk_FUN_103872e0(param_1 + 0x5c);
  return;
}


// ==== 103a7480 FUN_103a7480

void FUN_103a7480(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff648;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395d80();
  ExceptionList = local_c;
  return;
}


// ==== 103a74d0 FUN_103a74d0

void FUN_103a74d0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037e0b0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a7530 FUN_103a7530

void FUN_103a7530(UL2NTimeLight *param_1)

{
  UL2NTimeLight *in_ECX;
  
  UL2NTimeLight::operator=(in_ECX,param_1);
  thunk_FUN_10387410(param_1 + 0x68);
  thunk_FUN_1032bcd0(param_1 + 0x74);
  thunk_FUN_10387410(param_1 + 0x80);
  thunk_FUN_1032bcd0(param_1 + 0x8c);
  thunk_FUN_10387410(param_1 + 0x98);
  thunk_FUN_10387410(param_1 + 0xa4);
  thunk_FUN_10387410(param_1 + 0xb0);
  thunk_FUN_10387410(param_1 + 0xbc);
  thunk_FUN_10387410(param_1 + 200);
  thunk_FUN_10387410(param_1 + 0xd4);
  thunk_FUN_10387410(param_1 + 0xe0);
  thunk_FUN_10387410(param_1 + 0xec);
  thunk_FUN_10387520(param_1 + 0xf8);
  thunk_FUN_10387520(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  return;
}


// ==== 103a7690 FUN_103a7690

void FUN_103a7690(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff688;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395e60();
  ExceptionList = local_c;
  return;
}


// ==== 103a76e0 FUN_103a76e0

void FUN_103a76e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff6a8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10395f40();
  ExceptionList = local_c;
  return;
}


// ==== 103a7730 FUN_103a7730

void FUN_103a7730(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037e180(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a7790 FUN_103a7790

void FUN_103a7790(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff6e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037e240(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a77f0 FUN_103a77f0

void FUN_103a77f0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10387630(param_1 + 0x38);
  thunk_FUN_10387630(param_1 + 0x44);
  thunk_FUN_10387630(param_1 + 0x50);
  thunk_FUN_10387630(param_1 + 0x5c);
  thunk_FUN_10387630(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  return;
}


// ==== 103a7870 FUN_103a7870

void FUN_103a7870(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff708;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10396020();
  ExceptionList = local_c;
  return;
}


// ==== 103a78c0 FUN_103a78c0

void FUN_103a78c0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037e300(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a7920 FUN_103a7920

void FUN_103a7920(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032bef0(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103a7990 FUN_103a7990

void FUN_103a7990(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037e3c0(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103a7a00 FUN_103a7a00

void FUN_103a7a00(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff791;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a7a50 FUN_103a7a50

void FUN_103a7a50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff7b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326630();
  ExceptionList = local_c;
  return;
}


// ==== 103a7aa0 FUN_103a7aa0

void FUN_103a7aa0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff7d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032bef0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a7b00 FUN_103a7b00

void FUN_103a7b00(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107ff831;
  local_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0x3c));
  local_4 = (uint)local_4._1_3_ << 8;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0x18));
  local_4 = 0xffffffff;
  thunk_FUN_10396150();
  ExceptionList = local_c;
  return;
}


// ==== 103a7b90 FUN_103a7b90

void FUN_103a7b90(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff871;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  thunk_FUN_1037e470(param_1 + 3);
  local_4 = 0;
  FStaticMeshBatchVertexStream::FStaticMeshBatchVertexStream
            ((FStaticMeshBatchVertexStream *)(in_ECX + 6),
             (FStaticMeshBatchVertexStream *)(param_1 + 6));
  local_4 = CONCAT31(local_4._1_3_,1);
  FStaticMeshBatchIndexBuffer::FStaticMeshBatchIndexBuffer
            ((FStaticMeshBatchIndexBuffer *)(in_ECX + 0xf),
             (FStaticMeshBatchIndexBuffer *)(param_1 + 0xf));
  ExceptionList = local_c;
  return;
}


// ==== 103a7c30 FUN_103a7c30

void FUN_103a7c30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  thunk_FUN_10396210(param_1 + 3);
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  return;
}


// ==== 103a7cc0 FUN_103a7cc0

void FUN_103a7cc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff8a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a7d10 FUN_103a7d10

void FUN_103a7d10(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ff8c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326630();
  ExceptionList = local_c;
  return;
}


// ==== 103a7d60 FUN_103a7d60

void FUN_103a7d60(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032bef0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103a7dc0 FUN_103a7dc0

void FUN_103a7dc0(byte param_1)

{
  UPlayer *in_ECX;
  
  UPlayer::~UPlayer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return;
}


// ==== 103a7df0 FUN_103a7df0

void FUN_103a7df0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107ff920;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UPackageCheckInfo::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  thunk_FUN_1032ce30();
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x34));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103a7e80 FUN_103a7e80

void FUN_103a7e80(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff969;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UPackageCheckInfo::vftable;
  FString::FString((FString *)(in_ECX + 0x34));
  local_4 = CONCAT31(local_4._1_3_,1);
  FArray::FArray((FArray *)(in_ECX + 0x40));
  ExceptionList = local_c;
  return;
}


// ==== 103a7f10 FUN_103a7f10

void FUN_103a7f10(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ff9a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UPackageCheckInfo::vftable;
  FString::FString((FString *)(in_ECX + 0x34),(FString *)(param_1 + 0x34));
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_1032bd40(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  ExceptionList = local_c;
  return;
}


// ==== 103a7fc0 FUN_103a7fc0

void FUN_103a7fc0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  FString::operator=((FString *)(in_ECX + 0x34),(FString *)(param_1 + 0x34));
  thunk_FUN_1032cea0(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return;
}


// ==== 103a8010 FUN_103a8010

void FUN_103a8010(byte param_1)

{
  UPackageCheckInfo *in_ECX;
  
  UPackageCheckInfo::~UPackageCheckInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x54);
  }
  return;
}


// ==== 103a8040 FUN_103a8040

UPackageCheckInfo * FUN_103a8040(byte param_1)

{
  UPackageCheckInfo *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x54,*(int *)(in_ECX + -4),UPackageCheckInfo::~UPackageCheckInfo);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPackageCheckInfo::~UPackageCheckInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x54);
  }
  return in_ECX;
}


// ==== 103a80c0 FUN_103a80c0

void FUN_103a80c0(void)

{
  FString *pFVar1;
  undefined4 *in_ECX;
  int iVar2;
  FName *pFVar3;
  undefined4 *puVar4;
  FArray *local_20 [2];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffa29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 1));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = CONCAT31(local_4._1_3_,1);
  FName::FName((FName *)(in_ECX + 8));
  FName::FName((FName *)(in_ECX + 9));
  pFVar3 = (FName *)(in_ECX + 0xb);
  iVar2 = 4;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  local_20[0] = (FArray *)(in_ECX + 0x10);
  FArray::FArray(local_20[0]);
  local_4._0_1_ = 3;
  local_20[0] = (FArray *)(in_ECX + 0x13);
  FArray::FArray(local_20[0]);
  local_4 = CONCAT31(local_4._1_3_,5);
  pFVar3 = (FName *)(in_ECX + 0x1a);
  iVar2 = 2;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFVar3 = (FName *)(in_ECX + 0x1e);
  iVar2 = 4;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFVar3 = (FName *)(in_ECX + 0x24);
  iVar2 = 2;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  pFVar3 = (FName *)(in_ECX + 0x28);
  iVar2 = 2;
  do {
    FName::FName(pFVar3);
    pFVar3 = pFVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  local_20[0] = (FArray *)(in_ECX + 0x2e);
  FArray::FArray(local_20[0]);
  local_4._0_1_ = 7;
  FName::FName((FName *)(in_ECX + 0x31));
  pFVar1 = (FString *)FString::FString(local_18,(ushort *)L"NoNameNPC");
  local_4._0_1_ = 8;
  FString::operator=((FString *)(in_ECX + 1),pFVar1);
  local_4._0_1_ = 7;
  FString::~FString(local_18);
  pFVar1 = (FString *)FString::FString(local_18,(ushort *)&DAT_10853d94);
  local_4._0_1_ = 9;
  FString::operator=((FString *)(in_ECX + 4),pFVar1);
  local_4 = CONCAT31(local_4._1_3_,7);
  FString::~FString(local_18);
  in_ECX[7] = 0;
  *in_ECX = 0;
  in_ECX[10] = 0;
  FName::FName((FName *)local_20,0);
  in_ECX[8] = local_20[0];
  FName::FName((FName *)local_20,0);
  in_ECX[9] = local_20[0];
  FName::FName((FName *)local_20,0);
  in_ECX[0x16] = 0x3f800000;
  *(FArray **)(in_ECX + 0x31) = local_20[0];
  puVar4 = in_ECX + 0xb;
  iVar2 = 5;
  do {
    FName::FName((FName *)local_20,0);
    *puVar4 = local_20[0];
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_ECX[0x27] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x19] = 0;
  puVar4 = in_ECX + 0x1a;
  iVar2 = 3;
  do {
    FName::FName((FName *)local_20,0);
    *puVar4 = local_20[0];
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar4 = in_ECX + 0x1e;
  iVar2 = 5;
  do {
    FName::FName((FName *)local_20,0);
    *puVar4 = local_20[0];
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar4 = in_ECX + 0x24;
  iVar2 = 3;
  do {
    FName::FName((FName *)local_20,0);
    *puVar4 = local_20[0];
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar4 = in_ECX + 0x28;
  iVar2 = 3;
  do {
    FName::FName((FName *)local_20,0);
    *puVar4 = local_20[0];
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_ECX[0x35] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x33] = 0;
  FArray::Empty((FArray *)(in_ECX + 0x10),4,0);
  FArray::Empty((FArray *)(in_ECX + 0x2e),4,0);
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103a8460 FUN_103a8460

void FUN_103a8460(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107ffa8c;
  pvStack_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &pvStack_c;
  FArray::Empty((FArray *)(in_ECX + 0x40),4,0);
  if (*(int *)(in_ECX + 0x60) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0x60));
  }
  local_4._0_1_ = 3;
  thunk_FUN_10325f90();
  local_4._0_1_ = 2;
  thunk_FUN_10325f90();
  local_4._0_1_ = 1;
  thunk_FUN_103963e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = pvStack_c;
  return;
}


// ==== 103a8530 FUN_103a8530

void FUN_103a8530(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffaec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 4),(FString *)(param_1 + 4));
  local_4._0_1_ = 1;
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  thunk_FUN_1037e600(param_1 + 0x10);
  local_4._0_1_ = 2;
  thunk_FUN_1032bc20(param_1 + 0x13);
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  in_ECX[0x1c] = param_1[0x1c];
  in_ECX[0x1d] = param_1[0x1d];
  in_ECX[0x1e] = param_1[0x1e];
  in_ECX[0x1f] = param_1[0x1f];
  in_ECX[0x20] = param_1[0x20];
  in_ECX[0x21] = param_1[0x21];
  in_ECX[0x22] = param_1[0x22];
  in_ECX[0x23] = param_1[0x23];
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x26] = param_1[0x26];
  in_ECX[0x27] = param_1[0x27];
  in_ECX[0x28] = param_1[0x28];
  in_ECX[0x29] = param_1[0x29];
  in_ECX[0x2a] = param_1[0x2a];
  in_ECX[0x2b] = param_1[0x2b];
  in_ECX[0x2c] = param_1[0x2c];
  in_ECX[0x2d] = param_1[0x2d];
  thunk_FUN_1032bc20(param_1 + 0x2e);
  in_ECX[0x31] = param_1[0x31];
  in_ECX[0x32] = param_1[0x32];
  in_ECX[0x33] = param_1[0x33];
  in_ECX[0x34] = param_1[0x34];
  in_ECX[0x35] = param_1[0x35];
  in_ECX[0x36] = param_1[0x36];
  in_ECX[0x37] = param_1[0x37];
  ExceptionList = local_c;
  return;
}


// ==== 103a87d0 FUN_103a87d0

void FUN_103a87d0(UObject *param_1)

{
  code *pcVar1;
  code *pcVar2;
  UObject *in_ECX;
  int iVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffb9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = FL2GameData::vftable;
  pUVar4 = param_1 + 0x34;
  pUVar5 = in_ECX + 0x34;
  for (iVar3 = 0x2a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar5 = *(undefined4 *)pUVar4;
    pUVar4 = pUVar4 + 4;
    pUVar5 = pUVar5 + 4;
  }
  _memcpy(in_ECX + 0xdc,param_1 + 0xdc,0x1048);
  pUVar4 = param_1 + 0x1124;
  pUVar5 = in_ECX + 0x1124;
  for (iVar3 = 0x1c2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar5 = *(undefined4 *)pUVar4;
    pUVar4 = pUVar4 + 4;
    pUVar5 = pUVar5 + 4;
  }
  *(undefined4 *)(in_ECX + 0x182c) = *(undefined4 *)(param_1 + 0x182c);
  *(undefined4 *)(in_ECX + 0x1830) = *(undefined4 *)(param_1 + 0x1830);
  *(undefined4 *)(in_ECX + 0x1834) = *(undefined4 *)(param_1 + 0x1834);
  *(undefined4 *)(in_ECX + 0x1838) = *(undefined4 *)(param_1 + 0x1838);
  _memcpy(in_ECX + 0x183c,param_1 + 0x183c,0x24cc);
  *(undefined4 *)(in_ECX + 0x3d08) = *(undefined4 *)(param_1 + 0x3d08);
  *(undefined4 *)(in_ECX + 0x3d0c) = *(undefined4 *)(param_1 + 0x3d0c);
  *(undefined4 *)(in_ECX + 0x3d10) = *(undefined4 *)(param_1 + 0x3d10);
  *(undefined4 *)(in_ECX + 0x3d14) = *(undefined4 *)(param_1 + 0x3d14);
  *(undefined4 *)(in_ECX + 0x3d18) = *(undefined4 *)(param_1 + 0x3d18);
  thunk_FUN_1037e740(param_1 + 0x3d1c);
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x3d28) = *(undefined4 *)(param_1 + 0x3d28);
  thunk_FUN_1037e7f0(param_1 + 0x3d2c);
  local_4._0_1_ = 2;
  thunk_FUN_1037e7f0(param_1 + 0x3d38);
  local_4._0_1_ = 3;
  *(undefined4 *)(in_ECX + 0x3d44) = *(undefined4 *)(param_1 + 0x3d44);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x3d48,param_1 + 0x3d48,0x2c,3000,
             (_func_void_void_ptr_void_ptr *)&LAB_10301bcc,(_func_void_void_ptr *)&LAB_1030c810);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x240e8,param_1 + 0x240e8,0x5c,3000,
             (_func_void_void_ptr_void_ptr *)&LAB_1030c15d,(_func_void_void_ptr *)&LAB_10301672);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x67708,param_1 + 0x67708,0x1c,200,
             (_func_void_void_ptr_void_ptr *)&LAB_103069d3,(_func_void_void_ptr *)&LAB_1030a4e3);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x68ce8,param_1 + 0x68ce8,0x1c,0xff,
             (_func_void_void_ptr_void_ptr *)&LAB_103069d3,(_func_void_void_ptr *)&LAB_1030a4e3);
  *(undefined4 *)(in_ECX + 0x6a8cc) = *(undefined4 *)(param_1 + 0x6a8cc);
  *(undefined4 *)(in_ECX + 0x6a8d0) = *(undefined4 *)(param_1 + 0x6a8d0);
  pcVar1 = ~FString_exref;
  *(undefined4 *)(in_ECX + 0x6a8d4) = *(undefined4 *)(param_1 + 0x6a8d4);
  pcVar2 = FString_exref;
  *(undefined4 *)(in_ECX + 0x6a8d8) = *(undefined4 *)(param_1 + 0x6a8d8);
  _eh_vector_copy_constructor_iterator_(in_ECX + 0x6a8dc,param_1 + 0x6a8dc,0xc,3000,pcVar2,pcVar1);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x7357c,param_1 + 0x7357c,0xc,3000,FString_exref,~FString_exref);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x7c21c,param_1 + 0x7c21c,0xc,100,FString_exref,~FString_exref);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x7c6cc,param_1 + 0x7c6cc,0xc,100,FString_exref,~FString_exref);
  FString::FString((FString *)(in_ECX + 0x7cb7c),(FString *)(param_1 + 0x7cb7c));
  local_4._0_1_ = 5;
  FString::FString((FString *)(in_ECX + 0x7cb88),(FString *)(param_1 + 0x7cb88));
  local_4._0_1_ = 7;
  thunk_FUN_10357c50(param_1 + 0x7cb94);
  local_4 = CONCAT31(local_4._1_3_,8);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x7cbb8,param_1 + 0x7cbb8,0x2c,100,
             (_func_void_void_ptr_void_ptr *)&LAB_10301c53,(_func_void_void_ptr *)&LAB_10306b68);
  *(undefined4 *)(in_ECX + 0x7dce8) = *(undefined4 *)(param_1 + 0x7dce8);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x7dcec,param_1 + 0x7dcec,0x20,200,
             (_func_void_void_ptr_void_ptr *)&LAB_1030b91f,(_func_void_void_ptr *)&LAB_1030ee3a);
  pUVar4 = param_1 + 0x7f5ec;
  pUVar5 = in_ECX + 0x7f5ec;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar5 = *(undefined4 *)pUVar4;
    pUVar4 = pUVar4 + 4;
    pUVar5 = pUVar5 + 4;
  }
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x7f62c,param_1 + 0x7f62c,0x54,6,(_func_void_void_ptr_void_ptr *)&LAB_10307bf8
             ,(_func_void_void_ptr *)&LAB_10301825);
  pUVar4 = param_1 + 0x7f824;
  pUVar5 = in_ECX + 0x7f824;
  for (iVar3 = 0x48; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar5 = *(undefined4 *)pUVar4;
    pUVar4 = pUVar4 + 4;
    pUVar5 = pUVar5 + 4;
  }
  pUVar4 = param_1 + 0x7f944;
  pUVar5 = in_ECX + 0x7f944;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar5 = *(undefined4 *)pUVar4;
    pUVar4 = pUVar4 + 4;
    pUVar5 = pUVar5 + 4;
  }
  *(undefined4 *)(in_ECX + 0x7f9c4) = *(undefined4 *)(param_1 + 0x7f9c4);
  *(undefined4 *)(in_ECX + 0x7f9c8) = *(undefined4 *)(param_1 + 0x7f9c8);
  *(undefined4 *)(in_ECX + 0x7f9cc) = *(undefined4 *)(param_1 + 0x7f9cc);
  *(undefined4 *)(in_ECX + 0x7f9d0) = *(undefined4 *)(param_1 + 0x7f9d0);
  *(undefined4 *)(in_ECX + 0x7f9d4) = *(undefined4 *)(param_1 + 0x7f9d4);
  *(undefined4 *)(in_ECX + 0x7f9d8) = *(undefined4 *)(param_1 + 0x7f9d8);
  *(undefined4 *)(in_ECX + 0x7f9dc) = *(undefined4 *)(param_1 + 0x7f9dc);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x7f9e0,param_1 + 0x7f9e0,0x10,0xf,
             (_func_void_void_ptr_void_ptr *)&LAB_1030d58a,(_func_void_void_ptr *)&LAB_1030f0a1);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x7fad0,param_1 + 0x7fad0,0x10,0xf,
             (_func_void_void_ptr_void_ptr *)&LAB_10305655,(_func_void_void_ptr *)&LAB_10301b9a);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x7fbc0,param_1 + 0x7fbc0,0x28,500,
             (_func_void_void_ptr_void_ptr *)&LAB_10302103,(_func_void_void_ptr *)&LAB_10308139);
  *(undefined4 *)(in_ECX + 0x849e0) = *(undefined4 *)(param_1 + 0x849e0);
  thunk_FUN_1037e8a0(param_1 + 0x849e4);
  pUVar4 = param_1 + 0x849f0;
  pUVar5 = in_ECX + 0x849f0;
  for (iVar3 = 0x106; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar5 = *(undefined4 *)pUVar4;
    pUVar4 = pUVar4 + 4;
    pUVar5 = pUVar5 + 4;
  }
  ExceptionList = local_c;
  return;
}


// ==== 103a8dc0 FUN_103a8dc0

void FUN_103a8dc0(UObject *param_1)

{
  UObject *pUVar1;
  UObject *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  FString *pFVar7;
  int local_4;
  
  UObject::operator=(in_ECX,param_1);
  iVar2 = (int)param_1 - (int)in_ECX;
  pUVar1 = in_ECX + 0x34;
  iVar4 = 0x2a;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar2);
    pUVar1 = pUVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  _memcpy(in_ECX + 0xdc,param_1 + 0xdc,0x1048);
  pUVar1 = param_1 + 0x1124;
  pUVar5 = in_ECX + 0x1124;
  for (iVar4 = 0x1c2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pUVar5 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar5 = pUVar5 + 4;
  }
  *(undefined4 *)(in_ECX + 0x182c) = *(undefined4 *)(param_1 + 0x182c);
  *(undefined4 *)(in_ECX + 0x1830) = *(undefined4 *)(param_1 + 0x1830);
  *(undefined4 *)(in_ECX + 0x1834) = *(undefined4 *)(param_1 + 0x1834);
  *(undefined4 *)(in_ECX + 0x1838) = *(undefined4 *)(param_1 + 0x1838);
  iVar4 = 0xf;
  pUVar1 = in_ECX + 0x183c;
  do {
    iVar4 = iVar4 + -1;
    pUVar5 = pUVar1 + iVar2;
    pUVar6 = pUVar1;
    for (iVar3 = 0x9d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pUVar6 = *(undefined4 *)pUVar5;
      pUVar5 = pUVar5 + 4;
      pUVar6 = pUVar6 + 4;
    }
    pUVar1 = pUVar1 + 0x274;
  } while (iVar4 != 0);
  *(undefined4 *)(in_ECX + 0x3d08) = *(undefined4 *)(param_1 + 0x3d08);
  *(undefined4 *)(in_ECX + 0x3d0c) = *(undefined4 *)(param_1 + 0x3d0c);
  *(undefined4 *)(in_ECX + 0x3d10) = *(undefined4 *)(param_1 + 0x3d10);
  *(undefined4 *)(in_ECX + 0x3d14) = *(undefined4 *)(param_1 + 0x3d14);
  *(undefined4 *)(in_ECX + 0x3d18) = *(undefined4 *)(param_1 + 0x3d18);
  thunk_FUN_10396560(param_1 + 0x3d1c);
  *(undefined4 *)(in_ECX + 0x3d28) = *(undefined4 *)(param_1 + 0x3d28);
  thunk_FUN_10396690(param_1 + 0x3d2c);
  thunk_FUN_10396690(param_1 + 0x3d38);
  *(undefined4 *)(in_ECX + 0x3d44) = *(undefined4 *)(param_1 + 0x3d44);
  pFVar7 = (FString *)(param_1 + 0x3d5c);
  pUVar1 = in_ECX + 0x3d4c;
  local_4 = 3000;
  do {
    *(undefined4 *)(pUVar1 + -4) = *(undefined4 *)(pFVar7 + -0x14);
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar2);
    FString::operator=((FString *)(pUVar1 + 4),pFVar7 + -0xc);
    FString::operator=((FString *)(pUVar1 + 0x10),pFVar7);
    FString::operator=((FString *)(pUVar1 + 0x1c),pFVar7 + 0xc);
    pFVar7 = pFVar7 + 0x2c;
    pUVar1 = pUVar1 + 0x2c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  pUVar1 = in_ECX + 0x240e8;
  iVar4 = 3000;
  do {
    thunk_FUN_103583e0(pUVar1 + iVar2);
    pUVar1 = pUVar1 + 0x5c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pUVar1 = param_1 + 0x67708;
  pUVar5 = in_ECX + 0x6770c;
  local_4 = 200;
  do {
    *(undefined4 *)(pUVar5 + -4) = *(undefined4 *)pUVar1;
    FString::operator=((FString *)pUVar5,(FString *)(pUVar5 + iVar2));
    FString::operator=((FString *)(pUVar5 + 0xc),(FString *)(pUVar1 + 0x10));
    pUVar1 = pUVar1 + 0x1c;
    pUVar5 = pUVar5 + 0x1c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  pUVar1 = param_1 + 0x68ce8;
  pUVar5 = in_ECX + 0x68cec;
  local_4 = 0xff;
  do {
    *(undefined4 *)(pUVar5 + -4) = *(undefined4 *)pUVar1;
    FString::operator=((FString *)pUVar5,(FString *)(pUVar5 + iVar2));
    FString::operator=((FString *)(pUVar5 + 0xc),(FString *)(pUVar1 + 0x10));
    pUVar1 = pUVar1 + 0x1c;
    pUVar5 = pUVar5 + 0x1c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(in_ECX + 0x6a8cc) = *(undefined4 *)(param_1 + 0x6a8cc);
  *(undefined4 *)(in_ECX + 0x6a8d0) = *(undefined4 *)(param_1 + 0x6a8d0);
  *(undefined4 *)(in_ECX + 0x6a8d4) = *(undefined4 *)(param_1 + 0x6a8d4);
  *(undefined4 *)(in_ECX + 0x6a8d8) = *(undefined4 *)(param_1 + 0x6a8d8);
  pUVar1 = in_ECX + 0x6a8dc;
  iVar4 = 3000;
  do {
    FString::operator=((FString *)pUVar1,(FString *)(pUVar1 + iVar2));
    pUVar1 = pUVar1 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pUVar1 = in_ECX + 0x7357c;
  iVar4 = 3000;
  do {
    FString::operator=((FString *)pUVar1,(FString *)(pUVar1 + iVar2));
    pUVar1 = pUVar1 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pUVar1 = in_ECX + 0x7c21c;
  iVar4 = 100;
  do {
    FString::operator=((FString *)pUVar1,(FString *)(pUVar1 + iVar2));
    pUVar1 = pUVar1 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pUVar1 = in_ECX + 0x7c6cc;
  iVar4 = 100;
  do {
    FString::operator=((FString *)pUVar1,(FString *)(pUVar1 + iVar2));
    pUVar1 = pUVar1 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FString::operator=((FString *)(in_ECX + 0x7cb7c),(FString *)(param_1 + 0x7cb7c));
  FString::operator=((FString *)(in_ECX + 0x7cb88),(FString *)(param_1 + 0x7cb88));
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x7cb94),(FStringNoInit *)(param_1 + 0x7cb94))
  ;
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x7cba0),(FStringNoInit *)(param_1 + 0x7cba0))
  ;
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x7cbac),(FStringNoInit *)(param_1 + 0x7cbac))
  ;
  pFVar7 = (FString *)(param_1 + 0x7cbcc);
  pUVar1 = in_ECX + 0x7cbbc;
  local_4 = 100;
  do {
    *(undefined4 *)(pUVar1 + -4) = *(undefined4 *)(pFVar7 + -0x14);
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar2);
    FString::operator=((FString *)(pUVar1 + 4),pFVar7 + -0xc);
    FString::operator=((FString *)(pUVar1 + 0x10),pFVar7);
    FString::operator=((FString *)(pUVar1 + 0x1c),pFVar7 + 0xc);
    pFVar7 = pFVar7 + 0x2c;
    pUVar1 = pUVar1 + 0x2c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(in_ECX + 0x7dce8) = *(undefined4 *)(param_1 + 0x7dce8);
  pUVar1 = param_1 + 0x7dd08;
  pUVar5 = in_ECX + 0x7dcf8;
  local_4 = 200;
  do {
    FString::operator=((FString *)(pUVar5 + -0xc),(FString *)(pUVar1 + -0x1c));
    FString::operator=((FString *)pUVar5,(FString *)(pUVar5 + iVar2));
    *(undefined4 *)(pUVar5 + 0xc) = *(undefined4 *)(pUVar1 + -4);
    *(undefined4 *)(pUVar5 + 0x10) = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 0x20;
    pUVar5 = pUVar5 + 0x20;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(in_ECX + 0x7f5ec) = *(undefined4 *)(param_1 + 0x7f5ec);
  *(undefined4 *)(in_ECX + 0x7f5f0) = *(undefined4 *)(param_1 + 0x7f5f0);
  *(undefined4 *)(in_ECX + 0x7f5f4) = *(undefined4 *)(param_1 + 0x7f5f4);
  *(undefined4 *)(in_ECX + 0x7f5f8) = *(undefined4 *)(param_1 + 0x7f5f8);
  *(undefined4 *)(in_ECX + 0x7f5fc) = *(undefined4 *)(param_1 + 0x7f5fc);
  *(undefined4 *)(in_ECX + 0x7f600) = *(undefined4 *)(param_1 + 0x7f600);
  *(undefined4 *)(in_ECX + 0x7f604) = *(undefined4 *)(param_1 + 0x7f604);
  *(undefined4 *)(in_ECX + 0x7f608) = *(undefined4 *)(param_1 + 0x7f608);
  *(undefined4 *)(in_ECX + 0x7f60c) = *(undefined4 *)(param_1 + 0x7f60c);
  *(undefined4 *)(in_ECX + 0x7f610) = *(undefined4 *)(param_1 + 0x7f610);
  *(undefined4 *)(in_ECX + 0x7f614) = *(undefined4 *)(param_1 + 0x7f614);
  *(undefined4 *)(in_ECX + 0x7f618) = *(undefined4 *)(param_1 + 0x7f618);
  *(undefined4 *)(in_ECX + 0x7f61c) = *(undefined4 *)(param_1 + 0x7f61c);
  *(undefined4 *)(in_ECX + 0x7f620) = *(undefined4 *)(param_1 + 0x7f620);
  *(undefined4 *)(in_ECX + 0x7f624) = *(undefined4 *)(param_1 + 0x7f624);
  *(undefined4 *)(in_ECX + 0x7f628) = *(undefined4 *)(param_1 + 0x7f628);
  pFVar7 = (FString *)(param_1 + 0x7f650);
  pUVar1 = in_ECX + 0x7f638;
  local_4 = 6;
  do {
    FString::operator=((FString *)(pUVar1 + -0xc),pFVar7 + -0x24);
    FString::operator=((FString *)pUVar1,(FString *)(pUVar1 + iVar2));
    FString::operator=((FString *)(pUVar1 + 0xc),pFVar7 + -0xc);
    FString::operator=((FString *)(pUVar1 + 0x18),pFVar7);
    FString::operator=((FString *)(pUVar1 + 0x24),pFVar7 + 0xc);
    FString::operator=((FString *)(pUVar1 + 0x30),pFVar7 + 0x18);
    FString::operator=((FString *)(pUVar1 + 0x3c),pFVar7 + 0x24);
    pFVar7 = pFVar7 + 0x54;
    pUVar1 = pUVar1 + 0x54;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  pUVar1 = in_ECX + 0x7f824;
  iVar4 = 0x12;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar2);
    *(undefined4 *)(pUVar1 + 4) = *(undefined4 *)(pUVar1 + iVar2 + 4);
    *(undefined4 *)(pUVar1 + 8) = *(undefined4 *)(pUVar1 + iVar2 + 8);
    *(undefined4 *)(pUVar1 + 0xc) = *(undefined4 *)(pUVar1 + iVar2 + 0xc);
    pUVar1 = pUVar1 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(in_ECX + 0x7f944) = *(undefined4 *)(param_1 + 0x7f944);
  *(undefined4 *)(in_ECX + 0x7f948) = *(undefined4 *)(param_1 + 0x7f948);
  *(undefined4 *)(in_ECX + 0x7f94c) = *(undefined4 *)(param_1 + 0x7f94c);
  *(undefined4 *)(in_ECX + 0x7f950) = *(undefined4 *)(param_1 + 0x7f950);
  *(undefined4 *)(in_ECX + 0x7f954) = *(undefined4 *)(param_1 + 0x7f954);
  *(undefined4 *)(in_ECX + 0x7f958) = *(undefined4 *)(param_1 + 0x7f958);
  *(undefined4 *)(in_ECX + 0x7f95c) = *(undefined4 *)(param_1 + 0x7f95c);
  *(undefined4 *)(in_ECX + 0x7f960) = *(undefined4 *)(param_1 + 0x7f960);
  *(undefined4 *)(in_ECX + 0x7f964) = *(undefined4 *)(param_1 + 0x7f964);
  *(undefined4 *)(in_ECX + 0x7f968) = *(undefined4 *)(param_1 + 0x7f968);
  *(undefined4 *)(in_ECX + 0x7f96c) = *(undefined4 *)(param_1 + 0x7f96c);
  *(undefined4 *)(in_ECX + 0x7f970) = *(undefined4 *)(param_1 + 0x7f970);
  *(undefined4 *)(in_ECX + 0x7f974) = *(undefined4 *)(param_1 + 0x7f974);
  *(undefined4 *)(in_ECX + 0x7f978) = *(undefined4 *)(param_1 + 0x7f978);
  *(undefined4 *)(in_ECX + 0x7f97c) = *(undefined4 *)(param_1 + 0x7f97c);
  *(undefined4 *)(in_ECX + 0x7f980) = *(undefined4 *)(param_1 + 0x7f980);
  *(undefined4 *)(in_ECX + 0x7f984) = *(undefined4 *)(param_1 + 0x7f984);
  *(undefined4 *)(in_ECX + 0x7f988) = *(undefined4 *)(param_1 + 0x7f988);
  *(undefined4 *)(in_ECX + 0x7f98c) = *(undefined4 *)(param_1 + 0x7f98c);
  *(undefined4 *)(in_ECX + 0x7f990) = *(undefined4 *)(param_1 + 0x7f990);
  *(undefined4 *)(in_ECX + 0x7f994) = *(undefined4 *)(param_1 + 0x7f994);
  *(undefined4 *)(in_ECX + 0x7f998) = *(undefined4 *)(param_1 + 0x7f998);
  *(undefined4 *)(in_ECX + 0x7f99c) = *(undefined4 *)(param_1 + 0x7f99c);
  *(undefined4 *)(in_ECX + 0x7f9a0) = *(undefined4 *)(param_1 + 0x7f9a0);
  *(undefined4 *)(in_ECX + 0x7f9a4) = *(undefined4 *)(param_1 + 0x7f9a4);
  *(undefined4 *)(in_ECX + 0x7f9a8) = *(undefined4 *)(param_1 + 0x7f9a8);
  *(undefined4 *)(in_ECX + 0x7f9ac) = *(undefined4 *)(param_1 + 0x7f9ac);
  *(undefined4 *)(in_ECX + 0x7f9b0) = *(undefined4 *)(param_1 + 0x7f9b0);
  *(undefined4 *)(in_ECX + 0x7f9b4) = *(undefined4 *)(param_1 + 0x7f9b4);
  *(undefined4 *)(in_ECX + 0x7f9b8) = *(undefined4 *)(param_1 + 0x7f9b8);
  *(undefined4 *)(in_ECX + 0x7f9bc) = *(undefined4 *)(param_1 + 0x7f9bc);
  *(undefined4 *)(in_ECX + 0x7f9c0) = *(undefined4 *)(param_1 + 0x7f9c0);
  *(undefined4 *)(in_ECX + 0x7f9c4) = *(undefined4 *)(param_1 + 0x7f9c4);
  *(undefined4 *)(in_ECX + 0x7f9c8) = *(undefined4 *)(param_1 + 0x7f9c8);
  *(undefined4 *)(in_ECX + 0x7f9cc) = *(undefined4 *)(param_1 + 0x7f9cc);
  *(undefined4 *)(in_ECX + 0x7f9d0) = *(undefined4 *)(param_1 + 0x7f9d0);
  *(undefined4 *)(in_ECX + 0x7f9d4) = *(undefined4 *)(param_1 + 0x7f9d4);
  *(undefined4 *)(in_ECX + 0x7f9d8) = *(undefined4 *)(param_1 + 0x7f9d8);
  *(undefined4 *)(in_ECX + 0x7f9dc) = *(undefined4 *)(param_1 + 0x7f9dc);
  pUVar1 = param_1 + 0x7f9e0;
  pUVar5 = in_ECX + 0x7f9e4;
  local_4 = 0xf;
  do {
    *(undefined4 *)(pUVar5 + -4) = *(undefined4 *)pUVar1;
    FString::operator=((FString *)pUVar5,(FString *)(pUVar5 + iVar2));
    pUVar1 = pUVar1 + 0x10;
    pUVar5 = pUVar5 + 0x10;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  pUVar1 = param_1 + 0x7fad0;
  pUVar5 = in_ECX + 0x7fad4;
  local_4 = 0xf;
  do {
    *(undefined4 *)(pUVar5 + -4) = *(undefined4 *)pUVar1;
    FString::operator=((FString *)pUVar5,(FString *)(pUVar5 + iVar2));
    pUVar1 = pUVar1 + 0x10;
    pUVar5 = pUVar5 + 0x10;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  pUVar1 = param_1 + 0x7fbcc;
  pUVar5 = in_ECX + 0x7fbc4;
  local_4 = 500;
  do {
    *(undefined4 *)(pUVar5 + -4) = *(undefined4 *)(pUVar1 + -0xc);
    *(undefined4 *)pUVar5 = *(undefined4 *)(pUVar5 + iVar2);
    *(undefined4 *)(pUVar5 + 4) = *(undefined4 *)(pUVar1 + -4);
    *(undefined4 *)(pUVar5 + 8) = *(undefined4 *)pUVar1;
    *(undefined4 *)(pUVar5 + 0xc) = *(undefined4 *)(pUVar1 + 4);
    *(undefined4 *)(pUVar5 + 0x10) = *(undefined4 *)(pUVar1 + 8);
    *(undefined4 *)(pUVar5 + 0x14) = *(undefined4 *)(pUVar1 + 0xc);
    FString::operator=((FString *)(pUVar5 + 0x18),(FString *)(pUVar1 + 0x10));
    pUVar1 = pUVar1 + 0x28;
    pUVar5 = pUVar5 + 0x28;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(in_ECX + 0x849e0) = *(undefined4 *)(param_1 + 0x849e0);
  thunk_FUN_103967c0(param_1 + 0x849e4);
  pUVar1 = param_1 + 0x849f0;
  pUVar5 = in_ECX + 0x849f0;
  for (iVar2 = 0x106; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar5 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar5 = pUVar5 + 4;
  }
  return;
}


// ==== 103a9830 FUN_103a9830

void FUN_103a9830(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffbe4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 0xb));
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = 0xffffffff;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103a98f0 FUN_103a98f0

void FUN_103a98f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ffc0b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10326630();
  ExceptionList = local_c;
  return;
}


// ==== 103a9940 FUN_103a9940

void FUN_103a9940(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffc2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  thunk_FUN_1032bef0(param_1 + 0xb);
  ExceptionList = local_c;
  return;
}


// ==== 103a99f0 FUN_103a99f0

void FUN_103a99f0(UL2NEnvLight *param_1)

{
  UL2NEnvLight *in_ECX;
  
  UL2NEnvLight::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined8 *)(in_ECX + 0x134) = *(undefined8 *)(param_1 + 0x134);
  *(undefined8 *)(in_ECX + 0x13c) = *(undefined8 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(in_ECX + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(in_ECX + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  FString::operator=((FString *)(in_ECX + 0x17c),(FString *)(param_1 + 0x17c));
  thunk_FUN_103968f0(param_1 + 0x188);
  thunk_FUN_103968f0(param_1 + 0x194);
  thunk_FUN_10396a20(param_1 + 0x1a0);
  thunk_FUN_10396b80(param_1 + 0x1ac);
  thunk_FUN_10396b80(param_1 + 0x1b8);
  in_ECX[0x1c4] = param_1[0x1c4];
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  in_ECX[0x1dc] = param_1[0x1dc];
  in_ECX[0x1dd] = param_1[0x1dd];
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  in_ECX[0x1e4] = param_1[0x1e4];
  in_ECX[0x1e5] = param_1[0x1e5];
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  return;
}


// ==== 103a9cc0 FUN_103a9cc0

void FUN_103a9cc0(UEngine *param_1)

{
  UEngine *pUVar1;
  UEngine *in_ECX;
  UEngine *pUVar2;
  int iVar3;
  
  UEngine::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  FURL::operator=((FURL *)(in_ECX + 0x1ac),(FURL *)(param_1 + 0x1ac));
  thunk_FUN_1032cea0(param_1 + 0x1f0);
  thunk_FUN_1032cea0(param_1 + 0x1fc);
  thunk_FUN_10396cb0(param_1 + 0x208);
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(in_ECX + 0x218) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(in_ECX + 0x21c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(in_ECX + 0x220) = *(undefined4 *)(param_1 + 0x220);
  iVar3 = 3;
  *(undefined4 *)(in_ECX + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(in_ECX + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(in_ECX + 0x22c) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x230) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(in_ECX + 0x234) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(in_ECX + 0x238) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(in_ECX + 0x23c) = *(undefined4 *)(param_1 + 0x23c);
  *(undefined4 *)(in_ECX + 0x240) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(in_ECX + 0x244) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(in_ECX + 0x24c) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(in_ECX + 0x250) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(in_ECX + 0x254) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(in_ECX + 600) = *(undefined4 *)(param_1 + 600);
  pUVar1 = in_ECX + 0x25c;
  pUVar2 = param_1 + 0x264;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + ((int)param_1 - (int)in_ECX));
    iVar3 = iVar3 + -1;
    *(undefined4 *)(pUVar1 + 4) = *(undefined4 *)(pUVar2 + -4);
    *(undefined4 *)(pUVar1 + 8) = *(undefined4 *)pUVar2;
    *(undefined4 *)(pUVar1 + 0xc) = *(undefined4 *)(pUVar2 + 4);
    *(undefined4 *)(pUVar1 + 0x10) = *(undefined4 *)(pUVar2 + 8);
    *(undefined4 *)(pUVar1 + 0x14) = *(undefined4 *)(pUVar2 + 0xc);
    *(undefined4 *)(pUVar1 + 0x18) = *(undefined4 *)(pUVar2 + 0x10);
    *(undefined4 *)(pUVar1 + 0x1c) = *(undefined4 *)(pUVar2 + 0x14);
    *(undefined4 *)(pUVar1 + 0x20) = *(undefined4 *)(pUVar2 + 0x18);
    *(undefined4 *)(pUVar1 + 0x24) = *(undefined4 *)(pUVar2 + 0x1c);
    pUVar1 = pUVar1 + 0x28;
    pUVar2 = pUVar2 + 0x28;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0x2d4) = *(undefined4 *)(param_1 + 0x2d4);
  thunk_FUN_10396e00(param_1 + 0x2d8);
  thunk_FUN_10396370(param_1 + 0x2e4);
  thunk_FUN_10396f10(param_1 + 0x2f0);
  *(undefined4 *)(in_ECX + 0x2fc) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(in_ECX + 0x300) = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(in_ECX + 0x304) = *(undefined4 *)(param_1 + 0x304);
  *(undefined4 *)(in_ECX + 0x308) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(in_ECX + 0x30c) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(in_ECX + 0x310) = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(in_ECX + 0x314) = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(in_ECX + 0x318) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(in_ECX + 0x31c) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(in_ECX + 800) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(in_ECX + 0x324) = *(undefined4 *)(param_1 + 0x324);
  *(undefined4 *)(in_ECX + 0x328) = *(undefined4 *)(param_1 + 0x328);
  *(undefined4 *)(in_ECX + 0x32c) = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(in_ECX + 0x330) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(in_ECX + 0x334) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(in_ECX + 0x338) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(in_ECX + 0x33c) = *(undefined4 *)(param_1 + 0x33c);
  *(undefined4 *)(in_ECX + 0x340) = *(undefined4 *)(param_1 + 0x340);
  *(undefined4 *)(in_ECX + 0x344) = *(undefined4 *)(param_1 + 0x344);
  *(undefined4 *)(in_ECX + 0x348) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(in_ECX + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(in_ECX + 0x350) = *(undefined4 *)(param_1 + 0x350);
  *(undefined4 *)(in_ECX + 0x354) = *(undefined4 *)(param_1 + 0x354);
  *(undefined4 *)(in_ECX + 0x358) = *(undefined4 *)(param_1 + 0x358);
  *(undefined4 *)(in_ECX + 0x35c) = *(undefined4 *)(param_1 + 0x35c);
  thunk_FUN_10385ad0(param_1 + 0x360);
  *(undefined4 *)(in_ECX + 0x36c) = *(undefined4 *)(param_1 + 0x36c);
  *(undefined4 *)(in_ECX + 0x370) = *(undefined4 *)(param_1 + 0x370);
  *(undefined4 *)(in_ECX + 0x374) = *(undefined4 *)(param_1 + 0x374);
  *(undefined4 *)(in_ECX + 0x378) = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(in_ECX + 0x37c) = *(undefined4 *)(param_1 + 0x37c);
  return;
}


// ==== 103aa120 FUN_103aa120

void FUN_103aa120(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ffc48;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_1032ce30();
  ExceptionList = local_c;
  return;
}


// ==== 103aa170 FUN_103aa170

void FUN_103aa170(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffc68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032bd40(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103aa1d0 FUN_103aa1d0

void FUN_103aa1d0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107ffccb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UViewport::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UViewport::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UViewport::vftable_for_FExec_;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  thunk_FUN_10325f90();
  local_4._0_1_ = 1;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x134));
  local_4 = (uint)local_4._1_3_ << 8;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0xdc));
  local_4 = 0xffffffff;
  UPlayer::~UPlayer((UPlayer *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103aa290 FUN_103aa290

void FUN_103aa290(void)

{
  int iVar1;
  int iVar2;
  
  thunk_FUN_103737b0();
  iVar2 = -1;
  if (-1 < *(int *)(GObjObjects_exref + 4)) {
    do {
      *(undefined4 *)(*(int *)(*(int *)GObjObjects_exref + iVar2 * 4) + 0x90) = 1;
      do {
        iVar2 = iVar2 + 1;
        if (*(int *)(GObjObjects_exref + 4) <= iVar2) {
          return;
        }
      } while ((*(int *)(*(int *)GObjObjects_exref + iVar2 * 4) == 0) ||
              (iVar1 = UObject::IsA(*(UObject **)(*(int *)GObjObjects_exref + iVar2 * 4),
                                    &UViewport::PrivateStaticClass), iVar1 == 0));
    } while (iVar2 < *(int *)(GObjObjects_exref + 4));
  }
  return;
}


// ==== 103aa330 FUN_103aa330

void FUN_103aa330(UPlayer *param_1)

{
  UPlayer *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffd23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPlayer::UPlayer(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UViewport::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UViewport::vftable_for_FOutputDevice_;
  *(undefined ***)(in_ECX + 0x38) = UViewport::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined8 *)(in_ECX + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  thunk_FUN_10377e80(param_1 + 0xdc);
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x134),(FStringNoInit *)(param_1 + 0x134))
  ;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined8 *)(in_ECX + 0x144) = *(undefined8 *)(param_1 + 0x144);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  in_ECX[0x15c] = param_1[0x15c];
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(in_ECX + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  thunk_FUN_1032bc20(param_1 + 0x180);
  *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  ExceptionList = local_c;
  return;
}


// ==== 103aa7c0 FUN_103aa7c0

void FUN_103aa7c0(UPlayer *param_1)

{
  UPlayer *in_ECX;
  
  UPlayer::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined8 *)(in_ECX + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x134),(FStringNoInit *)(param_1 + 0x134));
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined8 *)(in_ECX + 0x144) = *(undefined8 *)(param_1 + 0x144);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  in_ECX[0x15c] = param_1[0x15c];
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(in_ECX + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  thunk_FUN_1032bcd0(param_1 + 0x180);
  *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  return;
}


// ==== 103aac00 FUN_103aac00

void FUN_103aac00(byte param_1)

{
  UViewport *in_ECX;
  
  UViewport::~UViewport(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1ac);
  }
  return;
}


// ==== 103aac30 FUN_103aac30

UViewport * FUN_103aac30(byte param_1)

{
  UViewport *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x1ac,*(int *)(in_ECX + -4),UViewport::~UViewport);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UViewport::~UViewport(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1ac);
  }
  return in_ECX;
}


// ==== 103aacb0 FUN_103aacb0

void FUN_103aacb0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107ffd54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UClient::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10396fc0();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103aad30 FUN_103aad30

void FUN_103aad30(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffd84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UClient::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_1037ee40(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  pUVar2 = param_1 + 0x88;
  pUVar3 = in_ECX + 0x88;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  ExceptionList = local_c;
  return;
}


// ==== 103aaea0 FUN_103aaea0

void FUN_103aaea0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10397080(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  return;
}


// ==== 103ab020 FUN_103ab020

void FUN_103ab020(byte param_1)

{
  UClient *in_ECX;
  
  UClient::~UClient(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xb8);
  }
  return;
}


// ==== 103ab050 FUN_103ab050

UClient * FUN_103ab050(byte param_1)

{
  UClient *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xb8,*(int *)(in_ECX + -4),UClient::~UClient);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UClient::~UClient(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xb8);
  }
  return in_ECX;
}


// ==== 103ab0d0 FUN_103ab0d0

void FUN_103ab0d0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffdd4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 8));
  local_4 = 1;
  FArray::FArray((FArray *)(in_ECX + 0x14));
  local_4 = CONCAT31(local_4._1_3_,3);
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0x20));
  ExceptionList = local_c;
  return;
}


// ==== 103ab160 FUN_103ab160

void FUN_103ab160(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107ffe12;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0x20));
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10397250();
  local_4 = 0xffffffff;
  thunk_FUN_103970f0();
  ExceptionList = local_c;
  return;
}


// ==== 103ab1e0 FUN_103ab1e0

void FUN_103ab1e0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107ffe52;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  thunk_FUN_1037eef0(param_1 + 2);
  local_4 = 0;
  thunk_FUN_1037efc0(param_1 + 5);
  local_4 = CONCAT31(local_4._1_3_,1);
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)(in_ECX + 8),(TArray<unsigned_short> *)(param_1 + 8));
  in_ECX[0xb] = param_1[0xb];
  ExceptionList = local_c;
  return;
}


// ==== 103ab290 FUN_103ab290

void FUN_103ab290(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  thunk_FUN_103971b0(param_1 + 2);
  thunk_FUN_10397310(param_1 + 5);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 8),(TArray<unsigned_short> *)(param_1 + 8));
  in_ECX[0xb] = param_1[0xb];
  return;
}


// ==== 103ab2f0 FUN_103ab2f0

void FUN_103ab2f0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  longlong lVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ffe94;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FAnimMeshVertexStream::vftable;
  FArray::FArray((FArray *)(in_ECX + 4));
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[3] = 0;
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar3 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)GMakeCacheIDIndex_exref = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  *(longlong *)(in_ECX + 1) = lVar3 + 0xe1;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  FArray::Empty((FArray *)(in_ECX + 4),0x20,0);
  ExceptionList = local_c;
  return;
}


// ==== 103ab3f0 FUN_103ab3f0

void FUN_103ab3f0(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ffecb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FAnimMeshVertexStream::vftable;
  local_4 = 0;
  thunk_FUN_10397380();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ab460 FUN_103ab460

FArchive * FUN_103ab460(undefined4 param_1,int param_2)

{
  FArchive *this;
  
  this = (FArchive *)thunk_FUN_10397440(param_1,param_2 + 0x10);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x1c),4);
  return this;
}


// ==== 103ab4a0 FUN_103ab4a0

void FUN_103ab4a0(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107ffefb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FAnimMeshVertexStream::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  thunk_FUN_1037f080(param_1 + 0x10);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  ExceptionList = local_c;
  return;
}


// ==== 103ab570 FUN_103ab570

void FUN_103ab570(byte param_1)

{
  FAnimMeshVertexStream *in_ECX;
  
  FAnimMeshVertexStream::~FAnimMeshVertexStream(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103ab5a0 FUN_103ab5a0

FAnimMeshVertexStream * FUN_103ab5a0(byte param_1)

{
  FAnimMeshVertexStream *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FAnimMeshVertexStream::~FAnimMeshVertexStream);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FAnimMeshVertexStream::~FAnimMeshVertexStream(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 103ab620 FUN_103ab620

void FUN_103ab620(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107fff76;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULodMesh::vftable;
  local_4 = 7;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 6;
  thunk_FUN_10397940();
  local_4._0_1_ = 5;
  thunk_FUN_103977f0();
  local_4._0_1_ = 4;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0xc0));
  local_4._0_1_ = 3;
  thunk_FUN_103976c0();
  local_4._0_1_ = 2;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0xa8));
  local_4._0_1_ = 1;
  thunk_FUN_10326910();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10397590();
  local_4 = 0xffffffff;
  UMesh::~UMesh((UMesh *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ab710 FUN_103ab710

void FUN_103ab710(void)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080003b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX);
  *(undefined ***)in_ECX = UMesh::vftable;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  local_4 = 1;
  *(undefined ***)in_ECX = ULodMesh::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x6c));
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0x78));
  local_4._0_1_ = 5;
  FRotator::FRotator((FRotator *)(in_ECX + 0x9c));
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0xa8));
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0xb4));
  local_4._0_1_ = 8;
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0xc0));
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0xcc));
  local_4._0_1_ = 0xb;
  FArray::FArray((FArray *)(in_ECX + 0xd8));
  local_4 = CONCAT31(local_4._1_3_,0xd);
  FRotator::FRotator((FRotator *)(in_ECX + 0x118));
  ExceptionList = local_c;
  return;
}


// ==== 103ab850 FUN_103ab850

void FUN_103ab850(UMesh *param_1)

{
  UMesh *in_ECX;
  int iVar1;
  UMesh *pUVar2;
  UMesh *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108000d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMesh::UMesh(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = ULodMesh::vftable;
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  thunk_FUN_1037f250(param_1 + 0x6c);
  local_4._0_1_ = 1;
  thunk_FUN_1037bb60(param_1 + 0x78);
  local_4._0_1_ = 2;
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)(in_ECX + 0xa8),(TArray<unsigned_short> *)(param_1 + 0xa8));
  local_4._0_1_ = 3;
  thunk_FUN_1037f300(param_1 + 0xb4);
  local_4._0_1_ = 4;
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)(in_ECX + 0xc0),(TArray<unsigned_short> *)(param_1 + 0xc0));
  local_4._0_1_ = 5;
  thunk_FUN_1037f3c0(param_1 + 0xcc);
  local_4 = CONCAT31(local_4._1_3_,6);
  thunk_FUN_1037f490(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  pUVar2 = param_1 + 0x108;
  pUVar3 = in_ECX + 0x108;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  ExceptionList = local_c;
  return;
}


// ==== 103abad0 FUN_103abad0

void FUN_103abad0(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  pUVar2 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  thunk_FUN_10397650(param_1 + 0x6c);
  thunk_FUN_103932e0(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0xa8),(TArray<unsigned_short> *)(param_1 + 0xa8));
  thunk_FUN_10397780(param_1 + 0xb4);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0xc0),(TArray<unsigned_short> *)(param_1 + 0xc0));
  thunk_FUN_103978b0(param_1 + 0xcc);
  thunk_FUN_10397a00(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x104) = *(undefined4 *)(param_1 + 0x104);
  pUVar2 = param_1 + 0x108;
  pUVar3 = in_ECX + 0x108;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  return;
}


// ==== 103abd10 FUN_103abd10

void FUN_103abd10(byte param_1)

{
  ULodMesh *in_ECX;
  
  ULodMesh::~ULodMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x148);
  }
  return;
}


// ==== 103abd40 FUN_103abd40

ULodMesh * FUN_103abd40(byte param_1)

{
  ULodMesh *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x148,*(int *)(in_ECX + -4),ULodMesh::~ULodMesh);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ULodMesh::~ULodMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x148);
  }
  return in_ECX;
}


// ==== 103abdc0 FUN_103abdc0

FArchive * FUN_103abdc0(undefined4 param_1,int param_2)

{
  FArchive *this;
  
  this = (FArchive *)thunk_FUN_10397b30(param_1,param_2 + 0xc);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x18),4);
  return this;
}


// ==== 103abe00 FUN_103abe00

void FUN_103abe00(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080011b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10397a70();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103abe60 FUN_103abe60

void FUN_103abe60(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080014b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FSpringVertexStream::vftable;
  thunk_FUN_1037f550(param_1 + 0xc);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 103abf10 FUN_103abf10

undefined4 FUN_103abf10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 103abf20 FUN_103abf20

int FUN_103abf20(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) << 4;
}


// ==== 103abf30 FUN_103abf30

undefined4 FUN_103abf30(void)

{
  return 0x10;
}


// ==== 103abf40 FUN_103abf40

undefined4 FUN_103abf40(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 2;
  return 2;
}


// ==== 103abf70 FUN_103abf70

void FUN_103abf70(void *param_1)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) << 4);
  return;
}


// ==== 103abfa0 FUN_103abfa0

void FUN_103abfa0(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = param_2 * 0x10 + *(int *)(in_ECX + 0xc);
  return;
}


// ==== 103ac000 FUN_103ac000

void FUN_103ac000(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  longlong lVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10800184;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FSkinVertexStream::vftable;
  FArray::FArray((FArray *)(in_ECX + 8));
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  iVar1 = *(int *)(GMakeCacheIDIndex_exref + 4);
  uVar2 = *(uint *)GMakeCacheIDIndex_exref;
  lVar3 = __allmul(uVar2,iVar1,0x100,0);
  *(uint *)GMakeCacheIDIndex_exref = uVar2 + 1;
  *(uint *)(GMakeCacheIDIndex_exref + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
  in_ECX[0xe] = 0;
  *(longlong *)(in_ECX + 1) = lVar3 + 0xe1;
  in_ECX[5] = 1;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[0xd] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103ac100 FUN_103ac100

FArchive * FUN_103ac100(FArchive *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FArchive::IsPersistent(param_1);
  if (iVar1 == 0) {
    (**(code **)(*(int *)param_1 + 0x18))(param_2 + 0xc);
    (**(code **)(*(int *)param_1 + 0x18))(param_2 + 0x10);
  }
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x14),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x18),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x1c),4);
  thunk_FUN_10397440(param_1,param_2 + 0x20);
  return param_1;
}


// ==== 103ac190 FUN_103ac190

void FUN_103ac190(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108001bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  local_4 = 1;
  *in_ECX = FSkinVertexStream::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_1037f080(param_1 + 0x20);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  ExceptionList = local_c;
  return;
}


// ==== 103ac280 FUN_103ac280

void FUN_103ac280(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080022c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USubSkeletalMeshInstance::vftable;
  local_4 = 6;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 5;
  thunk_FUN_10398b00();
  local_4._0_1_ = 4;
  thunk_FUN_10325f90();
  local_4._0_1_ = 3;
  thunk_FUN_1038fad0();
  local_4._0_1_ = 2;
  thunk_FUN_103989b0();
  local_4._0_1_ = 1;
  thunk_FUN_103989b0();
  local_4 = (uint)local_4._1_3_ << 8;
  FSkinVertexStream::~FSkinVertexStream((FSkinVertexStream *)(in_ECX + 0x88));
  local_4 = 0xffffffff;
  ULodMeshInstance::~ULodMeshInstance((ULodMeshInstance *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ac360 FUN_103ac360

void FUN_103ac360(void)

{
  ULodMeshInstance *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108002d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULodMeshInstance::ULodMeshInstance(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = USubSkeletalMeshInstance::vftable;
  FSkinVertexStream::FSkinVertexStream((FSkinVertexStream *)(in_ECX + 0x88));
  local_4._0_1_ = 1;
  FArray::FArray((FArray *)(in_ECX + 0xc4));
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0xd0));
  local_4._0_1_ = 5;
  FCoords::FCoords((FCoords *)(in_ECX + 0xdc));
  FArray::FArray((FArray *)(in_ECX + 0x10c));
  local_4._0_1_ = 7;
  FArray::FArray((FArray *)(in_ECX + 0x118));
  local_4 = CONCAT31(local_4._1_3_,9);
  FArray::FArray((FArray *)(in_ECX + 0x124));
  *(undefined4 *)(in_ECX + 0x130) = 0;
  *(undefined4 *)(in_ECX + 0x134) = 0;
  *(undefined4 *)(in_ECX + 0x138) = 0;
  *(undefined4 *)(in_ECX + 0x13c) = 0xffffffff;
  ExceptionList = local_c;
  return;
}


// ==== 103ac490 FUN_103ac490

void FUN_103ac490(ULodMeshInstance *param_1)

{
  ULodMeshInstance *in_ECX;
  int iVar1;
  ULodMeshInstance *pUVar2;
  ULodMeshInstance *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080036c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULodMeshInstance::ULodMeshInstance(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = USubSkeletalMeshInstance::vftable;
  FSkinVertexStream::FSkinVertexStream
            ((FSkinVertexStream *)(in_ECX + 0x88),(FSkinVertexStream *)(param_1 + 0x88));
  local_4._0_1_ = 1;
  thunk_FUN_1037f940(param_1 + 0xc4);
  local_4._0_1_ = 2;
  thunk_FUN_1037f940(param_1 + 0xd0);
  local_4._0_1_ = 3;
  pUVar2 = param_1 + 0xdc;
  pUVar3 = in_ECX + 0xdc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  thunk_FUN_103794b0(param_1 + 0x10c);
  local_4._0_1_ = 4;
  thunk_FUN_1032bc20(param_1 + 0x118);
  local_4 = CONCAT31(local_4._1_3_,5);
  thunk_FUN_1037fa30(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  ExceptionList = local_c;
  return;
}


// ==== 103ac610 FUN_103ac610

void FUN_103ac610(ULodMeshInstance *param_1)

{
  ULodMeshInstance *in_ECX;
  int iVar1;
  ULodMeshInstance *pUVar2;
  ULodMeshInstance *pUVar3;
  
  ULodMeshInstance::operator=(in_ECX,param_1);
  FSkinVertexStream::operator=
            ((FSkinVertexStream *)(in_ECX + 0x88),(FSkinVertexStream *)(param_1 + 0x88));
  thunk_FUN_10398a70(param_1 + 0xc4);
  thunk_FUN_10398a70(param_1 + 0xd0);
  pUVar2 = param_1 + 0xdc;
  pUVar3 = in_ECX + 0xdc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  thunk_FUN_103795a0(param_1 + 0x10c);
  thunk_FUN_1032bcd0(param_1 + 0x118);
  thunk_FUN_10398bc0(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  return;
}


// ==== 103ac720 FUN_103ac720

void FUN_103ac720(byte param_1)

{
  USubSkeletalMeshInstance *in_ECX;
  
  USubSkeletalMeshInstance::~USubSkeletalMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x144);
  }
  return;
}


// ==== 103ac750 FUN_103ac750

USubSkeletalMeshInstance * FUN_103ac750(byte param_1)

{
  USubSkeletalMeshInstance *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x144,*(int *)(in_ECX + -4),
               USubSkeletalMeshInstance::~USubSkeletalMeshInstance);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USubSkeletalMeshInstance::~USubSkeletalMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x144);
  }
  return in_ECX;
}


// ==== 103ac7d0 FUN_103ac7d0

void FUN_103ac7d0(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080039b;
  local_c = ExceptionList;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0xc;
  }
  ExceptionList = &local_c;
  thunk_FUN_103794b0(iVar1);
  *in_ECX = FLazyLoader::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = TLazyArray<FVector>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103ac860 FUN_103ac860

void FUN_103ac860(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108003bb;
  local_c = ExceptionList;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0xc;
  }
  ExceptionList = &local_c;
  thunk_FUN_1037feb0(iVar1);
  *in_ECX = FLazyLoader::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = TLazyArray<FMeshNorm>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103ac900 FUN_103ac900

FArchive * FUN_103ac900(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  return param_1;
}


// ==== 103ac940 FUN_103ac940

void FUN_103ac940(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108003d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) < 0) {
    for (iVar1 = 0; iVar1 < *(int *)(in_ECX + 0x10); iVar1 = iVar1 + 1) {
    }
    ExceptionList = &local_10;
    FArray::Empty((FArray *)(in_ECX + 0xc),4,0);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 103ac9ac Catch@103ac9ac

void Catch_103ac9ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 103ac9c0 Catch@103ac9c0

void Catch_103ac9c0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Unload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103aca10 FUN_103aca10

FArchive * FUN_103aca10(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_108003e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,4);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_103ac900(param_1,*(int *)param_2 + iVar1 * 4);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,4,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_10371b70(4,param_2);
      thunk_FUN_103ac900(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 103acae0 Catch@103acae0

void Catch_103acae0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 103acaf4 Catch@103acaf4

void Catch_103acaf4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103acb60 FUN_103acb60

void FUN_103acb60(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108003fb;
  local_c = ExceptionList;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0xc;
  }
  ExceptionList = &local_c;
  thunk_FUN_1037f3c0(iVar1);
  *in_ECX = FLazyLoader::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = TLazyArray<FMeshWedge>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103acbf0 FUN_103acbf0

void FUN_103acbf0(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080041b;
  local_c = ExceptionList;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0xc;
  }
  ExceptionList = &local_c;
  thunk_FUN_1037f7b0(iVar1);
  *in_ECX = FLazyLoader::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = TLazyArray<VTriangle>::vftable;
  ExceptionList = local_c;
  return;
}


