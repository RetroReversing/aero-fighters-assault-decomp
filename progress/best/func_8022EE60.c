s32 func_80231A24();
extern void *D_8024E710;
extern char D_80254A40[];
extern char D_80278750[];
typedef struct 
{
  unsigned char pad_0[24];
  unsigned char field_18;
  unsigned char field_19;
  unsigned char pad_1A[14];
  int field_28;
} __repair_record_temp_t3;
s32 func_8022EE60(s32 arg0, s32 arg1, s32 **arg2)
{
  char *__repair_addr;
  register s32 temp_t9;
  s32 var_a0;
  s32 var_a3;
  s32 var_t2;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_a1;
  void *temp_a2;
  void *temp_t3;
  void *temp_v1;
  temp_t3 = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 4))) + (arg0 * 4)));
  var_a3 = 0;
  if (temp_t3 == NULL)
  {
    func_80231A24(D_80254A40);
    return 0;
  }
  *arg2 = D_80278750;
  var_t2 = 0;
  var_a0 = ((__repair_record_temp_t3 *) temp_t3)->field_18 * ((__repair_record_temp_t3 *) temp_t3)->field_19;
  if (0 < var_a0)
  {
    loop_3:
    temp_a2 = ((__repair_record_temp_t3 *) temp_t3)->field_28 + ((u32) var_t2);

    var_t2 += 0x4C;
    if (temp_a2 == NULL)
    {
      var_v0 = var_a0 * 0x13;
      goto block_16;
    }
    temp_v1 = *((void **) (((char *) temp_a2) + 0x40));
    if (temp_v1 == NULL)
    {
      var_v0 = var_a0 * 0x13;
      goto block_16;
    }
    var_a1 = *((u16 *) (((char *) temp_v1) + 0x14));
    var_v0_2 = 0;
    if (((s32) var_a1) > 0)
    {
      __repair_addr = (char *) ((*((s32 *) (((char *) (*((void **) (((char *) temp_a2) + 0x40)))) + 0x10))) + (var_v0_2 << 5));
      loop_8:
      if ((arg1 == 0xFFFE) || (arg1 == (*((s32 *) __repair_addr))))
      {
        var_a0 = var_a3 * 4;
        {
          var_a3 += 1;
        }
        *((u16 *) (D_80278750 + var_a0)) = ((((*((u16 *) (((char *) temp_a2) + 0x4A))) & 0xFFF) << 3) << 9) | (var_v0_2 & 0xFFF);
        if (0x80 <= (var_a3 & 0xFF))
        {
          return 0x80;
        }
        var_a1 = *((u16 *) (((char *) (*((void **) (((char *) temp_a2) + 0x40)))) + 0x14));
        goto block_13;
      }

      block_13:
      var_v0_2 += 1;

      if (var_v0_2 >= ((s32) var_a1))
      {
        var_a0 = ((__repair_record_temp_t3 *) temp_t3)->field_18 * ((__repair_record_temp_t3 *) temp_t3)->field_19;
        goto block_15;
      }
      goto loop_8;
    }
    block_15:
    var_v0 = var_a0 * 0x13;

    block_16:
    if ((var_t2 >= (var_v0 * 4)) != 0)
    {
      goto block_17;
    }

    goto loop_3;
  }
  block_17:
  return var_a3;

}

