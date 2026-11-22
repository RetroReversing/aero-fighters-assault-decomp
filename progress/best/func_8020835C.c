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
s32 func_80208230();
u32 func_8020833C();
s32 func_80239120();
s32 func_802392C0();
s32 func_80239650();
s32 func_802399C0();
s32 func_80239F30();
extern char D_8024E6F0[];
extern char D_8024E700[];
extern s32 D_8024E704;
extern char D_8025C320[];
void func_8020835C(s32 arg0, u8 *arg1, s32 arg2, s32 *arg3)
{
  int __repair_literal;
  int *__repair_home1 = &arg2;
  s32 sp84;
  s32 sp64;
  s32 *sp60;
  s32 sp58[2];
  char sp20[0x14];
  char *var_a0;
  s32 *var_a3;
  s32 temp_a3;
  char *var_a0_3;
  u32 temp_t0;
  u32 temp_v0;
  u32 var_a1;
  char *var_v1;
  u8 temp_t2;
  u8 temp_t5;
  void *var_a0_2;
  void *var_v1_2;
  var_a3 = arg3;
  if (var_a3 == NULL)
  {
    var_a3 = &sp84;
  }
  arg3 = var_a3;
  if (func_80208230(arg0, arg1, arg2, arg0, arg1) != 0)
  {
    *arg3 = 0;
    return;
  }
  temp_v0 = func_8020833C(*__repair_home1);
  temp_t0 = temp_v0;
  var_a1 = 0;
  __repair_literal = 0;
  if ((*__repair_home1) > __repair_literal)
  {
    temp_a3 = (*__repair_home1) & 3;
    if (temp_a3 != 0)
    {
      var_v1 = arg1;
      var_a0 = sp20;
      __repair_rows:
      {
 do { temp_t2 = *((u8 *) var_v1); var_a1 += 1; } while (0);
        var_a0 += 1;
        var_v1 += 1;
        *((u8 *) (((s8 *) var_a0) + (-1))) = temp_t2;
      }

      if (temp_a3 != var_a1)
      {
        goto __repair_rows;
      }
      if (var_a1 != (*__repair_home1))
      {
        goto block_9;
      }
    }
    else
    {
      block_9:
      var_v1_2 = arg1 + var_a1;

      var_a0_2 = sp20 + var_a1;
      __repair_rows_:
      {
        var_a1 += 4;
        var_a0_2 = ((unsigned char *) var_a0_2) + 4;
        *((u8 *) (((s8 *) var_a0_2) + (-4))) = (u8) (*((u8 *) (((s8 *) var_v1_2) + 0)));
        temp_a3 = (u8) (*((u8 *) (((s8 *) var_v1_2) + 1)));
        var_v1_2 = ((unsigned char *) var_v1_2) + 4;
        *((u8 *) (((s8 *) var_a0_2) + (-3))) = temp_a3;
        *((u8 *) (((s8 *) var_a0_2) + (-2))) = (u8) (*((u8 *) (((s8 *) var_v1_2) + (-2))));
        *((u8 *) (((s8 *) var_a0_2) + (-1))) = (u8) (*((u8 *) (((s8 *) var_v1_2) + (-1))));
      }

      if (var_a1 != (*__repair_home1))
      {
        goto __repair_rows_;
      }
    }
  }
  if (var_a1 < temp_v0)
  {
    var_a0_3 = sp20 + var_a1;
    do
    {
      var_a1 += 1;
      *((s8 *) var_a0_3) = 0;
      var_a0_3 += 1;
    }
    while (var_a1 < temp_v0);
  }
  sp60 = sp20;
  sp58[1] = temp_t0;
  func_80239120(D_8025C320, 0x1000, D_8024E704, D_8024E6F0, D_8024E700, sp58);
  func_802399C0(D_8025C320, 0x1000, D_8024E704, D_8024E6F0, D_8024E700);
  func_80239F30(D_8025C320, 0x1000, D_8024E704, D_8024E6F0, D_8024E700, sp58[1], sp58);
  func_80239650(D_8025C320, sp58[0], 1, 0, sp58[1], sp60);
  func_802392C0(D_8025C320, sp58[0], &sp64);
  *arg3 = sp64;
}
