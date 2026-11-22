extern f32 D_8033EF68;
void func_8028E18C(void *arg0, u8 arg1)
{
  *((s8 *) (((char *) arg0) + 0x10)) = arg1;
  if ((arg1 & 0xFF) & 0xFFu)
  {
    *((f32 *) (((char *) arg0) + 0x134)) = 0.0f;
    *((f32 *) (((char *) arg0) + 0x18C)) = -1.0f;
    *((f32 *) (((char *) arg0) + 0x138)) = (f32) D_8033EF68;
    *((s32 *) (((char *) arg0) + 0x130)) = 0;
    *((s16 *) (((char *) arg0) + 0x17C)) = 0;
    *((f32 *) (((char *) arg0) + 0x180)) = 0.0f;
  }
}

