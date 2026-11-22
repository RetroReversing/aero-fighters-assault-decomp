s32 func_802C3084(void *, f32, volatile long long);
s32 func_802C48A0();
typedef struct 
{
  unsigned char pad_0[236];
  int field_EC;
  float field_F0;
  unsigned char pad_F4[116];
  float field_168;
} __repair_record_arg0;
void func_802C34D8(void *arg0, f32 arg1)
{
  s32 var_v0;
  var_v0 = ((__repair_record_arg0 *) arg0)->field_EC;
  if (var_v0 == 5)
  {
    func_802C48A0();
    var_v0 = ((__repair_record_arg0 *) arg0)->field_EC;
  }
  if ((var_v0 > 0) && ((((__repair_record_arg0 *) arg0)->field_F0 + ((__repair_record_arg0 *) arg0)->field_168) <= arg1))
  {
    func_802C3084(arg0, arg1, 0);
    ((__repair_record_arg0 *) arg0)->field_EC = (s32) (((__repair_record_arg0 *) arg0)->field_EC - 1);
    ((__repair_record_arg0 *) arg0)->field_F0 = arg1;
  }
}

