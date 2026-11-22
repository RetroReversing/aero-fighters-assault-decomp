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
s32 func_8022A0D0(void *, f32, s32, s32);
s32 func_802AAE40(s32, void *, s32, s32, f32, f32, s32, s32, s32);
volatile long long func_802C5150(f32, s32 *);
s32 func_802CF948();
s32 func_802E9710();
s32 func_802C2DF8(void *arg0, f32 arg1, s32 arg2)
{
  char sp40[0x40];
  unsigned int temp_v0;
  *((s32 *) (((char *) arg0) + 0x18C)) = (s32) ((*((s32 *) (((char *) arg0) + 0x18C))) - 1);
  *((f32 *) (((char *) arg0) + 0xF4)) = arg1;
  func_802C5150(arg1, sp40);
  func_802CF948(sp40);
  func_8022A0D0(sp40, arg1 * 0, 0, 0xBF800000);
  temp_v0 = func_802AAE40(*((s32 *) (((char *) arg0) + 0)), sp40, 0x44098000, 0x3F800000, 1.0f, 2.0f, *((s32 *) (((char *) arg0) + 0x8C)), 0x18, 3);
  if (temp_v0 != 0)
  {
    if (1)
    {
      func_802E9710(temp_v0, 0x65);
    }
  }
  return 1;
}

