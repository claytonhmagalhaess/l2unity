// SparkTutorial__Fecha__1804ed780 @ 0x1804ed780

void SparkTutorial__Fecha__1804ed780(void)

{
  longlong *plVar1;
  
  if (cRam00000001834b352f == '\0') {
    FUN_180315380(TI_SparkTutorialWindow);
    cRam00000001834b352f = '\x01';
  }
  plVar1 = (longlong *)**(longlong **)(TI_SparkTutorialWindow + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    if ((char)plVar1[0x11] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001806ebfc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
      return;
    }
    return;
  }
  return;
}

