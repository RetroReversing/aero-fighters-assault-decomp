#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80231A24();
extern char D_802545FC[];
extern char D_8025462C[];
extern char D_80254638[];
extern char D_80254644[];
extern char D_80254650[];
extern char D_80254660[];
extern char D_80254670[];
extern char D_8025467C[];
extern char D_8025468C[];
extern char D_80254694[];
extern char D_8025469C[];
extern char D_802546A4[];
extern char D_802546B8[];
extern char D_8025470C[];
extern char D_80254718[];
extern char D_80254728[];
extern char D_80254734[];
extern char D_80254744[];
extern char D_80254754[];
extern char D_80254764[];
extern char D_80254770[];
extern char D_80254778[];
extern char D_80254780[];
extern char D_80254788[];
extern char D_80276140[];
extern char D_80277400[];
extern char D_802786C0[];
extern char D_802786D8[];
extern char D_802786F0[];
extern s32 D_80278738;
extern s32 D_80278748;

void func_8022D04C(s32 arg0) {
int *__repair_home0 = &arg0;

    s32 sp5C;
    s32 sp48;
    s32 *sp44;
    f64 temp_fs0;
    s32 *temp_t3_2;
    s32 *temp_v0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_t3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v0;
    u32 temp_v1;
    void *var_s0;
    void *var_s0_2;

    temp_fs0 = *((s32 *)((s8 *)D_802786F0 + (((s32) (D_80278738 + 1) % 5) * 8)));
    if (D_80278748 != 0) {
        func_80231A24(D_802545FC);
        temp_t3 = (*__repair_home0) * 4;
        temp_v0 = temp_t3 + D_802786C0;
        var_a2 = *temp_v0;
        sp48 = temp_t3;
        var_t0 = 0;
        if (var_a2 > 0) {
            var_s0 = (void *)(((*__repair_home0) * 0x3C0)); var_s0 = (void *)((char *)var_s0 + (s32)(D_80276140));
            sp44 = temp_v0;
            do {
                func_80231A24("%d/%d time: %f ", (temp_s1 = var_t0 + 1), var_a2, M2C_FIELD(var_s0, f64 *, 0) - temp_fs0);
                temp_a1 = M2C_FIELD(var_s0, s32 *, 8);
                switch (temp_a1) {                  /* switch 1 */
                case 0x2A:                          /* switch 1 */
                    func_80231A24(D_8025462C, temp_a1);
                    break;
                case 0x2B:                          /* switch 1 */
                    func_80231A24(D_80254638, temp_a1);
                    break;
                case 0x2E:                          /* switch 1 */
                    func_80231A24(D_80254644, temp_a1);
                    break;
                case 0x32:                          /* switch 1 */
                    func_80231A24(D_80254650, temp_a1);
                    break;
                case 0x29:                          /* switch 1 */
                    func_80231A24(D_80254660, temp_a1);
                    break;
                case 0x2C:                          /* switch 1 */
                    func_80231A24(D_80254670, temp_a1);
                    break;
                case 0x2F:                          /* switch 1 */
                    func_80231A24(D_8025467C, temp_a1);
                    break;
                case 0x33:                          /* switch 1 */
                    func_80231A24(D_8025468C, temp_a1);
                    break;
                case 0x34:                          /* switch 1 */
                    func_80231A24(D_80254694, temp_a1);
                    break;
                case 0x35:                          /* switch 1 */
                    func_80231A24(D_8025469C, temp_a1);
                    break;
                default:                            /* switch 1 */
                    func_80231A24(D_802546A4, temp_a1);
                    break;
                }
                var_t0 = temp_s1;
                var_s0 = (unsigned char *) var_s0 + 0x10;
                var_a2 = *sp44;
            } while (temp_s1 < var_a2);
        }
        sp5C = 0;
        func_80231A24(D_802546B8);
        temp_t3_2 = sp48 + D_802786D8;
        sp44 = temp_t3_2;
        var_a2_2 = *temp_t3_2;
        var_t0_2 = 0;
        if (var_a2_2 > 0) {
            var_s0_2 = ((*__repair_home0) * 0x3C0) + D_80277400;
            do {
                temp_v1 = M2C_FIELD(var_s0_2, u32 *, 0xC);
                var_v0 = (temp_v1 >> 0x18) & 0xFF;
                if (var_v0 == 0) {
                    var_v0 = 0x20;
                }
                var_a3 = (temp_v1 >> 0x10) & 0xFF;
                temp_s1_2 = var_t0_2 + 1;
                if (var_a3 == 0) {
                    var_a3 = 0x20;
                }
                func_80231A24("%d/%d time: %f  sp: %2c  dp: %2c  st: 0x%x   ", temp_s1_2, var_a2_2, M2C_BITWISE(f64, var_a3), M2C_FIELD(var_s0_2, f64 *, 0) - temp_fs0, var_v0, var_a3, temp_v1 & 0xF);
                temp_a1_2 = M2C_FIELD(var_s0_2, s32 *, 8);
                switch (temp_a1_2) {                /* switch 2 */
                case 0x2A:                          /* switch 2 */
                    func_80231A24(D_8025470C, temp_a1_2);
                    break;
                case 0x2B:                          /* switch 2 */
                    func_80231A24(D_80254718, temp_a1_2);
                    break;
                case 0x2D:                          /* switch 2 */
                    func_80231A24(D_80254728, temp_a1_2);
                    break;
                case 0x31:                          /* switch 2 */
                    func_80231A24(D_80254734, temp_a1_2);
                    break;
                case 0x30:                          /* switch 2 */
                    func_80231A24(D_80254744, temp_a1_2);
                    break;
                case 0x29:                          /* switch 2 */
                    func_80231A24(D_80254754, temp_a1_2);
                    break;
                case 0x2C:                          /* switch 2 */
                    func_80231A24(D_80254764, temp_a1_2);
                    break;
                case 0x33:                          /* switch 2 */
                    func_80231A24(D_80254770, temp_a1_2);
                    break;
                case 0x34:                          /* switch 2 */
                    func_80231A24(D_80254778, temp_a1_2);
                    break;
                case 0x35:                          /* switch 2 */
                    func_80231A24(D_80254780, temp_a1_2);
                    break;
                default:                            /* switch 2 */
                    func_80231A24(D_80254788, temp_a1_2);
                    break;
                }
                var_t0_2 = temp_s1_2;
                var_s0_2 = (unsigned char *) var_s0_2 + 0x10;
                var_a2_2 = *sp44;
            } while (temp_s1_2 < var_a2_2);
        }
    }
}
