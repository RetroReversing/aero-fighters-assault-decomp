void *func_8022FB4C();
s32 func_80231A24();
extern char D_80254AFC[];
extern char D_80254B28[];
void func_8022FBDC(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *var_v1;
  unsigned int temp_a1;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 temp_v1_4;
  s32 temp_v1_5;
  void *temp_v0;
  temp_v0 = func_8022FB4C();
  var_v1 = &arg1;
  if (temp_v0 == NULL)
  {
    func_80231A24(D_80254AFC, arg0);
    return;
  }
  loop_3:
  temp_v1 = ((s32) (((s8 *) var_v1) + 3)) & (~3);

  temp_a1 = *((s32 *) temp_v1);
  temp_v1_2 = temp_v1 + 4;
  switch (temp_a1)
  {
    case 0:
      break;

    case 1:
      temp_v1_3 = (temp_v1_2 + 3) & (~3);
      var_v1 = temp_v1_3 + 4;
      *((s32 *) (((char *) temp_v0) + 0x1C)) = (s32) (*((s32 *) temp_v1_3));
      goto loop_3;

    case 2:
      temp_v1_4 = (temp_v1_2 + 3) & (~3);
      *((s32 *) (((char *) temp_v0) + 0x1C)) &= ~(1 << (*((s32 *) temp_v1_4)));
      var_v1 = temp_v1_4 + 4;
      goto loop_3;

    case 3:
      temp_v1_2 = (temp_v1_2 + 3) & (~3);
      *((s32 *) (((char *) temp_v0) + 0x1C)) |= (1 << (*((s32 *) temp_v1_2))) & 0xFFFFFFFFFFFFFFFF;
      var_v1 = temp_v1_2 + 4;
      goto loop_3;

    default:
      func_80231A24(D_80254B28, (0, *((s32 *) temp_v1)));
      break;

  }

}

