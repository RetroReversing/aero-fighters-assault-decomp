s32 func_80304B04(void *, s32, f32, void *);
s32 math_mtx4Identity(void *, void *);
typedef struct 
{
  unsigned char pad_0[8];
  float field_8;
  unsigned char field_C;
  unsigned char pad_D[67];
  int field_50;
  float field_54;
} __repair_record_arg0;
void func_80291744(void *arg0)
{
  f32 __repair_fzero = 0.0f;
  void *sp18;
  void *temp_a0;
  temp_a0 = ((unsigned char *) arg0) + 0x10;
  if (((((((((((__repair_record_arg0 *) arg0)->field_C & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) != 0)
  {
    sp18 = temp_a0;
    math_mtx4Identity(temp_a0, arg0);
    func_80304B04(temp_a0, ((__repair_record_arg0 *) arg0)->field_50, ((__repair_record_arg0 *) arg0)->field_8, arg0);
    if (((__repair_record_arg0 *) arg0)->field_8 >= 1.0f)
    {
      ((__repair_record_arg0 *) arg0)->field_8 = __repair_fzero;
    }
    ((__repair_record_arg0 *) arg0)->field_8 = (f32) (((__repair_record_arg0 *) arg0)->field_8 + ((__repair_record_arg0 *) arg0)->field_54);
  }
}

