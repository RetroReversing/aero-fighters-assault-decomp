s32 func_803021B8(s32, void *, u8, s32, s32);
s32 func_80302558(s32, void *, s32 *);
s32 func_803026EC(s32, void *, s32);
s32 func_80302900(s32);
s32 func_80302908(s32, s32, s32, s32);
s32 func_803029FC(s32);
s32 func_80305E10(s32, s32, s32);
s32 math_mtx4Identity(s32 *);
extern u8 D_80323814;
extern s32 D_8032B734;
extern f32 D_8033F268;
extern f32 D_8033F26C;
void func_80291BF0(void *arg0, f32 arg1, s32 arg2)
{
  void *sp28;
  s32 temp_v0;
  s32 var_v0;
  s32 sp30;
  void *temp_a1;
  var_v0 = ((*((u8 *) (((char *) arg0) + 0xAC8))) != 0) == 0;
  if ((((var_v0 != 0) && (D_8033F268 < arg1)) && ((*((u8 *) (((char *) arg0) + 0xAC9))) == 0)) && (D_80323814 == 0))
  {
    D_80323814 = 1;
    func_80302900(D_8032B734 + 0x8F4);
    func_80302908(D_8032B734 + 0x8F4, 0x85, 0x3D4CCCCD, 0x3F800000);
    func_80302908(D_8032B734 + 0x8F4, 0x84, 0x3D4CCCCD, 0x3F800000);
    do
    {
      func_803029FC(D_8032B734 + 0x8F4);
    }
    while (0);
    var_v0 = ((*((u8 *) (((char *) arg0) + 0xAC8))) != 0) == 0;
  }
  if (((var_v0 != 0) && (D_8033F26C <= arg1)) && ((((((((((((((*((u8 *) (((char *) arg0) + 0xAC9))) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) == 0))
  {
    *((u8 *) (((char *) arg0) + 0xAC9)) = 1U;
    *((f32 *) (((char *) arg0) + 0xACC)) = .0f;
  }
  if ((*((u8 *) (((char *) arg0) + 0xAD0))) != 0xFF)
  {
    math_mtx4Identity(&sp30);
 temp_v0 = func_80305E10(0x1F4, 0x1388, 0); temp_a1 = ((unsigned char *) arg0) + 0xAD4;
    sp28 = temp_a1;
    if (func_803021B8(D_8032B734 + 0x8F4, temp_a1, *((u8 *) (((char *) arg0) + 0xAD0)), temp_v0, 8))
    {
      func_803026EC(D_8032B734 + 0x8F4, sp28, 0);
    }
    func_80302558(D_8032B734 + 0x8F4, sp28, &sp30);
  }
}
