s32 func_802456A0();
s32 func_80245710(s32, s32, s32, s32 *);
s32 func_802452EC(void *arg0)
{
  int sp4C;
  unsigned long long sp2C;
  s32 *var_v0;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  u8 temp_t4;
  void *var_v1;
  if ((*((u8 *) (((char *) arg0) + 0x65))) != 0)
  {
    *((u8 *) (((char *) arg0) + 0x65)) = 0U;
    temp_v0_3 = func_802456A0();
    if (temp_v0_3 != 0)
    {
      return temp_v0_3;
    }
  }
  temp_v0_2 = func_80245710(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), 1, &sp2C);
  switch (temp_v0_2)
  {
    case 0:
      var_v1 = arg0;
      goto block_9;

  default:
      return temp_v0_2;

    case 2:
      temp_v0 = func_80245710(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), 1, &sp2C);
      var_v1 = arg0;
      if (temp_v0 != 0)
    {
      return temp_v0;
    }
      block_9:
    var_v0 = &sp2C;

      loop_10:
    if ((*((u8 *) (((char *) var_v1) - -0xC))) != (*((u8 *) (((char *) var_v0) + 0))))
    {
      return 2;
    }

      if ((*((u8 *) (((char *) var_v1) + 0xD))) != (*((u8 *) (((char *) var_v0) + 1))))
    {
      return 2;
    }
      if ((*((u8 *) (((char *) var_v1) + 0xE))) != (*((u8 *) (((char *) var_v0) + 2))))
    {
      return 2;
    }
      temp_t4 = *((u8 *) (((char *) var_v0) + 3));
 goto dummy_label_485714; dummy_label_485714: ;
      var_v0 += 1;
      if ((*((u8 *) (((char *) var_v1) + 0xF))) != temp_t4)
    {
      return 2;

    }
      var_v1 = ((unsigned char *) var_v1) + 4;
      if (var_v0 == (&sp4C))
    {
      return 0;
    }
      goto loop_10;

    }

}
