s32 __ll_mul();
long long __ull_div();
s32 func_80247830();
s32 osRecvMesg();
s32 osSetTimer();
extern s32 D_80251680;
extern s32 D_80251684;
extern char D_80285EB8[];
extern char D_80285ED8[];
extern char D_80285EF0[];
s32 func_8023E0B0(volatile unsigned int arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int *__repair_home1 = &arg1;
  int *__repair_home3 = &arg3;
  int *__repair_home2 = &arg2;
  s32 sp28[4];
  volatile unsigned int sp3C;
  int *__repair_home0 = &arg0;
  s32 temp_ret;
  s32 temp_ret_2;
  sp3C = 0;
  if (((s32) (*__repair_home1)) >= 0x41)
  {
    return -1;
  }
  do
  {
    if ((*__repair_home3) > 0)
    {
      int __repair_constant = 8;
      for (;;)
      {
        do
        {
          sp3C = func_80247830(*__repair_home0);
        }
        while (0);
        do
        {
          if (sp3C != 0)
          {
          }
          if (1)
          {
            *__repair_home3 -= __repair_constant;
            *__repair_home1 += 1;
          }
        }
        while (0);
        *__repair_home2 += __repair_constant; temp_ret = __ll_mul((long long) 0); sp28[1] = (u32) ((u64) temp_ret); sp28[0] = temp_ret;
        do
        {
          temp_ret_2 = __ull_div(sp28[0]);
        }
        while (0);
        sp28[2] = temp_ret_2; sp28[0, 3] = (u32) ((u64) temp_ret_2);
        osSetTimer(D_80285EB8);
        osRecvMesg(D_80285ED8, 0, 1 & 0xFFFFFFFFFFFFFFFF);
        if ((*__repair_home3) <= 0)
        {
        }
        continue;
        break;
      }

      ;
    }
  }
  while (0);
}

