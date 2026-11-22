s32 func_8028CB5C();
s32 func_8028CDB4(void *, f32);
s32 func_8028D9C8(void *arg0, f32 arg1, f32 arg2)
{
  func_8028CDB4(arg0, arg1);
  func_8028CB5C(arg0);
  *((f32 *) (((char *) arg0) - (-0xC))) = (f32) (((0, arg2)) + (*((f32 *) (((char *) arg0) + 0xC))));
  return 1;
}

