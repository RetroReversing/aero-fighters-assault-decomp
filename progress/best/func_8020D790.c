s32 func_802096F4(f32, f32, f32, f32 *, f32 *, f32 *);
s32 func_80209914(f32, f32, f32, f32 *, f32 *, f32 *);
void func_8020D790(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7)
{
  register unsigned int temp_t9;
  f32 var_fa1;
  f32 var_fv0;
  f32 spA0;
  f32 sp98;
  f32 spBC;
  f32 temp_fv1;
  register u8 temp_t8;
  s32 var_s1;
  f32 sp94;
  f32 temp_fv0;
  register f32 var_fa0;
  long temp_t7;
  f32 spB4;
  f32 spB8;
  register f32 var_ft1;
  f32 var_ft2;
  register f32 var_ft4;
  f32 spA4;
  f32 temp_fs4;
  f32 sp9C;
  f32 sp90;
  register void *temp_s0;
  temp_fv0 = (1.0f - arg5) * arg2;
  temp_fv1 = (1.0f - arg6) * arg3;
  temp_fs4 = (arg7 * arg7) * arg7;
  sp98 = temp_fv0;
  var_s1 = 0;
  sp90 = temp_fv1;
  sp94 = (1.0f - temp_fs4) * arg4;
  if (arg1 > 0)
  {
    arg4 = arg4 * (1.0f - arg7);
    arg3 = temp_fv1;
    do
    {
      temp_s0 = (var_s1 * 0x10) + (((((arg0 & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF);
      var_ft1 = (f32) (*((u8 *) (((char *) temp_s0) + 0xC)));
      if (0 > (((((((((((((*((u8 *) (((char *) temp_s0) + 0xC))) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu))
      {
        var_ft1 += 4294967296.0f;
      }
      var_ft4 = (f32) (*((u8 *) (((char *) temp_s0) + 0xD)));
      if (0 > (*((u8 *) (((char *) temp_s0) + 0xD))))
      {
        var_ft4 += 4294967296.0f;
      }
      temp_t9 = *((u8 *) (((char *) temp_s0) + 0xE));
      var_ft2 = (f32) (*((u8 *) (((char *) temp_s0) + 0xE)));
      if (temp_t9 < 0)
      {
        var_ft2 += 4294967296.0f;
      }
      func_80209914(var_ft1 / 255.0f, var_ft4 / 255.0f, var_ft2 / 255.0f, &spBC, &spB8, &spB4);
      if ((*((u16 *) (((char *) temp_s0) + 6))) != 0)
      {
        var_fv0 = (arg7 * spB4) + arg4;
        var_fa1 = (arg6 * spB8) + arg3;
        var_fa0 = (arg5 * spBC) + temp_fv0;
      }
      else
      {
        var_fv0 = (temp_fs4 * spB4) + sp94;
        var_fa1 = (arg6 * spB8) + sp90;
        var_fa0 = (arg5 * spBC) + sp98;
      }
      func_802096F4(var_fa0, var_fa1, var_fv0, &spA4, &spA0, &sp9C);
      var_s1 += 1 & 0xFFFFFFFF;
      *((u8 *) (((char *) temp_s0) + 0xC)) = (u8) ((u32) (spA4 * 255.0f));
      *((u8 *) (((char *) temp_s0) + 0xD)) = (u8) ((u32) (spA0 * 255.0f));
      *((u8 *) (((char *) temp_s0) + 0xE)) = (u8) ((u32) (sp9C * 255.0f));
    }
    while (var_s1 != arg1);
  }
}

