extern s32 D_80271B50;
extern s32 D_80271B58;
extern s16 D_80271B5C;
extern s16 D_80271B5E;
void func_8021F440(u8 arg0)
{
  D_80271B5E = (arg0 & 0xFF) * 0;
  if (arg0 & 0xFF)
  {
    D_80271B5C ^= 1;
    D_80271B58 = *((&D_80271B50) + D_80271B5C);
  }
}

