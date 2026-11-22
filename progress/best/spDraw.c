s32 func_8023A7B4(f32, f32, s32, s32, s16, s32, s32, s32);
extern s32 D_80250930;
extern u16 D_80250934;
extern f32 D_80255660;
extern f32 D_80255664;
extern f32 D_80255668;
extern s32 D_80283960;
extern s32 D_80283964;
extern s32 D_80283968;
extern s32 D_8028396C;
void *spDraw(void *arg0)
{
  s32 sp1A4;
  s32 sp1A0;
  s32 sp19C;
  f32 sp198;
  f32 sp194;
  s16 *sp190;
  void *sp18C;
  void *sp188;
  s32 sp178;
  s32 sp170;
  s32 sp150[3];
  s32 sp88;
  s32 sp7C;
  f32 sp64;
  f32 temp_fv0;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 var_fa0;
  f32 var_fa1;
  f32 var_ft4;
  f32 var_ft5;
  s16 *var_s5;
  s16 temp_a0_3;
  s16 temp_a0_4;
  s16 temp_v0_5;
  s16 temp_v0_6;
  s16 temp_v0_7;
  s16 var_a2;
  int var_ra_2;
  s16 var_s2_2;
  s16 var_v1;
  s32 temp_a3;
  s32 temp_a3_2;
  s32 temp_ft1;
  s32 temp_ft2;
  s32 temp_ft3;
  s32 temp_t4;
  s32 temp_t7_6;
  s32 temp_t7_7;
  s32 temp_t7_8;
  s32 temp_v0;
  s32 temp_v0_8;
  s32 temp_v1;
  s32 var_a3;
  s32 var_ra;
  s32 var_s1;
  s32 var_s2;
  s32 var_s3;
  s32 var_s6;
  s32 var_s7;
  s32 var_t1;
  s32 var_t2;
  s32 var_t3;
  s32 var_v1_2;
  u16 temp_a0;
  u16 var_s4;
  u16 var_s4_2;
  u8 temp_a0_2;
  u8 var_a0;
  void *temp_a1;
  void *temp_a2;
  void *temp_a3_3;
  void *temp_t6;
  void *temp_t6_2;
  void *temp_t6_3;
  void *temp_t6_4;
  void *temp_t6_5;
  void *temp_t7;
  void *temp_t7_10;
  void *temp_t7_11;
  void *temp_t7_2;
  void *temp_t7_3;
  void *temp_t7_4;
  void *temp_t7_5;
  void *temp_t7_9;
  void *temp_t8;
  void *temp_t8_10;
  void *temp_t8_11;
  void *temp_t8_12;
  void *temp_t8_13;
  void *temp_t8_14;
  void *temp_t8_15;
  void *temp_t8_16;
  void *temp_t8_17;
  void *temp_t8_2;
  void *temp_t8_3;
  void *temp_t8_4;
  void *temp_t8_5;
  void *temp_t8_6;
  void *temp_t8_7;
  void *temp_t8_8;
  void *temp_t8_9;
  void *temp_t9;
  void *temp_t9_2;
  void *temp_t9_3;
  void *temp_t9_4;
  void *temp_t9_5;
  void *temp_t9_6;
  void *temp_t9_7;
  void *temp_t9_8;
  void *temp_v0_2;
  void *temp_v0_3;
  void *temp_v0_4;
  if ((*((u16 *) (((char *) arg0) + 0x14))) & 4)
  {
    return NULL;
  }
  D_80250930 = 0;
  temp_t8 = *((void **) (((char *) arg0) + 0x3C));
  var_s6 = 0;
  sp18C = temp_t8;
  if (temp_t8 == NULL)
  {
    sp18C = *((void **) (((char *) arg0) + 0x38));
  }
  var_s7 = 0;
  sp188 = sp18C;
  var_s5 = *((s16 **) (((char *) arg0) + 0x34));
  if (D_80250934 & 0x400)
  {
    D_80250934 = ~(*((u16 *) (((char *) arg0) + 0x14)));
  }
  temp_a0 = *((u16 *) (((char *) arg0) + 0x14));
  var_s4 = temp_a0;
  if (temp_a0 & 0x400)
  {
    D_80250934 = temp_a0;
    var_s4 = *((u16 *) (((char *) arg0) + 0x14));
  }
  temp_v1 = var_s4 & 1;
  if (D_80250934 != var_s4)
  {
    if (temp_v1 != 0)
    {
      temp_t6 = sp18C;
      if (!(D_80250934 & 1))
      {
        sp18C = ((unsigned char *) temp_t6) + 8;
        *((s32 *) (((char *) temp_t6) + 0)) = 0xB900031D;
        *((s32 *) (((char *) temp_t6) + 4)) = 0x504240;
        goto block_15;
      }
    }
    if (temp_v1 == 0)
    {
      temp_t7 = sp18C;
      if (D_80250934 & 1)
      {
        sp18C = ((unsigned char *) temp_t7) + 8;
        *((s32 *) (((char *) temp_t7) + 0)) = 0xB900031D;
        *((s32 *) (((char *) temp_t7) + 4)) = 0x0F0A7008;
        block_15:
        var_s4 = *((u16 *) (((char *) arg0) + 0x14));

      }
    }
    temp_v0 = var_s4 & 2;
    if (temp_v0 != 0)
    {
      temp_t9 = sp18C;
      if (!(D_80250934 & 2))
      {
        sp18C = ((unsigned char *) temp_t9) + 8;
        *((s32 *) (((char *) temp_t9) + 4)) = -0xFF;
        *((s32 *) (((char *) temp_t9) + 0)) = 0xF9000000;
        temp_t9_2 = sp18C;
        sp18C = ((unsigned char *) temp_t9_2) + 8;
        *((s32 *) (((char *) temp_t9_2) + 4)) = 1;
        *((s32 *) (((char *) temp_t9_2) + 0)) = 0xB9000002;
        goto block_22;
      }
    }
    if (temp_v0 == 0)
    {
      temp_t7_2 = sp18C;
      if (D_80250934 & 2)
      {
        sp18C = ((unsigned char *) temp_t7_2) + 8;
        *((s32 *) (((char *) temp_t7_2) + 0)) = 0xB9000002;
        *((s32 *) (((char *) temp_t7_2) + 4)) = 0;
        block_22:
        var_s4 = *((u16 *) (((char *) arg0) + 0x14));

      }
    }
    temp_a3 = var_s4 & 0x80;
    if ((temp_a3 != 0) && ((temp_t8_2 = sp18C, (D_80250934 & 0x80) == 0)))
    {
      sp18C = ((unsigned char *) temp_t8_2) + 8;
      *((s32 *) (((char *) temp_t8_2) + 4)) = 0x3000;
      *((s32 *) (((char *) temp_t8_2) + 0)) = 0xBA000C02;
    }
    else
      if (temp_a3 == 0)
    {
      temp_t6_2 = sp18C;
      if (D_80250934 & 0x80)
      {
        sp18C = ((unsigned char *) temp_t6_2) + 8;
        *((s32 *) (((char *) temp_t6_2) + 4)) = 0x2000;
        *((s32 *) (((char *) temp_t6_2) + 0)) = 0xBA000C02;
      }
    }
  }
  D_80250934 = *((u16 *) (((char *) arg0) + 0x14));
  if ((*((u16 *) (((char *) arg0) + 0x14))) & 8)
  {
    temp_v0_2 = sp18C;
    sp18C = ((unsigned char *) temp_v0_2) + 8;
    *((s32 *) (((char *) temp_v0_2) + 0)) = 0xEE000000;
    *((s32 *) (((char *) temp_v0_2) + 4)) = (s32) ((*((s16 *) (((char *) arg0) + 0x16))) << 0x10);
  }
  temp_v0_3 = sp18C;
  sp18C = ((unsigned char *) temp_v0_3) + 8;
  *((s32 *) (((char *) temp_v0_3) + 0)) = 0xFA000000;
  *((s32 *) (((char *) temp_v0_3) + 4)) = (s32) (((((*((u8 *) (((char *) arg0) + 0x18))) << 0x18) | ((*((u8 *) (((char *) arg0) + 0x19))) << 0x10)) | ((*((u8 *) (((char *) arg0) + 0x1A))) << 8)) | (*((u8 *) (((char *) arg0) + 0x1B))));
  temp_a0_2 = *((u8 *) (((char *) arg0) + 0x30));
  if (!((temp_a0_2 == 3) || (temp_a0_2 == 4)))
  {
    temp_t8_3 = sp18C;
    if ((*((u8 *) (((char *) arg0) + 0x1B))) == 0xFF)
    {
      temp_t8_4 = sp18C;
      sp18C = ((unsigned char *) temp_t8_4) + 8;
      *((s32 *) (((char *) temp_t8_4) + 4)) = -0xC07;
      *((s32 *) (((char *) temp_t8_4) + 0)) = 0xFC11FE23;
    }
    else
    {
      sp18C = ((unsigned char *) temp_t8_3) + 8;
      *((s32 *) (((char *) temp_t8_3) + 0)) = 0xFC119623;
      *((s32 *) (((char *) temp_t8_3) + 4)) = 0xFF2FFFFF;
    }
  }
  else
  {
    temp_t9_3 = sp18C;
    if ((*((u8 *) (((char *) arg0) + 0x1B))) == 0xFF)
    {
      temp_t9_4 = sp18C;
      sp18C = ((unsigned char *) temp_t9_4) + 8;
      *((s32 *) (((char *) temp_t9_4) + 4)) = -0xC07;
      *((s32 *) (((char *) temp_t9_4) + 0)) = 0xFC11FE23;
    }
    else
    {
      sp18C = ((unsigned char *) temp_t9_3) + 8;
      *((s32 *) (((char *) temp_t9_3) + 4)) = 0xFF2FFFFF;
      *((s32 *) (((char *) temp_t9_3) + 0)) = 0xFC119623;
    }
  }
  temp_t8_5 = sp18C;
  if ((*((u8 *) (((char *) arg0) + 0x30))) == 2)
  {
    sp18C = ((unsigned char *) temp_t8_5) + 8;
    *((s32 *) (((char *) temp_t8_5) + 4)) = 0x8000;
    *((s32 *) (((char *) temp_t8_5) + 0)) = 0xBA000E02;
    temp_t8_6 = sp18C;
    sp18C = ((unsigned char *) temp_t8_6) + 8;
    *((s32 *) (((char *) temp_t8_6) + 0)) = 0xFD100000;
    *((s32 *) (((char *) temp_t8_6) + 4)) = (s32) (*((s32 *) (((char *) arg0) + 0x20)));
    temp_t8_7 = sp18C;
    sp18C = ((unsigned char *) temp_t8_7) + 8;
    *((s32 *) (((char *) temp_t8_7) + 4)) = 0;
    *((s32 *) (((char *) temp_t8_7) + 0)) = 0xE8000000;
    temp_a1 = sp18C;
    sp18C = ((unsigned char *) temp_a1) + 8;
    *((s32 *) (((char *) temp_a1) + 4)) = 0x07000000;
    *((s32 *) (((char *) temp_a1) + 0)) = (s32) ((((*((s16 *) (((char *) arg0) + 0x1C))) + 0x100) & 0x1FF) | 0xF5000000);
    temp_t6_3 = sp18C;
    sp18C = ((unsigned char *) temp_t6_3) + 8;
    *((s32 *) (((char *) temp_t6_3) + 4)) = 0;
    *((s32 *) (((char *) temp_t6_3) + 0)) = 0xE6000000;
    temp_v0_4 = sp18C;
    sp18C = ((unsigned char *) temp_v0_4) + 8;
    *((s32 *) (((char *) temp_v0_4) + 0)) = 0xF0000000;
    *((s32 *) (((char *) temp_v0_4) + 4)) = (s32) (((((*((s16 *) (((char *) arg0) + 0x1E))) - 1) & 0x3FF) << 0xE) | 0x07000000);
    temp_t9_5 = sp18C;
    sp18C = ((unsigned char *) temp_t9_5) + 8;
    *((s32 *) (((char *) temp_t9_5) + 4)) = 0;
    *((s32 *) (((char *) temp_t9_5) + 0)) = 0xE7000000;
    temp_t7_3 = sp18C;
    sp18C = ((unsigned char *) temp_t7_3) + 8;
    *((s32 *) (((char *) temp_t7_3) + 4)) = 0;
    *((s32 *) (((char *) temp_t7_3) + 0)) = 0xE6000000;
  }
  if (((*((u8 *) (((char *) arg0) + 0x30))) == 1) && ((temp_t7_4 = sp18C, ((*((u16 *) (((char *) arg0) + 0x14))) & 0x20) != 0)))
  {
    sp18C = ((unsigned char *) temp_t7_4) + 8;
    *((s32 *) (((char *) temp_t7_4) + 0)) = 0xBA000903;
    *((s32 *) (((char *) temp_t7_4) + 4)) = 0;
    temp_t6_4 = sp18C;
    sp18C = ((unsigned char *) temp_t6_4) + 8;
    *((s32 *) (((char *) temp_t6_4) + 4)) = 0;
    *((s32 *) (((char *) temp_t6_4) + 0)) = 0xBA000C02;
    temp_t8_8 = sp18C;
    sp18C = ((unsigned char *) temp_t8_8) + 8;
    *((s32 *) (((char *) temp_t8_8) + 4)) = 0x77FCF87C;
    *((s32 *) (((char *) temp_t8_8) + 0)) = 0xFC17FE2F;
    temp_t8_9 = sp18C;
    sp18C = ((unsigned char *) temp_t8_9) + 8;
    *((s32 *) (((char *) temp_t8_9) + 0)) = 0xEC15FD5D;
    *((s32 *) (((char *) temp_t8_9) + 4)) = 0x3B78E42A;
  }
  else
  {
    temp_t8_10 = sp18C;
    if ((*((u8 *) (((char *) arg0) + 0x30))) == 1)
    {
      sp18C = ((unsigned char *) temp_t8_10) + 8;
      *((s32 *) (((char *) temp_t8_10) + 4)) = 0x100000;
      *((s32 *) (((char *) temp_t8_10) + 0)) = 0xBA001402;
      temp_t8_11 = sp18C;
      sp18C = ((unsigned char *) temp_t8_11) + 8;
      *((s32 *) (((char *) temp_t8_11) + 4)) = 0x2000;
      *((s32 *) (((char *) temp_t8_11) + 0)) = 0xBA000C02;
      temp_t8_12 = sp18C;
      sp18C = ((unsigned char *) temp_t8_12) + 8;
      *((s32 *) (((char *) temp_t8_12) + 4)) = 0xA00;
      *((s32 *) (((char *) temp_t8_12) + 0)) = 0xBA000903;
      temp_t8_13 = sp18C;
      sp18C = ((unsigned char *) temp_t8_13) + 8;
      *((s32 *) (((char *) temp_t8_13) + 0)) = 0xEC15FD5D;
      *((s32 *) (((char *) temp_t8_13) + 4)) = 0x3B78E42A;
      temp_t8_14 = sp18C;
      sp18C = ((unsigned char *) temp_t8_14) + 8;
      *((s32 *) (((char *) temp_t8_14) + 4)) = 0x7FFD7E38;
      *((s32 *) (((char *) temp_t8_14) + 0)) = 0xFC27FFFF;
    }
  }
  var_s4_2 = *((u16 *) (((char *) arg0) + 0x14));
  var_s3 = var_s4_2 & 0x20;
  if (var_s4_2 & 0x10)
  {
    var_ft4 = *((f32 *) (((char *) arg0) + 8));
    var_fa1 = *((f32 *) (((char *) arg0) + 0xC));
  }
  else
  {
    var_fa1 = 1.0f;
    var_ft4 = 1.f;
  }
  if (var_s5 != NULL)
  {
    if (var_s3 != 0)
    {
      temp_t7_5 = sp18C;
      if ((*((u8 *) (((char *) arg0) + 0x30))) != 1)
      {
        sp18C = ((unsigned char *) temp_t7_5) + 8;
        *((s32 *) (((char *) temp_t7_5) + 4)) = 0x200000;
        *((s32 *) (((char *) temp_t7_5) + 0)) = 0xBA001402;
        var_s4_2 = *((u16 *) (((char *) arg0) + 0x14));
        var_s3 = var_s4_2 & 0x20;
      }
    }
    temp_fv1 = (f32) (*((s16 *) (((char *) arg0) + 2)));
    var_s2 = 0;
    var_ra = 0;
    temp_ft2 = (s32) (temp_fv1 + D_80255660);
    sp178 = temp_ft2;
    temp_ft3 = (s32) ((1024.0f / var_fa1) + 0.5f);
    var_ft5 = (f32) temp_ft3;
    temp_t7_6 = ((s32) (((s32) (var_ft5 * (((f32) temp_ft2) - temp_fv1))) + 0x10)) >> 5;
    var_s1 = temp_t7_6;
    if (var_s4_2 & 0x80)
    {
      var_s1 = temp_t7_6 + 0x10;
    }
    if (var_s4_2 & 0x100)
    {
      var_s1 += *((s16 *) (((char *) arg0) + 0x42));
    }
    var_t3 = (s32) ((temp_fv1 + (((f32) (*((s16 *) (((char *) arg0) + 0x2C)))) * var_fa1)) + D_80255660);
    if ((var_s3 != 0) && ((*((u8 *) (((char *) arg0) + 0x30))) != 1))
    {
      var_t3 -= 1;
    }
    temp_v0_5 = *((s16 *) (((char *) arg0) + 0x28));
    sp1A4 = 0;
    sp88 = temp_ft3;
    if (temp_v0_5 > 0)
    {
      var_a2 = *var_s5;
      if (var_a2 > 0)
      {
        sp7C = (s32) temp_v0_5;
        var_fa0 = D_80255664;
        loop_64:
        temp_a3_2 = var_s4_2 & 0x80;

        temp_t4 = var_s4_2 & 0x100;
        if ((*((s16 *) (((char *) arg0) + 4))) < (var_a2 + var_s2))
        {
          temp_a0_3 = *((s16 *) (((char *) arg0) + 0x2C));
          var_ra += temp_a0_3;
          var_s7 += *((s16 *) (((char *) arg0) + 0x12));
          var_s6 = 0;
          var_s2 = 0;
          temp_fv1_2 = (f32) (*((s16 *) (((char *) arg0) + 2)));
          temp_fv0 = temp_fv1_2 + (((f32) var_ra) * var_fa1);
          temp_ft1 = (s32) (temp_fv0 + var_fa0);
          temp_t7_7 = ((s32) (((s32) (var_ft5 * (((f32) temp_ft1) - temp_fv0))) + 0x10)) >> 5;
          var_s1 = temp_t7_7;
          if (temp_a3_2 != 0)
          {
            var_s1 = temp_t7_7 + 0x10;
          }
          if (temp_t4 != 0)
          {
            var_s1 += *((s16 *) (((char *) arg0) + 0x42));
          }
          sp178 = temp_ft1 + var_s7;
          var_t3 = ((s32) ((temp_fv1_2 + (((f32) (temp_a0_3 + var_ra)) * var_fa1)) + var_fa0)) + var_s7;
          if ((var_s3 != 0) && ((*((u8 *) (((char *) arg0) + 0x30))) != 1))
          {
            var_t3 -= 1;
          }
          temp_v0_6 = *((s16 *) (((char *) var_s5) + 0xC));
          var_v1 = temp_a0_3;
          if (temp_v0_6 != 0)
          {
            var_v1 = temp_v0_6;
          }
          if ((*((s16 *) (((char *) arg0) + 6))) >= (temp_v0_6 + var_ra))
          {
            goto block_75;
          }
        }
        else
        {
          block_75:
          var_t1 = var_a2 + var_s2;

          temp_v0_6 = *((s16 *) (((char *) var_s5) + 0xC));
          temp_fv1_3 = (f32) (*((s16 *) (((char *) arg0) + 0)));
          if (temp_a3_2 != 0)
          {
          }
          if (temp_t4 != 0)
          {
          }
          if (temp_v0_6 != 0)
          {
            var_t3 = ((s32) ((((f32) (*((s16 *) (((char *) arg0) + 2)))) + (((f32) (temp_v0_6 + var_ra)) * var_fa1)) + var_fa0)) + var_s7;
            if ((var_s3 != 0) && ((*((u8 *) (((char *) arg0) + 0x30))) != 1))
            {
              var_t3 -= 1;
            }
          }
          var_a3 = ((s32) ((temp_fv1_3 + (((f32) var_t1) * var_ft4)) + var_fa0)) + var_s6;
          if ((var_s3 != 0) && ((*((u8 *) (((char *) arg0) + 0x30))) != 1))
          {
            var_a3 -= 1;
          }
          if ((*((s32 *) (((char *) var_s5) + 8))) != 0)
          {
            sp19C = var_ra;
            sp170 = var_t3;
            sp150[2] = var_s1;
            sp1A0 = var_s2;
            sp190 = var_s5;
            sp150[1] = var_s6;
            sp150[0] = var_s7;
            sp194 = var_fa1;
            sp198 = var_ft4;
            sp64 = var_ft5;
            func_8023A7B4(var_fa0, var_fa1, ((s32) ((temp_fv1_3 + (((f32) var_s2) * var_ft4)) + var_fa0)) + var_s6, sp178, var_a2, var_a3, (s32) ((1024.0f / var_ft4) + 0.5), sp88);
            var_s4_2 = *((u16 *) (((char *) arg0) + 0x14));
            var_fa0 = D_80255668;
            var_s3 = var_s4_2 & 0x20;
            var_t1 = (*((s16 *) (((char *) var_s5) + 0))) + var_s2;
            sp7C = (s32) (*((s16 *) (((char *) arg0) + 0x28)));
          }
          temp_t7_8 = sp1A4 + 1;
          sp1A4 = temp_t7_8;
          var_s5 += 0x10;
          var_s2 = var_t1;
          var_s6 += *((s16 *) (((char *) arg0) + 0x10));
          if (temp_t7_8 < sp7C)
          {
            var_a2 = *var_s5;
            if (var_a2 > 0)
            {
              goto loop_64;
            }
          }
        }
      }
    }
    temp_t8_15 = sp18C;
    if (var_s3 != 0)
    {
      sp18C = ((unsigned char *) temp_t8_15) + 8;
      *((s32 *) (((char *) temp_t8_15) + 0)) = 0xBA001402;
      *((s32 *) (((char *) temp_t8_15) + 4)) = 0;
    }
    var_a0 = *((u8 *) (((char *) arg0) + 0x30));
    temp_t9_6 = sp18C;
    if (var_a0 == 1)
    {
      sp18C = ((unsigned char *) temp_t9_6) + 8;
      *((s32 *) (((char *) temp_t9_6) + 0)) = 0xBA001402;
      *((s32 *) (((char *) temp_t9_6) + 4)) = 0;
      temp_t7_9 = sp18C;
      sp18C = ((unsigned char *) temp_t7_9) + 8;
      *((s32 *) (((char *) temp_t7_9) + 4)) = 0x2000;
      *((s32 *) (((char *) temp_t7_9) + 0)) = 0xBA000C02;
      temp_t7_10 = sp18C;
      sp18C = ((unsigned char *) temp_t7_10) + 8;
      *((s32 *) (((char *) temp_t7_10) + 4)) = 0xC00;
      *((s32 *) (((char *) temp_t7_10) + 0)) = 0xBA000903;
      goto block_109;
    }
  }
  else
  {
    var_s2_2 = *((s16 *) (((char *) arg0) + 0));
    temp_a0_4 = *((s16 *) (((char *) arg0) + 2));
    var_ra_2 = temp_a0_4;
    var_v1_2 = (s32) ((((f32) var_s2_2) + (((f32) (*((s16 *) (((char *) arg0) + 4)))) * var_ft4)) - 1.0f);
    var_t2 = (s32) ((((f32) temp_a0_4) + (((f32) (*((s16 *) (((char *) arg0) + 6)))) * var_fa1)) - 1.0);
    if ((var_s2_2 >= D_80283960) || (temp_a0_4 >= D_80283964))
    {
    }
    else
      if ((var_v1_2 < D_80283968) || (var_t2 < D_8028396C))
    {
    }
    else
    {
      if (var_s2_2 < D_80283968)
      {
        var_s2_2 = (s16) D_80283968;
      }
      if (var_v1_2 >= D_80283960)
      {
        var_v1_2 = D_80283960 - 1;
      }
      if (var_ra_2 < D_8028396C)
      {
        var_ra_2 = (s16) D_8028396C;
      }
      if (var_t2 >= D_80283964)
      {
        var_t2 = D_80283964 - 1;
      }
      temp_v0_8 = (((((*((u8 *) (((char *) arg0) + 0x18))) << 8) & 0xF800) | (((*((u8 *) (((char *) arg0) + 0x19))) * 8) & 0x7C0)) | ((((s32) (*((u8 *) (((char *) arg0) + 0x1A)))) >> 2) & 0x3E)) | ((((s32) (*((u8 *) (((char *) arg0) + 0x1B)))) >> 7) & 1);
      temp_t8_16 = sp18C;
      sp18C = ((unsigned char *) temp_t8_16) + 8;
      *((s32 *) (((char *) temp_t8_16) + 0)) = 0xBB000000;
      *((s32 *) (((char *) temp_t8_16) + 4)) = 0x80008000;
      temp_t9_7 = sp18C;
      sp18C = ((unsigned char *) temp_t9_7) + 8;
      *((s32 *) (((char *) temp_t9_7) + 4)) = 0x300000;
      *((s32 *) (((char *) temp_t9_7) + 0)) = 0xBA001402;
      temp_a2 = sp18C;
      sp18C = ((unsigned char *) temp_a2) + 8;
      *((s32 *) (((char *) temp_a2) + 0)) = 0xF7000000;
      *((s32 *) (((char *) temp_a2) + 4)) = (s32) ((temp_v0_8 << 0x10) | temp_v0_8);
      temp_a3_3 = sp18C;
      sp18C = ((unsigned char *) temp_a3_3) + 8;
      *((s32 *) (((char *) temp_a3_3) + 0)) = (s32) ((((var_v1_2 & 0x3FF) << 0xE) | 0xF6000000) | ((var_t2 & 0x3FF) * 4));
      *((s32 *) (((char *) temp_a3_3) + 4)) = (s32) (((var_s2_2 & 0x3FF) << 0xE) | ((var_ra_2 & 0x3FF) * 4));
      temp_t7_11 = sp18C;
      sp18C = ((unsigned char *) temp_t7_11) + 8;
      *((s32 *) (((char *) temp_t7_11) + 4)) = 0;
      *((s32 *) (((char *) temp_t7_11) + 0)) = 0xBA001402;
      temp_t6_5 = sp18C;
      sp18C = ((unsigned char *) temp_t6_5) + 8;
      *((s32 *) (((char *) temp_t6_5) + 4)) = 0x80008000;
      *((s32 *) (((char *) temp_t6_5) + 0)) = 0xBB000001;
    }
    block_109:
    temp_a0_2 = *((u8 *) (((char *) arg0) + 0x30));

  }
  temp_t9_8 = sp18C;
  if (temp_a0_2 == 2)
  {
    sp18C = ((unsigned char *) temp_t9_8) + 8;
    *((s32 *) (((char *) temp_t9_8) + 0)) = 0xBA000E02;
    *((s32 *) (((char *) temp_t9_8) + 4)) = 0;
  }
  temp_t8_17 = sp18C;
  ;
  *((s32 *) (((char *) temp_t8_17) + 4)) = 0;
  *((s32 *) (((char *) temp_t8_17) + 0)) = 0xB8000000;
  *((void **) (((char *) arg0) + 0x3C)) = ((unsigned char *) temp_t8_17) + 8;
  return sp188;
}

