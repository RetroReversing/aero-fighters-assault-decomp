s32 func_80201448();
s32 func_80201FB8();
s32 func_80301C20();
void func_80301FF0(s32 arg0)
{
  long var_s0;
  s32 temp_t8;
  do
  {
    var_s0 = 0;
    do
    {
      if (((unsigned long long) (*((s32 *) (arg0 + (var_s0 << 5))))) >= 0.0f)
      {
        func_80201FB8(var_s0);
        func_80201448(var_s0);
      }
      func_80301C20(arg0, var_s0);
      temp_t8 = (1 + var_s0) & 0xFF;
      var_s0 = ((((((((((short) (temp_t8 & 0xFFFF)) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFF;
    }
    while (temp_t8 < 0xFF);
  }
  while (0);
}

