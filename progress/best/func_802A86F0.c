s32 func_80211984(s32, s32, s32, f32 *, f32 *);
s32 func_8021ACB0(s32, s32);
s32 func_8021B240(s32, s32, s32, s32);
s32 func_8021B4B0(s32, s32, s32 *);
s32 func_8021B838(s32, s32);
s32 func_8021BA90();
s32 func_8022FCDC(s32, s32, s32 *);
s32 func_8022FE5C(s32);
s32 func_8022FE90(s32, s32);
s32 func_8028A8C8(s32, s32, s32);
s32 func_802AA5EC(s32, void *, s32 *, s32, f32, f32);
s32 func_802AEFA8(s32);
s32 func_802CF090(s32, s32 *, s32 *, s32 *, f32 *, s32 *, f32 *);
void func_802A86F0(s32 arg0, void *arg1, s32 arg2, s32 arg3)
{
  f32 sp58;
  f32 sp90[2];
  f32 sp54;
  char sp60[0x30];
  unsigned sp44;
  s32 sp40;
  f32 sp3C;
  unsigned long sp38;
  s32 sp48[2];
  f32 sp34;
  s32 temp_v0;
  register u32 temp_v0_2;
  if (arg2 != 0xFFFF)
  {
    func_8022FCDC(arg2, 0, sp60);
    func_80211984(func_802AEFA8(arg0), *((s32 *) (((char *) arg1) + 0x30)), *((s32 *) (((char *) arg1) + 0x34)), &sp58, &sp54);
    sp90[1] += sp54;
    sp90[0] += sp58;
    sp48[1] = func_8022FE5C(arg2);
    temp_v0 = func_8021BA90();
    func_8021ACB0(temp_v0, sp48[1]);
    func_8021B4B0(temp_v0, 0, sp60);
    {
      s32 __repair_call_arg0;
      int __repair_call_arg1;
      __repair_call_arg0 = temp_v0;
      __repair_call_arg1 = 3;
      func_8021B838(__repair_call_arg0, __repair_call_arg1);
    }
    func_8021B240(temp_v0, 3, 1, 0);
    func_8022FE90(arg2, arg3);
    func_802CF090(sp48[1], sp48, &sp44, &sp40, &sp3C, &sp38, &sp34);
    temp_v0_2 = func_802AA5EC(arg0, arg1, sp60, sp44, sp3C, sp34);
    if (temp_v0_2)
    {
      func_8028A8C8(temp_v0_2, temp_v0, sp48[1]);
    }
  }
}

