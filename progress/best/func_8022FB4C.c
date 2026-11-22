s32 func_80231A24();
extern void *D_8024E710;
extern char D_80254AAC[];
extern char D_80254AD0[];
s32 func_8022FB4C(s32 arg0)
{
  s32 temp_v1;
  s32 var_v0;
  u32 temp_a1;
  u32 temp_t6;
  void *temp_v0;
  temp_v0 = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x24))) + ((temp_t6 = ((u32) (arg0 & 0xFFF000)) >> 0xC) * 4)));
  if (temp_v0 == NULL)
  {
    func_80231A24(D_80254AAC, temp_t6);
    return 0;
  }
  temp_a1 = (arg0 & 0xFFF) & 0xFFFF;
  var_v0 = (*((s32 *) (((char *) temp_v0) + 0x10))) + ((temp_a1 << 1) << 4);
  arg0 = var_v0;
  if (var_v0 == 0)
  {
    func_80231A24(D_80254AD0, temp_a1, temp_t6);
    arg0 = 0;
  }
  return arg0;
}

