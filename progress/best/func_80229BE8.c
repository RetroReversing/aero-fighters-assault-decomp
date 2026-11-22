s32 func_80231A24(s32 *);
extern s32 D_80253EB8;
extern s32 D_80253ECC;
extern s32 D_80253ED0;
extern char D_80253EBC[];
extern char D_80253EC4[];
void func_80229BE8(unsigned long long arg0)
{
  s32 var_s0;
  unsigned short var_s4;
  func_80231A24(&D_80253EB8);
  var_s4 = var_s0 * 0;
  do
  {
    func_80231A24(D_80253EBC);
    loop_2:
    func_80231A24((var_s0 = 0, D_80253EC4));

    var_s0 += 4;
    if (var_s0 != 0x10)
    {
      if (1)
      {
        goto loop_2;
      }
    }
    func_80231A24(&D_80253ECC);
    var_s4 += 1;
  }
  while (var_s4 != 4);
  func_80231A24(&D_80253ED0);
}

