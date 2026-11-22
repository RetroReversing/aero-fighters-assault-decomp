s32 func_8022B7B4(u8 *arg0, u8 *arg1, u32 arg2)
{
  u32 var_v0;
  u8 *var_a3;
  u8 *var_v1;
  u8 temp_a0;
  u8 temp_a1;
  if (arg2 != 0)
  {
    var_v0 = 0;
    var_v1 = arg0;
    var_a3 = arg1;
    loop_2:
    temp_a0 = *var_v1;

    temp_a1 = *var_a3;
    var_v0 += 1;
 do { var_v1 += 1; if (temp_a0 != temp_a1) { if (((s32) temp_a0) < ((s32) temp_a1)) { return -1; } return 1; } var_a3 += 1; if (var_v0 >= arg2) { return 0; } } while (0);
    goto loop_2;
  }
  return 0;
}
