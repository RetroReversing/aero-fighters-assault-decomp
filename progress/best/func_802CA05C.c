extern volatile short D_80327000;
extern s32 D_80327048;
extern s32 D_80327090;
void func_802CA05C(void *arg0)
{
  *((s8 *) (((char *) arg0) + 0x18)) = 4;
  *((s8 *) (((char *) arg0) + 0x1B)) = 0;
  *((s8 *) (((char *) arg0) + 0x1C)) = 2;
  *((s8 *) (((char *) arg0) + 0x19)) = 5;
  *((s8 *) (((char *) arg0) + 0x1A)) = 5;
  *((s32 **) (((char *) arg0) + 0x20)) = &D_80327000;
  *((s32 **) (((char *) arg0) + 0x24)) = &D_80327000;
 *((s32 **) (((char *) arg0) + 0x28)) = &D_80327048; *((s32 **) (((char *) arg0) + 0x2C)) = &D_80327090;
  *((s8 *) (((char *) arg0) + 0x30)) = 0;
  *((s8 *) (((char *) arg0) + 0x32)) = 4;
  *((s8 *) (((char *) arg0) + 0x31)) = 2;
  *((s8 *) (((char *) arg0) + 0x33)) = 3;
  *((s8 *) (((char *) arg0) + 0x34)) = 1;
  *((s8 *) (((char *) arg0) + 0x35)) = 1;
}
