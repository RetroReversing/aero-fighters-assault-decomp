s32 alSndpGetState();
s32 func_802011D0();
s32 func_8020321C();
s32 func_80203464();
s32 func_802037EC();
s32 func_80231C9C();
s32 func_80234E90();
extern void *D_8024E5B4;
extern char D_80252348[];
extern char D_80252364[];
extern char D_80252378[];
extern char D_802523A4[];
extern char D_802523E8[];
extern u8 D_80256DC0;
extern u8 D_80256DD0;
extern s32 D_80256DE0;
extern s32 D_80256DE4;
extern s32 D_8025B988;
extern char D_802523E0[];
extern char D_802523C8[];
void func_80202F38(void)
{
  char *var_s0;
  s32 var_v0;
  u8 *temp_s0;
  s32 var_s1;
  s32 var_fp;
  char *var_s3;
  s32 temp_s2;
  u8 temp_s2_2;
  u8 temp_s2_3;
  u8 temp_t2;
  void *temp_a0;
  u8 *__base_D_80256DD0;
  __base_D_80256DD0 = &D_80256DD0;
  func_802011D0(D_80252348, D_80256DE0);
  var_s3 = &D_80256DC0;
  var_fp = 0;
  if (D_80256DE0 > 0)
  {
    do
    {
      func_802011D0(D_80252364, (s32) (*((u8 *) var_s3)));
      func_802037EC(*((u8 *) var_s3));
      temp_s2 = *((u8 *) var_s3);
      var_v0 = *((s32 *) (((char *) (((unsigned) D_80256DE4) + (temp_s2 * 0xB4))) + 0xA0));
      if (var_v0 == 0)
      {
        var_s1 = 0;
        if ((*__base_D_80256DD0) != 0xFF)
        {
          var_s0 = __base_D_80256DD0;
          loop_5:
          temp_t2 = *((u8 *) (((char *) var_s0) + 1));

          do
          {
            do
            {
              do
              {
                var_s1 += 1;
              }
              while (0);
            }
            while (0);
          }
          while (0);
          var_s0 += 1;
          if (temp_t2 != 0xFF)
          {
            if (var_s1 != 0xF)
            {
              goto loop_5;
            }
          }
        }
        temp_s0 = &__base_D_80256DD0[var_s1];
        func_802011D0(D_80252378, (s32) temp_s2, *temp_s0, var_s1);
        var_v0 = (u8) (*((u8 *) var_s3));
        *temp_s0 = (int) var_v0;
        *((s8 *) (((char *) (D_80256DE4 + (var_v0 * 0xB4))) + 0xAD)) = var_s1;
        func_8020321C(*((u8 *) var_s3));
        var_v0 = *((s32 *) (((char *) (D_80256DE4 + (((((((((((*((u8 *) var_s3)) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) * 0xB4))) + 0xA0));
      }
      if (var_v0 == 1)
      {
        func_8020321C((*((u8 *) var_s3)) & 0xFF);
        var_v0 = *((s32 *) (((char *) (D_80256DE4 + ((*((u8 *) var_s3)) * 0xB4))) + 0xA0));
      }
      if (var_v0 == 2)
      {
        func_802011D0(D_802523A4, (s32) ((*((u8 *) var_s3)) & 0xFFFFFFFFFFFFFFFFu));
        func_80234E90(D_8024E5B4, *((s32 *) (D_8025B988 + ((*((u8 *) (((char *) (D_80256DE4 + ((*((u8 *) var_s3)) * 0xB4))) + ((0, 0xAD))))) * 2))));
        temp_a0 = D_8024E5B4;
        if ((*((s32 *) (((char *) temp_a0) + 0x3C))) == (-1))
        {
          func_80231C9C(D_802523E0);
        }
        if (alSndpGetState(temp_a0) == 1)
        {
          func_802011D0(D_802523E8, (s32) (*((u8 *) var_s3)));
          *((s32 *) (((char *) (D_80256DE4 + ((*((u8 *) var_s3)) * 0xB4))) + 0xA0)) = 8;
          *((s8 *) (((char *) (D_80256DE4 + ((*((u8 *) var_s3)) * 0xB4))) + 0xB0)) = 0;
        }
      }
      temp_s2_3 = *((u8 *) var_s3);
      if ((*((s32 *) (((char *) (((int) D_80256DE4) + (temp_s2_3 * 0xB4))) + 0xA0))) == 8)
      {
        func_80203464(temp_s2_3 & 0xFF);
      }
      var_fp += 1;
      var_s3 += 1;
    }
    while (var_fp < D_80256DE0);
  }
}

