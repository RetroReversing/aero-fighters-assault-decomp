/* Partial candidate from function #47244642610 in project #11; rechecked locally. */
s32 func_80241EFC();
s32 __osPopThread();
extern char D_802516D8[];
extern char D_80284C10[];
void __osLeoResume(void)
{
  char *__base_D_80019510;
  void *sp2C;
  void *sp28;
  s32 sp24;
  volatile int temp_hi;
  __base_D_80019510 = ((s32) D_80284C10) & 0xFFFFu;
  sp2C = __base_D_80019510 + 0x40;
  sp28 = *((void **) (((char *) __base_D_80019510) + 0x40));
  if (((*((void **) (((char *) __base_D_80019510) + 0x40))) != NULL) && ((*((s32 *) (((char *) (*((void **) (((char *) __base_D_80019510) + 0x40)))) + 8))) < (*((s32 *) (((char *) (*((void **) (((char *) __base_D_80019510) + 0x40)))) + 0x10)))))
  {
    temp_hi = ((s32) ((*((s32 *) (((char *) sp28) + 0xC))) + (*((s32 *) (((char *) sp28) + 8))))) % ((s32) (*((s32 *) (((char *) sp28) + 0x10))));
    *((s32 *) ((*((s32 *) (((char *) sp28) + 0x14))) + (temp_hi * 4))) = *((s32 *) (((char *) sp2C) + 4));
    sp24 = temp_hi;
    *((s32 *) (((char *) sp28) + 8)) += 1;
    if ((*(*((s32 **) (((char *) sp28) + 0)))) != (((*((s32 *) (((char *) (*((void **) (((char *) __base_D_80019510) + 0x40)))) + 8))) < (*((s32 *) (((char *) (*((void **) (((char *) __base_D_80019510) + 0x40)))) + 0x10)))) * 0))
    {
      func_80241EFC(D_802516D8, __osPopThread(sp28));
    }
  }
}

