s32 func_8021B240();
void func_80291820(void *arg0)
{
  int __repair_constant = 4;
  s32 var_s0;
  s32 var_s0_2;
  void *var_s1;
  void *var_s1_2;
 do { var_s0 = 0; var_s1 = arg0; do { func_8021B240(*((s32 *) (((char *) var_s1) + 0x2A4)), 3, 2, 0); var_s0 += __repair_constant; var_s1 = ((unsigned char *) var_s1) + 4; } while (var_s0 < 0x14); var_s0_2 = 0; var_s1_2 = arg0; do { func_8021B240(*((s32 *) (((char *) var_s1_2) + 0x28C)), 3, 2, 0); var_s0_2 += __repair_constant; var_s1_2 = ((unsigned char *) var_s1_2) + 4; } while (var_s0_2 != 0xC); } while (0);
}
