s32 func_8021F35C(s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_8021F4E4();
s32 func_8021FCD0();
s32 func_8022331C();
s32 func_8022337C();
s32 func_802233EC(s32);
s32 func_8022342C(s32);
s32 func_80223468(s32);
void func_802BA8A4(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, f32 arg11)
{
  s32 sp60;
  f32 sp64;
  f32 sp54;
  s32 sp50;
  s32 sp4C;
  s32 __repair_phase_sp4C;
  f32 sp48;
  register s32 sp44;
  s32 sp40;
  register f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv1;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 temp_a1;
  register s32 temp_a1_2;
  s32 temp_a1_3;
  register s32 temp_a1_4;
  register s32 temp_a1_5;
  s32 temp_a1_6;
  register s32 temp_a3;
  s32 temp_ft1;
  register s32 temp_ft2;
  s32 temp_t2;
  register s32 temp_t9;
  unsigned int temp_v0;
  s32 var_v0;
  if (((((unsigned) arg3) == 0x72) || (arg3 == 0x73)) || (arg3 == 0x70))
  {
    do
    {
      func_8022331C();
    }
    while (0);
    func_80223468(arg3);
    var_v0 = 0x13;
    sp64 = 1.0f / (*((f32 *) (((char *) (*arg0)) + 0x7188)));
    if (arg3 == 0x73)
    {
      var_v0 = 0x40;
    }
    sp60 = var_v0;
    func_8021F4E4();
    temp_fv0 = 9.0f * arg11;
    temp_a1 = arg2 - ((s32) (temp_fv0 * sp64));
    temp_fv1 = (f32) arg1;
    sp54 = temp_fv1;
    sp4C = temp_a1;
    sp50 = temp_ft1;
    temp_ft1 = (s32) (temp_fv1 - temp_fv0);
    func_8021F35C(temp_ft1, temp_a1, 0, 0, 0, arg7, arg8, arg9, arg10);
    temp_a3 = var_v0 << 5;
    temp_fv0_2 = 10.0f * arg11;
    sp40 = temp_a3;
    sp48 = temp_fv0_2;
    sp44 = temp_ft2;
    temp_ft2 = (s32) (temp_fv1 + temp_fv0_2);
    func_8021F35C(temp_ft2, temp_a1, 0, temp_a3, 0, arg7, arg8, arg9, arg10);
    temp_a1_2 = arg2; temp_a1_2 += (s32) (temp_fv0_2 * sp64);
    sp54 = temp_a1_2;
    func_8021F35C(temp_ft2, temp_a1_2, 0, temp_a3, temp_a3, arg7, arg8, arg9, arg10);
    func_8021F35C(temp_ft1, temp_a1_2, 0, 0, sp40, arg7, arg8, arg9, arg10);
    func_8021FCD0();
    if (arg4 != 0xFFF)
    {
      func_8022342C(0x400000);
      func_80223468(arg4);
      func_8021F4E4();
      temp_a0 = arg1 - 0x22;
      sp54 = temp_a0;
      temp_a1_3 = arg2 + ((s32) (1 * sp64));
      sp50 = temp_a1_3;
      func_8021F35C(temp_a0, temp_a1_3, 0, 0, 0, 0xFF, 0xFF, 0xFF, arg10);
      temp_a0_2 = arg1 - 9;
      sp4C = temp_a0_2;
      func_8021F35C(temp_a0_2, temp_a1_3, 0, 0x340, 0, 0xFF, 0xFF, 0xFF, arg10);
      sp50 = temp_a1_4;
      temp_a1_4 = ((s32) arg2) + ((s32) (7.0f * sp64));
      func_8021F35C(temp_a0_2, temp_a1_4, 0, 0x340, 0xC0, 0xFF, 0xFF, 0xFF, arg10);
      func_8021F35C(temp_a0, temp_a1_4, 0, 0, 0xC0, 0xFF, 0xFF, 0xFF, arg10);
      func_8021FCD0();
      func_802233EC(0x400000);
    }
    if (((unsigned) arg5) != 0xFFF)
    {
      __repair_phase_sp4C = arg1 - 9;
      func_80223468(arg5);
      func_8021F4E4();
      temp_a1_5 = ((unsigned) arg2) - 6;
      temp_a0_3 = ((u32) arg1) - 0x20;
      sp50 = temp_a1_5;
      sp54 = temp_a0_3;
      func_8021F35C(temp_a0_3, temp_a1_5, 0, 0, 0, arg7, arg8, arg9, arg10);
      func_8021F35C(__repair_phase_sp4C, temp_a1_5, 0, 0x2E0, 0, arg7, arg8, arg9, arg10);
      sp48 = temp_a1_6;
      temp_a1_6 = arg2 - 1;
      func_8021F35C(__repair_phase_sp4C, temp_a1_6, 0, 0x2E0, 0xA0, arg7, arg8, arg9, arg10);
      func_8021F35C(temp_a0_3, temp_a1_6, 0, 0, 0xA0, arg7, arg8, arg9, arg10);
      func_8021FCD0();
      func_8021F4E4();
      temp_v0 = 0x15 - ((s32) arg6);
      temp_t9 = (((u32) temp_v0) + 0x17) << 5;
      sp40 = temp_t9;
      func_8021F35C(temp_a0_3, temp_a1_5, 0, temp_t9, 0, arg7, arg8, arg9, arg10);
      sp44 = temp_v0;
      temp_t2 = (temp_v0 + 0x2E) << 5;
      func_8021F35C(__repair_phase_sp4C, temp_a1_5, 0, temp_t2, 0, arg7, arg8, arg9, arg10);
      func_8021F35C(__repair_phase_sp4C, temp_a1_6, 0, temp_t2, 0xA0, arg7, arg8, arg9, arg10);
      func_8021F35C(temp_a0_3, temp_a1_6, 0, sp40, 0xA0, arg7, arg8, arg9, arg10);
      func_8021FCD0();
    }
    func_8022337C();
  }
}

