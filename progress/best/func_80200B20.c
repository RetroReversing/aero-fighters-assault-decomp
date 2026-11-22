s32 func_802009A8();
s32 func_80200C28(f32, void *, f32, s32);
s32 func_80231A24(f32, s32);
extern void *D_8024E710;
extern char D_80251C10[];
void func_80200B20(s32 arg0, char arg1, f32 arg2)
{
  volatile unsigned short sp46;
  s8 sp45;
  s8 sp44;
  s32 *sp40;
  s32 *sp3C;
  s32 *sp38;
  s32 *sp34;
  char sp10[0x18];
  void *temp_v0;
  temp_v0 = *((s32 *) ((((*((s32 *) (((char *) D_8024E710) + 0x3C))) + (arg1 * 4)) & 0xFF) & 0xFFFFFFFFFFFFFFFFu));
  if (temp_v0 == NULL)
  {
    func_80231A24(arg2, D_80251C10);
    return;
  }
  sp34 = sp10;
  sp38 = sp10;
  sp3C = sp10;
  sp40 = sp10;
  sp44 = 0;
  sp45 = 7;
  sp46 = (s16) (*((u8 *) (((char *) temp_v0) + 9)));
  func_80200C28(arg2, &sp34, arg2, 0xC);
  func_802009A8(arg0, &sp34);
}

