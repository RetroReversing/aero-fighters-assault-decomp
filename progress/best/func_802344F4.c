s32 func_80231A24();
s32 func_80233AB8();
s32 func_80233BA0();
s32 func_802341E0();
extern void *D_8024E710;
extern char D_802552A8[];
extern char D_802552CC[];
extern char D_802552FC[];
extern char D_80255328[];
extern u16 D_80280BEC;
extern unsigned long long D_80283950;
void func_802344F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int *__repair_home0 = &arg0;
  s32 *var_s0;
  s32 temp_s0;
  u32 temp_s0_10;
  s32 temp_s0_11;
  unsigned temp_s0_12;
  s32 temp_s0_13;
  s32 temp_s0_2;
  unsigned long temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s0_5;
  s32 temp_s0_6;
  s32 temp_s0_7;
  s32 temp_s0_8;
  s32 temp_s0_9;
  s32 temp_s2;
  s32 temp_t0;
  s32 temp_t0_2;
  s32 temp_t3;
  s32 temp_t6;
  void *temp_s1;
  u32 temp_a1;
  unsigned int temp_v0;
  if ((*__repair_home0) >= ((s32) D_80280BEC))
  {
    func_80231A24(D_802552A8, *__repair_home0);
    return;
  }
  var_s0 = &arg1;
  temp_s1 = ((*__repair_home0) * 0x64) + D_80283950;
  loop_3:
  temp_s0 = ((s32) (((s8 *) var_s0) + 3)) & (~3);

  temp_a1 = *((u32 *) temp_s0);
  var_s0 = temp_s0 + 4;
  switch (temp_a1)
  {
    case 1:
      temp_s2 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      *((s16 *) (((char *) temp_s1) + 4)) = (s16) (*((s16 *) temp_s2));
      temp_s0_3 = ((temp_s2 + 4) + 3) & (~3);
      if ((*((s16 *) (((char *) temp_s1) + 4))) <= 0)
    {
      *((s16 *) (((char *) temp_s1) + 4)) = 1;
    }
      var_s0 = temp_s0_3 + 4;
      *((s16 *) (((char *) temp_s1) + 6)) = (s16) (*((s16 *) (((temp_s2 + 4) + 3) & (~3))));
      if ((*((s16 *) (((char *) temp_s1) + 6))) <= 0)
    {
      *((s16 *) (((char *) temp_s1) + 6)) = 1;
    }
      goto loop_3;

    case 2:
      temp_s0_4 = (((s32) (((s8 *) var_s0) + 3)) & (~3)) & 0xFFFFFFFFFFFFFFFF;
      *((s16 *) (((char *) temp_s1) + 8)) = (s16) (*((s16 *) temp_s0_4));
      temp_s2 = (temp_s0_4 + 7) & (~3);
 do { var_s0 = temp_s2 + 4; *((s16 *) (((char *) temp_s1) + 0xA)) = (s16) (*((s16 *) temp_s2)); } while (0);
      goto loop_3;

    case 7:
      temp_s0_6 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      temp_s0_7 = (temp_s0_6 + 7) & (~3);
      *((s8 *) (((char *) temp_s1) + 0xE)) = (s8) (*((s8 *) temp_s0_6));
      temp_s0_8 = (temp_s0_7 + 7) & (~3);
      *((s8 *) (((char *) temp_s1) + 0xF)) = (s8) (*((s8 *) temp_s0_7));
      *((s8 *) (((char *) temp_s1) + 0x10)) = (s8) (*((s8 *) temp_s0_8));
      temp_s0_9 = (temp_s0_8 + 7) & (~3);
      var_s0 = (temp_s0_9 & 0xFFFFFFFFFFFFFFFF) + 4;
      *((s8 *) (((char *) temp_s1) + 0x11)) = (s8) (*((s8 *) temp_s0_9));
      goto loop_3;

    case 3:
      temp_s0_10 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      temp_t0 = *((s32 *) temp_s0_10);
      var_s0 = temp_s0_10 + 4;
      *((s8 *) (((char *) temp_s1) + 0)) = (s8) temp_t0;
      goto loop_3;

    case 9:
      var_s0 = (((s32) (((s8 *) var_s0) + 3)) & (~3)) + 4;
      func_802341E0(temp_s1, *((s32 *) (((char *) var_s0) + (-4))));
      goto loop_3;

    case 8:
      func_80231A24(D_802552CC, (s32) temp_a1);
      goto loop_3;

    case 5:
      temp_s0_11 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      goto dummy_label_498433;
      dummy_label_498433:
    ;

      ;
      ;
      ;
      ;
      temp_s2 = *((s32 *) temp_s0_11);
      var_s0 = ((u32) temp_s0_11) + 4;
      temp_v0 = temp_s2 & 0xFFFF;
      *((s16 *) (((char *) temp_s1) + 0xC)) = (s16) temp_s2;
      if (temp_v0 != 0xFFF)
    {
      temp_s2 = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x2C))) + (temp_v0 * 4)));
      switch (temp_s2)
      {
        case 0:
        {
          func_80231A24(D_802552FC, temp_v0);
          *((s16 *) (((char *) temp_s1) + 0xC)) = 0xFFF;
        }
          break;

        default:
        {
          func_80233AB8(temp_s1, temp_s2);
          func_80233BA0(temp_s1, temp_s2);
        }
          break;

      }

    }
      goto loop_3;

    case 10:
      temp_s0_12 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      temp_t0_2 = *((s32 *) temp_s0_12);
      var_s0 = temp_s0_12 + 4;
      if (temp_t0_2 == 0)
    {
      *((u16 *) (((char *) temp_s1) + 0x2C)) &= ~0x20;
    }
    else
    {
      *((u16 *) (((char *) temp_s1) + 0x2C)) |= 0x20;
    }
      goto loop_3;

    case 11:
      temp_s0_13 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      temp_t6 = *((s32 *) temp_s0_13);
      var_s0 = temp_s0_13 + 4;
      if (((u32) temp_t6) == 0)
    {
      *((u16 *) (((char *) temp_s1) + 0x2C)) &= ~1;
    }
    else
    {
      *((u16 *) (((char *) temp_s1) + 0x2C)) |= 1;
    }
      goto loop_3;

    default:
      func_80231A24(D_80255328, (s32) temp_a1);
      goto loop_3;

  }

}
