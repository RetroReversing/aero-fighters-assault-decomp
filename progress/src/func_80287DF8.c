void func_80287DF8(void *arg0, f32 arg1)
{
  f32 temp_fv0;
  *((f32 *) (((char *) arg0) + 0x10)) = arg1;
  temp_fv0 = arg1 * 2;
  *((f32 *) (((char *) arg0) + 0xB0)) = temp_fv0;
  *((f32 *) (((char *) arg0) + 0xB4)) = temp_fv0;
  *((f32 *) (((char *) arg0) + 0xB8)) = (0, temp_fv0);
}

