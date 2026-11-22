void func_8029F9FC(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
  unsigned temp_ft3;
  *((s16 *) (((char *) arg0) + 0x160)) = (s16) ((s32) (arg1 * 255.0f));
  temp_ft3 = (s32) (1.0f * ((0, 255.0f)));
  *((s16 *) (((char *) arg0) + 0x166)) = (s16) temp_ft3;
  *((s16 *) (((char *) arg0) + 0xF6)) = (s16) ((s32) (arg4 * 255.0f));
  *((s16 *) (((char *) arg0) + 0x162)) = (s16) (((((((((((s32) (((int) arg2) * 255.0f)) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & ((unsigned long long) 0xFF)) & 0xFF) & 0xFF) & 0xFF) & 0xFF);
  *((s16 *) (((char *) arg0) + 0x164)) = (s16) ((s32) (arg3 * 255.0f));
  *((s16 *) (((char *) arg0) + 0xF8)) = (s16) ((s32) (arg5 * 255.0f));
  *((s16 *) (((char *) arg0) + 0xFA)) = (s16) ((s32) (arg6 * 255.0f));
  *((s16 *) (((char *) arg0) + 0x10A)) = 1;
  *((s16 *) (((char *) arg0) + 0xFC)) = (s16) temp_ft3;
}

