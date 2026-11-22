s32 func_8020153C();
s32 func_8020178C();
s32 func_80201A18();
s32 func_80201C00();
s32 func_80201CE0();
s32 func_80201F14();
s32 func_80231A24();
s32 func_80301C74();
s32 func_80301E20();
s32 func_80302D78();
extern char D_8032A284[];
extern char D_8032A2B0[];
extern char D_8032A2D4[];
extern u8 D_8032AA80;
extern f64 D_80345808;
s32 func_803021B8(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4)
{
  char *__repair_addr;
  u8 temp_s0;
  u8 temp_s0_2;
  u8 temp_s0_3;
  u8 temp_s0_4;
  u8 temp_s0_5;
  void *temp_v0;
  if (arg1 == NULL)
  {
    func_80231A24(D_8032A284);
    return 0;
  }
  if (func_80301E20(arg0, arg1) == 0)
  {
    if (func_80301C74(arg0, arg1, arg2, arg3, arg4) == 0)
    {
      func_80231A24(D_8032A2B0);
      return 0;
    }
  }
  else
  {
    __repair_addr = (char *) (arg0 + ((*((u8 *) (((char *) arg1) + 4))) << 5));
    if ((*((u8 *) (((char *) __repair_addr) + 0x1F))) == 0)
    {
      return 0;
    }
    if (func_80302D78(arg0) != (temp_s0_4 * 0))
    {
      return 0;
    }
  }
  if (arg2 >= 0xFF)
  {
    func_80231A24(D_8032A2D4, arg2);
    return 0;
  }
  if (D_8032AA80 == 0xC)
  {
    temp_v0 = arg0 + ((*((u8 *) (((char *) arg1) + 4))) << 5);
    *((s32 *) (((char *) temp_v0) + 0x14)) &= ~8;
  }
  func_8020153C((temp_s0 = *((u8 *) (((char *) arg1) + 4))), *((u8 *) (((char *) (arg0 + (temp_s0 << 5))) + 0x1D)));
  func_80201CE0((temp_s0_2 = *((u8 *) (((char *) arg1) + 4))), 5, *((s32 *) (((char *) (arg0 + (temp_s0_2 << 5))) + 0x14)), 2, D_80345808, 1, -10.0, 0);
  func_8020178C((temp_s0_3 = *((u8 *) (((char *) arg1) + 4))), *((s32 *) (((char *) (arg0 + (temp_s0_3 << 5))) + 0x10)));
  func_80201A18((temp_s0_4 = *((u8 *) (((char *) arg1) + 4))), *((s32 *) (((char *) (arg0 + (temp_s0_4 << 5))) + 0xC)));
  func_80201C00((temp_s0_5 = *((u8 *) (((char *) arg1) + 4))), *((s32 *) (((char *) (arg0 + (temp_s0_5 << 5))) + 0x18)));
  func_80201F14(*((u8 *) (((char *) arg1) + 4)));
  return 1;
}

