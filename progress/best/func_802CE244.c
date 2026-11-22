f32 func_80316B10(void *, f32, f32, s32);
extern f32 D_80342A0C;
s32 func_802CE244(void *arg0, f32 arg1, f32 arg2, s32 arg3)
{
  f32 temp_fa0;
  f32 temp_fa1;
  f32 temp_fv0;
  f32 var_fv1;
  temp_fv0 = func_80316B10(arg0, arg2, arg1, *((s32 *) (((char *) arg0) + 0x44)));
  temp_fa0 = *((f32 *) (((char *) arg0) + 0x4C));
  temp_fa1 = temp_fa0 * D_80342A0C;
 if (1) { } if (1) { } if (1) { }
  var_fv1 = temp_fv0;
  if (temp_fa1 < temp_fv0)
  {
    var_fv1 = temp_fa1;
  }
  *((f32 *) (((char *) arg0) + 0x4C)) = (f32) ((*((f32 *) (((char *) arg0) + 0x4C))) - var_fv1);
  if ((*((f32 *) (((char *) arg0) + 0x4C))) < 5.0f)
  {
    *((f32 *) (((char *) arg0) + 0x4C)) = 5.0f;
  }
  return 0;
}
