/* identical to func_80299788 (matched), with its names changed by decompdecomp */
extern s32 D_80341FE0;

void func_8028D238(void *arg0, s32 arg1, s32 arg2);
void func_80308654(void *arg0, s32 arg1);
void func_802C679C(s32 arg0);

void func_802C9624(s32 arg0, s32 arg1)
{
  if (arg0 != 0)
  {
    *(s32 *)((s8 *)arg0 + 0x6C) = (s32)&D_80341FE0;
    func_8028D238((void *)((s8 *)arg0 + 0x70), 2, arg0);
    func_80308654((void *)arg0, 0);
    if (arg1 & 1)
    {
      func_802C679C(arg0);
    }
  }
}
