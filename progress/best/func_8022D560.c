f64 func_80207130();
extern char D_80276140[];
extern char D_80277400[];
extern char D_802786C0[];
extern char D_802786D8[];
extern u8 D_80278729;
extern u8 D_8027872A;
extern u8 D_8027872B;
extern u8 D_8027872C;
extern s32 D_80278738;
extern s32 D_80278748;
void func_8022D560(u8 arg0, s32 arg1)
{
  void *var_v0;
  s32 *temp_a2;
  s32 temp_a0;
  s32 temp_v0;
  s32 temp_v1;
  void *sp1C;
  s32 *temp_a1;
  if (D_80278748 != 0)
  {
    temp_v0 = D_80278738 * 4;
    temp_a1 = temp_v0 + D_802786C0;
    temp_v1 = *temp_a1;
    temp_a2 = temp_v0 + D_802786D8;
    if (temp_v1 < 0x3C)
    {
      do
      {
        temp_a0 = *temp_a2;
      }
      while (0);
      if (temp_a0 < 0x3C)
      {
        if (arg0 == 0)
        {
          *temp_a1 = temp_v1 + 1;
          var_v0 = ((temp_v1 * 0x10) + (D_80278738 * 0x3C0)) + D_80276140;
        }
        else
        {
 var_v0 = ((temp_a0 * 0x10) + (D_80278738 * 0x3C0)) + D_80277400; *temp_a2 = temp_a0 + 1; } sp1C = var_v0;
        *((f64 *) (((char *) var_v0) + 0)) = func_80207130(0x69, temp_a1, temp_a2);
        *((s32 *) (((char *) var_v0) + 8)) = arg1;
        *((s32 *) (((char *) var_v0) + 0xC)) = (s32) ((((D_80278729 << 0x18) | (D_8027872A << 0x10)) | (D_8027872B * 2)) | D_8027872C);
      }
    }
  }
}
