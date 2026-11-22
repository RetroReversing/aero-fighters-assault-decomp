/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80223840();
s32 func_802238F0();
s32 func_8022393C();
s32 func_80227458();
extern s32 D_80275234;

s32 func_80227F50(s32 arg0) {
int __repair_literal;

    s32 temp_v0;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    register s32 var_v0;
__repair_literal = 4;


    do { temp_v0 = func_80223840(*(s32 *)(D_80275234 + ((unsigned)arg0 * __repair_literal))); } while (0);
    var_v0 = func_8022393C(temp_v0, &sp34, &sp30, 0);
    if (var_v0) {
        do {
            if (var_v0 == 0x434F4D4D) {
                sp2C = func_80227458(sp30);
            }
            var_v0 = func_8022393C(temp_v0, &sp34, &sp30, 0);
        } while (var_v0 != 0);
    }/*__repair_call_balance*/if(__repair_literal){
    func_802238F0(temp_v0);}else{
    func_802238F0(temp_v0);}
    return sp2C;
}
