int func_80246F90(unsigned int pc, unsigned int flag) {
    int unused;
    flag = *(volatile unsigned int *)0xA4040010;
    if (!(flag & 1)) {
        return -1;
    }
    *(volatile unsigned int *)0xA4080000 = pc;
    return 0;
}
 



