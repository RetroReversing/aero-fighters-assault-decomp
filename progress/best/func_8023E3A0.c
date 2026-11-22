s32 __ll_mul(u32, s32);
volatile long long __ull_div(s32, u32, s32, s32);
s32 func_8023E640(s32, u32 *);
s32 func_80248010(s32);
s32 func_80248020();
s32 func_80248030(s32);
s32 func_80248040(s32, s32 *);
s32 func_80248090(char, s32);
s32 func_802480E0(int, s32);
s32 func_80248160();
s32 func_802481C0(s32 *, s32);
s32 func_80248260(s32, s32 *);
s32 osWritebackDCache(s32, s32);
extern s32 D_80000000;
extern s32 D_8000030C;
extern s32 D_8000031C;
extern u32 D_80251680;
extern s32 D_80251684;
extern s32 D_80251690;
extern s32 D_80284C90;
extern s32 D_A4600010;
extern s32 D_A5000508;
extern s32 func_802417E0;
extern s32 func_802482B0;
void func_8023E3A0(void)
{
  s32 *__base_D_80251690;
  u32 sp38;
  s32 sp30[2];
  s32 sp3C;
  s32 sp20[2];
  s32 temp_ret;
  u32 temp_ret_2;
  u32 temp_t9;
  u32 *__base_D_80251680;
  s32 *__base_D_A4600010;
  __base_D_A4600010 = &D_A4600010;
  __base_D_80251680 = &D_80251680;
  sp38 = 0;
  D_80284C90 = 1;
  do
  {
    func_80248010(func_80248020() | 0x20000000);
  }
  while (0);
  func_80248030(0x01000800);
  if (func_80248040(0x1FC007FC, &sp3C) != 0)
  {
    do
    {
    }
    while (func_80248040(0x1FC007FC, &sp3C) != 0);
  }
  if (func_80248090((float) 0x1FC007FC, sp3C | 8) != 0)
  {
    do
    {
    }
    while (func_80248090(0x1FC007FC, sp3C | 8) != 0);
  }
  D_80000000 = *((s32 *) (((char *) (&func_802417E0)) + 0));
  D_80000000 = *((s32 *) (((char *) (&func_802417E0)) + 4));
  D_80000000 = *((s32 *) (((char *) (&func_802417E0)) + 8));
  D_80000000 = *((s32 *) (((char *) (&func_802417E0)) + 0xC));
  *((s32 *) (((char *) ((void *) 0x80000080)) + 4)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 4)));
  *((s32 *) (((char *) ((void *) 0x80000080)) + 8)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 8)));
  *((s32 *) (((char *) ((void *) 0x80000080)) + 0)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 0)));
  *((s32 *) (((char *) ((void *) 0x80000080)) + 0xC)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 0xC)));
  *((s32 *) (((char *) ((void *) 0x80000100)) + 0)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 0)));
  *((s32 *) (((char *) ((void *) 0x80000100)) + 4)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 4)));
  *((s32 *) (((char *) ((void *) 0x80000100)) + 8)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 8)));
  *((s32 *) (((char *) ((void *) 0x80000100)) + 0xC)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 0xC)));
  *((s32 *) (((char *) ((void *) 0x80000180)) + 0)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 0)));
  *((s32 *) (((char *) ((void *) 0x80000180)) + 4)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 4)));
  *((s32 *) (((char *) ((void *) 0x80000180)) + 8)) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 8)));
  *((s32 *) (((char *) ((void *) 0x80000180)) - (-0xC))) = (s32) (*((s32 *) (((char *) (&func_802417E0)) + 0xC)));
  osWritebackDCache((float) 0x80000000, 0x190);
  func_802480E0(0x80000000, 0x190);
  func_80248160();
  func_8023E640(4, &sp38);
  temp_t9 = sp38 & (~0xF);
  sp38 = temp_t9;
  if (temp_t9 != 0)
  {
    *__base_D_80251680 = 0;
    *__base_D_80251680 = temp_t9;
  }
  temp_ret = __ll_mul(*__base_D_80251680, D_80251684);
  sp20[sp38 * 0] = temp_ret;
  sp20[1] = (u32) ((u64) temp_ret);
  temp_ret_2 = __ull_div(sp20[0], sp20[1], 0, 4);
  *((0, &D_80251680)) = temp_ret_2;
  *__base_D_80251680 = (u32) ((u64) temp_ret_2);
  if (D_8000030C == 0)
  {
    func_802481C0(&D_8000031C, 0x40);
  }
  sp30[0] = (s32) __base_D_A4600010;
  if ((*__base_D_A4600010) & 3)
  {
    do
    {
      do
      {
        sp30[0] = *__base_D_A4600010;
      }
      while (0);
    }
    while ((char) (sp30[0] & 3));
  }
  sp30[1] = D_A5000508;
  if (!(D_A5000508 & 0xFFFF))
  {
    __base_D_80251690 = &D_80251690;
    *__base_D_80251690 = 1;
    func_80248260(1, &func_802482B0);
    return;
  }
  *__base_D_80251690 = 0;
}

