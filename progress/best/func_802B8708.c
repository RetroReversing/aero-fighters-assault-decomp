s32 func_8021F6F8();
s32 func_80221F44();
s32 func_8022331C();
s32 func_8022337C();
s32 func_802233EC();
s32 func_80223468();
extern u8 D_8032AA80;
void func_802B8708(void *arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 arg10, f32 arg11, s32 arg12, s32 arg13, u8 arg14)
{
  int sp54;
  s32 sp48[3];
  unsigned long sp44;
  s32 sp40;
  f32 sp3C;
  f32 sp34;
  s32 sp30;
  f32 sp2C;
  f32 temp_fv0;
  f32 var_fv0;
  long temp_a3;
  register s32 temp_t2;
  int temp_t9;
  s32 var_a0;
  int var_a0_2;
  unsigned var_a1;
  s32 var_v0;
  s32 var_v0_2;
  temp_fv0 = 1.0f - arg1;
  sp3C = temp_fv0;
  sp34 = temp_fv0;
  func_8022331C();
  func_802233EC(0x04C00000);
  func_80223468(0x94);
  if (arg14 == 3)
  {
    if (D_8032AA80 == 0xC)
    {
      var_v0 = 1;
    }
    else
    {
      var_v0 = 0;
    }
    if (var_v0 != 0)
    {
      do
      {
        do
        {
          var_v0 = arg2 / 2;
        }
        while (0);
      }
      while (0);
      var_a0 = var_v0;
      sp48[1] = var_v0; sp48[1] += arg4 / 2;
      if ((*((s32 *) (((char *) arg0) + 0xC))) == 0)
      {
        s32 __repair_branch_temp_t2_0;
        __repair_branch_temp_t2_0 = arg3 / 2;
        sp48[2] = __repair_branch_temp_t2_0 + 0x70;
        sp48[0] = (__repair_branch_temp_t2_0 + (((s32) (((f32) arg5) * arg1)) / 2)) + 0x70;
      }
      else
      {
        temp_t9 = arg3 / 2;
        sp48[0] = (temp_t9 + (((s32) (((f32) arg5) * arg1)) / 2)) + 8;
        sp48[2] = temp_t9 + 8;
      }
    }
    else
    {
      var_a0 = arg2;
      sp48[2] = arg3;
      sp48[1] = arg2 + arg4;
      sp48[0] = arg3 + ((s32) (((f32) arg5) * arg1));
    }
    sp54 = var_a0;
    func_80221F44(arg6, arg7, var_a0);
    func_8021F6F8(var_a0, sp48[1], sp48[2], sp48[0], 0, 1.0f, 0.0f, 1.0f);
    if ((sp34 + 1) > (0.0f + 1))
    {
      if (D_8032AA80 == 0xC)
      {
        var_v0_2 = 1;
      }
      else
      {
        var_v0_2 = 0;
      }
      if (var_v0_2 != 0)
      {
        if ((*((s32 *) (((char *) arg0) + 0xC))) == 0)
        {
          sp48[0] = sp48[2] + (arg5 / 2);
          sp44 = sp48[0];
        }
        else
        {
          sp48[0] = sp48[2] + (arg5 / 2);
          sp44 = sp48[0];
        }
      }
      else
      {
        sp44 = sp48[0];
        sp48[0] = sp48[2] + ((unsigned) arg5);
      }
      sp54 = var_a0;
      func_8021F6F8(var_a0, sp48[1], sp44, sp48[0], 0, 1.0f, 0.0f, 1.0f);
      func_80221F44(arg10, arg11, var_a0, arg12, arg13);
    }
  }
  else
  {
    if (arg14 == 1)
    {
      var_a0_2 = arg2;
      var_fv0 = (f32) arg4;
      sp48[1] = arg2 + ((s32) (var_fv0 * arg1));
    }
    else
    {
      var_fv0 = (f32) arg4;
      sp48[1] = arg2 + arg4;
      var_a0_2 = arg2 + ((s32) (var_fv0 * sp3C));
    }
    sp30 = arg14;
    sp54 = var_a0_2;
    sp2C = var_fv0;
    do
    {
      func_80221F44(arg6, arg7, var_a0_2, arg4, arg8, arg9);
    }
    while (0);
    ;
    sp34 = temp_a3;
    func_8021F6F8(0x3F800000, var_a0_2, sp48[1], arg3, arg3 + arg5, 0.0f, 1.0f, 0.0f, 1.0f);
    if ((arg1 - 1) < (1.0f - 1))
    {
      if (((u32) arg14) == 1)
      {
        sp48[1] = arg2 + ((s32) (var_fv0 * arg1));
        var_a1 = arg2 + ((s32) (var_fv0 * 1.0f));
      }
      else
      {
        sp48[1] = arg2;
        var_a1 = arg2 + ((s32) (var_fv0 * sp3C));
      }
      sp40 = var_a1;
      func_80221F44(arg10, arg11, var_a1, arg12, arg13);
      func_8021F6F8(sp48[1], var_a1, arg3, sp34, 0, 1.0f, 0.f, 1.0);
    }
  }
  func_8022337C();
}

