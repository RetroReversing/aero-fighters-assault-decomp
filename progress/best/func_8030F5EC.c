s32 func_802AA418(s32, void *, void *);
s32 func_802CD9F4(void *);
s32 func_802CE0A8(void *, void *);
s32 func_8030758C(void *);
s32 func_80307D8C(void *, s32);
s32 func_80307DC4(void *, s32);
s32 func_80307DDC(void *, s32, s32, s32, f32);
s32 func_8030F5EC(void *arg0)
{
  void *temp_s2;
  void *temp_s2_2;
  void *var_s0;
  var_s0 = ((unsigned char *) arg0) + 0x71C;
  if ((*((u8 *) (((char *) arg0) + 0x28))) != 0)
  {
    *((s8 *) (((char *) arg0) + 0x1528)) = 1;
    var_s0 = ((unsigned char *) arg0) + 0x71C;
    func_8030758C(var_s0);
    temp_s2 = ((unsigned char *) arg0) + 0x70;
    func_802CD9F4(temp_s2);
    func_802CE0A8(temp_s2, var_s0);
    func_802AA418(*((s32 *) (((char *) arg0) + 0x14)), temp_s2, var_s0);
    func_80307DDC(var_s0, 0, 0x457DA000, 0xC4258000, 0.0f);
    func_80307DC4(var_s0, 0);
  }
  else
  {
    func_8030758C(var_s0);
    temp_s2_2 = ((unsigned char *) arg0) + 0x70;
    func_802CD9F4(temp_s2_2);
    func_802CE0A8(temp_s2_2, var_s0);
    func_802AA418(*((s32 *) (((char *) arg0) + 0x14)), temp_s2_2, var_s0);
    func_80307DDC(var_s0, 0, 0x457DA000, 0xC4258000, 500.0f);
    func_80307DC4(var_s0, 0x43FA0000);
  }
  func_80307DDC(var_s0, 1, 0x45561000, 0xC3F28000, 0.0f);
  func_80307DDC(var_s0, 2, 0x45104000, 0xC3830000, 0.0f);
  func_80307DDC(var_s0, 3, 0x44C54000, 0xC3F90000, 0.0f);
  func_80307DDC(var_s0, 4, 0xC3160000, 0x439C8000, 0.0f);
  func_80307DDC(var_s0, 5, 0xC51ED000, ((((0x439C8000 & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu, 0.0f);
  func_80307D8C(var_s0, 0x42960000);
  return 1;
}

