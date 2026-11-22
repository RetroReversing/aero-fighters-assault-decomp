s32 func_8022CB48();
s32 func_8022CE68();
s32 func_8022CFAC();
s32 func_8022D00C(s32 *);
s32 func_80231A24(s32 *, s32);
s32 osRecvMesg(s32 *, s32 *, s32);
extern s32 D_80254488;
extern s32 D_80281258;
void func_8022CA30(s32 arg0)
{
  s32 *__base_D_80281258;
  s32 *__base_D_80254488;
  long sp3C;
  sp3C = 0;
  __base_D_80281258 = &D_80281258;
  loop_1:
  osRecvMesg(__base_D_80281258, &sp3C, 1);

  if ((sp3C ^ 0) != 0x29A)
  {
    if (sp3C != 0x29B)
    {
      if (sp3C != 0x29C)
      {
        if (sp3C != 0x29D)
        {
          if (1)
          {
            __base_D_80254488 = &D_80254488;
          }
          func_80231A24(__base_D_80254488, (unsigned short) (sp3C & (0xFFu ^ 0)));
          goto loop_1;
        }
        else
        {
          func_8022D00C(__base_D_80254488);
          goto loop_1;
        }
      }
      else
      {
        func_8022CFAC();
        goto loop_1;
      }
    }
    else
    {
      func_8022CE68();
      goto loop_1;
    }
  }
  else
  {
    func_8022CB48();
    goto loop_1;
  }
}

