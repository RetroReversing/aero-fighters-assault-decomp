void *func_802C676C(s32);
s32 func_80316F94(void *);
extern s32 D_80347380;
void *func_803172C4(void *arg0)
{
  void *var_a0;
  void *temp_v0;
  ;
  if (1)
  {
    var_a0 = arg0;
    if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0x1A4), var_a0 = temp_v0, temp_v0 != NULL)))
    {
      *((s32 **) (((char *) var_a0) + 0x1A0)) = &D_80347380;
      *((s32 *) (((char *) var_a0) + 0xC)) = 0;
      *((s32 *) (((char *) var_a0) + 4)) = 0xFFFF;
      *((s32 *) (((char *) var_a0) + 0)) = 0;
      arg0 = var_a0;
      func_80316F94(var_a0);
      var_a0 = arg0;
    }
 if (0) { }
  }
  return var_a0;
}
