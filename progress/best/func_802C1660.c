s32 func_8022A0D0(s32 *, s32, s32, s32);
f32 func_8023499C();
s32 func_80295794(s32, s32);
s32 func_802957F8(s32, s32);
s32 func_80295804(volatile char, s32);
s32 func_8029583C(s32, s32, s32);
s32 func_80295898(s32, f32, s32, s32);
s32 func_802958C0(s32, s32);
s32 func_802958CC(s32, volatile unsigned long);
s32 func_802958D8(s32, s32, s32, f32);
s32 func_802AA674(s32, s32 *, f32, s32, f32, f32, s32, s32, s32);
s32 func_802C5150(void *arg0, s32 *);
extern s32 D_80326A74;
extern s32 D_80326A84;
extern f32 D_80341AE0;
void func_802C1660(void *arg0, f32 arg1, s32 arg2)
{
  unsigned long spD0;
  s32 spCC;
  s32 spBC;
  s32 sp9C[4];
  long spAC;
  f32 temp_fs5;
  s32 *var_s0;
  register unsigned int temp_v0;
  s32 temp_v0_2;
  unsigned long var_s1;
  *((s32 *) (((char *) (&spAC)) + (((temp_v0 != 0) ^ 0) * 0))) = (s32) (*((s32 *) (((char *) (&D_80326A74)) + 0)));
  *((s32 *) (((char *) (&spAC)) + 4)) = (s32) (*((s32 *) (((char *) (&D_80326A74)) + 4)));
  *((s32 *) (((char *) (&spAC)) + 0xC)) = (s32) (*((s32 *) (((char *) (&D_80326A74)) + 0xC)));
  *((s32 *) (((char *) (&spAC)) + 8)) = (s32) (*((s32 *) (((char *) (&D_80326A74)) + 8)));
  *((s32 *) (((char *) sp9C) + 4)) = (s32) ((*((s32 *) (((char *) (&D_80326A84)) + 4))) & 0xFFFFFFFFFFFFFFFFu);
  *((s32 *) (((char *) sp9C) + 0)) = (s32) (*((s32 *) (((char *) (&D_80326A84)) + 0)));
  *((s32 *) (((char *) sp9C) + 8)) = (s32) (*((s32 *) (((char *) (&D_80326A84)) + 8)));
  *((s32 *) (((char *) sp9C) + 0xC)) = (((s32) (*((s32 *) (((char *) (&D_80326A84)) + 0xC)))) & 0xFFFFu) & 0xFFFF;
  do
  {
    func_802C5150(arg0, &spD0);
  }
  while (0);
  func_8022A0D0(&spD0, 0, 0xC1900000, 0xBF000000);
  temp_v0 = func_802AA674(*((s32 *) (((char *) arg0) + 0)), &spD0, *((f32 *) (((char *) arg0) + 0xE0)), 0x3F800000, 1.f, 2.0f, *((s32 *) (((char *) arg0) + 0x8C)), 0xD, 1);
  if ((temp_v0 != 0) ^ 0)
  {
    func_8029583C(temp_v0, 0x1A7, 0);
    func_80295804(temp_v0, 0);
    func_802957F8(temp_v0, 0x40E00000);
  }
  temp_fs5 = D_80341AE0;
  var_s1 = 0;
  var_s0 = &spBC;
  do
  {
    temp_v0_2 = func_802AA674(*((s32 *) (((char *) arg0) + 0)), &spD0, (*((f32 *) (((char *) arg0) + 0xE0))) / (2.0f * 1.0f), 0x3F800000, 600.0f, func_8023499C() + 20.0f, *((s32 *) (((char *) arg0) + 0x8C)), 0xE, 2);
    *var_s0 = temp_v0_2;
    if (temp_v0_2 != 0)
    {
      {
        s32 __repair_call_arg0;
        int __repair_call_arg1;
        __repair_call_arg0 = temp_v0_2;
        __repair_call_arg1 = 0x63;
        func_80295794(__repair_call_arg0, __repair_call_arg1);
      }
      func_80295898(*var_s0, (*(var_s1 + sp9C)) * 2.0f, 0, *((0, var_s1 + (&spAC))));
      func_802958D8(*var_s0, 0, 0, temp_fs5);
      func_802958CC(*var_s0, 0x40A00000);
      func_802958C0(*var_s0, 0x40A00000);
    }
    ++var_s0;
    var_s1 += 4;
  }
  while (var_s0 != (&spCC));
  *((f32 *) (((char *) arg0) + 0xF4)) = arg1;
  *((s32 *) (((char *) arg0) + 0x18C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x18C))) - 1);
}

