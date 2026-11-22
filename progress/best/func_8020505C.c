s32 alLink();
s32 alUnlink();
s32 func_80231C9C();
s32 osPiStartDma();
s32 osVirtualToPhysical();
extern s32 D_8024E5A0;
extern char D_8025B8B0[];
extern s32 D_8025B8C0;
extern s32 D_8025B8D0;
extern char D_8025B8D8[];
s32 func_8020505C(u32 arg0, s32 arg1, s32 arg2)
{
  register s32 temp_s1;
  register s32 sp30;
  void *temp_s0;
  register s32 temp_v0_3;
  s32 __repair_temp_v0_3_1;
  s32 temp_t3;
  long temp_a3;
  void *temp_v0_2;
  long temp_v0;
  s32 *__base_D_8024E5A0;
  s32 *__base_D_8025B8C0;
  __base_D_8025B8C0 = &D_8025B8C0;
  __base_D_8024E5A0 = &D_8024E5A0;
  temp_s0 = *((void **) (((char *) D_8025B8B0) + 4));
  temp_v0_2 = NULL;
  if (temp_s0 != NULL)
  {
    loop_1:
    temp_v0 = *((u32 *) (((char *) temp_s0) + 8));

    if (temp_v0 <= arg0)
    {
 if (1) { }
      temp_v0_2 = temp_s0;
      if ((temp_v0 + 0x800) >= (((int) arg0) + arg1))
      {
        *((s32 *) (((char *) temp_s0) + 0xC)) = (s32) (*__base_D_8025B8C0);
        return osVirtualToPhysical(((*((s32 *) (((char *) temp_s0) + 0x10))) + arg0) - temp_v0);
      }
      temp_s0 = *((void **) (((char *) temp_s0) + 0));
      if (temp_s0 == NULL)
      {
        goto block_5;
      }
      goto loop_1;
    }
    goto block_5;
  }
  block_5:
  temp_s0 = *((void **) (((char *) D_8025B8B0) + 8));

  if (temp_s0 == NULL)
  {
    func_80231C9C("dmaPtr", "_audiomgr.c", 0x21A);
  }
  *((void **) (((char *) D_8025B8B0) + 8)) = (void *) (*((void **) (((char *) temp_s0) + 0)));
  alUnlink(temp_s0);
  if (temp_v0_2 != NULL)
  {
    alLink(temp_s0, temp_v0_2);
  }
  else
  {
    temp_v0_2 = *((void **) (((char *) D_8025B8B0) + 4));
    if (temp_v0_2 != NULL)
    {
      *((void **) (((char *) D_8025B8B0) + 4)) = temp_s0;
      *((void **) (((char *) temp_s0) + 0)) = temp_v0_2;
      *((s32 *) (((char *) temp_s0) + 4)) = 0;
      *((void **) (((char *) temp_v0_2) + 4)) = temp_s0;
    }
    else
    {
      *((void **) (((char *) D_8025B8B0) + 4)) = temp_s0;
      *((void **) (((char *) temp_s0) + 0)) = NULL;
      *((s32 *) (((char *) temp_s0) + 4)) = 0;
    }
  }
  temp_v0_3 = arg0 & 1;
  temp_s1 = *((s32 *) (((char *) temp_s0) + 0x10));
  sp30 = temp_v0_3;
  temp_a3 = arg0 - ((unsigned) temp_v0_3);
  *((s32 *) (((char *) temp_s0) + 8)) = temp_a3;
  *((s32 *) (((char *) temp_s0) + 0xC)) = (s32) (*__base_D_8025B8C0);
  __repair_temp_v0_3_1 = (*__base_D_8024E5A0) * 0x18;
  *__base_D_8024E5A0 += 1;
  osPiStartDma(__repair_temp_v0_3_1 + D_8025B8D0, 1, 0, temp_a3, temp_s1, 0x800, D_8025B8D8);
  return osVirtualToPhysical(temp_s1) + sp30;
}
