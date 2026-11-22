f32 func_8023499C();
void func_80287D7C(void *arg0, f32 arg1)
{
  *((s8 *) (((char *) arg0) + 8)) = 1;
  *((f32 *) (((char *) arg0) + 0x14)) = (f32) (func_8023499C() * (arg1 * 2));
}

