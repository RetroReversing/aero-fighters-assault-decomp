void func_802B44D0(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 arg4, f32 arg5, f32 arg6)
{
  volatile short pad;
  f32 temp_ft5;
  do
  {
    *arg2 = (((arg6 * (*((f32 *) (((char *) arg0) + 0x24)))) + ((arg4 * (*((f32 *) (((char *) arg0) + 4)))) + (((0, arg5)) * (*((f32 *) (((char *) arg0) + 0x14)))))) + (*((f32 *) (((char *) arg0) + 0x34)))) / temp_ft5;
    *arg1 = ((((arg4 * (*((f32 *) (((char *) arg0) + 0)))) + (arg5 * (*((f32 *) (((char *) arg0) + 0x10))))) + (arg6 * (*((f32 *) (((char *) arg0) + 0x20))))) + (*((f32 *) (((char *) arg0) + 0x30)))) / ((s32) (temp_ft5 = (((arg4 * (*((f32 *) (((char *) arg0) + 0xC)))) + (arg5 * (*((f32 *) (((char *) arg0) + 0x1C))))) + (arg6 * (*((f32 *) (((char *) arg0) + 0x2C))))) + (*((f32 *) (((char *) arg0) + 0x3C)))));
    *arg3 = ((((arg4 * (*((f32 *) (((char *) arg0) + 8)))) + (arg5 * (*((f32 *) (((char *) arg0) + 0x18))))) + (arg6 * (*((f32 *) (((char *) arg0) + 0x28))))) + (*((f32 *) (((char *) arg0) + 0x38)))) / ((s32) temp_ft5);
  }
  while (0 & 0xFFFFFFFFFFFFFFFF);
}

