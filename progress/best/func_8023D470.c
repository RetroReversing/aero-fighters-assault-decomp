s32 func_8023D604(s32);
s32 func_8023D6E4(s32 arg0, s32 *);
s32 func_80245AD0();
s32 func_80245B14();
s32 func_802465B0(s32, s32 *);
s32 osRecvMesg(s32, s32 *, s32);
extern s32 D_80283970;
extern u8 D_80285EB1;
s32 func_8023D470(s32 arg0, s8 *arg1)
{
  int sp67;
  s32 *var_v0;
  register s32 sp6C;
  s32 sp68;
  s32 var_s0;
  s32 var_s1;
  char sp54[0x13];
  register u8 var_s5;
  var_s5 = 0;
  var_s1 = 3;
  func_80245AD0();
  do
  {
    func_8023D604((var_s0 = 0, 0));
    func_802465B0(1, &D_80283970);
    osRecvMesg(arg0, &sp68, 1);
    sp6C = func_802465B0(0, &D_80283970);
    osRecvMesg(arg0, &sp68, 1);
    func_8023D6E4(arg0, &sp67);
    var_v0 = sp54;
    if (((s32) D_80285EB1) > 0)
    {
      do
      {
        for (;;)
        {
          if (!((*((u8 *) (((char *) var_v0) + 2))) & 4))
          {
            var_s1 -= 1;
          }
          else
          {
            var_s0 += (0, 1); var_v0 += 1;
            if (var_s0 < ((s32) D_80285EB1))
            {
              continue;
            }
          }
          break;
        }

      }
      while (0);
    }
    var_s0 = 0;
    if ((var_s0 ^ D_80285EB1) == 0)
    {
      var_s1 = 0;
    }
  }
  while (var_s1 > 0);
  var_v0 = sp54;
  if (((s32) D_80285EB1) > 0)
  {
    do
    {
      if (((*((u8 *) (((char *) var_v0) + 3))) == 0) && ((*((u8 *) (((char *) var_v0) + 2))) & 1))
      {
        var_s5 = (var_s5 | (1 << var_s0)) & (0xFF & 0xFFFFFFFFFFFFFFFFu);
      }
      var_s0 += 1;
      var_v0 += 1;
    }
    while ((var_s0 + 1) < (((s32) D_80285EB1) + 1));
  }
  func_80245B14();
  *arg1 = var_s5;
  return sp6C;
}

