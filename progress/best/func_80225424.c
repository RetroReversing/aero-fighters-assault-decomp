s32 func_8022B460(void *, s32);
u32 func_8022B5E0(s32, u32);
void func_80225424(void *arg0, s32 *arg1, u32 arg2)
{
  u32 temp_ret;
  u32 temp_v0;
  u32 temp_v1;
  if (arg2 < 9U)
  {
    temp_ret = func_8022B5E0(*arg1, arg2);
    temp_v0 = temp_ret;
    temp_v1 = (u32) ((u64) temp_ret);
    *arg1 += arg2;
    switch (arg2)
    {
      case 4:
        *((u32 *) (((char *) arg0) + 0)) = temp_v1;
        return;

      case 2:
        *((u32 *) (((char *) arg0) + 0)) = ((s16) temp_v1) & 0xFFFF;
        return;

      case 1:
        *((u32 *) (((char *) arg0) + 0)) = (((((((s8) temp_v1) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF;
        return;

      case 8:
        *((u32 *) (((char *) arg0) + 0)) = temp_v0;
        *((u32 *) (((char *) arg0) + 4)) = temp_v1;
        return;

    }

  }
  else
  {
    func_8022B460(arg0, *arg1);
    *arg1 += arg2;
  }
}

