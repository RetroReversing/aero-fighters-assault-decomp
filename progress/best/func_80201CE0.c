s32 func_802011D0();
s32 func_80231C9C();
extern char D_80251F44[];
extern s32 D_80256DE4;
extern u16 D_80280BFA;
void func_80201CE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u32 temp_a1;
  s32 *var_a0_3;
  s32 *var_a0_4;
  register s32 *var_v0;
  s32 temp_v0_3;
  s32 *var_v1_2;
  s32 *var_v1_3;
  s32 *var_v1_4;
  f32 temp_fv0;
  f32 temp_fv0_2;
  s32 temp_v0;
  unsigned int temp_v0_2;
  register s32 *var_v1;
  s32 *var_a0_2;
  u16 temp_v1;
  void *temp_a2;
  temp_v1 = D_80280BFA;
  if (((s32) arg0) >= temp_v1)
  {
    func_80231C9C("emitId < AUD_NEMITTERS", "_aobj.c", 0x1D5);
  }
  if ((arg0 < ((s32) D_80280BFA)) && (arg0 != 0xFF))
  {
    var_v0 = &arg1;
    temp_a2 = (arg0 * 0xB4) + D_80256DE4;
    loop_5:
    temp_v0 = ((s32) (((s8 *) var_v0) + 3)) & (~3);

    temp_a1 = *((u32 *) temp_v0);
    temp_v0_2 = temp_v0 + 4;
    switch (temp_a1)
    {
      case 1:
        if (temp_v0_2 & 1)
      {
        var_v1 = var_v0 - 0x16;
        var_v0 = temp_v0_2 + 7;
      }
      else
        if (temp_v0_2 & 2)
      {
        var_v0 = temp_v0_2 + 0xA;
        var_v1 = var_v0 - 0x28;
      }
      else
      {
        var_v0 = ((temp_v0_2 + 7) & (~7)) + 8;
        var_v1 = var_v0;
      }
        temp_fv0 = (f32) (*((f64 *) (((char *) var_v1) + (-8))));
        *((f32 *) (((char *) temp_a2) + 0x90)) = (f32) (temp_fv0 * temp_fv0);
        goto loop_5;

      case 2:
        if (temp_v0_2 & 1)
      {
        var_v0 = temp_v0_2 + 7;
        var_v1_2 = var_v0 - 0x16;
      }
      else
      {
        if (temp_v0_2 & 2)
        {
          var_v0 = temp_v0_2 + 0xA;
          var_a0_2 = var_v0 - 0x28;
        }
        else
        {
          var_v0 = ((temp_v0_2 + 7) & (~7)) + 8;
          var_a0_2 = var_v0;
        }
        var_v1_2 = var_a0_2;
      }
        temp_fv0_2 = (f32) (*((f64 *) (((char *) var_v1_2) + (-8))));
        *((f32 *) (((char *) temp_a2) + 0x94)) = (f32) (temp_fv0_2 * temp_fv0_2);
        goto loop_5;

      case 4:
        if (temp_v0_2 & 1)
      {
        var_v0 = temp_v0_2 + 7;
        var_v1_3 = var_v0 - 0x16;
      }
      else
      {
        if (temp_v0_2 & 2)
        {
          var_v0 = temp_v0_2 + 0xA;
          var_a0_3 = var_v0 - 0x28;
        }
        else
        {
          var_v0 = ((temp_v0_2 + 7) & (~7)) + 8;
          var_a0_3 = var_v0;
        }
        var_v1_3 = var_a0_3;
      }
        *((f32 *) (((char *) temp_a2) + 0x84)) = (f32) (*((f64 *) (((char *) var_v1_3) + (-8))));
        goto loop_5;

      case 3:
        if ((((((((((temp_v0_2 & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 1)
      {
        var_v0 = temp_v0_2 + 7;
        var_v1_4 = var_v0 - 0x16;
      }
      else
      {
        if (temp_v0_2 & 2)
        {
          var_v0 = temp_v0_2 + 0xA;
          var_a0_4 = var_v0 - 0x28;
        }
        else
        {
          var_v0 = ((temp_v0_2 + 7) & (~7)) + 8;
          var_a0_4 = var_v0;
        }
        var_v1_4 = var_a0_4;
      }
        *((f32 *) (((char *) temp_a2) + 0x80)) = (f32) (*((f64 *) (((char *) var_v1_4) + (-8))));
        goto loop_5;

      case 5:
        temp_v0_3 = (temp_v0_2 + 3) & (~3);
        var_v0 = temp_v0_3 + 4;
        *((s32 *) (((char *) temp_a2) + 0x98)) = (s32) (*((s32 *) temp_v0_3));
        goto loop_5;

      case 0:

      default:
        func_802011D0(D_80251F44, temp_a1, temp_a2, -8);
        break;

    }

  }
}

