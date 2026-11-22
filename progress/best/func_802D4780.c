void *func_802C676C(s32);
s32 func_802D18E0(void *);
extern s32 D_80343020;
extern f32 D_803430F0;
extern f32 D_803430F4;
void *func_802D4780(void *arg0)
{
  register void *temp_v0;
  register void *var_a0;
  if (1)
  {
    var_a0 = arg0;
    if ((((((((var_a0 != ((int) NULL)) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) || ((temp_v0 = func_802C676C(0x1C0), var_a0 = temp_v0, temp_v0 != ((u32) NULL))))
    {
      arg0 = var_a0;
      func_802D18E0(var_a0);
      var_a0 = arg0;
      *((s32 **) (((char *) var_a0) + 0xD8)) = &D_80343020;
      *((f32 *) (((char *) var_a0) + 0x1B8)) = 0.0f;
      *((f32 *) (((char *) var_a0) + 0xC)) = 0.0f;
      *((f32 *) (((char *) var_a0) + 0x18)) = 40.0f;
      *((s32 *) (((char *) var_a0) + 0xDC)) = 0;
      *((s32 *) (((char *) var_a0) + 0x19C)) = 0;
      *((s8 *) (((char *) var_a0) + 0x194)) = 0;
      *((s8 *) (((char *) var_a0) + 0x195)) = 0;
      *((s8 *) (((char *) var_a0) + 0x196)) = 0;
      *((s8 *) (((char *) var_a0) + 0x198)) = 0;
      *((s8 *) (((char *) var_a0) + 0x197)) = 0;
      *((f32 *) (((char *) var_a0) + 0x1AC)) = 0.0f;
      *((f32 *) (((char *) var_a0) + 0x1A8)) = 0.0f;
      *((f32 *) (((char *) var_a0) + 0x20)) = 0.0f;
      *((f32 *) (((char *) var_a0) + 0x1A4)) = 0.0f;
      *((f32 *) (((char *) var_a0) + 0x1BC)) = (f32) D_803430F0;
      *((f32 *) (((char *) var_a0) + 0x1A0)) = (f32) D_803430F4;
      *((f32 *) (((char *) var_a0) + 0x1B0)) = 0.0f;
    }
  }
  return var_a0;
}

