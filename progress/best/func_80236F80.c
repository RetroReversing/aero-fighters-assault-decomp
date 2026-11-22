/* Partial candidate from function #55834575747 in project #13; rechecked locally. */
extern u32 D_80251778;
extern s32 D_A4500008;
extern s32 D_A4500010;
extern s32 D_A4500014;
s32 func_80236F80(s32 arg0)
{
  u32 *__base_D_80251778;
  u32 temp_a1;
  s32 var_a2;
  __base_D_80251778 = &D_80251778;
  temp_a1 = ((u32) ((((f32) (*__base_D_80251778)) / ((f32) arg0)) + 0.5f)) & 0xFFFFFFFFFFFFFFFFu;
  if ((((((u32) ((((f32) (*__base_D_80251778)) / ((f32) arg0)) + 0.5f)) + 1) - 1) < 0x84U) != (var_a2 * 0))
  {
    if (1)
    {
    }
    return -1;
  }
  var_a2 = (temp_a1 / 66U) & 0xFF;
  if (var_a2 >= 0x11)
  {
    var_a2 = 0x10;
  }
  *((volatile s32 *) 0x78) = temp_a1 - 1;
  D_A4500014 = var_a2 - 1;
  *((volatile s32 *) (0x4 & 0xFFu)) = 1;
  return ((s32) (*__base_D_80251778)) / ((s32) temp_a1);
}

