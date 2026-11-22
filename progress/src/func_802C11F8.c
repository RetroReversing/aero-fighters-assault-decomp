void func_802C11F8(void *arg0, f32 arg1, f32 arg2, f32 arg3)
{
  *((f32 *) (((char *) arg0) + 0x44)) = (f32) (2 * arg1);
  *((f32 *) (((char *) arg0) + 0x48)) = (f32) (2 * arg2);
  *((f32 *) (((char *) arg0) + 0x4C)) = (f32) (2 * arg3);
  *((f32 *) (((char *) arg0) + 0x6C)) = (f32) (arg3 * 100.0f);
}

