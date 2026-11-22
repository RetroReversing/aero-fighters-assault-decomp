s32 alEvtqPostEvent(s32, s16 *, s32);
void func_80238B10(s32 arg0, s16 arg1)
{
  unsigned long long sp1C;
  unsigned short pad;
  volatile unsigned short sp18;
  sp18 = 0xA;
  sp1C = arg1;
  alEvtqPostEvent(arg0 + 0x48, &sp18, 0);
}

