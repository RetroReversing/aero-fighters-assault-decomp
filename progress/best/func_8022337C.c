s32 func_80220C44(s32 *, u8 *);
s32 func_80231A24(s32 *, u8 *);
extern s32 D_8025391C;
extern s32 D_80274430;
extern u8 D_802744B0;
unsigned int func_8022337C(void)
{
  s32 *__base_D_80274430;
  s16 sp24;
  s32 *__base_D_8025391C;
  volatile int sp28;
  volatile short pad;
  s32 temp_t6;
  s32 sp1C;
  temp_t6 = D_802744B0 - 1;
  do
  {
    if (D_802744B0 == 0)
    {
      __base_D_8025391C = &D_8025391C;
      do
      {
        func_80231A24(__base_D_8025391C, &D_802744B0);
        return;
      }
      while (0);
    }
    D_802744B0 = temp_t6; sp24 = 0xFFFF; sp28 = 0;
  }
  while (0);
  __base_D_80274430 = &D_80274430;
  sp1C = *((s32 *) ((((temp_t6 & 0xFFFF) & 0xFF) * 4) + ((s8 *) __base_D_80274430)));
  func_80220C44(&sp1C, &D_802744B0);
}

