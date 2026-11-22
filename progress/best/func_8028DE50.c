void func_8028DE50(void *arg0, u8 arg1, void *arg2)
{
  s32 temp_t9;
  s32 var_v0;
  void *var_a1;
  void *var_v1;
  *((u8 *) (((char *) arg0) + 0x1B5)) = arg1;
  var_v0 = 0;
  if (((arg1 & 0xFFFF) & 0xFF) > 0)
  {
    var_v1 = ((unsigned char *) arg0) + 0x138;
    var_a1 = arg2;
    do
    {
      var_v0 += 1;
      var_v1 = ((unsigned char *) var_v1) + 0xC;
      *((s32 *) (((char *) var_v1) + (-0xC))) = (s32) (*((s32 *) (((char *) var_a1) + 0)));
      temp_t9 = *((s32 *) (((char *) var_a1) + 4));
      var_a1 = ((unsigned char *) var_a1) + 0xC;
      *((s32 *) (((char *) var_v1) + (-8))) = temp_t9;
      *((s32 *) (((char *) var_v1) + (-4))) = (s32) (*((s32 *) (((char *) var_a1) + (-4))));
    }
    while (var_v0 < ((s32) (*((u8 *) (((char *) arg0) + 0x1B5)))));
  }
}

