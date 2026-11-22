s32 func_802456A0();
s32 func_80246660();
void func_8023A524(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int *__repair_home3 = &arg3;
  s32 var_s0;
  s32 var_s1;
  var_s0 = 0;
  *((s8 *) (((char *) arg0) + 0x65)) = *__repair_home3;
  if (func_802456A0() != 0)
  {
    return;
  }
  var_s1 = arg1 * 8;
 if (1) { } if (1) { } if (1) { } if (1) { }
  loop_3:
  var_s0 += 1;

  if (func_80246660(*((s32 *) (((char *) arg0) + 4)), *((s32 *) (((char *) arg0) + 8)), var_s1 & 0xFFFF, arg2, 0) == 0)
  {
    do
    {
      var_s1 += 1;
    }
    while (0);
    if (var_s0 != 8)
    {
      goto loop_3;
    }
  }
  func_802456A0(arg0);
  *((s8 *) (((char *) arg0) + 0x65)) = 0;
}
