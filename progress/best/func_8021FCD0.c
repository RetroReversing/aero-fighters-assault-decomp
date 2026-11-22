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
M2C_UNK func_80231A24(M2C_UNK *);
extern M2C_UNK D_80253794;
extern s32 D_80271B58;
extern s16 D_80271B5E;
extern s16 D_80271B62;
extern s16 D_80271B66;
extern s16 D_80271B68;
extern void *D_80273B90;
void func_8021FCD0(void)
{
  s16 *__base_D_80271B66;
  s16 var_a1;
  s16 var_a2;
  s16 var_t4;
  s16 var_t5;
  s16 var_t9;
  s16 var_v0;
  s32 temp_lo;
  s32 temp_t6;
  s32 temp_t7;
  
  s32 var_s1;
  void *temp_a0;
void *__repair_phase_temp_a0;
  void *temp_a0_3;
  void *temp_a0_5;
  void *temp_a0_6;
  void *temp_a0_7;
  __base_D_80271B66 = &D_80271B66;
  if ((*__base_D_80271B66) == (-1))
  {
    var_t9 = D_80271B62;
    var_t4 = D_80271B5E - D_80271B62;
  }
  else
  {
    var_t9 = *__base_D_80271B66;
    var_t4 = D_80271B68 - (*__base_D_80271B66);
  }
  var_t9 = var_t9;
  var_s1 = 1;
  if (var_t4 < 3)
  {
    func_80231A24(&D_80253794);
    return;
  }
  if (var_t4 > 0)
  {
    do
    {
      var_a1 = 0;
      if (var_s1 != 0)
      {
        var_s1 = 0;
        if (var_t4 < 0x10)
        {
          var_v0 = var_t4;
        }
        else
        {
          var_v0 = 0x10;
        }
        temp_a0 = D_80273B90;
        D_80273B90 = ((unsigned char *) temp_a0) + 8;
        *((s32 *) (((s8 *) temp_a0) + 0)) = (s32) ((((((var_v0 - 1) * 0x10) & 0xFF) << 0x10) | 0x04000000) | ((2 * (8 * var_v0)) & 0xFFFF));
        var_a2 = var_v0 - 2;
        *((s32 *) (((s8 *) temp_a0) + 4)) = (short) ((s32) (((var_t9 * 0x10) + (*(&D_80271B58))) + 0x80000000));
      }
      else
      {
        if (var_t4 >= 0xF)
        {
          temp_a0 = D_80273B90;
          temp_lo = var_t9 * 0x10;
          var_v0 = 0xF;
          D_80273B90 = ((unsigned char *) temp_a0) + 8;
          *((s32 *) (((s8 *) temp_a0) + 0)) = 0x04D100E0;
          *((s32 *) (((s8 *) temp_a0) + 4)) = (s32) ((temp_lo + (*(&D_80271B58))) + 0x80000000);
          temp_a0_3 = D_80273B90;
          D_80273B90 = ((unsigned char *) temp_a0_3) + 8;
          *((s32 *) (((s8 *) temp_a0_3) + 4)) = 0x960A;
          *((s32 *) (((s8 *) temp_a0_3) + 0)) = 0xBF000000;
          __repair_phase_temp_a0 = D_80273B90;
          D_80273B90 = ((unsigned char *) __repair_phase_temp_a0) + 8;
          *((s32 *) (((s8 *) __repair_phase_temp_a0) + 0)) = 0x040F0010;
          *((s32 *) (((s8 *) __repair_phase_temp_a0) + 4)) = (s32) ((temp_lo + (*(&D_80271B58))) + 0x800000E0);
        }
        else
        {
          temp_a0_5 = D_80273B90;
          var_v0 = var_t4;
          D_80273B90 = ((unsigned char *) temp_a0_5) + 8;
          *((s32 *) (((s8 *) temp_a0_5) + 0)) = (s32) (((var_t4 * 0x10) & 0xFFFF) | ((((((var_t4 - 1) * 0x10) | 1) & 0xFF) << 0x10) | 0x04000000));
          *((s32 *) (((s8 *) temp_a0_5) + 4)) = (s32) (((var_t9 * 0x10) + (*(&D_80271B58))) + 0x80000000);
          temp_a0_6 = D_80273B90;
          D_80273B90 = ((unsigned char *) temp_a0_6) + 8;
          *((s32 *) (((s8 *) temp_a0_6) + 4)) = 0x960A;
          *((s32 *) (((s8 *) temp_a0_6) + 0)) = 0xBF000000;
        }
        var_a2 = var_t4 - 1;
      }/*__repair_loop_weight*/do {
      var_t9 += var_t4;} while (0);
      var_t4 -= var_v0;
      if (var_a2 > 0)
      {
        do
        {
          temp_lo = var_a1 * 0xA;
          temp_a0_7 = D_80273B90;
          D_80273B90 = ((unsigned char *) temp_a0_7) + 8;
          *((s32 *) (((s8 *) temp_a0_7) + 0)) = 0xBF000000;
          temp_t6 = (temp_lo + 0xA) & 0xFF;
          temp_t7 = (temp_lo + 0x14) & 0xFF;
          var_a1 += 1;
          *((s32 *) (((s8 *) temp_a0_7) + 4)) = (s32) ((temp_t6 << 8) | temp_t7);
        }
        while (var_a1 < var_a2);
      }
    }
    while (var_t4 > 0);
  }
}

