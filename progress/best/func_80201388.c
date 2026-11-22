s32 func_802011D0();
s32 func_80231C58();
extern char D_80251C90[];
extern char D_80251CA8[];
extern s32 D_80256DE4;
extern u16 D_80280BFA;
extern char D_80251CC0[];
u8 func_80201388(void)
{
  u16 *__base_D_80280BFA;
  register s32 sp18;
  register unsigned temp_lo;
  register char *__repair_addr;
  u8 var_v1;
  func_802011D0(D_80251C90);
  __base_D_80280BFA = &D_80280BFA;
  var_v1 = 0;
  if (((s32) (*__base_D_80280BFA)) > 0)
  {
    for (;;)
    {
      temp_lo = ((u32) var_v1) * 0xB4;
      if (((*((u8 *) (((char *) (D_80256DE4 + temp_lo)) + 0xAC))) & 0xFFu) == 0)
      {
        func_802011D0(D_80251CA8, var_v1, temp_lo);
        sp18 = temp_lo;
        *((s8 *) (((char *) (__repair_addr = (char *) ((long long) (D_80256DE4 + temp_lo)))) + 0xAC)) = 1;
        return var_v1;
      }
      var_v1 = (u8) sp18;
      sp18 = (var_v1 + 1) & 0xFF;
      if (sp18 >= ((s32) (*(&D_80280BFA))))
      {
        goto block_5;
      }
      continue;
      break;
    }

  }
  block_5:
  func_80231C58(var_v1, D_80251CC0, __base_D_80280BFA);

  return 0xFFU;
}

