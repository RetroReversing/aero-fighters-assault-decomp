s32 func_80223FC4(s32, s32);
s32 func_80228DE0(s32, s32 *);
s32 math_mtx4Identity(s32 *);
s32 func_8022A0D0(f32, s32 *, s32, f32, f32);
f32 func_8022AA40(f32);
s32 func_8030DC9C(void *, s32);
extern f32 D_803468B0;
extern f32 D_803468B4;
typedef struct { unsigned char pad_0[20]; int field_14; unsigned char pad_18[156]; float field_B4; float field_B8; } __repair_record_arg0;
s32 func_8030D9DC(void *arg0, f32 arg1, f32 arg2)
{
  f32 temp_fv0;
  f32 var_fv1;
  unsigned int sp34;
  f32 var_fa0;
  f32 temp_fv0_2;
  if (func_80223FC4(0, 2) != 0)
  {
    func_8030DC9C(arg0, 4);
  }
  if (func_80223FC4(0, 1) != 0)
  {
    func_8030DC9C(arg0, 2);
  }
  if (func_80223FC4(0, 4) != 0)
  {
    func_8030DC9C(arg0, 3);
  }
  if (func_80223FC4(0, 8) != 0)
  {
    func_8030DC9C(arg0, 1);
  }
  temp_fv0 = ((__repair_record_arg0*)arg0)->field_B8;
  ((__repair_record_arg0*)arg0)->field_B4 = (f32) ((((__repair_record_arg0*)arg0)->field_B4) + ((((__repair_record_arg0*)arg0)->field_B8) * arg2));
  if (temp_fv0 == (-1.0f))
  {
    if ((((__repair_record_arg0*)arg0)->field_B4) < 0.f)
    {
      ((__repair_record_arg0*)arg0)->field_B8 = 1.0f;
      ((__repair_record_arg0*)arg0)->field_B4 = 0.0f;
    }
  }
  else
    if ((((__repair_record_arg0*)arg0)->field_B4) > 1.0f)
  {
    ((__repair_record_arg0*)arg0)->field_B4 = 1.0f;
    ((__repair_record_arg0*)arg0)->field_B8 = -1.0f;
  }
  math_mtx4Identity(&sp34);
  if (arg1 <= 1.0f)
  {
    temp_fv0_2 = func_8022AA40(1.0f - arg1);
    var_fv1 = (temp_fv0_2 * 130.0f) - 130.0f;
    var_fa0 = (temp_fv0_2 * 15.0f) + D_803468B0;
  }
  else
  {
    var_fv1 = -130.0f;
    var_fa0 = D_803468B4;
  }
  func_8022A0D0(var_fa0, &sp34, 0, var_fv1, var_fa0);
  func_80228DE0((((__repair_record_arg0*)arg0)->field_14) + 0x4DD4, &sp34);
  return 1;
}

