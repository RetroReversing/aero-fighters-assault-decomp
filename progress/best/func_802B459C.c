s32 func_8021F35C(s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_8021F4E4(void);
s32 func_8021FCD0(s32 arg0);
f32 func_8022AA40(f32);
f32 func_8022AE1C(f32, f32);
f32 func_803003A4(f32);
extern f64 D_80341660;
extern f32 D_80341668;
extern f32 D_8034166C;
void func_802B459C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7)
{
  register s32 var_s7;
  s32 sp6C;
  f32 temp_fv1_2;
  register f32 temp_fs0;
  f32 sp5C;
  register f32 sp60;
  unsigned temp_s1;
  f32 temp_fa0;
  register f32 temp_ft4;
  f32 temp_fv0;
  register f32 temp_fv0_2;
  register f32 temp_fv1;
  s32 sp74;
  f32 temp_fa0_2;
  s32 temp_ft1;
  s32 temp_ft1_2;
  register s32 temp_ft5;
  int temp_s0;
  s32 temp_ft0;
  u32 var_s1;
  register f32 sp78;
  temp_ft1 = arg3 - arg1;
  var_s1 = arg1;
  temp_ft0 = arg0;
  sp74 = arg3;
  var_s7 = arg2;
  if (temp_ft1 < 0)
  {
    temp_ft1 = arg0 ^ arg2;
    temp_s1 = arg1 ^ arg3;
    sp74 = arg3 ^ temp_s1;
    var_s7 = arg2 ^ temp_ft1;
    var_s1 = temp_s1 ^ sp74;
    temp_ft0 = (temp_ft1 ^ var_s7) & 0xFFFFFFFFFFFFFFFF;
    temp_ft1 = sp74 - var_s1;
  }
  temp_fv1 = (f32) (var_s7 - ((s32) temp_ft0));
  temp_ft4 = (f32) temp_ft1;
  temp_fs0 = (temp_fv1 * temp_fv1) + (temp_ft4 * temp_ft4);
  if (!(((f64) temp_fs0) < D_80341660))
  {
    sp60 = temp_fv1;
    sp5C = temp_ft4;
    temp_fv0 = func_8022AA40(temp_fs0);
    temp_fa0 = func_8022AE1C(temp_ft4 / temp_fv0, temp_fv1 / temp_fv0) - D_80341668;
    sp78 = func_803003A4(temp_fa0);
    temp_fv0_2 = func_803003A4(temp_fa0 + D_8034166C);
    temp_fv1_2 = temp_fv0_2 + 0.5f;
    temp_ft1 = (s32) (((f32) temp_ft0) - temp_fv1_2);
    temp_fa0_2 = sp78 + 0.5f;
    temp_ft1_2 = (s32) (((f32) ((int) var_s1)) - temp_fa0_2);
    temp_ft5 = (s32) (((f32) sp74) - temp_fa0_2);
    temp_ft0 = (s32) (((f32) var_s7) - temp_fv1_2);
    sp6C = (s32) ((((f32) temp_ft0) + temp_fv0_2) + 0.5f);
    sp74 = (s32) ((((f32) temp_ft1) + temp_fv0_2) + 0.5f);
    do
    {
      func_8021F4E4();
    }
    while (0);
    func_8021F35C(temp_ft1, temp_ft1_2, 0, 0, ((s32) arg7) * 0, (s32) arg4, (s32) arg5, (s32) arg6, (s32) arg7);
    func_8021F35C(sp6C, (s32) ((((f32) temp_ft5) + sp78) + 0.50f), 0, 0, 0, (s32) arg4, (s32) arg5, (s32) arg6, (s32) arg7);
    func_8021F35C(sp74, (s32) ((((f32) temp_ft1_2) + sp78) + 0.5f), 0, 0, 0, (s32) arg4, (s32) arg5, (s32) arg6, (s32) arg7);
    func_8021F35C(temp_ft0, temp_ft5, 0, 0, 0, (s32) arg4, (s32) arg5, arg6, (s32) arg7);
    func_8021FCD0(arg0);
  }
}

