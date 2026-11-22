/* Partial candidate from function #55834575950 in project #13; rechecked locally. */
int func_80249238(void *arg0)
{
  u8 *temp_v1;
  u8 *temp_v1_2;
  u8 temp_v0;
  s32 var_a1;
  u8 temp_v0_2;
  
  temp_v0 = *(*((u8 **) (((char *) arg0) + 8)));
  *((u8 **) (((char *) arg0) + 8)) = (u8 *) (1 + (*((u8 **) (((char *) arg0) + 8))));
  var_a1 = temp_v0;
 if (temp_v0 & 0x80) { var_a1 = temp_v0 & 0x7F;
    do
    {
      temp_v1_2 = *((u8 **) (((char *) arg0) + 8));
      temp_v0_2 = (*temp_v1_2) ^ ((*(*((u8 **) (((char *) arg0) + 8)))) * 0);
      *((u8 **) (((char *) arg0) + 8)) = (u8 *) (temp_v1_2 + 1);
      var_a1 = (var_a1 << 7) + (temp_v0_2 & 0x7F);
    }
    while (temp_v0_2 & 0x80);
  }
  return var_a1;
}
