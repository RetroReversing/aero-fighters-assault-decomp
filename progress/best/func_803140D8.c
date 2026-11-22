s32 func_80302900(s32);
s32 func_80302908(s32, s32, s32, s32);
s32 func_803029FC(s32);
void func_803140D8(void *arg0, unsigned long long arg1)
{
  int *__repair_home1 = &arg1;
  s32 sp1C;
  s32 temp_t6;
  temp_t6 = (*__repair_home1) & 0xFF;
  sp1C = (*__repair_home1) & 0xFF;
  if (temp_t6 == 1)
  {
    func_80302900((*((s32 *) (((char *) arg0) + 0x14))) + 0x8F4);
    func_80302908((*((s32 *) (((char *) arg0) + 0x14))) + 0x8F4, 0x87, 0x3D4CCCCD, 0x3F800000);
    func_803029FC((*((s32 *) (((char *) arg0) + 0x14))) + 0x8F4);
  }
}

