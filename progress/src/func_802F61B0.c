s32 func_8023413C();
s32 func_802344F4();
void func_802F61B0(void *arg0, s32 arg1)
{
  s32 sp5C[5];
  int __repair_literal;
  int *__repair_home1 = &arg1;
  char *var_s0;
  s32 temp_s3;
  s32 var_s1;
  s32 var_s2;
  temp_s3 = (*__repair_home1) & 0xFF;
  sp5C[0] = *((s32 *) (((char *) arg0) + 0x38));
  var_s0 = sp5C;
  var_s1 = 0;
  var_s2 = 0xB7;
  sp5C[1] = *((s32 *) (((char *) arg0) + 0x3C));
  sp5C[2] = *((s32 *) (((char *) arg0) + 0x40));
  sp5C[3] = *((s32 *) (((char *) arg0) + 0x44));
  sp5C[4] = *((s32 *) (((char *) arg0) + 0x48));
  __repair_literal = 0;
  if (temp_s3 > __repair_literal)
  {
    do
    {
      func_802344F4(*((s32 *) var_s0), 9, 0x14, 0xB, 1, 2, 0x9C, var_s2, 0);
      func_8023413C(*((s32 *) var_s0));
      var_s1 += 1;
      var_s0 += 4;
      var_s2 -= 0x18;
    }
    while (var_s1 != temp_s3);
  }
}

