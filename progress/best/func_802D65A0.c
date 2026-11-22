void *func_802C676C(s32);
s32 func_802D18E0(void *);
extern s32 D_80343290;
extern f32 D_80343360;
extern f32 D_80343364;
extern f32 D_80343368;
extern u8 D_80348B9A;
void *func_802D65A0(void *arg0)
{
  void *temp_v0;
  void *var_a0;
 goto dummy_label_782702; dummy_label_782702: ;
  var_a0 = arg0;
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0xE8), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    arg0 = var_a0;
    var_a0 = arg0;
    func_802D18E0(arg0);
    *((s32 **) (((char *) arg0) + 0xD8)) = &D_80343290;
    *((s32 *) (((char *) var_a0) + 0xDC)) = 0;
    *((u8 *) (((char *) var_a0) + 0xE4)) = 1;
    *((u8 *) (((char *) var_a0) + 0xE5)) = 0;
    if (D_80348B9A == 1)
    {
      *((f32 *) (((char *) var_a0) + 0xE0)) = (f32) D_80343360;
    }
    else
      if (D_80348B9A == 2)
    {
      *((f32 *) (((char *) var_a0) + 0xE0)) = (f32) D_80343364;
    }
    else
      if (D_80348B9A == 3)
    {
      *((f32 *) (((char *) var_a0) + 0xE0)) = (f32) D_80343368;
    }
  }
  return var_a0;
}
