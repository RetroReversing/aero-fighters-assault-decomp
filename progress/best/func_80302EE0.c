s32 func_802C676C(s32);
s32 func_80302F68(s32, s32);
s32 func_80302EE0(s32 arg0, s32 arg1)
{
  s32 temp_v0;
  s32 var_a0;
 do { var_a0 = (((arg0 & 0xFF) & 0xFF) & 0xFF) & 0xFF; if ((var_a0 != 0) || ((temp_v0 = func_802C676C(0x1C), var_a0 = temp_v0, temp_v0 != 0))) { arg0 = var_a0; func_80302F68(var_a0, arg1); var_a0 = arg0; } } while (0);
  return var_a0;
}
