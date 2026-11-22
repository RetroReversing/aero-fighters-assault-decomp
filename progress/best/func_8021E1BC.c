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
f32 func_80222E50();
extern s32 D_8025C600;
void func_8021E1BC(s32 arg0)
{
  void *temp_a1;
  volatile unsigned short temp_t2;
  s32 temp_t5;
  s32 temp_t7;
  s32 temp_t9;
  s32 temp_v0;
  s32 temp_v1;
  s32 var_v0;
  void *sp1C;
  temp_a1 = (arg0 * 0x18) + D_8025C600;
  sp1C = temp_a1;
  sp1C = ((unsigned char *) temp_a1) + 8;
  *((f32 *) (((s8 *) temp_a1) + 4)) -= (*((f32 *) (((s8 *) sp1C) + 0xC))) * func_80222E50(arg0, temp_a1);
  if ((!((*((f32 *) (((s8 *) temp_a1) + 4))) > 0.0f)) && ((*((f32 *) (((s8 *) temp_a1) + 4))) <= 0.0f))
  {
    var_v0 = *((u8 *) (((s8 *) temp_a1) + 2));
    loop_3:
    temp_v1 = *((u8 *) (((s8 *) sp1C) + 8));

    switch ((u32) temp_v1)
    {
      case 0:
        if ((*((u8 *) (((s8 *) sp1C) + 9))) == 0)
      {
        *((u8 *) (((s8 *) temp_a1) + 2)) = (u8) (((s32) (var_v0 + 1)) % ((s32) (*((u8 *) (((s8 *) temp_a1) + 8)))));
      }
      else
      {
        temp_v1 = *((u8 *) (((s8 *) temp_a1) + 8));
        *((u8 *) (((s8 *) temp_a1) + 2)) = (u8) (((s32) ((var_v0 + temp_v1) - 1)) % ((s32) temp_v1));
      }
        var_v0 = *((u8 *) (((s8 *) temp_a1) + 2));

      default:
        block_25:
      *((f32 *) (((s8 *) temp_a1) + 4)) += *((f32 *) (((s8 *) ((*((s32 *) (((s8 *) sp1C) + 4))) + (var_v0 * 8))) + 4));

        if (!(((*((f32 *) (((s8 *) temp_a1) + 4))) - 1) < 0.0f))
      {
      }
      else
      {
        goto loop_3;
      }
        break;

      case 1:
        temp_t7 = var_v0 + 1;
        if ((*((u8 *) (((s8 *) sp1C) + 9))) == 0)
      {
        *((u8 *) (((s8 *) temp_a1) + 2)) = temp_t7;
        var_v0 = temp_t7 & 0xFF;
        if ((*((u8 *) (((s8 *) temp_a1) + 8))) == var_v0)
        {
          *((s8 *) (((s8 *) temp_a1) + 0)) = 0;
          return;
        }
        goto block_17;
      }
        temp_t9 = var_v0 - 1;
        if (var_v0 == 0)
      {
        *((s8 *) (((s8 *) temp_a1) + 0)) = 0;
        return;
      }
        *((u8 *) (((s8 *) temp_a1) + 2)) = temp_t9;
        var_v0 = temp_t9 & 0xFF;
        block_17:
      goto block_25;


      case 2:
        if ((*((u8 *) (((s8 *) sp1C) + 9))) == 0)
      {
        temp_t2 = var_v0 + 1;
        *((u8 *) (((s8 *) temp_a1) + 2)) = temp_t2;
        var_v0 = temp_t2 & 0xFF;
        if ((*((u8 *) (((s8 *) temp_a1) + 8))) == (var_v0 + 1))
        {
          *((u8 *) (((s8 *) sp1C) + 9)) = 1U;
          goto block_23;
        }
      }
      else
      {
        temp_t5 = var_v0 - 1;
        var_v0 = temp_t5 & 0xFF;
        *((u8 *) (((s8 *) temp_a1) + 2)) = temp_t5;
        if (var_v0 == 0)
        {
          *((u8 *) (((s8 *) sp1C) + 9)) = 0U;
          block_23:
          var_v0 = *((u8 *) (((s8 *) temp_a1) + 2));

        }
      }
        goto block_25;

    }

  }
}

