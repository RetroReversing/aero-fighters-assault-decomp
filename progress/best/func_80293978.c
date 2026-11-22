s32 func_8021E66C();
s32 func_8021E708();
s32 func_8021E87C();
s32 func_8021EC9C();
s32 func_8022331C();
s32 func_8022337C();
extern char D_803239E8[];
extern s32 D_80323B8C;
extern char D_80323D30[];
extern char D_80323E2C[];
extern char D_80323E30[];
extern char D_80323E34[];
extern char D_80323E3C[];
extern char D_80323E40[];
void func_80293978(void *arg0)
{
  f32 temp_fs0;
  f32 temp_fv0;
  f32 temp_fv1;
  char *var_s1;
  s32 var_s0;
  s32 var_s2;
  s32 var_s4;
  s32 var_s5;
  func_8022331C();
  *((f32 *) (((char *) arg0) + 4)) = (f32) (((f64) (*((f32 *) (((char *) arg0) + 4)))) + 0.5);
 do { func_8021E66C(3); var_s2 = 0; var_s4 = 0; var_s5 = 0; if ((*((s32 *) (((char *) arg0) + 0xC))) > 0) { var_s1 = &D_80323B8C; do { temp_fs0 = (f32) var_s4; temp_fv0 = (*((f32 *) (((char *) arg0) + 4))) - temp_fs0; var_s0 = (s32) (2 * temp_fv0); if (temp_fv0 > 100.0f) { var_s0 = (s32) (((unsigned short) 2.0f) * (230.0f - temp_fv0)); } temp_fv1 = (f32) var_s0; if (temp_fv1 < 0.0f) { var_s0 = 0; } else if (temp_fv1 > 255.0f) { var_s0 = 0xFF; } if ((*((s32 *) var_s1)) == 0x88) { func_8021E708(0xFF, 0xFF, 0, *(D_80323D30 + ((s32) temp_fv0))); } else { func_8021E708(0xFF, 0xFF, 0xFF, *(D_80323D30 + ((s32) temp_fv0))); } if (var_s0 >= 0x28) { func_8021E87C((*((s32 *) var_s1)) - 0x37, (s32) ((*((f32 *) (((char *) arg0) + 4))) - temp_fs0), *(D_803239E8 + var_s5)); if (var_s2 == 0x1E) { func_8021E87C((*((s32 *) var_s1)) + 0x5F, (s32) ((*((f32 *) (((char *) arg0) + 4))) - temp_fs0), D_80323E2C); } if (var_s2 == 0x2E) { func_8021E87C((*((s32 *) var_s1)) + 0x62, (s32) ((*((f32 *) (((char *) arg0) + 4))) - temp_fs0), D_80323E30); } if (var_s2 == 0x36) { func_8021E87C((*((s32 *) var_s1)) + 0x53, (s32) ((*((f32 *) (((char *) arg0) + 4))) - temp_fs0), D_80323E34); } if (var_s2 == 0x62) { func_8021E87C((*((s32 *) var_s1)) + 0x71, (s32) ((*((f32 *) (((char *) arg0) + 4))) - temp_fs0), D_80323E3C); } if (var_s2 == 0x64) { func_8021E87C((*((s32 *) var_s1)) + 0x71, (s32) ((*((f32 *) (((char *) arg0) + 4))) - temp_fs0), D_80323E40); } } func_8021EC9C(); var_s2 += 1; var_s4 += 0x20; var_s5 += 4; var_s1 += 4; } while (var_s2 < (*((s32 *) (((char *) arg0) + 0xC)))); } func_8022337C(); } while (0);
}
