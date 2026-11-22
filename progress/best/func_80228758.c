s32 func_80228894(s32);
s32 func_80231C58(s32, s32 *, u16 *);
extern s32 D_80275A30;
extern s32 D_80275A44;
extern u16 D_80280BFE;
extern char D_80253D60[];
s32 func_80228758(void)
{
  s32 var_a0;
  s32 sp1C;
  void *temp_v0;
  var_a0 = 0;
  if (((s32) D_80280BFE) > 0)
  {
    loop_2:
    temp_v0 = (var_a0 << 5) + D_80275A44;

    if ((((((*((u8 *) (((char *) temp_v0) + 1))) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) == 0)
    {
      *((u8 *) (((char *) temp_v0) + 1)) = 1U;
      *((s8 *) (((char *) temp_v0) + 0)) = 1;
      *((f32 *) (((char *) temp_v0) + 0xC)) = 1.0f;
      *((f32 *) (((char *) temp_v0) + 8)) = 1.0f;
      *((f32 *) (((char *) temp_v0) + 4)) = 1.0f;
      *((f32 *) (((char *) temp_v0) + 0x18)) = 1.0f;
      *((f32 *) (((char *) temp_v0) + 0x10)) = 0.0f;
      *((f32 *) (((char *) temp_v0) + 0x14)) = 0.0f;
      sp1C = var_a0;
      func_80228894(var_a0);
      D_80275A30 += 1;
      return sp1C;
    }
    var_a0 += 1;
    if (var_a0 >= ((s32) D_80280BFE))
    {
      goto block_5;
    }
    goto loop_2;
  }
  block_5:
  func_80231C58(var_a0, D_80253D60, &D_80280BFE);

  return 0xFFFF;
}

