s32 func_8021BAE0();
s32 func_80317D20();
void func_8028BBD8(void *arg0)
{
  s32 temp_a0;
  s32 temp_a0_2;
  func_80317D20();
  temp_a0 = *((s32 *) (((char *) arg0) + 4));
  if ((temp_a0 ^ 0) != 0xFFFF)
  {
    func_8021BAE0(temp_a0);
    *((s32 *) (((char *) arg0) + 4)) = 0xFFFF;
  }
  temp_a0_2 = *((s32 *) (((char *) arg0) + 0x2D4));
  if ((*((s32 *) (((char *) arg0) + 0x2D4))) != 0xFFFF)
  {
    func_8021BAE0((*((s32 *) (((char *) arg0) + 0x2D4))));
    *((s32 *) (((char *) arg0) + 0x2D4)) = 0xFFFF;
  }
  *((s8 *) (((char *) arg0) + 8)) = 0;
}

