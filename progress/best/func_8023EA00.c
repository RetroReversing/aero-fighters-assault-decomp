s32 __ll_mul(s32, s32, s32, s32);
u64 __ull_div(s32, u32, s32, s32);
s32 func_8023EBF8(s32, s32);
s32 func_8023ECC8(s32);
s32 func_80245A80();
s32 func_802465B0(s32, s32 *);
u32 func_802490E0();
s32 osCreateMesgQueue(s32 *, s32 *, s32);
s32 osRecvMesg(s32 *, s32 *, s32);
s32 osSetTimer(s32 *);
extern s32 D_80251680;
extern s32 D_80251684;
extern s32 D_802516C0;
extern s32 D_80285E70;
extern s8 D_80285EB0;
extern s8 D_80285EB1;
extern s32 D_80285ED8;
extern s32 D_80285EF0;
s32 func_8023EA00(s32 *arg0, s32 arg1, s32 arg2)
{
  s32 sp7C;
  register volatile unsigned int sp78;
  s32 *__base_D_80251684;
  s32 *__base_D_802516C0;
  u32 sp70;
  register u64 temp_v0;
  unsigned sp50;
  s32 sp38;
  unsigned long sp34;
  s32 __repair_phase_sp30;
  u64 temp_ret_3;
  s32 sp28[3];
  s32 temp_ret_2;
  s32 temp_ret_4;
  register unsigned long temp_ret;
  volatile unsigned int temp_ret_5;
  s32 *__base_D_80251680;
  __base_D_80251680 = &D_80251680;
  sp78 = 0;
  __base_D_802516C0 = &D_802516C0;
  if ((*__base_D_802516C0) != 0)
  {
    return 0;
  }
  *__base_D_802516C0 = 1;
  temp_ret = func_802490E0();
  sp70 = temp_ret;
  __base_D_80251684 = &D_80251684;
  temp_ret_2 = __ll_mul(0, 0x7A120, *__base_D_80251680, *__base_D_80251684);
  temp_ret_3 = __ull_div(__repair_phase_sp30, sp34, 0, 0xF4240);
  sp34 = (u32) ((u64) temp_ret_2);
  __repair_phase_sp30 = temp_ret_2;
  temp_v0 = temp_ret_3;
  sp34 = (u32) ((u64) ((u32) temp_ret));
  if ((((unsigned) temp_v0) >= ((s32) temp_ret)) && ((sp70 < ((u32) temp_v0)) || (((s32) sp34) < ((u32) ((int) temp_ret_3)))))
  {
    u32 __repair_branch_sp34_0;
    osCreateMesgQueue(&sp38, &sp7C, 1);
    temp_ret_2 = __ll_mul(0, 0x7A120, *__base_D_80251680, *__base_D_80251684);
    sp28[0] = temp_ret_2;
    if (1)
    {
      temp_ret_5 = __ull_div(temp_ret_4, sp28[1], 0, 0xF4240);
      sp28[1] = (u32) ((u64) temp_ret_2);
    }
    sp28[2] = temp_ret_5;
    __repair_branch_sp34_0 = temp_ret_5 & 0xFFFFFFFFFFFFFFFF;
    osSetTimer(&sp50);
    osRecvMesg(&sp38, &sp7C, 1);
  }
  D_80285EB1 = 4;
  func_8023ECC8(0);
  sp78 = func_802465B0(1, &D_80285E70);
  osRecvMesg(arg0, &sp7C, 1);
  sp78 = func_802465B0(0, &D_80285E70);
  osRecvMesg(arg0, &sp7C, 1);
  func_8023EBF8(arg1, arg2);
  D_80285EB0 = temp_ret * 0;
  func_80245A80();
  osCreateMesgQueue(&D_80285ED8, &D_80285EF0, 1);
  return sp78;
}

