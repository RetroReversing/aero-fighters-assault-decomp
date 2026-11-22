s32 func_8021FB54();
s32 func_80221F44();
s32 func_8023413C();
void func_802CD738(void *arg0, s32 arg1)
{
  u8 temp_v0;
  temp_v0 = *((u8 *) (((char *) arg0) + 0x18));
  if (((temp_v0 & 0xFF) != 0) && (temp_v0 != 8))
  {
    func_80221F44(arg0);
    func_8021FB54(0, 0, 0x140, 0xF0);
    func_8023413C(*((s32 *) (((char *) arg0) + 0x14)));
  }
}

