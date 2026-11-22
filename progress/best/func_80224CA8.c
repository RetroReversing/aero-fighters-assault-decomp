extern unsigned short D_80280BCC;
extern unsigned short D_80280BCE;
extern unsigned short D_80280BD0;
extern unsigned short D_80280BD2;
extern unsigned short D_80280BD6;
extern unsigned short D_80280BCA;
extern unsigned short D_80280BDC;
extern unsigned short D_80280BC2;
extern int D_80280B74;
extern int D_80280B78;
extern int D_80280B7C;
extern int D_80280B80;
extern int D_80280B84;
extern int D_80280B88;
extern int D_80280B8C;
extern int D_80280B90;
extern int D_80280B94;
extern int D_80280B98;
extern int D_80280B6C;
extern int D_80280B70;
extern int D_80280B9C;
extern int D_80280BA0;
extern int D_80280BA4;
extern int D_80280BAC;
extern int D_80280BB4;
s32 func_80207210();
s32 func_802235C8();
void *func_80224ABC();
s32 func_8022BBAC();
s32 func_8022D040();
s32 func_80231A24();
s32 func_80234800();
extern char D_80253A20[];
extern char D_80253A48[];
extern char D_80253A6C[];
extern char D_80253A94[];
extern char D_80253AB8[];
extern char D_80253ADC[];
extern char D_80253B00[];
extern char D_80253B24[];
extern char D_80253B48[];
extern char D_80253B68[];
extern char D_80253B94[];
extern void *D_802751E0;
extern s32 D_8027524C;
extern char D_80275250[];
extern s32 *D_80275A20;
extern s32 *D_80275A24;
extern s32 D_80275F7C;
extern s32 D_80275F88;
extern char D_80280B68[];
extern char D_80280BC0[];
void func_80224CA8(s32 arg0)
{
  s32 spAC;
  s32 sp58;
  s32 *temp_v0_2;
  s32 temp_a1_6;
  s32 temp_s0;
  s32 temp_s0_10;
  s32 temp_s0_11;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s0_4;
  s32 temp_s0_5;
  s32 temp_s0_6;
  s32 temp_s0_7;
  s32 temp_s0_8;
  s32 temp_s0_9;
  s32 temp_v1;
  s32 var_a0;
  s32 var_a0_2;
  s32 var_s1;
  s32 var_s1_10;
  s32 var_s1_11;
  s32 var_s1_2;
  s32 var_s1_3;
  s32 var_s1_4;
  s32 var_s1_5;
  long var_s1_6;
  s32 var_s1_7;
  s32 var_s1_8;
  s32 var_s1_9;
  int var_s2;
  s32 var_v0;
  s32 var_v0_2;
  char *var_v1;
  char *var_v1_2;
  s32 temp_a1;
  s32 temp_a1_2;
  s32 temp_a1_3;
  s32 temp_a1_4;
  s32 temp_a1_5;
  s32 temp_a1_7;
  s32 temp_a1_8;
  s32 temp_a2;
  s32 temp_a2_2;
  s32 temp_a3;
  s32 temp_a3_10;
  s32 temp_a3_11;
  s32 temp_a3_2;
  s32 temp_a3_3;
  s32 temp_a3_4;
  s32 temp_a3_5;
  s32 temp_a3_6;
  s32 temp_a3_7;
  s32 temp_a3_8;
  s32 temp_a3_9;
  s32 temp_s5;
  s32 var_s3;
  s32 var_s3_2;
  void *temp_a2_3;
  void *temp_v0;
  func_802235C8();
  func_80207210(0x68);
  func_8022D040(0);
  D_80275A20 = D_80275250;
  D_80275A24 = &sp58;
  temp_v0 = func_80224ABC(0x55564C56, (unsigned) arg0);
  *((void **) (((char *) D_80280B68) + 0)) = temp_v0;
  if (temp_v0 == NULL)
  {
    func_80231A24(D_80253A20, arg0);
    return;
  }
  temp_a1 = *((u16 *) (((char *) temp_v0) + 0xC));
  if (((s32) D_80280BCC) < ((s32) temp_a1))
  {
    func_80231A24(D_80253A48, temp_a1);
  }
  temp_a2 = *((u16 *) (((char *) temp_v0) + 0x14));
  if (((s32) D_80280BCE) < ((s32) temp_a2))
  {
    func_80231A24(D_80253A6C, temp_a2, temp_a2);
  }
  temp_a1_2 = *((u16 *) (((char *) temp_v0) + 0x1C));
  if (((s32) D_80280BD0) < ((s32) (*((u16 *) (((char *) temp_v0) + 0x1C)))))
  {
    func_80231A24(D_80253A94, temp_a1_2);
  }
  temp_a2_2 = *((u16 *) (((char *) temp_v0) + 0x24));
  if (((s32) D_80280BD2) < ((s32) temp_a2_2))
  {
    func_80231A24(D_80253AB8, temp_a2_2, temp_a2_2);
  }
  temp_s5 = *((u16 *) (((char *) temp_v0) + 0x2C));
  if (((s32) D_80280BD6) < ((s32) temp_s5))
  {
    func_80231A24(D_80253ADC, temp_s5);
  }
  temp_a1_3 = *((u16 *) (((char *) temp_v0) + 4));
  if (((s32) D_80280BCA) < ((s32) temp_a1_3))
  {
    func_80231A24(D_80253B00, *((u16 *) (((char *) temp_v0) + 4)));
  }
  temp_a1_4 = *((u16 *) (((char *) temp_v0) + 0x3C));
  if (((s32) D_80280BDC) < ((s32) temp_a1_4))
  {
    func_80231A24(D_80253B24, temp_a1_4);
  }
  temp_a1_5 = *((u16 *) (((char *) temp_v0) + 0x4C));
  if (((s32) D_80280BC2) < ((s32) temp_a1_5))
  {
    func_80231A24(D_80253B48, temp_a1_5);
  }
  temp_a1_6 = D_80275F7C;
  temp_s0_6 = (D_80275F7C & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu;
  var_s1 = 0;
  var_s2 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0x2C)))) > 0)
  {
    do
    {
      temp_a3 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 0x28))) + var_s1));
      var_s3 = temp_a3;
      if (D_802751E0 != NULL)
      {
        temp_a1_7 = *((u16 *) (((char *) D_802751E0) + 0));
        var_v0 = 0;
        var_a0 = 0;
        if (((s32) temp_a1_7) > 0)
        {
          var_v1 = *((u16 **) (((char *) D_802751E0) + 4));
          for (;;)
          {
            var_v0 += 1;
            var_v1 += 2;
            if (temp_a3 == (*((u16 *) var_v1)))
            {
              var_s3 = *((u16 *) ((*((s32 *) (((char *) D_802751E0) + 8))) + var_a0));
            }
            else
            {
              var_a0 += 2;
              if (var_v0 < ((s32) temp_a1_7))
              {
                continue;
              }
            }
            break;
          }

        }
      }
      temp_s0 = temp_a3 * 4;
      temp_v0_2 = D_8027524C + temp_s0;
      if ((*temp_v0_2) == 0)
      {
        temp_v1 = *((s32 *) (D_8027524C + (var_s3 * 4)));
        if (temp_v1 != 0)
        {
          *temp_v0_2 = temp_v1;
        }
        else
        {
          *((s32 *) (D_8027524C + temp_s0)) = func_80224ABC(0x55565449, (u32) var_s3, D_802751E0, temp_a3);
        }
      }
      var_s2 += 1;
      var_s1 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0x2C)))));
    var_s2 = 0;
  }
  func_8022BBAC(temp_s0_6, temp_a1_6);
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0xC)))) > 0)
  {
    do
    {
      var_s1_2 = 0;
    }
    while (0);
    do
    {
      temp_a3_2 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 8))) + var_s1_2));
      temp_s0_2 = temp_a3_2 * 4;
      if ((*((s32 *) (D_80280B74 + temp_s0_2))) == 0)
      {
        *((s32 *) (D_80280B74 + temp_s0_2)) = func_80224ABC(0x55564C54, temp_a3_2);
      }
      var_s2 += 1;
      var_s1_2 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0xC)))));
    var_s2 = 0;
  }
  D_80280B78 = (s32) (*((u16 *) (((char *) temp_v0) + 0xC)));
  var_s1_3 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0x14)))) > 0)
  {
    do
    {
      temp_s0_6 = (u16) (*((u16 *) ((*((s32 *) (((char *) temp_v0) + 0x10))) + var_s1_3)));
      temp_s0_3 = temp_s0_6 * 4;
      temp_a2_3 = *((s32 *) (D_80280B7C + temp_s0_3));
      if (temp_a2_3 == NULL)
      {
        *((s32 *) (D_80280B7C + temp_s0_3)) = func_80224ABC(0x5556454E, temp_s0_6, temp_a2_3, temp_s0_6);
      }
      else
        if (var_s1)
      {
        func_80231A24(D_80253B68, temp_s0_6, (u16) temp_a2_3, temp_s0_6);
      }
      else
      {
        func_80231A24(D_80253B68, temp_s0_6, (u16) temp_a2_3, temp_s0_6);
      }
      var_s2 += 1;
      var_s1_3 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0x14)))));
    var_s2 = 0;
  }
  D_80280B80 = (s32) (*((u16 *) (((char *) temp_v0) + 0x14)));
  var_s1_4 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0x1C)))) > 0)
  {
    do
    {
      temp_a3_4 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 0x18))) + var_s1_4));
      temp_s0_4 = temp_a3_4 * 4;
      if ((*((s32 *) (D_80280B84 + temp_s0_4))) == 0)
      {
        *((s32 *) (D_80280B84 + temp_s0_4)) = func_80224ABC(0x55564D44, temp_a3_4);
      }
      var_s2 += 1;
      var_s1_4 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0x1C)))));
    var_s2 = 0;
  }
  D_80280B88 = (s32) (*((u16 *) (((char *) temp_v0) + 0x1C)));
  var_s1_5 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0x24)))) > 0)
  {
    do
    {
      temp_a3_5 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 0x20))) + var_s1_5));
      temp_s0_5 = temp_a3_5 * 4;
      if ((*((s32 *) (D_80280B8C + temp_s0_5))) == 0)
      {
        *((s32 *) (D_80280B8C + temp_s0_5)) = func_80224ABC(0x55564354, temp_a3_5, (void *) (*((u16 *) (((char *) temp_v0) + 0x24))), temp_a3_5);
      }
      var_s2 += 1;
      var_s1_5 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0x24)))));
    var_s2 = 0;
  }
  D_80280B90 = (s32) (*((u16 *) (((char *) temp_v0) + 0x24)));
  var_s1_6 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0x2C)))) > 0)
  {
    do
    {
      temp_a3_6 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 0x28))) + var_s1_6));
      var_s3_2 = temp_a3_6;
      if (D_802751E0 != NULL)
      {
        temp_a1_8 = *((u16 *) (((char *) D_802751E0) + 0));
        var_v0_2 = 0;
        var_a0_2 = 0;
        if (((s32) temp_a1_8) > 0)
        {
          var_v1_2 = *((u16 **) (((char *) D_802751E0) + 4));
          for (;;)
          {
            var_v0_2 += 1;
            var_v1_2 += 2;
            if (temp_a3_6 == (*((u16 *) var_v1_2)))
            {
              var_s3_2 = *((u16 *) ((*((s32 *) (((char *) D_802751E0) + 8))) + var_a0_2));
            }
            else
            {
              var_a0_2 += 2;
              if (var_v0_2 < ((s32) temp_a1_8))
              {
                continue;
              }
            }
            break;
          }

        }
      }
      temp_s0_6 = temp_a3_6 * 4;
      if ((*((s32 *) (D_80280B94 + temp_s0_6))) == 0)
      {
        *((s32 *) (D_80280B94 + temp_s0_6)) = func_80224ABC(0x55565458, var_s3_2, D_802751E0, temp_a3_6);
        func_80234800(*((s32 *) (D_80280B94 + temp_s0_6)));
      }
      var_s2 += 1;
      var_s1_6 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0x2C)))));
    var_s2 = 0;
  }
  D_80280B98 = (s32) (*((u16 *) (((char *) temp_v0) + 0x2C)));
  var_s1_7 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 4)))) > 0)
  {
    do
    {
      temp_a3_7 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 0))) + var_s1_7));
      temp_s0_7 = temp_a3_7 * 4;
      if ((*((s32 *) (D_80280B6C + temp_s0_7))) == 0)
      {
        *((s32 *) (D_80280B6C + temp_s0_7)) = func_80224ABC(0x55565452, temp_a3_7);
      }
      var_s2 += 1;
      var_s1_7 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 4)))));
    var_s2 = 0;
  }
  D_80280B70 = (s32) (*((u16 *) (((char *) temp_v0) + 4)));
  var_s1_8 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0x34)))) > 0)
  {
    do
    {
      temp_a3_8 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 0x30))) + var_s1_8));
      temp_s0_8 = temp_a3_8 * 4;
      if ((*((s32 *) (D_80280B9C + temp_s0_8))) == 0)
      {
        *((s32 *) (D_80280B9C + temp_s0_8)) = func_80224ABC(0x55565351, temp_a3_8);
      }
      var_s2 += 1;
      var_s1_8 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0x34)))));
    var_s2 = 0;
  }
  D_80280BA0 = (s32) (*((u16 *) (((char *) temp_v0) + 0x34)));
  var_s1_9 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0x3C)))) > 0)
  {
    do
    {
      do
      {
        temp_a3_9 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 0x38))) + var_s1_9)); temp_s0_9 = temp_a3_9 * 4;
        if ((*((s32 *) (D_80280BA4 + temp_s0_9))) == 0)
        {
          *((s32 *) (D_80280BA4 + temp_s0_9)) = func_80224ABC(0x5556414E, temp_a3_9);
        }
        var_s2 += 1; var_s1_9 += 2;
      }
      while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0x3C)))));
      var_s2 = 0;
    }
    while (0);
  }
  var_s1_10 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0x44)))) > 0)
  {
    do
    {
      temp_a3_10 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 0x40))) + var_s1_10));
      temp_s0_10 = temp_a3_10 * 4;
      if ((*((s32 *) (D_80280BAC + temp_s0_10))) == 0)
      {
        *((s32 *) (D_80280BAC + temp_s0_10)) = func_80224ABC(0x55564654, temp_a3_10);
      }
      var_s2 += 1;
      var_s1_10 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0x44)))));
    var_s2 = 0;
  }
  var_s1_11 = 0;
  if (((s32) (*((u16 *) (((char *) temp_v0) + 0x4C)))) > 0)
  {
    do
    {
      temp_a3_11 = *((u16 *) ((*((s32 *) (((char *) temp_v0) + 0x48))) + var_s1_11));
      temp_s0_11 = temp_a3_11 * 4;
      if (0)
      {
      }
      if ((*((s32 *) (D_80280BB4 + temp_s0_11))) == 0)
      {
        *((s32 *) (D_80280BB4 + temp_s0_11)) = func_80224ABC(0x55564254, temp_a3_11);
      }
      var_s2 += 1;
      var_s1_11 += 2;
    }
    while (var_s2 < ((s32) (*((u16 *) (((char *) temp_v0) + 0x4C)))));
  }
  if (D_80275F88 != 0)
  {
    func_80231A24(D_80253B94, (u16) D_80275F88);
  }
  func_8022D040(1);
}

