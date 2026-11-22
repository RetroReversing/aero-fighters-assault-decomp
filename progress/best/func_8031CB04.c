void *func_802C676C(s32);
volatile unsigned int func_8031C3FC(void *);
s32 func_8031CBD0(void *);
extern s32 D_8032D8CC;
extern f32 D_803477B4;
void *func_8031CB04(void *arg0)
{
  void *temp_v0;
  void *var_a0;
  if (((((((((1 & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu)
  {
    var_a0 = arg0;
  }
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xF0), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    arg0 = var_a0;
    func_8031C3FC(var_a0);
    *((s32 *) (((char *) arg0) + 0xB4)) = 0;
    *((s16 *) (((char *) arg0) + 0xBC)) = 8;
    *((s32 **) (((char *) arg0) + 0xB8)) = &D_8032D8CC;
    *((s16 *) (((char *) arg0) + 0xE4)) = 1;
    *((s16 *) (((char *) arg0) + 0xE6)) = 1;
    *((f32 *) (((char *) arg0) + 0xD4)) = 3.0f;
    *((f32 *) (((char *) arg0) + 0x64)) = 3.0f;
    *((f32 *) (((char *) arg0) + 0xE0)) = (f32) D_803477B4;
    func_8031CBD0(arg0);
    var_a0 = arg0;
  }
  return var_a0;
}

