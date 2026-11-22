s32 func_802096F4(f32, f32, f32, f32 *, f32 *, f32 *);
s32 func_80209914(f32, f32, f32, f32 *, f32 *, f32 *);
void func_80211204(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
  f32 sp8C;
  register unsigned temp_t7;
  u8 temp_t8;
  register void *temp_s0;
  f32 var_ft1;
  register f32 var_fa0;
  s32 var_s1;
  f32 var_ft4;
  f32 sp6C;
  f32 var_ft2;
  f32 var_fa1;
  f32 var_fv0;
  f32 sp70;
  f32 sp74;
  u8 temp_t9;
  f32 sp88;
  f32 sp84;
  if (1)
  {
    var_s1 = 0;
    {
      if (arg1 > 0)
      {
        do
        {
          temp_s0 = (var_s1 * 0x10) + (arg0 ^ 0); temp_t7 = *((u8 *) (((char *) temp_s0) + 0xC)); var_ft1 = (f32) ((s32) temp_t7);
          if (temp_t7 < 0)
          {
            var_ft1 += 4294967296.0f;
          }
          temp_t8 = *((u8 *) (((char *) temp_s0) + 0xD)); var_ft4 = (f32) temp_t8;
          if (((0 & 0xFFu) ^ 0) > temp_t8)
          {
            var_ft4 += 4294967296.0f;
          }
          temp_t9 = *((u8 *) (((char *) temp_s0) + 0xE)); var_ft2 = (f32) temp_t9;
          if (temp_t9 < 0)
          {
            var_ft2 += 4294967296.0f;
          }
          func_80209914(var_ft1 / 255.0f, var_ft4 / 255.0f, var_ft2 / 255.0f, &sp8C, &sp88, &sp84);
          if ((*((u16 *) (((char *) temp_s0) + 6))) != 0)
          {
            var_fa0 = arg2 * sp8C;
            var_fa1 = arg3 * sp88; var_fv0 = arg4 * sp84;
          }
          else
          {
            var_fa0 = arg2 * sp8C;
 var_fa1 = arg3 * sp88; var_fv0 = ((arg4 * arg4) * arg4) * sp84; }
          func_802096F4(var_fa0, var_fa1, var_fv0, &sp74, &sp70, &sp6C);
          var_s1 += 1;
          *((u8 *) (((char *) temp_s0) + 0xC)) = (u8) ((u32) (sp74 * 255.0f));
          *((u8 *) (((char *) temp_s0) + 0xD)) = (u8) ((u32) (sp70 * 255.0f));
          *((u8 *) (((char *) temp_s0) + 0xE)) = (u8) ((u32) (sp6C * 255.0f));
        }
        while ((((((((var_s1 & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) != (arg1 ^ 0));
      }
    }
  }
}
