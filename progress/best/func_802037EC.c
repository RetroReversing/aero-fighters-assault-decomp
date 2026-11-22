s32 func_802011D0();
extern char D_802525A8[];
extern char D_802525C0[];
extern char D_802525D4[];
extern char D_802525E8[];
extern char D_802525FC[];
extern char D_80252610[];
extern char D_80252624[];
extern char D_80252638[];
extern char D_8025264C[];
extern char D_80252660[];
extern char D_80252674[];
extern char D_80252688[];
extern s32 D_80256DE4;
void func_802037EC(s32 arg0)
{
  int *__repair_home0 = &arg0;
  unsigned int temp_a1;
  void *temp_s0;
  temp_a1 = (*((0, __repair_home0))) & 0xFF;
  temp_s0 = (temp_a1 * 0xB4) + D_80256DE4;
  func_802011D0(D_802525A8);
  func_802011D0(D_802525C0, *((u8 *) (((char *) temp_s0) + 0xAD)));
  func_802011D0(D_802525D4, (u8) ((*((s32 *) (((char *) temp_s0) + 0xA0))) & 0xFFFF));
  func_802011D0(D_802525E8, *((u8 *) (((char *) temp_s0) + 0xB0)));
  func_802011D0(D_802525FC, (u8) (*((s32 *) (((char *) temp_s0) + 0xA4))));
  func_802011D0(D_80252610);
  func_802011D0(D_80252624, *((u8 *) (((char *) temp_s0) + 0xAE)));
  if (1)
  {
    if (1)
    {
    }
  }
  if (1)
  {
  }
  if (1)
  {
  }
  if (1)
  {
  }
  if (1)
  {
  }
  func_802011D0(D_80252638);
  func_802011D0(D_8025264C);
  func_802011D0(D_80252660, *((u8 *) (((char *) temp_s0) + 0x8C)));
  func_802011D0(D_80252674, (u8) (*((s32 *) (((char *) temp_s0) + 0x88))));
  func_802011D0(D_80252688, (u8) ((*((s32 *) (((char *) temp_s0) + 0xA8))) & 0xFFFF));
}

