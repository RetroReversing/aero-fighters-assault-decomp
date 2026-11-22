s32 func_802306D0(u16 arg0)
{
  s32 temp_t6;
  temp_t6 = (arg0 & 0xFFFF) & 0xFFFFFFFFFFFFFFFF;
  if (temp_t6 < 0xA)
  {
    return (temp_t6 + 0x30) & 0xFF;
  }
  return 0x20;
}

