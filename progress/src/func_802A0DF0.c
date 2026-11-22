s32 func_8021BAE0(s32);
void func_802A0DF0(void *arg0)
{
  char *__repair_addr;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 var_s1;
  void *var_s0;
  if (0)
  {
  }
  __repair_addr = (char *) (*((void **) (0x14 + ((char *) arg0))));
  do
  {
 do { do { *((s32 *) (((char *) __repair_addr) + 0x7168)) = -1; temp_a0 = *((s32 *) (((char *) arg0) + 0x5AB0)); if ((*((s32 *) (((char *) arg0) + 0x5AB0))) != 0xFFFF) { func_8021BAE0(*((s32 *) (((char *) arg0) + 0x5AB0))); *((s32 *) (((char *) arg0) + 0x5AB0)) = 0xFFFF; } temp_a0_2 = *((s32 *) (((char *) arg0) + 0x5AB4)); if ((*((s32 *) (((char *) arg0) + 0x5AB4))) != 0xFFFF) { func_8021BAE0(temp_a0_2); *((s32 *) (((char *) arg0) + 0x5AB4)) = 0xFFFF; } var_s0 = arg0; var_s1 = 0; do { temp_a0_3 = *((s32 *) (((char *) var_s0) + 0x5AB8)); if ((temp_a0_3 ^ 0) != 0xFFFF) { func_8021BAE0(temp_a0_3); *((s32 *) (((char *) var_s0) + 0x5AB8)) = 0xFFFF; } var_s1 += 4; var_s0 = ((unsigned char *) ((0, var_s0))) + 4; } while (var_s1 != 0x10); } while (0); } while (0);
  }
  while (0 * 0);
}
