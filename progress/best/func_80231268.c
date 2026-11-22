s32 func_8021F35C();
s32 func_8021F4E4();
s32 func_8021FCD0();
s32 func_8022149C();
s32 func_80221B2C();
s32 func_802230E4();
s32 func_8022331C();
s32 func_8022337C();
s32 func_802233EC();
s32 func_8022342C();
s32 func_8022970C();
s32 func_8022A848(s32, s32, s32, s32, f32);
extern s32 D_80280C8C;
void func_80231268(void)
{
  register s16 spBA;
  unsigned short var_fp;
  s32 temp_s6;
  s16 temp_s4;
  long temp_s5_2;
  s16 temp_s3;
  long temp_s7;
  s32 temp_s5;
  char sp74[0x46];
  s32 var_s7;
  unsigned var_s6;
  func_8022331C();
  func_802233EC(0xFFF);
  func_8022342C(0xB00000);
  func_8022A848(sp74, 0, 0x43A00000, 0, 240.0f);
  func_80221B2C(sp74);
  func_8022970C(sp74);
  func_8022149C(sp74);
  func_8021F4E4();
  func_8021F35C(0xF, 0xF, 0, 0, 0, 0, 0x80, 0, 0xFF);
  func_8021F35C(0x50, 0xF, 0, 0, 0, 0, 0x80, 0, 0xFF);
  func_8021F35C(0x50, 0x8C, 0, 0, 0, 0, 0x80, 0, 0xFF);
  func_8021F35C(0xF, 0x8C, 0, 0, 0, 0, 0x80, 0, 0xFF);
  func_8021FCD0();
  spBA = 0;
  do
  {
    temp_s5 = 0x1F - spBA;
    var_s6 = 0;
    if ((1 << temp_s5) & D_80280C8C)
    {
      var_s6 = 0xFF;
      var_s7 = 0xFF;
      var_fp = 0xFF;
    }
    else
    {
      var_s7 = 0;
      var_fp = 0;
    }
    func_8021F4E4();
    temp_s3 = ((spBA % 4) * 0xF) + 0x14;
    do
    {
      do
      {
        do
        {
          temp_s4 = ((temp_s5 / 4) * 0xF) + 0x14;
        }
        while (0);
      }
      while (0);
    }
    while (0);
    func_8021F35C(temp_s3, temp_s4, 0, 0, 0, var_fp, var_s7, var_s6, 0xFF);
    temp_s6 = temp_s3 + 0xA;
    func_8021F35C(temp_s6, temp_s4, 0, 0, 0, var_fp, var_s7, var_s6, 0xFF);
    temp_s5_2 = temp_s4 + 0xA;
    func_8021F35C(((spBA % 4) * 0xF) + 0x14, temp_s5_2, 0, 0, 0, var_fp, var_s7, var_s6, 0xFF);
    func_8021F35C(temp_s6, temp_s5_2, 0, 0, 0, var_fp, var_s7, var_s6, 0xFF);
    func_8021FCD0();
    temp_s7 = spBA + 1;
    spBA = temp_s7;
  }
  while (0x20 > temp_s7);
  func_802230E4();
  func_8022337C();
}

