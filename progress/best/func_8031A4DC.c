void *func_802C676C();
extern s32 D_80347650;
extern f32 D_803476A0;
void *func_8031A4DC(void *arg0)
{
  u32 temp_ft2;
  f32 *__base_D_803476A0;
  register void *temp_v0;
  unsigned int temp_ft4;
  void *var_a1;
  __base_D_803476A0 = &D_803476A0;
  var_a1 = arg0;
  if ((arg0 != NULL) || ((temp_v0 = func_802C676C(0xB4), var_a1 = temp_v0, temp_v0 != NULL)))
  {
    *((s32 **) (0xB0 + ((char *) var_a1))) = &D_80347650;
    if (var_a1 == ((void *) (-0x44)))
    {
      arg0 = var_a1;
      func_802C676C(0xC, var_a1);
 var_a1 = arg0; } if (var_a1 == ((void *) (-0x50))) { arg0 = var_a1; func_802C676C(0xC, var_a1); var_a1 = arg0; } *((s16 *) (((char *) var_a1) + 0x68)) = -2; *((s16 *) (((char *) var_a1) + 0x88)) = 1; *((s8 *) (((char *) var_a1) + 0xAC)) = 0; temp_ft2 = (s32) (1.0f * 255.0f); *((s16 *) (((char *) var_a1) + 0x86)) = 0;
    *((s16 *) (((char *) var_a1) + 0x70)) = 0x14;
    temp_ft4 = (s32) (0.0f * 255.0f);
    *((s8 *) (((char *) var_a1) + 0x74)) = 0;
    *((f32 *) (((char *) var_a1) + 0x4C)) = 1.0f;
    *((s16 *) (((char *) var_a1) + 0x8A)) = 0;
    *((f32 *) (((char *) var_a1) + 0x48)) = 1;
    *((f32 *) (((char *) var_a1) + 0x60)) = (f32) (*__base_D_803476A0);
    *((f32 *) (((char *) var_a1) + 0x64)) = (f32) (*__base_D_803476A0);
    *((f32 *) (((char *) var_a1) + 0x44)) = 1.0f;
    *((f32 *) (((char *) var_a1) + 0x5C)) = 0.0f;
    *((f32 *) (((char *) var_a1) + 0xA8)) = 0.0f;
    *((f32 *) (((char *) var_a1) + 0x94)) = 0.0f;
    *((f32 *) (((char *) var_a1) + 0x90)) = 0.0f;
    *((f32 *) (((char *) var_a1) + 0x50)) = 0.0f;
    *((f32 *) (((char *) var_a1) + 0x54)) = 0.0f;
    *((f32 *) (((char *) var_a1) + 0x6C)) = 2000.0f;
    *((f32 *) (((char *) var_a1) + 0x58)) = 0.0f;
    *((s16 *) (((char *) var_a1) + 0x76)) = (s16) temp_ft2;
    *((s16 *) (((char *) var_a1) + 0x78)) = (s16) temp_ft2;
    *((s16 *) (((char *) var_a1) + 0x7A)) = (s16) temp_ft2;
    *((s16 *) (((char *) var_a1) + 0x7C)) = (double) ((s16) temp_ft2);
    *((s16 *) (((char *) var_a1) + 0x84)) = (s16) temp_ft2;
    *((s16 *) (((char *) var_a1) + 0x7E)) = (s16) temp_ft4;
    *((s16 *) (((char *) var_a1) + 0x80)) = (s16) temp_ft4;
    *((s16 *) (((char *) var_a1) + 0x82)) = (s16) temp_ft4;
  }
  return var_a1;
}
