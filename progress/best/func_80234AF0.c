extern u32 D_80250900;
extern f32 D_802553B4;
f32 func_80234AF0(void)
{
  u32 *__base_D_80250900;
  f32 var_ft1;
  s32 temp_v0;
  u32 temp_t8;
  __base_D_80250900 = &D_80250900;
  temp_t8 = (((122612805 * (*__base_D_80250900)) * 9) & 0xFFFFFFFFFFFFFFFFu) + 0x3039;
  temp_v0 = (temp_t8 >> 0x10) & 0x7FFF;
  *__base_D_80250900 = temp_t8;
  var_ft1 = (f32) ((temp_t8 >> 0x10) & 0x7FFF);
  if ((((((*__base_D_80250900) * (0x41C64E6D & 0xFFu)) + 0x3039) >> 0x10) & 0x7FFF) < 0)
  {
    var_ft1 += (unsigned int) 4294967296;
  }
  return var_ft1 / D_802553B4;
}

