s32 func_8022A0D0(s32 *, s32, s32, s32);
f32 func_8023499C();
s32 func_80295794(s32, s32);
s32 func_802957F8(s32, s32);
s32 func_80295804(s32, s32);
s32 func_8029583C(s32, s32, s32);
s32 func_80295898(s32, s32, s32, s32);
s32 func_802958C0(s32, s32);
s32 func_802958CC(s32, s32);
s32 func_802958D8(s32, f32, f32, f32);
unsigned long long func_802AA674(s32, s32 *, f32, s32, f32, f32, s32, s32, s32);
s32 func_802C5150(s32 *);
extern s32 D_80326A94;
extern s32 D_80326AAC;
extern f32 D_80341AEC;
extern f32 D_80341AF0;
void func_802C1CE4(void *arg0, f32 arg1, s32 arg2)
{
  s32 *__base_D_80326AAC;
  char *__repair_addr;
  long spD4;
  s32 spEC;
  unsigned int spA4;
  s32 *__base_D_80326A94;
  u32 spBC;
  unsigned int spF0;
  f32 temp_fs0;
  f32 temp_fs1;
  f32 temp_fs2;
  register unsigned temp_v0;
  u32 temp_v0_2;
  s32 var_s1;
  __base_D_80326A94 = &D_80326A94;
  __repair_addr = (char *) (((char *) (&spBC)) + 0);
  *((s32 *) __repair_addr) = (s32) (*((s32 *) (((char *) __base_D_80326A94) + 0)));
  *((s32 *) (((char *) (&spBC)) + 4)) = (s32) (*((s32 *) (((char *) __base_D_80326A94) + 4)));
  *((s32 *) (((char *) (&spBC)) + 0xC)) = (s32) (*((s32 *) (((char *) __base_D_80326A94) + 0xC)));
  *((s32 *) (((char *) (&spBC)) + 8)) = (s32) (*((s32 *) (((char *) __base_D_80326A94) + 8)));
  *((s32 *) (((char *) (&spBC)) + 0x10)) = (s32) (*((s32 *) (((char *) __base_D_80326A94) + 0x10)));
  *((s32 *) (((char *) (&spBC)) + 0x14)) = (s32) (*((s32 *) (((char *) __base_D_80326A94) + 0x14)));
  *((s32 *) (((char *) (&spA4)) + 4)) = (s32) (*((s32 *) (((char *) __base_D_80326AAC) + 4)));
  __base_D_80326AAC = &D_80326AAC;
  *((s32 *) (((char *) (&spA4)) + 8)) = (s32) (*((s32 *) (((char *) __base_D_80326AAC) + 8)));
  *((s32 *) (((char *) (&spA4)) + 0)) = (s32) (*((s32 *) (((char *) __base_D_80326AAC) + ((*(var_s1 + (&spBC))) * 0))));
  *((s32 *) (((char *) (&spA4)) + 0xC)) = (s32) (*((s32 *) (((char *) __base_D_80326AAC) + 0xC)));
  *((s32 *) (((char *) (&spA4)) + 0x14)) = (s32) (*((s32 *) (((char *) __base_D_80326AAC) + 0x14)));
  *((s32 *) (((char *) (&spA4)) + 0x10)) = (s32) (*((s32 *) (((char *) __base_D_80326AAC) + 0x10)));
  func_802C5150(&spF0);
  func_8022A0D0(&spF0, 0, 0xC0A00000, 0xBF000000);
  temp_v0 = func_802AA674(*((s32 *) (((char *) arg0) + 0)), &spF0, (*((f32 *) (((char *) arg0) + 0xE0))) / 2, 0x3F800000, 1.0f, 2, *((s32 *) (((char *) arg0) + 0x8C)), 0xD, 1);
  if (temp_v0)
  {
    {
      s32 __repair_call_arg0;
      int __repair_call_arg1;
      int __repair_call_arg2;
      __repair_call_arg0 = temp_v0;
      __repair_call_arg1 = 0x1A7;
      __repair_call_arg2 = 0;
      func_8029583C(__repair_call_arg0, __repair_call_arg1, __repair_call_arg2);
    }
    func_80295804(temp_v0, 0);
    func_802957F8(temp_v0, 0x40E00000);
  }
  temp_fs2 = D_80341AEC;
  goto dummy_label_843574;
  dummy_label_843574:
  ;

  ;
  ;
  ;
  ;
  ;
  var_s1 = 0;
  __base_D_80326AAC = &spD4;
  do
  {
    temp_v0_2 = func_802AA674(*((s32 *) (((char *) arg0) + 0)), &spF0, *((f32 *) (((char *) arg0) + 0xE0)), 0x40E00000, 160.0f, func_8023499C() + 5.0f, *((s32 *) (((char *) arg0) + 0x8C)), 0xF, 2);
    do
    {
      *__base_D_80326AAC = temp_v0_2;
      if (temp_v0_2)
      {
        if ((*((s32 *) (((char *) arg0) + 0x8C))) == 1)
        {
          func_80295794(temp_v0_2, 0x5F);
        }
        else
        {
          func_80295794(*__base_D_80326AAC, 0x5D);
        }
        func_80295898(*__base_D_80326AAC, *(var_s1 + (&spA4)), 0, *(var_s1 + (&spBC)));
        func_802958C0(*__base_D_80326AAC, 0x40E00000);
        func_802958CC(*__base_D_80326AAC, 0x3D8F5C29);
        temp_fs0 = func_8023499C(); temp_fs1 = func_8023499C();
        func_802958D8(*__base_D_80326AAC, temp_fs0 * D_80341AF0, (-temp_fs1) * temp_fs2, (-func_8023499C()) * temp_fs2);
      }
    }
    while (0);
    var_s1 += 4;
    __base_D_80326AAC += 1;
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
  }
  while (__base_D_80326AAC != (&spEC));
  *((f32 *) (((char *) arg0) + 0xF4)) = arg1;
  *((s32 *) (((char *) arg0) + 0x18C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x18C))) - 1);
}

