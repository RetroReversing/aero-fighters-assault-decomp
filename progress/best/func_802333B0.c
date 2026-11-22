f32 func_80222E50();
extern f32 D_80255350;
extern f32 D_80255354;
extern u16 D_80280BF4;
extern s32 D_80283940;
extern s32 D_80283948;
extern s32 D_8028394C;
extern u8 D_80283954;
void func_802333B0(void)
{
  f32 temp_fv1;
  void *var_v0;
  register f32 *__base_D_80255350;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 temp_fv1_5;
  register f32 temp_fv1_6;
  s32 var_a0;
  s32 var_a1;
  register f32 temp_fv0;
  u16 *__base_D_80280BF4;
  __base_D_80280BF4 = &D_80280BF4;
  if (D_80283954)
  {
    temp_fv0 = func_80222E50();
    var_a1 = 0;
    var_a0 = (*__base_D_80280BF4) + D_80283948;
    if (var_a0 > 0)
    {
      __repair_rows:
      {
        if (var_a1 < ((s32) (*__base_D_80280BF4)))
        {
          var_v0 = (var_a1 * 0x1C) + (*((s32 *) 0x80283948));
        }
        else
        {
          var_v0 = *((s32 *) ((D_8028394C + ((var_a1 * 4) & 0xFFu)) + (-((*(&D_80280BF4)) * 4))));
        }
        var_a1 += 1;
        if ((*((u8 *) (((char *) var_v0) + 0x1A))) != 0)
        {
          if ((*((u8 *) (((char *) var_v0) + 0x18))) != 3)
          {
            *((f32 *) (((char *) var_v0) + 0x10)) += (*((f32 *) (((char *) var_v0) + 8))) * temp_fv0;
          }
          if ((*((u8 *) (((char *) var_v0) + 0x18))) == 0)
          {
            if ((*((f32 *) (((char *) var_v0) + 8))) > 0.0f)
            {
              temp_fv1 = *((f32 *) (((char *) var_v0) + 0x10));
              if (temp_fv1 >= 1.0f)
              {
                *((f32 *) (((char *) var_v0) + 0x10)) = (f32) (temp_fv1 - 1.0f);
              }
            }
            if ((*((f32 *) (((char *) var_v0) + 8))) < 0.0f)
            {
              temp_fv1_2 = *((f32 *) (((char *) var_v0) + 0x10));
              if (temp_fv1_2 <= 0.0f)
              {
                *((f32 *) (((char *) var_v0) + 0x10)) = (f32) (temp_fv1_2 + 1.0f);
              }
            }
          }
          else
            if ((*((u8 *) (((char *) var_v0) + 0x18))) == 2)
          {
            temp_fv1_3 = *((f32 *) (((char *) var_v0) + 0x10));
            if (temp_fv1_3 >= 1.0f)
            {
              *((f32 *) (((char *) var_v0) + 0x10)) = (f32) D_80255354;
              *((f32 *) (((char *) var_v0) + 8)) = (f32) (-(*((f32 *) (((char *) var_v0) + 8))));
            }
            else
              if (temp_fv1_3 <= 0.0f)
            {
              __base_D_80255350 = &D_80255350;
              *((f32 *) (((char *) var_v0) + 0x10)) = (f32) (*__base_D_80255350);
              *((f32 *) (((char *) var_v0) + 8)) = (f32) (-(*((f32 *) (((char *) var_v0) + 8))));
            }
          }
          else
            if ((*((u8 *) (((char *) var_v0) + 0x18))) == 1)
          {
            if (((*((f32 *) (((char *) var_v0) + 8))) > 0.0f) && ((*((f32 *) (((char *) var_v0) + 0x10))) >= 1.0f))
            {
              *((f32 *) (((char *) var_v0) + 0x10)) = 1.0f;
              *((u8 *) (((char *) var_v0) + 0x1A)) = 0U;
            }
            if (((*((f32 *) (((char *) var_v0) + 8))) < 0.0f) && ((*((f32 *) (((char *) var_v0) + 0x10))) <= 0.0f))
            {
              *((f32 *) (((char *) var_v0) + 0x10)) = 0.0f;
              *((u8 *) (((char *) var_v0) + 0x1A)) = 0U;
            }
          }
          if ((*((u8 *) (((char *) var_v0) + 0x19))) != 3)
          {
            *((f32 *) (((char *) var_v0) + 0x14)) = (*((f32 *) (((char *) var_v0) + 0x14))) + ((*((f32 *) (((char *) var_v0) + 0xC))) * temp_fv0);
          }
          if ((*((u8 *) (((char *) var_v0) + 0x19))) == 0)
          {
            if ((*((f32 *) (((char *) var_v0) + 0xC))) > 0.0f)
            {
              temp_fv1_4 = *((f32 *) (((char *) var_v0) + 0x14));
              if (temp_fv1_4 >= 1.0f)
              {
                *((f32 *) (((char *) var_v0) + 0x14)) = (f32) (temp_fv1_4 - 1.0f);
              }
            }
            if ((*((f32 *) (((char *) var_v0) + 0xC))) < 0.0f)
            {
              temp_fv1_5 = *((f32 *) (((char *) var_v0) + 0x14));
              if (temp_fv1_5 <= 0.0f)
              {
                *((f32 *) (((char *) var_v0) + 0x14)) = (f32) (temp_fv1_5 + 1.0f);
              }
            }
          }
          else
            if ((*((u8 *) (((char *) var_v0) + 0x19))) == 2)
          {
            temp_fv1_6 = *((f32 *) (((char *) var_v0) + 0x14));
            if (temp_fv1_6 >= 1.0f)
            {
              *((f32 *) (((char *) var_v0) + 0x14)) = (f32) D_80255354;
              *((f32 *) (((char *) var_v0) + 0xC)) = (f32) (-(*((f32 *) (((char *) var_v0) + 0xC))));
            }
            else
              if (temp_fv1_6 <= 0.0f)
            {
              *((f32 *) (((char *) var_v0) + 0x14)) = (f32) (*__base_D_80255350);
              *((f32 *) (((char *) var_v0) + 0xC)) = (f32) (-(*((f32 *) (((char *) var_v0) + 0xC))));
            }
          }
          else
            if ((*((u8 *) (((char *) var_v0) + 0x19))) == 1)
          {
            if (((*((f32 *) (((char *) var_v0) + 0xC))) > 0.0f) && ((*((f32 *) (((char *) var_v0) + 0x14))) >= 1.0f))
            {
              *((f32 *) (((char *) var_v0) + 0x14)) = 1.f;
              *((u8 *) (((char *) var_v0) + 0x1A)) = 0U;
            }
            if (((*((f32 *) (((char *) var_v0) + 0xC))) < 0.0f) && ((*((f32 *) (((char *) var_v0) + 0x14))) <= 0.0f))
            {
              *((f32 *) (((char *) var_v0) + 0x14)) = 0.0f;
              *((u8 *) (((char *) var_v0) + 0x1A)) = 0U;
            }
          }
          var_a0 = (*__base_D_80280BF4) + D_80283948;
        }
      }

      if (var_a1 < var_a0)
      {
        goto __repair_rows;
      }
    }
  }
}

