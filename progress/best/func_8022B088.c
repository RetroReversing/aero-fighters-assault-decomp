s32 func_80204530();
extern u32 D_80275F84;
extern char D_80349530[];
extern s32 func_802000A0;
void func_8022B088(void)
{
  u32 *__base_D_80275F84;
  s32 *var_v1_6;
  u32 var_a1;
  u32 __repair_phase_var_a1;
  void *temp_v0;
  __base_D_80275F84 = &D_80275F84;
  if (((u32) (*__base_D_80275F84)) < 0x800DA801U)
  {
    __repair_phase_var_a1 = *__base_D_80275F84;
    if (((u32) (*__base_D_80275F84)) < 0x800DA800U)
    {
      do
      {
        __repair_phase_var_a1 += 4;
        *((s32 *) (((char *) __repair_phase_var_a1) + (-4))) = 0;
      }
      while (__repair_phase_var_a1 < 0x800DA800U);
    }
  }
  else
  {
    __repair_phase_var_a1 = func_80204530() + 0x80000400;
    if (__repair_phase_var_a1 < 0x800DA800U)
    {
      do
      {
        __repair_phase_var_a1 += 4;
        *((s32 *) (((char *) __repair_phase_var_a1) + (-4))) = 0;
      }
      while (__repair_phase_var_a1 < 0x800DA800U);
    }
  }
  var_a1 = *__base_D_80275F84;
  if ((var_a1 >= 0x80125801U) && (var_a1 < ((u32) (&func_802000A0))))
  {
    u32 __block___repair_phase_var_a1;
    __block___repair_phase_var_a1 = var_a1;
    if (var_a1 < ((u32) (&func_802000A0)))
    {
      do
      {
        __block___repair_phase_var_a1 += 4;
        *((s32 *) (((char *) __block___repair_phase_var_a1) + (-4))) = 0;
      }
      while (__block___repair_phase_var_a1 < ((u32) (&func_802000A0)));
      var_a1 = *__base_D_80275F84;
    }
  }
  else
    if ((&func_802000A0) != NULL)
  {
    __repair_phase_var_a1 = 0x80125800;
    do
    {
      __repair_phase_var_a1 += 4;
      *((s32 *) (((char *) __repair_phase_var_a1) + (-4))) = 0;
    }
    while (__repair_phase_var_a1 < (((u32) (&func_802000A0)) & 0xFFu));
    var_a1 = *__base_D_80275F84;
  }
  temp_v0 = D_80349530 + 1;
  if (var_a1 >= ((u32) temp_v0))
  {
    __repair_phase_var_a1 = var_a1;
    if (var_a1 < 0x803DA800U)
    {
      do
      {
        __repair_phase_var_a1 += 4;
        *((s32 *) (((char *) __repair_phase_var_a1) + (-4))) = 0;
      }
      while (__repair_phase_var_a1 < 0x803DA800U);
    }
  }
  else
  {
    var_v1_6 = D_80349530;
    if (1)
    {
    }
    if (1)
    {
    }
    if (1)
    {
    }
    if (1)
    {
    }
    if (1)
    {
    }
    if (1)
    {
    }
    if (temp_v0 != NULL)
    {
      do
      {
        var_v1_6 += 1;
        *((s32 *) (((char *) var_v1_6) + (-4))) = 0;
      }
      while (((u32) var_v1_6) < 0x803DA800U);
    }
  }
}

