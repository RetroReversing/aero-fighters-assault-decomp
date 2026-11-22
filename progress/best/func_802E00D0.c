s32 func_803021B8(f32, s32, void *, u8, s32, s32);
s32 func_80302558(s32, void *, s32);
s32 func_803025AC(s32, void *, s32);
s32 func_803025E4(s32, void *, f32);
s32 func_803026EC(s32, void *, s32);
s32 func_80305E10(s32, s32, s32);
s32 func_80305E70(s32, void *);
extern s32 D_8032B734;
extern f32 D_80343CC4;
extern f32 D_80343CC8;
extern f32 D_80343CCC;
void func_802E00D0(void *arg0, f32 arg1, s32 arg2)
{
  f32 __repair_operand;
  f32 var_fv1;
  s32 *__base_D_8032B734;
  f32 sp28;
  f32 temp_fv0;
  f32 var_fa0;
  void *temp_s0;
  if ((*((u8 *) (((char *) arg0) + 0xB8))) != 0xFF)
  {
    s32 temp_a3;
    temp_a3 = func_80305E10(func_80305E70(*((s32 *) (((char *) arg0) + 0x14)), arg0), 0x1F4, 0);
    temp_s0 = ((unsigned char *) arg0) + 0xBC;
    __repair_operand = D_80343CCC;
    __repair_operand = (D_80343CC8 * arg1) + __repair_operand;
    var_fv1 = __repair_operand;
    var_fa0 = D_80343CC4;
    if (__repair_operand < var_fa0)
    {
      var_fv1 = var_fa0;
    }
    else
    {
      var_fa0 = 2.0f;
      if (__repair_operand > 2.0f)
      {
        var_fv1 = var_fa0;
      }
    }
    sp28 = var_fv1;
    __base_D_8032B734 = &D_8032B734;
    if (func_803021B8(var_fa0, (*__base_D_8032B734) + 0x8F4, temp_s0, *((u8 *) (((char *) arg0) + 0xB8)), temp_a3, 8) != 0)
    {
      sp28 = var_fv1;
      func_803026EC((*__base_D_8032B734) + 0x8F4, temp_s0, 0);
    }
    if (((unsigned long) __base_D_8032B734) & 0x100)
    {
      func_803025E4((*__base_D_8032B734) + 0x8F4, temp_s0, var_fv1);
    }
    else
    {
      func_803025E4((*__base_D_8032B734) + 0x8F4, temp_s0, var_fv1);
    }
    func_803025AC((*__base_D_8032B734) + 0x8F4, temp_s0, 0x3F000000);
    func_80302558((*__base_D_8032B734) + 0x8F4, temp_s0, arg2);
  }
}

