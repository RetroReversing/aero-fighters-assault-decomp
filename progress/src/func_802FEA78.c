s32 func_80317D90(s32);
s32 func_80318E74(s32, s32);
void func_802FEA78(s32 arg0)
{
  int __repair_constant = 0x68C;
  s32 var_s0;
  s32 var_s0_3;
  s32 var_s1;
  s32 var_s1_2;
  s32 var_s1_3;
  var_s0 = 0;
  var_s1 = arg0 + 0x5FF8;
  do
  {
    if (func_80317D90(var_s1) != 0)
    {
      func_80318E74(var_s1, 3);
    }
    var_s0 += __repair_constant;
    var_s1 += __repair_constant;
  }
  while (var_s0 < 0x3AEC);
  var_s0 = 0;
  var_s1_2 = arg0 + 0x17F4;
  do
  {
    if (func_80317D90(var_s1_2) != 0)
    {
      func_80318E74(var_s1_2, 3);
    }
    var_s0 += __repair_constant;
    var_s1_2 += __repair_constant;
  }
  while (var_s0 < 0x4804);
  var_s0_3 = arg0 + 0x414;
 var_s1_3 = 0; do {
    if (func_80317D90(var_s0_3) != 0)
    {
      func_80318E74(var_s0_3, 3);
    }
    var_s1_3 += 0x6A0;
    var_s0_3 += 0x6A0;
  }
  while (var_s1_3 != 0x13E0);
}
