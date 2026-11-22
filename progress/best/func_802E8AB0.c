s32 math_mtx4Identity(s32 *);
s32 func_802AB26C(s32, s32, s32 *, s32);
s32 func_802CEF48(s32, s32, unsigned long long, s32, s32 *, s32 *);
s32 func_802D0154(s32 *, s32, s32);
extern s32 D_8033E63C;
void func_802E8AB0(void *arg0, s32 arg1)
{
  f32 sp68[3];
  s32 sp38;
  s32 sp34;
  s32 sp30;
  s32 sp2C;
  s32 temp_v0;
  temp_v0 = *((s32 *) (((char *) arg0) + 0x60));
  switch (temp_v0)
  {
    case 2:
      sp2C = 2;
      break;

    case 0:

    case 1:

    case 3:

    case 16:

    case 26:
      sp2C = 1;
      break;

  }

  func_802CEF48(0, *((f32 *) (((char *) arg0) + 0xF8)), *((f32 *) (((char *) arg0) + 0xFC)), *((f32 *) (((char *) arg0) + 0x100)), &sp34, &sp30);
  math_mtx4Identity(&sp38);
  sp68[0] = *((f32 *) (((char *) arg0) + 0xF8));
  sp68[1] = *((f32 *) (((char *) arg0) + 0xFC));
  sp68[2] = *((f32 *) (((char *) arg0) + 0x100));
  func_802D0154(&sp38, sp34, 0x7A);
  func_802D0154(&sp38, sp30, 0x78);
  func_802AB26C(D_8033E63C, arg1, &sp38, sp2C);
}

