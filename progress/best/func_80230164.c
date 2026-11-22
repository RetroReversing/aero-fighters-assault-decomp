s8 func_802306D0();
void func_80230164(s32 arg0, u16 arg1, s32 *arg2, s32 arg3, s32 arg4, volatile unsigned int arg5, s32 arg6)
{
  char temp_hi;
  s32 var_v0;
  u16 sp52;
  long sp40;
  s32 var_fp;
  s32 var_a1;
  s32 temp_hi_2;
  register s32 var_s3;
  s32 var_s4_3;
  s32 var_s4_2;
  s32 var_s4;
  register s32 var_s6;
  s32 var_t0;
  s32 sp44;
  char *var_s0;
  s32 var_v1_2;
  s32 var_v1;
  s8 temp_v0;
  s8 temp_v0_2;
  u16 var_a2;
  var_s6 = arg0;
  if (arg0 < 0)
  {
    var_a2 = 1;
    var_s6 = -arg0;
  }
  else
  {
    var_a2 = 0;
  }
  var_v0 = 0;
  var_s4 = 1;
  if (var_s6)
  {
    if (0 < var_s6)
    {
      do
      {
        var_v0 = (var_v0 + 1) & 0xFFFF;
        var_s4 *= arg1;
      }
      while (var_s6 >= var_s4);
    }
  }
  else
  {
    var_v0 = 1;
  }
  var_t0 = var_v0 + var_a2;
  if (arg4 > 0)
  {
    var_fp = arg4;
    var_t0 = var_v0 + var_a2;
  }
  else
  {
    var_fp = var_t0;
  }
  var_s3 = ((*arg2) + var_fp) - 1;
  var_v1 = var_fp;
  var_v0 = var_v0;
  var_a1 = var_t0;
  if (arg5 != 0)
  {
    s32 __block_var_s4_2;
    __block_var_s4_2 = 0;
    if (var_fp > 0)
    {
      do
      {
        if (var_v1 > var_a1)
        {
          *((s8 *) (arg3 + var_s3)) = 0x20;
          var_s3 -= 1;
          var_v1 -= 1;
        }
        else
          if (var_v0 > 0)
        {
          temp_hi = var_s6 % arg1;
          sp40 = var_v1;
          sp44 = var_a1;
          temp_v0 = func_802306D0(temp_hi & 0xFFFF, var_a1);
          *((s8 *) (arg3 + var_s3)) = temp_v0;
          var_s3 -= 1;
          var_s6 = ((s32) (var_s6 - (temp_hi & 0xFFFF))) / ((s32) arg1);
          var_v0 -= 1;
          var_v1 -= 1;
          var_a1 -= 1;
        }
        else
          if (var_a1 == 1)
        {
          *((s8 *) (arg3 + var_s3)) = 0x20;
          var_s3 -= 1;
        }
        __block_var_s4_2 += 1;
      }
      while (__block_var_s4_2 != var_fp);
    }
  }
  else
  {
    var_s4_3 = 0;
    if (0 < var_fp)
    {
      var_s0 = arg3 + var_s3;
      do
      {
        if (var_v0 > 0)
        {
          temp_hi_2 = var_s6 % ((s32) arg1);
          sp52 = var_a2;
          temp_v0_2 = func_802306D0(temp_hi_2 & 0xFFFF, 0x2D, var_a2);
          *((s8 *) var_s0) = temp_v0_2;
          var_s6 = ((s32) (var_s6 - (temp_hi_2 & 0xFFFF))) / ((s32) arg1);
          var_s3 -= 1;
          var_s0--;
          var_v1_2 = var_s4_3 + 1;
        }
        else
        {
          var_v1_2 = var_s4_3 + 1;
          if (arg6 != 0)
          {
            if ((var_fp == var_v1_2) && (var_a2 != 0))
            {
              *((s8 *) var_s0) = 0x2D;
              var_s3 -= 1;
            }
            else
            {
              *((s8 *) var_s0) = 0x30;
              var_s3 -= 1;
            }
            var_s0 -= 1;
          }
          else
          {
            var_v1_2 = var_s4_3 + 1;
            if ((!var_v0) && var_a2)
            {
              *((s8 *) var_s0) = 0x2D;
              var_s3 -= 1;
              var_s0 -= 1;
              var_v1_2 = (var_s4_3 ^ 0) + 1;
            }
            else
            {
              *((s8 *) var_s0) = 0x20;
              var_s3 -= 1;
              var_s0 -= 1;
            }
          }
        }
        var_s4_3 = var_v1_2;
        var_v0 -= 1;
      }
      while (var_v1_2 != var_fp);
    }
  }
  *arg2 = (var_s3 + var_fp) + 1;
}

