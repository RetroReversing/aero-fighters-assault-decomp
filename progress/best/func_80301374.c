s32 func_80205AA0();
s32 func_80205E0C();
s32 func_80205EBC();
s32 func_80224CA8(f32);
s32 func_802AEDD4();
s32 func_802AFFF8();
s32 func_8030888C(void *, s32, s32, s32, s32, s32, f32, s32);
s32 func_80309B08();
s32 func_8030A92C();
s32 func_80301374(void *arg0, void *arg1, f32 arg2)
{
  char *__repair_addr;
  *((void **) (((char *) arg0) + 0x14)) = arg1;
  *((s32 *) (((char *) arg0) + 0x24)) = 7;
  *((s8 *) (((char *) arg0) + 0x70)) = 0;
  *((s8 *) (((char *) arg0) + 0x71)) = 0;
  *((s8 *) (((char *) arg0) + 0x72)) = 0;
  *((f32 *) (((char *) arg0) + 0x18)) = arg2;
  *((s16 *) (((char *) arg0) + 0x78)) = 0;
  *((f32 *) (((char *) arg0) + 0x74)) = 0.0f;
  func_80224CA8(arg2);
  func_80224CA8((unsigned int) 6.4e-44f);
  func_80224CA8(3.5e-44f);
  func_80224CA8(5.2e-44f);
  func_8030A92C();
  func_80224CA8(3e-44f);
  func_80224CA8(2.4e-44f);
  func_80224CA8(2.7e-44f);
  func_80224CA8(4.9e-44f);
  func_80224CA8(8.8e-44f);
  func_80205AA0(0, 3);
  func_80205EBC(0, *((s32 *) (((char *) arg0) + 0x24)));
  *((s32 *) (((char *) arg1) + 0x7168)) = 4;
  func_80205E0C(0, 4);
  *((s32 *) (((char *) arg0) + 0x4170)) = func_802AEDD4(arg1, 1);
  do
  {
    func_802AFFF8(*((void **) (((char *) arg0) + 0x14)), 0x44160000);
  }
  while (0);
  __repair_addr = (char *) (*((void **) (((char *) arg0) + 0x14)));
  *((s8 *) (((char *) __repair_addr) + 0x716C)) = 1;
  *((s8 *) (((char *) (*((void **) (((char *) arg0) + 0x14)))) + 0x716D)) = 0x32;
  func_8030888C(arg0, 0, 0, 0, 0xFF, 0, -7.0f, 0);
  *((f32 *) (((char *) (*((void **) (((char *) arg0) + 0x14)))) + 0x7160)) = 8.0f;
  func_80309B08(0, 0, 0);
  return 1;
}

