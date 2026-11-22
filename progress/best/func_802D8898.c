s32 func_80205AA0(s32, s32);
s32 func_80205E0C(s32, s32);
s32 func_80205EBC(s32, s32);
s32 func_8021CEF8(s32, s32, s32, s32, s32);
s32 func_80224CA8(s32);
s32 func_802AFFF8(void *, s32);
s32 func_8030888C(void *, s32, s32, s32, s32, s32, f32, s32);
s32 func_80309B08(s32, s32, s32);
s32 func_8030A92C(f32);
extern void *D_8032AA74;
extern volatile int D_803435B8;
s32 func_802D8898(void *arg0, void *arg1, f32 arg2)
{
  char *__repair_addr;
  *((s32 *) (((char *) arg0) + 0x24)) = 2;
  *((s8 *) (((char *) arg0) + 0x7FC4)) = 0;
  *((f32 *) (((char *) arg0) + 0x18)) = arg2;
  *((void **) (((char *) arg0) + 0x14)) = (void *) D_8032AA74;
  *((s8 *) (((char *) arg0) + 0x7FC5)) = 0;
  *((s8 *) (((char *) arg0) + 0x7FC6)) = 0;
  *((void **) (((char *) arg0) + 0x14)) = arg1;
  *((f32 *) (((char *) arg0) + 0x1C)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x7FC0)) = 25.0f;
  func_8030A92C(arg2);
  func_80224CA8(0x36);
  do
  {
    func_80224CA8(0x39);
    func_80224CA8(0x30);
  }
  while (0);
  func_80224CA8(0x1A);
  func_80224CA8(0x15);
  func_80224CA8(0x3F);
  func_80224CA8(0x11);
  func_80224CA8(0x13);
  func_80224CA8(0x23);
  func_80205AA0(0, 3);
  func_80205EBC(0, *((s32 *) (((char *) arg0) + 0x24)));
  __repair_addr = (char *) (*((void **) (((char *) arg0) + 0x14)));
  *((s32 *) (((char *) __repair_addr) + 0x7168)) = 6;
  func_80205E0C(0, 6);
  func_8021CEF8(6, 3, D_803435B8, D_803435B8, 0);
  func_802AFFF8(*((void **) (((char *) arg0) + 0x14)), 0x45610000);
  *((s8 *) (((char *) (*((void **) (((char *) arg0) + 0x14)))) + 0x716C)) = 1;
  *((s8 *) (((0, (char *) (*((void **) (((char *) arg0) + 0x14))))) + 0x716D)) = 0x64;
  func_8030888C(arg0, 0, 0, 0, 0xFF, 0, -7, 0);
  func_80309B08(0, 0, 0);
  return 1;
}

