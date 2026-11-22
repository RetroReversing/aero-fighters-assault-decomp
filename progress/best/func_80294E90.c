void *func_802C676C(s32);
s32 func_80320BB8(void *);
extern s32 D_8033FC10;
void *func_80294E90(void *arg0)
{
  void *temp_v0;
  void *var_a0;
  if (1)
  {
    var_a0 = arg0;
    if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xF4), var_a0 = temp_v0, temp_v0 != NULL)))
    {
      arg0 = var_a0;
      func_80320BB8(var_a0);
      var_a0 = arg0;
      *((s32 **) (((char *) var_a0) + 0x7C)) = &D_8033FC10;
      *((s32 *) (((char *) var_a0) + 4)) = 0xFFFF;
      *((s16 *) (((char *) var_a0) + 0x80)) = 0;
    }
  }
  return var_a0;
}

