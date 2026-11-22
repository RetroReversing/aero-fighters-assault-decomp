extern void *D_80273B90;
void func_80221F44(f32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
  s32 temp_t1;
  s32 temp_t4;
  s32 temp_t6;
  volatile unsigned int temp_t9;
  u32 temp_a3;
  void *temp_v0;
  void *temp_v1;
  temp_v0 = D_80273B90;
  do
  {
    D_80273B90 = ((unsigned char *) temp_v0) + 8;
    *((s32 *) (((char *) temp_v0) + 0)) = 0xFA000000; temp_t6 = ((u32) (arg2 * 255.0f)) & 0xFF;
    temp_t9 = ((long long) ((u32) (arg0 * 255.0f))) & 0xFF;
    temp_a3 = (u32) (arg3 * 255.0f); temp_t4 = ((u32) (arg1 * 255.0f)) & 0xFF;
    *((s32 *) (((char *) temp_v0) + 4)) = (s32) (((((((((temp_t9 & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) << 0x18) | ((temp_t4 & 0xFF) << 0x10)) | (((temp_t6 & 0xFF) << 8) & 0xFF)) | (temp_a3 & 0xFF)); temp_v1 = D_80273B90; D_80273B90 = ((unsigned char *) temp_v1) + 8;
    *((s32 *) (((char *) temp_v1) + (4 * 0))) = 0xF7000000 & 0xFFu;
    temp_t1 = (((((((((0, temp_t9)) << 3) << 2) << 3) & 0xF800) & 0xFFFFFFFFFFFFFFFFu) | ((temp_t4 *= 8) & 0x7C0)) | ((temp_t6 >> 2) & 0x3E)) | (temp_a3 & 1);
    *((s32 *) (((char *) temp_v1) + 4)) = (s32) ((temp_t1 << 0x10) | temp_t1);
  }
  while (0);
}

