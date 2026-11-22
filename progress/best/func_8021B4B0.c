extern unsigned short D_80280BE6;
extern unsigned short D_80280BD0;
s32 func_80228DE0();
s32 func_8022A210(f32, s32, f32, f32, f32);
s32 func_80231A24();
extern void *D_8024E710;
extern char D_80253290[];
extern char D_802532BC[];
extern char D_802532DC[];
extern char D_80253304[];
extern s32 D_8025C3E0;
extern s32 D_8025C3E4;
extern char D_80280BC0[];
typedef struct 
{
  unsigned char pad_0[8];
  void *field_8;
  unsigned char pad_C[20];
  float field_20;
} __repair_record_temp_a2;
void func_8021B4B0(s32 arg0, s32 arg1, s32 arg2)
{
  void *sp2C;
  u32 sp28;
  s32 sp20;
  s32 sp1C;
  f32 temp_fv0;
  f32 temp_fv1;
  s32 temp_a2;
  char temp_t9;
  register u16 temp_v0;
  register void *temp_v0_4;
  void *temp_t0;
  if (((s32) D_80280BE6) < arg0)
  {
    func_80231A24(D_80253290, arg0);
    return;
  }
  temp_t0 = (arg0 * 0x24) + D_8025C3E0;
  sp1C = (s32) temp_v0;
  temp_v0 = *((u16 *) (((char *) temp_t0) + 0));
  if (((s32) temp_v0) >= ((s32) D_80280BD0))
  {
    func_80231A24(D_802532BC, (s32) temp_v0);
    return;
  }
  temp_a2 = *((s32 *) ((*((s32 *) (((char *) D_8024E710) + 0x1C))) + (temp_v0 * 4)));
  if (temp_a2 == 0)
  {
    func_80231A24(D_802532DC, sp1C, temp_a2, arg0);
    return;
  }
  temp_t9 = arg1 * 2;
  if (arg1 >= ((s32) (*((u8 *) (((char *) (*((__repair_record_temp_a2 *) temp_a2)).field_8) + 4)))))
  {
    func_80231A24(D_80253304, arg1, sp1C, arg0);
    return;
  }
  sp2C = temp_t0;
  sp28 = temp_a2;
  sp20 = temp_t9;
  func_80228DE0(D_8025C3E4 + (((*((s32 *) ((*((s32 *) (((char *) temp_t0) + 4))) + temp_t9))) << 2) << 4), arg2, temp_a2, arg0);
  switch (sp20)
  {
    case 0:
    {
      temp_fv1 = ((__repair_record_temp_a2 *) temp_a2)->field_20;
      if (temp_fv1 != 1.0f)
      {
        temp_fv0 = 1.0f / temp_fv1;
        func_8022A210(1.0f, D_8025C3E4 + (((*((s32 *) ((*((s32 *) (((char *) temp_t0) + 4))) + sp20))) << 2) << 4), temp_fv0, temp_fv0, temp_fv0);
      }
    }
      break;

    default:
    {
      sp2C = D_8025C3E4 + ((*((s32 *) ((*((s32 *) (((char *) temp_t0) + 4))) + sp20))) << 6);
      *((f32 *) (((char *) sp2C) + 0x30)) = (f32) ((*((f32 *) (((char *) sp2C) + 0x30))) * ((__repair_record_temp_a2 *) temp_a2)->field_20);
      sp2C = D_8025C3E4 + ((*((s32 *) ((*((s32 *) (((char *) temp_t0) + 4))) + sp20))) << 6);
      *((f32 *) (((char *) sp2C) + 0x34)) = (f32) ((*((f32 *) (((char *) sp2C) + 0x34))) * ((__repair_record_temp_a2 *) temp_a2)->field_20);
      temp_v0_4 = D_8025C3E4 + ((*((s32 *) ((*((s32 *) (((char *) temp_t0) + 4))) + sp20))) << 6);
      *((f32 *) (((char *) temp_v0_4) + 0x38)) = (f32) ((*((f32 *) (((char *) temp_v0_4) + 0x38))) * ((__repair_record_temp_a2 *) temp_a2)->field_20);
    }
      break;

  }

}

