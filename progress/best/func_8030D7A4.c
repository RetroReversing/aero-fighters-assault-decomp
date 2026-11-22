void *func_802C676C(s32);
s32 func_803085E8(void *);
extern s32 D_803467E0;
void *func_8030D7A4(void *arg0)
{
  void *temp_v0;
  void *var_a0;
 if (1) { }
  var_a0 = arg0;
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xD8), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    arg0 = var_a0;
    func_803085E8(var_a0);
    var_a0 = arg0;
    *((s32 **) (((char *) var_a0) + 0x6C)) = &D_803467E0;
  }
  return var_a0;
}
