s32 func_8022D04C();
s32 func_80231A24();
extern char D_8025479C[];
extern char D_802547B4[];
extern char D_802547EC[];
extern char D_802786F0[];
extern s32 D_80278738;
extern s32 D_80278744;
void func_8022D3F0(void)
{
  s32 var_s1;
  s32 temp_hi;
  unsigned long sp34;
  s32 var_s2;
  void *temp_t7;
  sp34 = D_80278738;
 func_80231A24(D_8025479C, D_80278738); var_s1 = 0; var_s2 = sp34 + 1; do { temp_hi = var_s2 % 5; temp_t7 = D_802786F0 + (temp_hi * 8);
    func_80231A24(D_802547B4, temp_hi, *((s32 *) (((char *) temp_t7) + 0)), *((s32 *) (((char *) temp_t7) + 4)));
    func_8022D04C(temp_hi);
    var_s1 += 1;
    var_s2 += 1;
  }
  while (var_s1 != 5);
  D_80278744 = 0;
  func_80231A24(D_802547EC, sp34, D_80278738);
}
