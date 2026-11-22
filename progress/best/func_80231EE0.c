s32 func_80232EE0();
extern char D_8025BEB8[];
extern char D_80283530[];
extern s32 D_80283930;
void func_80231EE0(s32 arg0, void *arg1, f32 arg2)
{
  s32 *__base_D_80283930;
  s32 temp_v1;
  void *var_v0;
  char *var_s0;
  __base_D_80283930 = &D_80283930;
  temp_v1 = *__base_D_80283930;
  if (temp_v1 > 0)
  {
 var_s0 = D_80283530; __repair_rows: {
      if ((*((f32 *) (((char *) var_s0) + 8))) < arg2)
      {
        var_v0 = (temp_v1 * 0x10) + 0x80283530;
      }
      else
      {
        func_80232EE0(arg0, *((s32 *) (((char *) var_s0) + 0)), *((u16 *) (((char *) var_s0) + 6)), *((u8 *) (((char *) var_s0) + 4)), 1);
        *(D_8025BEB8 + (((s32) ((*((s32 *) (((char *) var_s0) + ((((s32) ((*((s32 *) (((char *) var_s0) + 0))) - (*((s32 *) (((char *) arg1) + 0x28))))) / 76) * 0)))) - (*((s32 *) (((char *) arg1) + 0x28))))) / 76)) = 1; var_v0 = ((*__base_D_80283930) * 0x10) + 0x80283530;
      }
      var_s0 += 0x10;
    }

    if (((u32) var_s0) < ((u32) var_v0))
    {
      goto __repair_rows;
    }
  }
}
