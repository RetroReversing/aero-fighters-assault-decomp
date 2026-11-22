f32 func_802CF450();
f32 func_80317E40();
f32 func_8031801C();
f32 func_80318490();
extern f32 D_8032AA78;
extern f32 D_8032AA7C;
extern f32 D_80343DB4;
extern f32 D_80343DB8;
extern f32 D_80343DBC;
extern f32 D_80343DC0;
typedef struct 
{
  unsigned char pad_0[20];
  int field_14;
  unsigned char pad_18[28];
  int field_34;
  float field_38;
  float field_3C;
  unsigned char pad_40[92];
  float field_9C;
  float field_A0;
} __repair_record_arg0;
void func_802E2D28(void *arg0, s32 arg1, f32 arg2, s32 arg3, f32 *arg4)
{
  f32 temp_fa0;
  s32 temp_v0;
  f32 temp_fv0;
  f32 temp_fa1;
  f32 sp44;
  f32 sp24;
  f32 sp38;
  f32 var_ft4;
  f32 var_ft5;
  f32 var_fv1;
  f32 var_ft0;
  f32 *__base_D_80343DB4;
  __base_D_80343DB4 = &D_80343DB4;
  temp_fv0 = func_80318490(arg0, arg3);
  sp44 = temp_fv0;
  if (temp_fv0 < 300.0f)
  {
    temp_fa0 = *arg4;
    if (temp_fa0 != 0.0f)
    {
      var_ft5 = ((int) temp_fv0) - 40.0f;
      temp_fa1 = (temp_fa0 - temp_fv0) / arg2;
      if (var_ft5 < (*__base_D_80343DB4))
      {
        var_ft5 = *__base_D_80343DB4;
      }
      var_ft4 = var_ft5 / temp_fa1;
      if (temp_fa1 < 0.0f)
      {
        var_ft4 = D_80343DB8;
      }
      if (var_ft4 < 2.0f)
      {
        sp38 = var_ft4;
        if (func_802CF450() >= 0.0f)
        {
          var_fv1 = 0.25f / var_ft4;
          ((__repair_record_arg0 *) arg0)->field_9C = (f32) (((__repair_record_arg0 *) arg0)->field_9C + var_fv1);
        }
        else
        {
          if (1)
          {
          }
          if (1)
          {
          }
          if (1)
          {
          }
          var_fv1 = 0.25f / var_ft4;
          ((__repair_record_arg0 *) arg0)->field_9C = (f32) (((__repair_record_arg0 *) arg0)->field_9C - var_fv1);
        }
        sp24 = var_fv1;
        if (func_8031801C(0x3E800000, arg0, arg3) >= 0)
        {
          ((__repair_record_arg0 *) arg0)->field_A0 = (f32) (((__repair_record_arg0 *) arg0)->field_A0 + var_fv1);
        }
        else
        {
          ((__repair_record_arg0 *) arg0)->field_A0 = (f32) (((__repair_record_arg0 *) arg0)->field_A0 - var_fv1);
        }
        temp_v0 = ((__repair_record_arg0 *) arg0)->field_14;
        if (temp_v0 == 2)
        {
          ((__repair_record_arg0 *) arg0)->field_38 = (D_8032AA78 * 0.5f) + (((f32) ((__repair_record_arg0 *) arg0)->field_34) * 0.25f);
        }
        else
          if (temp_v0 == 1)
        {
          ((__repair_record_arg0 *) arg0)->field_38 = (D_8032AA7C * 0.5f) + (((f32) ((__repair_record_arg0 *) arg0)->field_34) * 0.25f);
        }
        ((__repair_record_arg0 *) arg0)->field_3C = (f32) ((((__repair_record_arg0 *) arg0)->field_38 * D_80343DBC) + D_80343DC0);
      }
    }
    *arg4 = sp44;
    return;
  }
  *arg4 = 0;
}

