extern unsigned short D_80280BE6;
extern unsigned short D_80280BD0;
s32 func_80228DE0();
s32 func_8022A210(void *, f32, f32, f32);
s32 func_80231A24();
extern void *D_8024E710;
extern char D_8025333C[];
extern char D_80253368[];
extern s32 D_8025C3E0;
extern s32 D_8025C3E4;
extern char D_80280BC0[];
typedef struct { unsigned short field_0; unsigned char pad_2[2]; int field_4; } __repair_record_temp_v1;
void func_8021B6D4(s32 arg0, s32 arg1, void *arg2)
{
  char *__repair_addr;
  register void *sp2C;
  register s32 temp_t1;
  register void *temp_v1;
  f32 temp_fv0;
  register unsigned sp24;
  if (D_80280BE6 < arg0)
  {
    func_80231A24(D_8025333C);
    return;
  }
  temp_v1 = (arg0 * 0x24) + D_8025C3E0;
  temp_t1 = arg1 * 2;
  if (((s32) (((__repair_record_temp_v1*)temp_v1)->field_0)) >= ((s32) D_80280BD0))
  {
    func_80231A24(D_80253368, arg0, arg1);
    return;
  }
  sp2C = temp_v1;
  arg1 = temp_t1;
  __repair_addr = (char *) ((((__repair_record_temp_v1*)temp_v1)->field_4) + temp_t1);
  func_80228DE0(arg2, D_8025C3E4 + ((*((s32 *) __repair_addr)) << 6), temp_t1 ^ 0, arg0);
  sp2C = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x1C))) + ((((__repair_record_temp_v1*)temp_v1)->field_0) * 4)));
  if (arg1 == 0)
  {
    temp_fv0 = *((f32 *) (((char *) sp2C) + 0x20));
    if (temp_fv0 != 1.0f)
    {
      func_8022A210(arg2, temp_fv0, temp_fv0, temp_fv0);
    }
  }
  else
  {
    *((f32 *) (((char *) arg2) + 0x30)) = (f32) ((*((f32 *) (((char *) arg2) + 0x30))) / (*((f32 *) (((char *) sp2C) + 0x20))));
    *((f32 *) (((char *) arg2) + 0x34)) = (f32) ((*((f32 *) (((char *) arg2) + 0x34))) / (*((f32 *) (((char *) sp2C) + 0x20))));
    *((f32 *) (((char *) arg2) + 0x38)) = (f32) ((*((f32 *) (((char *) arg2) + 0x38))) / (*((f32 *) (((char *) sp2C) + 0x20))));
  }
}

