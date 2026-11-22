s32 func_8023EF2C();
s32 func_80245AD0();
s32 func_80245B14();
s32 func_802465B0(s32, s32 *);
s32 osRecvMesg(s32, s32, s32);
extern s32 D_80285E70;
extern s32 D_80285EAC;
extern u8 D_80285EB0;
s32 func_8023EDC0(unsigned long long arg0)
{
  s32 __repair_result_sp1C;
  u8 *__base_D_80285EB0;
  s32 sp18;
  s32 temp_t1;
  s32 temp_v0;
  int *__repair_home0 = &arg0;
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
  sp18 = 0;
  func_80245AD0();
  __base_D_80285EB0 = &D_80285EB0;
  if ((*__base_D_80285EB0) != 1)
  {
    func_8023EF2C();
    __repair_result_sp1C = func_802465B0(1, &D_80285E70);
    osRecvMesg(*__repair_home0, 0, 1);
  }
  sp18 = (*__base_D_80285EB0) * 0;
  do
  {
    temp_t1 = sp18 + 1;
    sp18 = temp_t1;
    *((&D_80285E70) + (sp18 * 4)) = 0xFF;
  }
  while (temp_t1 < 0x10);
  D_80285EAC = 0;
  __repair_result_sp1C = func_802465B0(0, &D_80285E70);
  sp18 = __repair_result_sp1C;
  *__base_D_80285EB0 = 1;
  func_80245B14();
  return __repair_result_sp1C;
}

