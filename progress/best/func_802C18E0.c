#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
s32 func_8022A0D0();
s32 func_802957F8();
s32 func_80295804();
s32 func_8029583C();
s32 func_802AA674(s32, s32, s32, s32, f32, f32, s32, s32, s32);
s32 func_802C5150();
s32 func_802C57C4();
extern f32 D_80341AE4;
void func_802C18E0(void *arg0, f32 arg1, s32 arg2)
{
  char sp50[0x40];
  u32 temp_s1;
  unsigned long sp48;
  register unsigned temp_v0;
  func_802C57C4(arg0, 1);
  func_802C5150(arg0, sp50);
 temp_s1 = func_802AA674(*((s32 *) (((char *) arg0) + 0)), (u32) sp50, *((s32 *) (((char *) arg0) + 0xE0)), 0x3F800000, 1.0f, 1.5f, *((s32 *) (((char *) arg0) + 0x8C)), 0xD, 1); func_8022A0D0(sp50); func_8022A0D0(sp50);
  temp_v0 = func_802AA674(*((s32 *) (((char *) arg0) + 0)), sp50, *((s32 *) (((char *) arg0) + 0xE0)), 0x3F800000, 1.0f, D_80341AE4, *((s32 *) (((char *) arg0) + 0x8C)), 0xD, 1);
  sp48 = (s32) temp_v0;
  if (temp_s1 && temp_v0)
  {
    func_8029583C(temp_s1, 0x1CC, 0);
    func_8029583C(sp48, 0x1CC, 0);
    {
      s32 __repair_call_arg0;
      int __repair_call_arg1;
      __repair_call_arg0 = temp_s1;
      __repair_call_arg1 = 0;
      func_80295804(__repair_call_arg0);
    }
    func_80295804(sp48);
    func_802957F8(temp_s1, 0x40400000);
    func_802957F8(sp48, 0x40800000);
  }
  *((f32 *) (((char *) arg0) + 0xF4)) = arg1;
  *((s32 *) (((char *) arg0) + 0x18C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x18C))) - 1);
}
