s32 func_80302908(s32, s32, s32, s32);
extern s32 D_8032AA74;
s32 func_802E84A0(void *arg0)
{
  s32 temp_v0;
  s32 sp1C;
  s32 temp_a1;
  s32 __repair_result_temp_a1;
  s32 temp_a1_2;
  if ((*((u8 *) (((char *) arg0) + 0x968))) != 0)
  {
    __repair_result_temp_a1 = *((s32 *) (((char *) arg0) + 0x944));
    temp_v0 = D_8032AA74;
    if (__repair_result_temp_a1 != 0xFF)
    {
      sp1C = temp_v0;
      func_80302908(temp_v0 + 0x8F4, __repair_result_temp_a1, 0x3D4CCCCD, 0x3F800000);
    }
    temp_a1 = *((s32 *) (((char *) arg0) + 0x948));
    if (temp_a1 != 0xFF)
    {
      func_80302908(temp_v0 + 0x8F4, temp_a1, 0x3D4CCCCD, 0x3F800000);
    }
    return 1;
  }
  return 0;
}

