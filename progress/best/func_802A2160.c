s32 func_80231A24();
s32 func_802A4F34();
extern char D_80324B68[];
extern char D_80324B88[];
s32 func_802A2160(s32 arg0, u8 *arg1, s32 arg2, u8 *arg3, s32 arg4)
{
  int __repair_literal;
  int *__repair_home2 = &arg2;
  s32 sp30;
  u8 temp_t1;
  u8 var_t0;
  u8 sp2F;
  s32 *sp24;
  s32 *temp_a0;
  register s32 temp_t6;
  s32 var_t2;
  void *temp_v1;
  __repair_rows:
  {
    temp_t1 = *arg1;
  }

  if (0)
  {
    goto __repair_rows;
  }
  temp_t6 = (*__repair_home2) & 0xFF;
  var_t0 = 0;
  var_t2 = 0;
  __repair_literal = 0;
  if (((unsigned char) ((s32) temp_t1)) > __repair_literal)
  {
    if (1 != 0)
    {
    }
    for (;;)
    {
      temp_v1 = *((s32 *) (arg0 + (((unsigned) var_t0) * 4)));
      if ((temp_v1 != NULL) && ((*((u8 *) (((char *) temp_v1) + 0xF1))) == ((*((u8 *) (((char *) temp_v1) + 0xF1))) * 0)))
      {
        sp2F = var_t0;
        var_t2 = 1;
      }
      else
      {
        sp30 = (var_t0 + 1) & 0xFF;
        dummy_label_9038:
        ;

        ;
        ;
        ;
        ;
        ;
        var_t0 = (u8) sp30;
        if (sp30 < ((s32) temp_t1))
        {
          continue;
        }
      }
      break;
    }

  }
  if (var_t2 != 0)
  {
    var_t2 = (*((s32 *) (arg0 + (sp2F * 4)))) ^ 0;
  }
  else
    if (((s32) var_t0) >= temp_t6)
  {
    do
    {
      func_80231A24((sp30 = 0, D_80324B68), arg4, temp_t1 + 1);
    }
    while (0);
    var_t2 = 0;
    *arg3 += 1 & 0xFFFFFFFFFFFFFFFF;
  }
  else
  {
    temp_a0 = arg0 + (var_t0 * 4);
    sp24 = temp_a0;
    func_802A4F34(temp_a0);
    temp_t6 = *temp_a0;
    var_t2 = temp_t6;
    if (!temp_t6)
    {
      sp30 = temp_t6; temp_t6 = 0;
      var_t2 = sp30;
      func_80231A24(D_80324B88, 4, arg4);
    }
    else
    {
      *arg1 += 1;
    }
  }
  return var_t2;
}

