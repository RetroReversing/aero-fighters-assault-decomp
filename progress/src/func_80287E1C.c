void func_80287E1C(void *arg0, f32 arg1, f32 arg2, f32 arg3)
{
  *((f32 *) (((char *) arg0) + 0xB0)) = (f32) (arg1 * 2);
  *((f32 *) (((char *) arg0) + 0xB4)) = (f32) (arg2 * 2);
  *((f32 *) (((char *) arg0) + 0xB8)) = (f32) (arg3 * 2);
}

