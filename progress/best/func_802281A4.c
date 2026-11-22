s32 func_80231C58(s32, s32 *, s32 *);
extern u16 D_8024E874;
extern s32 D_80275A44;
extern s32 D_80275A48;
extern s32 D_80275A58;
extern u16 D_80280BFE;
extern s32 D_80280C02;
typedef struct 
{
  unsigned char field_0;
  unsigned char pad_1[3];
  float field_4;
  float field_8;
  float field_C;
  float field_10;
  float field_14;
  float field_18;
  void *field_1C;
} __repair_record_temp_s1;
void func_802281A4(void *arg0)
{
  s32 temp_a0;
  s32 temp_t3;
  s32 var_s3;
  u32 temp_v0;
  u32 temp_v0_2;
  u32 temp_v0_3;
  void *temp_s0;
  void *temp_s1;
  var_s3 = 0;
  if (((s32) D_80280BFE) > 0)
  {
    do
    {
      temp_s1 = (var_s3 << 5) + D_80275A44;
      if (((__repair_record_temp_s1 *) temp_s1)->field_0 != 0)
      {
        temp_t3 = D_80275A58 * 0x10;
        temp_a0 = D_80275A58 + 1;
        D_80275A58 = temp_a0;
        temp_s0 = (*((&D_80275A48) + D_8024E874)) + temp_t3;
        if (func_80231C58(temp_a0, "LIGHT_NLGFXS", &D_80280C02) != 0)
        {
          D_80275A58 -= 1;
        }
        ((__repair_record_temp_s1 *) temp_s1)->field_1C = temp_s0;
        temp_v0 = (u32) (((*((f32 *) (((char *) arg0) + 0xC))) * 255.0f) * ((__repair_record_temp_s1 *) temp_s1)->field_4);
        *((s8 *) (((char *) temp_s0) + 4)) = ((s8) (temp_v0 & 0xFFFFu)) ^ 0;
        *((s8 *) (((char *) temp_s0) + 0)) = (s8) temp_v0;
        temp_v0 = (u32) (((*((f32 *) (((char *) arg0) + 0x10))) * 255.0f) * ((__repair_record_temp_s1 *) temp_s1)->field_8);
        *((s8 *) (((char *) temp_s0) + 5)) = (s8) temp_v0;
        *((s8 *) (((char *) temp_s0) + 1)) = ((s8) temp_v0) & 0xFFFFFFFFFFFFFFFFu;
        temp_v0 = (u32) (((*((f32 *) (((char *) arg0) + 0x14))) * 255.0f) * ((__repair_record_temp_s1 *) temp_s1)->field_C);
        *((s8 *) (((char *) temp_s0) + 6)) = (s8) temp_v0;
        *((s8 *) (((char *) temp_s0) + 2)) = (s8) temp_v0;
        *((s8 *) (((char *) temp_s0) + 8)) = (s8) ((s32) (((__repair_record_temp_s1 *) temp_s1)->field_10 * 127.0f));
        *((s8 *) (((char *) temp_s0) + 9)) = (s8) ((s32) (((__repair_record_temp_s1 *) temp_s1)->field_14 * 127.0f));
        *((s8 *) (((char *) temp_s0) + 0xA)) = (s8) ((s32) (((__repair_record_temp_s1 *) temp_s1)->field_18 * 127.0f));
      }
      do
      {
        var_s3 += 1;
      }
      while (0);
    }
    while (var_s3 < ((s32) D_80280BFE));
  }
}

