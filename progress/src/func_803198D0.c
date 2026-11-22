f32 func_80318490(void *, s32);
extern s32 D_8032B734;
extern f32 D_80347620;
s32 func_803198D0(void *arg0)
{
  f32 temp_fv0;
  f32 var_fs0;
  s32 temp_a1;
  s32 var_s0;
  s32 var_s3;
  var_s3 = 0;
  var_fs0 = D_80347620;
 var_s0 = 0; do {
    temp_a1 = *((s32 *) (((char *) (D_8032B734 + var_s0)) + 0x7050));
    if (temp_a1 != 0)
    {
      temp_fv0 = func_80318490(arg0, temp_a1);
      if (temp_fv0 < var_fs0)
      {
        var_fs0 = temp_fv0;
        var_s3 = *((s32 *) (((char *) (D_8032B734 + var_s0)) + 0x7050));
      }
    }
    var_s0 += 4;
  }
  while (var_s0 != 0xA0);
  if (var_s3 != 0)
  {
    *((s8 *) (((char *) arg0) + 0xEC)) = 0;
    if (0 ^ 0)
    {
    }
  }
  return var_s3;
}
