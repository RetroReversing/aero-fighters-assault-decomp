s32 func_80201A18(u8, f32, void *);
s32 func_80301E20();
extern f32 D_80345814;
void func_80302860(s32 arg0, void *arg1, f32 arg2)
{
  f32 var_fv0;
  f32 var_fv1;
  void *temp_v0;
  if (func_80301E20() != 0)
  {
    temp_v0 = arg0 + (((*((u8 *) (((char *) arg1) + 4))) << 4) << 1);
    var_fv1 = D_80345814;
    var_fv0 = (*((f32 *) (((char *) temp_v0) + 0xC))) * arg2;
    if (var_fv0 < var_fv1)
    {
      var_fv0 = var_fv1;
    }
    else
    {
      var_fv1 = 2.0f;
      if (var_fv0 > 2.0f)
      {
        var_fv0 = var_fv1;
      }
    }
    *((f32 *) (((char *) temp_v0) + 0xC)) = var_fv0;
    func_80201A18(*((u8 *) (((char *) arg1) + 4)), var_fv0, arg1);
  }
}

