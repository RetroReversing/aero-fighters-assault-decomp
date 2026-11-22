void func_80316F94(void *arg0)
{
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_3;
  void *var_v1;
  void *var_v1_3;
  *((s8 *) (((char *) arg0) + 8)) = 0;
  *((s32 *) (((char *) arg0) + 0x14)) = 0;
  *((s32 *) (((char *) arg0) + 0x18)) = 0;
  *((s8 *) (((char *) arg0) + 0x1C)) = 0;
  *((s8 *) (((char *) arg0) + 0x1D)) = 0;
  *((s32 *) (((char *) arg0) - -0x20)) = 0;
  *((s16 *) (((char *) arg0) + 0x60)) = 0;
  var_v0 = 0;
  var_v1 = arg0;
  *((f32 *) (((char *) arg0) + 0x44)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x48)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x4C)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x54)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x50)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x58)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x5C)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x64)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x68)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x9C)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x11C)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x98)) = -1.0f;
  *((f32 *) (((char *) arg0) + 0x118)) = 10.0f;
  __repair_rows:
  {
    var_v0 += 1;
    *((f32 *) (((char *) var_v1) + 0x120)) = 0.0f;
    var_v1 = ((unsigned char *) var_v1) + 4;
  }

  if (var_v0 < 0xA)
  {
    if (1)
    {
      goto __repair_rows;
    }
  }
  var_v0_2 = 0;
  var_v1 = arg0;
  __repair_rows_:
  {
    var_v0_2 = var_v0_2 + 1;
    *((f32 *) (((char *) var_v1) + 0x148)) = 0.0f;
    var_v1 = ((unsigned char *) var_v1) + 4;
  }

  if (var_v0_2 < 0xA)
  {
 do { goto __repair_rows_; } while (0);
  }
  *((f32 *) (((char *) arg0) + 0x170)) = 0.0f;
  *((f32 *) (((char *) arg0) + 0x174)) = 0.0f;
  var_v0_3 = 2;
  var_v1_3 = ((unsigned char *) arg0) + 8;
  do
  {
    var_v0_3 += 4;
    *((f32 *) (((char *) var_v1_3) + 0x170)) = 0.0f;
    *((f32 *) (((char *) var_v1_3) + 0x174)) = 0.0f;
    *((f32 *) (((char *) var_v1_3) + 0x178)) = 0.0f;
    *((f32 *) (((char *) var_v1_3) + 0x17C)) = 0.0f;
    var_v1_3 = ((unsigned char *) var_v1_3) + 0x10;
  }
  while (var_v0_3 != 0xA);
  *((s32 *) (((char *) arg0) + 0xD8)) = 0;
  *((s32 *) (((char *) arg0) + 0xDC)) = 0;
  *((s8 *) (((char *) arg0) + 0xF8)) = 0;
  *((s8 *) (((char *) arg0) + 0xF9)) = 0;
  *((s8 *) (((char *) arg0) + 0xFA)) = 0;
  *((s8 *) (((char *) arg0) + 0x104)) = 0;
  *((s8 *) (((char *) arg0) + 0x19B)) = 0;
  *((s8 *) (((char *) arg0) + 0x19C)) = 0;
  *((u8 *) (((char *) arg0) + 0xB8)) = 0xFF;
  *((u8 *) (((char *) arg0) + 0xB9)) = 0xFF;
  *((s8 *) (((char *) arg0) + 0xEC)) = 0;
  *((s8 *) (((char *) arg0) + 0x24)) = 0;
  *((f32 *) (((char *) arg0) + 0x6C)) = 0.0f;
  *((s32 *) (((char *) arg0) + 0xF4)) = 0;
  *((f32 *) (((char *) arg0) + 0x100)) = 300.0f;
  *((f32 *) (((char *) arg0) + 0x108)) = 500.0f;
}
