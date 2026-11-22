s32 func_80205AA0(s32, s32);
s32 func_80205B0C(s32, s32, s32 *);
s32 func_80205BBC(s32, s32 *);
s32 func_80205C7C(s32, s32, s32, s32, f32, f32, f32);
s32 func_80205D70(s32, s32, s32, s32, s32);
s32 func_80205E0C(s32, s32);
s32 func_80205F60(s32);
s32 func_8021E66C(s32);
s32 func_80220340();
s32 func_80221BC4();
s32 func_80224CA8(s32);
s32 math_mtx4Identity(s32 *);
s32 func_8022C354();
s32 func_8022C46C(s32);
s32 func_802E9B5C(s32);
s32 func_80309CC8(s32, s32, s32);
extern f32 D_80340D60;
extern f32 D_80340D64;
extern f32 D_80340D68;
extern f32 D_80340D6C;
extern s32 func_802CE36C;
void func_802A8568(s32 arg0)
{
  f32 sp78[3];
  char sp48[0x30];
  s32 var_s0;
  s32 var_s4;
  var_s4 = 0;
  do
  {
    func_8022C354();
  }
  while (0);
  do
  {
    func_802E9B5C((var_s0 = 0, arg0 + 0x362C));
    var_s0 += 1;
    if ((func_8022C46C(var_s0) ^ 0) == 3)
    {
      var_s4 = 1;
    }
  }
  while (var_s0 != 4);
  if (var_s4 != 0)
  {
    func_80224CA8(0xF);
    func_80224CA8(6);
    math_mtx4Identity(sp48);
    sp78[0] = D_80340D60;
    sp78[1] = D_80340D64;
    sp78[2] = D_80340D68;
    func_8021E66C(0);
    func_80205AA0(0, 1);
    func_80205C7C(0, 0xC0800000, 0x40800000, 0xC0400000, 3.0f, 10.0f, D_80340D6C);
    func_80205D70(0, 0x10, 0x130, 0x10, 0xE0);
    func_80205E0C(0, 2);
    func_80309CC8(0, 0, 0);
    func_80205B0C(0, 1, &func_802CE36C);
    loop_6:
    func_80220340();

    func_80205BBC(0, sp48);
    func_80205F60(0);
    func_80221BC4();
    goto loop_6;
  }
}

