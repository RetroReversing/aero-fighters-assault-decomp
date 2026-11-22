s32 func_80234C78(f32 *, f32 *, f32 *);
s32 func_80234D30(f32 *, f32 *);
void func_8022A614(void *arg0, void *arg1, void *arg2)
{
  f32 sp44[3];
  f32 sp38[2];
  register f32 sp40;
  f32 sp2C[3];
  sp44[0] = (*((f32 *) (((char *) arg1) + 0x30))) - (*((f32 *) (((char *) arg2) + 0x30)));
  sp44[1] = (*((f32 *) (((char *) arg1) + 0x34))) - (*((f32 *) (((char *) arg2) + 0x34)));
  sp44[2] = (*((f32 *) (((char *) arg1) + 0x38))) - (*((f32 *) (((char *) arg2) + 0x38)));
  if (func_80234D30(sp44, sp44) != 0)
  {
    sp38[0] = *((f32 *) (((char *) arg2) + 0x20));
    sp38[1] = *((f32 *) (((char *) arg2) + 0x24));
    sp40 = *((f32 *) (((char *) arg2) + 0x28));
    func_80234C78(sp2C, sp44, sp38);
    if (func_80234D30(sp2C, sp2C) == 0)
    {
      sp2C[0] = *((f32 *) (((char *) arg2) + 0));
      sp2C[1] = *((f32 *) (((char *) arg2) + 4));
      sp2C[2] = 0.0f;
      func_80234D30(sp2C, sp2C);
    }
    func_80234C78(sp38, sp2C, sp44);
    func_80234D30(sp38, sp38);
    *((f32 *) (((char *) arg0) + 0)) = sp2C[0];
    *((f32 *) (((char *) arg0) + 4)) = sp2C[1];
    *((f32 *) (((char *) arg0) + 8)) = sp2C[2];
    *((f32 *) (((char *) arg0) + 0x10)) = sp44[0];
    *((f32 *) (((char *) arg0) + 0x14)) = sp44[1];
    *((f32 *) (((char *) arg0) + 0x18)) = sp44[2];
    *((f32 *) (((char *) arg0) + 0x20)) = sp38[0];
    *((f32 *) (((char *) arg0) + 0xC)) = 0.0f;
    *((f32 *) (((char *) arg0) + 0x24)) = sp38[1];
    *((f32 *) (((char *) arg0) + 0x30)) = (f32) (*((f32 *) (((char *) arg2) + 0x30)));
    *((f32 *) (((char *) arg0) + 0x34)) = (f32) (*((f32 *) (((char *) arg2) + 0x34)));
    *((f32 *) (((char *) arg0) + 0x28)) = sp40;
    *((f32 *) (((char *) arg0) + 0x3C)) = 1.0f;
    *((f32 *) (((char *) arg0) + 0x2C)) = 0.0f;
    *((f32 *) (((char *) arg0) + 0x1C)) = 0.0f;
    *((f32 *) (((char *) arg0) + 0x38)) = (f32) (*((f32 *) (((char *) arg2) + 0x38)));
  }
}

