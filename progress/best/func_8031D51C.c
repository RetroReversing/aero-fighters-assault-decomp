void *func_802C676C(s32);
s32 func_8031C3FC(void *);
s32 func_8031D5EC(void *);
extern s32 D_80332F30;
extern f32 D_803477E8;
void *func_8031D51C(void *arg0)
{
  void *temp_v0;
  void *var_a0;
 do { var_a0 = arg0; } while (0);
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xF0), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    arg0 = var_a0;
    func_8031C3FC(var_a0);
    *((s32 *) (((char *) arg0) + 0xB4)) = 0;
    *((s16 *) (((char *) arg0) + 0xBC)) = 8;
    *((s32 **) (((char *) arg0) + 0xB8)) = &D_80332F30;
    *((s16 *) (((char *) arg0) + 0xE4)) = 1;
    *((s16 *) (((char *) arg0) + 0xE6)) = 0x14;
    *((f32 *) (((char *) arg0) + 0xD4)) = 4.0f;
    *((f32 *) (((char *) arg0) + 0x64)) = 4.0f;
    *((f32 *) (((char *) arg0) + 0xE0)) = (f32) D_803477E8;
    func_8031D5EC(arg0);
    var_a0 = arg0;
  }
  return var_a0;
}
