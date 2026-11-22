s32 func_802011D0();
s32 func_80231C9C();
extern u8 D_80251F80[];
extern s32 D_80256DE4;
extern u16 D_80280BFA;
void func_80201F14(u8 arg0)
{
  u32 temp_v0;
  register s32 sp1C;
  temp_v0 = D_80280BFA;
  if ((((s32) (((int) arg0) & 0xFF)) + 1) > D_80280BFA)
  {
    sp1C = (s32) (arg0 & 0xFF);
    func_80231C9C("emitId < AUD_NEMITTERS", "_aobj.c", 0x20D, arg0 & 0xFF);
  }
  if (((s32) (arg0 & 0xFF)) < D_80280BFA)
  {
    func_802011D0(D_80251F80, (s32) (arg0 & 0xFF));
    *((s32 *) (((0, (char *) (D_80256DE4 + ((((u32) arg0) & 0xFF) * 0xB4)))) + 0xA8)) = 0x10;
  }
}

