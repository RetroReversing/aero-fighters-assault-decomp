s32 func_8020178C(u8, f32, void *);
s32 func_80301E20();
void func_803027C4(s32 arg0, void *arg1, f32 arg2)
{
  f32 var_fv0;
  f32 var_fv1;
  void *temp_v0;
  if (func_80301E20() != 0)
  {
    temp_v0 = arg0 + (((*((u8 *) (((char *) arg1) + 4))) << 3) << 2);
    var_fv1 = 0.0f;
    var_fv0 = (*((f32 *) (((char *) temp_v0) + 0x10))) * arg2;
    if (var_fv0 < 0.0f)
    {
      var_fv0 = var_fv1;
    }
    else
    {
      var_fv1 = 1.0f;
      if (var_fv0 > 1.0f)
      {
        var_fv0 = var_fv1;
      }
    }
    *((f32 *) (((char *) temp_v0) + 0x10)) = var_fv0;
    func_8020178C(*((u8 *) (((char *) arg1) + 4)), var_fv0, arg1);
  }
}

