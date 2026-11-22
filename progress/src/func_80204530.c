extern s32 D_80280BC0;
typedef struct 
{
  unsigned char pad_0[56];
  unsigned short field_38;
  unsigned char pad_3A[2];
  unsigned short field_3C;
} __repair_record___base_D_80280BC0;
s32 func_80204530(void)
{
  s32 *__base_D_80280BC0;
  __base_D_80280BC0 = &D_80280BC0;
  return (((((__repair_record___base_D_80280BC0 *) __base_D_80280BC0)->field_38 & 0xFFFF) * 0x10) + (((__repair_record___base_D_80280BC0 *) __base_D_80280BC0)->field_3C << 0xB)) + 0x1FDDC;
}

