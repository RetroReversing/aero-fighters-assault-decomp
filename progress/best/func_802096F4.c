extern f32 D_802530A0;
void func_802096F4(f32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4, f32 *arg5)
{
  f32 temp_fa0;
  f32 var_fa0;
  f32 var_ft0;
  s32 temp_ft3;
  do
  {
    var_fa0 = arg0;
    if (arg1 <= D_802530A0)
    {
      *arg3 = arg2;
      *arg4 = arg2;
      *arg5 = arg2;
      return;
    }
    if (var_fa0 < 0.0f)
    {
      var_fa0 += 1.0f * 1.0f;
    }
    if (var_fa0 == 1.0f)
    {
      var_fa0 = 0;
    }
    temp_fa0 = var_fa0 * 6.0f;
  }
  while (0);
  temp_ft3 = (s32) temp_fa0;
  switch (temp_ft3)
  {
    case 0:
      *arg3 = arg2;
      *arg4 = (1.0f - ((1.0f - (temp_fa0 - ((f32) temp_ft3))) * arg1)) * arg2;
      var_ft0 = (1.0f - arg1) * arg2;
      block_14:
    *arg5 = var_ft0;


    default:
      return;

    case 1:
      *arg3 = (1.0f - (arg1 * (temp_fa0 - ((f32) temp_ft3)))) * arg2;
      *arg4 = arg2;
      *arg5 = (1.0f - arg1) * arg2;
      return;

    case 2:
      *arg3 = (1.0f - arg1) * arg2;
      *arg4 = arg2;
      *arg5 = (1.0f - ((1.0f - (temp_fa0 - ((f32) temp_ft3))) * arg1)) * arg2;
      return;

    case 3:
      *arg3 = (1.0f - arg1) * arg2;
      *arg4 = (1.0f - ((arg1 * 1.0f) * (temp_fa0 - ((f32) temp_ft3)))) * arg2;
      *arg5 = arg2;
      return;

    case 4:
      *arg3 = (1.0f - ((1.0f - (temp_fa0 - ((f32) temp_ft3))) * arg1)) * arg2;
      *arg4 = (1.0f - arg1) * arg2;
      *arg5 = arg2;
      return;

    case 5:
      *arg3 = arg2;
      *arg4 = (1.0f - arg1) * arg2;
      var_ft0 = (1.0f - (((0, arg1)) * (temp_fa0 - ((f32) temp_ft3)))) * arg2;
      goto block_14;

  }

}

