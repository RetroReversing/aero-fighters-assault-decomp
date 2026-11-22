s32 func_80244B3C(void *arg0, u16 *arg1, u16 *arg2)
{
  s32 var_v1;
  char *var_a3;
  char *var_t1;
  char *var_t2;
  char *var_t3;
  u16 temp_v0;
  u16 temp_v0_2;
  u16 temp_v0_3;
  u16 temp_v0_4;
  u16 temp_v0_5;
  *arg2 = 0;
  *arg1 = 0;
  temp_v0 = *((u16 *) (((char *) arg0) + 0));
  *arg1 = temp_v0;
  *arg2 += ~temp_v0;
  temp_v0 = *((u16 *) (((char *) arg0) + 2));
  *arg1 += temp_v0 & 0xFFu;
  *arg2 += ~temp_v0;
  var_a3 = ((unsigned char *) arg0) + 4;
  var_t1 = var_a3 + 2;
  var_v1 = 4;
  var_t2 = var_a3 + 4;
  var_t3 = var_a3 + 6;
  do
  {
    temp_v0_3 = *((u16 *) var_a3);
    *arg1 += temp_v0_3;
    var_v1 += 8;
    *arg2 += ~temp_v0_3;
    do
    {
      temp_v0_4 = *((u16 *) var_t1);
    }
    while (0 != 0);
    var_a3 += 8;
    *arg1 += temp_v0_4;
    *arg2 += ~temp_v0_4;
    var_t1 += 8;
    *arg1 += (temp_v0_5 = *((u16 *) var_t2));
    *arg2 += ~temp_v0_5;
    temp_v0_4 = *((u16 *) var_t3);
    var_t2 += 8;
    *arg1 += temp_v0_4;
    *arg2 += ~temp_v0_4;
    var_t3 += 8;
  }
  while (var_v1 != 0x1C);
  return 0;
}

