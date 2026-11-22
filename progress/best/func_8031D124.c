void *func_802C676C(s32);
s32 func_8031C3FC(void *);
s32 func_8031D1F0(void *);
extern s32 D_80330E38;
extern f32 D_803477CC;
void *func_8031D124(void *arg0)
{
  void *temp_v0;
  void *var_a0;
  if (1)
  {
    var_a0 = arg0;
    if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xF0), var_a0 = temp_v0, temp_v0 != NULL)))
    {
      arg0 = var_a0;
      func_8031C3FC(var_a0);
      *((s32 *) (((char *) arg0) + 0xB4)) = 0;
      *((s16 *) (((char *) arg0) + 0xBC)) = 8;
      *((s32 **) (((char *) arg0) + 0xB8)) = &D_80330E38;
      *((s16 *) (((char *) arg0) + 0xE4)) = 0;
      *((s16 *) (((char *) arg0) + 0xE6)) = 0xF;
      *((f32 *) (((char *) arg0) + 0xD4)) = 2.5f;
      *((f32 *) (((char *) arg0) + 0x64)) = 2.5f;
      *((f32 *) (((char *) arg0) + 0xE0)) = (f32) D_803477CC;
      func_8031D1F0(arg0);
      var_a0 = arg0;
    }
    return var_a0;
  }
}

