s32 func_8021E66C();
s32 func_8021E708();
s32 func_8021E87C();
s32 func_8021EC9C();
s32 func_8021F35C();
s32 func_8021F4E4();
s32 func_8021FB54();
s32 func_8021FCD0();
s32 func_8022149C();
s32 func_80221B2C();
s32 func_80221F44();
s32 func_80222AE0();
s32 func_802230E4();
s32 func_8022331C();
s32 func_8022337C();
s32 func_802233EC();
s32 math_mtx4Identity();
s32 func_8022A848(void *, s32, s32, s32, f32);
s32 func_8023072C();
f32 func_802AED64();
s32 func_802CE2E0();
s32 func_802CEE34();
extern char D_803265B0[];
extern char D_803265B4[];
extern u8 D_8032AA80;
void func_802AC678(void *arg0, u8 arg1)
{
  s32 sp94;
  char sp48[0x4C];
  s32 sp34;
  s32 sp40;
  if (D_8032AA80 == 0xC)
  {
    s32 temp_a1;
    func_8022331C();
    func_8022A848(sp48, 0x41800000, 0x43980000, 0x41800000, 224.0f);
    func_80221B2C(sp48);
    math_mtx4Identity(sp48);
    func_8022149C(sp48);
    do
    {
      func_802233EC(0x04820000);
    }
    while (0);
    if (((*((s32 *) (((char *) arg0) + 0x32A4))) == 3) && ((*((u8 *) (((char *) arg0) + 0x35E0))) == 0))
    {
      func_8021E66C(7);
      func_8021E708(0, 0xFF, 0, 0x96);
      if ((*((u8 *) (((char *) arg0) + 0x4E38))) == 0)
      {
        if ((*((s32 *) (((char *) arg0) + 0x4C00))) & 4)
        {
          func_8023072C(&sp40, D_803265B0, (s32) (func_802AED64(arg0) - (*((f32 *) (((char *) arg0) + 0x32A8)))));
        }
        else
        {
          func_8023072C(&sp40, D_803265B4);
        }
        if (arg1 == 0)
        {
          sp94 = 0x1E;
          func_8021F4E4();
          func_8021F35C(0x89, 0x10, 0, 0, 0, 0, 0, 0, 0xFF);
          func_8021F35C(0xB7, 0x10, 0, 0, 0, 0, 0, 0, 0xFF);
          func_8021F35C(0xB7, 0x1E, 0, 0, 0, 0, 0, 0, 0xFF);
          func_8021F35C(0x89, 0x1E, 0, 0, 0, 0, 0, 0, 0xFF);
          func_8021FCD0();
          func_8021E87C(func_802CE2E0(&sp40, 0, 0x140), 0x72, &sp40);
        }
        else
        {
          sp94 = 0xE0;
          func_8021F4E4();
          func_8021F35C(0x89, 0xCC, 0, 0, 0, 0, 0, 0, 0xFF);
          func_8021F35C(0xB7, 0xCC, 0, 0, 0, 0, 0, 0, 0xFF);
          func_8021F35C(0xB7, 0xE0, 0, 0, 0, 0, 0, 0, 0xFF);
          func_8021F35C(0x89, 0xE0, 0, 0, 0, 0, 0, 0, 0xFF);
          func_8021FCD0();
          func_8021E87C(func_802CE2E0(&sp40, 0, 0x140), 0x72, &sp40);
        }
      }
      temp_a1 = sp94 + 8;
      if (arg1 != 0)
      {
        temp_a1 = sp94 - 8;
        sp34 = temp_a1;
        func_802CEE34(0, temp_a1, 0x89, sp94, 0, 0, 0, 0xFF);
        func_802CEE34(0xB7, temp_a1, 0x140, sp94, 0, 0, 0, 0xFF);
        func_80222AE0(0, 0x140, 0, 0xF0);
        func_80221F44(0, 0, 0, 0x437F0000);
        func_8021FB54(0, 0, 0x10, 0xF0);
        func_8021FB54(0x12F, 0, 0x140, 0xF0);
        func_8021FB54(0, 0xE2, 0x140, 0xF0);
      }
      else
      {
        sp34 = temp_a1;
        func_802CEE34(0, temp_a1, 0x89, sp94, 0, 0, 0, 0xFF);
        func_802CEE34(0xB7, temp_a1, 0x140, sp94, 0, 0, 0, 0xFF);
      }
      func_8021EC9C();
    }
    func_802230E4();
    func_8022337C();
    return;
  }
  func_80222AE0(0, 0x140, 0, 0xF0);
  func_80221F44(0, 0, 0, 0x437F0000);
  func_8021FB54(0, 0, 0x10, 0xF0);
  func_8021FB54(0, 0, 0x140, 0xF);
  func_8021FB54(0x12F, 0, 0x140, 0xF0);
  func_8021FB54(0, 0xE2, 0x140, 0xF0);
}

