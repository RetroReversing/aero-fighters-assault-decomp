s32 func_802AEDD4(f32, s32);
extern s32 D_803278B4;
extern f32 D_80343468;
void func_802D6DC4(void *arg0, s32 arg1, f32 arg2, s32 arg3)
{
  int *__repair_home1 = &arg1;
  s32 temp_v0;
  *((s16 *) (((char *) arg0) + 0xE2)) = *__repair_home1;
  temp_v0 = *((s16 *) (((char *) arg0) + 0xE2));
  if ((*((s16 *) (((char *) arg0) + 0xE2))) == (1 & 0xFFFFu))
  {
    *((f32 *) (((char *) arg0) + 0xEC)) = arg2;
    *((s32 *) (((char *) arg0) + 0xE8)) = arg3;
    *((s8 *) (((char *) arg0) + 0xE4)) = 0;
    *((f32 *) (((char *) arg0) + 0xF4)) = 2.0f;
    
      *((f32 *) (((char *) arg0) + 0xF0)) = (f32) (((0, 2.0f)) + 1.0f);
      *((f32 *) (((char *) arg0) + 0xF8)) = 1.0f;
    
  }
  else
    if (temp_v0 == 2)
  {
    *((f32 *) (((char *) arg0) + 0xEC)) = arg2;
    *((s32 *) (((char *) arg0) + 0xE8)) = (u32) arg3;
    *((s8 *) (((char *) arg0) + 0xE4)) = 0;
    *((f32 *) (((char *) arg0) + 0xF8)) = 1.0f;
    *((f32 *) (((char *) arg0) + 0xF4)) = (f32) D_80343468;
    *((f32 *) (((char *) arg0) + 0xF0)) = (f32) (D_80343468 + 1.0f);
  }
  else
    if (temp_v0 == 3)
  {
    *((f32 *) (((char *) arg0) + 0xF8)) = 0.5f;
  }
  *((s8 *) (((char *) arg0) + 0xE0)) = 1;
  *((s32 *) (((char *) arg0) + 0xDC)) = func_802AEDD4(arg2, D_803278B4);
}

