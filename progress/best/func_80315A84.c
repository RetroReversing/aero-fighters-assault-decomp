s32 func_803021B8(s32, s32, s32, s32, s32);
s32 func_80302394(s32, s32);
s32 func_803025E4(s32, s32, f32);
s32 func_80305E10(s32, s32, s32);
extern s32 D_8032B734;
extern f32 D_80347314;
void func_80315A84(s32 arg0, s32 arg1, s32 arg2)
{
  int *__repair_home1 = &arg1;
  int *__repair_home0 = &arg0;
  int *__repair_home2 = &arg2;
  f32 sp2C;
  f32 var_fv0;
  s32 sp20;
  s32 temp_t7;
  s32 temp_v0;
  var_fv0 = 1.0f;
  temp_t7 = (*__repair_home2) & 0xFF;
  if (temp_t7 != 0xFF)
  {
    if ((*__repair_home1) & 0xFF)
    {
      if (temp_t7 == 0x37)
      {
        var_fv0 = D_80347314;
      }
      sp2C = var_fv0;
      temp_v0 = func_80305E10(0x1F4, 0xFA, 0);
      sp20 = (sp20 = (*__repair_home0) + 0xDD8);
      if (func_803021B8(D_8032B734 + 0x8F4, sp20, temp_t7, temp_v0, 8) != 0)
      {
        func_803025E4(D_8032B734 + 0x8F4, sp20, var_fv0);
      }
    }
    else
    {
      func_80302394(D_8032B734 + 0x8F4, (*__repair_home0) + 0xDD8);
    }
  }
}

