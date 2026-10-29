// SparkChatFiltro__.cctor__1805d3f90 @ 0x1805d3f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkChatFiltro___cctor__1805d3f90(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3b3b == '\0') {
    FUN_180315380(TI_char__);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>..ctor);
    FUN_180315380(TI_System.Collections.Generic.HashSet<int>);
    FUN_180315380(TI_int__);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(TI_string__);
    FUN_180315380(FI_49);
    FUN_180315380(FI_122);
    FUN_180315380(LIT_"'Ally'");
    FUN_180315380(LIT_"'XP / SP'");
    FUN_180315380(LIT_"'General'");
    FUN_180315380(LIT_"'GM / Petition'");
    FUN_180315380(LIT_"'Damage'");
    FUN_180315380(LIT_"'Items used'");
    FUN_180315380(LIT_"'Trade'");
    FUN_180315380(LIT_"'Trade +'");
    FUN_180315380(LIT_"'@Clan'");
    FUN_180315380(LIT_"'Clan @'");
    FUN_180315380(LIT_"'Party / loot'");
    FUN_180315380(LIT_"'Command channel'");
    FUN_180315380(LIT_"'System'");
    FUN_180315380(LIT_"'Hero'");
    FUN_180315380(LIT_"'Hero %'");
    FUN_180315380(LIT_"'%Hero'");
    FUN_180315380(LIT_"'#Party'");
    FUN_180315380(LIT_"'Announcement'");
    FUN_180315380(LIT_"'+Trade'");
    FUN_180315380(LIT_"'Whisper \"'");
    FUN_180315380(LIT_"'Drops / obtained'");
    FUN_180315380(LIT_"'Clan'");
    FUN_180315380(LIT_"'Party #'");
    FUN_180315380(LIT_"'Drops'");
    FUN_180315380(LIT_"'All (normal)'");
    FUN_180315380(LIT_"'Shout !'");
    FUN_180315380(LIT_"'Party'");
    FUN_180315380(LIT_"'Alliance $'");
    FUN_180315380(LIT_"'$Ally'");
    cRam00000001834b3b3b = '\x01';
  }
  lVar2 = func_0x000180314710(TI_string__,0x11);
  if (lVar2 == 0) goto code_r0x0001805d4e19;
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = LIT_"'All (normal)'";
    func_0x000180314690(lVar2 + 0x20);
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = LIT_"'Shout !'";
      func_0x000180314690(lVar2 + 0x28);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = LIT_"'Trade +'";
        func_0x000180314690(lVar2 + 0x30);
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = LIT_"'Party #'";
          func_0x000180314690(lVar2 + 0x38);
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = LIT_"'Clan @'";
            func_0x000180314690(lVar2 + 0x40);
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = LIT_"'Alliance $'";
              func_0x000180314690(lVar2 + 0x48);
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = LIT_"'Hero %'";
                func_0x000180314690(lVar2 + 0x50);
                if (7 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x58) = LIT_"'Whisper \"'";
                  func_0x000180314690(lVar2 + 0x58);
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) = LIT_"'Command channel'";
                    func_0x000180314690(lVar2 + 0x60);
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = LIT_"'Announcement'";
                      func_0x000180314690(lVar2 + 0x68);
                      if (10 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x70) = LIT_"'GM / Petition'";
                        func_0x000180314690(lVar2 + 0x70);
                        if (0xb < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x78) = LIT_"'Damage'";
                          func_0x000180314690(lVar2 + 0x78);
                          if (0xc < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x80) = LIT_"'System'";
                            func_0x000180314690(lVar2 + 0x80);
                            if (0xd < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x88) = LIT_"'Drops / obtained'";
                              func_0x000180314690(lVar2 + 0x88);
                              if (0xe < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x90) = LIT_"'Items used'";
                                func_0x000180314690(lVar2 + 0x90);
                                if (0xf < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x98) = LIT_"'XP / SP'";
                                  func_0x000180314690(lVar2 + 0x98);
                                  if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0xa0) = LIT_"'Party / loot'";
                                    func_0x000180314690(lVar2 + 0xa0);
                                    **(longlong **)(TI_SparkChatFiltro + 0xb8) = lVar2;
                                    func_0x000180314690(*(undefined8 *)(TI_SparkChatFiltro + 0xb8)
                                                        ,lVar2);
                                    lVar2 = func_0x000180314710(TI_string__,7);
                                    if (lVar2 == 0) goto code_r0x0001805d4e19;
                                    if (*(int *)(lVar2 + 0x18) != 0) {
                                      *(undefined8 *)(lVar2 + 0x20) = LIT_"'General'";
                                      func_0x000180314690(lVar2 + 0x20);
                                      if (1 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0x28) = LIT_"'Trade'";
                                        func_0x000180314690(lVar2 + 0x28);
                                        if (2 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0x30) = LIT_"'Party'";
                                          func_0x000180314690(lVar2 + 0x30);
                                          if (3 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0x38) = LIT_"'Clan'";
                                            func_0x000180314690(lVar2 + 0x38);
                                            if (4 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 0x40) = LIT_"'Ally'";
                                              func_0x000180314690(lVar2 + 0x40);
                                              if (5 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0x48) = LIT_"'Hero'"
                                                ;
                                                func_0x000180314690(lVar2 + 0x48);
                                                if (6 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0x50) =
                                                       LIT_"'Drops'";
                                                  func_0x000180314690(lVar2 + 0x50);
                                                  *(longlong *)
                                                   (*(longlong *)(TI_SparkChatFiltro + 0xb8) + 8)
                                                       = lVar2;
                                                  func_0x000180314690(*(longlong *)
                                                                       (TI_SparkChatFiltro + 0xb8)
                                                                      + 8,lVar2);
                                                  lVar2 = func_0x000180314710(TI_string__,7);
                                                  if (lVar2 == 0) {
code_r0x0001805d4e19:
                                                    FUN_1803155d0();
                                                    pcVar1 = (code *)swi(3);
                                                    (*pcVar1)();
                                                    return;
                                                  }
                                                  if (*(int *)(lVar2 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x20) =
                                                         LIT_"'General'";
                                                    func_0x000180314690(lVar2 + 0x20);
                                                    if (1 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x28) =
                                                           LIT_"'+Trade'";
                                                      func_0x000180314690(lVar2 + 0x28);
                                                      if (2 < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x30) =
                                                             LIT_"'#Party'";
                                                        func_0x000180314690(lVar2 + 0x30);
                                                        if (3 < *(uint *)(lVar2 + 0x18)) {
                                                          *(undefined8 *)(lVar2 + 0x38) =
                                                               LIT_"'@Clan'";
                                                          func_0x000180314690(lVar2 + 0x38);
                                                          if (4 < *(uint *)(lVar2 + 0x18)) {
                                                            *(undefined8 *)(lVar2 + 0x40) =
                                                                 LIT_"'$Ally'";
                                                            func_0x000180314690(lVar2 + 0x40);
                                                            if (5 < *(uint *)(lVar2 + 0x18)) {
                                                              *(undefined8 *)(lVar2 + 0x48) =
                                                                   LIT_"'%Hero'";
                                                              func_0x000180314690(lVar2 + 0x48);
                                                              if (6 < *(uint *)(lVar2 + 0x18)) {
                                                                *(undefined8 *)(lVar2 + 0x50) =
                                                                     LIT_"'Drops'";
                                                                func_0x000180314690(lVar2 + 0x50);
                                                                *(longlong *)
                                                                 (*(longlong *)
                                                                   (TI_SparkChatFiltro + 0xb8) +
                                                                 0x10) = lVar2;
                                                                func_0x000180314690(*(longlong *)
                                                                                     (
                                                  TI_SparkChatFiltro + 0xb8) + 0x10,lVar2);
                                                  uVar3 = func_0x000180314710(TI_char__,7);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,FI_122,0);
                                                  *(undefined8 *)
                                                   (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                   0x18) = uVar3;
                                                  func_0x000180314690(*(longlong *)
                                                                       (TI_SparkChatFiltro + 0xb8)
                                                                      + 0x18,uVar3);
                                                  uVar3 = func_0x000180314710(TI_int__,5);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,FI_49,0);
                                                  *(undefined8 *)
                                                   (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                   0x20) = uVar3;
                                                  func_0x000180314690(*(longlong *)
                                                                       (TI_SparkChatFiltro + 0xb8)
                                                                      + 0x20,uVar3);
                                                  lVar2 = func_0x000180315580(TI_System.Collections.Generic.HashSet<int>);
                                                  FUN_1814e1d50(lVar2,MR_System.Collections.Generic.HashSet<int>..ctor);
                                                  if (lVar2 != 0) {
                                                    func_0x0001814cea30(lVar2,0x23,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x24,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x2a,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x2b,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x2c,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x6f,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x8b,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x9d,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x9f,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x128,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x129,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x3f7,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x3f8,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x3f9,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x402,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x403,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x404,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x500,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x501,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x7cc,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    *(longlong *)
                                                     (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                     0x28) = lVar2;
                                                    func_0x000180314690(*(longlong *)
                                                                         (TI_SparkChatFiltro +
                                                                         0xb8) + 0x28,lVar2);
                                                    lVar2 = func_0x000180315580(TI_System.Collections.Generic.HashSet<int>
                                                                               );
                                                    FUN_1814e1d50(lVar2,MR_System.Collections.Generic.HashSet<int>..ctor);
                                                    if (lVar2 != 0) {
                                                      func_0x0001814cea30(lVar2,0x5f,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x60,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x16a,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x21a,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x21b,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x3f6,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      *(longlong *)
                                                       (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                       0x30) = lVar2;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SparkChatFiltro +
                                                                           0xb8) + 0x30,lVar2);
                                                      lVar2 = func_0x000180315580(
                                                  TI_System.Collections.Generic.HashSet<int>);
                                                  FUN_1814e1d50(lVar2,MR_System.Collections.Generic.HashSet<int>..ctor);
                                                  if (lVar2 != 0) {
                                                    func_0x0001814cea30(lVar2,0x1c,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x1d,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x1e,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x34,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x35,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x36,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x37,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,299,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,300,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x171,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x173,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x5fd,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x5fe,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    *(longlong *)
                                                     (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                     0x38) = lVar2;
                                                    func_0x000180314690(*(longlong *)
                                                                         (TI_SparkChatFiltro +
                                                                         0xb8) + 0x38,lVar2);
                                                    lVar2 = func_0x000180315580(TI_System.Collections.Generic.HashSet<int>
                                                                               );
                                                    FUN_1814e1d50(lVar2,MR_System.Collections.Generic.HashSet<int>..ctor);
                                                    if (lVar2 != 0) {
                                                      func_0x0001814cea30(lVar2,0x2e,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x31,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x12a,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x12d,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x12e,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x156,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x170,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x1a1,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x215,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x2a0,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x3a8,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x59a,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x59b,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      func_0x0001814cea30(lVar2,0x628,
                                                                          MR_System.Collections.Generic.HashSet<int>.Add);
                                                      *(longlong *)
                                                       (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                       0x40) = lVar2;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SparkChatFiltro +
                                                                           0xb8) + 0x40,lVar2);
                                                      lVar2 = func_0x000180315580(
                                                  TI_System.Collections.Generic.HashSet<int>);
                                                  FUN_1814e1d50(lVar2,MR_System.Collections.Generic.HashSet<int>..ctor);
                                                  if (lVar2 != 0) {
                                                    func_0x0001814cea30(lVar2,0x42,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x69,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x6a,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x6b,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x6c,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,200,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0xcb,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x407,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x408,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x409,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x40a,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x40b,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x568,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    func_0x0001814cea30(lVar2,0x64b,
                                                                        MR_System.Collections.Generic.HashSet<int>.Add);
                                                    *(longlong *)
                                                     (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                     0x48) = lVar2;
                                                    func_0x000180314690(*(longlong *)
                                                                         (TI_SparkChatFiltro +
                                                                         0xb8) + 0x48,lVar2);
                                                    uVar3 = func_0x000180314710(TI_int__,7);
                                                    *(undefined8 *)
                                                     (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                     0x60) = uVar3;
                                                    func_0x000180314690(*(longlong *)
                                                                         (TI_SparkChatFiltro +
                                                                         0xb8) + 0x60,uVar3);
                                                    uVar3 = func_0x000180314710(TI_int__,5);
                                                    *(undefined8 *)
                                                     (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                     0x68) = uVar3;
                                                    func_0x000180314690(*(longlong *)
                                                                         (TI_SparkChatFiltro +
                                                                         0xb8) + 0x68,uVar3);
                                                    *(undefined1 *)
                                                     (*(longlong *)(TI_SparkChatFiltro + 0xb8) +
                                                     0x70) = 1;
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto code_r0x0001805d4e19;
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
  }
  FUN_1803155c0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

