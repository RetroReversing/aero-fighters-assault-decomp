s32 func_80231A24(s32 *, u32);
extern s32 D_80254138;
extern s32 D_80254168;
extern s32 D_80275F70;
s32 func_8022BB00(u32 arg0)
{
  if (arg0 >= 0x25800U)
  {
    func_80231A24(&D_80254138, arg0);
    goto block_9;
  }
 do { if ((*((s32 *) (((char *) (&D_80275F70)) + 0))) == 0) { *((s32 *) (((char *) (&D_80275F70)) + 0)) = 1; return 0x803DA800; } if ((*((s32 *) (((char *) (&D_80275F70)) + 4))) == 0) { *((s32 *) (((char *) (&D_80275F70)) + 4)) = 1; return 0x800DA800; } } while (0);
  if ((*((s32 *) (((char *) (&D_80275F70)) + 8))) == 0)
  {
    *((s32 *) (((char *) (&D_80275F70)) + 8)) = 1;
    return 0x80100000;
  }
  func_80231A24(&D_80254168, arg0);
  block_9:
  return 0;

}
