s32 func_80208650(s32, s32);
s32 func_802331E0(s32);
typedef struct 
{
  unsigned char pad_0[8];
  int field_8;
  unsigned short field_C;
} __repair_record_arg0;
s32 func_802088E4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  s32 temp_t7;
  s32 temp_v0;
  s32 var_s6;
  s32 var_v1;
  s32 var_v0;
  void *temp_s5;
  var_v0 = ((__repair_record_arg0 *) arg0)->field_C;
  if (((s32) var_v0) > 0)
  {
    var_s6 = 0;
    loop_2:
    temp_s5 = (void *) ((__repair_record_arg0 *) arg0)->field_8;

    temp_s5 = (void *) (((char *) temp_s5) + ((s32) var_s6));
    temp_t7 = (*((s32 *) (((char *) temp_s5) + 0))) & 0xFFF;
    if (((unsigned short) arg2) & 0x200)
    {
      if (temp_t7 == 0xFFF)
      {
        var_v1 = var_v0 * 0xB;
        goto block_27;
      }
      temp_v0 = func_802331E0(temp_t7 & 0xFFFFFFFFFFFFFFFF);
      if ((arg3 & 1) && (temp_v0 != arg4))
      {
        var_v0 = ((__repair_record_arg0 *) arg0)->field_C;
        var_v1 = var_v0 * 0xB;
        goto block_27;
      }
      if ((arg3 & 2) && (arg4 < temp_v0))
      {
        var_v0 = ((__repair_record_arg0 *) arg0)->field_C;
        var_v1 = var_v0 * 0xB;
        goto block_27;
      }
      if ((arg3 & 4) && (temp_v0 < arg4))
      {
        var_v0 = ((__repair_record_arg0 *) arg0)->field_C;
        var_v1 = var_v0 * 0xB;
        goto block_27;
      }
      goto block_14;
    }
    block_14:
    if (arg2 & 0x400)
    {
      if ((arg3 & 1) && (temp_t7 != arg4))
      {
        var_v0 = ((__repair_record_arg0 *) arg0)->field_C;
        var_v1 = var_v0 * 0xB;
        goto block_27;
      }
      if ((arg3 & 2) && (arg4 < temp_t7))
      {
        var_v0 = ((__repair_record_arg0 *) arg0)->field_C;
        var_v1 = var_v0 * 0xB;
        goto block_27;
      }
      if ((arg3 & 4) && (temp_t7 < arg4))
      {
        var_v0 = ((__repair_record_arg0 *) arg0)->field_C;
        var_v1 = var_v0 * 0xB;
        goto block_27;
      }
      goto block_24;
    }

    block_24:
    if (func_80208650(arg1, *((s32 *) (((char *) temp_s5) + 0xC))) != 0)
    {
      return 1;
    }

    var_v0 = ((__repair_record_arg0 *) arg0)->field_C;
    var_v1 = var_v0 * 0xB;
    block_27:
    var_s6 += 0x2C;

    if ((var_s6 >= (2 * (var_v1 * 2))) != 0)
    {
      goto block_28;
    }
    goto loop_2;
  }
  block_28:
  return (var_v0 * 0xB) * (0 & 0xFFu);

}

