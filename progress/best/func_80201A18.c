s32 func_80231C9C(s32 *, s32 *, volatile long);
extern s32 D_80256DE4;
extern u16 D_80280BFA;
void func_80201A18(s32 arg0, f32 arg1)
{
  char *__repair_addr;
  int *__repair_home0 = &arg0;
  s32 sp1C;
  s32 temp_v0;
  temp_v0 = D_80280BFA;
  if (((s32) ((*__repair_home0) & 0xFF)) >= ((s32) D_80280BFA))
  {
    sp1C = (s32) ((*__repair_home0) & 0xFF);
    func_80231C9C("emitId < AUD_NEMITTERS", "_aobj.c", 0x1A1);
  }
  if (((s32) ((*__repair_home0) & 0xFF)) < ((s32) D_80280BFA))
  {
    if (!(arg1 > 0.0f))
    {
      func_80231C9C("pitch > 0.0f", "_aobj.c", 0x1A3);
    }
    if (!(arg1 <= 2.0f))
    {
      func_80231C9C("pitch <= 2.0f", "_aobj.c", 0x1A4);
    }
    __repair_addr = (char *) (D_80256DE4 + ((((unsigned char) (*__repair_home0)) & 0xFF) * 0xB4));
 *((f32 *) (((char *) __repair_addr) + 0x74)) = arg1; }
}
