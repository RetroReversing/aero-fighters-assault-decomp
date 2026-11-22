s32 func_802011D0();
s32 func_802012BC();
s32 func_80203654();
s32 func_80231C9C();
extern char D_80251FB8[];
extern s32 D_80256DE4;
extern u16 D_80280BFA;
void func_80201FB8(u8 arg0)
{
  s32 sp1C;
  s32 __repair_phase_sp18;
  register unsigned int temp_t6;
  u32 var_v0;
  u16 temp_v0;
  u8 temp_a0;
  void *var_v1;
 do { do { temp_v0 = D_80280BFA; if (((s32) (arg0 & 0xFF)) >= D_80280BFA) { sp1C = (s32) (arg0 & 0xFF); func_80231C9C("emitId < AUD_NEMITTERS", "_aobj.c", 0x21C, arg0 & 0xFF); } if (((s32) (arg0 & 0xFF)) < ((s32) D_80280BFA)) { func_802011D0(D_80251FB8, (s32) ((unsigned long long) (arg0 & 0xFF))); temp_t6 = (((unsigned) arg0) & 0xFF) * 0xB4; var_v1 = (void *) D_80256DE4; var_v1 = (void *) (((char *) var_v1) + ((s32) temp_t6)); temp_a0 = *((u8 *) (((char *) var_v1) + 0xAD)); var_v0 = temp_t6; if (temp_a0 != 0x11) { func_80203654(); if (1) { __repair_phase_sp18 = temp_t6; var_v0 = __repair_phase_sp18; } temp_t6 = 0; var_v1 = D_80256DE4 + var_v0; } *((s32 *) (((char *) var_v1) + 0xA8)) = 0; *((s8 *) (((char *) (D_80256DE4 + var_v0)) + 0xAD)) = 0x11; *((s32 *) (((char *) (D_80256DE4 + var_v0)) + 0xA0)) = 0; *((s8 *) (((char *) (D_80256DE4 + var_v0)) + 0xB0)) = 0; if ((*((s32 *) (((char *) ((((D_80256DE4 & 0xFFFFu) & 0xFFFFu) & ((((((0xFFFFu & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF)) + var_v0)) + 0x98))) & 0x20) { func_802012BC(var_v0 + D_80256DE4, &D_80256DE4, D_80256DE4); } } } while (0); } while (0);
}
