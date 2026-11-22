s32 func_80231A24();
extern char D_80255054[];
extern char D_80255068[];
void func_80231B6C(u8 *arg0, u32 arg1, u32 arg2)
{
  u32 var_s0;
  char *var_s1;
  var_s0 = 0;
 do { if (arg1 != 0) { var_s1 = arg0; do { if ((var_s0 % arg2) == 0) { if (var_s0 != 0) { func_80231A24(D_80255054); } func_80231A24("%d: ", var_s0 / arg2); } func_80231A24("%2x ", (u32) (*((u8 *) var_s1))); var_s0 += 1; var_s1 += 1; } while (var_s0 < arg1); } } while (0);
  func_80231A24(D_80255068);
}
