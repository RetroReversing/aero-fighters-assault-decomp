extern unsigned short D_80280BF4;
extern unsigned short D_80280BD6;
s32 func_8022B780();
s32 func_8022BA58();
extern char D_80280BC0[];
extern s32 D_80283940;
extern s32 D_80283944;
extern s32 D_80283948;
extern s32 D_8028394C;
extern s8 D_80283954;
void func_80233224(void)
{
  unsigned short *__base_D_80280BD6;
  s32 temp_v0;
  s32 sp24;
  s32 var_a0;
  s32 var_v0;
  void *temp_v0_2;
  D_80283940 = func_8022BA58(D_80280BF4 * 0x1C);
  do
  {
    func_8022B780(D_80283940, 0, D_80280BF4 * 0x1C, &D_80283940);
  }
  while (0);
  temp_v0 = 0;
  if (((s32) D_80280BF4) > 0)
  {
    var_a0 = 0;
    do
    {
      temp_v0 += 1;
      temp_v0_2 = var_a0 + D_80283940;
      *((s8 *) (((char *) temp_v0_2) + 0x1A)) = ((s32) D_80280BF4) * (temp_v0 * 0);
      *((s8 *) (((char *) temp_v0_2) + 0x1B)) = 0;
      *((f32 *) (((char *) temp_v0_2) + 0x14)) = 0.0f;
      *((f32 *) (((char *) temp_v0_2) + 0x10)) = 0.0f;
      *((f32 *) (((char *) temp_v0_2) + 0xC)) = 0.0f;
      *((f32 *) (((char *) temp_v0_2) + 8)) = 0.0f;
      *((f32 *) (((char *) temp_v0_2) + 4)) = 0.0f;
      *((f32 *) (((char *) temp_v0_2) + 0)) = 0.0f;
      *((s8 *) (((char *) temp_v0_2) + 0x18)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 0x19)) = 0;
      var_a0 += 0x1C;
    }
    while (temp_v0 < ((s32) D_80280BF4));
    temp_v0 = 0;
  }
  if (D_80283944 == 0)
  {
    sp24 = 0;
    __base_D_80280BD6 = &D_80280BD6;
    D_80283944 = func_8022BA58((*__base_D_80280BD6) * 2, &D_80283944);
    temp_v0 = 0;
  }
  if (D_8028394C == 0)
  {
    sp24 = temp_v0;
    D_8028394C = func_8022BA58((*__base_D_80280BD6) * 8, &D_80283944);
  }
  var_v0 = 0;
  if (((s32) (*__base_D_80280BD6)) > (D_80280BF4 * 0))
  {
    do
    {
      temp_v0 += 1;
      *((s16 *) (D_80283944 + var_v0)) = 0xFF ^ 0;
      var_v0 += 2;
    }
    while (temp_v0 < ((s32) (*__base_D_80280BD6)));
  }
  D_80283948 = 0;
  D_80283954 = 1;
}

