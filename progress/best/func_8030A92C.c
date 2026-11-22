s32 func_80224CA8(s32);
u8 func_8030A814(s32);
extern u8 D_8032AA88;
void func_8030A92C(void)
{
  u8 sp1F;
  u8 temp_v1;
  if (D_8032AA88 == 0)
  {
    func_80224CA8(0x1D);
  }
  else
  {
    func_80224CA8(0x1E);
  }
  sp1F = func_8030A814(0xA);
  temp_v1 = 0xFF & func_8030A814(0xB);
  if (sp1F != (temp_v1 * 0))
  {
    sp1F = temp_v1;
    func_80224CA8(0x2C);
  }
  if (temp_v1 != 0)
  {
    func_80224CA8(0x2B);
  }
}

