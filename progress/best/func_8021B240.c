s32 func_80231A24();
extern void *D_8024E710;
extern char D_802531A8[];
extern char D_802531D8[];
extern char D_80253204[];
extern char D_80253238[];
extern char D_8025326C[];
extern s32 D_8025C3E0;
extern u16 D_80280BE6;
void func_8021B240(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int *__repair_home0 = &arg0;
  s32 *var_s0;
  s32 *var_v0;
  s32 *var_v1;
  s16 temp_a1;
  unsigned long temp_s0;
  s32 temp_s0_2;
  s32 temp_s0_5;
  unsigned temp_s0_4;
  int temp_s0_6;
  register s32 temp_s0_3;
  s32 temp_s0_7;
  s32 temp_s0_8;
  register int temp_v0;
  s32 temp_v0_2;
  void *temp_s1;
  if ((*__repair_home0) >= ((s32) D_80280BE6))
  {
    func_80231A24(D_802531A8);
    return;
  }
  temp_s1 = (3 * (12 * (*__repair_home0))) + D_8025C3E0;
  var_s0 = &arg1;
  if ((*((u16 *) (((char *) temp_s1) + 0))) == 0xFFFF)
  {
    func_80231A24(D_802531D8);
    return;
  }
  loop_5:
  temp_s0 = ((s32) (((s8 *) var_s0) + 3)) & (~3);

  temp_a1 = *((s16 *) (((char *) temp_s0) + 2));
  temp_s0_2 = temp_s0 + 4;
  switch (temp_a1)
  {
    case 0:

    default:
      func_80231A24(D_8025326C, (s32) temp_a1);
      break;

    case 1:
      if ((temp_s0_2 & 0xFFFFu) & 1)
    {
      var_v0 = var_s0 - 0x16;
      var_s0 = temp_s0_2 + 7;
    }
    else
    {
      if (temp_s0_2 & 2)
      {
        var_s0 = temp_s0_2 + 0xA;
        var_v1 = var_s0 - 0x28;
      }
      else
      {
        var_s0 = ((temp_s0_2 + 7) & (~7)) + 8;
        var_v1 = var_s0;
      }
      var_v0 = var_v1;
    }
      *((f32 *) (((char *) temp_s1) + 0xC)) = (f32) ((*((f32 *) (((char *) (*((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x1C))) + ((*((u16 *) (((char *) temp_s1) + 0))) * 4))))) + 0x1C))) * ((f32) (*((f64 *) (((char *) var_v0) + (-8))))));
      goto loop_5;

    case 2:
      temp_s0_3 = (temp_s0_2 + 3) & (~3);
      temp_v0 = *((s32 *) temp_s0_3);
      var_s0 = temp_s0_3 + 4;
      if (temp_v0 >= 0x20)
    {
      func_80231A24(D_80253204, (s32) temp_a1);
    }
    else
    {
      *((s32 *) (((char *) temp_s1) + 0x10)) &= ~(1 << temp_v0);
    }
      goto loop_5;

    case 3:
      temp_s0_4 = (temp_s0_2 + 3) & (~3);
      temp_v0_2 = *((s32 *) temp_s0_4);
      var_s0 = temp_s0_4 + 4;
      if (temp_v0_2 >= 0x20)
    {
      func_80231A24(D_80253238, temp_a1);
    }
    else
    {
      *((s32 *) (((char *) temp_s1) + 0x10)) |= 1 << temp_v0_2;
    }
      goto loop_5;

    case 4:
      temp_s0_5 = (temp_s0_2 + 3) & (~3);
      temp_s0_6 = (temp_s0_5 + 7) & (~3);
      *((s32 *) (((char *) temp_s1) + 0x14)) = (s32) (*((s32 *) temp_s0_5));
      var_s0 = temp_s0_6 + 4;
      *((s32 *) (((char *) temp_s1) + 0x1C)) = (s32) (*((s32 *) temp_s0_6));
      goto loop_5;

    case 5:
      temp_s0_7 = (temp_s0_2 + 3) & (~3);
      temp_s0_8 = (temp_s0_7 + 7) & (~3);
      var_s0 = temp_s0_8 + 4;
      *((s32 *) (((char *) temp_s1) + 0x18)) = (s32) (*((s32 *) temp_s0_7));
      *((s32 *) (((char *) temp_s1) + 0x20)) = (s32) (*((s32 *) temp_s0_8));
      goto loop_5;

  }

}

