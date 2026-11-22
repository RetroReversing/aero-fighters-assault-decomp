s32 func_8021BAE0(s32);
void func_80311DD8(void *arg0)
{
  s32 temp_a0;
  long long pad;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 var_s0;
  void *var_s1;
  void *var_s1_2;
  func_8021BAE0(*((s32 *) (((char *) arg0) + 4)));
  temp_a0 = *((s32 *) (((char *) arg0) + 0x280));
  if ((*((s32 *) (((char *) arg0) + 0x280))) != 0xFFFF)
  {
    func_8021BAE0(temp_a0);
  }
  var_s0 = 0;
  var_s1 = arg0;
  if ((*((s32 *) (((char *) arg0) + 0x300))) > 0)
  {
    do
    {
      if (((*((s32 *) (((char *) var_s1) + 0x290))) ^ 0) != 0xFFFF)
      {
        func_8021BAE0((*((s32 *) (((char *) var_s1) + 0x290))));
      }
      var_s0 += 1;
      var_s1 = ((unsigned char *) var_s1) + 4;
    }
    while (var_s0 < (*((s32 *) (((char *) arg0) + 0x300))));
    var_s0 = 0;
  }
  var_s1_2 = arg0;
  if ((*((s32 *) (((char *) arg0) + 0x370))) > 0)
  {
    do
    {
      if ((*((s32 *) (((char *) var_s1_2) + 0x304))) != 0xFFFF)
      {
        func_8021BAE0((*((s32 *) (((char *) var_s1_2) + 0x304))));
      }
      var_s0 += 1;
      var_s1_2 = ((unsigned char *) var_s1_2) + 4;
    }
    while (var_s0 < (*((s32 *) (((char *) arg0) + 0x370))));
  }
}

