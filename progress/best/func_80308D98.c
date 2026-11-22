s32 math_mtx4Identity(s32 *);
s32 func_8022A0D0(s32 *, s32, s32, s32);
s32 func_802C49A0(s32, s32, s32 *, s32);
s32 func_802C578C(s32, s32);
s32 func_802C5798(s32, s32);
s32 func_802C57A4(s32, s32);
s32 func_802C57CC(s32, s32);
void func_80308D98(s32 arg0)
{
  char sp28[0x40];
  int *__repair_home0 = &arg0;
  s32 temp_s0;
  math_mtx4Identity(sp28);
  func_8022A0D0(sp28, 0, 0x42200000, 0x41200000);
  temp_s0 = (*__repair_home0) + 0x2F0;
  func_802C49A0(temp_s0, 0x30, sp28, 5);
  func_802C578C(temp_s0, 0x43340000);
  func_802C5798(temp_s0, 0x42B40000);
  func_802C57A4((*__repair_home0) + 0x2F0, 0);
  func_802C57CC(temp_s0, 0x42700000);
}

