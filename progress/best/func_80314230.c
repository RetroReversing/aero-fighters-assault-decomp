s32 func_802C490C(s32);
s32 func_802C676C(s32);
s32 func_80314230(s32 arg0)
{
  s32 temp_v0;
  s32 var_a0;
  if (1)
  {
    var_a0 = ((arg0 & 0xFFFFu) & 0xFFFFu) & 0xFFFFu;
    if ((var_a0 != 0) || ((temp_v0 = func_802C676C(0x1A0), var_a0 = temp_v0, temp_v0 != 0)))
    {
      arg0 = var_a0;
      func_802C490C(var_a0);
      var_a0 = arg0;
    }
  }
  return var_a0;
}

