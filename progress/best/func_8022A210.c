s32 func_80228DE0(f32, f32, f32 *);
void func_8022A210(void *arg0, f32 arg1, f32 arg2, f32 arg3)
{
  long long pad;
  f32 sp18[16];
  sp18[0] = (*((f32 *) (((char *) arg0) + 0))) * arg1;
  sp18[1] = (*((f32 *) (((char *) arg0) + 4))) * arg1;
  sp18[2] = (*((f32 *) (((char *) arg0) + 8))) * arg1;
  sp18[3] = (*((f32 *) (((char *) arg0) + 0xC))) * arg1;
  sp18[4] = (*((f32 *) (((char *) arg0) + 0x10))) * arg2;
  sp18[5] = (*((f32 *) (((char *) arg0) + 0x14))) * arg2;
  sp18[6] = (*((f32 *) (((char *) arg0) + 0x18))) * arg2;
  sp18[7] = (*((f32 *) (((char *) arg0) + 0x1C))) * arg2;
  sp18[8] = (*((f32 *) (((char *) arg0) + 0x20))) * arg3;
  sp18[9] = (*((f32 *) (((char *) arg0) + 0x24))) * arg3;
  sp18[10] = (*((f32 *) (((char *) arg0) + 0x28))) * arg3;
  sp18[11] = (*((f32 *) (((char *) arg0) + 0x2C))) * arg3;
  sp18[12] = *((f32 *) (((char *) arg0) + 0x30));
  sp18[13] = *((f32 *) (((char *) arg0) + 0x34));
  sp18[14] = *((f32 *) (((char *) arg0) + 0x38));
  sp18[15] = *((f32 *) (((char *) arg0) + 0x3C));
  func_80228DE0(arg1, arg2, sp18);
}

