s32 func_8021BAE0();
void func_802C78E0(void *arg0)
{
  char *__repair_addr;
  __repair_addr = (char *) (*((void **) (((char *) arg0) + 0x14)));
  *((s32 *) (((char *) __repair_addr) + 0x7168)) = -1;
  if ((*((s32 *) (((char *) arg0) + ((((-1) * 0, (unsigned long long) 0x94CC)) & 0xFFu)))) != 0xFFFF)
  {
    func_8021BAE0(*((s32 *) (((char *) arg0) + 0x94D0)));
    *((s32 *) (((char *) arg0) + (0x94D0 & 0xFFu))) = 0xFFFF;
  }
}

