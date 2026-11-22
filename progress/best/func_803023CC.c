s32 func_80301D60(s32, s32);
volatile unsigned char func_803023CC(s32 arg0)
{
  s32 temp_t6;
  s32 var_s0;
  var_s0 = 0;
  do
  {
    func_80301D60(arg0, var_s0);
    temp_t6 = (var_s0 + 1) & 0xFF;
    var_s0 = temp_t6;
  }
  while (temp_t6 < 0xFF);
}

