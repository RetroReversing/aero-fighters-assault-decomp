void *func_802C676C(s32);
char func_8031C3FC(void *);
extern s32 D_8032C6C0;
extern f32 D_80347838;
extern f32 D_8034783C;
extern f32 D_80347840;
void *func_8031E3DC(void *arg0)
{
  int __repair_constant = 0x14;
  void *temp_v0;
  void *var_a0;
  s32 *__base_D_8032C6C0;
  if (1)
  {
    __base_D_8032C6C0 = &D_8032C6C0;
    do
    {
      var_a0 = arg0;
      if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xF0), var_a0 = temp_v0, temp_v0 != NULL)))
      {
        arg0 = var_a0;
        func_8031C3FC(var_a0);
 var_a0 = arg0; *((s16 *) (((char *) arg0) + 0)) = __repair_constant;
 *((s32 *) (((char *) arg0) + 0xB4)) = 0; *((s16 *) (((char *) arg0) + 0xE4)) = 1;
        *((s16 *) (((char *) arg0) + 0xE6)) = __repair_constant;
        *((f32 *) (((char *) arg0) + 0xD4)) = 12.0;
        *((f32 *) (((char *) arg0) + 0x64)) = 12.0f;
        *((s32 **) (((char *) arg0) + 0xB8)) = __base_D_8032C6C0;
        *((s16 *) (((char *) arg0) + 0xA6)) = 0xC;
        *((s16 *) (((char *) arg0) + 0x9C)) = 0x18D;
        *((s16 *) (((char *) arg0) + 0x98)) = 0x20;
        *((s16 *) (((char *) arg0) + 0x9A)) = 0x20;
        *((s16 *) (0xA4 + ((char *) arg0))) = 1;
        *((f32 *) (((char *) arg0) + 0x4C)) = 1.0f;
        *((f32 *) (((char *) arg0) + 0x48)) = 1.0f;
        *((f32 *) (((char *) arg0) + 0x44)) = 1.0f;
        *((f32 *) (((char *) arg0) + 0xE0)) = (f32) D_80347838;
        *((f32 *) (((char *) arg0) + 0xA0)) = 15.0f;
        *((s16 *) (((char *) arg0) + 0x76)) = (s16) ((s32) (0.50f * 255.0f));
        *((s16 *) (((char *) arg0) + 0x78)) = (s16) ((s32) (D_8034783C * 255.0f));
        *((s16 *) (((char *) arg0) + 0x8A)) = 3;
        *((s8 *) (((char *) arg0) - (-0x74))) = 1;
        *((f32 *) (((char *) arg0) + 0x8C)) = 0.5f;
        *((s16 *) (((char *) arg0) + 0x7A)) = (s16) ((s32) (D_80347840 * 255.0f));
      }
    }
    while (0);
  }
  return var_a0;
}
