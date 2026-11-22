extern f32 D_80255180;
void func_8023288C(s16 *arg0, s16 *arg1, s16 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, u8 arg10, f32 arg11, f32 arg12)
{
  f32 sp0;
  f32 temp_fa0;
  f32 temp_fa0_2;
  f32 temp_fa0_3;
  f32 temp_fa0_4;
  f32 temp_fa0_5;
  f32 temp_fa0_6;
  f32 temp_ft0;
  f32 temp_ft2;
  f32 temp_ft2_2;
  f32 temp_ft4;
  f32 temp_ft4_2;
  f32 temp_ft4_3;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 var_fv0_9;
  f32 temp_fv1_5;
  f32 temp_fv1_6;
  f32 var_fv0;
  f32 var_fv0_10;
  f32 var_fv0_11;
  f32 var_fv0_12;
  f32 var_fv0_13;
  f32 var_fv0_2;
  f32 var_fv0_3;
  f32 var_fv0_4;
  f32 var_fv0_5;
  f32 var_fv0_6;
  f32 var_fv0_7;
  f32 var_fv0_8;
  f32 temp_fv1_4;
  if (arg8 == D_80255180)
  {
    if (arg7 <= arg3)
    {
      if (arg10 != 0)
      {
        *arg2 = 0;
      }
      *arg0 = -1;
      return;
    }
    if (arg4 <= arg7)
    {
      if (arg10 == 0)
      {
        *arg2 = 0;
      }
      *arg0 = -1;
      return;
    }
    temp_fv1 = (arg7 - arg3) * arg11;
    if (temp_fv1 >= 0.0f)
    {
 var_fv0 = temp_fv1 + 0.5f; } else { var_fv0 = temp_fv1 - 0.5f; } *arg0 = (s16) ((s32) var_fv0); *arg1 = 0x2F - (*arg0); return; } if (arg8 == 0.0f) { temp_fa0 = (arg8 * arg3) + arg7; if (temp_fa0 <= arg6) { if (!arg10) { *arg2 = 0; } *arg0 = -1; return; } if (arg5 <= temp_fa0) { if (arg10 != 0) { *arg2 = 0; } *arg0 = -1; return; } temp_fv1_2 = (temp_fa0 - arg6) * arg12; if (temp_fv1_2 <= 63.0f) { var_fv0_2 = (63.0f - temp_fv1_2) + 0.5f; } else { var_fv0_2 = (63.0f - temp_fv1_2) - 0.5f; } *arg0 = (s16) ((s32) var_fv0_2); temp_fv1_2 = temp_fv1_2 + 16.0f; if (temp_fv1_2 >= 0.0f) { var_fv0_3 = temp_fv1_2 + 0.5f; } else { var_fv0_3 = temp_fv1_2 - 0.5f; } *arg1 = (s16) ((s32) var_fv0_3); return;
  }
  temp_fa0_3 = (arg8 * arg3) + arg7;
  if (temp_fa0_3 < arg6)
  {
    temp_fv1_3 = (arg8 * arg4) + arg7;
    if (temp_fv1_3 <= arg6)
    {
      if (arg10 == 0)
      {
        *arg2 = 0;
      }
      *arg0 = -1;
      return;
    }
    temp_ft4 = ((arg6 - temp_fa0_3) * arg9) * arg11;
    if (temp_ft4 >= 0.0f)
    {
      var_fv0_4 = temp_ft4 + 0.5f;
    }
    else
    {
      var_fv0_4 = temp_ft4 - 0.5f;
    }
    *arg0 = (s16) ((s32) var_fv0_4);
    if (temp_fv1_3 <= arg5)
    {
      temp_fa0_4 = (temp_fv1_3 - arg6) * arg12;
      if (temp_fa0_4 >= 0.0f)
      {
        var_fv0_5 = temp_fa0_4 + 0.5f;
      }
      else
      {
        var_fv0_5 = temp_fa0_4 - 0.5f;
      }
      *arg1 = ((s32) var_fv0_5) + 0x10;
      return;
    }
    if (arg5 < temp_fv1_3)
    {
      sp0 = temp_ft2;
      temp_ft2 = ((arg5 - temp_fa0_3) * arg9) * arg11;
      if (temp_ft2 >= 0.0f)
      {
        var_fv0_6 = temp_ft2 + (0.5f * 1.0f);
      }
      else
      {
        var_fv0_6 = sp0 - 0.5f;
      }
      *arg1 = 0x2F - ((s32) var_fv0_6);
    }
  }
  else
    if ((arg6 <= temp_fa0_3) && (temp_fa0_3 <= arg5))
  {
    temp_fv1_4 = (temp_fa0_3 - arg6) * arg12;
    if (temp_fv1_4 >= 0.0f)
    {
      var_fv0_7 = temp_fv1_4 + 0.5f;
    }
    else
    {
      var_fv0_7 = temp_fv1_4 - 0.5f;
    }
    *arg0 = 0x3F - ((s32) var_fv0_7);
    temp_fv1_5 = (arg8 * arg4) + arg7;
    if (temp_fv1_5 < arg6)
    {
      temp_ft4_2 = ((arg6 - temp_fa0_3) * arg9) * arg11;
      if (temp_ft4_2 >= 0.0f)
      {
        var_fv0_8 = temp_ft4_2 + 0.5f;
      }
      else
      {
        var_fv0_8 = temp_ft4_2 - 0.5f;
      }
      *arg1 = (s16) ((s32) var_fv0_8);
      return;
    }
    if (temp_fv1_5 <= arg5)
    {
      temp_fa0_5 = (temp_fv1_5 - arg6) * arg12;
      if (temp_fa0_5 >= 0.0f)
      {
        var_fv0_9 = temp_fa0_5 + 0.5f;
      }
      else
      {
        var_fv0_9 = temp_fa0_5 - 0.5f;
      }
      *arg1 = ((s32) var_fv0_9) + 0x10;
      return;
    }
    if (arg5 < temp_fv1_5)
    {
      temp_ft2_2 = ((arg5 - temp_fa0_3) * arg9) * arg11;
      sp0 = temp_ft2_2;
      if (temp_ft2_2 >= 0.0f)
      {
        var_fv0_10 = temp_ft2_2 + 0.5f;
      }
      else
      {
        var_fv0_10 = sp0 - 0.5f;
      }
      *arg1 = 0x2F - ((s32) var_fv0_10);
    }
  }
  else
    if (arg5 <= temp_fa0_3)
  {
    temp_fv1_6 = (arg8 * arg4) + arg7;
    if (arg5 <= temp_fv1_6)
    {
      if (arg10 != 0)
      {
        *arg2 = 0;
      }
      *arg0 = -1;
      return;
    }
    temp_ft0 = ((arg5 - temp_fa0_3) * arg9) * arg11;
    sp0 = temp_ft0;
    if (temp_ft0 >= 0.0f)
    {
      var_fv0_11 = temp_ft0 + 0.5f;
    }
    else
    {
      var_fv0_11 = sp0 - 0.5f;
    }
    *arg0 = 0x2F - ((s32) var_fv0_11);
    if (arg6 <= temp_fv1_6)
    {
      temp_fa0_6 = (temp_fv1_6 - arg6) * arg12;
      if (temp_fa0_6 >= 0.0f)
      {
        var_fv0_12 = temp_fa0_6 + 0.5f;
      }
      else
      {
        var_fv0_12 = temp_fa0_6 - 0.5f;
      }
      *arg1 = ((s32) var_fv0_12) + 0x10;
      return;
    }
    if (temp_fv1_6 < arg6)
    {
      temp_fa0_3 = ((arg6 - temp_fa0_3) * arg9) * arg11;
      if (temp_fa0_3 >= 0)
      {
        var_fv0_13 = temp_fa0_3 + 0.5f;
      }
      else
      {
        var_fv0_13 = temp_fa0_3 - 0.5f;
      }
      *arg1 = (s16) ((s32) var_fv0_13);
    }
  }
}
