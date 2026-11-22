s32 func_80287D58(void *, s32);
s32 func_80287D64(s32);
void func_80287E54(void *arg0, s32 arg1)
{
  f32 var_ft0;
  switch (arg1)
  {
    case 0x3:
      var_ft0 = 30.0f;
      *((s16 *) (((char *) arg0) + 0x110)) = 1;
      *((s16 *) (((char *) arg0) + 0x112)) = 0xE;
      *((s16 *) (((char *) arg0) + 0x108)) = 0x199;
      *((s16 *) (((char *) arg0) + 0x104)) = 0x20;
      *((s16 *) (((char *) arg0) + 0x106)) = 0x20;
      *((f32 *) (((char *) arg0) + 0x10C)) = var_ft0;
      return;

    case 0x0:
      *((s16 *) (((char *) arg0) + 0x112)) = 0x10;
      *((s16 *) (((char *) arg0) + 0x108)) = 0x1AC;
      if (1)
    {
      *((s16 *) (((char *) arg0) + 0x110)) = 2;
      if (1)
      {
        *((s16 *) (((char *) arg0) + 0x104)) = 0x20;
        *((s16 *) (((char *) arg0) + 0x106)) = 0x20;
      }
    }
      *((f32 *) (((char *) arg0) + 0x10C)) = 15.0f;
      return;

    case 0x2:
      *((s16 *) (((char *) arg0) + 0x110)) = 1;
      *((s16 *) (((char *) arg0) + 0x112)) = 4;
      *((s16 *) (((char *) arg0) + 0x108)) = 0x1A8;
 if (0) { }
      *((s16 *) (((char *) arg0) + 0x104)) = 0x20;
      *((s16 *) (((char *) arg0) + 0x106)) = 0x20;
      *((f32 *) (((char *) arg0) + 0x10C)) = 12.0f;
      return;

    case 0x5:
      *((s16 *) (((char *) arg0) + 0x112)) = 0x16;
      *((s16 *) (((char *) arg0) + 0x108)) = 0x1D1;
      *((s16 *) (((char *) arg0) + 0x104)) = 0x40;
      *((s16 *) (((char *) arg0) + 0x106)) = 0x40;
      *((s16 *) (((char *) arg0) + 0x110)) = 2;
      *((f32 *) (((char *) arg0) + 0x10C)) = 15.0f;
      func_80287D64(1);
      func_80287D58(arg0, 1);
      return;

    case 0x6:
      *((s16 *) (((char *) arg0) + 0x110)) = 1;
      *((s16 *) (((char *) arg0) + 0x112)) = 0xC;
      *((s16 *) (((char *) arg0) + 0x108)) = 0x18D;
      *((s16 *) (((char *) arg0) + 0x104)) = 0x20;
      *((s16 *) (((char *) arg0) + 0x106)) = 0x20;
      *((f32 *) (((char *) arg0) + 0x10C)) = 1.0f;
      func_80287D64(0);
      func_80287D58(arg0, 0);
      return;

    case 0x1A7:
      *((s16 *) (((char *) arg0) + 0x112)) = 1;
      *((s16 *) (((char *) arg0) + 0x108)) = 0x1A7;
      *((s16 *) (((char *) arg0) + 0x104)) = 0x20;
      *((s16 *) (((char *) arg0) + 0x106)) = 0x20;
      *((s16 *) (((char *) arg0) + 0x110)) = 0;
      *((f32 *) (((char *) arg0) + 0x10C)) = 0.0f;
      func_80287D64(1);
      return;

    case 0x1CC:
      var_ft0 = 0.0f;
      *((s16 *) (((char *) arg0) + 0x112)) = 1;
      *((s16 *) (((char *) arg0) + 0x108)) = 0x1CC;
      *((s16 *) (((char *) arg0) + 0x104)) = 0x20;
      *((s16 *) (((char *) arg0) + 0x106)) = 0x20;
      *((s16 *) (((char *) arg0) + 0x110)) = 0;
      *((f32 *) (((char *) arg0) + 0x10C)) = var_ft0;
      return;

  }

}
