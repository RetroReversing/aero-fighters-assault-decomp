s32 func_80231A24();
extern char D_80253FD4[];
extern s32 D_80275E70;
extern char D_80275E80[];
extern s32 D_80275F88;
s32 func_8022B374(u32 *arg0)
{
  s32 var_s0;
  s32 var_s6;
  u32 temp_t0;
  u32 temp_v1;
  void *temp_v0;
  var_s6 = 1;
  var_s0 = 0;
  if (D_80275E70 > 0)
  {
    do
    {
      temp_v0 = D_80275E80 + (var_s0 * 8);
      if (((temp_v1 = *arg0) >= ((u32) (*((u32 *) (((char *) temp_v0) + 0))))) && (temp_v1 < ((u32) (*((u32 *) (((char *) temp_v0) + 4))))))
      {
        temp_t0 = (*((u32 *) (((char *) temp_v0) + 4))) & 0xFFFFFFFFFFFFFFFF;
        var_s0 = 0;
        var_s6 = 0;
        *arg0 = temp_t0;
        if (D_80275F88 != 0)
        {
          func_80231A24(D_80253FD4, temp_t0 ^ 0);
        }
      }
      var_s0 += 1;
    }
    while (var_s0 < D_80275E70);
  }
  return var_s6;
}

