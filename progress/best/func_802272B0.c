extern int D_80280B8C;
s32 func_80225424();
s32 func_8022B780();
u8 *func_8022B948();
extern char D_80280B68[];
typedef struct 
{
  unsigned char pad_0[24];
  unsigned char field_18;
  unsigned char field_19;
} __repair_record_temp_v0;
u8 *func_802272B0(s32 arg0)
{
  s32 var_s2;
  register s32 temp_lo;
  u8 *temp_s0;
  s32 var_s1;
  u8 sp3F;
  u8 *temp_v0;
  temp_v0 = func_8022B948(0x2C, 4);
  func_80225424(temp_v0, &arg0, 0x18);
  func_80225424(temp_v0 + 0x18, &arg0, 1);
  func_80225424(temp_v0 + 0x19, &arg0, 1);
  func_80225424(temp_v0 + 0x1C, &arg0, 4);
  func_80225424(temp_v0 + 0x20, &arg0, 4);
  func_80225424(temp_v0 + 0x24, &arg0, 4);
  temp_lo = ((__repair_record_temp_v0 *) temp_v0)->field_18 * ((__repair_record_temp_v0 *) temp_v0)->field_19;
 *((u8 **) (((char *) temp_v0) + 0x28)) = func_8022B948(temp_lo * 0x4C, 4); var_s1 = 0; if (temp_lo > 0) { var_s2 = 0; do { temp_s0 = &(*((u8 **) (((char *) temp_v0) + 0x28)))[var_s2];
      func_80225424(&sp3F, &arg0, 1);
      if (sp3F == 0)
      {
        func_8022B780(temp_s0, 0, 0x4C);
      }
      else
      {
        func_80225424(temp_s0, &arg0, 0x40);
        func_80225424(temp_s0 + 0x48, &arg0, 1);
        *((s32 *) (((char *) temp_s0) + 0x44)) = 0;
        func_80225424(temp_s0 + 0x4A, &arg0, 2);
        *((s32 *) (((char *) temp_s0) + 0x40)) = (s32) (*((s32 *) (D_80280B8C + ((*((u16 *) (((char *) temp_s0) + 0x4A))) * 4))));
      }
      var_s1 += 1;
      var_s2 += 0x4C;
    }
    while (var_s1 != temp_lo);
  }
  return temp_v0;
}
