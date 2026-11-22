/* Draft from identical target func_80242B70, retargeted and judged independently. */
typedef struct 
{
  unsigned char pad_0[20];
  int field_14;
  unsigned char pad_18[4];
  int field_1C;
} __repair_record_arg0;
typedef struct { unsigned char pad[20]; int value; } __repair_field_14;
s32 func_80244770(void *arg0, s32 arg1, s32 arg2)
{
  char *__repair_addr;
  if (1)
  {
    if ((*((__repair_record_arg0 *) arg0)).field_1C * 0)
    {
    }
    if (arg1 == 2)
    {
      __repair_addr = (char *) (((*((__repair_record_arg0 *) arg0)).field_1C + (2 * (2 * (((__repair_field_14 *)arg0)->value)))) & 0xFFFFFFFFFFFFFFFFu);
      *((s32 *) __repair_addr) = arg2;
      ((__repair_field_14 *)arg0)->value += 1;
    }
    return 0;
  }
}

