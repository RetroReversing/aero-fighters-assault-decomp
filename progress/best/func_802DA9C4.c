short func_802DA16C(void *);
volatile short func_802DA9C4(u8 *arg0)
{
  void *temp_a0;
  s32 temp_t8;
  s32 var_s1;
  if (((s32) (*arg0)) > 0)
  {
    var_s1 = 0;
    do
    {
      do
      {
        func_802DA16C((void *) (((var_s1 * 0x90) + 0x14) + (((s32) arg0) & 0xFFFFFFFFu)));
      }
      while ((long long) 0);
      *((s8 *) (((char *) ((void *) (((var_s1 * 0x90) + 0x14) + ((s32) arg0)))) + 0x24)) = 0;
      if (1)
      {
      }
      temp_t8 = (var_s1 + 1) & 0xFF;
      var_s1 = temp_t8;
    }
    while (temp_t8 < (((s32) (*arg0)) & 0xFFFF));
  }
}

