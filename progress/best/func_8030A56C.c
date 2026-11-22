u32 func_8030A850(s32, u8);
extern f64 D_803465F0;
extern u8 D_80348BAD;
extern u8 D_80348BAF;
extern u8 D_80348BB0;
extern u8 D_80348BB1;
extern u8 D_80348BB3;
extern u8 D_80348BB4;
s32 func_8030A56C(s32 arg0, s32 arg1)
{
  int *__repair_home0 = &arg0;
  int *__repair_home1 = &arg1;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs0_3;
  f32 var_ft1;
  f32 var_ft2;
  f32 var_ft3;
  f32 var_ft3_2;
  f32 var_ft5;
  f32 var_fv1;
  s32 temp_s0;
  s32 temp_v0;
  s32 var_v1;
  u32 temp_v0_2;
  u32 temp_v0_3;
  u32 temp_v0_4;
  temp_v0 = (*__repair_home0) & 0xFF;
  var_fv1 = 0.0f;
  temp_s0 = (*__repair_home1) & 0xFF;
  if (temp_v0 == 1)
  {
    temp_fs0 = (f32) func_8030A850(temp_s0, D_80348BAF);
    temp_v0_2 = func_8030A850(temp_s0, D_80348BB3);
    var_ft3 = (f32) temp_s0;
    if (temp_s0 < 0)
    {
      var_ft3 += 4294967296.0f;
    }
    var_ft3_2 = (f32) temp_v0_2;
    if (((s32) temp_v0_2) < 0)
    {
      var_ft3_2 += 4294967296.0f;
    }
    var_fv1 = (f32) ((((f64) (var_ft3 * (1.0f - temp_fs0))) * (1.5 + ((f64) var_ft3_2))) * 2.0);
  }
  else
    if (temp_v0 == 4)
  {
    temp_fs0_2 = (f32) func_8030A850(temp_s0, D_80348BB0);
    temp_v0_3 = func_8030A850(temp_s0, D_80348BB4);
    var_ft2 = (f32) temp_s0;
    if (temp_s0 < 0)
    {
      var_ft2 += 4294967296.0f;
    }
    var_ft5 = (f32) temp_v0_3;
    if ((((s32) temp_v0_3) + 1) <= 0)
    {
      var_ft5 += 4294967296.0f;
    }
    var_fv1 = (((var_ft2 * (1.0f - temp_fs0_2)) * (2.0f + var_ft5)) * 2.0f) + ((f32) (((f64) (((0, D_80348BB4)) & 2)) * D_803465F0));
  }
  else
    if (temp_v0 == 3)
  {
    temp_fs0_3 = (f32) func_8030A850(temp_s0, D_80348BAD);
    temp_v0_4 = func_8030A850(temp_s0, D_80348BB1);
    var_ft1 = (f32) temp_v0_4;
    if (((s32) temp_v0_4) < 0)
    {
      var_ft1 += 4294967296.0f;
    }
    var_fv1 = ((((f32) temp_s0) * (1.0f - temp_fs0_3)) * (3.0f + var_ft1)) * 2.0f;
  }
  if (var_fv1 >= 3.0f)
  {
    var_v1 = 1;
  }
  else
  {
    var_v1 = 0;
  }
  return var_v1 & 0xFF;
}

