s32 func_8022C838(s32 *, s32 *, s32, s32, s32);
s32 func_8022CA14(s32 *, s32 *, s32 *);
s32 func_80231A24(s32 *, s32);
s32 osCreateMesgQueue(s32 *, s32 *, s32);
extern s32 D_80000300;
extern s32 D_80254F68;
extern s32 D_80254F80;
extern s32 D_80254F98;
extern s32 D_80254FB0;
extern s32 D_80281218;
extern s32 D_802814C0;
extern s32 D_802814D8;
extern s32 D_80281500;
extern s32 D_80283518;
void func_80230FF8(void)
{
  s32 *__base_D_80000300;
  unsigned char var_s0;
  osCreateMesgQueue(&D_80281500, &D_802814D8, 0xA);
  var_s0 = 0x10;
  __base_D_80000300 = &D_80000300;
 if (1) { } if (1) { } if (1) { } if (1) { } if (1) { } if (1) { }
  if ((*__base_D_80000300) != 0)
  {
    var_s0 = 2;
    if ((*__base_D_80000300) != 1)
    {
      var_s0 = 0x1E;
      if ((*__base_D_80000300) != 2)
      {
        func_80231A24(&D_80254FB0, *__base_D_80000300);
        var_s0 = 0x10;
      }
      else
        if (var_s0)
      {
        func_80231A24(&D_80254F98, *__base_D_80000300);
      }
      else
      {
        func_80231A24(&D_80254F98, *__base_D_80000300);
      }
    }
    else
      if (var_s0)
    {
      func_80231A24(&D_80254F80, *__base_D_80000300);
    }
    else
    {
      func_80231A24(&D_80254F80, *__base_D_80000300);
    }
  }
  else
  {
    func_80231A24(&D_80254F68, *__base_D_80000300);
  }
  func_8022C838(&D_80281218, &D_80283518, 0x7F, var_s0 & 0xFF, 1);
  func_8022CA14(&D_80281218, &D_80283518, &D_802814C0);
}
