s32 func_8022B2F4(s32 arg0);
s32 func_80231A24();
extern char D_80254198[];
extern s32 D_80275E74;
extern char D_80275ED0[];
void func_8022BBAC(s32 arg0, s32 arg1)
{
  s32 temp_a1;
  void *temp_v1;
  if (arg0 != arg1)
  {
    temp_a1 = arg1 - arg0;
    if (D_80275E74 >= 0x14)
    {
      func_80231A24(D_80254198, temp_a1);
      return;
    }
    if (func_8022B2F4(arg0) != 0)
    {
      temp_v1 = (D_80275E74 * 8) + D_80275ED0;
      D_80275E74++;
 *((s32 *) (((char *) temp_v1) + 0)) = arg0; *((s32 *) (((char *) temp_v1) + 4)) = arg1;
    }
  }
}
