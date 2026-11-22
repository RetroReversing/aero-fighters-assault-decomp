extern s32 D_8033E800;

s32 func_802C490C(void *arg0);
void *func_802C676C(s32 arg0);
s32 func_802D3CB0(void *arg0);
s32 func_803172C4(void *arg0);

void *func_802874AC(void *arg0) { void *temp_v0; void *var_s0; var_s0 = arg0; if ((arg0 != NULL) || (temp_v0 = func_802C676C(0x414), var_s0 = temp_v0, (temp_v0 != NULL))) { func_803172C4(var_s0); *(s32 **)((s8 *)var_s0 + 0x1A0) = &D_8033E800; func_802D3CB0((s8 *)var_s0 + 0x1A4); func_802C490C((s8 *)var_s0 + 0x280); } return var_s0; }
