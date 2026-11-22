extern unsigned short D_80348BA2;
s32 func_8021E708();
s32 func_8021E87C();
s32 func_802CB860();
s32 func_802CB914();
extern s32 D_803273C8;
extern char D_803273E0[];
extern u8 D_8032AA90;
extern char D_80348B50[];
void func_802CAC54(void *arg0)
{
    s32 *__base_D_803273C8;
  char *var_s3;
  s32 var_s0;
  s32 var_s2;
 func_802CB914(arg0, D_803273E0); func_802CB860(arg0, 0x3A); var_s2 = 0x9D; __base_D_803273C8 = &D_803273C8;
 var_s3 = __base_D_803273C8; var_s0 = 0; do { if (var_s0 == (*((u8 *) (0x1B + ((char *) arg0))))) { func_8021E708(0, 0xFF, 0, 0xFF);
    }
    else
    {
      func_8021E708(0, 0x80, 0, 0xFF);
    }
    if ((var_s0 == 2) && ((*((u8 *) (((char *) arg0) + 0x7C))) == 0))
    {
      func_8021E708(0x80, 0, 0, 0xFF);
      if ((*((u8 *) (((char *) arg0) + 0x1B))) == 2)
      {
        func_8021E708(0xFF, 0, 0, 0xFF);
      }
      if (0)
      {
      }
    }
    if ((var_s0 == 5) && ((((D_80348BA2 == 0) || (D_80348BA2 & 0x400)) || (D_8032AA90 != 0)) || ((D_80348BA2 & 0x40) && (!(((u32) D_80348BA2) & 0x200)))))
    {
      func_8021E708(0x80, 0, 0, 0xFF);
      if ((*((u8 *) (((char *) arg0) + 0x1B))) == 5)
      {
        func_8021E708(0xFF, 0, 0, 0xFF);
      }
    }
    func_8021E87C(0x6E, var_s2, *((s32 *) var_s3));
    var_s0 += 1;
    var_s2 -= 0x12;
    var_s3 += 4;
  }
  while (var_s0 != 6);
}
