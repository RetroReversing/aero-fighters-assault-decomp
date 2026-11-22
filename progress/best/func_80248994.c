s32 __osLeoResume();
extern s32 D_8025168C;
extern s32 D_802871E4;
extern volatile int D_A4600010[];
extern s32 D_A5000510;
void func_80248994(void)
{
  s32 *__base_D_802871E4;
  volatile int __repair_phase_sp18;
  void *sp1C;
  s32 sp18;
  s32 *__base_D_A4600010;
  s32 *__base_D_A5000510;
  __base_D_A5000510 = &D_A5000510;
  __base_D_802871E4 = &D_802871E4;
  sp1C = (*__base_D_802871E4) + 0x14;
  __base_D_A4600010 = D_A4600010;
  sp18 = *D_A4600010;
  if (((((((((sp18 & 2) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF)
  {
    do
    {
      do
      {
        sp18 = *__base_D_A4600010;
      }
      while (((*__base_D_802871E4) + 0x14) * 0);
      if (1)
      {
      }
    }
    while (sp18 & 2);
  }
  do
  {
    *__base_D_A5000510 = (*((s32 *) (((char *) sp1C) + 0x10))) | 0x10000000; sp18 = *__base_D_A4600010;
    if (((((((((sp18 & 2) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu)
    {
      do
      {
        __repair_phase_sp18 = *__base_D_A4600010;
      }
      while (__repair_phase_sp18 & 2);
    }
    *__base_D_A5000510 = *((s32 *) (((char *) sp1C) + 0x10));
    __osLeoResume();
    *__base_D_A4600010 = 2;
  }
  while (0);
  D_8025168C |= 0x100401;
}

