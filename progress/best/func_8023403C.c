s32 func_80233EA0(void *);
s32 func_8023A700(s32 *);
s32 func_8023CBF0(s32 *);
extern s32 D_80273B90;
extern u16 D_80280BEC;
extern s32 D_80283950;
void func_8023403C(void)
{
  u16 *__base_D_80280BEC;
  register int var_s0;
  s32 var_v0;
  u16 temp_v1;
  void *temp_a0;
  __base_D_80280BEC = &D_80280BEC;
  func_8023CBF0(&D_80273B90);
  temp_v1 = *__base_D_80280BEC;
  var_s0 = 0;
  if (((s32) (*__base_D_80280BEC)) > 0)
  {
    do
    {
      temp_a0 = var_s0 + D_80283950;
      var_v0 = (*__base_D_80280BEC) * 0x19;
      if (((*((u8 *) (((char *) temp_a0) + 0))) == 0) || ((*((u8 *) (((char *) temp_a0) + 2))) == (0 & 0xFFFFFFFFFFFFFFFFu)))
      {
      }
      else
        if ((*((u16 *) (((char *) temp_a0) + 0xC))) == 0xFFF)
      {
        var_v0 = (*__base_D_80280BEC) * 0x19;
      }
      else
        if (1)
      {
        func_80233EA0(temp_a0);
        var_v0 = (*__base_D_80280BEC) * 0x19;
      }
      var_s0 += 0x64;
    }
    while (var_s0 < ((var_v0 * 4) & 0xFFFF));
  }
  func_8023A700(&D_80273B90);
  D_80273B90 -= 8;
}

