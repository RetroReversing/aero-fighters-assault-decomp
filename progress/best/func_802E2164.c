f32 func_80234AF0();
f32 func_802CF450(f32, f32);
f32 func_802D25D8(s32);
f32 func_80317E40(void *, s32);
f32 func_8031801C(void *, s32);
f32 func_803185F8(s32);
extern f32 D_8032AA78;
extern f32 D_8032AA7C;
extern f32 D_80343D70;
extern f32 D_80343D74;
extern f32 D_80343D78;
extern f32 D_80343D7C;
extern f32 D_80343D80;
typedef struct 
{
  unsigned char pad[48];
  int value;
} __repair_field_30;
void func_802E2164(void *arg0, s32 arg1, f32 arg2)
{
  f32 __repair_fzero = 0.0f;
  register f32 temp_fa1;
  f32 sp34;
  f32 sp38;
  f32 sp2C;
  f32 sp20;
  f32 sp3C;
  f32 temp_fa1_2;
  f32 temp_ft3;
  f32 temp_ft5;
  s32 var_v0;
  register f32 temp_fv0_2;
  s32 temp_v0;
  s32 var_v1;
  register f32 temp_fv0;
  f32 temp_fv1;
  sp3C = func_803185F8(*((s32 *) (((char *) arg0) + 0xD8)));
  temp_v0 = *((s32 *) (((char *) arg0) + 0x14));
  temp_fa1 = func_80317E40(arg0, *((s32 *) (((char *) arg0) + 0xD8)));
  if ((*((s32 *) (((char *) arg0) + 0x14))) == 2)
  {
    *((f32 *) (((char *) arg0) + 0x38)) = (f32) ((D_8032AA78 * 0.5f) + (((f32) ((__repair_field_30 *) arg0)->value) * 0.25f));
  }
  else
    if ((*((s32 *) (((char *) arg0) + 0x14))) == 1)
  {
    *((f32 *) (((char *) arg0) + 0x38)) = (f32) ((D_8032AA7C * 0.5f) + (((f32) ((__repair_field_30 *) arg0)->value) * 0.25f));
  }
  *((f32 *) (((char *) arg0) + 0x3C)) = (f32) (((*((f32 *) (((char *) arg0) + 0x38))) * D_80343D70) + D_80343D74);
  sp34 = ((*((f32 *) (((char *) arg0) + 0x118))) - sp3C) / arg2;
  *((f32 *) (((char *) arg0) + 0x118)) = sp3C;
  sp38 = temp_fa1;
  *((f32 *) (((char *) arg0) + 0x10C)) = func_802CF450(*((f32 *) (((char *) arg0) + 0xB0)), temp_fa1);
  if ((*((u8 *) (((char *) arg0) + 0x104))) != 0)
  {
    if (((sp3C - 1) < ((sp34 * 2.0) - 1)) || (sp3C < 200.0f))
    {
      *((s32 *) (((char *) arg0) + 0x40)) = 0;
      temp_ft3 = (func_80234AF0() - 0.5f) * 400.0f;
      *((u8 *) (((char *) arg0) + 0x104)) = 0U;
      *((f32 *) (((char *) arg0) + 0x5CC)) = (f32) (1000.0f + temp_ft3);
      *((f32 *) (((char *) arg0) + 0x9C)) = __repair_fzero;
      return;
    }
    var_v0 = 0;
    do
    {
      if ((*((f32 *) (((char *) arg0) + 0x10C))) < D_80343D78)
      {
        var_v0 = 1;
      }
      var_v1 = -var_v0;
      if (((f32) var_v0) > 0.0f)
      {
        var_v1 = var_v0;
      }
    }
    while (0);
    if (var_v1)
    {
      *((s32 *) (((char *) arg0) + 0x40)) = 1;
      temp_fa1_2 = -func_8031801C(arg0, *((s32 *) (((char *) arg0) + 0xD8)));
      *((f32 *) (((char *) arg0) + 0x114)) = func_802CF450(*((f32 *) (((char *) arg0) + 0xB4)), temp_fa1_2);
      sp20 = temp_fa1_2;
      *((f32 *) (((char *) arg0) + 0xA0)) = temp_fa1_2;
      if (sp20 > 1.0f)
      {
        *((f32 *) (((char *) arg0) + 0xA0)) = 1.0f;
      }
      else
        if ((*((f32 *) (((char *) arg0) + 0xA0))) < (-1.0f))
      {
        *((f32 *) (((char *) arg0) + 0xA0)) = -1.0f;
      }
    }
    else
    {
      *((s32 *) (((char *) arg0) + 0x40)) = 0;
      *((f32 *) (((char *) arg0) + 0x5CC)) = (f32) (*((f32 *) (((char *) arg0) + 0xAC)));
    }
    sp2C = (func_802CF450(*((f32 *) (((char *) arg0) + 0x110)), sp38) * arg2) + ((*((f32 *) (((char *) arg0) + 0x10C))) * ((0, 5.0f)));
    temp_fv0 = func_802D25D8(*((s32 *) (((char *) arg0) + 0xC)));
    *((f32 *) (((char *) arg0) + 0x110)) = sp38;
    temp_fv1 = (-sp2C) / temp_fv0;
    *((f32 *) (((char *) arg0) + 0x9C)) = temp_fv1;
    if (temp_fv1 > 1.0f)
    {
      *((f32 *) (((char *) arg0) + 0x9C)) = 1.0f;
      return;
    }
    if ((*((f32 *) (((char *) arg0) + 0x9C))) < (-1.0f))
    {
      *((f32 *) (((char *) arg0) + 0x9C)) = -1.0f;
    }
  }
  else
  {
    *((f32 *) (((char *) arg0) + 0x9C)) = __repair_fzero;
    if ((((func_80234AF0() - 0.5f) * 1000.0f) + 2000.0f) < sp3C)
    {
      temp_fv0_2 = (-(*((f32 *) (((char *) arg0) + 0x10C)))) * (2.0f * 1.0f);
      *((f32 *) (((char *) arg0) + 0x9C)) = temp_fv0_2;
      if (temp_fv0_2 > 1.0f)
      {
        *((f32 *) (((char *) arg0) + 0x9C)) = (0, 1.0f);
      }
      else
        if ((*((f32 *) (((char *) arg0) + 0x9C))) < (-1.0f))
      {
        *((f32 *) (((char *) arg0) + 0x9C)) = -1.0f;
      }
      temp_ft5 = (func_80234AF0() - 0.5f) * D_80343D7C;
      *((f32 *) (((char *) arg0) + 0x98)) = (f32) ((temp_ft5 + D_80343D80) * (*((f32 *) (((char *) arg0) + 0x8C))));
      *((u8 *) (((char *) arg0) + 0x104)) = 1U;
    }
  }
}

