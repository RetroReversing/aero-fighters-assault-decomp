s32 func_80231C9C(s32 *, s32 *, s32, s32);
extern s32 D_80256DE4;
extern u16 D_80280BFA;
extern char D_80251DC4[];
extern char D_80251DDC[];
f32 func_80201880(u8 arg0)
{
  register s32 temp_v1;
  long var_a3;
  s32 sp1C;
  u32 temp_v0;
  temp_v0 = D_80280BFA;
  if (1)
  {
    var_a3 = arg0 & 0xFF;
    temp_v1 = var_a3;
  }
  if (var_a3 >= ((s32) ((s32) temp_v0)))
  {
    sp1C = temp_v1;
    arg0 = (u8) var_a3;
 func_80231C9C(D_80251DC4, D_80251DDC, 0x184, var_a3); var_a3 = (s32) arg0;
  }
  if (temp_v1 >= ((s32) D_80280BFA))
  {
    return 0.0f;
  }
  return *((f32 *) (((char *) (D_80256DE4 + (var_a3 * 0xB4))) + 0x70));
}
