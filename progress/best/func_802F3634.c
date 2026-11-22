s32 func_8021E66C(s32);
s32 func_8021E708(s32, s32, s32, s32);
s32 func_8021E87C(s32, s32, s32 *);
s32 func_8021EC9C();
s32 func_8022FF90(s32 *);
s32 func_8023072C(s32 *, s32 *, s32);
extern s32 D_80328790;
void func_802F3634(s32 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
  register s32 var_v1;
  s32 temp_lo;
  register s32 var_a2;
  s32 sp20;
  func_8021E66C(7);
  func_8021E708(0xFF, 0xCA, 7, 0xFF);
  var_v1 = arg4;
  if (arg3 < var_v1)
  {
    var_v1 = arg3;
    if (1)
    {
    }
  }
  temp_lo = (0, var_v1 / arg5);
  var_a2 = temp_lo;
  if ((arg6 / arg5) < temp_lo)
  {
    var_a2 = arg3 / arg5;
  }
  func_8023072C(&sp20, &D_80328790, var_a2);
  func_8021E87C((((((arg1 & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) + (((6 - ((unsigned char) (func_8022FF90(&sp20) % 6))) & 0xFF) * 8), arg2 + 8, &sp20);
  func_8021EC9C();
}

