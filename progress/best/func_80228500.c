s32 func_80231C58(s32, s32 *, s32 *, void *);
extern u16 D_8024E874;
extern void *D_80273B90;
extern s32 D_80275A30;
extern s32 D_80275A38;
extern s32 D_80275A50;
extern s32 D_80275A5C;
extern s32 D_80280C00;
typedef struct 
{
  float field_0;
  float field_4;
  float field_8;
  unsigned char pad_C[12];
  float field_18;
  float field_1C;
  float field_20;
} __repair_record_arg0;
void func_80228500(void *arg0)
{
  s32 *__base_D_80275A5C;
  s32 temp_t9;
  s32 var_a2;
  s32 var_t0;
  s32 var_t1;
  void *temp_a1;
  void *temp_v0;
  __base_D_80275A5C = &D_80275A5C;
  if (func_80231C58(*__base_D_80275A5C, "LIGHT_NLAMBS", &D_80280C00, arg0) == 0)
  {
    var_a2 = (s32) ((((*((f32 *) (((char *) (&D_80275A38)) + 0))) * ((__repair_record_arg0 *) arg0)->field_18) + ((__repair_record_arg0 *) arg0)->field_0) * 255.0f);
    var_t0 = (s32) ((((*((f32 *) (((char *) (&D_80275A38)) + 4))) * ((__repair_record_arg0 *) arg0)->field_1C) + ((__repair_record_arg0 *) arg0)->field_4) * 255.0f);
    goto dummy_label_792260;
    dummy_label_792260:
    ;

    ;
    var_t1 = (s32) ((((*((f32 *) (((char *) (&D_80275A38)) + 8))) * ((__repair_record_arg0 *) arg0)->field_20) + ((__repair_record_arg0 *) arg0)->field_8) * 255.0f);
    if (var_a2 < 0)
    {
      var_a2 = 0;
    }
    else
      if (var_a2 >= 0x100)
    {
      var_a2 = 0xFF;
    }
    if (var_t0 < 0)
    {
      var_t0 = 0;
    }
    else
      if (0x100 <= var_t0)
    {
      var_t0 = 0xFF;
    }
    if (var_t1 < 0)
    {
      var_t1 = 0;
    }
    else
      if (var_t1 >= 0x100)
    {
      var_t1 = 0xFF;
    }
    temp_t9 = (*__base_D_80275A5C) * 8;
    *__base_D_80275A5C += 1;
    temp_v0 = temp_t9 + (*((&D_80275A50) + (D_8024E874 * 4)));
    *((s8 *) (((char *) temp_v0) + 4)) = (s8) var_a2;
    *((s8 *) (((char *) temp_v0) + 0)) = (s8) var_a2;
    *((s8 *) (((char *) temp_v0) + 5)) = (s8) var_t0;
    *((s8 *) (((char *) temp_v0) + 1)) = (s8) var_t0;
    *((s8 *) (((char *) temp_v0) + 6)) = (s8) var_t1;
    *((s8 *) (((char *) temp_v0) + 2)) = (s8) (var_t1 & 0xFFFFFFFFFFFFFFFF);
    temp_a1 = D_80273B90;
    D_80273B90 = ((unsigned char *) temp_a1) + 8;
    *((void **) (((char *) temp_a1) + 4)) = temp_v0;
    *((s32 *) (((char *) temp_a1) + 0)) = (s32) ((((((D_80275A30 * 2) + 0x86) & 0xFF) << 0x10) | 0x03000000) | 0x10);
  }
}

