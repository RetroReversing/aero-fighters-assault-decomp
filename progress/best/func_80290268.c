u8 func_80290268(s32 arg0, s16 arg1)
{
  arg0 &= 0xFFFFFFFFFFFFFFFF;
  return *((u8 *) (((char *) ((arg0 ^ 0) + (arg1 * 0x3A))) + 0x1DB));
}

