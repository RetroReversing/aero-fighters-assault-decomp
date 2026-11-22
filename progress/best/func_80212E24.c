s32 func_802160EC();
s32 func_80216464(f32, f32, s32, s32, f32, f32, f32);
s32 func_80216BD8(f32, f32, s32, void *, f32);
s32 func_80231A24();
extern void *D_8024E710;
extern char D_80252F20[];
extern s32 D_8025C394;
s32 func_80212E24(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int *__repair_home3 = &arg3;
  char *__repair_addr;
  int *__repair_home0 = &arg0;
  void *temp_v0;
  u16 sp74;
  s32 var_s2;
  register void *temp_s3;
  register void *temp_s0_2;
  u16 var_v1;
  f32 sp70;
  f32 sp6C;
  int sp68;
  unsigned long sp76;
  register void *temp_s1;
  void *temp_s0;
  __repair_addr = (char *) ((*((s32 *) (((char *) D_8024E710) + 4))) + ((*__repair_home0) * 4));
  temp_s0 = *((s32 *) __repair_addr);
  if (temp_s0 == NULL)
  {
    func_80231A24(arg1, arg2, D_80252F20);
    return -1;
  }
  if (func_802160EC((unsigned) arg1, arg2, temp_s0, arg1, arg2, *__repair_home3, &sp70, &sp6C, &sp68, &sp74, &sp76) == 0)
  {
    return -1;
  }
  temp_s3 = (void *) (*((s32 *) (((char *) temp_s0) + 0x28))); temp_s3 = (void *) (((char *) temp_s3) + ((s32) (sp74 * 0x4C)));
  temp_v0 = *((void **) (((char *) temp_s3) + 0x40));
  if (temp_v0 == NULL)
  {
    return -1;
  }
 var_s2 = 0; var_v1 = *((u16 *) (((char *) temp_v0) + 0x14)); if (var_v1 != 0) { loop_7: temp_s0_2 = (*((s32 *) (((char *) (*((void **) (((char *) temp_s3) + 0x40)))) + 0x10))) + (var_s2 << 5); if (sp76 & (*((u16 *) (((char *) temp_s0_2) + 0x18)))) { temp_s1 = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x1C))) + ((*((u16 *) (((char *) temp_s0_2) + 0))) * 4))); if (func_80216464(sp70, sp6C, sp68, *((s32 *) (((char *) temp_s0_2) + 0xC)), *((f32 *) (((char *) temp_s0_2) + 0x10)), *((f32 *) (((char *) temp_s0_2) + 0x14)), *((f32 *) (((char *) temp_s1) + 0x1C))) != 0) {
        D_8025C394 = (((*((u16 *) (((char *) temp_s3) + 0x4A))) << 8) << 4) | var_s2;
        if ((*((u8 *) (((char *) temp_s1) + 0x11))) & 2)
        {
          if (func_80216BD8(sp70, sp6C, sp68, temp_s0_2, *((f32 *) (((char *) (*((void **) (((char *) temp_s3) + 0x40)))) + 0x2C))) >= 0)
          {
            return D_8025C394;
          }
          goto block_13;
        }
        return D_8025C394;
      }
      block_13:
      var_v1 = *((u16 *) (((char *) (*((void **) (((char *) temp_s3) + 0x40)))) + 0x14));

      goto block_14;
    }
    block_14:
    ++var_s2;

    if (((u32) var_v1) <= var_s2)
    {
      return -1;
    }
    goto loop_7;
  }
  return -1;
}
