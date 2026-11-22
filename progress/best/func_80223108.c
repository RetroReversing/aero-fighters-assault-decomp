s32 func_80222CBC(f32);
s32 func_80222E24();
s32 func_80228DE0(s32 *, s32);
s32 osVirtualToPhysical(s32);
extern u16 D_8024E874;
extern f32 D_80253948;
extern f32 D_8025394C;
extern f32 D_80253950;
extern void *D_80273B90;
extern u8 D_80273BB0[];
void func_80223108(s32 arg0)
{
  f32 sp58[3];
  f32 var_fv0;
  s32 *temp_a1;
  s32 sp28;
  s32 temp_v0;
  void *temp_a0;
  f32 *__base_D_80253948;
  do
  {
    __base_D_80253948 = &D_80253948;
    func_80228DE0(&sp28, arg0);
    if (sp58[0] < (*__base_D_80253948))
    {
      var_fv0 = D_8025394C; sp58[0] = *__base_D_80253948;
    }
    else
    {
      var_fv0 = D_80253950;
      if (var_fv0 < sp58[0])
      {
        sp58[0] = var_fv0;
      }
    }
    if (sp58[1] < (*__base_D_80253948))
    {
      sp58[1] = *__base_D_80253948;
    }
    else
      if (var_fv0 < sp58[1])
    {
      sp58[1] = var_fv0;
    }
    if (sp58[2] < (*__base_D_80253948))
    {
      sp58[2] = *__base_D_80253948;
    }
    else
      if (var_fv0 < sp58[2])
    {
      sp58[2] = var_fv0;
    }
    func_80222CBC(sp58[2]);
    temp_v0 = osVirtualToPhysical(func_80222E24()); temp_a0 = D_80273B90; D_80273B90 = ((unsigned char *) temp_a0) + 8;
  }
  while (0);
  *((s32 *) (((char *) temp_a0) + 4)) = temp_v0;
  *((s32 *) (((char *) temp_a0) + 0)) = 0x01060040;
  temp_v0 = (((((((((D_8024E874 * 4) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu;
  temp_a1 = temp_v0 + D_80273BB0;
  *temp_a1 += 1;
}

