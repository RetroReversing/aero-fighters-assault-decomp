s32 func_8022B780(s32, s32, s32, s32 *);
s32 func_8022BA58(s32, s32 *);
extern s32 D_80280BC0;
extern volatile unsigned int D_80283950;
void func_80233D90(void)
{
  int __repair_constant = 0xFF;
  s32 temp_v0;
  s32 var_a0;
  s32 var_a1;
  void *temp_v0_2;
  if (D_80283950 == 0)
  {
    temp_v0 = func_8022BA58(((0, *((u16 *) (((char *) (&D_80280BC0)) + 0x2C)))) * 0x64, &D_80283950);
    D_80283950 = temp_v0;
    func_8022B780(temp_v0, 0, ((0, *((u16 *) (((char *) (&D_80280BC0)) + 0x2C)))) * 0x64, &D_80283950);
  }
  var_a0 = 0;
  var_a1 = 0;
  if (((s32) (*((u16 *) (((char *) (&D_80280BC0)) + 0x2C)))) > 0)
  {
    do
    {
      var_a0 += 1;
      temp_v0_2 = var_a1 + D_80283950;
      *((s16 *) (((char *) temp_v0_2) + 6)) = 0;
      *((s16 *) (((char *) temp_v0_2) + 0xA)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 0)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 1)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 2)) = 0;
      *((s8 *) (((char *) temp_v0_2) + 0xE)) = __repair_constant;
      *((s8 *) (((char *) temp_v0_2) + 0xF)) = __repair_constant;
      *((s8 *) (((char *) temp_v0_2) + 0x10)) = __repair_constant;
      *((s8 *) (((char *) temp_v0_2) + 0x11)) = __repair_constant;
      *((s16 *) (((char *) temp_v0_2) + 0xC)) = 0xFFF;
      *((s32 *) (((char *) temp_v0_2) + 0x14)) = 0;
      *((s32 *) (((char *) temp_v0_2) + 0x5C)) = 0;
      *((s32 *) (((char *) temp_v0_2) + 0x60)) = 0;
      *((s16 *) (((char *) temp_v0_2) + 4)) = (s16) (*((s16 *) (((char *) temp_v0_2) + 6)));
      *((s16 *) (((char *) temp_v0_2) + 8)) = (s16) (*((s16 *) (((char *) temp_v0_2) + 0xA)));
      var_a1 += 0x64;
    }
    while (var_a0 < ((s32) (*((u16 *) (((char *) (&D_80280BC0)) + 0x2C)))));
  }
}

