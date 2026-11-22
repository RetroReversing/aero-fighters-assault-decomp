s32 func_80201FB8();
s32 func_80231A24();
extern char D_80251FD4[];
extern char D_80252008[];
extern s32 D_80256DE0;
extern s32 D_80256DE4;
extern u16 D_80280BFA;
extern char D_80251FEC[];
extern char D_80251FF8[];
volatile int func_802020D4(s32 arg0)
{
  int *__repair_home0 = &arg0;
  s32 *var_a2;
  s32 temp_s5;
  s32 temp_t2;
  s32 var_s0;
  unsigned short var_s1;
  void *temp_v0;
  temp_s5 = (*__repair_home0) & 0xFF;
  var_s0 = 0;
  var_s1 = 0;
  if (((s32) D_80280BFA) > 0)
  {
    do
    {
      if ((*((u8 *) (((char *) (D_80256DE4 + (var_s0 * 0xB4))) + ((0, 0x8C))))) != 0xFF)
      {
        if (temp_s5 != 0)
        {
          *((s32 *) (((char *) (D_80256DE4 + (var_s0 * 0xB4))) + 0x98)) = (*((s32 *) (((char *) (D_80256DE4 + (var_s0 * 0xB4))) + 0x98))) | 0x20;
          func_80201FB8(var_s0 & 0xFF);
        }
        var_s1 = (unsigned char)(var_s1 + 1);
      }
      temp_t2 = (var_s0 + 1) & 0xFF;
      goto dummy_label_28047;
      dummy_label_28047:
      ;

      ;
      ;
      var_s0 = temp_t2;
    }
    while (temp_t2 < ((s32) D_80280BFA));
  }
  if (var_s1 > 0)
  {
    if (temp_s5 != 0)
    {
      var_a2 = D_80251FEC;
    }
    else
    {
      var_a2 = D_80251FF8;
    }
    func_80231A24(D_80251FD4, var_s1, var_a2);
  }
  if (D_80256DE0 > 0)
  {
    func_80231A24(D_80252008, D_80256DE0);
  }
}

