f32 func_80234AF0();
f32 func_802CF450(f32, f32);
f32 func_80317E40();
f32 func_803185F8();
extern f32 D_8032AA78;
extern f32 D_8032AA7C;
extern f32 D_80343DC4;
extern f32 D_80343DC8;
extern f32 D_80343DCC;
extern f32 D_80343DD0;
extern f32 D_80343DD4;
extern f32 D_80343DD8;
extern f32 D_80343DDC;
typedef struct 
{
  unsigned char pad[44];
  int value;
} __repair_field_2C;
void func_802E2F58(void *arg0, s32 arg1, s32 arg2)
{
  f32 sp24;
  f32 temp_fa0;
  f32 temp_ft1;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  s32 temp_v0;
  f32 var_fv1;
  f32 var_fv1_2;
  f32 temp_fv1;
  temp_v0 = *((s32 *) (((char *) arg0) + 0x14));
  if (0)
  {
  }
  if (temp_v0 == 2)
  {
    *((f32 *) (((char *) arg0) + 0x38)) = (f32) ((D_8032AA78 * 0.5f) + (((f32) ((__repair_field_2C *) arg0)->value) * 0.25f));
  }
  else
    if (temp_v0 == 1)
  {
    *((f32 *) (((char *) arg0) + 0x38)) = (f32) ((D_8032AA7C * 0.5f) + (((f32) ((__repair_field_2C *) arg0)->value) * 0.25f));
  }
  *((f32 *) (((char *) arg0) + 0x3C)) = (f32) (((*((f32 *) (((char *) arg0) + 0x38))) * D_80343DC4) + D_80343DC8);
  *((s32 *) (((char *) arg0) + 0x40)) = 0;
  sp24 = func_803185F8(arg0, *((s32 *) (((char *) arg0) + 0xE4)));
  *((f32 *) (((char *) arg0) + 0x10C)) = func_802CF450(*((f32 *) (((char *) arg0) + 0xB0)), func_80317E40(arg0, *((s32 *) (((char *) arg0) + 0xE4))));
  if ((*((u8 *) (((char *) arg0) + 0xFA))) != 0)
  {
    temp_fv0 = (*((f32 *) (((char *) arg0) + (0x10C & 0xFFFFFFFF)))) - (*((f32 *) (((char *) arg0) + 0xFC)));
    if ((*((f32 *) (((char *) arg0) + 0x9C))) > 0.0f)
    {
      *((f32 *) (((char *) arg0) + 0x9C)) = 1.0f;
    }
    else
    {
      *((f32 *) (((char *) arg0) + 0x9C)) = -1.0f;
    }
    if (!(sp24 < (*((f32 *) (((char *) arg0) + 0x100)))))
    {
      if (temp_fv0 > 0.0f)
      {
        var_fv1 = temp_fv0;
      }
      else
      {
        var_fv1 = -temp_fv0;
      }
      if (1)
      {
      }
      if (1)
      {
      }
      if (D_80343DCC > var_fv1)
      {
        goto block_13;
      }
    }
    else
    {
      block_13:
      *((f32 *) (((char *) arg0) + 0x9C)) = 0.0f;

      *((u8 *) (((char *) arg0) + 0xFA)) = 0U;
    }
  }
  else
    if ((((func_80234AF0() - 0.5f) * 500.0f) + D_80343DD0) < sp24)
  {
    temp_fv0_2 = *((f32 *) (((char *) arg0) + 0x10C));
    do
    {
      if (temp_fv0_2 > 0.0f)
      {
        var_fv1_2 = temp_fv0_2;
      }
      else
      {
        var_fv1_2 = -temp_fv0_2;
      }
    }
    while (0);
    if (var_fv1_2 > D_80343DD4)
    {
      *((f32 *) (((char *) arg0) + 0xFC)) = (f32) (func_80234AF0(0) - 0.5f);
      temp_fv1 = ((func_80234AF0() - 0.5f) * 1000.0f) + (*((f32 *) (((char *) arg0) + 0xAC)));
      *((f32 *) (((char *) arg0) + 0x5CC)) = temp_fv1;
      temp_fa0 = *((f32 *) (((char *) arg0) + 0x5C8));
      if (temp_fa0 > temp_fv1)
      {
        *((f32 *) (((char *) arg0) + 0x5CC)) = temp_fa0;
      }
      temp_fv0_3 = *((f32 *) (((char *) arg0) + 0x5D0));
      if (temp_fv0_3 < (*((f32 *) (((char *) arg0) + 0x5CC))))
      {
        *((f32 *) (((char *) arg0) + 0x5CC)) = temp_fv0_3;
      }
      *((f32 *) (((char *) arg0) + 0x9C)) = 1.0f;
      temp_ft1 = (func_80234AF0(temp_fa0) - 0.5f) * D_80343DD8;
      *((f32 *) (((char *) arg0) + 0x98)) = (f32) ((temp_ft1 + D_80343DDC) * (*((f32 *) (((char *) arg0) + 0x8C))));
      if (func_80234AF0() > 0.5f)
      {
        *((f32 *) (((char *) arg0) + 0x9C)) = (f32) ((*((f32 *) (((char *) arg0) + 0x9C))) * (-1.0f));
      }
      *((u8 *) (((char *) arg0) + 0xFA)) = 1U;
    }
  }
}

