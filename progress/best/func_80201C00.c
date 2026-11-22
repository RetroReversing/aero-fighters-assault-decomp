s32 func_80231C9C(s32 *, s32 *, s32);
extern s32 D_80256DE4;
extern u16 D_80280BFA;
void func_80201C00(s32 arg0, s32 arg1)
{
  int *__repair_home0 = &arg0;
  s32 sp1C;
  s32 temp_v0;
  temp_v0 = D_80280BFA;
  if (((s32) ((*__repair_home0) & 0xFF)) >= ((s32) D_80280BFA))
  {
    sp1C = (s32) ((*__repair_home0) & 0xFF);
    func_80231C9C("emitId < AUD_NEMITTERS", "_aobj.c", 0x1C0);
  }
  if (((s32) ((*__repair_home0) & 0xFF)) < ((s32) D_80280BFA))
  {
    if (arg1 < 0)
    {
      func_80231C9C("priority >= 0", "_aobj.c", 0x1C2);
    }
    do
    {
      if (arg1 >= 0x8000)
      {
        func_80231C9C("priority <= 32767", "_aobj.c", 0x1C3);
      }
      *((s32 *) (((char *) ((((*__repair_home0) & 0xFF) * 0xB4) + ((0, D_80256DE4)))) + 0x88)) = arg1;
    }
    while (0);
  }
}

