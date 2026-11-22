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
s32 func_8021E66C();
s32 func_8021E708();
s32 func_8021E83C();
s32 func_8021E87C();
s32 func_8021F35C();
s32 func_8021F4E4();
s32 func_8021FCD0();
void func_8028C9D0(s32 arg0, s32 arg1, s32 arg2)
{
  s32 sp3C;
  int *__repair_home0 = &arg0;
  s32 sp30;
  volatile int temp_t5;
  func_8021F4E4();
  func_8021F35C(0x19, 0xCA, 0, 0, 0, 0xFF, 0xCA, 7, 0xFF);
  func_8021F35C(0x126, 0xCA, 0, 0, 0, 0xFF, 0xCA, 7, 0xFF);
  func_8021F35C(0x126, 0xDC, 0, 0, 0, 0xFF, 0xCA, 7, 0xFF);
  func_8021F35C(0x19, 0xDC, 0, 0, 0, 0xFF, 0xCA, 7, 0xFF);
  func_8021FCD0();
  func_8021E708(0, 0, 0, 0xFF);
  func_8021E66C(0);
  sp3C = (func_8021E83C(arg1) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu;
  temp_t5 = ((s32) (0x140 - ((sp3C + func_8021E83C(arg2)) ^ 0))) / 2;
  do
  {
    func_8021E87C(temp_t5, 0xCE);
  }
  while (0);
  ;
  func_8021E87C(temp_t5 + sp3C, 0xCE, arg2);
}

