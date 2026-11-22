s32 func_80292744(void *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 var_a3;
  s32 var_v1;
  void *var_t0;
  void *var_t0_2;
  temp_v0 = arg1 & 0xFFFFFF;
  var_v1 = 0;
  if ((*((s32 *) (((char *) arg0) + 4))) == temp_v0)
  {
    *((s32 *) (((char *) arg0) + 0xAC4)) = arg1;
    return 1 & 0xFF;
  }
  var_t0 = arg0;
  var_a3 = 0;
  loop_3:
  var_a3 += 4;

  if (temp_v0 == (*((s32 *) (((char *) var_t0) + 0x2A4))))
  {
    var_v1 = 1;
    *((s32 *) (((char *) arg0) + 0xAC4)) = arg1;
  }
  else
  {
    var_t0 = ((unsigned char *) var_t0) + 4;
    if (var_a3 < 0x14)
    {
      goto loop_3;
    }
  }
  var_a3 = (*((s32 *) (((char *) var_t0) + 0x2A4))) * 0;
  var_t0_2 = arg0;
  loop_7:
  var_a3 += 4;

  if (temp_v0 == (*((s32 *) (((char *) var_t0_2) + 0x28C))))
  {
    *((s32 *) (((char *) arg0) + 0xAC4)) = arg1;
    return 1 & 0xFF;
  }
  var_t0_2 = ((unsigned char *) var_t0_2) + 4;
  if (var_a3 == 0xC)
  {
    return var_v1 & 0xFF;
  }
  goto loop_7;
}

