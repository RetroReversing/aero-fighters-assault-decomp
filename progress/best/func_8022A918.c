void func_8022A918(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
  char *__repair_addr;
  f32 sp34;
  register f32 temp_fa0;
  register f32 sp2C;
  f32 sp28;
  register f32 sp24;
  f32 sp30;
  f32 temp_fa0_2;
  f32 temp_ft0;
  f32 temp_ft1;
  f32 temp_fv1;
  f32 temp_fv1_2;
  temp_ft0 = arg2 * arg2;
  temp_ft1 = arg3 * arg3;
  sp34 = temp_ft0;
  sp30 = temp_ft1;
  __repair_addr = (char *) (((char *) arg0) + 0);
  *((f32 *) __repair_addr) = (f32) (1.0f - (2.0f * (sp34 + sp30)));
  temp_fv1 = arg1 * arg2;
  temp_fa0 = arg3 * arg4;
  *((f32 *) (((char *) arg0) + 4)) = (f32) (2.0f * (temp_fv1 - temp_fa0));
  sp2C = arg3 * arg1;
  temp_fv1_2 = arg2 * arg3;
  sp28 = arg2 * arg4;
  *((f32 *) (((char *) arg0) + 8)) = (f32) (2.0f * (sp2C + sp28));
  *((f32 *) (((char *) arg0) + 0x10)) = (f32) (2.0f * (temp_fv1 + temp_fa0));
  sp24 = arg1 * arg1;
  *((f32 *) (((char *) arg0) + 0x14)) = (f32) (1.0f - (2.0f * (temp_ft1 + sp24)));
  temp_fa0_2 = arg1 * arg4;
  *((f32 *) (((char *) arg0) + 0x18)) = (f32) (2.0f * (temp_fv1_2 - temp_fa0_2));
 if (1) { } if (1) { } if (1) { } if (1) { }
  do
  {
    *((f32 *) (((char *) arg0) + 0x20)) = (f32) (2.0f * (sp2C - sp28));
    *((f32 *) (((char *) arg0) + 0x24)) = (f32) (2.0f * (temp_fv1_2 + temp_fa0_2));
    *((f32 *) (((char *) arg0) + 0x28)) = (f32) (1.0f - (2.0f * (temp_ft0 + sp24)));
  }
  while (0);
}
