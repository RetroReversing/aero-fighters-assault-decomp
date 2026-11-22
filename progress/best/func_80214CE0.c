s32 func_80216464(f32, f32, s32, s32, f32, f32, f32);
s32 func_80216EFC(f32, f32, s32, void *);
extern void *D_8024E710;
extern s32 D_8025C394;
extern volatile unsigned short D_8025C3E0;
extern s32 D_8025C3E4;
extern u16 D_80280BE6;
s32 func_80214CE0(f32 arg0, f32 arg1, f32 arg2)
{
  s32 temp_t0;
  s32 var_s1;
  void *temp_s0;
  void *temp_s2;
  void *temp_v0;
  var_s1 = 0;
  if (((s32) D_80280BE6) > ((!((*((u8 *) (((char *) temp_s2) + 0x11))) & 2)) * ((temp_t0 != 0xFFFF) * 0)))
  {
    for (;;)
    {
      temp_s0 = (var_s1 * 0x24) + D_8025C3E0;
      temp_t0 = *((u16 *) (((char *) temp_s0) + 0));
      if ((temp_t0 != 0xFFFF) && ((*((u8 *) (((char *) temp_s0) + 8))) & 1))
      {
        void *__repair_cached_pointer = D_8024E710;
        temp_v0 = (((*(*((u16 **) (((char *) temp_s0) + 4)))) << 1) << 5) + D_8025C3E4;
        {
          temp_s2 = *((s32 *) ((*((s32 *) (((char *) __repair_cached_pointer) + 0x1C))) + (temp_t0 * 4)));
          if (1)
          {
          }
        }
        if (func_80216464(arg0, arg1, arg2, *((s32 *) (((char *) temp_v0) + 0x30)), *((f32 *) (((char *) temp_v0) + 0x34)), *((f32 *) (((char *) temp_v0) + 0x38)), *((f32 *) (((char *) temp_s0) + 0xC))) != 0)
        {
          if (!((*((u8 *) (((char *) temp_s2) + 0x11))) & 2))
          {
            if (1)
            {
              return var_s1;
            }
          }
          D_8025C394 = var_s1;
          if (func_80216EFC(arg0, arg1, arg2, temp_s0) >= 0)
          {
            if (1)
            {
            }
            return D_8025C394;
          }
          goto block_9;
        }
        block_9:
        goto block_10;

      }
      block_10:
      temp_t0 = (var_s1 + 1) & 0xFFFF;

      ;
      var_s1 = temp_t0;
      if (temp_t0 >= ((s32) D_80280BE6))
      {
        goto block_11;
      }
      continue;
      break;
    }

  }
  block_11:
  return 0xFFFF;

}

