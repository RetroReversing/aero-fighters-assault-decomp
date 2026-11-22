s32 func_8021BAE0(s32);
s32 func_80320CFC(void *, u8);
void func_802E9330(void *arg0, u8 arg1)
{
  func_80320CFC(arg0, arg1);
  switch ((u32) ((unsigned long long) ((((((arg1 & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF)))
  {
    case 0:
      if ((*((s16 *) (((char *) arg0) + 0x80))) == 3)
    {
      func_8021BAE0(*((s32 *) (((char *) arg0) + 4)));
      *((s32 *) (((char *) arg0) + 4)) = 0xFFFF;
    }

 dummy_label_740724: ;
    case 1:
 if (1) { } if (1) { }
      return;

  }

}
