s32 func_80228DE0();
void func_8022A0D0(void *arg0, f32 arg1, f32 arg2, f32 arg3)
{
  long long pad;
  f32 sp18[16];
  sp18[0] = *((f32 *) (((char *) arg0) + 0));
  if (1)
  {
    sp18[1] = *((f32 *) (((char *) arg0) + 4));
  }
  sp18[2] = *((f32 *) (((char *) arg0) + 8));
  sp18[3] = *((f32 *) (((char *) arg0) + 0xC));
  sp18[4] = *((f32 *) (((char *) arg0) + 0x10));
  sp18[5] = *((f32 *) (((char *) arg0) + 0x14));
  sp18[6] = *((f32 *) (((char *) arg0) + 0x18));
  sp18[7] = *((f32 *) (((char *) arg0) - (-0x1C)));
  sp18[8] = *((f32 *) (((char *) arg0) + 0x20));
  sp18[9] = *((f32 *) (((char *) arg0) + 0x24));
  sp18[10] = *((f32 *) (((char *) arg0) + 0x28));
  sp18[11] = *((f32 *) (((char *) arg0) + 0x2C));
  sp18[12] = (((arg1 * (*((f32 *) (((char *) arg0) + 0)))) + (arg2 * (*((f32 *) (((char *) arg0) + 0x10))))) + (arg3 * (*((f32 *) (((char *) arg0) + 0x20))))) + (*((f32 *) (0x30 + ((char *) arg0))));
  sp18[13] = (((arg1 * (*((f32 *) (((char *) arg0) + 4)))) + (arg2 * (*((f32 *) (((char *) arg0) + 0x14))))) + (arg3 * (*((f32 *) (((char *) arg0) + 0x24))))) + (*((f32 *) (((char *) arg0) + 0x34)));
  sp18[14] = (((arg1 * (*((f32 *) (((char *) arg0) + 8)))) + (arg2 * (*((f32 *) (((char *) arg0) + 0x18))))) + (arg3 * (*((f32 *) (((char *) arg0) + 0x28))))) + (*((f32 *) (((char *) arg0) + 0x38)));
  sp18[15] = (*((f32 *) (((char *) arg0) + 0x3C))) + ((((float) arg3) * (*((f32 *) (((char *) arg0) + 0x2C)))) + ((arg2 * (*((f32 *) (((char *) arg0) + 0x1C)))) + (arg1 * (*((f32 *) (((char *) arg0) - (-0xC)))))));
  do
  {
    func_80228DE0(arg0);
  }
  while (0);
}

