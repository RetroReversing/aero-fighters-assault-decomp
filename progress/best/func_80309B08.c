extern s16 D_80100000;
void func_80309B08(s32 arg0, u8 arg1, s32 arg2)
{
  s16 *var_t2;
  
  s16 *var_t2_3;
  s32 temp_a2;
  s32 temp_a2_2;
  s32 temp_t4;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_a0_3;
  short var_a1;
  s16 temp_t1;
  s32 var_a1_2;
  s32 var_v1;
  void *var_t0;
  
  void *var_t0_3;
  arg2 &= 0xFF;
  temp_t1 = ((arg0 << 0xB) | ((arg1 & 0xFF) << 6)) | (arg2 * 2);
 do { var_v1 = 0; do { temp_t4 = (var_v1 * 0x140) * 2; var_t0 = temp_t4 + 0x800DA800; var_a0 = 0; var_t2 = (void *)(temp_t4); var_t2 = (void *)((char *)var_t2 + (s32)((&D_80100000))); loop_6: *((s16 *) (((char *) var_t0) + 0)) = ((arg0 << 0xB) | ((arg1 & 0xFF) << 6)) | (arg2 * 2); *var_t2 = temp_t1; *((s16 *) (((char *) var_t0) + 2)) = temp_t1; *var_t2 = temp_t1; *((s16 *) (((char *) var_t0) + 4)) = temp_t1; *var_t2 = temp_t1; *((s16 *) (((char *) var_t0) + 6)) = temp_t1; if (1) { var_a0 += 4; *var_t2 = temp_t1; var_t0 = ((unsigned char *) var_t0) + 8; } if (var_a0 != 0x140) { goto loop_6; } var_v1 += 1; } while (var_v1 < 0x10); var_a1 = 0x1400; do { temp_a2 = var_a1 * 2; var_t0 = temp_a2 + 0x800DA800; var_t2 = temp_a2 + (&D_80100000); var_a0_2 = 0; loop_10: *((s16 *) (((char *) var_t0) + 0)) = ((arg0 << 0xB) | ((arg1 & 0xFF) << 6)) | (arg2 * 2); *var_t2 = temp_t1; *((s16 *) (((char *) var_t0) + 2)) = temp_t1; *var_t2 = temp_t1; *((s16 *) (((char *) var_t0) + 4)) = temp_t1; *var_t2 = temp_t1; *((s16 *) (((char *) var_t0) + 6)) = temp_t1; var_a0_2 += 4; *var_t2 = temp_t1; var_t0 = ((unsigned char *) var_t0) + 8; if (var_a0_2 != 0x10) { goto loop_10; } var_a1 += 0x140; } while (var_a1 < 0x11800); } while (0);
  var_a1_2 = 0x1400;
  do
  {
    temp_a2_2 = (var_a1_2 * 2) + 0x260;
    var_t0_3 = temp_a2_2 + 0x800DA800;
    var_t2_3 = temp_a2_2 + (&D_80100000);
    var_a0_3 = 0x130;
    loop_14:
    *((s16 *) (((char *) var_t0_3) + 0)) = temp_t1;

    *var_t2_3 = temp_t1;
    *((s16 *) (((char *) var_t0_3) + 2)) = temp_t1;
    *var_t2_3 = temp_t1;
    *((s16 *) (((char *) var_t0_3) + 4)) = temp_t1;
    *var_t2_3 = temp_t1;
    *((s16 *) (((char *) var_t0_3) + 6)) = temp_t1;
    var_a0_3 += 4;
    *var_t2_3 = temp_t1;
    var_t0_3 = ((unsigned char *) var_t0_3) + 8;
    if (var_a0_3 != 0x140)
    {
      goto loop_14;
    }
    var_a1_2 += 0x140;
  }
  while (var_a1_2 != 0x11800);
}
