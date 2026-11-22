s32 osVirtualToPhysical(s32, s32 **, s32);
extern s32 D_8024E858;
extern s32 *D_80273B90;
extern s32 D_80274388;
void func_8022261C(void)
{
  s32 *temp_v1_14;
  s32 *__repair_phase_temp_v1_14;
  register s32 *temp_v1_15;
  register s32 *temp_v1_4;
  register s32 *sp1C;
  register s32 *temp_v1_6;
  register s32 *temp_v1_7;
  register s32 *temp_v1_8;
  __repair_phase_temp_v1_14 = D_80273B90;
  D_80273B90 = ((s8 *) __repair_phase_temp_v1_14) + 8;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 4)) = 0x5003C0;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 0)) = 0xED000000;
  __repair_phase_temp_v1_14 = D_80273B90;
  D_80273B90 = ((s8 *) __repair_phase_temp_v1_14) + 8;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 0)) = 0xE7000000;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 4)) = 0;
  temp_v1_14 = D_80273B90;
 D_80273B90 = ((s8 *) temp_v1_14) + 8; *((s32 *) (((char *) temp_v1_14) + 4)) = 0x0F0A4000; *((s32 *) (((char *) temp_v1_14) + 0)) = 0xB900031D; temp_v1_4 = D_80273B90; D_80273B90 = temp_v1_4 + 8;
  *((s32 *) (((char *) temp_v1_4) + 0)) = 0xE7000000;
  if (1)
  {
    *((s32 *) (((char *) temp_v1_4) + 4)) = 0;
    __repair_phase_temp_v1_14 = D_80273B90;
    D_80273B90 = ((s8 *) __repair_phase_temp_v1_14) + 8;
    *((s32 *) (((char *) __repair_phase_temp_v1_14) + 0)) = 0xBA001402;
    *((s32 *) (((char *) __repair_phase_temp_v1_14) + 4)) = 0x300000;
    temp_v1_6 = D_80273B90;
    D_80273B90 = temp_v1_6 + 8;
    *((s32 *) (((char *) temp_v1_6) + 0)) = 0xE7000000;
    *((s32 *) (((char *) temp_v1_6) + 4)) = 0;
    temp_v1_7 = D_80273B90;
    D_80273B90 = temp_v1_7 + 8;
    *((s32 *) (((char *) temp_v1_7) + 0)) = 0xF7000000;
    *((s32 *) (4 + ((char *) temp_v1_7))) = 0xFFFCFFFC;
    temp_v1_8 = D_80273B90;
  }
  D_80273B90 = temp_v1_8 + 8;
  *((s32 *) (((char *) temp_v1_8) + 0)) = 0xE7000000;
  *((s32 *) (((char *) temp_v1_8) + 4)) = 0;
  __repair_phase_temp_v1_14 = D_80273B90;
  D_80273B90 = ((s8 *) __repair_phase_temp_v1_14) + 8;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 0)) = 0xFF10013F;
  temp_v1_14 = __repair_phase_temp_v1_14;
  __repair_phase_temp_v1_14 = 0;
  *((s32 *) (((char *) temp_v1_14) + 4)) = osVirtualToPhysical((s32) D_80274388, &D_80273B90, 0xE7000000);
  __repair_phase_temp_v1_14 = D_80273B90;
  D_80273B90 = ((s8 *) __repair_phase_temp_v1_14) + 8;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 0)) = 0xE7000000;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 4)) = 0;
  __repair_phase_temp_v1_14 = D_80273B90;
  D_80273B90 = ((s8 *) __repair_phase_temp_v1_14) + 8;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 0)) = 0xF64FC3BC;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 4)) = 0;
  __repair_phase_temp_v1_14 = D_80273B90;
  D_80273B90 = ((s8 *) __repair_phase_temp_v1_14) + 8;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 0)) = 0xE7000000;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 4)) = 0;
  __repair_phase_temp_v1_14 = D_80273B90;
  D_80273B90 = ((s8 *) __repair_phase_temp_v1_14) + 8;
  *((s32 *) (((char *) __repair_phase_temp_v1_14) + 0)) = 0xFF10013F;
  sp1C = __repair_phase_temp_v1_14;
  __repair_phase_temp_v1_14 = 0;
  if (1)
  {
    *((s32 *) (((char *) sp1C) + 4)) = osVirtualToPhysical(D_8024E858, &D_80273B90, 0xE7000000);
    __repair_phase_temp_v1_14 = D_80273B90;
    D_80273B90 = ((s8 *) __repair_phase_temp_v1_14) + 8;
    *((s32 *) (((char *) __repair_phase_temp_v1_14) + 4)) = 0;
    *((s32 *) (((char *) __repair_phase_temp_v1_14) + 0)) = 0xE7000000;
    temp_v1_15 = D_80273B90;
    D_80273B90 = temp_v1_15 + 8;
    *((s32 *) (((char *) temp_v1_15) + 0)) = 0xBA001402;
  }
  *((s32 *) (((char *) temp_v1_15) + 4)) = 0x100000;
  temp_v1_14 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v1_14) + 8;
  *((s32 *) (((char *) temp_v1_14) + 4)) = 0;
  *((s32 *) (((char *) temp_v1_14) + 0)) = 0xE7000000;
}
