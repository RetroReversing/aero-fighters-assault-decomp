s32 func_802AA418(s32, s32, s32);
s32 func_802FFDC0(s32);
f32 func_80318348(s32);
void func_802FD654(void *arg0)
{
  s32 sp18;
  f32 temp_fv0;
  s32 temp_a0;
  temp_a0 = ((unsigned char *) arg0) + 0x70;
  sp18 = temp_a0;
  func_802FFDC0(temp_a0);
  func_802AA418(*((s32 *) (((char *) arg0) + 0x14)), sp18, 0);
  temp_fv0 = func_80318348(temp_a0);
  *((f32 *) (((char *) arg0) + 0x9B00)) = temp_fv0;
  *((f32 *) (((char *) arg0) + (0x9B04 & 0xFF))) = (f32) (temp_fv0 - 100.0f);
}

