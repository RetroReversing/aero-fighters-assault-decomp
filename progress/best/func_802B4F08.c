s32 func_8021E66C();
s32 func_8021E708();
s32 func_8021E87C();
s32 func_8023072C();
f32 func_802AED64();
s32 func_802CE2E0();
s32 func_802CEE34();
extern char D_80326808[];
extern char D_8032680C[];
extern u8 D_8032AA80[];
void func_802B4F08(void *arg0, f32 arg1)
{
  s32 sp44;
  char sp3C[0x8];
  s32 var_v1;
  u8 *__base_D_8032AA80;
  __base_D_8032AA80 = D_8032AA80;
  if (((*((s32 *) (((char *) arg0) + 0x78))) & 0xFFFFu) & 0x8000)
  {
    if ((*D_8032AA80) == 0xC)
    {
      var_v1 = 1;
    }
    else
    {
      var_v1 = 0;
    }
    if (var_v1 == 0)
    {
      sp44 = (s32) (*D_8032AA80);
      if ((*D_8032AA80) != 0xE)
      {
        func_802CEE34(0x89, 0xD1, 0xB7, 0xDD, 0, 0, 0, 0x96);
      }
      func_8021E66C(7);
      if ((*((s32 *) (((char *) arg0) + 0x78))) & 4)
      {
        func_8023072C(sp3C, D_80326808, (s32) (func_802AED64(*((s32 *) (((char *) arg0) + 0))) - arg1));
      }
      else
      {
        func_8023072C(sp3C, D_8032680C);
      }
      if (sp44 == 0xE)
      {
        func_8021E708(0, 0, 0, 0x96);
        func_8021E87C(func_802CE2E0(sp3C, 0, 0x140) + 1, 0xD3, sp3C);
      }
      func_8021E708(0, 0xFF, 0, 0x96);
      func_8021E87C(func_802CE2E0(sp3C, 0, 0x140), 0xD3, sp3C);
    }
  }
}

