extern void *D_80273B90;
extern s32 D_80275A30;
extern s32 D_80275A44;
extern u16 D_80280BFE;
void func_80228698(void)
{
  s32 __repair_operand;
  s32 var_a1;
  s32 var_v0;
  u8 *temp_v1;
  u8 temp_t5;
  void *temp_a0;
  void *temp_a0_2;
  var_v0 = D_80275A30;
  temp_a0 = D_80273B90;
  D_80273B90 = ((unsigned char *) temp_a0) + 8;
 *((s32 *) (((char *) temp_a0) + 0)) = 0xBC000002; *((s32 *) (((char *) temp_a0) + 4)) = (s32) ((var_v0 << 5) + 0x80000020);
  var_a1 = 0;
  if (((s32) D_80280BFE) > 0)
  {
    do
    {
      __repair_operand = D_80275A44;
      temp_v1 = ((((((((((var_a1 << 5) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) + __repair_operand;
      var_a1 += 1;
      temp_t5 = *((u8 *) (((char *) temp_v1) + 0));
      if (temp_t5 != 0)
      {
        temp_a0_2 = D_80273B90;
        D_80273B90 = ((unsigned char *) temp_a0_2) + 8;
        *((s32 *) (((char *) temp_a0_2) + 0)) = (s32) ((((((var_v0 * 2) + 0x84) & 0xFF) << 0x10) | 0x03000000) | 0x10);
        var_v0 -= 1;
        *((s32 *) (((char *) temp_a0_2) + 4)) = (s32) (*((s32 *) (((char *) temp_v1) + 0x1C)));
      }
    }
    while (var_a1 < ((s32) D_80280BFE));
  }
}
