s32 func_8020372C();
s32 func_802037B4();
s32 func_80231A24();
s32 *func_80302D90();
extern char D_8032A1E8[];
extern char D_8032A20C[];
extern char D_8032A214[];
extern char D_8032A228[];
extern char D_8032A230[];
extern char D_8032A260[];
void func_80302074(s32 arg0)
{
  s32 *var_a3;
  s32 *var_s1;
  register s32 temp_v0_2;
  void *temp_v0;
  s32 var_s2;
  register s32 var_s0;
 func_80231A24(D_8032A1E8); var_s0 = 0; var_s2 = 0; do { temp_v0 = arg0 + (var_s0 << 5); var_s1 = (s32) D_8032A20C; if ((*((f32 *) (((char *) temp_v0) + 0))) >= 0.0f) { if (1) { } var_s1 = func_80302D90(arg0, *((s16 *) (((char *) temp_v0) + 0x1C))); } var_a3 = (u32) D_8032A228; if (func_8020372C(var_s0) != 0) {
      temp_v0_2 = func_802037B4(var_s0);
      if (temp_v0_2 == 0xFF)
      {
        var_a3 = D_8032A214;
      }
      else
      {
        var_a3 = func_80302D90((s32) arg0, temp_v0_2 & 0xFF);
      }
    }
    func_80231A24(D_8032A230, var_s2, var_s1, var_a3);
    var_s2 = (var_s0 + 1) & 0xFF;
    var_s0 = var_s2;
  }
  while (var_s2 < 0xFF);
  func_80231A24(D_8032A260);
}
