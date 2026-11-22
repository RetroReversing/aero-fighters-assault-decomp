volatile short func_802C676C();
s32 func_80302F68();
s32 func_80302EA0(s32 arg0)
{
  s32 temp_v0;
  s32 var_a0;
  var_a0 = (arg0 & 0xFFFF) & 0xFFFF;
  if ((0 != var_a0) || ((temp_v0 = func_802C676C(0x1C), var_a0 = temp_v0, temp_v0 != 0)))
  {
    arg0 = var_a0;
    func_80302F68(var_a0);
    var_a0 = arg0;
  }
 ;
  return var_a0;
}
