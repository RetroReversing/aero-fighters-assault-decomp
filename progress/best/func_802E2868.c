f32 func_80234AF0();
f32 func_802CF450(f32, f32);
f32 func_802D2554(s32);
f32 func_802D25D8(s32);
f32 func_802D25E0(s32);
f32 func_803173C4(void *, s32);
f32 func_80317500(s32, void *);
f32 func_80317E40(void *, s32);
f32 func_8031801C(void *, s32);
f32 func_80318194(s32);
s32 func_80318350(s32);
f32 func_80318490(void *, s32);
extern f32 D_8032AA78;
extern f32 D_8032AA7C;
extern f32 D_80343D98;
extern f32 D_80343D9C;
extern f32 D_80343DA0;
extern f32 D_80343DA4;
extern f32 D_80343DA8;
extern f32 D_80343DAC;
extern f32 D_80343DB0;
typedef struct 
{
  unsigned char pad[44];
  int value;
} __repair_field_2C;
void func_802E2868(void *arg0, f32 arg1, f32 arg2)
{
  f32 __repair_fzero = 0.0f;
  f32 temp_fv0;
  f32 sp3C;
  f32 sp40;
  register f32 sp34;
  f32 sp24;
  f32 temp_fa1;
  f32 sp44;
  f32 var_fv1;
  register f32 var_fa0;
  f32 temp_fv0_4;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv0_3;
  f32 temp_fv0_2;
  s32 temp_v0;
  temp_v0 = *((s32 *) (((char *) arg0) + 0x14));
  if (temp_v0 == 2)
  {
    *((f32 *) (((char *) arg0) + 0x38)) = (f32) ((D_8032AA78 * 0.5f) + (((f32) ((__repair_field_2C *) arg0)->value) * 0.25f));
  }
  else
    if (temp_v0 == 1)
  {
    *((f32 *) (((char *) arg0) + 0x38)) = (f32) ((D_8032AA7C * 0.5f) + (((f32) ((__repair_field_2C *) arg0)->value) * 0.25f));
  }
  *((f32 *) (((char *) arg0) + 0x3C)) = (f32) (((*((f32 *) (((char *) arg0) + 0x38))) * D_80343D98) + D_80343D9C);
  sp44 = func_80318490(arg0, *((s32 *) (((char *) arg0) + 0xD8)));
  temp_fv0 = func_80317E40(arg0, *((s32 *) (((char *) arg0) + 0xD8)));
  sp40 = temp_fv0;
  *((f32 *) (((char *) arg0) + 0x118)) = sp44;
  *((f32 *) (((char *) arg0) + 0x10C)) = func_802CF450(*((f32 *) (((char *) arg0) + 0xB0)), temp_fv0);
  *((s32 *) (((char *) arg0) + 0x40)) = 1;
  temp_fa1 = -func_8031801C(arg0, *((s32 *) (((char *) arg0) + 0xD8)));
  sp3C = temp_fa1;
  *((f32 *) (((char *) arg0) + 0x114)) = func_802CF450(*((f32 *) (((char *) arg0) + 0xB4)), temp_fa1);
  *((f32 *) (((char *) arg0) + 0xA0)) = sp3C;
  if (sp3C > 1.0f)
  {
    *((f32 *) (((char *) arg0) + 0xA0)) = 1.0f;
  }
  else
    if ((*((f32 *) (((char *) arg0) + 0xA0))) < (-1.0f))
  {
    *((f32 *) (((char *) arg0) + 0xA0)) = -1.0f;
  }
  sp34 = ((*((f32 *) (((char *) arg0) + 0x10C))) * 5.0f) + (func_802CF450(*((f32 *) (((char *) arg0) + 0x110)), temp_fv0) * arg2);
  temp_fv0_2 = func_802D25D8(*((s32 *) (((char *) arg0) + 0xC)));
  *((f32 *) (((char *) arg0) + 0x110)) = temp_fv0;
  temp_fv1 = (-sp34) / temp_fv0_2;
  *((f32 *) (((char *) arg0) + 0x9C)) = temp_fv1;
  if (temp_fv1 > 1.0f)
  {
    *((f32 *) (((char *) arg0) + 0x9C)) = 1.0f;
  }
  else
    if ((*((f32 *) (((char *) arg0) + 0x9C))) < (-1.0f))
  {
    *((f32 *) (((char *) arg0) + 0x9C)) = -1.0f;
  }
  if (func_80317500(0x3F800000, arg0) < D_80343DA0)
  {
    if (sp44 < 400.0f)
    {
      *((f32 *) (((char *) arg0) + 0x98)) = (f32) ((*((f32 *) (((char *) arg0) + 0x88))) + ((1.0f - (*((f32 *) (((char *) arg0) + 0x38)))) * 100.0f));
    }
    else
      if (sp44 < 500.0f)
    {
      *((f32 *) (((char *) arg0) + 0x98)) = (f32) (func_80318194(*((s32 *) (((char *) arg0) + 0xD8))) + ((1.0f - (*((f32 *) (((char *) arg0) + 0x38)))) * 100.0f));
    }
    else
    {
      *((f32 *) (((char *) arg0) + 0x98)) = (f32) ((func_80318194(*((s32 *) (((char *) arg0) + 0xD8))) + (D_80343DA4 * sp44)) + ((1.0f - (*((f32 *) (((char *) arg0) + 0x38)))) * 100.0f));
    }
  }
  else
    if (sp44 < 300.0f)
  {
    *((f32 *) (((char *) arg0) + 0x98)) = (f32) (((1.0f - (*((f32 *) (((char *) arg0) + 0x38)))) * 100.0f) + ((0, *((f32 *) (((char *) arg0) + 0x88)))));
  }
  else
  {
    *((f32 *) (((char *) arg0) + 0x98)) = func_802D2554(*((s32 *) (((char *) arg0) + 0xC)));
  }
  temp_fv0_3 = *((f32 *) (((char *) arg0) + 0x8C));
  if (temp_fv0_3 < (*((f32 *) (((char *) arg0) + 0x98))))
  {
    *((f32 *) (((char *) arg0) + 0x98)) = temp_fv0_3;
  }
  if ((*((f32 *) (((char *) arg0) + 0x938))) < arg1)
  {
    *((f32 *) (((char *) arg0) + 0x938)) = (f32) (arg1 + 3.0f);
    var_fv1 = ((*((f32 *) (((char *) arg0) + 0x8C))) / (func_802D25E0(func_80318350(*((s32 *) (((char *) arg0) + 0xD8)))) * D_80343DA8)) - 1.0f;
    if (var_fv1 < 0.0f)
    {
      var_fv1 = __repair_fzero;
    }
    sp24 = var_fv1;
    if (func_80234AF0() < (var_fv1 * (*((f32 *) (((char *) arg0) + 0x38)))))
    {
      temp_fv0_4 = func_803173C4(arg0, *((s32 *) (((char *) arg0) + 0xD8)));
      temp_fv1_2 = *((f32 *) (((char *) arg0) + 0x10C));
      if (temp_fv1_2 > 0.0f)
      {
        var_fa0 = temp_fv1_2;
      }
      else
      {
        var_fa0 = -temp_fv1_2;
      }
      if (((var_fa0 > D_80343DAC) && (temp_fv0_4 < D_80343DB0)) && (sp44 < 600.0f))
      {
        *((s32 *) (((char *) arg0) + 0x29C)) = 7;
        *((s8 *) (((char *) arg0) + 0x934)) = 1;
        *((f32 *) (((char *) arg0) + 0x9C)) = __repair_fzero;
        *((s32 *) (((char *) arg0) + 0x40)) = 0;
        *((f32 *) (((char *) arg0) + 0x98)) = (f32) (*((f32 *) (((char *) arg0) + 0x8C)));
        *((f32 *) (((char *) arg0) + 0x5CC)) = 1000.0f;
      }
    }
  }
}

