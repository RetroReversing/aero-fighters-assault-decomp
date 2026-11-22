s32 func_8023413C();
s32 func_802344F4();
f32 func_8023499C();
extern char D_80323610[];
void func_80290414(void *arg0, f32 arg1)
{
  f32 temp_fv1;
  register long temp_v0;
  f32 sp24;
  register f32 temp_fv0;
  if ((*((u8 *) (((char *) arg0) + 0x10))) != 0)
  {
    if ((*((f32 *) (((char *) arg0) + 0x18C))) < 0.0f)
    {
      *((f32 *) (((char *) arg0) + 0x18C)) = arg1;
    }
    temp_fv1 = arg1 - (*((f32 *) (((char *) arg0) + 0x18C)));
    sp24 = temp_fv1;
    func_8023413C(arg1, 0, *((s32 *) (((char *) arg0) + 0x358)));
    if ((*((f32 *) (((char *) arg0) + 0x194))) > 0.0f)
    {
      if ((*((f32 *) (((char *) arg0) + 0x190))) < 0.0f)
      {
        *((f32 *) (((char *) arg0) + 0x190)) = temp_fv1;
      }
      if ((*((f32 *) (((char *) arg0) + 0x180))) < 0.0f)
      {
        *((f32 *) (((char *) arg0) + 0x180)) = temp_fv1;
      }
 do { if ((*((f32 *) (((char *) arg0) + 0x194))) <= (temp_fv1 - (*((f32 *) (((char *) arg0) + 0x190))))) { *((f32 *) (((char *) arg0) + 0x194)) = 0.0f; return; } if ((*((f32 *) (((char *) arg0) + 0x184))) <= (temp_fv1 - (*((f32 *) (((char *) arg0) + 0x180))))) { *((f32 *) (((char *) arg0) + 0x180)) = temp_fv1; *((s16 *) (((char *) arg0) + 0x17C)) += 1; *((s16 *) (((char *) arg0) + 0x17C)) = (s16) (((s16) (*((s16 *) (((char *) arg0) + 0x17C)))) % 12); } sp24 = temp_fv1; func_802344F4(*((s32 *) (((char *) arg0) + 0x360)), 9, (*((s32 *) (D_80323610 + ((*((s16 *) (((char *) arg0) + 0x17C))) * 4)))) + 0xB, 0); func_8023413C(*((s32 *) (((char *) arg0) + 0x360))); goto block_13; } while (0);
    }
    block_13:
    sp24 = temp_fv1;

    temp_fv0 = func_8023499C();
    temp_v0 = *((s32 *) (((char *) arg0) + 0x130));
    if ((temp_v0 == 0) && ((((s32) (temp_fv0 * 1000.0f)) % 90) == 0))
    {
      *((s32 *) (((char *) arg0) + 0x130)) = 4;
      return;
    }
    if (temp_v0 != 0)
    {
      if ((*((f32 *) (((char *) arg0) + 0x138))) <= (temp_fv1 - (*((f32 *) (((char *) arg0) + 0x134)))))
      {
        *((f32 *) (((char *) arg0) + 0x134)) = temp_fv1;
        if (temp_v0 == 4)
        {
          *((s32 *) (((char *) arg0) + 0x130)) = 2;
          func_802344F4(*((s32 *) (((char *) arg0) + 0x35C)), 9, 0x10, 0);
          goto block_24;
        }
        if (temp_v0 == 2)
        {
          *((s32 *) (((char *) arg0) + 0x130)) = 3;
          func_802344F4(*((s32 *) (((char *) arg0) + 0x35C)), 9, 0xF, 0);
          goto block_24;
        }
        if (temp_v0 == 3)
        {
          *((s32 *) (((char *) arg0) + 0x130)) = 0;
          return;
        }
        goto block_24;
      }
      block_24:
      func_8023413C(*((s32 *) (((char *) arg0) + 0x35C)));

    }
  }
}
