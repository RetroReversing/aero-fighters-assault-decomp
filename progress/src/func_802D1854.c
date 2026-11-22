f32 func_8023499C();
void func_802D1854(void *arg0, u8 arg1)
{
  *((s8 *) (((char *) arg0) + 0x1B0)) = arg1;
  if ((arg1 & 0xFFFFu) & 0xFF)
  {
    *((s32 *) (((char *) arg0) + 0x1B4)) = 0;
    *((s32 *) (((char *) arg0) + 0x1B8)) = 0;
    *((s32 *) (((char *) arg0) + 0x1BC)) = (s32) (((s32) (func_8023499C() * 5.0f)) + 5);
    if (func_8023499C(arg0) > 0.5f)
    {
      *((s32 *) (((char *) arg0) + 0x1BC)) = (s32) (-(*((s32 *) (((char *) arg0) + 0x1BC))));
    }
  }
}

