f32 func_8022AA40(f32);
void func_80289DF8(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
  f32 temp_fs1;
  f32 temp_fs2;
  f32 temp_fv0;
  s32 temp_ft1;
  s32 temp_ft1_2;
  s32 temp_ft2;
  s32 temp_ft3;
  s32 temp_ft3_2;
  s32 temp_ft5;
  s32 temp_ft5_2;
  s32 var_s1;
  s32 var_s1_2;
  void *var_s0;
  void *var_v0;
  temp_ft2 = (s32) (arg1 * 255.0f);
  temp_ft5 = (s32) (arg2 * 255.0f);
  temp_ft3 = (s32) (arg3 * 255.0f);
  var_v0 = arg0;
  temp_ft1 = (s32) (1.0f * 255.0f);
  temp_ft5_2 = (s32) (arg4 * 255.0f);
  temp_ft3_2 = (s32) (arg5 * 255.0f);
 if (0) { }
  var_s1 = 0;
  var_s0 = arg0;
  temp_ft1_2 = (s32) (arg6 * 255.0f);
  __repair_rows:
  {
    var_s1 += 1;
    if (!(var_s1 % 2))
    {
      *((s16 *) (((char *) var_v0) + 0xE0E)) = (s16) temp_ft2;
      *((s16 *) (((char *) var_v0) + 0xE10)) = (s16) temp_ft5;
      *((s16 *) (((char *) var_v0) + 0xE12)) = (s16) temp_ft3;
      *((u16 *) (((char *) var_v0) + 0xE14)) = (s16) temp_ft1;
      *((s16 *) (((char *) var_v0) + 0xE22)) = 1;
      *((s16 *) (((char *) var_v0) + 0xE78)) = (s16) temp_ft5_2;
      *((s16 *) (((char *) var_v0) + 0xE7A)) = (s16) (temp_ft3_2 & 0xFF);
      *((s16 *) (((char *) var_v0) + 0xE7C)) = (s16) ((s32) (arg6 * 255.0f));
      *((s16 *) (((char *) var_v0) + 0xE7E)) = (s16) temp_ft1;
    }
    else
    {
      *((s16 *) (((char *) var_v0) + 0xE78)) = (s16) temp_ft2;
      *((s16 *) (((char *) var_v0) + 0xE7A)) = (s16) temp_ft5;
      *((s16 *) (((char *) var_v0) + 0xE7C)) = (s16) temp_ft3;
      *((s16 *) (((char *) var_v0) + 0xE7E)) = (s16) temp_ft1;
      *((s16 *) (((char *) var_v0) + 0xE0E)) = (s16) temp_ft5_2;
      *((s16 *) (((char *) var_v0) + 0xE10)) = (s16) temp_ft3_2;
      *((s16 *) (((char *) var_v0) + 0xE12)) = (s16) ((s32) (arg6 * 255.0f));
      *((s16 *) (((char *) var_v0) + 0xE14)) = (s16) temp_ft1;
      *((s16 *) (((char *) var_v0) + 0xE22)) = 1;
    }
    var_v0 = ((unsigned char *) var_v0) + 0x1DC;
  }

  if (var_s1 < 5)
  {
    goto __repair_rows;
  }
  var_s1_2 = 0;
  do
  {
    if (0)
    {
    }
    temp_fs1 = func_8022AA40(arg1);
    temp_fs2 = func_8022AA40(arg2);
    temp_fv0 = func_8022AA40(arg3);
    var_s1_2 += 1;
    *((s16 *) (((char *) var_s0) + 0x17A)) = 3;
    *((f32 *) (((char *) var_s0) + 0x17C)) = 0.5f;
    var_s0 = ((unsigned char *) var_s0) + 0x258;
    *((s16 *) (((char *) var_s0) + (-0xF0))) = (s16) ((s32) (temp_fs2 * 255.0f));
    *((s16 *) (((char *) var_s0) + (-0xEE))) = (s16) ((s32) (temp_fv0 * 255.0f));
    *((s16 *) (((char *) var_s0) + (-0xF2))) = (s16) ((s32) (temp_fs1 * 255.0f));
  }
  while (var_s1_2 != 5);
  *((s16 *) (((char *) arg0) + 0xD1E)) = (s16) temp_ft2;
  *((s16 *) (((char *) arg0) + 0xD20)) = (s16) temp_ft5;
  *((s16 *) (((char *) arg0) + 0xD22)) = (s16) temp_ft3;
  *((s16 *) (((char *) arg0) + 0xD32)) = 3;
  *((f32 *) (((char *) arg0) + 0xD34)) = 0.5f;
}
