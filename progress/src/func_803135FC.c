s32 func_8021BAE0(s32);
void func_803135FC(void *arg0)
{
  s32 temp_a0;
  s32 var_s1;
  void *var_s0;
  var_s0 = arg0;
  var_s1 = 0;
  do
  {
    temp_a0 = *((s32 *) (((char *) (*((void **) (((char *) var_s0) + 0x550)))) + 0x1C));
    if ((temp_a0 ^ 0) != 0xFFFF)
    {
      func_8021BAE0(temp_a0);
      *((s32 *) (((char *) (*((void **) (((char *) var_s0) + 0x550)))) + 0x1C)) = 0xFFFF;
    }
    var_s1 += 4;
    var_s0 = ((unsigned char *) var_s0) + 4;
  }
  while (var_s1 != 0xC8);
}

