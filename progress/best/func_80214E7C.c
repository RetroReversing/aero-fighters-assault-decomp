extern unsigned short D_80280BE6;
extern unsigned short D_80280BD8;
s32 func_802164C8(f32, f32, f32, f32, s32, s32, s32);
s32 func_802165D0(f32, f32, f32, f32, void *);
f32 func_8022AA40();
s32 func_80231C58();
s32 func_80234D30();
extern void *D_8024E710;
extern s32 D_8025C394;
extern s32 D_8025C398;
extern s32 D_8025C39C;
extern s32 D_8025C3A0;
extern s32 D_8025C3A4;
extern volatile unsigned char D_8025C3E0;
extern s32 D_8025C3E4;
extern char D_80280BC0[];
extern char D_80253004[];
s32 func_80214E7C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 *arg4, s32 *arg5, s32 *arg6)
{
  f32 temp_fa1;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv1;
  u16 temp_v0;
  f32 var_fs0;
  s32 temp_a0;
  s32 temp_t3;
  s32 var_s4;
  f32 temp_fv1_2;
  void *temp_s0;
  void *temp_s0_2;
  void *temp_s1;
  void *temp_s2;
  var_fs0 = arg3;
  D_8025C398 = 0;
  var_s4 = 0;
  if (D_80280BE6 > 0)
  {
    loop_2:
    temp_s0 = (var_s4 * 0x24) + D_8025C3E0;

    temp_v0 = *((u16 *) (((char *) temp_s0) + 0));
    if (((temp_v0 != 0xFFFF) && ((*((u8 *) (((char *) temp_s0) + 8))) & 1)) && ((temp_s2 = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x1C))) + (temp_v0 * ((0, 4))))), temp_s2 != NULL)))
    {
      temp_fv0 = *((f32 *) (((char *) temp_s0) + 0xC));
      temp_s1 = (((*(*((u16 **) (((char *) temp_s0) + 4)))) << 3) << 3) + (*((s32 *) 0x8025c3e0));
      var_fs0 *= (*((f32 *) (((char *) temp_s2) + 0x1C))) / temp_fv0;
      if (func_802164C8(arg0, arg1, arg2, var_fs0, *((f32 *) (((char *) temp_s1) + 0x30)), *((f32 *) (((char *) temp_s1) + 0x34)), *((f32 *) (((char *) temp_s1) + 0x38))) != 0)
      {
        D_8025C394 = var_s4;
        if ((*((u8 *) (((char *) temp_s2) + 0x11))) & 6)
        {
          func_802165D0(arg0, arg1, arg2, var_fs0, temp_s0);
          if (D_8025C398 >= ((s32) D_80280BD8))
          {
            if (1)
            {
            }
          }
          else
          {
            goto block_14;
          }
        }
        else
        {
          *((s32 *) (D_8025C39C + (D_8025C398 * 4))) = D_8025C394;
          temp_s0_2 = (D_8025C398 * 0xC) + D_8025C3A4;
          *((f32 *) (((char *) temp_s0_2) + 0)) = (f32) (arg0 - (*((f32 *) (((char *) temp_s1) + 0x30))));
          *((f32 *) (((char *) temp_s0_2) + 4)) = (f32) (arg1 - (*((f32 *) (((char *) temp_s1) + 0x34))));
          *((f32 *) (((char *) temp_s0_2) + 8)) = (f32) (arg2 - (*((f32 *) (((char *) temp_s1) + 0x38))));
          func_80234D30(temp_s0_2, temp_s0_2);
          temp_fv1 = *((f32 *) (((char *) temp_s0_2) + 4));
          temp_fv0_2 = *((f32 *) (((char *) temp_s0_2) + 0));
          temp_fa1 = *((f32 *) (((char *) temp_s0_2) + 8));
          temp_fv1_2 = ((*((f32 *) (((char *) temp_s2) + 0x1C))) - func_8022AA40(((temp_fv0_2 * temp_fv0_2) + (temp_fv1 * temp_fv1)) + (temp_fa1 * temp_fa1), temp_fa1)) / var_fs0;
          if (temp_fv1_2 < 0.0f)
          {
            *((f32 *) (D_8025C3A0 + (D_8025C398 * 4))) = temp_fv1_2;
          }
          else
          {
            *((f32 *) (D_8025C3A0 + (D_8025C398 * 4))) = 0.0f;
          }
          temp_a0 = D_8025C398 + 1;
          D_8025C398 = temp_a0;
          if (temp_a0 >= ((s32) D_80280BD8))
          {
            func_80231C58(temp_a0, D_80253004, &D_80280BD8);
            D_8025C398 -= 1;
          }
          goto block_14;
        }
      }
      else
      {
        block_14:
        goto block_15;

      }
    }
    else
    {
      block_15:
      temp_t3 = (var_s4 + 1) & 0xFFFF;

      var_s4 = temp_t3;
      if (temp_t3 < ((s32) D_80280BE6))
      {
        goto loop_2;
      }
    }
  }
  if (D_8025C398 != 0)
  {
    *arg4 = D_8025C39C;
    *arg5 = D_8025C3A0;
    *arg6 = D_8025C3A4;
  }
  return D_8025C398;
}

