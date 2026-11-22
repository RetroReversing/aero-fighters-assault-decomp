s32 func_80289BDC(s32, s32);
s32 func_80289DF8(s32, f32, s32, s32, f32, f32, f32);
s32 func_802AA9B0(s32, s32 *);
f32 func_80316B10(void *, s32, s32, s32, s32, s32);
s32 math_mtx4Identity(s32 *);
extern s32 D_8032B734;
extern f32 D_80341128;
extern f32 D_8034112C;
extern f32 D_80341130;
s32 func_802B21E0(void *arg0, f32 arg1, f32 arg2, unsigned long long arg3)
{
  f32 *__base_D_80341128;
  s32 sp70;
  f32 sp68;
  s32 temp_v0;
  s32 var_v0;
  void *var_v1;
  *((f32 *) (((char *) arg0) + 0x4C)) = (f32) ((*((f32 *) (((char *) arg0) + 0x4C))) - func_80316B10(arg0, arg2, arg1, *((s32 *) (((char *) arg0) + 0x44)), arg2, arg1));
  if ((*((f32 *) (((char *) arg0) + 0x4C))) < 2.0f)
  {
    *((f32 *) (((char *) arg0) + 0x4C)) = 2.0f;
    var_v0 = 0;
    if ((*((u8 *) (((char *) arg0) + 0x555))) == 0)
    {
      char sp30[0x38];
      *((u8 *) (((char *) arg0) + 0x555)) = 1U;
      *((s8 *) (((char *) arg0) + 0x554)) = 0;
      var_v1 = arg0;
      *((f32 *) (((char *) arg0) + 0x548)) = 0.0f;
      do
      {
        var_v0 += 1;
        *((s32 *) (((char *) var_v1) + 0x54C)) = 0;
        var_v1 = ((unsigned char *) var_v1) + 4;
      }
      while (var_v0 != 2);
      math_mtx4Identity(sp30);
      sp68 = 0.0f;
      temp_v0 = func_802AA9B0(D_8032B734, sp30);
      sp70 = temp_v0;
      func_80289BDC(temp_v0 ^ 0, 0x41F00000);
      __base_D_80341128 = &D_80341128;
      func_80289DF8(temp_v0, *__base_D_80341128, 0x3ECCCCCD, 0, *__base_D_80341128, D_8034112C, D_80341130);
    }
  }
  return 0;
}

