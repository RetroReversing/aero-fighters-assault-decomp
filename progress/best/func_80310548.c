s32 func_80205AA0();
s32 func_80205E0C();
s32 func_80205EBC();
s32 func_80224CA8(f32);
s32 func_802AFFF8();
s32 func_8030888C(void *, s32, s32, s32, s32, s32, f32, s32);
s32 func_80309B08();
s32 func_8030A92C();
extern s8 D_8032ABF4;
extern s8 D_8032ABF8;
extern s8 D_8032ABFC;
s32 func_80310548(void *arg0, void *arg1, f32 arg2)
{
  char *__repair_addr;
  *((void **) (((char *) arg0) + 0x14)) = arg1;
  *((s32 *) (((char *) arg0) + 0x24)) = 0;
  *((s8 *) (((char *) arg0) + 0x4A30)) = 0;
  *((f32 *) (((char *) arg0) + 0x1C)) = 0.0f;
  *((s8 *) (((char *) arg0) + 0x4A31)) = 0;
  *((f32 *) (((char *) arg0) + 0x4A2C)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x18)) = arg2;
  func_80224CA8(arg2);
  func_80224CA8(6.3e-440f);
  func_80224CA8(1e-45f);
  func_8030A92C();
  func_80224CA8(3.1e-44f);
  func_80224CA8(3e-44f);
  func_80224CA8(2.7e-44f);
  func_80224CA8(2.4e-44f);
  func_80224CA8(8.8e-44f);
  func_80224CA8(4.9e-44f);
  func_80205AA0(0, 3);
  func_80205EBC(0, *((s32 *) (((char *) arg0) + 0x24)));
  func_80205E0C(0, 3);
  __repair_addr = (char *) (*((void **) (((char *) arg0) + 0x14)));
  *((s32 *) (((char *) __repair_addr) + 0x7168)) = 3;
  func_80205E0C(0, 3);
  func_802AFFF8(*((void **) (((char *) arg0) + 0x14)), 0x44610000);
  *((s8 *) (((0, (char *) (*((void **) (((char *) arg0) + 0x14))))) + 0x716C)) = 1;
  *((s8 *) (((char *) (*((void **) (((char *) arg0) + 0x14)))) + 0x716D)) = 0x46;
  D_8032ABF4 = 0;
  D_8032ABF8 = 0;
  D_8032ABFC = 0;
  func_8030888C(arg0, 0, 0, 0, 0xFF, 0, -7.0f, 0);
  *((f32 *) (((char *) ((0, *((void **) (((char *) arg0) + 0x14))))) + 0x7160)) = 8.0f;
  func_80309B08(0, 0, 0);
  return 1;
}

