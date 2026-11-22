s32 func_80225424(u8 *, s32 *, s32);
u8 *func_8022B948(s32, s32);
u8 *func_80225534(s32 arg0)
{
  u8 *temp_s3;
  volatile char sp3B;
  u8 *temp_s1;
  unsigned short var_s0;
  func_80225424(&sp3B, &arg0, 1);
  temp_s3 = func_8022B948(sp3B * 4, 4);
  if (((s32) sp3B) > 0)
  {
    var_s0 = 0;
    do
    {
      do
      {
        temp_s1 = (void *) ((unsigned long long) (((0, (var_s0 * 4) ^ 0)) + ((s32) temp_s3)));
        func_80225424(temp_s1, &arg0, 2);
        func_80225424(temp_s1 + 2, &arg0, 1);
        var_s0 += 1;
      }
      while (var_s0 < sp3B);
    }
    while (0);
  }
  temp_s1 = func_8022B948(0x44, 4);
  func_80225424(temp_s1, &arg0, 0x44);
  *((u8 *) (((char *) temp_s1) + 0x34)) = (s32) sp3B;
  *((s32 *) (((char *) temp_s1) + 0x38)) = 0;
  if (sp3B & ((((((0xFF & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF))
  {
    *((u8 **) (((char *) temp_s1) + 0x30)) = temp_s3;
    return temp_s1;
  }
  *((u8 **) (((char *) temp_s1) + 0x30)) = NULL;
  return temp_s1;
}

