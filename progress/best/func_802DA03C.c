void *func_802C676C(s32);
s32 func_802DA378(void *);
extern f32 D_803439E8;
void *func_802DA03C(void *arg0)
{
  void *temp_v0;
  void *var_a0;
  if ((long long) 1)
  {
    var_a0 = arg0;
    if (1)
    {
    }
  }
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0x90), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    *((f32 *) (((char *) var_a0) + 0)) = 1.0f;
    *((f32 *) (((char *) var_a0) + 4)) = 0.0f;
    *((f32 *) (((char *) var_a0) + 0xC)) = 0.0f;
    *((f32 *) (((char *) var_a0) + 0x10)) = 0.0f;
    *((f32 *) (((char *) var_a0) + 0x14)) = 0.0f;
    *((f32 *) (((char *) var_a0) + 0x18)) = 0.0f;
    *((f32 *) (((char *) var_a0) + 0x1C)) = 0.0f;
    *((f32 *) (((char *) var_a0) + 8)) = (f32) D_803439E8;
    arg0 = var_a0;
    func_802DA378(var_a0);
    var_a0 = arg0;
  }
  return var_a0;
}

