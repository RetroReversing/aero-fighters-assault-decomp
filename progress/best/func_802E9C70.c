void *func_802C676C(s32);
s32 func_80320BB8(void *);
extern s32 D_803440B0;
void *func_802E9C70(void *arg0)
{
  void *temp_v0;
  void *var_a0;
  do
  {
    var_a0 = arg0;
    if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xCC), var_a0 = temp_v0, temp_v0 != NULL)))
    {
      arg0 = var_a0;
      func_80320BB8(var_a0);
      var_a0 = arg0;
      *((s32 **) (0x7C + ((char *) var_a0))) = &D_803440B0;
      *((s32 *) (((char *) var_a0) + 4)) = 0xFFFF;
    }
  }
  while (0);
  return var_a0;
}

