s32 func_80231A24();
s32 func_80238B90();
u32 func_80238F10();
s32 func_8023D470();
s32 func_8024AA84();
extern char D_802542B8[];
extern char D_802542E0[];
extern char D_80275F90[];
extern s16 D_80276130;
extern u8 D_80276138;
extern s8 D_8027613C[];
extern char D_80280C58[];
void func_8022C0A8(void)
{
  register s8 *temp_s0;
  char *var_s3;
  char *var_s2;
  u8 sp5B;
  u32 temp_a1;
  u32 temp_v0;
  u32 var_s1;
  if (func_8023D470(D_80280C58, &sp5B) != (-1))
  {
    var_s3 = D_80275F90;
    var_s1 = 0;
    if (D_80276138 != sp5B)
    {
      D_80276138 = sp5B;
 do { var_s2 = &D_80276130; do { temp_v0 = func_80238F10(D_80280C58, var_s3, var_s1); temp_a1 = temp_v0; *((s16 *) var_s2) = 0; switch (temp_v0) { case 1: case 4: break; case 0: *((s16 *) var_s2) = 1; break; case 10: func_80231A24(D_802542B8, var_s1, func_80238B90(var_s3, temp_a1)); temp_s0 = D_8027613C + var_s1; if (func_80238B90(var_s3) == 0xA) { *temp_s0 = 1; if (func_8024AA84(D_80280C58, var_s3, var_s1) != 0) { *((s16 *) var_s2) = 3; } else { *((s16 *) var_s2) = 2; *temp_s0 = 0; } } else { *((s16 *) var_s2) = 1; } break; case 11: *((s16 *) var_s2) = 2; if (func_8024AA84(D_80280C58, var_s3, var_s1) != 0) { *(D_8027613C + var_s1) = 1; } break; default: case 2: case 3: case 5: case 6: case 7: case 8: case 9: func_80231A24(D_802542E0, temp_a1 & 0xFFFFFFFFFFFFFFFFu); break; } var_s1 += 1; var_s3 += 0x68; var_s2 += 2; } while (var_s1 != 4); } while (0);
    }
  }
}
