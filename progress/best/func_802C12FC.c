s32 func_802C5150(f32,  f32,  void *);
s32 func_802D0154(void *, f32, s32, void *);
extern f32 D_80341AD8;
void func_802C12FC(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, void *arg7)
{
  void *sp18;
  void *temp_a1;
  f32 *__base_D_80341AD8;
  __base_D_80341AD8 = &D_80341AD8;
  if (1)
  {
    *((f32 *) (((char *) arg0) + 0x54)) = arg3;
  }
  *((f32 *) (((char *) arg0) + 0x84)) = arg2;
  temp_a1 = ((unsigned char *) arg0) + 0x88;
  *((f32 *) (((char *) arg0) + 0x50)) = arg4;
  *((f32 *) (((char *) arg0) + 0x58)) = arg5;
  do
  {
    *((void **) (((char *) arg0) + 0x12C)) = arg7;
    *((f32 *) (((char *) arg0) + 0x5C)) = 0.0f;
    *((f32 *) (((char *) arg0) + 0x108)) = 0.0f;
    *((s32 *) (((char *) arg0) + 0x4C)) = arg6;
    *((f32 *) (((char *) arg0) + 0x130)) = (f32) ((*((f32 *) (((char *) arg7) + 0x16C))) * (*__base_D_80341AD8));
    *((f32 *) (((char *) arg0) + 0x134)) = (f32) ((*((f32 *) (((char *) arg7) + 0x170))) * (*__base_D_80341AD8)); sp18 = temp_a1;
    func_802C5150(arg2,  arg3,  arg7);
    func_802D0154(temp_a1, *((f32 *) (((char *) arg0) + 0x130)), 0x7A, arg0);
  }
  while (0);
  func_802D0154(sp18, *((f32 *) (((char *) arg0) + 0x134)), 0x78, arg0);
}

