/* identical to func_80272400 in Fighter's Destiny (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80015720 in F1 WORLD GRAND PRIX (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8008A7A0 in F1 POLE POSITION 64 (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_800C7FC0 in Diddy Kong Racing (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8003F250 in DARK RIFT (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8031C950 in CRUIS'N WORLD (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80065DF0 in AEROGAUGE (local match library) (matched), with its names changed by decompdecomp */
s32 alEvtqPostEvent(s32, s16 *, s32);
void func_80237F20(s32 arg0, s32 arg1)
{
  unsigned long long pad;
  struct 
  {
    s16 f18;
    s32 f1C;
  } __repair_frame;
  __repair_frame.f18 = 0xE;
  __repair_frame.f1C = arg1;
  do
  {
    alEvtqPostEvent(arg0 + 0x48, &__repair_frame, 0);
  }
  while (0);
}

