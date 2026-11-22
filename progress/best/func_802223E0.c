volatile unsigned long long osVirtualToPhysical();
extern s32 D_8024E858;
extern s32 *D_80273B90;
extern s32 D_80274388;
extern s32 D_80274398;
typedef struct 
{
  int value;
} __repair_field_0;
typedef struct 
{
  unsigned char pad_0[8];
  short field_8;
  short field_A;
  short field_C;
  short field_E;
} __repair_record_temp_t5;
void func_802223E0(s32 arg0)
{
  int __repair_literal;
  register void *sp4C;
  register s32 *temp_v1_9;
  s32 *temp_v1;
  void *temp_t5;
  s32 *temp_v1_11;
  register s32 *temp_v1_12;
  s32 *temp_v1_14;
  s32 *temp_v1_15;
  s32 *temp_v1_4;
  s32 *temp_v1_5;
  s32 *temp_v1_6;
  s32 *temp_v1_7;
  s32 *temp_v1_8;
  s32 *sp2C;
 dummy_label_395375: ;
  temp_v1 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v1) + 8;
  ((__repair_field_0 *) temp_v1)->value = 0xE7000000;
  *((s32 *) (((char *) temp_v1) + 4)) = 0;
  temp_t5 = ((*(&arg0)) << 5) + ((int) D_80274398);
  temp_v1 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v1) + 8;
  *((s32 *) (((char *) temp_v1) + 4)) = 0x0F0A4000;
  ((__repair_field_0 *) temp_v1)->value = 0xB900031D;
  temp_v1 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v1) + 8;
  ((__repair_field_0 *) temp_v1)->value = 0xE7000000;
  do
  {
    *((s32 *) (((char *) temp_v1) + 4)) = 0; temp_v1_4 = D_80273B90; D_80273B90 = ((s8 *) temp_v1_4) + 8;
    ((__repair_field_0 *) temp_v1_4)->value = 0xBA001402;
    *((s32 *) (((char *) temp_v1_4) + 4)) = 0x300000; temp_v1_5 = D_80273B90;
  }
  while (0);
  D_80273B90 = ((s8 *) temp_v1_5) + 8;
  ((__repair_field_0 *) temp_v1_5)->value = 0xE7000000;
 *((s32 *) (((char *) temp_v1_5) + 4)) = 0; temp_v1_6 = D_80273B90; D_80273B90 = ((s8 *) temp_v1_6) + 8; *((s32 *) (((char *) temp_v1_6) + 4)) = 0xFFFCFFFC; ((__repair_field_0 *) temp_v1_6)->value = 0xF7000000;
  temp_v1_7 = D_80273B90;
  D_80273B90 = temp_v1_7 + 8;
  ((__repair_field_0 *) temp_v1_7)->value = 0xE7000000;
  *((s32 *) (((char *) temp_v1_7) + 4)) = 0;
  temp_v1_8 = D_80273B90;
  D_80273B90 = temp_v1_8 + 8;
  ((__repair_field_0 *) temp_v1_8)->value = 0xFF10013F;
  sp4C = temp_t5;
  sp2C = temp_v1_8;
  *((s32 *) (((char *) sp2C) + 4)) = osVirtualToPhysical(D_80274388);
  temp_v1_9 = D_80273B90;
  D_80273B90 = temp_v1_9 + 8;
  ((__repair_field_0 *) temp_v1_9)->value = 0xE7000000;
  *((s32 *) (((char *) temp_v1_9) + 4)) = 0;
  temp_v1 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v1) + 8;
  __repair_literal = 4;
  ((__repair_field_0 *) temp_v1)->value = (((((__repair_record_temp_t5 *) temp_t5)->field_A & 0x3FF) << 0xE) | 0xF6000000) | (((0xF0 - ((__repair_record_temp_t5 *) temp_t5)->field_C) & 0x3FF) * __repair_literal);
  *((s32 *) (((char *) temp_v1) + 4)) = (s32) (((((__repair_record_temp_t5 *) temp_t5)->field_8 & 0x3FF) << 0xE) | (((0xF0 - ((__repair_record_temp_t5 *) temp_t5)->field_E) & 0x3FF) * 4));
  temp_v1_11 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v1_11) + 8;
  ((__repair_field_0 *) temp_v1_11)->value = 0xE7000000;
  *((s32 *) (((char *) temp_v1_11) + 4)) = 0;
  temp_v1_12 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v1_12) + 8;
  ((__repair_field_0 *) temp_v1_12)->value = 0xFF10013F;
  temp_v1 = temp_v1_12;
  temp_v1_12 = 0;
  *((s32 *) (((char *) temp_v1) + 4)) = osVirtualToPhysical(D_8024E858);
  temp_v1 = D_80273B90;
  goto dummy_label_576210;
  dummy_label_576210:
  ;

  ;
  do
  {
    D_80273B90 = ((s8 *) temp_v1) + 8;
    *((s32 *) (((char *) temp_v1) + 4)) = 0;
    ((__repair_field_0 *) temp_v1)->value = 0xE7000000;
    temp_v1_14 = D_80273B90;
    do
    {
      D_80273B90 = ((s8 *) temp_v1_14) + 8;
      do
      {
        ((__repair_field_0 *) temp_v1_14)->value = 0xBA001402;
        *((s32 *) (((char *) temp_v1_14) + 4)) = 0x100000; temp_v1_15 = D_80273B90; D_80273B90 = ((s8 *) temp_v1_15) + 8;
      }
      while (0 != 0.0f);
      *((s32 *) (((char *) temp_v1_15) + 4)) = 0;
      ((__repair_field_0 *) temp_v1_15)->value = 0xE7000000;
    }
    while (0);
  }
  while (0);
}
