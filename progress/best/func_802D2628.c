s32 func_8021B4B0();
s32 func_8021B6D4();
s32 func_8022A0D0(void *, s32, f32, s32);
f32 func_802AEE88();
s32 func_802D19EC(void *, f32);
extern s32 D_803278B4;
void func_802D2628(void *arg0, s32 arg1, f32 arg2)
{
int *__repair_home1 = &arg1;

int __repair_literal;

  void *sp20;
  f32 temp_fv0;
  void *temp_a2;
  func_802D19EC(arg0, arg2);
  temp_a2 = ((unsigned char *) arg0) + 0x2C;
  sp20 = temp_a2;
  func_8021B6D4(*((s32 *) (((char *) arg0) + 0)), 0, temp_a2);
__repair_literal = 0;

  func_8022A0D0(sp20, 0, (*((f32 *) (((char *) arg0) + 0x10))) * arg2, arg2 * __repair_literal);
  if ((*((u8 *) (((char *) arg0) + 0x1E))) != 0)
  {
    *((f32 *) (((char *) arg0) + 0x64)) -= 10.0f * arg2;
  }
  func_8021B4B0(*((s32 *) (((char *) arg0) + 0)), 0, sp20);
  temp_fv0 = func_802AEE88(D_803278B4, *((s32 *) (((char *) arg0) + 0x5C)), *((s32 *) (((char *) arg0) + 0x60)));
  *((f32 *) (((char *) arg0) + 4)) = temp_fv0;
  *((f32 *) (((char *) arg0) + 8)) = (f32) ((*((f32 *) (((char *) arg0) + 0x64))) - temp_fv0);
}

