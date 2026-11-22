f32 func_8022AA40(f32, f32);
f32 func_8023499C();
typedef struct 
{
  unsigned char pad_0[4];
  float field_4;
  float field_8;
  float field_C;
} __repair_record_arg0;
void func_802DA584(void *arg0, f32 *arg1, f32 *arg2)
{
  register f32 temp_ft1;
  f32 temp_fa1;
  register f32 var_fv1;
  register f32 sp20;
  f32 sp24;
  f32 sp1C;
  temp_ft1 = func_8023499C() * ((__repair_record_arg0 *) arg0)->field_4;
  sp24 = temp_ft1;
  temp_fa1 = ((func_8023499C() - 0.5f) * 2) * temp_ft1;
  *arg1 = ((0, temp_fa1)) + ((__repair_record_arg0 *) arg0)->field_8;
  sp20 = temp_fa1;
  if (((func_8023499C() - 0.5f) * ((int) 2.0f)) >= 0.0f)
  {
    var_fv1 = 1.0f;
  }
  else
  {
    var_fv1 = -1.0f;
  }
  sp1C = var_fv1;
  *arg2 = (func_8022AA40((sp24 * temp_ft1) - (temp_fa1 * temp_fa1), temp_fa1) * var_fv1) + ((__repair_record_arg0 *) arg0)->field_C;
}

