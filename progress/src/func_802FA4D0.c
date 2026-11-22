extern f32 D_80344814;
extern f32 D_80344818;
void func_802FA4D0(void *arg0, u8 arg1)
{
  s32 temp_v0;
  temp_v0 = (long long) (arg1 & 0xFF);
  *((f32 *) (((char *) arg0) + 0x80)) = 35.0f;
  *((f32 *) (((char *) arg0) + 0x88)) = 35.0f;
  *((f32 *) (((char *) arg0) + 0x84)) = (f32) ((100.0f - (((f32) (*((s8 *) (((char *) arg0) + 0xC)))) * 40.0f)) + 6.0f);
  if (temp_v0 == 1)
  {
    *((f32 *) (((char *) arg0) + 0x98)) = (f32) D_80344814;
  }
  else
    if ((temp_v0 & 0xFFFFFFFFu) == 2)
  {
    *((f32 *) (((char *) arg0) + 0x98)) = (f32) D_80344818;
  }
  *((f32 *) (((char *) arg0) + 0x8C)) = (f32) ((*((f32 *) (((char *) arg0) + 0x80))) - (*((f32 *) (((char *) arg0) + 0x58))));
  *((f32 *) (((char *) arg0) + 0x90)) = (f32) ((*((f32 *) (((char *) arg0) + 0x84))) - (*((f32 *) (((char *) arg0) + 0x5C))));
  *((f32 *) (((char *) arg0) + 0x94)) = (f32) ((*((f32 *) (((char *) arg0) + 0x88))) - (*((f32 *) (((char *) arg0) + 0x60))));
}

