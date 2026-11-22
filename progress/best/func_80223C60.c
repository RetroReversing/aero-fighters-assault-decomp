s32 func_80231790(s32, u32);
extern s8 D_80275130;
extern s8 D_80275148;
extern s8 D_8027514C;
extern s8 D_80275164;
extern s32 D_802751D8;
extern s32 D_80283524;
void func_80223C60(void)
{
  s8 *__base_D_80275130;
  long temp_v0;
  s32 var_v0;
  s8 *var_a1;
  s8 *var_a2;
  s8 *var_v1;
  void *var_a1_2;
  s8 *__base_D_80275148;
  s32 *__base_D_802751D8;
 if (0) { }
  __base_D_802751D8 = &D_802751D8;
  __base_D_80275148 = &D_80275148;
  __base_D_80275130 = &D_80275130;
  var_a2 = __base_D_80275130;
  var_a1 = __base_D_80275130;
  do
  {
    var_v0 = 0;
    var_v1 = var_a2;
    loop_2:
    var_v0 += 1;

    *((f32 *) (((char *) var_v1) + 4)) = 0.0f;
    var_v1 += 4;
    if (var_v0 != 3)
    {
      goto loop_2;
    }
    var_a1 += 0x1C;
    var_a2 += 0x1C;
    *((s32 *) (((char *) var_a1) + (-0xC))) = 0;
    *((s32 *) (((char *) var_a1) + (-8))) = 0;
  }
  while ((((u32) var_a1) < ((u32) __base_D_802751D8)) != 0);
  temp_v0 = func_80231790(3, var_a1);
  if (temp_v0 & 1)
  {
    *__base_D_80275148 = 1;
    *__base_D_80275130 = 1;
    D_80283524 = temp_v0;
  }
  else
  {
    *__base_D_80275148 = 0;
  }
  if (temp_v0 & 2)
  {
    D_80275164 = 1;
    D_8027514C = 1;
    D_80283524 = temp_v0;
  }
  else
  {
    D_80275164 = 0;
  }
  if ((1 * 4) & temp_v0)
  {
    var_a1_2 = (void *) (2 * 0x1C); var_a1_2 = (void *) (((char *) var_a1_2) + (0x80275130 & 0xFFFF));
    *((u8 *) (((char *) var_a1_2) + 0x18)) = 1;
    *((s8 *) (((char *) var_a1_2) + 0)) = 1;
    D_80283524 = temp_v0;
  }
  else
  {
    do
    {
      var_a1_2 = (void *) (2 * 0x1C);
    }
    while (0);
    var_a1_2 = (void *) (((char *) var_a1_2) - (-((s32) __base_D_80275130)));
    *((s8 *) (((char *) var_a1_2) + 0x18)) = 0;
 if (0) { }
  }
  if ((1 * 8) & temp_v0)
  {
    *((u8 *) (((char *) var_a1_2) + 0x34)) = 1;
    *((s8 *) (((char *) var_a1_2) + 0x1C)) = 1;
    D_80283524 = temp_v0;
  }
  else
  {
    *((s8 *) (((char *) var_a1_2) + 0x34)) = 0;
  }
  if ((1 * 0x10) & temp_v0)
  {
    *((s8 *) (((char *) var_a1_2) + 0x50)) = 1;
    *((s8 *) (((char *) var_a1_2) + 0x38)) = 1;
    D_80283524 = temp_v0;
  }
  else
  {
    *((s8 *) (((char *) var_a1_2) + 0x50)) = 0;
  }
  if ((1 << 5) & temp_v0)
  {
    *((s8 *) (((char *) var_a1_2) + 0x6C)) = 1;
    *((s8 *) (((char *) var_a1_2) + 0x54)) = 1;
    D_80283524 = (int) temp_v0;
    return;
  }
  *((s8 *) (((char *) var_a1_2) + 0x6C)) = 0;
}
