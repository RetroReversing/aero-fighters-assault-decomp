s32 func_80231A24();
extern char D_80254060[];
extern char D_8025409C[];
extern s32 D_80275E74;
extern s32 D_80275E78;
extern char D_80275ED0[];
extern u32 D_80275F7C;
extern s32 D_80275F88;
s32 func_8022B80C(s32 arg0, s32 arg1)
{
  s32 *__base_D_80275E74;
  s32 temp_s0;
  s32 temp_t4;
  s32 temp_v1;
  u32 *var_v0;
  u32 temp_a0;
  temp_s0 = D_80275E78;
  do
  {
    var_v0 = (temp_s0 * 8) + D_80275ED0;
  }
  while (0);
  for (;;)
  {
    temp_v1 = ((D_80275F7C + arg1) - 1) & (~(arg1 - 1));
    temp_a0 = temp_v1 + arg0;
    if (((u32) (*((u32 *) (((char *) var_v0) + 4)))) >= (temp_a0 ^ 0))
    {
      D_80275F7C = temp_v1 + arg0;
      D_80275F88 += arg0;
      return temp_v1;
    }
    temp_s0 = temp_s0 + 1;
 if (0) { }
    D_80275E78 = temp_s0;
    __base_D_80275E74 = &D_80275E74;
    func_80231A24(D_80254060, temp_s0 + 1, *__base_D_80275E74);
    if (D_80275E78 >= (*__base_D_80275E74))
    {
      func_80231A24(D_8025409C);
      return 0;
    }
    var_v0 = D_80275ED0 + (D_80275E78 * 8);
    D_80275F7C = *var_v0;
    continue;
    break;
  }

}
