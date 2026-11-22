#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 func_80230F68();
s32 func_80231A24();
s32 osInvalDCache();
s32 osPiStartDma();
s32 osWritebackDCache();
extern u32 D_80000318;
extern char D_80254FD8[];
extern char D_80255008[];
extern char D_80255038[];
extern s32 D_80278740;
extern char D_80280C10[];
extern char D_80280C30[];
void func_80231A40(s32 arg0, s32 arg1, u32 arg2)
{
  u32 var_s0;
  var_s0 = arg2;
  if (D_80278740 == 0)
  {
    if (arg0 % 8)
    {
      func_80231A24(D_80254FD8, arg0);
      return;
    }
    if (arg1 % 2)
    {
      func_80231A24(D_80255008, arg1);
      return;
    }
    if (((u32) D_80000318) < var_s0)
    {
      func_80231A24(D_80255038, (s32) var_s0);
      return;
    }
    if (var_s0 & 1)
    {
      var_s0 = (var_s0 + 1) & (~1);
    }
    osWritebackDCache(arg0, var_s0, arg1);
    osPiStartDma(D_80280C10, 0, 0, arg1, arg0, var_s0, D_80280C30);
    osInvalDCache(arg0, var_s0);
    {
      func_80230F68(0);
    }
  }
}

