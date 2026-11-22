f32 func_8023499C();
extern unsigned char D_80349440;
void func_8031F694(void *arg0, f32 arg1)
{
  u16 var_s0;
  void *temp_s1;
  var_s0 = 0;
  *((s16 *) (((char *) arg0) + 0xE8)) = (s16) ((s32) (arg1 * 255.0f));
  do
  {
    *((f32 *) (((char *) (temp_s1 = (&D_80349440) + (var_s0 * 0xC))) + 0)) = (f32) ((func_8023499C() - 0.5f) * 2.0f);
    do
    {
      if (1)
      {
        *((f32 *) (((char *) temp_s1) + 4)) = (f32) ((func_8023499C() - 0.5f) * (2.0f * 1.0f));
        var_s0 += 1;
      }
    }
    while (var_s0 * 0);
    *((f32 *) (((char *) temp_s1) + 8)) = (f32) ((func_8023499C() - 0.5f) * 2);
  }
  while (var_s0 < 0x14);
}

