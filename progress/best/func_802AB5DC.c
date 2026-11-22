void *func_802A3AF0(s32, s32, s32, s32, s32 *);
s32 func_8031648C(void *, s32, s32);
extern s32 D_803261EC;
void *func_802AB5DC(s32 arg0, s32 arg1, s32 arg2)
{
  void *temp_v0;
  void *sp24;
  void *var_a0;
  temp_v0 = func_802A3AF0(arg0 + 0x6648, arg0 + 0x6600, 0x6649, arg0 + 0x12, &D_803261EC);
  var_a0 = temp_v0;
  if (temp_v0 != NULL)
  {
    ;
    func_8031648C(var_a0, arg1, arg2);
    var_a0 = sp24;
    *((s8 *) (((char *) temp_v0) + 0x50)) = 1;
  }
  return var_a0;
}

