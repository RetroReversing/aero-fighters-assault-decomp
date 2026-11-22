f64 func_80207130();
extern char D_802786C0[];
extern char D_802786D8[];
extern char D_802786F0[];
extern s32 D_80278738;
void func_8022D4EC(void)
{
  s32 temp_t7;
  s32 temp_v1;
  temp_t7 = (unsigned long long) (D_80278738 + 1);
  D_80278738 = temp_t7;
  if (temp_t7 >= 5)
  {
    D_80278738 = 0;
  }
  *((f64 *) (D_802786F0 + (D_80278738 * 8))) = func_80207130(0x69, &D_80278738);
  temp_v1 = D_80278738 * 4;
  *((s32 *) (D_802786D8 + temp_v1)) = 0;
  *((s32 *) (D_802786C0 + temp_v1)) = 0;
}

