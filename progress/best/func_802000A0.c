s32 func_802000DC(s32);
int func_802000A0(void)
{
  s32 temp_t6;
  s32 var_s0;
  var_s0 = 0;
  do
  {
    func_802000DC(var_s0 & 0xFFFF);
    temp_t6 = (var_s0 + 1) & (0xFFFF & 0xFFFFFFFFFFFFFFFF);
    var_s0 = temp_t6;
  }
  while (temp_t6 <= 0);
}

