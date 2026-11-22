s32 func_802452EC(void *);
s32 func_802456A0(void *);
s32 func_80245710(s32, s32, s32, s32 *);
s32 func_8023A5D0(void *arg0, s32 *arg1, s32 *arg2)
{
  char *__repair_addr;
  union 
  {
    unsigned char bytes[88];
    struct 
    {
      unsigned char pad[48];
      s32 value;
    } view_sp30;
    struct 
    {
      unsigned char pad[52];
      u16 value;
    } view_sp34;
  } m2c_initial_frame;
  s32 var_s2;
  register s32 temp_v0_2;
  s32 var_s0;
  s32 temp_v0;
  var_s2 = 0;
  if (!((*((s32 *) (((char *) arg0) + 0))) & 1))
  {
    return 5;
  }
  if (func_802452EC(arg0) == 2)
  {
    return 2;
  }
  if ((*((u8 *) (((char *) arg0) + 0x65))) != 0)
  {
    temp_v0_2 = func_802456A0(arg0);
    *((u8 *) (((char *) arg0) + 0x65)) = 0U;
    if (temp_v0_2)
    {
      return temp_v0_2;
    }
  }
  var_s0 = 0;
  if ((*((s32 *) (((char *) arg0) + 0x50))) > 0)
  {
    __repair_addr = (char *) (((char *) arg0) + 4);
    loop_8:
    temp_v0 = func_80245710(*((s32 *) __repair_addr), *((s32 *) (((char *) arg0) + 8)), ((*((s32 *) (((char *) arg0) + 0x5C))) + var_s0) & 0xFFFF, &m2c_initial_frame.view_sp30.value);

    if (temp_v0 != 0)
    {
      return temp_v0;
    }
    if ((m2c_initial_frame.view_sp34.value != ((m2c_initial_frame.view_sp30.value != 0) * 0)) && (m2c_initial_frame.view_sp30.value != 0))
    {
      ++var_s2;
    }
    do
    {
      var_s0 += 1;
    }
    while (0);
    if (var_s0 >= (*((s32 *) (((char *) arg0) + 0x50))))
    {
      goto block_15;
    }
    goto loop_8;
  }
  block_15:
  *arg2 = var_s2;

  *arg1 = *((s32 *) (((char *) arg0) + 0x50));
  return 0;
}

