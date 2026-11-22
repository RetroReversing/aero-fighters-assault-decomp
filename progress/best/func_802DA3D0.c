s32 func_802141C8(f32, f32, s32, f32, f32, s32, f32, f32, f32, s32 *, f32 **, s32 *);
f32 func_802DA3D0(s32 arg0, f32 arg1, f32 arg2)
{
  f32 var_fv1;
  f32 sp34;
  long sp44;
  f32 *sp40;
  u32 sp3C;
  sp34 = 0.0f;
  var_fv1 = sp34;
  if (func_802141C8(arg1, arg2, 4, arg1, arg2, 0x43480000 & 0xFFu, arg1, arg2, 10.0f, &sp44, &sp40, &sp3C) != 0)
  {
    var_fv1 = (200.0f - ((*sp40) * ((0, 200.0f)))) + 3.5f;
  }
  return var_fv1;
}

