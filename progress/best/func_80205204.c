extern s32 D_8025B8B0;
extern s32 D_8025B8BC;
extern s32 func_8020505C;
s32 *func_80205204(s32 **arg0)
{
  if ((*((u8 *) (((char *) (&D_8025B8B0)) + 0))) == 0)
  {
    *((s32 *) (((char *) (&D_8025B8B0)) + 4)) = 0;
 do { *((s32 **) (((char *) (&D_8025B8B0)) + 8)) = &D_8025B8BC; *((u8 *) (((char *) (&D_8025B8B0)) + 0)) = 1U; } while (0);
  }
  *arg0 = &D_8025B8B0;
  return &func_8020505C;
}
