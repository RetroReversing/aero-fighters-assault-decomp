extern char D_80327804[];
extern char D_80327808[];
extern char D_8032780C[];
extern char D_80327810[];
void func_802D00F8(u16 arg0, u16 arg1, char arg2, s32 arg3, u8 arg4)
{
  s32 temp_v0;
  temp_v0 = arg3 * 2;
  *((s16 *) (D_80327804 + temp_v0)) = arg0;
  *((s16 *) (D_80327808 + temp_v0)) = arg1;
  *(D_8032780C + arg3) = arg2;
  *(D_80327810 + arg3) = ((((arg4 & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF;
}

