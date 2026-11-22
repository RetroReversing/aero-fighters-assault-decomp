s32 func_803084B0();
extern s32 D_80346AEC;
extern f32 D_80346AF0;
extern f32 D_80346AF4;
extern f32 D_80346AF8;
extern f32 D_80346AFC;
extern f32 D_80346B00;
extern f32 D_80346B04;
extern f32 D_80346B08;
extern f32 D_80346B0C;
s32 func_803102CC(s32 arg0)
{
  func_803084B0(arg0 & 0xFFFF, 5, 1, 2, 0, 1, 0, D_80346B08, D_80346B0C, 680.0, 90.0f);
  func_803084B0(arg0 & 0xFFFF, 5, 1, 2, 0, 1, 0, D_80346AF8, -278.0f, 600.0f, 90.0);
  func_803084B0(arg0 & 0xFFFF, 5, 1, 2, 0, 1, 0, D_80346AFC);
  func_803084B0(6, 1, 3 & 0xFFFFFFFFFFFFFFFFu, 1 & 0xFFFF, 0, 0, D_80346AEC, D_80346AF0, D_80346AF4, 140.0f);
  return 1;
}

