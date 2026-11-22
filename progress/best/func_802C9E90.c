extern char D_80327014[];
extern char D_8032705C[];
extern char D_803270A4[];
extern s32 D_803270BC;
extern char D_8032AA94[];
extern char D_8032AAC8[];
void func_802C9E90(void *arg0)
{
  char *var_a1;
  s32 temp_a1;
  s32 var_a2;
  s32 var_v0;
  s32 var_v1;
  s32 var_t0;
  void *var_a3;
  *((s8 *) (((char *) arg0) + 0x18)) = 3;
  *((s8 *) (((char *) arg0) + 0x19)) = 0x10;
  *((s8 *) (((char *) arg0) + 0x1A)) = 0x10;
  *((s8 *) (((char *) arg0) + 0x1B)) = 0xF;
  *((s8 *) (((char *) arg0) + 0x1C)) = 0xF;
  *((s32 **) (((char *) arg0) + 0x20)) = D_80327014;
  *((s32 **) (((char *) arg0) + 0x24)) = D_80327014;
  *((u8 *) (((char *) arg0) + 0x89)) = (u8) ((*((u8 *) (((char *) (*((s32 **) (((char *) arg0) + 0x28)))) + 5))) + 1);
  *((s32 **) (((char *) arg0) + 0x2C)) = D_803270A4;
  if (1)
  {
  }
  if (1)
  {
  }
  if (1)
  {
  }
  *((s32 **) (((char *) arg0) + 0x28)) = D_8032705C;
  *((s8 *) (((char *) arg0) + 0x30)) = 0;
  *((s8 *) (((char *) arg0) + 0x32)) = 0xF;
  *((s8 *) (((char *) arg0) + 0x31)) = 0;
  *((s8 *) (((char *) arg0) + 0x33)) = 0xF;
  *((s8 *) (((char *) arg0) + 0x34)) = 1;
  *((s8 *) (((char *) arg0) + 0x35)) = 1;
  var_v0 = 0;
  var_a2 = 0;
  var_a3 = arg0;
  do
  {
    var_t0 = 0;
    temp_a1 = ((*((u8 *) (((char *) arg0) + 0x89))) - 1) & 0xFF;
    if (temp_a1 == 0)
    {
      var_v1 = *((s32 *) (((s8 *) D_8032AA94) + var_a2));
    }
    else
      if (temp_a1 == 1)
    {
      var_v1 = *((s32 *) (((s8 *) D_8032AAC8) + var_a2));
    }
    else
    {
      var_v1 = *((s32 *) (((s8 *) D_8032AA94) + var_a2));
    }
    *((s32 *) (((char *) var_a3) + 0x38)) = var_v1;
    var_a1 = &D_803270BC;
    loop_7:
    if ((*((s32 *) var_a1)) == var_v1)
    {
      *((*((s32 **) (((char *) arg0) + 0x28))) + var_v0) = var_t0 & 0xFFFFFFFFFFFFFFFFu;
    }
    else
    {
      var_t0 += 1;
      var_a1 += 4;
      if (var_t0 != 0xD)
      {
        goto loop_7;
      }
    }

    var_v0 += 1;
    var_a2 += 4;
    var_a3 = ((unsigned char *) var_a3) + 4;
  }
  while (var_v0 != 0xD);
}

