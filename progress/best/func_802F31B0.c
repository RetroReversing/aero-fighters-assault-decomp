s32 func_8021E708();
s32 func_8021E87C();
s32 func_8021EC9C();
s32 func_8022FF90();
s32 func_8023072C();
s32 func_8023413C();
s32 func_802344F4();
extern s32 D_80328768;
extern s32 D_8032876C;
extern char D_80328770[];
extern char D_80328774[];
extern char D_80328780[];
extern char D_80328784[];
void func_802F31B0(void *arg0)
{
  int __repair_constant = 0x457;
  volatile unsigned long long sp48;
  s32 sp44;
  s32 temp_v0;
  s32 temp_v0_2;
  func_802344F4(*((s32 *) (((char *) arg0) + 0xC)), 9, 0x13, 0xB, 1, 2, 0x7F, 0x4D, 0);
  func_802344F4(*((s32 *) (((char *) arg0) + 0x10)), 9, 0x13, 0xB, 1, 2, 0x97, 0x4D, 0);
  func_802344F4(*((s32 *) (((char *) arg0) + 0x14)), 9, 0x13, 0xB, 1, 2, 0xAF, 0x4D, 0);
  func_802344F4(*((s32 *) (((char *) arg0) + 0x18)), 9, 0x13, 0xB, 1, 2, 0x7F, 0xB5, 0);
  func_802344F4(*((s32 *) (((char *) arg0) + 0x1C)), 9, 0x13, 0xB, 1, 2, 0x97, 0xB5, 0);
  func_802344F4(*((s32 *) (((char *) arg0) + 0x20)), 9, 0x13, 0xB, 1, 2, 0xAF, 0xB5, 0);
  if ((*((s32 *) (((char *) arg0) + 0x90))) == 0x4E20)
  {
    func_802344F4(*((s32 *) (((char *) arg0) + 0x14)), 9, 0, 2, 0xAF, 0x4D, 0);
  }
  if ((*((s32 *) (((char *) arg0) + 0x8C))) == 0x2710)
  {
    func_802344F4(*((s32 *) (((char *) arg0) + 0x10)), 9, 0, 2, 0x97, 0x4D, 0);
  }
  if ((*((s32 *) (((char *) arg0) + 0x88))) == 0xC350)
  {
    func_802344F4(*((s32 *) (((char *) arg0) + 0xC)), 9, 0, 2, 0x7F, 0x4D, 0);
  }
  if ((*((s32 *) (((char *) arg0) + 0x6C))) == 0x4E20)
  {
    func_802344F4(*((s32 *) (((char *) arg0) + 0x20)), 9, 0, 2, 0xAF, 0xB5, 0);
  }
  if ((*((s32 *) (((char *) arg0) + 0x68))) == 0x2710)
  {
    func_802344F4(*((s32 *) (((char *) arg0) + 0x1C)), 9, 0, 2, 0x97, 0xB5, 0);
  }
  if ((*((s32 *) (((char *) arg0) + 0x64))) == 0xC350)
  {
    func_802344F4(*((s32 *) (((char *) arg0) + 0x18)), 9, 0, 2, 0x7F, 0xB5, 0);
  }
  func_8023413C(*((s32 *) (((char *) arg0) + 0xC)));
  func_8023413C(*((s32 *) (((char *) arg0) + 0x10)));
  func_8023413C(*((s32 *) (((char *) arg0) + 0x14)));
  func_8023413C(*((0, (s32 *) (((char *) arg0) + 0x18))));
  func_8023413C(*((s32 *) (((char *) arg0) + 0x1C)));
  func_8023413C(*((s32 *) (((char *) arg0) + 0x20)));
  D_80328768 += __repair_constant; temp_v0 = *((s32 *) (((char *) arg0) + 0xB4)); if (temp_v0 < D_80328768) {
    D_80328768 = temp_v0;
  }
  sp44 = 8 - (func_8022FF90(&sp48) % 8);
  func_8023072C(&sp48, D_80328770, D_80328768);
  func_8021E708(0xFF, 0xFF, 0xFF, 0xFF);
  func_8021E87C((sp44 * 8) + 0xC8, 0x59, &sp48);
  func_8021E708(0x58, 0x80, 0xF8, 0xFF);
  do
  {
    func_8021E87C(0x28, 0xC1, D_80328774);
  }
  while (0);
  D_8032876C += __repair_constant;
  temp_v0 = D_8032876C;
  temp_v0_2 = *((s32 *) (((char *) arg0) + 0x1D0));
  if ((temp_v0_2 < temp_v0) != 0)
  {
    D_8032876C = temp_v0_2;
    temp_v0 = temp_v0_2;
  }
  func_8023072C(&sp48, D_80328780, temp_v0);
  sp44 = 8 - (func_8022FF90(&sp48) % 8);
  func_8021E708(0x58, 0x80, 0xF8, 0xFF);
  func_8021E87C(0x28, 0x59, D_80328784);
  func_8021E708(0xFF, 0xFF, 0xFF, 0xFF);
  func_8021E87C((sp44 * 8) + 0xC8, 0xC1, &sp48);
  func_8021EC9C();
}
