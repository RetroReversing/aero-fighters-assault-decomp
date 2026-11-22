extern u8 D_80256EA0[];
extern s32 D_802572D8;
extern s32 D_80257390;
extern s32 D_80257534;
extern s32 D_80257538;
extern s32 D_80257540;
extern s32 D_80257548;
extern s32 func_80203FC4;
extern s32 func_80204190;
extern s32 func_80204360;
void func_80203930(void)
{
  s32 *var_a0;
  s32 *var_a1;
  s32 *var_v1;
  s32 *var_v1_2;
  s32 var_v0;
  void *temp_t1;
  void *temp_t7;
  void *temp_t9;
  void *var_a0_2;
  s32 *__base_D_802572D8;
  __base_D_802572D8 = &D_802572D8;
  var_v1 = D_80256EA0;
  var_a0 = D_80256EA0;
  do
  {
    var_a0 += 9;
    *((s32 *) (((char *) var_a0) + (-0x1C))) = 0;
    *((s32 *) (((char *) var_a0) + (-0x18))) = 0;
    *((s32 *) (((char *) var_a0) + (-0x14))) = 0;
    *((s32 *) (((char *) var_a0) + (-0x10))) = 0;
    *((s32 *) (((char *) var_a0) + (-0xC))) = 0;
    *((s32 *) (((char *) var_a0) + (-8))) = 0;
    *((s32 *) (((char *) var_a0) + (-0x24))) = 0;
    *((s32 *) (((char *) var_a0) + (-0x20))) = 0;
    var_v1 += 9;
    *((s32 *) (((char *) var_v1) + (-4))) = 0;
  }
  while (((u32) var_a0) < ((u32) __base_D_802572D8));
  var_a1 = &D_80257390;
  var_v1_2 = &D_80257390;
  do
  {
    *((s32 *) (((char *) var_a1) + 0)) = 0;
    *((s32 *) (((char *) var_a1) + 4)) = 0;
    *((s32 *) (((char *) var_a1) + 8)) = 0;
    *((s32 *) (((char *) var_a1) + 0xC)) = 0;
    *((s32 *) (((char *) var_v1_2) + 0x50)) = 0;
    var_a0_2 = var_v1_2 + 0x10;
    var_v0 = 2;
    loop_4:
    *((s32 *) (((char *) var_a0_2) + 8)) = 0;

    *((s32 *) (((char *) var_a0_2) + 0xC)) = (((u32) var_a0) < ((u32) __base_D_802572D8)) * 0;
    *((s32 *) (((char *) var_a0_2) + 0x10)) = 0;
    *((s32 *) (((char *) var_a0_2) + 0x14)) = 0;
    *((s32 *) (((char *) var_a0_2) + 0x18)) = 0;
    *((s32 *) (((char *) var_a0_2) + 0x1C)) = 0;
    var_v0 += 4;
    *((s32 *) (((char *) var_a0_2) + 0)) = 0;
    *((s32 *) (((char *) var_a0_2) + 4)) = 0;
    *((s32 *) (((char *) var_v1_2) + 0x50)) = 0;
    var_a0_2 = ((unsigned char *) var_a0_2) + 0x20;
    if (var_v0 != 0xA)
    {
      goto loop_4;
    }
    var_a1 += 21;
    var_v1_2 += 0x54;
  }
  while (var_a1 != (&D_80257534));
  *((s32 **) (((char *) (&D_80257538)) + 0)) = &func_80203FC4;
  *((s32 *) (((char *) (&D_80257538)) + 4)) = 0;
  temp_t1 = D_80256EA0 + ((*((s32 *) (((char *) D_80256EA0) + 0x20))) * 8);
  *((s32 **) (((char *) temp_t1) + 0)) = &func_80203FC4;
  *((s32 *) (((char *) temp_t1) + 4)) = (s32) (*((s32 *) (((char *) (&D_80257538)) + 4)));
  if (1)
  {
    *((s32 *) (((char *) D_80256EA0) + 0x20)) = (s32) ((*((s32 *) (((char *) D_80256EA0) + 0x20))) + 1);
    *((s32 **) (((char *) (&D_80257540)) + 0)) = &func_80204190;
    *((s32 *) (((char *) (&D_80257540)) + 4)) = 0;
    temp_t9 = D_80256EA0 + ((*((s32 *) (((char *) D_80256EA0) + 0x44))) * 8);
    *((s32 **) (((char *) temp_t9) + 0x24)) = &func_80204190;
    *((s32 *) (((char *) temp_t9) + 0x28)) = (s32) (*((s32 *) (((char *) (&D_80257540)) + 4)));
    *((s32 *) (((char *) D_80256EA0) + 0x44)) = (s32) ((*((s32 *) (((char *) D_80256EA0) + 0x44))) + 1);
    *((s32 **) (((char *) (&D_80257548)) + 0)) = &func_80204360;
  }
  *((s32 *) (((char *) (&D_80257548)) + 4)) = 0;
  temp_t7 = D_80256EA0 + ((*((s32 *) (((char *) D_80256EA0) + 0x68))) * 8);
  *((s32 **) (((char *) temp_t7) + 0x48)) = &func_80204360;
  *((s32 *) (((char *) temp_t7) + 0x4C)) = (s32) (*((s32 *) (((char *) (&D_80257548)) + 4)));
  *((s32 *) (((char *) D_80256EA0) + 0x68)) = (s32) ((*((s32 *) (((char *) D_80256EA0) + 0x68))) + 1);
}

