s32 func_8021BA1C();
s32 func_8021BAE0();
s32 func_802AFD80();
f32 func_803116F0();
f32 func_80316B10(void *, s32, f32, f32);
extern s32 D_8032B734;
extern f32 D_80346FC4;
s32 func_803121C0(void *arg0, f32 arg1, f32 arg2, s32 arg3)
{
  f32 temp_fv0;
  s32 temp_a0;
  s32 temp_s4;
  s32 var_s2;
  s32 var_s5;
  s32 var_v0;
  void *var_s0;
  void *var_s0_2;
  var_v0 = *((s32 *) (((char *) arg0) + 0x300));
  temp_s4 = (((((((((((*((s32 *) (((char *) arg0) + 0x374))) & 0xFFFFFF) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu;
 var_s5 = 0; var_s2 = 0; if (var_v0 > 0) { var_s0 = arg0; do { if ((temp_s4 == (*((s32 *) (((char *) var_s0) + 0x290)))) && ((*((f32 *) (((char *) var_s0) + 0x2AC))) > 0.0f)) { *((f32 *) (((char *) var_s0) + 0x2AC)) -= func_80316B10(arg0, *((s32 *) (((char *) var_s0) + 0x2C8)), arg2, arg1); if ((*((f32 *) (((char *) var_s0) + 0x2AC))) <= 0.0f) { *((f32 *) (((char *) var_s0) + 0x2AC)) = 0.0f; func_8021BA1C(*((s32 *) (((char *) var_s0) + 0x290)), 3);
          var_s5 = 2;
          if (var_s5)
          {
            func_802AFD80(D_8032B734, *((s32 *) (((char *) var_s0) + 0x2E4)), 1);
          }
          else
          {
            func_802AFD80(D_8032B734, *((s32 *) (((char *) var_s0) + 0x2E4)), 1);
          }
          *((s32 *) (((char *) arg0) + 0x378)) -= 1;
        }
        var_v0 = *((s32 *) (((char *) arg0) + 0x300));
      }
      var_s2 += 1;
      var_s0 = ((unsigned char *) var_s0) + 4;
    }
    while (var_s2 < var_v0);
    var_s2 = 0;
  }
  if ((temp_s4 == (*((s32 *) (((char *) arg0) + 0x280)))) && ((*((f32 *) (((char *) arg0) + 0x284))) > 0.0f))
  {
    *((f32 *) (((char *) arg0) + 0x284)) -= func_80316B10(arg0, (*((s32 *) (((char *) arg0) + 0x288))) & 0xFFFFFFFFFFFFFFFFu, arg2, arg1);
    if ((*((f32 *) (((char *) arg0) + 0x284))) <= 0.0f)
    {
      *((f32 *) (((char *) arg0) + 0x284)) = 0.0f;
      var_s5 = 2;
      func_8021BA1C(*((s32 *) (((char *) arg0) + 0x280)), 3);
      func_802AFD80(D_8032B734, *((s32 *) (((char *) arg0) + 0x28C)), 1);
      *((s32 *) (((char *) arg0) + 0x378)) -= 1;
    }
  }
  var_s0_2 = arg0;
  if ((*((s32 *) (((char *) arg0) + 0x370))) > 0)
  {
    do
    {
      temp_a0 = *((s32 *) (((char *) var_s0_2) + 0x304));
      if (temp_s4 == temp_a0)
      {
        var_s5 = 1;
        func_8021BAE0(temp_a0);
        *((s32 *) (((char *) var_s0_2) + 0x304)) = 0xFFFF;
        *((s32 *) (((char *) arg0) + 0x378)) -= 1;
      }
      var_s2 += 1;
      var_s0_2 = ((unsigned char *) var_s0_2) + 4;
    }
    while (var_s2 < (*((s32 *) (((char *) arg0) + 0x370))));
  }
  temp_fv0 = func_803116F0(arg0);
  *((f32 *) (((char *) arg0) + 0x4C)) = temp_fv0;
  if (temp_fv0 <= 1.0f)
  {
    *((f32 *) (((char *) arg0) + 0x4C)) = (f32) D_80346FC4;
  }
  return var_s5;
}
