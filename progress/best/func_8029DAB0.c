/* Draft from identical target func_80308B40, retargeted and judged independently. */
s32 func_802C676C(s32);
s32 func_8031C778(s32);
s32 func_8029DAB0(s32 arg0)
{
int *__repair_home0 = &arg0;

  s32 temp_v0;
  s32 var_a0;
  if (1)
  {
    var_a0 = (*__repair_home0);
    if ((var_a0 != 0) || ((temp_v0 = func_802C676C(0xF4), var_a0 = temp_v0, temp_v0 != 0)))
    {
      (*__repair_home0) = var_a0;
      func_8031C778(var_a0);
      var_a0 = (*__repair_home0);
    }
  }
  return var_a0;
}

