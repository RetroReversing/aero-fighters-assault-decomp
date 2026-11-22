s32 func_80231A24();
extern void *D_8024E710;
extern char D_80252D1C[];
extern char D_80252D50[];
void func_8021178C(u32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *var_s0;
  f32 *temp_t0;
  f32 *temp_t9;
  s32 *temp_t2;
  s32 *temp_t4;
  s32 *temp_t6;
  s32 *temp_t7;
  s32 temp_lo;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s0_5;
  s32 temp_s0_6;
  s32 temp_s0_7;
  s32 temp_s0_8;
  s32 temp_s0_9;
  s8 *temp_t3;
  s8 var_v0;
  u32 temp_a1;
  void *temp_s2;
  if (arg0 != 0xFFFF)
  {
    var_s0 = &arg1;
    temp_s2 = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x1C))) + (arg0 * 4)));
    if (temp_s2 == NULL)
    {
      func_80231A24(D_80252D1C);
      return;
    }
    loop_4:
    temp_s0 = ((s32) (((s8 *) var_s0) + 3)) & (~3);

    temp_a1 = *((u32 *) temp_s0);
    var_s0 = temp_s0 + 4;
    switch (temp_a1)
    {
      case 2:
        temp_s0_2 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
        temp_t6 = *((s32 *) temp_s0_2);
        var_s0 = temp_s0_2 + 4;
        *temp_t6 = (s32) ((*((u8 *) (((char *) temp_s2) + 0x10))) & 0xFFFFFFFFFFFFFFFF);
        goto loop_4;

      case 5:
        var_v0 = 0;
        temp_s0_3 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
        if ((((*((s32 *) (*(*((s32 ***) (((char *) (*((void **) (((char *) temp_s2) + 8)))) + 0)))))) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0x02000000)
      {
        var_v0 = 1;
      }
        temp_t3 = *((s32 *) temp_s0_3);
        var_s0 = temp_s0_3 + 4;
        *temp_t3 = var_v0;
        goto loop_4;

      case 4:
        temp_s0_4 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
        temp_t7 = *((s32 *) temp_s0_4);
        var_s0 = temp_s0_4 + 4;
        *temp_t7 = (s32) (*((u8 *) (((char *) (*((void **) (((char *) temp_s2) + 8)))) + 4)));
        goto loop_4;

      case 1:
        temp_s0_5 = (((s32) (((s8 *) var_s0) + 3)) & 0xFFFFu) & (~3);
        temp_t0 = (*((s32 *) temp_s0_5)) & 0xFFFFFFFFFFFFFFFFu;
        var_s0 = temp_s0_5 + 4;
        *temp_t0 = *((f32 *) (((char *) temp_s2) + 0x1C));
        goto loop_4;

      case 9:
        temp_s0_6 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
        temp_t9 = *((s32 *) temp_s0_6);
        var_s0 = temp_s0_6 + 4;
        *temp_t9 = *((f32 *) (((char *) temp_s2) + 0x20));
        goto loop_4;

      case 8:
        temp_s0_7 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
        temp_t4 = *((s32 *) temp_s0_7);
        var_s0 = temp_s0_7 + 4;
        *temp_t4 = (s32) (*((u8 *) (((char *) temp_s2) + 0x11)));
        goto loop_4;

      case 7:
        temp_s0_8 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
        temp_lo = (*((s32 *) temp_s0_8)) * 0x24;
        temp_s0_9 = (temp_s0_8 + 7) & (~3);
        temp_t2 = *((s32 *) temp_s0_9);
        var_s0 = temp_s0_9 + 4;
        *temp_t2 = (s32) (*((u8 *) (((char *) ((*((s32 ***) (((char *) (*((void **) (((char *) temp_s2) + 8)))) + 0))) + temp_lo)) + 6)));
        goto loop_4;

      case 0:

      default:
        func_80231A24(D_80252D50, temp_a1);
        goto loop_4;

    }

  }
}

