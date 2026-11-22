u64 func_8023D190(u64 a, u64 b) { return a % b; }    
u64 k___ull_div(u64 a, u64 b) { return a / b; }    
u64 k___ll_lshift(u64 a, u64 b) { return a << b; }   
u64 k___ll_rem(u64 a, u64 b) { return a % b; }    
s64 k___ll_div(s64 a, s64 b) { return a / b; }    
s64 k___ll_mul(s64 a, s64 b) { return a * b; }    
 


void k___ull_divremi(u64 *quot, u64 *rem, u64 val, u16 d) {
    *quot = val / d;
    *rem = val % d;
}
s64 k___ll_mod(s64 a, s64 b) {                    
    s64 r = a % b;
    if ((r < 0 && b > 0) || (r > 0 && b < 0)) r += b;
    return r;
}
s64 k___ll_rshift(s64 a, s64 b) { return a >> b; }   
