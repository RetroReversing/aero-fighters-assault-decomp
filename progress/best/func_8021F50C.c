s32 func_80231A24(s32 *);
extern s32 D_80253764;
extern s32 D_80271B58;
extern s16 D_80271B5E;
extern s16 D_80271B60;
extern void *D_80273B90;
void func_8021F50C(void)
{
  s32 temp_a3;
  s16 var_a1;
  s32 var_a3;
  s16 var_t3;
  s32 var_t4;
  s32 temp_lo;
  s32 temp_lo_2;
  s32 temp_t6;
  s32 var_t0;
  void *temp_v1;
  void *temp_v1_3;
  var_t3 = D_80271B5E - D_80271B60;
  var_t0 = 0;
  if (var_t3 < 3)
  {
    func_80231A24(&D_80253764);
    return;
  }
  var_t4 = D_80271B60;
  if (var_t3 > 0)
  {
    do
    {
      var_a1 = 0;
      var_a3 = 0x10;
      if (var_t4 != D_80271B60)
      {
        var_t3 += 2;
      }
      if (var_t3 < 0x10)
      {
        var_a3 = var_t3;
      }
      temp_v1 = D_80273B90;
      D_80273B90 = ((unsigned char *) temp_v1) + 8;
      *((s32 *) (((char *) temp_v1) + 0)) = (s32) ((((((var_t3 - 1) * 0x10) & 0xFF) << 0x10) | 0x04000000) | ((var_a3 * 0x10) & 0xFFFF));
      temp_t6 = ((var_t4 * 0x10) + D_80271B58) + 0x80000000;
      temp_a3 = var_t3 - 2;
      var_t3 -= var_a3;
      var_t4 += temp_a3;
      *((s32 *) (((char *) temp_v1) + 4)) = temp_t6;
      if (temp_a3 > 0)
      {
        do
        {
          if (var_t0 != 0)
          {
            temp_lo = var_a1 * 0xA;
            temp_v1 = D_80273B90;
            D_80273B90 = ((unsigned char *) temp_v1) + 8;
            *((s32 *) (((char *) temp_v1) + 0)) = 0xBF000000;
            *((s32 *) (((char *) temp_v1) + 4)) = (s32) ((((temp_lo & 0xFF) << 0x10) | (((temp_lo + 0x14) & 0xFF) << 8)) | (((temp_lo + 0xA) & 0xFF) & 0xFF));
          }
          else
          {
            temp_lo_2 = var_a1 * 0xA;
            temp_v1_3 = D_80273B90;
            D_80273B90 = ((unsigned char *) temp_v1_3) + 8;
            *((s32 *) (((char *) temp_v1_3) + 0)) = 0xBF000000;
            *((s32 *) (((char *) temp_v1_3) + 4)) = (s32) ((((temp_lo_2 & 0xFF) << 0x10) | (((temp_lo_2 + 0xA) & 0xFF) << 8)) | ((temp_lo_2 + 0x14) & 0xFF));
          }
          var_a1 += 1;
          var_t0 = (var_t0 ^ 1) & 0xFF;
        }
        while (var_a1 < temp_a3);
      }
    }
    while (var_t3 > 0);
  }
}

