typedef struct 
{
  unsigned char pad_0[4];
  short field_4;
  short field_6;
  float field_8;
  float field_C;
  unsigned char pad_10[4];
  short field_14;
  unsigned char pad_16[22];
  short field_2C;
  unsigned short field_2E;
  signed char field_30;
  signed char field_31;
} __repair_record_temp_v0;
volatile long long func_80233BA0(void *arg0, void *arg1)
{
  u8 temp_v1;
  void *temp_v0;
  void *temp_v0_2;
  if (arg1 != NULL)
  {
    temp_v0 = ((unsigned char *) arg0) + 0x18;
    ((__repair_record_temp_v0 *) temp_v0)->field_4 = (s16) ((*((u16 *) (((char *) arg1) + 0xA))) - 1);
    ((__repair_record_temp_v0 *) temp_v0)->field_6 = (s16) ((*((u16 *) (((char *) arg1) + 0xC))) - 1);
    ((__repair_record_temp_v0 *) temp_v0)->field_2C = (s16) ((*((u16 *) (((char *) arg1) + 0xC))) - 1);
    do
    {
      ((__repair_record_temp_v0 *) temp_v0)->field_30 = 0;
      do
      {
        ((__repair_record_temp_v0 *) temp_v0)->field_31 = 2;
        if (1)
        {
          ((__repair_record_temp_v0 *) temp_v0)->field_14 = 0x200;
          ((__repair_record_temp_v0 *) temp_v0)->field_2E = ((((u16) (*((u16 *) (((char *) arg1) + 0xC)))) & 0xFFFF) & 0xFFFF) & 0xFFFF;
          if ((*((u8 *) (((char *) arg1) + 0x22))) != 1)
          {
            ((__repair_record_temp_v0 *) temp_v0)->field_14 = (s16) ((0x200 & 0xFFu) | 1);
          }
          if ((*((u8 *) (((char *) arg1) + 0x22))) == 1)
          {
            ((__repair_record_temp_v0 *) temp_v0)->field_30 = 4;
          }
          else
            if ((*((u8 *) (((char *) arg1) + 0x22))) == 2)
          {
            ((__repair_record_temp_v0 *) temp_v0)->field_30 = 3;
          }
          else
          {
            ((__repair_record_temp_v0 *) temp_v0)->field_30 = 0;
          }
        }
        if ((*((u8 *) (((char *) arg1) + 0xE))) == 4)
        {
          ((__repair_record_temp_v0 *) temp_v0)->field_31 = 0;
        }
        else
          if ((*((u8 *) (((char *) arg1) + 0xE))) == 8)
        {
          ((__repair_record_temp_v0 *) temp_v0)->field_31 = 1;
        }
        else
        {
          ((__repair_record_temp_v0 *) temp_v0)->field_31 = 2;
        }
      }
      while (0);
    }
    while (0);
    ((__repair_record_temp_v0 *) temp_v0)->field_8 = 1.0f;
    ((__repair_record_temp_v0 *) temp_v0)->field_C = 1.0f;
  }
  temp_v0_2 = ((unsigned char *) arg0) + 0x18;
  do
  {
    *((u16 *) (((char *) temp_v0_2) + 0x10)) = 0;
    *((u16 *) (((char *) temp_v0_2) + 0x12)) = 0;
    goto dummy_label_636878;
    dummy_label_636878:
    ;

    ;
    ;
    ;
    *((u16 *) (((char *) temp_v0_2) + 0x16)) = 0x1234;
    *((u8 *) (((char *) temp_v0_2) + 0x18)) = 0xFF;
    *((u8 *) (((char *) temp_v0_2) + 0x19)) = 0xFF;
    *((u8 *) (((char *) temp_v0_2) + 0x1A)) = 0xFF;
    *((u8 *) (((char *) temp_v0_2) + 0x1B)) = 0xFF;
    *((u16 *) (((char *) temp_v0_2) + 0x1C)) = 0;
    *((u16 *) (((char *) temp_v0_2) + 0x1E)) = 0;
    *((s32 *) (((char *) temp_v0_2) + 0x20)) = 0;
    *((u16 *) (((char *) temp_v0_2) + 0x24)) = 0;
    *((u16 *) (((char *) temp_v0_2) + 0x26)) = 1 ^ 0;
    *((u16 *) (((char *) temp_v0_2) + 0x28)) = 1;
    *((u16 *) (((char *) temp_v0_2) + 0x2A)) = 0x24;
    *((f32 *) (((char *) temp_v0_2) + 8)) = 1.0f;
    *((u16 *) (((char *) temp_v0_2) + 0xC)) = 1.0f;
    *((u16 *) (((char *) temp_v0_2) + 0x40)) = 0;
    *((u16 *) (((char *) (((unsigned char *) arg0) + 0x18)) + 0x42)) = 0;
    *((s32 *) (((char *) (((unsigned char *) arg0) + 0x18)) + 0x34)) = (s32) (*((s32 *) (((char *) arg0) + 0x14)));
  }
  while (0);
}

