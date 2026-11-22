s32 func_80229CD4(s32, f32, s32);
void func_8022A848(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
  register f32 temp_fv1;
  register f32 temp_fa0;
  temp_fa0 = arg4 - arg3;
  temp_fv1 = arg2 - arg1;
  *((f32 *) (((char *) arg0) + 0)) = (f32) (2.0f / temp_fv1);
  *((f32 *) (((char *) arg0) + 0x14)) = (f32) (2.0f / temp_fa0);
  *((f32 *) (((char *) arg0) + 0x28)) = -1.0f;
  *((f32 *) (((char *) arg0) + 0x30)) = (f32) ((-(arg2 + arg1)) / temp_fv1);
  *((f32 *) (((char *) arg0) + 4)) = 0.0f;
  *((f32 *) (((char *) arg0) + 8)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x18)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0xC)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x10)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x20)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x1C)) = 0.0f;
 *((f32 *) (((char *) arg0) + 0x2C)) = 0.0f; *((f32 *) (((char *) arg0) + 0x24)) = 0.0f; *((f32 *) (((char *) arg0) + 0x38)) = 0.0f; *((f32 *) (((char *) arg0) + 0x34)) = (f32) ((-(arg4 + arg3)) / temp_fa0); *((f32 *) (((char *) arg0) + 0x3C)) = 1.0f;
  do
  {
    func_80229CD4(temp_fa0, arg2, 0x3FC90FDA);
  }
  while (0);
 goto dummy_label_190606; dummy_label_190606: ;
}
