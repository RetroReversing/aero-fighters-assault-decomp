s32 alEvtqPostEvent(s32, s16 *, s32);
void func_80238B50(s32 arg0)
{
  volatile long long pad;
  volatile s32 scratch;
  struct 
  {
    s16 f18;
  } __repair_frame;
  do
  {
    __repair_frame.f18 = 0x11;
  }
  while (0);
  alEvtqPostEvent(arg0 + 0x48, &__repair_frame, 0);
}

