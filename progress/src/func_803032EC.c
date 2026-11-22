s32 func_80231A24(s32 *);
volatile unsigned char func_80302908(s32, s32, s32, s32);
extern s32 D_8032A4A4;
s32 func_803032EC(void *arg0)
{
  s32 temp_a1;
  s32 var_s1;
  void *var_s0;
  if ((*((s32 *) (((char *) arg0) + 0x4C))) == 0)
  {
    func_80231A24(&D_8032A4A4);
    return 0;
  }
  var_s1 = 0;
  var_s0 = arg0;
  if (((s32) (*((u8 *) (((char *) arg0) + 0x48)))) > 0)
  {
    do
    {
      temp_a1 = *((s32 *) (((char *) var_s0) + 0));
      if ((temp_a1 ^ 0) != 0xFF)
      {
        func_80302908(*((s32 *) (((char *) arg0) + 0x4C)), temp_a1, *((s32 *) (((char *) var_s0) + 0x30)), *((s32 *) (((char *) var_s0) + 0x18)));
      }
      var_s1 += 1;
      var_s0 = ((unsigned char *) var_s0) + 4;
    }
    while (var_s1 < ((s32) (*((u8 *) (((char *) arg0) + 0x48)))));
  }
  return 1;
}

