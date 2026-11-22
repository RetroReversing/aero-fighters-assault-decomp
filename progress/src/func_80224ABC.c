s32 func_802003C0(s32);
s32 func_8021E400(s32);
s32 func_802279FC(s32);
s32 func_80227ABC(s32);
s32 func_80227B38(s32);
s32 func_80227BB4(s32);
s32 func_80227C30(s32);
s32 func_80227CAC(s32);
s32 func_80227D6C(s32);
s32 func_80227DE8(s32);
s32 func_80227E9C(s32);
s32 func_80227F50(s32);
s32 func_80228004(s32);
s32 func_8022B374(s32 *);
extern s32 D_80275F7C;
s32 func_80224ABC(u32 arg0, s32 arg1)
{
  s32 __repair_phase_sp24;
  s32 *__base_D_80275F7C;
  s32 sp24;
  s32 var_v1;
  __repair_phase_sp24 = 0;
  __base_D_80275F7C = &D_80275F7C;
  func_8022B374(__base_D_80275F7C);
  var_v1 = __repair_phase_sp24;
  do
  {
    switch (arg0)
    {
      case 0x55565351:
        __repair_phase_sp24 = func_80228004(arg1);
        block_30:
      var_v1 = __repair_phase_sp24;

        break;

      case 0x5556454E:
        __repair_phase_sp24 = func_80227ABC(arg1);
        goto block_30;

      case 0x55565452:
        __repair_phase_sp24 = func_80227D6C(arg1);
        goto block_30;

      case 0x55564354:
        __repair_phase_sp24 = func_802279FC(arg1);
        goto block_30;

      case 0x55564C56:
        __repair_phase_sp24 = func_80227B38(arg1);
        goto block_30;

      case 0x55564D44:
        __repair_phase_sp24 = func_80227CAC(arg1);
        goto block_30;

      case 0x55565458:
        __repair_phase_sp24 = func_80227DE8(arg1);
        goto block_30;

      case 0x55565449:
        __repair_phase_sp24 = func_80227E9C(arg1);
        goto block_30;

      case 0x55564C54:
        __repair_phase_sp24 = func_80227C30(arg1);
        goto block_30;

      case 0x5556414E:
        __repair_phase_sp24 = func_802003C0(arg1);
        goto block_30;

      case 0x55564654:
        __repair_phase_sp24 = func_8021E400(arg1);
        goto block_30;

      case 0x55564254:
        __repair_phase_sp24 = func_80227F50(arg1);
        goto block_30;

      case 0x55565450:
        __repair_phase_sp24 = func_80227BB4(arg1);
        goto block_30;

    }

    sp24 = var_v1;
  }
  while (func_8022B374(__base_D_80275F7C) == 0);
  return var_v1;
}

