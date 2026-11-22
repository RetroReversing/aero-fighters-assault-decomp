void func_802D2968(void *arg0, u8 arg1)
{
  *((s8 *) (((char *) arg0) + 0xC9)) = arg1 & 0xFFFFu;
  if (arg1 & 0xFF)
  {
    if (1)
    {
      *((s16 *) (((char *) arg0) + 0xC4)) = 0;
    }
  }
}

