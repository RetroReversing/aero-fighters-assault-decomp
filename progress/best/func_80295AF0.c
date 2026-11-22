f32 func_8023499C();
s32 func_80295AF0(s32 arg0)
{
  int *__repair_home0 = &arg0;
  volatile int var_v1;
  var_v1 = 2;
  if (func_8023499C() >= 0.5f)
  {
    var_v1 = 1;
  }
  return var_v1 & 0xFF;
}

