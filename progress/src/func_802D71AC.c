f32 func_803003A4(f32);
extern f32 D_80343480;
extern f32 D_80343484;
extern f32 D_803481E0;
extern f32 D_80348208;
void func_802D71AC(void)
{
  f32 *var_s1;
  f32 *var_s2;
  f32 temp_fs0;
  f32 temp_fs1;
  f32 temp_fs2;
  register s32 var_s0;
  do
  {
    temp_fs2 = D_80343480;
 do { var_s1 = &D_803481E0; if (1) { var_s2 = &D_80348208; } temp_fs1 = D_80343484; var_s0 = 0; } while (0);
    __repair_rows:
    {
      ;
      *var_s1 = func_803003A4(((temp_fs1 * 1.0f) * ((f32) var_s0)) + temp_fs2);
      *var_s2 = func_803003A4(temp_fs1 * ((f32) var_s0)); var_s0 += 1; var_s1 += 1; var_s2 += 1;
    }

  }
  while (0);
  if (var_s0 != 9)
  {
    goto __repair_rows;
  }
}
