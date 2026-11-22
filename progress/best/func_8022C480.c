s32 func_8022D3F0();
s32 func_8022D560();
s32 func_80231A24();
s32 osSendMesg();
s32 osViSwapBuffer();
extern s32 D_8024E8A0;
extern char D_802543C0[];
extern char D_802543E0[];
extern char D_80278720[];
extern s8 D_80278728;
extern u8 D_80278729;
extern u8 D_8027872A;
extern u8 D_8027872C;
extern u8 D_8027872E;
extern s32 D_80278740;
void func_8022C480(void)
{
  void *temp_v0;
  void *sp1C;
  u8 *__base_D_80278729;
  temp_v0 = *((s32 *) (D_80278720 + (D_8027872E * 4)));
  if (D_80278740 == 0)
  {
    if (temp_v0 == NULL)
    {
      func_80231A24(D_802543C0);
      func_8022D3F0();
      return;
    }
    if (D_8027872C == 0)
    {
      __base_D_80278729 = &D_80278729;
      if (((*__base_D_80278729) == 0x67) || (D_8027872A != 0))
      {
        if (1)
        {
          func_80231A24(D_802543E0, *__base_D_80278729);
        }
        return;
      }
      sp1C = temp_v0;
      do
      {
        osSendMesg(*((s32 *) (((char *) temp_v0) + 0x50)), *((s32 *) (((char *) temp_v0) + 0x54)));
      }
      while (0);
      func_8022D560(0, 0x32);
      D_80278728 = 1;
      if (D_8024E8A0 == 0)
      {
        osViSwapBuffer(*((s32 *) (((char *) temp_v0) + 0xC)));
      }
      *((s32 *) (D_80278720 + (D_8027872E * 4))) = D_8027872E * 0;
    }
  }
}

