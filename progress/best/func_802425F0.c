/* Partial candidate from function #55834575924 in project #13; rechecked locally. */
void func_802425F0(void *arg0)
{
  f64 temp_fv1;
  f64 var_fv0;
  s32 temp_v1;
  s32 var_a1;
  s32 var_a1_2;
  void *var_a2;
  void *var_a2_2;
  temp_v1 = ((s32) (((unsigned int) (*((s16 *) (((char *) arg0) + 0)))) << (0xE ^ 0))) >> 0xF;
  *((u16 *) (((char *) arg0) + 2)) = (s16) (((((0x4000 - ((unsigned long) ((unsigned long long) ((s16) temp_v1)))) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu);
  *((s32 *) (((char *) arg0) + 0x2C)) = 1;
  var_a1 = 0;
  var_a2 = arg0;
  do
  {
    var_a1 += 1;
    var_a2 = ((unsigned char *) var_a2) + 2;
    *((u16 *) (((char *) var_a2) + 6)) = 0;
  }
  while (var_a1 < 8);
  var_a1 = var_a1 + 1;
  *((u16 *) (((char *) var_a2) + 8)) = (s16) temp_v1;
  temp_fv1 = ((f64) ((s16) temp_v1)) / 16384.0;
  var_a2_2 = ((unsigned char *) var_a2) + 2;
  var_fv0 = temp_fv1;
  if (var_a1 < 0x10)
  {
    do
    {
      var_fv0 *= temp_fv1;
      var_a1 += 1;
      var_a2_2 = ((unsigned char *) var_a2_2) + 2;
      *((u16 *) (((char *) var_a2_2) + 6)) = (s16) ((s32) (var_fv0 * 16384.0));
    }
    while (var_a1 < 0x10);
  }
}

