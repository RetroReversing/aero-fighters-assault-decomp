s32 func_802AA418(s32, s32, s32);
s32 func_802B1DE8(s32);
s32 func_802B21A4(s32, s32, s32, s32, f32);
s32 func_80318C1C(s32, volatile long long);
void func_802B2310(void *arg0)
{
  s32 temp_s0;
  temp_s0 = ((unsigned char *) arg0) + 0x70;
  func_802B1DE8(temp_s0);
  func_80318C1C(temp_s0, 0);
  func_802B21A4(temp_s0, 0, 0, 0, 125.0f);
  func_802B21A4(temp_s0, 1, 0, 0x44FA0000, -350.0f);
  func_802B21A4(temp_s0, 2, 0, 0x455AC000, -2000.0f);
  func_802AA418(*((s32 *) (((char *) arg0) + 0x14)), temp_s0, 0);
}

