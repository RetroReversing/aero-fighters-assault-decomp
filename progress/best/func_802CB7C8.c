s32 func_8021E708();
s32 func_8021E87C();
s32 func_8022FFC8();
extern char D_8032767C[];
void func_802CB7C8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
  if (func_8022FFC8(arg1, D_8032767C) != 0)
  {
    if (arg5 == ((char) (*((s32 *) ((*((s32 *) (((char *) arg0) + 0x2C))) + arg4)))))
    {
      func_8021E708(0xFF, 0xFF, 0, 0xFF);
    }
    else
    {
      func_8021E708(0x80, 0x80, 0, 0xFF);
    }
    func_8021E87C(arg2, arg3, arg1);
  }
}

