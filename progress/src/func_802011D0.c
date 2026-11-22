void func_802011D0(s32 a0, ...) {
}

extern s32 sFmt_MemUsed_8000A34C;
extern s32 sFmt_section_bytes_8000A35C;
extern s32 gUsoSectionNames_rt;
extern s32 gUsoSectionBytes;

 






void uso_printMemStats(void) {
    s32 i;

    gUsoCtx.print(&sFmt_MemUsed_8000A34C, gUsoMemUsed);
    for (i = 0; i < 11; i++) {
        gUsoCtx.print(&sFmt_section_bytes_8000A35C, (&gUsoSectionNames_rt)[i], (&gUsoSectionBytes)[i]);
    }
}

extern s32 gUsoSectionBytes;
extern s32 gUsoSectionBytesSym;
extern s32 gUsoSectionBytesTextReloc;
extern s32 gUsoSectionBytesDataReloc[];
extern s32 gUsoMemUsed;
extern s32 D_80012D5C_alias;  

 





void uso_clearMemStats(void) {
}

 









extern char sStr_rb_8000A368, gUsoModuleSlot0Name, gUsoModuleSlotsEndName;
s32 uso_find_file(void *arg0, void *arg1) {
    s32 pad[11];
    s32 i;
    s32 found;
    func_80000660(arg0, &gUsoPathDir, &gUsoPathFile);
    if (func_800008B8(arg1, &gUsoPathDir, &sStr_rb_8000A368) == 0) {
        return -0x11;
    }
    found = 0;
    for (i = 0; i < 135; i++) {
        if (func_80000568(((UsoModuleSlot *)&gUsoModuleSlots)[i].name, &gUsoPathFile) == 0) {
            found = 1;
            ((s32 *)arg1)[1] = ((UsoModuleSlot *)&gUsoModuleSlots)[i].romOffset;
            break;
        }
    }
    if (found == 0) {
        return -0x11;
    }
    return 0;
}

 
s32 uso_getErrno(s32 arg0) {
    return gUsoErrno;
}

extern void* (*gUsoAllocHook)(s32, s32);
extern s32 func_800015D0(void*, void*);

 



void* fs_openFile(void* arg0) {
    void* file;
    char pad[8];   
    s32 header[3];

    file = gUsoAllocHook(0x28, 8);
    if (func_800015D0(arg0, file) < 0) {
        return 0;
    }
    if (func_800009D8(header, 0xC, 1, file) < 0) {
        return 0;
    }
    ((s32*)file)[8] = ((s32*)file)[1];
    ((s32*)file)[7] = header[1] + ((s32*)file)[1];
    return file;
    (void)pad;
}

extern void func_80000A88(void*, s32);

 




s32 uso_findDataSection(void* arg0, s32* arg1) {
    char pad_hi[4];
    s32 header[3];
    s32 file[10];
    s32 result;

    result = func_800015D0(arg0, file);
    if (result < 0) {
        return result;
    }

    while (1) {
        result = func_800009D8(header, 0xC, 1, file);
        if (result <= 0) {
            if (result == 0) {
                result = -1000;
            }
            return result;
        }
        result = header[0];
        if (result == 6) {
            break;
        }
        if (result == 8) {
            continue;
        }
        func_80000A88(file, header[1]);
    }
    *arg1 = file[1] + file[3];
    (void)pad_hi;
    return 0;
}

 
s32 fs_readChecked(void* file, void* buf, s32 size) {
    extern s32 gUsoErrno;
    extern s32 func_800009D8(void*, s32, s32, void*);
    s32 result;
    result = func_800009D8(buf, size, 1, file);
    if (result < 0) {
        return gUsoErrno;
    }
    return result;
}

 
s32 fs_tell(s32* file) {
    return file[1] + file[3];
}

 
s32 fs_seek(s32* file, s32 whence, s32 offset) {
    if (whence) {
        file[1] += offset;
    } else {
        file[1] = offset;
    }
    return file[1];
}

 
void fs_closeFile(s32 arg0) {
}

 
float uso_returnZeroF_8000149C(void) {
    return 0.0f;
}

 









void uso_scanRom(void) {
    UsoLoadIter it;
    u8 buf[0x24];
    UsoLoadRec rec;
    UsoLoadReq *req;
    UsoModuleSlot *slot;

    for (req = (UsoLoadReq *)gFsDeviceTable; req->head != 0; req++) {
        func_80000880(&it, req);
        while (func_80000A98(&it, &rec) != 0) {
            if (rec.idx >= 0) {
                slot = &((UsoModuleSlot *)&gUsoModuleSlots)[rec.idx];
                func_800005DC_d2c(slot->name, buf);
                slot->romOffset = it.unk4;
            }
            func_80000B34(&it);
        }
    }
}

 








void uso_init(void) {
}




void uso_nop_800017B4(void) {
}

 









void* uso_allocSlot(void) {
    s32 i;

    for (i = 0; i < 135; i++) {
        if (((u8 *)&gUsoModuleSlots)[i * 0x9C + 0x98] == 0) {
            ((u8 *)&gUsoModuleSlots)[i * 0x9C + 0x98] = 1;
            return (u8 *)&gUsoModuleSlots + i * 0x9C;
        }
    }
    return 0;
}


void uso_initSlot(void* arg0) {
    s32 i;
    char* ptr;

    ((UsoModuleSlot *)arg0)->unk99 = 1;
    ((UsoModuleSlot *)arg0)->secData[USO_SEC_INFO] = 0;
    ((UsoModuleSlot *)arg0)->secData[USO_SEC_SYM] = 0;
     



    for (i = 2, ptr = (char*)arg0 + 8; i != 0xE; ) {
        i += 4;
         


        ((UsoModuleSlot *)ptr)->secData[0] = 0;
        ((UsoModuleSlot *)ptr)->secData[1] = 0;
        ((UsoModuleSlot *)ptr)->secData[2] = 0;
        ((UsoModuleSlot *)ptr)->secData[3] = 0;
        ptr += 0x10;
    }
}

 


















 





 





typedef struct { s16 info; s16 pad2; s32 a; s32 b; } RelSym18F0;
typedef struct { s32 info; s32 off; s32 val; } RelEnt18F0;
 








s32 uso_unrelocate(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    RelSym18F0 *syms = ((UsoModuleSlot *)arg0)->secData[USO_SEC_SYM];
    RelSym18F0 *s;
    s32 i;
    s32 found;

    if (arg1 == 0 || arg2 == 0) {
        return 0;
    }
    for (i = 0; i < arg3; i++) {
        if (!(((RelEnt18F0 *)arg2)[i].info & 8)) {
            continue;
        }
        {
            s = syms; s += ((RelEnt18F0 *)arg2)[i].info >> 4;  
            found = 0;  
            if ((s->info & 7) == 1 && (s->info >> 4) == arg4 && (s->info & 8)) {
                found = 1;
            }
            if (found == 0) {
                continue;
            }
            {
                s32 t;
                s32 *p = (s32 *)(((RelEnt18F0 *)arg2)[i].off + (t = arg1));
                if (p) {}
                *p = ((RelEnt18F0 *)arg2)[i].val;
            }
            ((RelEnt18F0 *)arg2)[i].info &= ~8;
        }
    }
    return 0;
}

 


































extern char sFmt_unkown_reloc_type_8000A36C[];
typedef struct { s32 info; s32 offset; s32 orig; } UsoRel_1ADC;
typedef struct { s16 flags; s16 pad; s32 value; s32 pad2; } UsoUsoRelSym_1ADC_1ADC;

s32 uso_relocate(char *obj, char *base, UsoRel_1ADC *rel, s32 n) {
    return 0;
}

 























 






 

s32 uso_relocateSections(UsoModuleSlot *mod) {
    extern s32 func_80001EDC();
    s32 temp_s1;

    if (mod->secData[USO_SEC_RODATA] != 0) {
        temp_s1 = func_80001EDC(mod, mod->secData[USO_SEC_RODATA], mod->secData[USO_SEC_RODATA_RELOC], mod->secSize[USO_SEC_RODATA_RELOC]);
        func_80000518(mod->secData[USO_SEC_RODATA], mod->secSize[USO_SEC_RODATA]);
        if (temp_s1 != 0) {
            return -0xE;
        }
    }
    if (mod->secData[USO_SEC_DATA] != 0) {
        temp_s1 = func_80001EDC(mod, mod->secData[USO_SEC_DATA], mod->secData[USO_SEC_DATA_RELOC], mod->secSize[USO_SEC_DATA_RELOC]);
        func_80000518(mod->secData[USO_SEC_DATA], mod->secSize[USO_SEC_DATA]);
        if (temp_s1 != 0) {
            return -0xF;
        }
    }
    if (mod->secData[USO_SEC_TEXT] != 0) {
        temp_s1 = func_80001EDC(mod, mod->secData[USO_SEC_TEXT], mod->secData[USO_SEC_TEXT_RELOC], mod->secSize[USO_SEC_TEXT_RELOC]);
        func_80000518(mod->secData[USO_SEC_TEXT], mod->secSize[USO_SEC_TEXT]);
        if (temp_s1 != 0) {
            return -0x10;
        }
    }
    return 0;
}

 










 
s32 uso_unrelocateSections(UsoModuleSlot *mod, s32 arg1) {
    extern s32 func_80001CF0();
    s32 temp_s1;

    if (mod->secData[USO_SEC_RODATA] != 0) {
        temp_s1 = func_80001CF0(mod, mod->secData[USO_SEC_RODATA], mod->secData[USO_SEC_RODATA_RELOC], mod->secSize[USO_SEC_RODATA_RELOC], arg1);
        func_80000518(mod->secData[USO_SEC_RODATA], mod->secSize[USO_SEC_RODATA]);
        if (temp_s1 != 0) {
            return -0xE;
        }
    }
    if (mod->secData[USO_SEC_DATA] != 0) {
        temp_s1 = func_80001CF0(mod, mod->secData[USO_SEC_DATA], mod->secData[USO_SEC_DATA_RELOC], mod->secSize[USO_SEC_DATA_RELOC], arg1);
        func_80000518(mod->secData[USO_SEC_DATA], mod->secSize[USO_SEC_DATA]);
        if (temp_s1 != 0) {
            return -0xF;
        }
    }
    if (mod->secData[USO_SEC_TEXT] != 0) {
        temp_s1 = func_80001CF0(mod, mod->secData[USO_SEC_TEXT], mod->secData[USO_SEC_TEXT_RELOC], mod->secSize[USO_SEC_TEXT_RELOC], arg1);
        func_80000518(mod->secData[USO_SEC_TEXT], mod->secSize[USO_SEC_TEXT]);
        if (temp_s1 != 0) {
            return -0x10;
        }
    }
    return 0;
}

 









s32 uso_loadSections(s32* arg0, void* file) {
    return 0;
}


 























 





int uso_bindLocalSyms(int *a0) {
    RelSym18F0 *syms;
    RelSym18F0 *s;
    s32 i;
    s32 info;
    s32 t;

    syms = *(RelSym18F0 **)((char *)a0 + 0x3C);
    if (syms == 0) {
        return 0;
    }
    s = syms;
    for (i = 0; i < a0[1]; i++, s++) {
        info = s->info;
        if (info & 8) {
            continue;
        }
        t = info & 7;
        if (2 == t) goto add;
        if (t == 4) goto add;
        if (t == 3) goto mark;
        continue;
    add:
        s->a += a0[(info >> 4) + 14];
        s->info = info | 8;
        continue;
    mark:
        s->info = info | 8;
    }
    return 0;
}




 




 









extern s32 sStr_cross_referenced_symbol_section_not_loaded_8000A3A0;
typedef struct { short type; short pad; int val; short idx; short pad2; } Ent80002250;
typedef struct {
    char p0[4];
    int count;
    char p8[0x34];
    Ent80002250 *list;
    char p40[0x59];
    unsigned char dirty;
} Obj80002250;
int uso_bindImports(Obj80002250 *o) {
    Ent80002250 *e;
    Obj80002250 *u;
    Ent80002250 *l;
    int k;
    int i;

    o->dirty = 0;
    if (o->list == 0) {
        return 0;
    }
    i = 0;
    e = o->list;
    for (; i < o->count; i++) {
        if (!(e->type & 8) && (e->type & 7) == 1) {
            k = e->type >> 4;
            u = ((Obj80002250 **)gUsoModules)[k];
            if (u == 0) {
                o->dirty = 1;
                gUsoCtx.missCount++;
            } else {
                l = u->list;
                if (l == 0) {
                    gUsoCtx.print(&sStr_cross_referenced_symbol_section_not_loaded_8000A3A0, u, l);
                    return -2;
                }
                e->type |= 8;
                k = e->idx;
                e->val = l[k].val;
            }
        }
        e++;
    }
    return 0;
}

 






























 






typedef struct { short type; short pad; int a; int b; } Ent8000235C;
typedef struct {
    char p0[4];
    int count;
    char p8[0x34];
    Ent8000235C *list;
    char p40[0x59];
    unsigned char dirty;
} Obj8000235C;
int uso_unbindImports(Obj8000235C *o, int id) {
    Ent8000235C *e;
    int i;
    int n;

    if (o->list == 0) {
        return 0;
    }
    i = 0;
    n = o->count;
    e = o->list;
    for (; i < n; i++) {
        if ((e->type & 7) == 1 && (e->type >> 4) == id && (e->type & 8)) {
            e->type &= ~8;
            o->dirty = 1;
            n = o->count;
        }
        e++;
    }
    return 0;
}

 


 
















typedef struct {
    u32 inst1, inst2, inst3, inst4;
} __osExceptionVector;
extern __osExceptionVector __osExceptionPreamble_rt;           
extern u64 osClockRate;                           
extern s32 osViClock;                           
extern s32 osResetType;                           
extern s32 osTvType;                           
extern s32 osAppNMIBuffer;                           
extern s32 __kmc_pt_mode;
extern s32 __ptExceptionPreamble_rt[];                         

 



typedef struct KmcMonitorHeader {
      s32 magic;                         
      s32 monadr;
} KmcMonitorHeader;

void osInitialize(void) {
    extern s32 func_800031E0(void);              
    extern void func_800031D0(s32);              
    extern void func_80009C40(s32);              
    extern s32 func_80004EC0(void *, u32 *);     
    extern s32 func_8000A040(void *, u32);       
    extern void func_800031F0(void *, s32);      
     
    extern void func_80009DF0(void);             
    extern void func_80002DB0(s32, u32 *);       
    extern void func_800030D0(void *, s32);      
    u32 pifdata;
    u32 clock = 0;
    void (*entry)();
    s32 pad50;
    s32 pad4C;
    s32 *src;
    s32 *dst;
    s32 sp40;
    void *sp3C;
    s32 *sp38;
    s32 *sp34;
    s32 *sp30;
    s32 sp2C;

    func_800031D0(func_800031E0() | 0x20000000);
    func_80009C40(0x01000800);
    while (func_80004EC0((void *)0x1FC007FC, &pifdata)) {
        ;
    }
    while (func_8000A040((void *)0x1FC007FC, pifdata | 8)) {
        ;
    }
    *(__osExceptionVector *)0x80000000 = __osExceptionPreamble_rt;
    *(__osExceptionVector *)0x80000080 = __osExceptionPreamble_rt;
    *(__osExceptionVector *)0x80000100 = __osExceptionPreamble_rt;
    *(__osExceptionVector *)0x80000180 = __osExceptionPreamble_rt;
    func_800031F0((void *)0x80000000, 0x190);
    func_80005350(0x80000000, 0x190);
    func_80009DF0();
    func_80002DB0(4, &clock);
    clock &= ~0xF;
    if (clock != 0) {
        osClockRate = clock;
    }
    osClockRate = osClockRate * 3 / 4;
    if (osResetType == 0) {
        func_800030D0(&osAppNMIBuffer, 0x40);
    }
    if (osTvType == 0) {
        osViClock = 0x02F5B2D2;
    } else if (osTvType == 2) {
        osViClock = 0x02E6025C;
    } else {
        osViClock = 0x02E6D354;
    }
    if (__kmc_pt_mode == 0) {
        sp38 = (s32 *)0xBFF08004;
        sp3C = (void *)0xBFF00000;
        if (*(s32 *)0xBFF00000 == 0x4B4D4300) {
            src = __ptExceptionPreamble_rt;
            dst = (s32 *)0x80000180;
            *dst = *src;
            dst++; src++;
            *dst = *src;
            dst++; src++;
            *dst = *src;
            dst++; src++;
            src += 2;
            dst += 2;
            *dst = *src;
            dst++; src++;
            *dst = *src;
            dst++; src++;
            *dst = *src;
            dst++; src++;
            func_800031F0((void *)0x80000180, 0x24);
            func_80005350(0x80000180, 0x24);
            __kmc_pt_mode = 1;
            if (!(*sp38 & 0x10)) {
                sp40 = ((KmcMonitorHeader *)sp3C)->monadr;
                if (sp40 != 0xBFF00000) {
                    sp30 = (s32 *)(sp40 | 0x20000000);
                    sp2C = 0x800;
                    sp34 = (s32 *)0xBFF00000;
                    do {
                        *sp30 = *sp34;
                        sp30 += 1; sp34 += 1;
                        sp2C -= 1;
                    } while (sp2C != 0);
                }
                entry = (void (*)())(sp40 + 8);
                entry(0x4B4D4300, 0);
            }
        }
    }
}






void kernel_nop_800029A0(void) {
}

