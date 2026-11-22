f32 func_80223F4C();
s32 func_802B17F4();
extern char D_80327804[];
extern char D_80327808[];
extern char D_8032780C[];
extern char D_80327810[];
extern char D_80327814[];
extern s32 D_80327818;
extern f32 D_80342A60;
extern f32 D_80342A64;
extern f32 D_80342A68;
s32 func_802CFEC8(s32 arg0)
{
  f32 sp24;
  u8 *sp18;
  f32 var_fv0;
  s32 temp_v1_2;
  s16 *temp_v0;
  s16 *temp_v0_2;
  s16 temp_a0;
  s32 temp_v1;
  f32 var_fv1;
  u8 *var_a2;
  s32 var_a1;
  if ((*(D_80327810 + arg0)) != 0)
  {
    var_fv1 = func_80223F4C(arg0, arg0);
  }
  else
  {
    var_fv1 = func_80223F4C(arg0, 0) * (-1.0f);
  }
  sp18 = (void *) arg0; sp18 = (void *) (((char *) sp18) + ((s32) D_80327814));
  if (var_fv1 > 0.0f)
  {
    var_fv0 = var_fv1;
  }
  else
  {
    var_fv0 = -var_fv1;
  }
  if ((var_fv0 < D_80342A60) && ((*sp18) != 0))
  {
    *sp18 = 0;
  }
  var_a2 = arg0 + D_80327814;
  var_a1 = *var_a2;
  if ((D_80342A64 < var_fv1) && (var_a1 == 0))
  {
    *var_a2 = 1;
    sp18 = var_a2;
    arg0 = arg0;
    sp24 = var_fv1;
    do
    {
      func_802B17F4(D_80327818, var_a1, var_a2, arg0);
    }
    while (0);
    var_a1 = *var_a2;
  }
  if ((var_fv1 < D_80342A68) && (var_a1 == 0))
  {
    *var_a2 = 2;
    sp18 = var_a2;
    arg0 = arg0;
    func_802B17F4(D_80327818, var_a1, var_a2, arg0);
    var_a1 = *var_a2;
  }
  if (var_a1 == 1)
  {
    temp_v1 = arg0 * 2;
    temp_v0_2 = temp_v1 + D_80327808;
    *var_a2 = 3;
    *temp_v0_2 += 1;
    temp_a0 = *((s16 *) (D_80327804 + temp_v1));
    if (temp_a0 == (*temp_v0_2))
    {
      if ((*(D_8032780C + arg0)) != 0)
      {
        *temp_v0_2 = 0;
      }
      else
      {
        *temp_v0_2 = temp_a0 - 1;
      }
    }
    var_a1 = *var_a2;
  }
  temp_v1_2 = arg0 * 2;
  temp_v0 = temp_v1_2 + D_80327808;
  if (var_a1 == 2)
  {
    *temp_v0 -= 1;
    *var_a2 = 3;
    if ((*temp_v0) == (-1))
    {
      if ((*(D_8032780C + arg0)) != 0)
      {
        *temp_v0 = (*((s16 *) (D_80327804 + temp_v1_2))) - 1;
      }
      else
      {
        *temp_v0 = 0;
      }
 dummy_label_467943: ;
    }
  }
  return (*temp_v0) & 0xFF;
}
