extern void *D_8024E710;
s32 func_80208E78(s32 arg0, s32 arg1, s8 arg2, s32 arg3)
{
  int *__repair_home1 = &arg1;
  s16 *temp_t6;
  register s8 *var_v0_2;
  unsigned long temp_v0_2;
  u8 *temp_t6_4;
  u32 temp_v0_3;
  
  s32 temp_v0_5;
  s32 temp_v0_4;
  s16 *temp_t6_2;
  register unsigned temp_v0;
  s32 temp_v0_7;
  register s32 temp_v0_8;
  s32 var_v0;
  register u8 *temp_t1_3;
  u8 *temp_t1_4;
  u8 *temp_t6_3;
  register s16 *temp_t1;
  register void *var_v1;
  var_v0_2 = &arg2;
  if (arg0 & 0x80000000)
  {
    var_v1 = (*((s32 *) (*((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x24))) + ((((u32) (arg0 & 0x7FFF0000)) >> 0x10) * 4)))))) + ((arg0 & 0xFFFF) * 0x10);
  }
  else
  {
    var_v1 = (*((s32 *) (*((s32 *) ((((((((((((((*((s32 *) (((char *) D_8024E710) + 0x1C))) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) + ((((u32) (arg0 & 0x7FFF0000)) >> 0x10) * 4)))))) + ((arg0 & 0xFFFF) * 0x10);
  }
  if ((*__repair_home1) & 1)
  {
    var_v0_2 = temp_v0 + 4;
    *((s32 *) (*((s32 *) temp_v0))) = *((s16 *) (((char *) var_v1) + 0));
    temp_v0 = ((s32) (&arg2)) & (~3);
  }
  if ((*__repair_home1) & 2)
  {
    temp_v0_2 = ((s32) (var_v0_2 + 3)) & (~3);
    temp_t6 = *((s32 *) temp_v0_2);
    var_v0_2 = temp_v0_2 + ((unsigned long long) 4);
    *temp_t6 = *((s16 *) (((char *) var_v1) + 2));
  }
  if ((*__repair_home1) & 4)
  {
    temp_v0_3 = ((s32) (var_v0_2 + 3)) & (~3);
    temp_t1 = *((s32 *) temp_v0_3);
    var_v0_2 = temp_v0_3 + 4;
    *temp_t1 = *((s16 *) (((char *) var_v1) + 4));
  }
  if ((*__repair_home1) & 8)
  {
    temp_v0_4 = ((s32) (var_v0_2 + 3)) & (~3);
    temp_t6_2 = *((s32 *) temp_v0_4);
    var_v0_2 = ((unsigned) temp_v0_4) + 4;
    *temp_t6_2 = *((s16 *) (((char *) var_v1) + 8));
  }
  if ((*__repair_home1) & 0x10)
  {
    temp_t6 = *((s32 *) temp_v0_5);
    temp_v0_5 = ((s32) (var_v0_2 + 3)) & (~3);
    var_v0_2 = temp_v0_5 + 4;
    *temp_t6 = *((s16 *) (((char *) var_v1) + 0xA));
  }
  if ((*__repair_home1) & 0x20)
  {
    temp_v0_5 = ((s32) (var_v0_2 + 3)) & (~3);
    var_v0_2 = temp_v0_5 + 4;
    temp_t6_3 = *((s32 *) temp_v0_5);
    *temp_t6_3 = *((u8 *) (((char *) var_v1) + 0xC));
  }
  if ((*__repair_home1) & 0x40)
  {
    temp_v0_7 = ((s32) (var_v0_2 + 3)) & (~3);
    temp_t1_3 = *((s32 *) temp_v0_7);
    var_v0_2 = temp_v0_7 + 4;
    *temp_t1_3 = *((u8 *) (((char *) var_v1) + 0xD));
  }
  if ((*__repair_home1) & 0x80)
  {
    temp_v0_8 = ((s32) (var_v0_2 + 3)) & (~3);
    temp_t6_4 = *((s32 *) temp_v0_8);
    var_v0_2 = ((unsigned) temp_v0_8) + 4;
    *temp_t6_4 = *((u8 *) (((char *) var_v1) + 0xE));
  }
  var_v0 = ((s32) (var_v0_2 + 3)) & (~3);
  if ((*__repair_home1) & 0x100)
  {
    temp_t1_4 = *((s32 *) var_v0);
    var_v0 += 4;
    *temp_t1_4 = *((u8 *) (((char *) var_v1) + 0xF));
  }
  return var_v0;
}

