void *func_802C676C(s32);
s32 func_802C68B0(void *, s32, s32, s32 *);
s32 func_8031C3FC(void *);
s32 func_8031E118(void *);
extern s32 D_8033A434;
extern f32 D_80347828;
extern f32 D_8034782C;
extern s32 func_8028A440;
void *func_8031E028(void *arg0)
{
  void *sp24;
  void *temp_a0;
  void *temp_v0;
  void *var_s0;
  var_s0 = arg0;
  if ((arg0 != NULL) || ((temp_v0 = func_802C676C(0x5A0), var_s0 = temp_v0, temp_v0 != NULL)))
  {
 func_8031C3FC(var_s0); temp_a0 = ((unsigned char *) var_s0) + 0xF0;
 sp24 = temp_a0; func_802C68B0(temp_a0, 0x64, 0xC, &func_8028A440); *((s16 *) (((char *) var_s0) + 0xBC)) = 9;
    *((s32 **) (((char *) var_s0) + 0xB8)) = &D_8033A434;
    *((s16 *) (((char *) var_s0) + 0xE4)) = 0;
    *((s16 *) (((char *) var_s0) + 0xE6)) = 0x64;
    *((f32 *) (((char *) var_s0) + 0xD4)) = (f32) D_80347828;
    *((f32 *) (0x64 + ((char *) var_s0))) = (f32) D_80347828;
    *((void **) (((char *) var_s0) + 0xB4)) = sp24;
    *((f32 *) (((char *) var_s0) + 0xE0)) = (f32) D_8034782C;
    func_8031E118(var_s0);
  }
  return var_s0;
}
