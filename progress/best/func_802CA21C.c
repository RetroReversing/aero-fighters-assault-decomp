extern s32 D_8032700C;
extern s8 D_80327054;
extern s32 D_8032709C;
extern s32 D_8032AA8C;
extern s32 D_80348B50;
void func_802CA21C(void *arg0)
{
  s32 var_v0;
  s8 *temp_t1;
  *((u8 *) (((char *) arg0) + 0x18)) = 2;
  *((u8 *) (((char *) arg0) + 0x19)) = 8;
  *((u8 *) (((char *) arg0) + 0x1B)) = 0;
  *((s32 **) (((char *) arg0) + 0x20)) = &D_8032700C;
  *((s8 **) (((char *) arg0) + 0x28)) = &D_80327054;
  *((s32 **) (((char *) arg0) + 0x2C)) = &D_8032709C;
  *((u8 *) (((char *) arg0) + 0x30)) = 0;
  *((u8 *) (((char *) arg0) + 0x32)) = 7;
  *((u8 *) (((char *) arg0) + 0x34)) = 1;
  D_80327054 = 0;
  var_v0 = 1;
  do
  {
    (*((s8 **) (((char *) arg0) + 0x28)))[var_v0] = 0;
    *((u8 *) (((char *) (&(*((s8 **) (((char *) arg0) + 0x28)))[var_v0 & 0xFFFFFFFFFFFFFFFF])) + 1)) = 0;
    *((u8 *) (((char *) (&(*((s8 **) (((char *) arg0) + 0x28)))[var_v0])) + 2)) = 0;
    temp_t1 = &(*((s8 **) (((char *) arg0) + 0x28)))[var_v0];
    var_v0 += 4;
    *((u8 *) (((char *) temp_t1) + 3)) = 0;
  }
  while (var_v0 != 0xD);
  *((u8 *) (((char *) (*((s8 **) (((char *) arg0) + 0x28)))) + 0)) = ((*((u8 *) (((char *) (&D_80348B50)) + 0x4A))) & 0xFF) - 1;
  *((u8 *) (((char *) (*((s8 **) (((char *) arg0) + 0x28)))) + 1)) = (u8) (*((u8 *) (((char *) (&D_80348B50)) + 0x4B)));
  *((u8 *) (((char *) (*((s8 **) (((char *) arg0) + 0x28)))) + 2)) = (u8) (*((u8 *) (((char *) (&D_80348B50)) + 0x4E)));
  *((u8 *) (((char *) (*((s8 **) (((char *) arg0) + 0x28)))) + 3)) = (u8) (*((u8 *) (((char *) (&D_80348B50)) + 0x4F)));
  *((u8 *) (((char *) (*((s8 **) (((char *) arg0) + 0x28)))) + 4)) = (s8) D_8032AA8C;
  *((u8 *) (((char *) arg0) + 0x89)) = 1;
}

