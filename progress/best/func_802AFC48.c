f64 func_80207130(s32);
s32 func_80231A24(f32, f32, s32 *, s32, s32);
extern s32 D_803265FC;
extern s32 D_80326600;
extern s32 D_80326604;
extern s32 D_803481C4;
extern f32 D_803481C8;
extern f32 D_803481CC;
void func_802AFC48(s32 arg0)
{
  f32 sp1C;
  f32 temp_fa0;
  f32 temp_fa1;
  s32 temp_a1;
  if (D_803481C4 == 0)
  {
    D_803481C4 = 1;
    D_803481C8 = (f32) func_80207130(0);
  }
  temp_fa1 = (f32) func_80207130(0);
  D_803481CC = temp_fa1 - D_803481C8;
  temp_fa0 = D_803481CC;
  if (temp_fa0 >= 60.0f)
  {
    sp1C = temp_fa1;
    temp_a1 = (D_80326600 + 1) & 0xFFu;
    D_80326600 = temp_a1;
 if (1) { } if (1) { } if (1) { } if (1) { } if (1) { } if (1) { }
    D_803481CC = temp_fa0 - 60.0f;
    func_80231A24(temp_fa0, temp_fa1, &D_80326604, temp_a1, D_803265FC);
    D_803481C8 = temp_fa1;
  }
  D_803265FC += 1;
}
