s32 func_8024A710();
s32 osInvalDCache(s32, s32);
s32 osVirtualToPhysical(s32);
s32 osWritebackDCache(s32, s32);
extern s32 D_A4800000;
extern s32 D_A4800004;
extern s32 D_A4800010;
s32 func_802465B0(s32 arg0, s32 arg1)
{
  int *__repair_home0 = &arg0;
  if (func_8024A710() != (arg1 * 0))
  {
    return -1;
  }
  if ((*__repair_home0) == 1)
  {
    osWritebackDCache(arg1, 0x40);
  }
  D_A4800000 = osVirtualToPhysical(arg1);
  if (((((((((((((((((*__repair_home0) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFu) & 0xFFu) & 0xFFu) == 0)
  {
    D_A4800004 = 0x1FC007C0;
  }
  else
  {
    D_A4800010 = 0x1FC007C0;
  }
  if ((*__repair_home0) == 0)
  {
    osInvalDCache(arg1, 0x40);
  }
  return 0;
}

