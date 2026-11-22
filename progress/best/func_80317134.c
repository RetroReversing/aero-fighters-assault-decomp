s32 func_803021B8();
s32 func_80302558();
s32 func_803025AC();
s32 func_803025E4();
s32 func_803026EC();
s32 func_80305E10();
s32 func_80305E70();
extern s32 D_8032B734;
extern f32 D_8034753C;
extern f32 D_80347540;
extern f32 D_80347544;
void func_80317134(void *arg0, f32 arg1, s32 arg2)
{
  f32 __repair_operand;
  f32 var_fv1;
  f32 sp28;
  f32 temp_fv0;
  s32 var_a3;
  void *temp_s0;
  if ((*((u8 *) (((char *) arg0) + 0xB8))) != 0xFF)
  {
    if ((*((s32 *) (((char *) arg0) + 0))) == 5)
    {
      sp28 = 1.0f;
      var_fv1 = 1.0f;
      var_a3 = func_80305E10(func_80305E70(6), 0x1F4, 0);
    }
    else
    {
      f32 var_fa0;
 var_a3 = func_80305E10(func_80305E70(7 & 0xFFFFFFFFFFFFFFFF), 0x1F4, 0); __repair_operand = D_80347544; temp_fv0 = (D_80347540 * ((0, arg1))) + __repair_operand; var_fv1 = temp_fv0; var_fa0 = D_8034753C;
      if (temp_fv0 < var_fa0)
      {
        var_fv1 = var_fa0;
      }
      else
      {
        var_fa0 = 2.0f;
        if (temp_fv0 > 2.0f)
        {
          var_fv1 = var_fa0;
        }
      }
      dummy_label_714473:
      ;

      ;
      ;
      ;
      ;
    }
    temp_s0 = ((unsigned char *) arg0) + 0xBC;
    sp28 = var_fv1;
    if (func_803021B8(D_8032B734 + 0x8F4, temp_s0, *((u8 *) (((char *) arg0) + 0xB8)), var_a3, 8) != 0)
    {
      sp28 = var_fv1;
      func_803026EC(D_8032B734 + 0x8F4, temp_s0, 0);
    }
    func_803025E4(D_8032B734 + 0x8F4, temp_s0, var_fv1);
    func_803025AC(D_8032B734 + 0x8F4, temp_s0, 0x3F000000);
    func_80302558(D_8032B734 + 0x8F4, temp_s0, arg2);
  }
}
