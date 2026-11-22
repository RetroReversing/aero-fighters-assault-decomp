s32 func_8021ACB0(s32, s32);
s32 func_8021B4B0(s32, s32, s32);
void func_802FBE88(s32 arg0, u8 *arg1, void *arg2, s32 arg3, s32 arg4)
{
  *((s16 *) (((char *) arg2) + 0)) = (s16) ((*arg1) - 1);
  *((s16 *) (((char *) arg2) + 2)) = (s16) (*arg1);
  *((s16 *) (((char *) arg2) + 4)) = (s16) ((*arg1) + 1);
  func_8021ACB0(arg3, *((s32 *) (((char *) (arg0 + ((*arg1) * 4))) + ((0, 0x100)))));
  func_8021B4B0(arg3, 0, arg4);
}

