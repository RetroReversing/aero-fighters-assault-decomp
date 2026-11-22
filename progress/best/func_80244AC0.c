typedef struct 
{
  unsigned char field_0;
  unsigned char field_1;
  unsigned char field_2;
  unsigned char field_3;
} __repair_record_var_v0;
s32 func_80244AC0(u8 *arg0, s32 arg1)
{
  s32 temp_a3;
  s32 var_a2;
  unsigned short var_v1;
  u8 *var_v0;
  var_v1 = 0;
  var_v0 = arg0;
  var_a2 = 0;
  if (arg1 > 0)
  {
    temp_a3 = arg1 & 3;
    if (temp_a3 != ((*var_v0) * 0))
    {
      __repair_rows:
      {
        var_a2 += 1;
        var_v1 = (((unsigned long long) var_v1) + (*var_v0)) & 0xFFFF;
        var_v0 += 1;
      }

      if ((temp_a3 ^ 0) != (var_a2 & 0xFFu))
      {
        goto __repair_rows;
      }
      if (var_a2 != arg1)
      {
        goto loop_4;
      }
    }
    else
    {
      do
      {
        loop_4:
        var_a2 += 4;

        var_v1 = ((((((var_v1 + ((__repair_record_var_v0 *) var_v0)->field_0) & 0xFFu) + ((__repair_record_var_v0 *) var_v0)->field_1) ^ 0) + ((__repair_record_var_v0 *) var_v0)->field_2) + ((__repair_record_var_v0 *) var_v0)->field_3) & 0xFFFF;
        var_v0 += 4;
      }
      while (var_a2 != arg1);
    }
  }
  return var_v1 & 0xFFFF;
}

