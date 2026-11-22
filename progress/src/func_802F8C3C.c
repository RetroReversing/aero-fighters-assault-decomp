f64 func_80207130(s32);
s32 math_mtx4Identity(void *);
s32 func_8028FBA4(s32, f32);
s32 func_802D0154(void *, s32, s32);
extern s32 D_8032AA74;
void func_802F8C3C(void *arg0, void *arg1)
{
  f32 sp24;
  f32 __repair_fzero = 0.0f;
  s32 sp1C;
  sp1C = D_8032AA74;
  sp24 = ((f32) func_80207130(0)) - (*((f32 *) (((char *) arg0) + 0x38)));
  math_mtx4Identity(arg1);
  *((f32 *) (((char *) arg1) + 0x30)) = -25.0f;
  *((f32 *) (((char *) arg1) + 0x34)) = __repair_fzero;
  *((f32 *) (((char *) arg1) + 0x38)) = 300.0f;
  func_802D0154(arg1, 0xBFC90FE0, 0x78);
  func_8028FBA4(sp1C + 0x78, sp24);
}

