/* adapted from similar verified C in func_80292C9C in AERO FIGHTERS ASSAUL (matched), with its names changed by decompdecomp */
/* identical to func_802874AC (matched), with its names changed by decompdecomp */
extern s32 D_80340780;

s32 func_802C490C(void *arg0);
void *func_802C676C(s32 arg0);
s32 func_802C490C(void *arg0);
s32 func_8028B9E0(void *arg0);

void *func_802A0378(void *arg0) { void *temp_v0; void *var_s0; var_s0 = arg0; if ((arg0 != NULL) || (temp_v0 = func_802C676C(0x414), var_s0 = temp_v0, (temp_v0 != NULL))) { func_8028B9E0(var_s0); *(s32 **)((s8 *)var_s0 + 0x1A0) = &D_80340780; func_802C490C((s8 *)var_s0 + 0x1A4); func_802C490C((s8 *)var_s0 + 0x280); } return var_s0; }
