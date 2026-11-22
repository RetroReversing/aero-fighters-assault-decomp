s32 func_80222CBC();
s32 func_80222E24();
s32 osVirtualToPhysical(s32);
extern u16 D_8024E874;
extern void *D_80273B90;
extern s8 D_80273BB0;
extern s8 D_80273BB8;
void func_80222F30(s32 arg1)
{
  u8 sp1F;
  s32 *temp_a2;
  s32 *temp_a3;
  s32 temp_t4;
  s32 temp_v0;
  void *temp_a0;
    s8 *__base_D_80273BB0;

    __base_D_80273BB0 = &D_80273BB0;
  func_80222CBC();
  if (arg1 != 0)
  {
    sp1F = 4;
    if (1)
    {
    }
    if (1)
    {
    }
    if (1)
    {
    }
    if (1)
    {
    }
    if (1)
    {
    }
  }
  else
  {
    sp1F = 0;
  }
  arg1 = osVirtualToPhysical(func_80222E24());
  temp_a0 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_a0) + 8;
  *((s32 *) (((char *) temp_a0) + 0)) = (s32) ((((((sp1F << 1) << 8) << 5) << 2) | 0x01000000) | 0x40);
  *((s32 *) (((char *) temp_a0) + 4)) = arg1;
  temp_v0 = D_8024E874 * 4;
  temp_a2 = temp_v0 + (__base_D_80273BB0);
  temp_a3 = temp_v0 + (&D_80273BB8);
  *temp_a2 += 1;
  *temp_a3 += 1;
}

