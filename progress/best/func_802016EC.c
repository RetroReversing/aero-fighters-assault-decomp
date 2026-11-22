s32 func_80228DE0(s32, s32);
s32 func_80231C9C(s32 *, s32 *, s32, s32);
extern s32 D_80256DE4;
extern u16 D_80280BFA;
extern char D_80251D54[];
extern char D_80251D6C[];
int func_802016EC(u8 arg0, s32 arg1)
{
  s32 temp_v1;
  int *__repair_home1 = &arg1;
  s32 sp1C;
  long var_a3;
  unsigned temp_v0;
  temp_v0 = D_80280BFA;
  var_a3 = arg0 & 0xFF;
  temp_v1 = var_a3;
  if (var_a3 >= ((s32) temp_v0))
  {
    sp1C = temp_v1;
    arg0 = (u8) var_a3;
 func_80231C9C(D_80251D54, D_80251D6C, 0x14A, var_a3); var_a3 = (s32) arg0; }
  if (temp_v1 < ((s32) D_80280BFA))
  {
    func_80228DE0(*__repair_home1, D_80256DE4 + (var_a3 * 0xB4));
  }
}
