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
s32 func_803021B8(s32, u8 *, s32, s32, s32);
M2C_UNK func_80302558(s32, u8 *, u8 *);
M2C_UNK func_803025AC(s32, u8 *, f32);
M2C_UNK func_803025E4(s32, u8 *, f32);
s32 func_80305E10(M2C_UNK, M2C_UNK);
s32 func_80320640(u8 *arg0, M2C_UNK);
f32 func_80320670(u8 *, M2C_UNK);
M2C_UNK func_803206A8(u8 *, M2C_UNK);
s32 func_803206F4(u8 *, M2C_UNK);
f32 func_8032072C(u8 *, s32);
M2C_UNK func_803207A4(u8 *, u8);
extern s32 D_8033E63C;
void func_80320CFC(u8 *arg0, u8 arg1)
{
  s32 *__base_D_8033E63C;
  f32 sp38;
  volatile unsigned long long pad;
  s32 sp2C;
  f32 sp40;
  s32 temp_s0;
  u8 *temp_s0_2;
  u8 var_a1;
  temp_s0 = func_80320640(arg0, 0) & 0xFF;
  sp40 = func_80320670(arg0, 0);
  func_803206A8(arg0, 0);
  sp38 = func_8032072C(arg0, func_803206F4(arg0, 0));
  var_a1 = arg1 & 0xFF;
  *arg0 = arg1;
  if ((var_a1 == 1) && (temp_s0 != 0xFF))
  {
    sp2C = temp_s0; temp_s0 = 0;
    goto dummy_label_286247;
    dummy_label_286247:
    ;

    ;
    temp_s0_2 = arg0 + 0x6C; __base_D_8033E63C = &D_8033E63C;
    if (func_803021B8((*__base_D_8033E63C) + 0x8F4, temp_s0_2, sp2C, func_80305E10(0x384, 0), 0x38) != 0)
    {
      func_80302558((*__base_D_8033E63C) + 0x8F4, temp_s0_2, arg0 + 0xC);
      func_803025AC((*__base_D_8033E63C) + 0x8F4, temp_s0_2, sp40);
      func_803025E4((*__base_D_8033E63C) + 0x8F4, temp_s0_2, sp38);
    }
    var_a1 = *arg0;
  }
  func_803207A4(arg0, var_a1);
}

