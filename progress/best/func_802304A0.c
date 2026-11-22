s8 func_802306D0();
void func_802304A0(f32 arg0, s32 *arg1, s32 arg2)
{
  u16 sp5E;
  s32 sp4C;
  f32 temp_fs0;
  register f32 var_fa0;
  f32 var_fs0;
  f32 var_ft0;
  unsigned long var_s0_3;
  s32 temp_ft4;
  unsigned temp_t4;
  unsigned char temp_hi;
  unsigned temp_s4;
  s32 var_s0;
  s32 var_s0_2;
  s32 temp_ft1;
  s32 var_s3;
  s32 var_s4;
  char *var_s2;
  s32 var_v0;
  s32 var_s4_2;
  char *var_s2_2;
  register s8 temp_v0;
  var_fa0 = arg0;
  if (var_fa0 < 0.0f)
  {
    sp5E = 1;
    var_fa0 = -var_fa0;
  }
  else
  {
    sp5E = 0;
  }
  temp_ft1 = (s32) var_fa0;
  var_v0 = 0;
  var_s0 = 1;
  var_s3 = temp_ft1;
  if (temp_ft1 != 0)
  {
    if (temp_ft1 > 0)
    {
      do
      {
        var_v0 = (var_v0 + 1) & 0xFFFF;
        var_s0 *= 0xA;
      }
      while (var_s3 >= var_s0);
    }
  }
  else
  {
    var_v0 = 1;
  }
  temp_s4 = *arg1; temp_s4 += var_v0 + sp5E;
  *((s8 *) (arg2 + temp_s4)) = 0x2E;
  temp_s4 = temp_s4 + 1;
  var_fs0 = var_fa0 - ((f32) temp_ft1);
  var_s2 = arg2 + temp_s4;
  sp4C = (s32) sp5E;
  var_s0_2 = 0;
  for (;;)
  {
    {
      temp_fs0 = var_fs0 * 10.0f;
      temp_ft4 = (s32) temp_fs0;
      temp_t4 = temp_ft4 & 0xFFFF;
      var_ft0 = (f32) temp_t4;
      if (temp_t4 < 0)
      {
        var_ft0 += 4294967296.0f;
      }
      var_fs0 = temp_fs0 - var_ft0;
      *((s8 *) var_s2) = func_802306D0((temp_ft4 & 0xFFFF) & 0xFFFF);
      ++var_s0_2;
      ++temp_s4;
      var_s2 += 1;
    }
    if (2 > var_s0_2)
    {
      continue;
    }
    break;
  }

  temp_s4 = temp_s4 - 4;
  var_s2_2 = var_s2 - 4;
  var_s0_3 = 0;
  if (var_v0 > 0)
  {
 do { do { temp_hi = var_s3 % 10; var_s0_3 += 1; temp_v0 = func_802306D0(temp_hi & 0xFFFF); var_s3 = ((s32) (var_s3 - (temp_hi & 0xFFFF))) / 10; *((s8 *) var_s2_2) = temp_v0; temp_s4 -= 1; var_s2_2 -= 1; } while (var_s0_3 != var_v0); } while (0);
  }
  if (sp5E)
  {
    *((s8 *) var_s2_2) = 0x2D;
    temp_s4 -= 1;
  }
  *arg1 = ((temp_s4 + var_v0) + sp4C) + 4;
}
