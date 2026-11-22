s32 func_803084B0();
extern s32 D_80346AD0;
extern f32 D_80346AD4;
extern f32 D_80346AD8;
extern f32 D_80346ADC;
extern f32 D_80346AE0;
extern f32 D_80346AE4;
extern f32 D_80346AE8;
s32 func_8030F480(unsigned int arg0)
{
  func_803084B0(arg0, 2, 2, 4, 0, 0, 2, (0, D_80346AE0), 640.0, 250.0, 264.0);
  func_803084B0(arg0, 4, 2, 4, 0, 0, 2, (0, (double) D_80346AD8), D_80346ADC, 255.0f, 264.0);
  func_803084B0(arg0, 1, 2, 4, 0, 0, 2, D_80346AE4, D_80346AE8, 255., 264.0);
  func_803084B0((unsigned long long) 3, 2, 4, 0, 0, 2, *((f32 *) (&D_80346AD0)), D_80346AD4, 260.0f, 264.0f * 1.0f);
  return 1;
}

