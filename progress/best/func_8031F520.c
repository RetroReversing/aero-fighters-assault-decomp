void *func_802C676C(s32);
s32 func_8031A4DC(void *);
s32 func_8031F684(void *, s32 *, s32);
extern s32 D_8033D980;
extern s32 D_80347850;
void *func_8031F520(void *arg0)
{
  void *temp_v0;
  void *temp_v0_2;
  void *var_s0;
  void *var_v1;
  var_s0 = arg0;
  if ((arg0 != NULL) || ((temp_v0 = func_802C676C(0xEC), var_s0 = temp_v0, temp_v0 != NULL)))
  {
    func_8031A4DC(var_s0);
    *((u16 *) (((char *) var_s0) + 0xC0)) = 1;
    *((s32 **) (((char *) var_s0) + 0xB0)) = &D_80347850;
    *((s16 *) (((char *) var_s0) - (-0xB4))) = 0;
    *((s16 *) (((char *) var_s0) + 0xBE)) = 0;
    *((s16 *) (((char *) var_s0) + 0xC4)) = 0;
    var_v1 = ((unsigned char *) var_s0) + 0xC8;
    if ((var_s0 != ((void *) (-0xC8))) || ((temp_v0_2 = func_802C676C(0xC), var_v1 = temp_v0_2, temp_v0_2 != NULL)))
    {
      *((f32 *) (((char *) var_v1) + 0)) = 0.0f;
      *((f32 *) (((char *) var_v1) + 4)) = 0.0f;
      *((f32 *) (((char *) var_v1) + 8)) = 0.0f;
    }
    *((s16 *) (((char *) var_s0) + 0xD8)) = 0xC8;
    if (1)
    {
      *((s16 *) (((char *) var_s0) + 0xD4)) = 0;
      *((s16 *) (((char *) var_s0) + 0xD6)) = 0;
    }
    *((s16 *) (((char *) var_s0) + 0xE8)) = 0;
    *((s8 *) (((char *) var_s0) + 0x74)) = 1;
    *((s16 *) (((char *) var_s0) + 0xA6)) = 1;
    *((s16 *) (((char *) var_s0) + 0x9C)) = 0xFFF;
    *((s16 *) (((char *) var_s0) + 0x98)) = 0;
    *((s16 *) (((char *) var_s0) + 0x9A)) = 0;
    *((s16 *) (((char *) var_s0) + 0xA4)) = 0;
    do
    {
      *((f32 *) (((char *) var_s0) + 0xA0)) = 0.0f;
      *((f32 *) (((char *) var_s0) + 0x64)) = 10.0f;
      *((s16 *) (((char *) var_s0) + 0xC6)) = (s16) ((s32) (1.0f * ((0, 100.0f))));
      func_8031F684(var_s0, &D_8033D980, 4);
    }
    while (0);
  }
  return var_s0;
}

