void func_802D508C(void *arg0, u8 arg1)
{
  *((s8 *) (((char *) arg0) + 0x198)) = arg1;
  if ((arg1 & 0xFF) & 0xFFFF)
  {
    *((s8 *) (((char *) arg0) + 0x195)) = 0;
  }
}

