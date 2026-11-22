s32 func_802012BC(s32);
s32 func_80203654(u8);
s32 func_80231C9C(s32 *, s32 *, s32);
extern s32 D_80256DE4;
extern u16 D_80280BFA;
extern char D_80251CD0[];
extern char D_80251CE8[];
void func_80201448(u8 arg0)
{
  char *__repair_addr;
  s32 temp_v1_2;
  unsigned sp18;
  s32 temp_v0_2;
  s32 __repair_phase_temp_v0_2;
  register s32 sp1C;
  void *temp_a1;
  char var_a3;
  __repair_phase_temp_v0_2 = D_80280BFA;
  var_a3 = arg0 & 0xFF;
  temp_v0_2 = var_a3;
  if (var_a3 >= ((s32) __repair_phase_temp_v0_2))
  {
    s32 __repair_branch_sp1C_0;
    __repair_branch_sp1C_0 = temp_v0_2;
    arg0 = (u8) var_a3;
    var_a3 = arg0;
    do
    {
      func_80231C9C(D_80251CD0, D_80251CE8, 0x115);
    }
    while (0);
  }
  if (temp_v0_2 < D_80280BFA)
  {
    temp_v1_2 = (s32) D_80256DE4;
    __repair_phase_temp_v0_2 = var_a3 * 0xB4;
    temp_a1 = (void *) temp_v1_2;
    goto dummy_label_880508;
    dummy_label_880508:
    ;

    ;
    temp_a1 = (void *) (((char *) temp_a1) + ((s32) __repair_phase_temp_v0_2));
    if ((*((s32 *) (((char *) temp_a1) + 0xA0))) != 0x11)
    {
      sp18 = __repair_phase_temp_v0_2;
 func_80203654(*((u8 *) (((char *) temp_a1) + 0xAD))); __repair_addr = (char *) (D_80256DE4 + __repair_phase_temp_v0_2); *((s32 *) (((char *) __repair_addr) + 0xA0)) = 0; *((s8 *) (((char *) (D_80256DE4 + __repair_phase_temp_v0_2)) + 0xAD)) = 0x11;
      *((s8 *) (((char *) (D_80256DE4 + __repair_phase_temp_v0_2)) + 0xB0)) = 0;
    }
    func_802012BC(__repair_phase_temp_v0_2 + temp_v1_2);
  }
}
