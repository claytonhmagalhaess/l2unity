// L2GameUI__OnGUI__180775bf0 @ 0x180775bf0

void L2GameUI__OnGUI__180775bf0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)(param_1 + 0x78);
  FUN_182410b30(cVar1 != '\0',0);
  uVar2 = 2;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  if (pcRam00000001834c0c50 == (code *)0x0) {
    pcRam00000001834c0c50 = (code *)FUN_180315630(&UNK_18293ec70,0,param_3,param_4,unaff_RBX);
  }
                    /* WARNING: Could not recover jumptable at 0x000182410b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000001834c0c50)(uVar2);
  return;
}

