s32 func_802C679C();
s32 func_802C6980();
extern char D_803467E0[];
void func_8029EDC0(void *arg0, s32 arg1)
{
  if (arg0 != NULL)
  {
    *((s32 **) (((char *) arg0) + 0x6C)) = D_803467E0;
    func_802C6980(arg0);
    if ((((((((((arg1 & 1) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu)
    {
      func_802C679C(arg0);
    }
  }
}

