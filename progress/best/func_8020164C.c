s32 func_80228DE0(s32, s32);
s32 func_80231C9C(s32 *, s32 *, s32);
extern u8 D_80256DE4[];
extern u16 D_80280BFA;
extern char D_80251D34[];
extern char D_80251D4C[];
void func_8020164C(u8 arg0, s32 arg1)
{
  int sp1C;
  register char var_a3;
  register s32 temp_v1;
  s32 temp_v0;
  var_a3 = arg0 & 0xFF;
  temp_v1 = var_a3;
  temp_v0 = D_80280BFA;
  if (1)
  {
    if (var_a3 >= temp_v0)
    {
      sp1C = (unsigned) temp_v1;
      arg0 = (u8) var_a3;
      var_a3 = arg0;
      func_80231C9C(D_80251D34, D_80251D4C, 0x13F);
    }
 if (1) { } if (1) { } if (1) { } if (1) { } if (1) { } if (1) { }
    if (temp_v1 < ((s32) D_80280BFA))
    {
      func_80228DE0((*((s32 *) D_80256DE4)) + (var_a3 * 0xB4), arg1);
    }
  }
}
