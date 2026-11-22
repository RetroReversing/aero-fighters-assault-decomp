s32 alSndpGetState();
s32 alSndpSetVol();
s32 alSndpStop();
s32 func_802011D0();
s32 func_80231C9C();
s32 func_80234E90();
extern void *D_8024E5B4;
extern char D_80252558[];
extern char D_8025258C[];
extern s8 D_8025B988;
extern char D_80252584[];
extern char D_8025256C[];
void func_80203654(u8 arg0)
{
  void *temp_a0;
  u8 temp_a2;
  temp_a2 = arg0 & 0xFF;
  if (temp_a2 < 0x10)
  {
    arg0 = temp_a2;
    func_802011D0(D_80252558);
    do
    {
      func_80234E90(D_8024E5B4, *((s32 *) ((*((s32 *) (&D_8025B988))) + (((u8) arg0) * 2))), (unsigned int) ((u8) arg0));
    }
    while (0);
    temp_a0 = D_8024E5B4;
    if ((*((s32 *) (((char *) temp_a0) + 0x3C))) == (-1))
    {
      func_80231C9C(D_80252584);
    }
    if (alSndpGetState(temp_a0) == 1)
    {
      alSndpSetVol(D_8024E5B4, 0);
    }
    alSndpStop(D_8024E5B4);
    return;
  }
  func_802011D0(D_8025258C, temp_a2);
}

