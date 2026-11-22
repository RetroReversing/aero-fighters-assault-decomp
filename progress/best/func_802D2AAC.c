f32 func_8023499C();
extern f32 D_80342CB0;
extern f32 D_80342CB4;
extern f32 D_80342CB8;
extern f32 D_80342CBC;
extern f32 D_80342CC0;
extern f32 D_80342CC4;
extern f32 D_80342CC8;
extern f32 D_80342CCC;
extern f32 D_80342CD0;
void func_802D2AAC(void *arg0)
{
  f32 temp_ft2;
  *((f32 *) (((char *) arg0) + 0xE0)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0xE4)) = 0.0f;
  *((s8 *) (((char *) arg0) + 0x1D)) = 1;
  *((f32 *) (((char *) arg0) + 0xE8)) = 15.0f;
  *((f32 *) (((char *) arg0) + 0x124)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0xEC)) = (((s32) (func_8023499C() * 256.0f)) == 0) ? ((f32) D_80342CB0) : ((f32) (((func_8023499C() * D_80342CB4) + 1.5f) - D_80342CB8));
  *((f32 *) (((char *) arg0) + 0xF0)) = (f32) (((func_8023499C() * D_80342CBC) + 1.0f) - D_80342CC0);
  *((f32 *) (((char *) arg0) + 0xF4)) = (f32) D_80342CC4;
  *((f32 *) (((char *) arg0) + 0xF8)) = (f32) D_80342CC8;
  *((f32 *) (((char *) arg0) + 0x104)) = 3.0f;
  *((f32 *) (((char *) arg0) + 0x118)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x11C)) = (f32) ((func_8023499C() * ((unsigned int) 2.0f)) * D_80342CCC);
  temp_ft2 = func_8023499C() * 2.0f;
  *((f32 *) (((char *) arg0) + 0x10)) = 10.0f;
  *((f32 *) (((char *) arg0) + 0x120)) = (f32) (temp_ft2 * D_80342CD0);
  *((s8 *) (((char *) arg0) + 0x12C)) = 0;
}

