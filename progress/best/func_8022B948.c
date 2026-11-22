s32 func_8022B2F4(s32, s32);
s32 func_8022B374(s32 *);
s32 func_8022B80C(s32, s32);
s32 func_80231A24(s32 *);
extern s32 D_802540D0;
extern s32 D_80275E78;
extern u32 D_80275ED0;
extern u32 D_80275F7C;
extern u32 D_80275F80;
extern s32 D_80275F88;
s32 func_8022B948(s32 arg0, s32 arg1)
{
  s32 temp_a3;
  u32 temp_t2;
  s32 sp24;
  temp_a3 = (((*((s32 *) (&D_80275F7C))) + arg1) - 1) & (~(arg1 + -1));
  if (D_80275F88 != 0)
  {
    sp24 = temp_a3;
    return func_8022B80C(arg1, temp_a3);
  }
  sp24 = temp_a3;
  if (func_8022B2F4(temp_a3, arg0) == 0)
  {
    sp24 += arg0;
    func_8022B374(&sp24);
  }
  *((s32 *) (&D_80275F7C)) = temp_t2;
  temp_t2 = sp24 + arg0;
  temp_a3 = sp24;
  if (temp_t2 >= ((u32) (*((s32 *) (&D_80275F80)))))
  {
    do
    {
      func_80231A24(&D_802540D0);
    }
    while (0);
    *((s32 *) (&D_80275F7C)) = *((s32 *) (&D_80275ED0));
    D_80275F88 += arg0;
    D_80275E78 = 0;
    temp_a3 = func_8022B80C(arg0, arg1);
  }
  return temp_a3;
}

