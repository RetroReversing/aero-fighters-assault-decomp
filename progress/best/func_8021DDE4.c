s32 func_8021E1BC();
extern s32 D_8025C600;
extern u16 D_80280BF6;
void func_8021DDE4(void)
{
  s32 var_s0;
  s32 var_s1;
 do { var_s1 = 0; if (((s32) D_80280BF6) > 0) { var_s0 = 0; do { if ((*((s32 *) (D_8025C600 + var_s0))) != 0) { func_8021E1BC(var_s1); } var_s1 += 1; var_s0 += 0x18; } while (var_s1 < ((s32) D_80280BF6)); } } while (0);
}
