extern s32 D_803482A0;
extern s32 D_80348948;
void func_803048F0(void)
{
  s32 *var_v1;
 var_v1 = &D_803482A0; __repair_rows: { var_v1 += 213;
    *((s8 *) (((char *) var_v1) + (-8))) = 0;
    *((s32 *) (((char *) var_v1) + (-4))) = 1;
    *((s32 *) (((char *) var_v1) + (-0xC))) = 0;
  }

  if (var_v1 != (&D_80348948))
  {
    goto __repair_rows;
  }
}
