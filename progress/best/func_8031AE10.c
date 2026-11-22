void func_8031AE10(void *arg0)
{
  s32 __repair_operand;
  f32 temp_fa0;
  f32 temp_fv0;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  s16 temp_v0;
  s16 var_v0_2;
  s32 temp_lo;
  s32 var_v0;
  void *temp_v1;
  temp_v0 = *((s16 *) (((char *) arg0) + 0xE4));
  switch (temp_v0)
  {
    case 0:
      temp_fa0 = 2 * (*((f32 *) (((char *) arg0) + 0xD4)));
      if ((*((f32 *) (((char *) arg0) + 0x64))) < temp_fa0)
    {
      *((f32 *) (((char *) arg0) + 0x64)) = temp_fa0;
    }
      break;

    case 1:
      temp_fv1 = *((f32 *) (((char *) arg0) + 0xD4));
      if ((*((f32 *) (((char *) arg0) + 0x64))) < temp_fv1)
    {
      *((f32 *) (((char *) arg0) + 0x64)) = temp_fv1;
    }
      break;

  }

  var_v0 = (s32) ((*((f32 *) (((char *) arg0) + 0x64))) / (*((f32 *) (((char *) arg0) + 0xD4))));
  if ((var_v0 <= 0) != 0U)
  {
    var_v0 = 1;
  }
  *((f32 *) (((char *) arg0) + 0x64)) = (f32) (((f32) var_v0) * (*((f32 *) (((char *) arg0) + 0xD4))));
  if ((*((s16 *) (((char *) arg0) + 0x68))) > 0)
  {
    if ((*((s16 *) (((char *) arg0) + 0xE8))) >= (var_v0 - 1))
    {
      *((u8 *) (((char *) arg0) + 0xEB)) = 1;
    }
    else
    {
      *((u8 *) (((char *) arg0) + 0xEB)) = 0;
    }
    *((f32 *) (((char *) arg0) + 0xC0)) = (f32) ((*((f32 *) (((char *) arg0) + 0xC0))) + (*((f32 *) (((char *) arg0) + 0xC8))));
    temp_fv0 = *((f32 *) (((char *) arg0) + 0x5C));
    temp_fv1_2 = *((f32 *) (((char *) arg0) + 0xCC));
    if (temp_fv1_2 <= temp_fv0)
    {
      *((f32 *) (((char *) arg0) + 0xC8)) = (f32) (temp_fv0 - temp_fv1_2);
    }
    else
    {
      *((u8 *) (((char *) arg0) + 0xEA)) = 1U;
    }
    temp_fv1_3 = *((f32 *) (((char *) arg0) + 0xD4));
    *((f32 *) (((char *) arg0) + 0xCC)) = *((f32 *) (((char *) arg0) + 0x5C));
    *((f32 *) (((char *) arg0) + 0xC4)) = (f32) (temp_fv1_3 / ((f32) (*((s16 *) (((char *) arg0) + 0xE6)))));
    if (temp_fv1_3 < (*((f32 *) (((char *) arg0) + 0xC0))))
    {
      *((s16 *) (((char *) arg0) + 0xE8)) = (s16) ((*((s16 *) (((char *) arg0) + 0xE8))) + 1);
      *((f32 *) (((char *) arg0) + 0xC0)) = 0.0f;
    }
    if ((*((u8 *) (((char *) arg0) + 0xEA))) != 0)
    {
      *((s16 *) (((char *) arg0) + 0xE8)) = 1;
      *((u8 *) (((char *) arg0) + 0xEA)) = 0U;
      if ((*((s32 *) (((char *) arg0) + 0xB4))) != 0)
      {
        var_v0_2 = 0;
        if ((*((s16 *) (((char *) arg0) + 0xE6))) > 0)
        {
          do
          {
            temp_lo = var_v0_2 * 0xC;
            var_v0_2 += 1;
            __repair_operand = *((s32 *) (((char *) arg0) + 0xB4));
            temp_v1 = __repair_operand + temp_lo;
            *((f32 *) (((char *) temp_v1) + 0)) = 0.0f;
            *((f32 *) (((char *) temp_v1) + 4)) = 0.0f;
            *((f32 *) (((char *) temp_v1) + 8)) = 0.0f;
          }
          while (var_v0_2 < (*((s16 *) (((char *) arg0) + 0xE6))));
        }
      }
      if ((*((s16 *) (((char *) arg0) + 0xE4))) == 0)
      {
        *((f32 *) (((char *) arg0) + 0xC0)) = (f32) ((*((f32 *) (((char *) arg0) + 0xD0))) - (*((f32 *) (((char *) arg0) + 0xD4))));
      }
      else
      {
        *((f32 *) (((char *) arg0) + 0xC0)) = (f32) (*((f32 *) (((char *) arg0) + 0xD0)));
      }
      *((f32 *) (((char *) arg0) + 0xCC)) = *((f32 *) (((char *) arg0) + 0xD0));
      *((f32 *) (((char *) arg0) + 0xC8)) = 0.0f;
    }
    return;
  }
  *((u8 *) (((char *) arg0) + 0xEA)) = 1U;
}

