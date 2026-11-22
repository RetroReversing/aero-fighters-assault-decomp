s32 func_8021B240();
s32 func_8021B6D4();
s32 func_8021BA1C();
s32 func_8022A210();
s32 func_8029EFE0();
s32 func_8029F11C(s32, s32, s32, s32, s32, s32, f32);
s32 func_802AA8A4();
s32 func_802AAA18();
s32 func_802AFD80();
f32 func_80316B10();
extern s32 D_8032B734;
extern f32 D_8033F27C;
extern f32 D_8033F280;
s32 func_802927D8(void *arg0, f32 arg1, f32 arg2, s32 arg3)
{
  int __repair_constant = 4;
  s32 sp10C;
  s32 __repair_result_sp10C;
  char spC8[0x44];
  s32 sp80;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 var_fs2;
  volatile long temp_s7;
  s32 temp_v0;
  s32 var_s2;
  s32 var_s2_2;
  s32 var_s6;
  void *var_s0;
  void *var_s0_2;
  short pad;
  var_s6 = 0;
  sp10C = 0;
  var_s0 = arg0;
  var_s2 = 0;
  temp_s7 = (*((s32 *) (((char *) arg0) + 0xAC4))) & 0xFFFFFF;
  var_fs2 = 0.0f;
  __repair_rows:
  {
    {
      if (temp_s7 == (*((s32 *) (((char *) var_s0) + 0x2A4))))
      {
        var_s6 = 1; temp_fv0 = func_80316B10(arg0, 0x40A00000); temp_fv1 = *((f32 *) (((char *) var_s0) + 0x2B8)); var_fs2 = temp_fv0;
        if (temp_fv1 > 0.0f)
        {
          *((f32 *) (0x2B8 + ((char *) var_s0))) = (f32) (temp_fv1 - temp_fv0);
          do
          {
            if ((*((f32 *) (((char *) var_s0) + 0x2B8))) <= 0.f)
            {
              *((f32 *) (((char *) var_s0) + 0x2B8)) = 0.0f;
              func_802AFD80(D_8032B734, *((s32 *) (((char *) var_s0) + 0xAB0)), 1);
              func_8021B6D4(*((s32 *) (((char *) var_s0) + 0x2A4)), 0, spC8);
              temp_v0 = func_802AAA18(D_8032B734, spC8);
              if (temp_v0 != 0)
              {
                func_8029EFE0(temp_v0, 0x41F00000);
                func_8029F11C(temp_v0, 0x3F800000, 0x3F800000, 0x3F000000, (double) D_8033F27C, D_8033F280, 0.0f);
              }
              func_8021B240(*((s32 *) (((char *) var_s0) + 0x2A4)), 2, 2, 0);
              func_8021B240(*((s32 *) (((char *) var_s0) + 0x2A4)), 3, 1, 0 ^ 0);
            }
          }
          while (0);
        }
      }
      var_s2 += __repair_constant; var_s0 = ((unsigned char *) var_s0) + 4;
    }
  }

  if (var_s2 < 0x14)
  {
    goto __repair_rows;
  }
  var_s2_2 = 0;
  if (var_s6 == 0)
  {
    var_s0_2 = arg0;
    do
    {
      if (temp_s7 == (*((s32 *) (((char *) var_s0_2) + 0x28C))))
      {
        var_s6 = 1; temp_fv0_2 = func_80316B10(arg0, 0x40400000, arg2, arg1); temp_fv1_2 = *((f32 *) (((char *) var_s0_2) + 0x298)); var_fs2 = temp_fv0_2;
        if (temp_fv1_2 > 0.0f)
        {
          *((f32 *) (((char *) var_s0_2) + 0x298)) = (f32) (temp_fv1_2 - temp_fv0_2);
          if (((*((f32 *) (((char *) var_s0_2) + 0x298))) + 1) <= (0.0f + 1))
          {
            *((f32 *) (((char *) var_s0_2) + 0x298)) = 0.0f;
            func_8021B6D4(*((s32 *) (((char *) var_s0_2) + 0x28C)), 0, &sp80);
            func_8022A210(&sp80);
            func_802AA8A4(D_8032B734, &sp80);
            func_8021B240(*((s32 *) (((char *) var_s0_2) + 0x28C)), 2, 2, 0);
            func_8021B240(*((s32 *) (((char *) var_s0_2) + 0x28C)), 3, 1, ((*((s32 *) (((char *) arg0) + 0xAC4))) & 0xFFFFFF) * 0);
            goto dummy_label_218177;
            dummy_label_218177:
            ;

            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
          }
        }
      }
      var_s2_2 += __repair_constant; var_s0_2 = ((unsigned char *) var_s0_2) + 4;
    }
    while (var_s2_2 != 0xC);
  }
  if ((var_s6 == 0) && (temp_s7 == (*((s32 *) (((char *) arg0) + 4)))))
  {
    var_fs2 = func_80316B10(arg0, *((s32 *) (((char *) arg0) + 0x44)), arg2, arg1);
  }
  *((f32 *) (((char *) arg0) + 0x4C)) -= var_fs2;
  if ((*((f32 *) (((char *) arg0) + 0x4C))) < 2.0f)
  {
    *((f32 *) (((char *) arg0) + 0x4C)) = 2.0f;
    if ((*((u8 *) (((char *) arg0) + 0xE18))) != 2)
    {
      *((u8 *) (((char *) arg0) + 0xE18)) = 2U;
      *((f32 *) (((char *) arg0) + 0xACC)) = 0.0f;
      func_8021BA1C(*((s32 *) (((char *) arg0) + 0x284)), 2);
      *((s8 *) (((char *) arg0) + 0xE20)) = 1;
      __repair_result_sp10C = *((s32 *) (((char *) arg0) + 0));
      *((s32 *) (((char *) arg0) + 0)) = 0;
    }
  }
  return __repair_result_sp10C;
}

