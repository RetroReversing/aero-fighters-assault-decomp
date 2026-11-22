s32 func_80220C44(s32 *);
extern s32 D_80274348;
void func_80223468(s32 arg0)
{
  long long sp18;
  s32 sp24;
  sp18 = (D_80274348 & (~0xFFF)) | (arg0 & 0xFFFFFFFF);
  func_80220C44((sp24 = 0, &sp18));
}

