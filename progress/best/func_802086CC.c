s32 func_80208650(s32, s32);
s32 func_802331E0(s32);
s32 func_802086CC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  s32 __repair_operand;
  register void *sp50;
  void *temp_t1;
  void *__repair_phase_temp_t1;
  register s32 temp_t6;
  s32 temp_t7;
  s32 sp44;
  char var_s6;
  s32 sp60[2];
  register s32 temp_v0;
  u8 var_v1;
  register void *temp_s3;
  u8 var_v0;
  sp60[1] = 0;
  var_v0 = *((u8 *) (((char *) arg0) + 0x10));
  if (var_v0 > 0)
  {
    for (;;)
    {
      __repair_operand = *((s32 *) (((char *) arg0) + 8));
      sp60[0] = 0;
      temp_t1 = __repair_operand + (sp60[1] * 8);
      sp50 = temp_t1;
      var_v1 = *((u8 *) (((char *) temp_t1) + 4));
      if (((s32) (var_v1 & 0xFFFFFFFFFFFFFFFFu)) > 0)
      {
        sp44 = 0;
        loop_3:
        var_s6 = 0;

        __repair_phase_temp_t1 = (void *) (*((s32 *) (((char *) sp50) + 0))); __repair_phase_temp_t1 = (void *) (((char *) __repair_phase_temp_t1) + ((s32) sp44));
        if (((s32) (*((u8 *) (((char *) __repair_phase_temp_t1) + 4)))) > 0)
        {
          loop_4:
          temp_s3 = (void *) (*((s32 *) (((char *) __repair_phase_temp_t1) + 0)));

          temp_s3 = (void *) (((char *) temp_s3) + ((s32) (var_s6 * 0x10)));
          temp_t7 = (*((s32 *) (((char *) temp_s3) + 0))) & 0xFFF;
          if (arg2 & 0x200)
          {
            if (temp_t7 != 0xFFF)
            {
              temp_v0 = func_802331E0(temp_t7);
              if ((arg3 & 1) && (temp_v0 != arg4))
              {
                goto block_27;
              }
              if ((arg3 & 2) && (arg4 < temp_v0))
              {
                goto block_27;
              }
              if (!((arg3 & 4) && (temp_v0 < arg4)))
              {
                goto block_15;
              }
              else
              {
                goto block_27;
              }
            }
            goto block_28;
          }
          block_15:
          if (arg2 & 0x400)
          {
            if ((arg3 & 1) && (temp_t7 != arg4))
            {
              goto block_27;
            }
            if ((arg3 & 2) && (temp_t7 > arg4))
            {
              goto block_27;
            }
            if ((arg3 & 4) && (temp_t7 < arg4))
            {
              goto block_27;
            }
            goto block_25;
          }

          block_25:
          if (func_80208650(arg1, *((s32 *) (((char *) temp_s3) + 0xC))) != 0)
          {
            return 1;
          }

          block_27:
          block_28:
          var_s6 += 1;


          if (((var_s6 & 0xFF) & 0xFF) >= ((s32) (*((u8 *) (((char *) __repair_phase_temp_t1) + 4)))))
          {
            var_v1 = (unsigned short) (*((u8 *) (((char *) sp50) + 4)));
            goto block_30;
          }
          goto loop_4;
        }
        block_30:
        sp44 += 0x24;

        temp_t6 = sp60[0] + 1;
        sp60[0] = temp_t6;
        if (temp_t6 >= ((s32) var_v1))
        {
          var_v0 = *((u8 *) (((char *) arg0) + 0x10));
          goto block_32;
        }
        goto loop_3;
      }
      block_32:
      __repair_operand = sp60[1] + 1;

      sp60[1] = __repair_operand;
      if (__repair_operand >= ((s32) var_v0))
      {
        goto __shared_return_0;
      }
      continue;
      break;
    }

  }
  __shared_return_0:
  return 0;

}

