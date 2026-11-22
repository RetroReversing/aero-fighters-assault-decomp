s32 func_80231A24();
extern void *D_8024E710;
extern char D_80253528[];
extern char D_8025354C[];
void func_8021D228(u32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *var_s0;
  register f32 *temp_t4;
  f32 temp_fv0;
  s32 temp_s0;
  f32 var_fv1;
  s32 temp_s0_10;
  register s32 temp_s0_11;
  register s32 temp_s0_12;
  s32 temp_s0_13;
  s32 temp_s0_14;
  unsigned int temp_s0_2;
  int temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s0_5;
  unsigned int temp_s0_6;
  s32 temp_s0_7;
  int temp_s0_8;
  unsigned temp_s0_9;
  u32 temp_a1;
  void *temp_s1;
  temp_s1 = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x14))) + (((u32) arg0) * 4)));
  if (0)
  {
  }
  var_s0 = &arg1;
  if (temp_s1 == NULL)
  {
    func_80231A24(D_80253528, arg0);
    return;
  }
  loop_3:
  temp_s0 = ((s32) (((s8 *) var_s0) + 3)) & (~3);

  temp_a1 = *((u32 *) temp_s0);
  var_s0 = temp_s0 + 4;
  switch (temp_a1)
  {
    case 3:
      temp_fv0 = *((f32 *) (((char *) temp_s1) + 0x18));
      temp_s0_2 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      if (temp_fv0 != 0.0f)
    {
      var_fv1 = (*((f32 *) (((char *) temp_s1) + 0x14))) / temp_fv0;
    }
    else
    {
      var_fv1 = 0.0f;
    }
      temp_t4 = *((s32 *) temp_s0_2);
      var_s0 = temp_s0_2 + 4;
      *temp_t4 = var_fv1;
      goto loop_3;

    case 4:
      temp_s0_3 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      temp_s0_4 = (temp_s0_3 + 7) & (~3);
      *((s32 *) (*((s32 *) temp_s0_3))) = *((u8 *) (((char *) temp_s1) + 8));
      temp_s0_5 = (temp_s0_4 + 7) & (~3);
      *((s32 *) (*((s32 *) temp_s0_4))) = *((u8 *) (((char *) temp_s1) + 9));
      temp_s0_6 = (temp_s0_5 + 7) & (~3);
      *((s32 *) (*((s32 *) temp_s0_5))) = *((u8 *) (((char *) temp_s1) + 0xA));
      var_s0 = temp_s0_6 + 4;
      *((s32 *) ((*((s32 *) temp_s0_6)) & 0xFFu)) = *((u8 *) (((char *) temp_s1) + 0xB));
      goto loop_3;

    case 1:
      temp_s0_7 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      if (1)
    {
      temp_s0_8 = (temp_s0_7 + 7) & (~3);
      *((s32 *) (*((s32 *) temp_s0_7))) = *((u8 *) (((char *) temp_s1) + 4));
      temp_s0_9 = (temp_s0_8 + 7) & (~3);
      temp_s0_10 = (((s32) temp_s0_9) + 7) & (~3);
      *((s32 *) (*((s32 *) temp_s0_8))) = *((u8 *) (((char *) temp_s1) + 5));
      *((s32 *) (*((s32 *) temp_s0_9))) = *((u8 *) (((char *) temp_s1) + 6));
      var_s0 = temp_s0_10 + 4;
    }
      *((s32 *) (*((s32 *) temp_s0_10))) = *((u8 *) (((char *) temp_s1) + 7));
      goto loop_3;

    case 2:
      temp_s0_11 = ((s32) (((s8 *) var_s0) + 3)) & (~3);
      temp_s0_12 = (temp_s0_11 + 7) & (~3);
      temp_s0_13 = (((s32) temp_s0_12) + 7) & (~3);
      *((s32 *) (*((s32 *) temp_s0_11))) = *((u8 *) (((char *) temp_s1) + 0));
      temp_s0_14 = (temp_s0_13 + 7) & (~3);
      *((s32 *) (*((s32 *) temp_s0_12))) = *((u8 *) (((char *) temp_s1) + 0));
      *((s32 *) (*((s32 *) temp_s0_13))) = *((u8 *) (((char *) temp_s1) + 0));
      var_s0 = temp_s0_14 + 4;
      *((s32 *) (*((s32 *) temp_s0_14))) = *((u8 *) (((char *) temp_s1) + 0));
      goto loop_3;

    case 0:

    default:
      do
    {
      func_80231A24(D_8025354C, temp_a1);
    }
    while (0);
      goto loop_3;

  }

}

