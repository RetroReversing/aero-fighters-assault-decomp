s32 func_802E7734(s32, s32, f32, f32, f32, f32, f32);
s32 func_803084B0();
extern s32 D_80343588;
extern f32 D_8034358C;
extern f32 D_80343590;
extern f32 D_80343594;
extern f32 D_80343598;
extern f32 D_8034359C;
extern f32 D_803435A0;
extern f32 D_803435A4;
extern f32 D_803435A8;
extern f32 D_803435AC;
extern f32 D_803435B0;
extern f32 D_803435B4;
s32 func_802D8474(void *arg0)
{
  f32 temp_fs0;
  f32 temp_fs1;
  f32 temp_fs4;
  s32 temp_v0;
  *((s32 *) (((char *) arg0) + 0x7FA8)) = func_803084B0((void *) 6, 1, 3, 2, 0, 1, *((f32 *) (&D_80343588)), D_8034358C, D_80343590, 140.0f);
  *((s32 *) (((char *) arg0) + 0x7FAC)) = func_803084B0(arg0, 9, 1, 4, 1, 0, 1, D_80343594, -278, 600.0f, 90.0f);
  *((s32 *) (((char *) arg0) + 0x7FB0)) = func_803084B0(arg0, 7, 1, 4, 1, 0, 1, D_80343598, D_8034359C);
  *((s32 *) (((char *) arg0) + 0x7FB4)) = func_803084B0(arg0, 7, 1, 4, 1, 0, 1, D_803435A4, D_803435A8, 680.0f, 90.0f);
  *((u8 *) (((char *) arg0) + 0x7FCC)) = 0;
  temp_fs0 = D_803435AC;
  temp_fs1 = D_803435B0;
  temp_v0 = func_803084B0(arg0, 0xD, 1, 0, 0, 0, 2, temp_fs0, 2000.0f, temp_fs1, 0.0);
  *((s32 *) (((char *) arg0) + 0x7FB8)) = temp_v0;
  func_802E7734(temp_v0, 0, temp_fs0, temp_fs0, temp_fs1, 50.0f, 0.5f);
  temp_fs4 = D_803435B4;
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 1, temp_fs4, temp_fs4, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 2, temp_fs4, temp_fs0, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 3, temp_fs0, temp_fs4, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 4, temp_fs0, temp_fs0, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 5, temp_fs4, temp_fs4, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 6, temp_fs0, temp_fs4, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 7, temp_fs4, temp_fs0, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 8, temp_fs4, temp_fs4, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 9, temp_fs0, temp_fs0, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 0xA, temp_fs4, temp_fs0, temp_fs1, 50.0f, 0.5f);
  func_802E7734(*((s32 *) (((char *) arg0) + 0x7FB8)), 0xB, temp_fs0, temp_fs4, temp_fs1, 50.0f, 0.5f);
  return 1;
}

