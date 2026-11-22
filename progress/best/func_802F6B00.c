typedef struct 
{
  unsigned char pad_0[4];
  int field_4;
  int field_8;
  int field_C;
  int field_10;
  int field_14;
  int field_18;
} __repair_record_arg1;
s32 func_802F6B00(s32 arg0, void *arg1)
{
  return (((((((0, ((__repair_record_arg1 *) arg1)->field_4 * 0x3E8)) + ((*((int *) (((char *) arg1) + 8))) * 0x2710)) + (((__repair_record_arg1 *) arg1)->field_C * 0x4E20)) + (((__repair_record_arg1 *) arg1)->field_10 * 0xEA60)) + (((__repair_record_arg1 *) arg1)->field_18 * 0x3E8)) & 0xFFFFFFFFFFFFFFFFu) + (((__repair_record_arg1 *) arg1)->field_14 * 0x186A0);
}

