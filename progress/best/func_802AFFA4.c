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
s32 func_8029DDD8();
s32 func_8029E4CC();
void func_802AFFA4(void *arg0, s32 arg1, s32 arg2)
{
  int *__repair_home1 = &arg1;
  s32 sp18;
  s32 temp_a0;
  temp_a0 = ((unsigned char *) arg0) + 0x3570;
  sp18 = temp_a0;
  func_8029DDD8(temp_a0, arg2);
  *((s32 *) (((char *) arg0) + 0x32A4)) = 5;
  *((s8 *) (((char *) arg0) + 0x3624)) = ((s8) (*__repair_home1)) & 0xFFFFFFFFFFFFFFFF;
  func_8029E4CC(temp_a0);
}

