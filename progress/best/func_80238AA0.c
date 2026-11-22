s32 alEvtqPostEvent(s32, s16 *, s32);
void func_80238AA0(s32 arg0, s8 arg1)
{
  s8 sp25;
  s32 sp24;
  s32 sp23;
  s8 sp21;
  volatile char sp20;
  s16 sp18;
  sp18 = 7;
  sp20 = 0xFF;
  sp21 = 0x51;
  sp23 = (s8) (((s32) (arg1 & 0xFF0000)) >> 0x10);
  sp24 = (s8) (((s32) (arg1 & 0xFF00)) >> 8);
  sp25 = arg1;
  alEvtqPostEvent(arg0 + ((long long) 0x48), &sp18, 0);
}

