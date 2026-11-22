s32 math_mtx4Identity();
s32 func_8022A0D0();
s32 func_802C49A0();
s32 func_802C578C();
s32 func_802C5798();
s32 func_802C57A4();
s32 func_802C57B0();
void func_8028BE1C(s32 arg0)
{
  char sp28[0x40];
  s32 temp_s0;
  int *__repair_home0 = &arg0;
  do
  {
    math_mtx4Identity(sp28);
  }
  while (0);
  func_8022A0D0(sp28);
  temp_s0 = (*__repair_home0) + 0x2B4;
  func_802C49A0(temp_s0, 0x31, sp28, 5);
  func_802C57B0(temp_s0, 0x44610000);
  func_802C578C(temp_s0, 0x43340000);
  func_802C5798(temp_s0, 0x42B40000);
  func_802C57A4((*__repair_home0) + 0x2B4, 0);
}

