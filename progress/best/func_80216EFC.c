s16 func_80216534(f32, f32, s32, s32, s32);
s32 func_80228CE0();
s32 func_80228CF0();
s32 func_80228D0C();
s32 func_80228D9C();
s32 func_80228DE0();
s32 func_8022A210(s32, f32, f32, f32);
extern void *D_8024E710;
extern s32 D_8025C394;
extern s32 D_8025C3E4;
typedef struct 
{
  unsigned short field_0;
  unsigned char pad_2[2];
  int field_4;
  unsigned char pad_8[4];
  float field_C;
  int field_10;
} __repair_record_arg3;
s16 func_80216EFC(f32 arg0, f32 arg1, s32 arg2, void *arg3)
{
  register f32 temp_fs0;
  register void *temp_v0;
  void *spB0;
  f32 temp_fs1;
  s32 *temp_s5;
  register f32 spA0;
  register f32 sp9C;
  s32 temp_fp;
  long temp_s4;
  register f32 temp_fv0_2;
  s16 var_s0_2;
  register s16 var_s2;
  s16 temp_s1;
  s16 var_v1;
  s16 var_s3;
  f32 temp_fv0;
  register f32 spA4;
  void *temp_v0_3;
  s32 var_s0;
  register void *temp_v0_2;
  s32 sp6C;
  temp_v0 = (*((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x1C))) + (((__repair_record_arg3 *) arg3)->field_0 * 4)))) & 0xFFFFFFFFFFFFFFFF;
  temp_s5 = *((s32 **) (((char *) temp_v0) + 8));
  temp_fv0 = (*((f32 *) (((char *) temp_v0) + 0x1C))) / ((__repair_record_arg3 *) arg3)->field_C;
  temp_fp = *((u8 *) (((char *) temp_s5) + 4));
  temp_fv0 = temp_fv0 * temp_fv0;
  spB0 = temp_v0;
  temp_fs0 = 1.0f / ((*((f32 *) (((char *) temp_v0) + 0x20))) * temp_fv0);
  func_80228CE0();
  var_s2 = 0;
  var_s3 = 0;
  if (temp_fp > 0)
  {
    loop_2:
    temp_v0_2 = (*((s32 *) (((char *) temp_s5) + 0))) + ((s32) temp_s4);

    temp_s4 = var_s3 * 0x24;
    if (((((__repair_record_arg3 *) arg3)->field_10 & (1 << var_s3)) && (var_s3 < 0x20)) || ((var_s0 = 1, ((*((u8 *) (((char *) temp_v0_2) + 7))) & 1) != 0)))
    {
      var_s0 = 0;
    }
    if (var_s0 || (!((*((u8 *) (((char *) temp_v0_2) + 7))) & 2)))
    {
      func_80228DE0(&sp6C, D_8025C3E4 + (((*((s32 *) (((__repair_record_arg3 *) arg3)->field_4 + (var_s3 * 2)))) << 5) << 1));
      if (!var_s3)
      {
        temp_fv0_2 = (*((f32 *) (((char *) spB0) + 0x20))) * temp_fv0;
        func_8022A210(&sp6C, temp_fv0_2, temp_fv0_2, temp_fv0_2);
      }
      else
      {
        sp9C *= temp_fs0;
        spA0 *= temp_fs0;
        spA4 *= temp_fs0;
      }
      func_80228D0C(&sp6C);
      do
      {
        do
        {
          do
          {
            var_s2 += 1;
          }
          while (0);
        }
        while (0);
      }
      while (0);
      if (var_s0 != 0)
      {
        D_8025C394 = (((s32) D_8025C394) & 0xFFFFFF) | (var_s3 << 0x18);
        var_v1 = func_80216534(arg0, arg1, arg2, func_80228CF0(), (*((s32 *) (((char *) temp_s5) + 0))) + temp_s4);
      }
      else
      {
        var_v1 = -1;
      }
      if (0 <= var_v1)
      {
        return var_v1;
      }
      if ((var_s3 + 1) == temp_fp)
      {
        goto block_21;
      }
      var_s0_2 = 0;
      temp_v0_3 = (*((s32 *) (((char *) temp_s5) + 0))) + temp_s4;
      temp_s1 = (*((u8 *) (((char *) temp_v0_3) + 6))) - (*((u8 *) (((char *) temp_v0_3) + 0x2A)));
      if (temp_s1 >= 0)
      {
        do
        {
          func_80228D9C();
          ++var_s0_2;
          var_s2--;
        }
        while (temp_s1 >= var_s0_2);
      }
      goto block_20;
    }
    block_20:
    var_s3 += 1;

    if (var_s3 >= temp_fp)
    {
      block_21:
      var_s3 = 0;

      goto block_22;
    }
    goto loop_2;
  }
  block_22:
  if (var_s2 > 0)
  {
    do
    {
      func_80228D9C();
      ++var_s3;
    }
    while (var_s3 < var_s2);
  }

  return -1;
}

