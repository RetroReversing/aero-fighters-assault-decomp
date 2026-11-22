s32 func_802011D0();
s32 func_80203654();
s32 func_80231C9C();
extern char D_80251CF0[];
extern s32 D_80256DE4;
extern u16 D_80280BFA;
void func_8020153C(u8 arg0, u8 arg1)
{
  s32 sp1C;
  s32 temp_t6;
  s32 temp_v0;
  void *var_v1;
  sp1C = (s32) arg0;
  func_802011D0(D_80251CF0, arg1, arg0);
  temp_v0 = D_80280BFA;
  if (0)
  {
  }
  if (((s32) arg0) >= ((s32) temp_v0))
  {
    sp1C = (s32) arg0;
    func_80231C9C("emitId < AUD_NEMITTERS", "_aobj.c", 0x12C, arg0);
  }
  if ((((s32) arg0) < ((s32) D_80280BFA)) != 0U)
  {
    temp_t6 = ((unsigned) arg0) * 0xB4;
    var_v1 = D_80256DE4 + temp_t6;
    if ((*((s32 *) (((char *) var_v1) + 0xA0))) != 0x11)
    {
      func_80203654(*((u8 *) (((char *) var_v1) + 0xAD)), &D_80256DE4);
      *((s32 *) (((char *) (D_80256DE4 + temp_t6)) + 0xA0)) = 0;
      *((s8 *) (((char *) (D_80256DE4 + temp_t6)) + 0xAD)) = 0x11;
      *((s8 *) (((char *) (D_80256DE4 + temp_t6)) + 0xB0)) = 0;
      var_v1 = D_80256DE4 + temp_t6;
    }
    *((u8 *) (((char *) var_v1) + 0x8C)) = arg1;
  }
}

