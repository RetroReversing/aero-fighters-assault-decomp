void func_8030AABC(volatile unsigned char arg0, s32 *arg1, s32 *arg2, s32 arg3)
{
  s32 temp_t0;
  register s32 temp_t1_3;
  register int temp_t1;
  unsigned int temp_t0_2;
  s32 var_v0;
  register s32 temp_t1_4;
  unsigned long temp_t6;
  s32 temp_t5;
  s32 temp_t1_5;
  s32 temp_t7;
  s32 temp_v1;
  register s32 temp_t1_2;
  *arg2 = 0;
  if (1)
  {
    if (0 < arg3)
    {
      var_v0 = 0;
      temp_v1 = (arg3 & 3) & 0x1Fu;
      if (temp_v1 != 0)
      {
        __repair_rows:
        {
          temp_t0 = *arg1;
          temp_t1 = ((u32) temp_t0) % 32;
          *arg2 |= (((s32) ((*((s32 *) (arg0 + (temp_t0 / 32)))) & (1 << temp_t1))) >> ((int) temp_t1)) << var_v0;
          var_v0++;
          *arg1 += 1;
        }

        if (temp_v1 != var_v0)
        {
          goto __repair_rows;
        }
        if (var_v0 != arg3)
        {
          goto loop_4;
        }
      }
      else
      {
        do
        {
          loop_4:
          temp_t0_2 = *arg1;

          temp_t1_2 = temp_t0_2 % 32;
          *arg2 |= (((s32) ((*((s32 *) (arg0 + (((s32) temp_t0_2) / 32)))) & (1 << temp_t1_2))) >> ((u32) temp_t1_2)) << var_v0;
          temp_t5 = (*arg1) + 1;
          *arg1 = temp_t5;
          temp_t1_3 = ((u32) temp_t5) % 32;
          goto dummy_label_703685;
          dummy_label_703685:
          ;

          ;
          ;
          ;
          ;
          *arg2 |= (((s32) ((*((s32 *) (arg0 + (temp_t5 / 32)))) & (1 << temp_t1_3))) >> temp_t1_3) << (var_v0 + 1);
          temp_t5 = (*arg1) + 1;
          temp_t1_4 = temp_t5 % 32;
          *arg1 = temp_t5;
          *arg2 |= (((s32) ((*((s32 *) (arg0 + (temp_t5 / 32)))) & (1 << temp_t1_4))) >> temp_t1_4) << (var_v0 + 2);
          temp_t5 = (*arg1) + 1;
          temp_t1_5 = temp_t5 % 32;
          *arg1 = temp_t5;
          *arg2 |= (((s32) ((1 << temp_t1_5) & (*((s32 *) (arg0 + (((u32) (temp_t5 & 0xFF)) / 32)))))) >> temp_t1_5) << (var_v0 + 3);
          *arg1 += 1;
          var_v0 += 4;
        }
        while (var_v0 != arg3);
      }
    }
  }
}

