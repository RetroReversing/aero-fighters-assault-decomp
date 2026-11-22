void func_8029F11C(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
  s32 temp_ft1;
  s32 temp_ft1_2;
  s32 temp_ft2;
  s32 temp_ft3;
  s32 temp_ft3_2;
  s32 temp_ft5;
  s32 temp_ft5_2;
  s32 var_v0;
  void *var_v1;
  var_v0 = 0;
  var_v1 = arg0;
  temp_ft2 = (s32) (arg1 * 255.0f);
  temp_ft5 = (s32) (arg2 * 255.0f);
  temp_ft1 = (s32) (arg6 * 255.0f);
  temp_ft3 = (s32) (arg3 * 255.0f);
  temp_ft1 = (s32) (1.0f * 255.0f);
  temp_ft5_2 = (s32) (arg4 * 255.0f);
  temp_ft3_2 = (s32) (arg5 * 255.0f);
  __repair_rows:
  {
    var_v0 += 1;
    if (!(var_v0 % 2))
    {
      *((s16 *) (((char *) var_v1) + 0x76)) = (s16) temp_ft2;
      *((s16 *) (((char *) var_v1) + 0x78)) = (s16) temp_ft5;
      *((s16 *) (((char *) var_v1) + 0x7A)) = (s16) temp_ft3;
      *((s16 *) (((char *) var_v1) + 0x7C)) = (s16) temp_ft1;
      *((s16 *) (((char *) var_v1) + 0x8A)) = 1;
      *((s16 *) (((char *) var_v1) + 0xE0)) = (s16) temp_ft5_2;
      *((s16 *) (((char *) var_v1) + 0xE2)) = (s16) temp_ft3_2;
      *((s16 *) (((char *) var_v1) + 0xE4)) = (s16) ((s32) (arg6 * 255.0f));
      *((s16 *) (((char *) var_v1) + 0xE6)) = (s16) temp_ft1;
    }
    else
    {
      *((s16 *) (((char *) var_v1) + 0xE0)) = (s16) temp_ft2;
      *((s16 *) (((char *) var_v1) + 0xE2)) = (s16) temp_ft5;
      *((s16 *) (((char *) var_v1) + 0xE4)) = (s16) temp_ft3;
      *((s16 *) (((char *) var_v1) + 0xE6)) = (s16) temp_ft1;
      *((s16 *) (((char *) var_v1) + 0x76)) = (unsigned char) ((s16) temp_ft5_2);
      *((s16 *) (((char *) var_v1) + 0x78)) = (s16) temp_ft3_2;
      *((s16 *) (((char *) var_v1) + 0x7A)) = (s16) ((s32) (arg6 * 255.0f));
      *((s16 *) (((char *) var_v1) + 0x7C)) = (s16) temp_ft1;
      *((s16 *) (((char *) var_v1) + 0x8A)) = 1;
    }
    var_v1 = ((unsigned char *) var_v1) + 0x1DC;
  }

  if (var_v0 != 0xA)
  {
    goto __repair_rows;
  }
}

