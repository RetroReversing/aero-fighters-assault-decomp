s32 func_8022B460();
u64 func_8022B5E0();
s32 func_8022BA94();
s32 func_8022BB00();
s32 func_80234DF0();
extern u16 D_8024E874;
extern char D_80274380[];
extern char D_80275110[];
typedef struct 
{
  int field_0;
  unsigned char pad_4[4];
  unsigned int field_8;
  unsigned int field_C;
} __repair_record_temp_s0;
u32 func_8022393C(s32 arg0, u32 *arg1, s32 *arg2, s32 arg3)
{
  u32 temp_v0;
  u32 *var_s1;
  u32 temp_a0;
  s32 temp_v0_2;
  u32 temp_v1;
  register s32 *temp_a3;
  s32 temp_a0_2;
  register s32 sp40;
  u32 sp3C;
  s32 sp2C[4];
  void *temp_s0;
  temp_s0 = (arg0 * 0x10) + D_80275110;
  temp_v0 = ((__repair_record_temp_s0 *) temp_s0)->field_C;
  var_s1 = arg1;
  if (temp_v0 >= ((u32) ((__repair_record_temp_s0 *) temp_s0)->field_8))
  {
    return 0U;
  }
  if (var_s1 == NULL)
  {
    var_s1 = &sp3C;
  }
  sp40 = (u32) func_8022B5E0(((__repair_record_temp_s0 *) temp_s0)->field_0 + temp_v0, 4);
  *var_s1 = (u32) func_8022B5E0((((__repair_record_temp_s0 *) temp_s0)->field_0 + ((__repair_record_temp_s0 *) temp_s0)->field_C) + 4, 4);
  *arg2 = (((__repair_record_temp_s0 *) temp_s0)->field_0 + ((__repair_record_temp_s0 *) temp_s0)->field_C) + 8;
  if (sp40 == 0x475A4950)
  {
    temp_v1 = (u32) func_8022B5E0((((__repair_record_temp_s0 *) temp_s0)->field_0 + ((__repair_record_temp_s0 *) temp_s0)->field_C) + 0xC, 4);
    temp_a0 = temp_v1;
    if (!(arg3 & 2))
    {
      sp2C[3] = (u32) temp_v1; temp_v1 = 0;
      sp2C[2] = func_8022BB00(temp_a0);
      temp_a3 = D_80274380 + (((unsigned) D_8024E874) * 4);
      temp_a0_2 = *temp_a3;
      sp2C[1] = temp_a0_2;
      func_8022B460(temp_a0_2, *arg2, *var_s1, temp_a3);
      func_80234DF0(sp2C[1] + 8, sp2C[2]);
      func_8022BA94(sp2C[2]);
      *arg2 = sp2C[2];
      sp40 = (u32) func_8022B5E0((((__repair_record_temp_s0 *) temp_s0)->field_0 + ((__repair_record_temp_s0 *) temp_s0)->field_C) + 8, 4);
      ((__repair_record_temp_s0 *) temp_s0)->field_C = ((__repair_record_temp_s0 *) temp_s0)->field_C + ((*var_s1) + 8);
      *var_s1 = sp2C[3];
    }
  }
  else
  {
    if ((!(((*arg2) & 0x80000000) & 0xFFu)) && (arg3 & 1))
    {
      temp_v0_2 = func_8022BB00(*var_s1);
      sp2C[0] = temp_v0_2;
      func_8022BA94(temp_v0_2);
      func_8022B460(sp2C[0], *arg2, *var_s1);
      *arg2 = sp2C[0];
    }
    ((__repair_record_temp_s0 *) temp_s0)->field_C += (*var_s1) + 8;
  }
  return sp40;
}

