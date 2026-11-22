s32 func_80222CBC();
volatile long long func_80222E24();
volatile unsigned char osVirtualToPhysical(s32);
extern u16 D_8024E874;
extern void *D_80273B90;
extern s32 D_80273BB0;
void func_80222E98(s32 arg0, s32 arg1)
{
  u8 var_a2;
  s32 *temp_a1;
  s32 temp_v0;
  void *temp_a0;
  func_80222CBC(arg0);
  var_a2 = 2;
  if (arg1 != 0)
  {
    var_a2 = 6;
  }
  temp_v0 = osVirtualToPhysical(func_80222E24());
  temp_a0 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_a0) + 8;
  *((s32 *) (((char *) temp_a0) + 0)) = (s32) ((((((var_a2 & 0xFF) & 0xFF) << 5) << 11) | 0x01000000) | 0x40);
  *((s32 *) (((char *) temp_a0) + 4)) = temp_v0;
  temp_a1 = (void *) ((D_8024E874 ^ 0) * 4); temp_a1 = (void *) (((char *) temp_a1) + ((s32) (&D_80273BB0)));
  if (0)
  {
  }
  *temp_a1 += 1;
}

