s32 func_8023EDC0();
s32 osContGetReadData();
s32 osRecvMesg();
extern s32 D_80278740;
extern char D_80280C58[];
extern char D_80280CE0[];
s32 func_80231848(void *arg0, s32 arg1)
{
  s32 sp34;
  f32 var_fv0;
  f32 var_fv1;
  s32 temp_t8;
  s8 var_v0;
  s8 var_v1;
  void *temp_a0;
  if (D_80278740 != 0)
  {
    return 0;
  }
  if (func_8023EDC0(D_80280C58) & (~4))
  {
    temp_t8 = (*((s32 *) (((char *) arg0) + 0x10))) & 0xFFFFFFFFFFFFFFFFu;
    *((s32 *) (((char *) arg0) + 0x10)) = 0;
    *((f32 *) (((char *) arg0) + 4)) = 0.0f;
    *((f32 *) (((char *) arg0) + 8)) = 0.0f;
    *((s32 *) (((char *) arg0) + 0x14)) = temp_t8;
    return 0;
  }
  osRecvMesg(D_80280C58, &sp34, 1, arg0);
  osContGetReadData(D_80280CE0);
  temp_a0 = (arg1 * 6) + D_80280CE0;
  if (0)
  {
  }
  var_v0 = *((s8 *) (((char *) temp_a0) + 2));
  var_v1 = *((s8 *) (((char *) temp_a0) + 3));
  if (var_v0 < 0)
  {
    if (var_v0 < (-0x44))
    {
      var_v0 = -0x44;
    }
    else
      if (var_v0 >= (-6))
    {
      var_v0 = -7;
    }
    var_fv1 = ((f32) (var_v0 + 7)) / 61.0f;
  }
  else
  {
    if (var_v0 >= 0x45)
    {
      var_v0 = 0x44;
    }
    else
      if (var_v0 < 7)
    {
      var_v0 = 7;
    }
    var_fv1 = ((f32) (var_v0 - 7)) / 61.0f;
  }
  if (var_v1 < 0)
  {
    if (var_v1 < (-0x46))
    {
      var_v1 = -0x46;
    }
    else
      if (var_v1 >= (-6))
    {
      var_v1 = -7;
    }
    var_fv0 = ((f32) (var_v1 + 7)) / 63.0f;
  }
  else
  {
    if (var_v1 >= 0x47)
    {
      var_v1 = 0x46;
    }
    else
      if (var_v1 < 7)
    {
      var_v1 = 7;
    }
    var_fv0 = ((f32) (var_v1 - 7)) / 63.0f;
  }
  *((f32 *) (((char *) arg0) + 4)) = var_fv1;
  *((f32 *) (((char *) arg0) + 8)) = var_fv0;
  *((s32 *) (((char *) arg0) + 0x14)) = (s32) (*((s32 *) (((char *) arg0) + 0x10)));
  *((s32 *) (((char *) arg0) + 0x10)) = (s32) (*((u16 *) (((char *) temp_a0) + 0)));
  return 1;
}

