void func_802903BC(s32 arg0, s16 arg1, char arg2, unsigned short arg3)
{
  void *temp_v0;
  temp_v0 = arg0 + (arg1 * 0x3A);
  *((s16 *) (((char *) temp_v0) + 0x1A4)) = arg2;
  *((s16 *) (((char *) temp_v0) - (-0x1A6))) = arg3;
}

