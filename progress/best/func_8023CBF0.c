#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
extern s16 D_80250934;
extern s32 D_80283960;
extern s32 D_80283964;
extern s32 D_80283968;
extern s32 D_8028396C;
typedef struct 
{
  unsigned char pad[4];
  int value;
} __repair_field_4;
void func_8023CBF0(void **arg0)
{
  void *temp_a1;
  void *temp_a2;
  void *temp_a2_2;
  void *temp_a3;
  void *temp_a3_2;
  void *temp_t0_2;
  void *temp_t1;
  void *temp_v0;
  void *temp_v1;
  temp_a1 = *arg0;
  D_80250934 = 0;
  D_80283968 = 0;
  D_8028396C = 0;
  D_80283960 = 0x140;
  D_80283964 = 0xF0;
  *((s32 *) (((s8 *) temp_a1) + 0)) = 0xE7000000;
  ((__repair_field_4 *) temp_a1)->value = 0;
  temp_a2 = ((unsigned char *) temp_a1) + 8;
  temp_a3 = ((unsigned char *) temp_a2) + 8;
  *((s32 *) (((s8 *) temp_a1) + 8)) = 0xBA001402;
  ((__repair_field_4 *) temp_a2)->value = 0;
  *((s32 *) (((s8 *) temp_a2) + 8)) = 0xBB000001;
  temp_a1 = ((unsigned char *) temp_a3) + 8;
  ((__repair_field_4 *) temp_a3)->value = 0x80008000;
  temp_v0 = ((unsigned char *) temp_a1) + 8;
  *((s32 *) (((s8 *) temp_a3) + 8)) = 0xB9000002;
  ((__repair_field_4 *) temp_a1)->value = 0;
  *((s32 *) (((s8 *) temp_a1) + 8)) = 0xBA001301;
  ((__repair_field_4 *) temp_v0)->value = 0;
  temp_a1 = ((unsigned char *) temp_v0) + 8;
  *((s32 *) (((s8 *) temp_v0) + 8)) = 0xBA000C02;
  temp_a2_2 = ((unsigned char *) temp_a1) + 8;
  ((__repair_field_4 *) temp_a1)->value = 0x2000;
  temp_a3_2 = ((unsigned char *) temp_a2_2) + 8;
  ((__repair_field_4 *) temp_a2_2)->value = 0xC00;
  *((s32 *) (((s8 *) (((unsigned char *) temp_v0) + 8)) + 8)) = 0xBA000903;
  temp_t0_2 = ((unsigned char *) temp_a3_2) + 8;
  *((s32 *) (((s8 *) temp_a2_2) + 8)) = 0xBA001102;
  ((__repair_field_4 *) temp_a3_2)->value = 0;
  temp_t1 = ((unsigned char *) temp_t0_2) + 8;
  *((s32 *) (((s8 *) temp_a3_2) + 8)) = 0xBA001001;
  ((__repair_field_4 *) temp_t0_2)->value = 0;
  temp_v1 = ((unsigned char *) temp_t1) + 8;
  *((s32 *) (((s8 *) temp_t0_2) + 8)) = 0xBA000E02;
  ((__repair_field_4 *) temp_t1)->value = 0;
  ((__repair_field_4 *) temp_v1)->value = 0x0F0A7008;
  *((s32 *) (((s8 *) temp_t1) + 8)) = 0xB900031D;
  *arg0 = ((unsigned char *) temp_v1) + 8;
}

