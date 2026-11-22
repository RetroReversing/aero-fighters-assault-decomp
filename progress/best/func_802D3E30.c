void *func_802C676C(s32);
s32 func_802D18E0(void *);
extern s32 D_80342F30;
void *func_802D3E30(void *arg0)
{
  void *temp_v0;
  void *var_a0;
 if (1) { } if (1) { }
  var_a0 = arg0;
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0x11C), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    arg0 = var_a0;
    func_802D18E0(var_a0);
    var_a0 = arg0;
    *((s32 **) ((0, ((char *) var_a0) + 0xD8))) = &D_80342F30;
  }
  return var_a0;
}
