void *func_802C676C(s32);
s32 func_8031C3FC(void *);
s32 func_8031E380(void *);
extern s32 D_8033D3DC;
void *func_8031E2B8(void *arg0)
{
    s32 *__base_D_8033D3DC;
  void *var_a0;
  void *temp_v0;
 do { var_a0 = arg0; } while (0);
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xF0), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    arg0 = var_a0;
    func_8031C3FC(var_a0);
    *((s32 *) (((char *) arg0) + 0xB4)) = 0;
    *((s16 *) (((char *) arg0) + 0xBC)) = 8;
    __base_D_8033D3DC = &D_8033D3DC;
    *((s32 **) (((char *) arg0) + 0xB8)) = __base_D_8033D3DC;
    *((s16 *) (((char *) arg0) + 0xE4)) = 0;
    *((s16 *) (((char *) arg0) + 0xE6)) = 8;
    *((f32 *) (((char *) arg0) + 0xD4)) = 1.0f;
    *((f32 *) (((char *) arg0) + 0x64)) = 1.0f;
    *((f32 *) (((char *) arg0) + 0xE0)) = 10.0f;
    func_8031E380(arg0);
    var_a0 = arg0;
  }
  return var_a0;
}
