extern char D_8032AB23[];
u8 func_8030CEA8(u8 arg0)
{
  s32 temp_t6;
  if (1)
  {
  }
  temp_t6 = (unsigned long long) (arg0 & 0xFF);
  if (((temp_t6 - 1) > (0 - 1)) && (temp_t6 < 7))
  {
    return *(D_8032AB23 + temp_t6);
  }
  return 0x63 & 0xFF;
}

