s32 func_80228DE0();
s32 func_802297A8();
s32 func_80231A24();
extern s32 D_802508C0;
extern char D_80253E00[];
extern s32 D_80275E60;
extern u16 D_80280BE6;
void func_80228D0C(s32 arg0)
{
  s32 temp_a0;
  s32 temp_v0;
  temp_v0 = D_802508C0 + 1;
  D_802508C0 = temp_v0;
  if (temp_v0 >= ((s32) D_80280BE6))
  {
    func_80231A24(D_80253E00);
    return;
  }
  if (temp_v0 == 0)
  {
    func_80228DE0(D_80275E60 + ((temp_v0 << 4) << 2), arg0);
    return;
  }
  arg0 = D_80275E60 + ((temp_v0 << 5) << 1);
  func_802297A8(arg0, arg0 - 0x40);
}

