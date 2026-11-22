s32 func_80217940(f32, f32, s32, s32, s32, s32, void *);
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
} __repair_record_arg4;
s32 func_802165D0(f32 arg0, f32 arg1, s32 arg2, s32 arg3, void *arg4)
{
  s16 var_s3;
  s16 spE4;
  f32 spB8;
  f32 spB4;
  f32 spB0;
  u8 sp80[0x30];
  f32 temp_fs0;
  f32 temp_fs1;
  f32 temp_fv0;
  f32 temp_fv0_2;
  s16 temp_s1;
  s16 var_s0_2;
  s16 var_s2;
  s32 *temp_s5;
  s32 temp_s4;
  s32 var_s0;
  u8 temp_fp;
  void *temp_s7;
  void *temp_v0;
  temp_s7 = *((s32 *) ((unsigned long long) ((*((s32 *) (((char *) D_8024E710) + 0x1C))) + (((__repair_record_arg4 *) arg4)->field_0 * 4))));
  temp_s5 = *((s32 **) (((char *) temp_s7) + 8));
  temp_fv0 = (*((f32 *) (((char *) temp_s7) + 0x1C))) / ((__repair_record_arg4 *) arg4)->field_C;
  temp_fp = *((u8 *) (((char *) temp_s5) + 4));
  temp_fv0 = temp_fv0 * temp_fv0;
  temp_fs0 = 1.0f / ((*((f32 *) (((char *) temp_s7) + 0x20))) * temp_fv0);
  spE4 = -1;
  __repair_rows:
  {
    func_80228CE0(arg4);
  }

  if (0)
  {
    goto __repair_rows;
  }
  var_s2 = 0;
  var_s3 = 0;
  if (((s32) temp_fp) > 0)
  {
    loop_2:
    temp_s4 = var_s3 * 0x24;

    temp_v0 = (*((s32 *) (((char *) temp_s5) + 0))) + temp_s4;
    if ((((__repair_record_arg4 *) arg4)->field_10 & (1 << var_s3)) || ((var_s0 = 1, ((*((u8 *) (((char *) temp_v0) + 7))) & 1) != 0)))
    {
      var_s0 = 0;
    }
    if ((var_s0 != 0) || (!((*((u8 *) (((char *) temp_v0) + 7))) & 2)))
    {
      func_80228DE0(sp80, D_8025C3E4 + ((*((s32 *) (((__repair_record_arg4 *) arg4)->field_4 + (var_s3 * 2)))) << 6));
      if (var_s3 == 0)
      {
        temp_fv0_2 = (*((f32 *) (((char *) temp_s7) + 0x20))) * temp_fv0;
        func_8022A210(sp80, temp_fv0_2, temp_fv0_2, temp_fv0_2);
      }
      else
      {
        spB0 *= temp_fs0;
        if (1)
        {
        }
        if (1)
        {
        }
        if (1)
        {
        }
        if (1)
        {
        }
        if (1)
        {
        }
        spB4 *= temp_fs0;
        spB8 *= temp_fs0;
      }
      func_80228D0C(sp80);
      do
      {
        var_s2 += 1;
      }
      while (0);
      if (var_s0 != 0)
      {
        D_8025C394 = (D_8025C394 & 0xFFFFFF) | (var_s3 << 0x18);
        spE4 += func_80217940(arg0, arg1, arg2, arg3, func_80228CF0(), (*((s32 *) (((char *) temp_s5) + 0))) + (temp_s4 & 0xFFFFu), temp_s7);
      }
      if (var_s3 == (temp_fp - 1))
      {
      }
      else
      {
        var_s0_2 = 0;
        temp_v0 = (*((s32 *) (((char *) temp_s5) + 0))) + temp_s4;
        temp_s1 = (*((u8 *) (((char *) temp_v0) + 6))) - (*((u8 *) (((char *) temp_v0) + 0x2A)));
        if (temp_s1 >= 0)
        {
          do
          {
            func_80228D9C();
            var_s0_2 += 1;
            var_s2 -= 1;
          }
          while (temp_s1 >= var_s0_2);
        }
        goto block_17;
      }
    }
    else
    {
      block_17:
      var_s3 += 1;

      if (var_s3 >= ((s32) temp_fp))
      {
        if (0)
        {
        }
      }
      else
      {
        goto loop_2;
      }
    }
    var_s3 = 0;
  }
  if (var_s2 > 0)
  {
    do
    {
      func_80228D9C();
      var_s3 += 1;
    }
    while (var_s3 < var_s2);
  }
  return -1;
}

