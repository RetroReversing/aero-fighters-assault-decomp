s32 func_8022B780(s32, s32, s32, s32 *);
s32 func_8022BA58(s32, s32 *);
extern s32 D_8025C600;
extern s32 D_80280BC0;
void func_8021DD10(void)
{
  s32 temp_v0;
  s32 var_a0;
  s32 var_v1;
  void *temp_v0_2;
  temp_v0 = func_8022BA58((*((u16 *) (((char *) (&D_80280BC0)) + 0x36))) * 0x18, &D_80280BC0);
  D_8025C600 = temp_v0;
  func_8022B780((unsigned long long) temp_v0, 0, ((0, *((u16 *) (((char *) (&D_80280BC0)) + 0x36)))) * 0x18, &D_80280BC0);
  var_v1 = 0;
  if (((s32) (*((u16 *) (((char *) (&D_80280BC0)) + 0x36)))) > 0)
  {
    var_a0 = 0;
    do
    {
      var_v1 += 1;
      temp_v0_2 = var_a0 + D_8025C600;
      *((s8 *) (((char *) temp_v0_2) + 0)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 1)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 2)) = 0;
      *((f32 *) (((char *) temp_v0_2) + 4)) = 0.0f;
      *((s8 *) (((char *) temp_v0_2) + 8)) = 0;
      *((s32 *) (((char *) temp_v0_2) + 0xC)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 0x10)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 0x11)) = 0;
      *((f32 *) (((char *) temp_v0_2) + 0x14)) = 1.0f;
      var_a0 += 0x18;
    }
    while (var_v1 < ((s32) (*((u16 *) (((char *) (&D_80280BC0)) + 0x36)))));
  }
}

