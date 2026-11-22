s32 osVirtualToPhysical(s32);
extern s32 D_A4600000;
extern s32 D_A4600004;
extern s32 D_A4600008;
extern s32 D_A460000C;
extern s32 D_A4600010;
volatile short func_80248C50(void *arg0, s32 arg1, s32 arg2, s32 arg3, volatile unsigned long arg4)
{
  int *__repair_home3 = &arg3;
  s32 *__base_D_A4600010;
  int *__repair_home1 = &arg1;
  __base_D_A4600010 = &D_A4600010;
  if ((*__base_D_A4600010) & (3 & 0xFFFFFFFF))
  {
    do
    {
    }
    while ((*__base_D_A4600010) & 3);
  }
  D_A4600000 = osVirtualToPhysical(*__repair_home3);
  D_A4600004 = ((*((s32 *) (((char *) arg0) + 0xC))) | arg2) & (0x1FFFFFFF & 0xFFFFFFFFFFFFFFFFu);
  switch (*__repair_home1)
  {
    case 0:
      D_A460000C = arg4 - 1;
      goto __shared_return_0;

    case 1:
      D_A4600008 = arg4 - 1;
      __shared_return_0:
    return 0;


    default:
      return (((((((-1) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF;

  }

}

