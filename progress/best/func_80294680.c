void *func_802C676C(s32);
s32 func_803085E8(void *);
extern s32 D_8033FB30;
void *func_80294680(void *arg0)
{
  void *temp_v0;
  void *var_a0;
  do
  {
    var_a0 = arg0;
    if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0x7C), var_a0 = temp_v0, temp_v0 != NULL)))
    {
      arg0 = var_a0;
      func_803085E8(var_a0);
      var_a0 = arg0;
      *((s32 **) (((char *) arg0) + 0x6C)) = &D_8033FB30;
      *((s32 *) (((char *) arg0) + 0x70)) = 1;
 if (1) { }
    }
    return var_a0;
  }
  while (0);
}
