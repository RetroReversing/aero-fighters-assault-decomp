f32 func_8022AA60(f32);
extern f32 D_80344E30;
extern s8 D_80348250[];
void func_80300320(void)
{
  f32 temp_fs1;
  f32 var_fs0;
  s16 var_s0;
  s32 temp_t6;
 do { var_fs0 = 0.0f; temp_fs1 = D_80344E30; var_s0 = 0; do { var_s0 += 1; ; *(D_80348250 + (var_s0 * 4)) = func_8022AA60(var_fs0); var_fs0 += temp_fs1; } while (var_s0 < 0x10); } while (0);
  *((f32 *) (((char *) D_80348250) + 0x40)) = 1.0f;
}
