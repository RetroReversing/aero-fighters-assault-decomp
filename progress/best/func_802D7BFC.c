s32 func_802D7BFC(void *arg0, s32 arg1, f32 arg2)
{
  s32 var_v1;
  var_v1 = 1;
  *((f32 *) (((char *) arg0) + 0x64)) = (f32) ((*((f32 *) (((char *) arg0) + 0x64))) + arg2);
  if ((*((u8 *) (((char *) arg0) + 0x58))) != 0)
  {
    if ((*((f32 *) (((char *) arg0) + 0x5C))) <= (*((f32 *) (((char *) arg0) + 0x64))))
    {
      do
      {
        *((u8 *) (((char *) arg0) + 0x58)) = 0U;
        *((f32 *) (((char *) arg0) + 0x64)) = 0.0f;
        return 1;
      }
      while (0);
    }
    return var_v1 & 0xFFFFFFFF;
  }
  if ((*((f32 *) (((char *) arg0) + 0x60))) <= (*((f32 *) (((char *) arg0) + 0x64))))
  {
    return 0;
  }
  return var_v1 & 0xFFFFFFFF;
}

