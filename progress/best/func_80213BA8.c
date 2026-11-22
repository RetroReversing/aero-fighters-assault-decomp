s32 func_802164C8(f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_802168C4(f32, f32, f32, f32, void *, f32);
s32 func_80218C74();
s32 func_80218D34(f32, f32, f32, f32, f32, f32, f32);
f32 func_8022AA40(void);
s32 func_80231A24();
s32 func_80231C58();
s32 func_80234D30();
extern void *D_8024E710;
extern char D_80252F8C[];
extern s32 D_8025C394;
extern s32 D_8025C398;
extern s32 D_8025C39C;
extern s32 D_8025C3A0;
extern s32 D_8025C3A4;
extern u16 D_80280BD8;
extern char D_80252FBC[];
s32 func_80213BA8(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 *arg5, s32 *arg6, s32 *arg7)
{
  char *__repair_addr;
  int *__repair_home0 = &arg0;
  s32 spF8[2];
  s32 spE4[2];
  f32 spC8;
  s32 sp98;
  void *spB4;
  f32 spD8;
  f32 spD4;
  s32 sp90[2];
  f32 *temp_a1;
  f32 temp_fa0;
  f32 temp_fa1;
  f32 temp_fa1_2;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs2;
  f32 temp_fs3;
  f32 temp_fs4;
  f32 temp_fs5;
  f32 temp_ft4;
  register f32 temp_ft5;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  unsigned temp_a0;
  s32 temp_t2;
  s32 temp_t5;
  unsigned temp_t6;
  s32 temp_v1;
  s32 temp_v1_2;
  register s32 var_s1;
  register long var_s7;
  s32 var_v0;
  u8 temp_v0;
  void *temp_fp;
  register void *temp_s0;
  void *temp_s2;
  void *temp_s4;
  void *temp_s5;
  void *temp_t0;
  __repair_addr = (char *) ((*((s32 *) (((char *) D_8024E710) + 4))) + ((*__repair_home0) * 4));
  temp_t0 = *((s32 *) __repair_addr);
  spB4 = temp_t0;
  if (temp_t0 == ((s32) NULL))
  {
    func_80231A24(D_80252F8C);
    return 0;
  }
  temp_ft4 = arg1 + arg4;
  temp_fa0 = *((f32 *) (((char *) spB4) + 0));
  if (temp_ft4 < (*((f32 *) (((char *) spB4) + 0))))
  {
    return 0;
  }
  temp_ft5 = arg1 - arg4;
  if ((*((f32 *) (((char *) spB4) + 0xC))) < temp_ft5)
  {
    return 0;
  }
  temp_fs0 = arg2 + arg4;
  temp_fa1 = *((f32 *) (((char *) spB4) + 4));
  if (temp_fs0 < temp_fa1)
  {
    return 0;
  }
  temp_fs2 = arg2 - arg4;
  if ((*((f32 *) (((char *) spB4) + 0x10))) < temp_fs2)
  {
    return 0;
  }
  temp_fv0 = *((f32 *) (((char *) spB4) + 0x1C));
  temp_fv1 = *((f32 *) (((char *) spB4) + 0x20));
  var_v0 = (s32) ((temp_ft5 - (*((f32 *) (((char *) spB4) + 0)))) / temp_fv0);
  temp_t5 = (s32) ((temp_ft4 - (*((f32 *) (((char *) spB4) + 0)))) / temp_fv0);
  spE4[1] = (s32) ((temp_fs2 - temp_fa1) / temp_fv1);
  spE4[0] = (s32) ((temp_fs0 - temp_fa1) / temp_fv1);
  if (var_v0 < 0)
  {
    var_v0 = 0;
  }
  temp_v1 = (*((u8 *) (((char *) spB4) + 0x18))) - 1;
  if (temp_v1 < temp_t5)
  {
    temp_t5 = (unsigned) temp_v1;
  }
  if (spE4[1] < 0)
  {
    spE4[1] = 0;
  }
  temp_v1_2 = (*((u8 *) (((char *) spB4) + 0x19))) - 1;
  if (temp_v1_2 < spE4[0])
  {
    spE4[0] = temp_v1_2;
  }
  D_8025C398 = 0;
  temp_fs5 = *((f32 *) (((char *) spB4) + 0));
  spC8 = (*((f32 *) (((char *) spB4) + 0x1C))) + temp_fs5;
  spF8[1] = var_v0;
  if (temp_t5 >= var_v0)
  {
    sp90[0] = ((u32) temp_t5) + 1;
    do
    {
      temp_fs3 = *((f32 *) (((char *) spB4) + 4));
      spF8[0] = spE4[1];
      temp_fs4 = (*((f32 *) (((char *) spB4) + 0x20))) + temp_fs3;
      if (spE4[0] >= spE4[1])
      {
        sp90[1] = spE4[0] + 1;
        do
        {
          temp_s4 = (*((s32 *) (((char *) spB4) + 0x28))) + ((((*((u8 *) (((char *) spB4) + 0x18))) * spF8[0]) + spF8[1]) * 0x4C);
          if (temp_s4 != NULL)
          {
            temp_fp = *((void **) (((char *) temp_s4) + 0x40));
            if (temp_fp != ((s32) NULL))
            {
              var_s7 = 0;
              spD8 = arg1 - (*((f32 *) (((char *) temp_s4) + 0x30)));
              spD4 = arg2 - (*((f32 *) (((char *) temp_s4) + 0x34)));
              temp_v0 = *((u8 *) (((char *) temp_s4) + 0x48));
              temp_fs0_2 = arg3 - (*((f32 *) (((char *) temp_s4) + 0x38)));
              if (temp_v0)
              {
                func_80218C74((s16) temp_v0, &spD8, &spD4);
              }
              var_s1 = func_80218D34(spD8, spD4, arg4, temp_fs5, spC8, temp_fs3, temp_fs4) & 0xFFFF;
              if (((s32) (*((u16 *) (((char *) temp_fp) + 0x14)))) > 0)
              {
                sp98 = var_s1;
                do
                {
                  temp_s2 = (*((s32 *) (((char *) temp_fp) + 0x10))) + ((var_s7 << 3) << 2);
                  if ((*((u16 *) (((char *) temp_s2) + 0x18))) & sp98)
                  {
                    temp_s5 = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x1C))) + ((*((u16 *) (((char *) temp_s2) + 0))) * 4)));
                    if (func_802164C8(spD8, spD4, temp_fs0_2, arg4, *((f32 *) (((char *) temp_s2) + 0xC)), *((f32 *) (((char *) temp_s2) + 0x10)), *((f32 *) (((char *) temp_s2) + 0x14)), *((f32 *) (((char *) temp_s5) + 0x1C))) == 0)
                    {
                    }
                    else
                    {
                      D_8025C394 = ((*((u16 *) (((char *) temp_s4) + 0x4A))) << 0xC) | var_s7;
                      var_s1 = D_8025C398;
                      if ((*((u8 *) (((char *) temp_s5) + 0x11))) & 6)
                      {
                        do
                        {
                          func_802168C4(spD8, spD4, temp_fs0_2, arg4, temp_s2, *((f32 *) (((char *) temp_fp) + 0x2C)));
                        }
                        while (0);
                      }
                      else
                      {
                        *((s32 *) (D_8025C39C + (D_8025C398 * 4))) = D_8025C394;
                        temp_s0 = (D_8025C398 * 0xC) + D_8025C3A4;
                        *((f32 *) (((char *) temp_s0) + 0)) = (f32) (spD8 - (*((f32 *) (((char *) temp_s2) + 0xC))));
                        *((f32 *) (((char *) temp_s0) + 4)) = (f32) (spD4 - (*((f32 *) (((char *) temp_s2) + 0x10))));
                        *((f32 *) (((char *) temp_s0) + 8)) = (f32) (temp_fs0_2 - (*((f32 *) (((char *) temp_s2) + 0x14))));
                        func_80234D30(temp_s0, temp_s0);
                        temp_fv0_2 = *((f32 *) (((char *) temp_s0) + 0));
                        temp_fv1_2 = *((f32 *) (((char *) temp_s0) + 4));
                        temp_fa1_2 = *((f32 *) (((char *) temp_s0) + 8));
                        temp_fv1_3 = ((*((f32 *) (((char *) temp_s5) + 0x1C))) - func_8022AA40()) / arg4;
                        if (temp_fv1_3 < 0.0f)
                        {
                          *((f32 *) (D_8025C3A0 + (((u32) D_8025C398) * 4))) = temp_fv1_3;
                        }
                        else
                        {
                          *((f32 *) (D_8025C3A0 + (D_8025C398 * 4))) = 0.0f;
                        }
                        D_8025C398 = temp_t2;
                        temp_t2 = D_8025C398 + 1;
                        if (temp_t2 >= ((s32) D_80280BD8))
                        {
                          do
                          {
                            func_80231C58(temp_t2, D_80252FBC, &D_80280BD8);
                          }
                          while (0);
                          D_8025C398 -= 1;
                        }
                      }
                      if ((*((u8 *) (((char *) temp_s4) + 0x48))) != 0)
                      {
                        temp_t5 = var_s1 * 0xC;
                        if (var_s1 < D_8025C398)
                        {
                          do
                          {
                            temp_a1 = temp_t5 + ((unsigned) D_8025C3A4);
                            {
                              func_80218C74((s16) (((s32) (*((u8 *) (((char *) temp_s4) + 0x48)))) * (-1)), temp_a1, ((s8 *) temp_a1) + 4);
                            }
                            var_s1 += 1;
                            temp_t5 += 0xC;
                          }
                          while (var_s1 < D_8025C398);
                        }
                      }
                    }
                  }
                  var_s7 += 1;
                }
                while (var_s7 < ((s32) (*((u16 *) (((char *) temp_fp) + 0x14)))));
              }
            }
          }
          temp_t5 = spF8[0] + 1;
          spF8[0] = temp_t5;
        }
        while (sp90[1] != temp_t5);
      }
      temp_t6 = spF8[1] + 1;
      spF8[1] = (int) temp_t6;
    }
    while (sp90[0] != temp_t6);
  }
  *arg5 = D_8025C39C;
  *arg6 = D_8025C3A0;
  *arg7 = D_8025C3A4;
  return D_8025C398;
}

