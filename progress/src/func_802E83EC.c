s32 func_802E830C();
s32 func_80302908(s32, s32, s32, s32);
extern s32 D_8032AA74;
s32 func_802E83EC(void *arg0)
{
  
  s32 sp24;
  s32 temp_a1;
  s32 temp_a1_3;
  do
  {
    if ((*((u8 *) (((char *) arg0) + 0x968))) != ((*((s32 *) (((char *) arg0) + 0x948))) * 0))
    {
      sp24 = D_8032AA74;
      func_802E830C();
      temp_a1 = *((s32 *) (((char *) arg0) + 0x944));
      if (temp_a1 != 0xFF)
      {
        func_80302908(sp24 + 0x8F4, temp_a1, 0x3D4CCCCD, 0x3F800000);
      }
      temp_a1 = *((s32 *) (((char *) arg0) + 0x948));
      if (temp_a1 != 0xFF)
      {
        func_80302908(sp24 + 0x8F4, temp_a1, 0x3D4CCCCD, 0x3F800000);
      }
      temp_a1_3 = *((s32 *) (((char *) arg0) + 0x94C));
      if (temp_a1_3 != 0xFF)
      {
        func_80302908(sp24 + 0x8F4, temp_a1_3, 0x3D4CCCCD, 0x3F800000);
      }
      return 1;
    }
    return 0;
  }
  while (0);
}

