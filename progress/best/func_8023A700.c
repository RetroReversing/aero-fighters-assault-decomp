extern u16 D_80250934;
void func_8023A700(void **arg0)
{
  s32 *temp_v1;
  char *var_v0;
  void *temp_v0;
  void *temp_v0_2;
  temp_v0 = *arg0;
  temp_v0_2 = ((unsigned char *) temp_v0) + 8;
  *((s32 *) (((char *) temp_v0) + 0)) = 0xBB000000;
  *((s32 *) (((char *) temp_v0) + 4)) = 0x80008000;
  *((s32 *) (((char *) temp_v0) + 8)) = 0xFCFFFFFF;
temp_v0 = 0;
  *((s32 *) (((char *) temp_v0_2) + 4)) = 0xFFFE793C;
  var_v0 = ((unsigned char *) temp_v0_2) + 8;
 do { if (D_80250934 & 1) { *((s32 *) (((char *) temp_v0_2) + 8)) = 0xB900031D; *((s32 *) (((char *) var_v0) + 4)) = 0x0F0A4000; var_v0 += 8; } temp_v1 = var_v0; if (D_80250934 & 2) { *((s32 *) (((char *) temp_v1) + 0)) = 0xB9000002; var_v0 += 8; *((s32 *) (((char *) temp_v1) + 4)) = 0; } *((s32 *) (((char *) var_v0) + 0)) = 0xB8000000; *((s32 *) (((char *) var_v0) + 4)) = 0; *arg0 = var_v0 + 8; } while (0);
}
