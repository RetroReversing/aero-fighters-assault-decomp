s32 func_80228DE0(void *, f32 *);
f32 func_8022AA60(f32);
f32 func_8022AC20(f32);
s32 func_80231A24(s32 *);
extern s32 D_80253ED4;
void func_80229CD4(void *arg0, f32 arg1, u8 arg2)
{
  register f32 sp6C;
  register s32 *__base_D_80253ED4;
  register f32 temp_fv0;
  char *__repair_addr;
  f32 sp20[16];
  __base_D_80253ED4 = &D_80253ED4;
  if (arg1 != 0.0f)
  {
    sp6C = func_8022AA60(arg1);
    temp_fv0 = func_8022AC20(arg1);
    switch (arg2)
    {
      case 0x78:
        sp20[0] = *((f32 *) (((char *) arg0) + 0));
        __repair_addr = (char *) (((char *) arg0) + 4);
        sp20[1] = *((f32 *) ((char *) (((char *) arg0) + 4)));
        sp20[2] = *((f32 *) (((char *) arg0) + 8));
        sp20[3] = *((f32 *) (((char *) arg0) + 0xC));
        sp20[4] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x10)))) + ((*((f32 *) (((char *) arg0) + 0x20))) * sp6C);
        sp20[5] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x14)))) + ((*((f32 *) (((char *) arg0) + 0x24))) * sp6C);
        sp20[6] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x18)))) + ((*((f32 *) (((char *) arg0) - (-0x28)))) * sp6C);
        sp20[7] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x1C)))) + ((*((f32 *) (((char *) arg0) + 0x2C))) * sp6C);
        sp20[8] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x20)))) - ((*((f32 *) (((char *) arg0) + 0x10))) * sp6C);
        sp20[9] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x24)))) - ((*((f32 *) (((char *) arg0) + 0x14))) * sp6C);
        sp20[10] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x28)))) - ((*((f32 *) (((char *) arg0) + 0x18))) * sp6C);
        sp20[11] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x2C)))) - ((*((f32 *) (((char *) arg0) + 0x1C))) * sp6C);
        sp20[12] = *((f32 *) (((char *) arg0) + 0x30));
        sp20[13] = *((f32 *) (((char *) arg0) + 0x34));
        sp20[14] = *((f32 *) (((char *) arg0) + 0x38));
        sp20[15] = *((f32 *) (((char *) arg0) + 0x3C));
        block_9:
      func_80228DE0(arg0, sp20);

        break;

      case 0x79:
        sp20[0] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0)))) - ((*((f32 *) (((char *) arg0) + 0x20))) * sp6C);
        sp20[1] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 4)))) - ((*((f32 *) (((char *) arg0) + 0x24))) * sp6C);
        sp20[2] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 8)))) - ((*((f32 *) (((char *) arg0) + 0x28))) * sp6C);
        sp20[3] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0xC)))) - ((*((f32 *) (((char *) arg0) + 0x2C))) * sp6C);
        sp20[4] = *((f32 *) (((char *) arg0) + 0x10));
        sp20[5] = *((f32 *) (((char *) arg0) + 0x14));
        sp20[6] = *((f32 *) (((char *) arg0) + 0x18));
        sp20[7] = *((f32 *) (((char *) arg0) + 0x1C));
        sp20[8] = ((*((f32 *) (((char *) arg0) + 0x20))) * temp_fv0) + (sp6C * (*((f32 *) (((char *) arg0) + 0))));
        sp20[11] = ((*((f32 *) (((char *) arg0) + 0x2C))) * temp_fv0) + (sp6C * (*((f32 *) (((char *) arg0) + 0xC))));
        sp20[10] = ((*((f32 *) (((char *) arg0) + 0x28))) * temp_fv0) + (sp6C * (*((f32 *) (((char *) arg0) + 8))));
        sp20[9] = (sp6C * (*((f32 *) (((char *) arg0) + 4)))) + ((*((f32 *) (((char *) arg0) + 0x24))) * temp_fv0);
        sp20[12] = *((f32 *) (((char *) arg0) + 0x30));
        sp20[13] = *((f32 *) (((char *) arg0) + 0x34));
        sp20[14] = *((f32 *) (((char *) arg0) + 0x38));
        sp20[15] = *((f32 *) (((char *) arg0) + 0x3C));
        goto block_9;

      case 0x7A:
        sp20[0] = ((*((f32 *) (((char *) arg0) + 0x10))) * sp6C) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0))));
        sp20[1] = ((*((f32 *) (((char *) arg0) + 0x14))) * sp6C) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 4))));
        sp20[2] = ((*((f32 *) (((char *) arg0) + 0x18))) * sp6C) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 8))));
        sp20[3] = ((*((f32 *) (((char *) arg0) + 0x1C))) * sp6C) + (temp_fv0 * (*((f32 *) (((char *) arg0) + 0xC))));
        sp20[4] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x10)))) - ((*((f32 *) (((char *) arg0) + 0))) * sp6C);
        sp20[5] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x14)))) - ((*((f32 *) (((char *) arg0) + 4))) * sp6C);
        sp20[6] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x18)))) - ((*((f32 *) (((char *) arg0) + 8))) * sp6C);
        sp20[7] = (temp_fv0 * (*((f32 *) (((char *) arg0) + 0x1C)))) - ((*((f32 *) (((char *) arg0) + 0xC))) * sp6C);
        sp20[8] = *((f32 *) (((char *) arg0) + 0x20));
        sp20[9] = *((f32 *) (((char *) arg0) + 0x24));
        sp20[10] = *((f32 *) (((char *) arg0) + 0x28));
        sp20[11] = *((f32 *) (((char *) arg0) + 0x2C));
        sp20[12] = *((f32 *) (((char *) arg0) + 0x30));
        sp20[13] = *((f32 *) (((char *) arg0) + 0x34));
        sp20[14] = *((f32 *) (((char *) arg0) + 0x38));
        sp20[15] = *((f32 *) (((char *) arg0) + 0x3C));
        goto block_9;

      default:
        func_80231A24(__base_D_80253ED4);
        return;

    }

  }
}

