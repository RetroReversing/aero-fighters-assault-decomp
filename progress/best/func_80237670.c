s32 func_80242300();
s32 osVirtualToPhysical(s32);
extern u8 D_80250920;
extern s32 D_A4500000;
extern s32 D_A4500004;
s32 func_80237670(s32 arg0, s32 arg1)
{
  volatile unsigned int sp1C;
  u8 *__base_D_80250920;
  int *__repair_home0 = &arg0;
  goto dummy_label_623006;
  dummy_label_623006:
  ;

  ;
  ;
  sp1C = *__repair_home0;
  __base_D_80250920 = &D_80250920;
 if ((*__base_D_80250920) != 0) { sp1C = (*__repair_home0) - 0x2000;
  }
  if ((((*__repair_home0) + arg1) & 0x3FFF) == 0x2000)
  {
    *__base_D_80250920 = 1;
  }
  else
  {
    *__base_D_80250920 = 0;
  }
  if (func_80242300() != 0)
  {
    return -1;
  }
  *((volatile s32 *) 0xA4500000) = osVirtualToPhysical(sp1C);
  D_A4500004 = arg1;
  return 0;
}
