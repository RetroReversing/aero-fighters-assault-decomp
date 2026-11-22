s32 alSndpGetState();
s32 func_802011D0();
s32 func_802012BC();
s32 func_80202E78();
s32 func_80203654();
s32 func_80231C9C();
s32 func_80234E90();
extern void *D_8024E5B4;
extern char D_802520A8[];
extern char D_802520CC[];
extern char D_80252118[];
extern char D_8025213C[];
extern char D_80252158[];
extern char D_80252188[];
extern char D_802521B4[];
extern char D_802521D4[];
extern char D_802521DC[];
extern char D_802521F0[];
extern char D_80252208[];
extern char D_80252230[];
extern char D_80252250[];
extern char D_80252270[];
extern char D_80252284[];
extern char D_8025229C[];
extern char D_802522CC[];
extern char D_802522F8[];
extern char D_80252308[];
extern u8 D_80256DC0;
extern char D_80256DD0[];
extern s32 D_80256DE0;
extern s32 D_80256DE4;
extern s32 D_8025B988;
extern char D_80252080[];
extern char D_802520A0[];
extern char D_80252110[];
extern char D_802520F8[];
typedef struct 
{
  unsigned char pad_0[136];
  int field_88;
  unsigned char pad_8C[12];
  int field_98;
  unsigned char pad_9C[4];
  int field_A0;
  int field_A4;
  unsigned char pad_A8[5];
  unsigned char field_AD;
} __repair_record_temp_s0;
typedef struct 
{
  unsigned char pad_0[136];
  int field_88;
  unsigned char pad_8C[24];
  int field_A4;
} __repair_record_temp_v0;
void func_8020292C(u8 arg0)
{
  int __repair_literal;
  void *temp_v0;
  char temp_a1;
  unsigned temp_t7_2;
  register s32 sp50;
  s32 temp_a2;
  register s32 temp_t7;
  void *temp_a0;
  char *var_s2;
  char *var_v0;
  s32 temp_s1;
  register u8 temp_t9;
  u8 temp_v0_2;
  register u8 temp_v0_3;
  s32 var_a2;
  u8 var_a0;
  s32 var_s0;
  u8 temp_v0_4;
  void *temp_s0;
  s32 sp44;
  temp_t7 = arg0 * 0xB4;
  sp44 = temp_t7;
  sp50 = 0;
  temp_s0 = temp_t7 + D_80256DE4;
  if (D_80256DE0 >= 0x11)
  {
    func_80231C9C(D_80252080, D_802520A0, 0x353);
  }
  func_802011D0(D_802520A8, arg0);
  if ((((__repair_record_temp_s0 *) temp_s0)->field_98 & 0x10) && (((__repair_record_temp_s0 *) temp_s0)->field_A0 == 8))
  {
    func_802011D0(D_802520CC, arg0);
    __repair_literal = 2;
    func_80234E90(D_8024E5B4, *((s32 *) (D_8025B988 + ((*((u8 *) (((char *) (D_80256DE4 + sp44)) + 0xAD))) * __repair_literal))));
    temp_a0 = D_8024E5B4;
    if ((*((s32 *) (((char *) temp_a0) + 0x3C))) == (-1))
    {
      func_80231C9C(D_80252110, D_802520F8, 0x361);
    }
    if (alSndpGetState(temp_a0) == 0)
    {
      func_80203654(((__repair_record_temp_s0 *) temp_s0)->field_AD);
      ((__repair_record_temp_s0 *) temp_s0)->field_AD = 0x11U;
      ((__repair_record_temp_s0 *) temp_s0)->field_A0 = 0;
      if (((__repair_record_temp_s0 *) temp_s0)->field_98 & 0x20)
      {
        func_802011D0(D_80252118, arg0);
        func_802012BC(temp_s0);
      }
    }
    else
    {
      goto block_9;
    }
  }
  else
  {
    block_9:
    if (D_80256DE0 == 0)
    {
      {
        func_802011D0(D_8025213C, arg0);
      }
      D_80256DC0 = arg0;
      D_80256DE0 += 1;
      if ((*((u8 *) (((char *) (D_80256DE4 + sp44)) + 0xAD))) != 0x11)
      {
        func_802011D0(D_80252158, arg0);
        *(D_80256DD0 + (*((u8 *) (((char *) (D_80256DE4 + sp44)) + 0xAD)))) = arg0;
      }
      func_802011D0(D_80252188, arg0);
      return;
    }

    temp_a1 = ((__repair_record_temp_s0 *) temp_s0)->field_A4 + ((__repair_record_temp_s0 *) temp_s0)->field_88;
    __repair_literal = temp_a1;
    func_802011D0(D_802521B4, (u8) temp_a1, arg0);
    var_a2 = D_80256DE0;
    var_s0 = 0;
    if (var_a2 > 0)
    {
      var_s2 = &D_80256DC0;
      loop_15:
      func_802011D0(D_802521D4, var_s0, (u8) var_a2);

      temp_v0 = D_80256DE4 + ((*((u8 *) var_s2)) * 0xB4);
      temp_s1 = ((__repair_record_temp_v0 *) temp_v0)->field_88 + ((__repair_record_temp_v0 *) temp_v0)->field_A4;
      func_802011D0(D_802521DC, temp_s1);
      if (__repair_literal >= ((s32) temp_s1))
      {
        sp50 = 1;
        func_802011D0(D_802521F0);
        temp_a2 = D_80256DE0;
        if (temp_a2 == 0x10)
        {
          func_802011D0(D_80252208, *((u8 *) (((char *) (&(&D_80256DC0)[temp_a2])) + (-1))), (u8) temp_a2);
          var_a0 = *((u8 *) (((char *) (&(&D_80256DC0)[D_80256DE0])) + (-1)));
          temp_v0_2 = *((u8 *) (((char *) (((s32) D_80256DE4) + (var_a0 * 0xB4))) + 0xAD));
          if (temp_v0_2 != 0x11)
          {
            *(D_80256DD0 + temp_v0_2) = 0xFF;
            func_802011D0(D_80252230, arg0);
            var_a0 = *((u8 *) (((char *) (&(&D_80256DC0)[D_80256DE0])) + (-1)));
          }
          func_80202E78(var_a0);
        }
        var_v0 = &(&D_80256DC0)[temp_a2];
        if (((s32) var_s0) < temp_a2)
        {
          do
          {
            var_a2 = (u8) (*((u8 *) (((char *) var_v0) + (-1))));
            var_v0 -= 1;
            *((u8 *) (((char *) var_v0) + 1)) = var_a2;
          }
          while (((u32) (&(&D_80256DC0)[var_s0])) < ((u32) var_v0));
        }
        {
          u8 __repair_narrow = arg0;
          *((u8 *) var_s2) = __repair_narrow;
        }
        temp_v0_3 = *((u8 *) (((char *) (D_80256DE4 + ((int) sp44))) + 0xAD));
        if (temp_v0_3 != 0x11)
        {
          *(u16 *)(D_80256DD0 + ((long long) temp_v0_3)) = arg0;
          do
          {
            func_802011D0(D_80252250, arg0, (u8) temp_a2);
          }
          while (0);
        }
      }
      var_a2 = D_80256DE0;
      var_s2 += 1;
      ++var_s0;
      if ((((s32) var_s0) < var_a2) && (sp50 == 0))
      {
        goto loop_15;
      }
    }
    if ((sp50 == 0) && (var_s0 == 0x10))
    {
      func_802011D0(D_80252270, arg0, (u8) var_a2);
      temp_v0_4 = *((u8 *) (((char *) (D_80256DE4 + sp44)) + 0xAD));
      if (temp_v0_4 != 0x11)
      {
        *(D_80256DD0 + temp_v0_4) = 0xFF;
      }
      func_80202E78(arg0);
      return;
    }
    if ((sp50 == 0) && (var_s0 == var_a2))
    {
      func_802011D0(D_80252284, arg0, (u8) var_a2);
      D_80256DE0 += 1;
      (&D_80256DC0)[var_s0] = arg0;
      if ((*((u8 *) (((char *) (D_80256DE4 + ((s32) sp44))) + 0xAD))) != 0x11)
      {
        func_802011D0(D_8025229C, arg0);
        *(D_80256DD0 + (*((u8 *) (((char *) (D_80256DE4 + sp44)) + 0xAD)))) = arg0;
      }
      func_802011D0(D_802522CC, arg0);
      return;
    }
    temp_t7_2 = var_a2 + 1;
    if (var_a2 < 0x10)
    {
      D_80256DE0 = temp_t7_2;
      var_a2 = temp_t7_2;
    }
    func_802011D0(D_802522F8, (u8) var_a2, (u8) var_a2);
    func_802011D0(D_80252308);
  }
}

