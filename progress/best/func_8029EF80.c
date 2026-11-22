s32 func_8031F780();
void func_8029EF80(void *arg0)
{
  s32 var_s0;
  void *var_s1;
  *((s16 *) (((char *) arg0) + 0x1390)) = var_s0 * 0;
  var_s0 = 0;
  var_s1 = arg0;
  do
  {
    func_8031F780(var_s1);
    var_s0 += 0x1DC;
    if (0)
    {
    }
    var_s1 = ((unsigned char *) var_s1) + 0x1DC;
  }
  while (var_s0 != 0x1298);
}

