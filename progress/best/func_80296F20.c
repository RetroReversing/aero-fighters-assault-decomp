void *func_802C676C(s32);
s32 func_802FD054(void *);
extern s32 D_8033FD80;
void *func_80296F20(void *arg0)
{
  void *temp_v0;
  void *var_a0;
 do { var_a0 = arg0; } while (0);
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xB0), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    arg0 = var_a0;
    func_802FD054(var_a0);
    var_a0 = arg0;
    *((s32 **) (((char *) var_a0) + 0xAC)) = &D_8033FD80;
  }
  return var_a0;
}
