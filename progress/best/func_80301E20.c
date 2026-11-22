s32 func_80302074();
s32 func_80302B48();
s32 func_80301E20(s32 arg0, void *arg1)
{
  long temp_v0;
  temp_v0 = *((u8 *) (((char *) arg1) + 4));
  if (temp_v0 == 0xFF)
  {
    return 0;
  }
  if (((s32) temp_v0) >= 0x80)
  {
    func_80302B48();
    func_80302074(arg0 ^ 0);
    return 0;
  }
  if ((*((f32 *) (((char *) arg1) + 0))) == (((*((s32 *) (arg0 + (temp_v0 << 5)))) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu))
  {
    return 1;
  }
  return 0;
}

