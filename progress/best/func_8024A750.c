s32 func_80241760();
s32 func_80241780(s32);
s32 func_802481C0(s32 **, s32);
extern s32 *D_802516BC;
extern s32 *D_80287170;
extern s8 D_80287174;
extern s8 D_80287175;
extern s32 D_80287176;
extern s8 D_80287178;
extern s32 D_8028717C;
extern s32 *D_802871E4;
extern s32 D_A4600024;
extern s32 D_A4600028;
extern s32 D_A460002C;
extern s32 D_A4600030;
s32 **func_8024A750(void)
{
    s8 *__base_D_80287178;
  register unsigned int sp1C;
  long temp_v0;
  s32 **__base_D_802516BC;
    s32 *__base_D_80287176;

    __base_D_80287176 = &D_80287176;
  __base_D_802516BC = &D_802516BC;
  D_80287174 = 2;
  D_8028717C = 0xA5000000;
 do { *((u8 *) (&D_80287175)) = 3; __base_D_80287178 = &D_80287178;
 *((u8 *) (__base_D_80287178)) = 6; do { *((u8 *) (((char *) ((&D_80287176))) + 0)) = 2U; *((u8 *) (((char *) (__base_D_80287176)) + 0)) = 6U; *((volatile s32 *) 0xA4600024) = 3; *((volatile s32 *) 0xA4600028) = (s32) (*((u8 *) (__base_D_80287178))); *((volatile s32 *) 0xA460002C) = (s32) (*((u8 *) (((char *) (__base_D_80287176)) + 0))); *(volatile s32 *)0xA4600030 = (s32) (*((u8 *) (((char *) (__base_D_80287176)) + 1))); func_802481C0((&D_80287170) + 0x14, 0x60); temp_v0 = func_80241760(); D_80287170 = *__base_D_802516BC; } while (0); *__base_D_802516BC = &D_80287170; } while (0);
  D_802871E4 = &D_80287170;
  func_80241780(sp1C);
  sp1C = temp_v0;
  return &D_80287170;
}
