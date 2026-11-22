extern volatile unsigned char D_80348B50;
extern signed char D_80348BB7;
extern signed char D_80348BB8;
extern signed char D_80348BB9;
extern signed char D_80348BBA;
extern signed char D_80348BBB;
extern volatile int D_80348BAC;
extern short D_80348B70;
extern short D_80348B72;
extern short D_80348B74;
extern int D_80348B58;
extern unsigned short D_80348B5C;
extern int D_80348B60;
extern int D_80348B80;
extern int D_80348B78;
extern int D_80348B88;
extern int D_80348B90;
extern signed char D_80348BB6;
s32 func_80223FC4();
s32 func_802B183C();
s32 func_802CA0CC();
s32 func_802CB998();
s32 func_8030AA50();
s32 func_8030BF18();
s32 func_8030BFA0();
extern char D_8032AA94[];
extern char D_8032AAC8[];
s32 func_802CC2F4(void *arg0)
{
  s32 var_v0;
  int *__base_D_80348B58;
  short *__base_D_80348B70;
  __base_D_80348B70 = &D_80348B70;
  __base_D_80348B58 = &D_80348B58;
  func_802CB998(arg0, 1);
  if ((func_80223FC4(0, 0x1000) != 0) || (func_80223FC4(0, 0x8000) != (0 ^ 0)))
  {
    var_v0 = *(*((u8 **) (((char *) arg0) + 0x28)));
    if (var_v0 == 0)
    {
      func_8030BF18(0 & 0xFFFFFFFFFFFFFFFF);
      D_80348B50 = 0;
      D_80348BB7 = 0;
      D_80348BB8 = 0;
      D_80348BB9 = 0;
      D_80348BBA = 0;
      D_80348BBB = 0;
      D_80348BAC = 0;
      *__base_D_80348B70 = 0;
      D_80348B72 = 0;
      D_80348B74 = 0;
      *__base_D_80348B58 = 0;
      D_80348B5C = 0;
      D_80348B60 = 0;
      D_80348B80 = 0;
      D_80348B78 = 0;
      D_80348B88 = 0;
      D_80348B90 = 0;
      D_80348BB6 = 0;
      func_8030AA50(D_8032AA94);
      func_8030AA50(D_8032AAC8);
      func_8030BFA0(0);
      do
      {
        func_802CA0CC(arg0);
      }
      while (0);
      var_v0 = *(*((u8 **) (((char *) arg0) + 0x28)));
    }
    if (var_v0 == 1)
    {
      func_802CA0CC(arg0);
    }
    func_802B183C(*((s32 *) (((char *) arg0) + 8)));
  }
  else
    if (1)
  {
    if (func_80223FC4(0, 0x4000) != 0)
    {
      func_802B183C(*((s32 *) (((char *) arg0) + 8)));
      func_802CA0CC(arg0);
    }
  }
  return 1;
}

