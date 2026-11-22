extern f32 D_8032BCD4;
s32 func_8031A38C(void *arg0, u8 arg1)
{
  f32 temp_fa0;
  f32 temp_fv1;
  int temp_v0;
  if (arg1 & 0xFF)
  {
    *((f32 *) (((char *) arg0) + 0x60)) = (f32) (D_8032BCD4 - (*((f32 *) (((char *) arg0) + 0x5C))));
  }
  else
  {
    *((f32 *) (((char *) arg0) + 0x5C)) = (f32) (D_8032BCD4 - (*((f32 *) (((char *) arg0) + 0x60))));
  }
  if ((*((f32 *) (((char *) arg0) + 0x5C))) < 0.0f)
  {
    *((s16 *) (((char *) arg0) + 0x68)) = -2;
    return 0;
  }
  temp_fv1 = *((f32 *) (((char *) arg0) + 0x64));
  if (temp_fv1 < (*((f32 *) (((char *) arg0) + 0x5C))))
  {
    *((s16 *) (((char *) arg0) + 0x68)) = -1;
    return 0;
  }
  temp_v0 = *((s16 *) (((char *) arg0) + 0x68));
  if (temp_v0 == 2)
  {
    temp_fa0 = ((*((f32 *) (((char *) arg0) + 0x5C))) + 1.0f) - temp_fv1;
    if ((temp_fa0 > 0.0f) && ((*((u8 *) (((char *) arg0) + 0x74))) != 0))
    {
      *((s16 *) (((char *) arg0) + 0x72)) = (s16) ((s32) (((0, 254.0f)) * (1.0f - temp_fa0)));
      goto __shared_return_1;
    }
    *((s16 *) (((char *) arg0) + 0x72)) = 0xFF;
    __shared_return_1:
    return 1;

  }
  if ((*((s16 *) (((char *) arg0) + 0x68))) != 1)
  {
    *((s16 *) (((char *) arg0) + 0x68)) = 1;
    return 1;
  }
  else
  {
    *((s16 *) (((char *) arg0) + 0x68)) = 2;
  }
  return 1;
}

