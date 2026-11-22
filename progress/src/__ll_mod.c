s64 __ll_mod(s64 a, s64 b) {                    
    s64 r = a % b;
    if ((r < 0 && b > 0) || (r > 0 && b < 0)) r += b;
    return r;
}
s64 k___ll_rshift(s64 a, s64 b) { return a >> b; }   
