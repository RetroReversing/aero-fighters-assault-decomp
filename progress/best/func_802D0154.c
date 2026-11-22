s32 func_80228DE0(void *, f32 *);
f32 func_803003A4(f32, f32);
extern f32 D_80342A6C;
void func_802D0154(void *arg0, f32 arg1, volatile unsigned char arg2)
{
  f32 sp6C;
  register char *__repair_addr;
  f32 sp20[16];
  register f32 temp_fv0;
  do
  {
    if (arg1 != 0.0f)
    {
      sp6C = func_803003A4(arg1, arg1); temp_fv0 = func_803003A4(arg1 + D_80342A6C, arg1);
      switch (arg2)
      {
        case 0x78:
          sp20[0] = *((f32 *) (((char *) arg0) + 0));
          __repair_addr = (char *) (((char *) arg0) + 4);
          sp20[1] = *((f32 *) __repair_addr);
          sp20[2] = *((f32 *) (((char *) arg0) + 8));
          sp20[3] = *((f32 *) (((char *) arg0) + 0xC));
          sp20[4] = (sp6C * (*((f32 *) (((char *) arg0) + 0x20)))) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x10))));
          sp20[5] = (sp6C * (*((f32 *) (((char *) arg0) + 0x24)))) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x14))));
          sp20[6] = (sp6C * (*((f32 *) (((char *) arg0) + 0x28)))) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x18))));
          sp20[7] = (sp6C * (*((f32 *) (((char *) arg0) + 0x2C)))) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x1C))));
          sp20[8] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x20)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0x10))));
          sp20[9] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x24)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0x14))));
          sp20[10] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x28)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0x18))));
          sp20[11] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x2C)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0x1C))));
          sp20[12] = *((f32 *) (((char *) arg0) + 0x30));
          sp20[13] = *((f32 *) (((char *) arg0) + 0x34));
          sp20[14] = *((f32 *) (((char *) arg0) + 0x38));
          sp20[15] = *((f32 *) (((char *) arg0) + 0x3C));
          break;

        case 0x79:
          sp20[0] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0x20))));
          sp20[1] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 4)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0x24))));
          sp20[2] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 8)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0x28))));
          sp20[3] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0xC)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0x2C))));
          sp20[4] = *((f32 *) (((char *) arg0) + 0x10));
          sp20[5] = *((f32 *) (((char *) arg0) + 0x14));
          sp20[6] = *((f32 *) (((char *) arg0) + 0x18));
          sp20[7] = *((f32 *) (((char *) arg0) + 0x1C));
          sp20[10] = (sp6C * (*((f32 *) (((char *) arg0) + 8)))) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x28))));
          sp20[11] = (sp6C * (*((f32 *) (((char *) arg0) + 0xC)))) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x2C))));
          sp20[8] = (sp6C * (*((f32 *) (((char *) arg0) + 0)))) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x20))));
          sp20[9] = (sp6C * (*((f32 *) (((char *) arg0) + 4)))) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x24))));
          sp20[12] = *((f32 *) (((char *) arg0) + 0x30));
          sp20[13] = *((f32 *) (((char *) arg0) + 0x34));
          sp20[14] = *((f32 *) (((char *) arg0) + 0x38));
          sp20[15] = *((f32 *) (((char *) arg0) + 0x3C));
          break;

        case 0x7A:
          sp20[2] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 8)))) + (sp6C * (*((f32 *) (((char *) arg0) + 0x18))));
          sp20[3] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0xC)))) + (sp6C * (*((f32 *) (((char *) arg0) + 0x1C))));
          sp20[0] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0)))) + (sp6C * (*((f32 *) (((char *) arg0) + 0x10))));
          sp20[1] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 4)))) + (sp6C * (*((f32 *) (((char *) arg0) + 0x14))));
          sp20[4] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x10)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0))));
          sp20[5] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x14)))) - (sp6C * (*((f32 *) (((char *) arg0) + 4))));
          sp20[6] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x18)))) - (sp6C * (*((f32 *) (((char *) arg0) + 8))));
          sp20[7] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x1C)))) - (sp6C * (*((f32 *) (((char *) arg0) + 0xC))));
          sp20[8] = *((f32 *) (((char *) arg0) + 0x20));
          sp20[9] = *((f32 *) (((char *) arg0) + 0x24));
          sp20[10] = *((f32 *) (((char *) arg0) + 0x28));
          sp20[11] = *((f32 *) (((char *) arg0) + 0x2C));
          sp20[12] = *((f32 *) (((char *) arg0) + 0x30));
          sp20[13] = *((f32 *) (((char *) arg0) + 0x34));
          sp20[14] = *((f32 *) (((char *) arg0) + 0x38));
          sp20[15] = *((f32 *) (((char *) arg0) + 0x3C));
          break;

      }

      do
      {
        func_80228DE0(arg0, sp20);
      }
      while (0);
    }
  }
  while (0);
}

