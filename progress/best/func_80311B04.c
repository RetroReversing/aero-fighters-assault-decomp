s32 func_802C679C();
s32 func_802E9E14();
s32 func_80320C08();
s32 func_80320CB0();
extern char D_80346EA0[];
void func_80311B04(void *arg0, s32 arg1)
{
  if (arg0 != NULL)
  {
    *((s32 **) (((char *) arg0) + 0x7C)) = D_80346EA0;
    func_80320CB0();
    func_802E9E14(arg0, (long long) 2);
    func_80320C08(arg0);
    if (arg1 & 1)
    {
      func_802C679C(arg0);
    }
  }
}

