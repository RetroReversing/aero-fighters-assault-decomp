s32 func_8030361C(void *arg0, u8 arg1)
{
  u8 temp_t6;
  u8 temp_t7;
  temp_t7 = *((u8 *) (((char *) arg0) + 4));
  temp_t6 = arg1 & 0xFF;
  *((u8 *) (((char *) arg0) + 4)) = temp_t6 & ((0, 0xFFu));
  return ((temp_t6 != (temp_t7 & 0xFFu)) & 0xFFFFFFFFFFFFFFFF) & 0xFF;
}

