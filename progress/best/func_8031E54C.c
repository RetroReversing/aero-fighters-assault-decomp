void *func_802C676C(s32);
s32 func_8031C3FC(void *);
extern s32 D_8033D960;
extern f32 D_80347844;
void *func_8031E54C(void *arg0)
{
  void *temp_v0;
  void *var_a0;
  if (1)
  {
  }
  var_a0 = arg0;
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xF0), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    arg0 = var_a0;
    func_8031C3FC(var_a0);
    var_a0 = arg0;
    *((s16 *) (((char *) var_a0) + 0)) = 0x13;
    *((s32 *) (((char *) var_a0) + 0xB4)) = 0;
    *((s16 *) (((char *) var_a0) + 0xE4)) = 1;
    *((f32 *) (((char *) var_a0) + 0xD4)) = 1.0f;
    *((s16 *) (((char *) var_a0) + 0xE6)) = 1;
    *((s32 **) (((char *) var_a0) + 0xB8)) = &D_8033D960;
    *((s16 *) (((char *) var_a0) + 0xA6)) = 0x10;
    *((s16 *) (((char *) var_a0) + 0x9C)) = 0x1AC;
    *((s16 *) (((char *) var_a0) + 0x98)) = 0x20;
    *((s16 *) (((char *) var_a0) + 0x9A)) = 0x20;
    *((s16 *) (((char *) var_a0) + 0xA4)) = 1;
    *((s8 *) (((char *) var_a0) + 0x74)) = 0;
    *((s16 *) (((char *) var_a0) + 0xBC)) = 8;
    *((f32 *) (((char *) var_a0) + 0x4C)) = 10.0f;
    *((f32 *) (((char *) var_a0) + 0x48)) = 10.0f;
    *((f32 *) (((char *) var_a0) + 0x44)) = 10.0f;
    *((f32 *) (((char *) var_a0) + 0xE0)) = 1.0f;
    *((f32 *) (((char *) var_a0) + 0x64)) = (f32) D_80347844;
    *((f32 *) (((char *) var_a0) + 0xA0)) = 15.0f;
  }
  return var_a0;
}

