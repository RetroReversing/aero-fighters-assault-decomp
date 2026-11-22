typedef struct 
{
  float field_0;
  float field_4;
  float field_8;
} __repair_record_temp_v1;
s32 func_8020802C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
  s32 temp_t7;
  s32 var_v0;
  void *temp_v1;
 do { var_v0 = 0; loop_1: temp_v1 = (var_v0 * 0xC) + arg0; } while (0);
  temp_t7 = (var_v0 + 1) & 0xFFFF;
  if (((((((__repair_record_temp_v1 *) temp_v1)->field_0 * arg1) + (((__repair_record_temp_v1 *) temp_v1)->field_4 * arg2)) + (((__repair_record_temp_v1 *) temp_v1)->field_8 * arg3)) + arg4) < 0.0f)
  {
    return 0;
  }
  var_v0 = temp_t7;
  if (temp_t7 >= 5)
  {
    return 1;
  }
  goto loop_1;
}
