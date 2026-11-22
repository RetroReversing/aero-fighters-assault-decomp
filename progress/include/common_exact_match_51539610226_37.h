/* decompdecomp donor translation unit v1 */












typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef float f32;
typedef double f64;










 




enum UsoSectionType {
    USO_SEC_INFO = 0,
    USO_SEC_SYM = 1,
    USO_SEC_TEXT_RELOC = 2,
    USO_SEC_DATA_RELOC = 3,
    USO_SEC_RODATA_RELOC = 4,
    USO_SEC_TEXT = 5,
    USO_SEC_DATA = 6,
    USO_SEC_RODATA = 7,
    USO_SEC_BSS = 8,
    USO_SEC_ENTRY_SYM = 9,
    USO_SEC_END_OF_FILE = 10,
    USO_SEC_END = 11,
    USO_SEC_BINARY_DATA = 12,
    USO_SEC_DISK_INFO = 13,
    USO_SEC_COUNT = 14
};

 

typedef struct UsoModuleSlot {
      s32 secSize[USO_SEC_COUNT];  
      void *secData[USO_SEC_COUNT];  
      s16 id;                      
      char name[0x22];             
      s32 romOffset;               
      u8 inUse;                    
      u8 unk99;                    
      u8 pad9A[2];
} UsoModuleSlot;  

 

typedef struct UsoSym {
      s32 name;                     
      s32 value;                    
      s32 size;
} UsoSym;  

 
typedef char UsoModuleSlot_size_check[sizeof(UsoModuleSlot) == 0x9C ? 1 : -1];
typedef char UsoSym_size_check[sizeof(UsoSym) == 0xC ? 1 : -1];

typedef char UsoModuleSlot_secData_check[(int)&((UsoModuleSlot *)0)->secData == 0x38 ? 1 : -1];
typedef char UsoModuleSlot_id_check[(int)&((UsoModuleSlot *)0)->id == 0x70 ? 1 : -1];
typedef char UsoModuleSlot_name_check[(int)&((UsoModuleSlot *)0)->name == 0x72 ? 1 : -1];
typedef char UsoModuleSlot_romOffset_check[(int)&((UsoModuleSlot *)0)->romOffset == 0x94 ? 1 : -1];
typedef char UsoModuleSlot_inUse_check[(int)&((UsoModuleSlot *)0)->inUse == 0x98 ? 1 : -1];


 

typedef struct FsDevice {
      const char *name;            
      u32 romStart;
      u32 romEnd;
      u32 heapStart;               
      u32 heapEnd;                 
} FsDevice;  

 

typedef struct FsDeviceHeap {
      s32 start;
      s32 end;
      s32 cur;                     
} FsDeviceHeap;  

 

typedef s32 (*UsoHook)();

 


typedef struct UsoCtx {
      s32 heapCur;                 
      s32 heapLeft;                
      s32 error;                   
      s32 unkC;
      s32 errorAddr;               
      s32 unk14;
      s32 missCount;               
      s32 unk1C[2];
      s32 entryResult;             
      s32 unk28;
      s16 unk2C;                   
      s16 pad2E;
      UsoHook alloc30;             
      UsoHook alloc;               
      s32 unk38;
      UsoHook init;                
      UsoHook load;                
      UsoHook unload;              
      UsoHook findDataSection;     
      UsoHook openFile;            
      UsoHook readFile;            
      UsoHook seekFile;            
      UsoHook closeFile;           
      UsoHook getErrno;            
      UsoHook tellFile;            
      UsoHook callEntry;           
      UsoHook getModuleName;       
      UsoHook printVersion;        
      UsoHook addrToModule;        
      UsoHook clearMemStats;       
      UsoHook printMemStats;       
      UsoHook printModules;        
      UsoHook romRead;             
      UsoHook print;               
      UsoHook print88;             
      UsoHook print8C;             
      UsoHook nop90;               
      UsoHook zeroF94;             
      UsoHook alloc98;             
      UsoHook final9C;             
      UsoHook printSlots;          
} UsoCtx;  

typedef char FsDevice_size_check[sizeof(FsDevice) == 0x14 ? 1 : -1];
typedef char FsDeviceHeap_size_check[sizeof(FsDeviceHeap) == 0xC ? 1 : -1];

typedef char UsoCtx_print_check[(int)&((UsoCtx *)0)->print == 0x84 ? 1 : -1];
typedef char UsoCtx_printSlots_check[(int)&((UsoCtx *)0)->printSlots == 0xA0 ? 1 : -1];





 
extern s32 __osPiAccessQueue;
extern s32 __osPiAccessQueueEnabled;
extern s32 gUsoErrno;
extern void func_80005DC0(s32*, s32, s32);
extern void func_80005C00(void);
extern void func_80004FE0(s32*, s32*, s32);
extern void func_800053D0(s32*, s32*, s32);
extern s32 __OSGlobalIntMask;
extern s32 func_800066B0(void);
extern void func_800066D0(s32);
extern void func_80003D0C(s32*);
extern void* __osRunningThread;
extern s32 __osRunQueue;
extern s32 piacs_piAccessBuf;
extern s32 func_800009D8(void*, s32, s32, void*);
extern void func_80003FF0(s32, void*);
extern void* func_80003E54(void*);
extern void func_8000A110(void*);
extern void func_8000857C(void);
extern void func_8000785C(s32);
extern void func_80008ED0(void);
extern void func_80007760(void);
typedef void (*FuncPtr2)(void*, void*);
extern FuncPtr2 gUsoPrintfHook;
extern s32 sFmt_USO_Version_8000A32C;
extern s32 sStr_3_1_8000A340;
extern UsoCtx gUsoCtx;
extern s32 gUsoEntryResult;
extern s32 gUsoEntryIndex;
extern s32 gUsoEntryModule;
extern s32 gUsoModules[];
extern s32 gFsRomReadStatus;
extern s32 gFsDeviceTable;
extern s32 __osActiveQueue;
extern s32 func_80002890(s32);
extern void func_8000A0E0(void);
extern void func_80005350(s32, s32);
extern void func_80005400(s32, s32);
extern s32 func_80008430(s32);
extern void func_80009148(s32);
extern void func_80009030(s32, s32);
extern void func_80008498(void);
extern s32 func_80006A98(s32);
extern void func_800091F0(s32);
extern s32 func_80009EA0(void);
typedef struct { s32 pad[3]; s32 position; } FileState;

typedef struct {
    void* mtqueue;
    void* fullqueue;
    s32 validCount;
    s32 first;
    s32 msgCount;
    s32** msg;
} OSMesgQueue;

typedef struct Thread {
    s32 field0;
    s32 pri;
    s32 queue;
    s32 pad0C;
    u16 state;
} Thread;

typedef struct { s32 queue; s32 msg; } OSEventState;
extern OSEventState __osEventStateTab[];

typedef struct {
    u8 pad_00[0x98];
    u8 in_use;
    u8 pad_99[3];
} UsoSlot;

typedef struct {
    UsoSlot slots[4];
} UsoSlotGroup;

extern u8 gUsoModuleSlot0InUse;
extern UsoSlot gUsoModuleSlots;
extern u8 gUsoModuleSlot1InUse;
extern UsoSlot gUsoModuleSlot1;
extern u8 gUsoModuleSlot2InUse;
extern UsoSlot gUsoModuleSlot2;
extern UsoSlotGroup gUsoModuleSlot3;
extern UsoSlotGroup gUsoModuleSlotsEnd;


 

extern u32 gUsoHeapCur;
extern u32 gUsoHeapEnd;
extern s32 gUsoMemUsed;

 








































































u32 uso_alloc(u32 size, u32 alignment) {
    u32 v;    
    u32 r;    

     


    if (size & (alignment - 1)) {
        size = (size + alignment) & ~(alignment - 1);
    }
    v = gUsoHeapCur;
    gUsoHeapCur = v + size;
    gUsoMemUsed += size;
    r = v;
    if (gUsoHeapCur >= gUsoHeapEnd) {
        r = 0U;
    }
    return r;
}




 
void uso_syncCache(s32 a0, s32 a1) {
    s32 saved = func_80002890(1);
    func_8000A0E0();
    func_80005350(a0, a1);
    func_80005400(a0, a1);
    func_80002890(saved);
}

 






s32 uso_strcmp(unsigned char *arg0, unsigned char *arg1) {
    int c0 = *arg0;
    unsigned char *q;
    unsigned char *p;
    int r = 0;

    if (c0 != 0) {
        q = arg1;
        if (*arg1 != 0) {
            do {
                p = arg0;
                q = arg1;
                arg1++;
                arg0++;
                if (*q != *p) {
                    return 1;
                }
                c0 = *arg0;
            } while (!((c0 == 0) || (*arg1 == 0)));
        }
    }
    r = c0 != 0;
    if (r == 0) {
        r = *arg1 != 0;
    }
    return r;
}

void uso_strcpy(char* dst, char* src) {
    char* s = src;
    unsigned char c = *src;
    char* d = dst;

    *dst = c;
    if (c == 0) {
        return;
    }

    do {
        c = *(s + 1);
        s = s + 1;
        d = d + 1;
        *d = c;
    } while (c != 0);
}

 





s32 uso_findSlash(char *arg0, s32 *arg1) {
    s32 v0;
    s32 v1;

    v1 = 0;
    v0 = v1;
    if ((u8)arg0[v0] != 0) {
        do {
            v0 = v1;
            v1++;
            if ((u8)arg0[v0] == '/') {
                v1 -= 1;
                *arg1 = v1;
                return 1;
            }
            v0 = v1;
        } while ((u8)arg0[v1] != 0);
    }
    return 0;
}

extern s32 func_800005DC();
extern s32 func_8000060C();
extern void func_80000660();

 












extern s32 func_800005DC_d2c(void*, void*);
void uso_splitPath(char *path, char *dir, char *file) {
    char buf[0x40];
    s32 len;
    s32 i;
    s32 j;
    s32 k;
    s32 m;

    if (func_8000060C(path, &len) != 0) {
        for (i = 0; i < len; i++) {
            buf[i] = path[i];
        }
        buf[i] = 0;
        i = len + 1;
        func_800005DC_d2c(dir, buf);
        j = 0;
        if (1) {
        }
        while (m = j++, k = i++, (file[m] = path[k]) != 0) {
        }
    } else {
        func_800005DC_d2c(dir, path);
        file[0] = 0;
    }
}

void fs_romRead(s32 arg0, s32 arg1, s32 arg2) {
    s32 savedMask;
    s32 status;
    u16 first16;
    u16 loop16;

    gFsRomReadStatus = 0;
    func_8000A0E0();
    while (func_80006640() & 3) {}
    func_80004A50(0, arg1, arg0, arg2);
    status = func_80006640();
    first16 = status;
    gFsRomReadStatus = status;
    if (first16 & 3) {
        do {
            status = func_80006640();
            loop16 = status;
            gFsRomReadStatus = status;
        } while (loop16 & 3);
    }
    savedMask = func_80002890(1);
    func_80005350(arg0, arg2);
    func_80005400(arg0, arg2);
    func_80002890(savedMask);
}

 
extern s32 gFsDeviceTable;
void fs_setDeviceTable(s32 val) {
    gFsDeviceTable = val;
}

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} Struct00480Src;

typedef struct {
    s32 unk0;
    s32 unk4;
    Struct00480Src blk;  
    s32 unk1C;
} Struct00480Dst;

 




void fs_initFile(Struct00480Dst* dst, Struct00480Src* src) {
    dst->blk = *src;
    dst->unk1C = dst->blk.unk8;
    dst->unk4 = 0;
}

 














typedef struct { char *name; s32 pad[4]; } HandlerEntry;    
typedef struct { s32 w[3]; } HandlerSlot;                    
extern HandlerSlot gFsDeviceHeaps[];
extern void func_80000880();
extern s32 func_80000568();

HandlerSlot *fs_openDevice(void *a0, char *name, s32 a2) {
    s32 i = 0;

    if (*(HandlerEntry **)&gFsDeviceTable == ((void*)0) ) {
        return ((void*)0) ;
    }
    while ((*(HandlerEntry **)&gFsDeviceTable)[i].name != ((void*)0) ) {
        if (func_80000568((*(HandlerEntry **)&gFsDeviceTable)[i].name, name) == 0) {
            func_80000880(a0, (HandlerEntry *)((char *)*(HandlerEntry **)&gFsDeviceTable + i * 20));
            return &gFsDeviceHeaps[i];
        }
        i++;
    }
    return ((void*)0) ;
}

 


 
s32 fs_close(s32 arg0) {
    return 0;
}

 








































 




void uso_bcopy(u8 *src, u8 *dst, s32 count) {
}

 








extern s32 gUsoErrno;
typedef s32 (*ReadFunc)(void *, u32, void *);
extern ReadFunc gUsoReadHook;
typedef struct {
    s32 pad0;
    s32 pos;      
    s32 pad8;
    char *buf;    
    s32 padN[3];
    u32 capacity;  
} FileStateRdr;
s32 fs_read(s32 buf, u32 size, u32 n, FileStateRdr *fp) {
    s32 total;

    if (buf & 7) {
        return gUsoErrno = -0x1C;
    }
    total = size * n;
    if (fp->capacity < total + fp->pos) {
        total = fp->capacity - fp->pos;
    }
    if (total < 0) {
        return 0;
    }
    if (total != 0) {
        gUsoReadHook((void *)buf, (u32)(fp->buf + fp->pos), (void *)total);
    }
    fp->pos += total;
    return total;
}

 
void fs_skip(s32* file, s32 offset) {
    file[1] += offset;
}

s32 uso_file_open(FileState* file, u32* arg1) {
    struct {
        u32 type;
        u32 size;
        u32 unk8;
        s32 pad;
    } header;

    if (func_800009D8(&header, 0xC, 1, file) < 0) {
        return gUsoErrno;
    }
    if (header.type == 0xA) {
        return 0;
    }
    if (func_800009D8(arg1, header.size, 1, file) < 0) {
        return gUsoErrno;
    }
    if (*arg1 != 0x12345678) {
        return -0x15;
    }
    return 1;
}

 









s32 uso_skip_to_end(FileState *file)
{
  s32 pad;
  struct { u32 type; u32 size; u32 x; } header;
  s32 new_var;
  do
  {
    new_var = func_800009D8(&header, 12, 1, file);
    pad = header.type;
    if (new_var < 0)
    {
      return gUsoErrno;
    }
    if (8 != pad)
    {
      ((s32 *) file)[1] += header.size;
    }
  }
  while (header.type != 11);
  return 0;
}


 
s32 uso_returnOne_800007C4(s32 a0, s32 a1) {
    return 1;
}

typedef struct {
    char pad_00[0x14];
    s32 field_14;
    char pad_18[0x34];
    s32 field_4C;
    char pad_50[0x22];
} UsoEntry74;


extern s32 sFmt_Text_range_8000A2E4;
extern s32 gUsoModulesEnd;

 





void uso_printModules(void) {
    s32 i;
    UsoEntry74 *e;

    for (i = 0; i < 0x87; i++) {
        e = ((UsoEntry74 **)&gUsoModules)[i];
        if (e != 0) {
            gUsoCtx.print(&sFmt_Text_range_8000A2E4, (char *)e + 0x72, e->field_4C, e->field_4C + e->field_14);
        }
    }
}

typedef struct {
    char pad_00[0x94];
    s32 field_94;
} UsoTable94;

extern s32 sFmt_slot_line_8000A2F4;

 


 


void uso_printSlots(void) {
    s32 i;

    for (i = 0; i < 0x87; i++) {
        gUsoCtx.print(&sFmt_slot_line_8000A2F4, i, ((UsoModuleSlot *)&gUsoModuleSlots)[i].romOffset, ((UsoModuleSlot *)&gUsoModuleSlots)[i].name);
    }
}



 










extern s32 sFmt_USO_unloading_8000A300;
extern s32 gUsoPathFile;
extern s32 gUsoPathDir;
extern s32 func_800021D0();
extern s32 func_8000275C();
extern s32 sFmt_USO_loading_8000A314;
extern s32 sStr_rb_8000A328;
extern s32* func_800008B8(void*, void*, void*);
extern s32 func_80000A98();

s32 uso_unload(char *path) {
    s32 i;
    s32 j;
    char *e;

    gUsoPrintfHook((void *)&sFmt_USO_unloading_8000A300, path);
    func_80000660(path, &gUsoPathDir, &gUsoPathFile);
    for (i = 0; i < 0x87; i++) {
        if (gUsoModules[i] != 0 &&
            func_80000568(&gUsoPathFile, (char *)gUsoModules[i] + 0x72) == 0) {
            *((char *)gUsoModules[i] + 0x98) = 0;
            gUsoModules[i] = 0;
            for (j = 0; j < 0x87; j++) {
                e = (char *)gUsoModules[j];
                if (e != 0) {
                    func_800021D0(e, i);
                    func_8000275C(e, i);
                }
            }
            return 0;
        }
    }
    return 0;
}

 



 




























typedef struct UsoModule {
    char unk0[0x70];
    s16 unk70;           
    char unk72[0x94 - 0x72];
    s32 unk94;
    char pad98[4];
} UsoModule;

extern char gUsoModuleSlot0Name;                  
extern s32 sFmt_USO_loading_8000A314;
extern s32 sStr_rb_8000A328;
extern s32 gUsoPathDir;
extern s32 gUsoPathFile;
extern void func_80001CB0();
extern s32 func_800022C8();
extern s32 func_800025A4();
extern s32 func_80002650();
extern s32 func_800020F4();

s32 uso_load(s32 file) {
    s32 off;
    s32 len;
    s32 *new_var;
    char *desc;
    s32 header[8];
    s32 *range;
    UsoModule *found;
    s32 i;
    s32 j;
    UsoModule *mod;
    s32 err;

    gUsoEntryIndex = -1;
    gUsoEntryModule = -1;
    err = 0;
    if (1) {
    }
    gUsoPrintfHook(&sFmt_USO_loading_8000A314, (void *)file);
    gUsoCtx.missCount = 0;
    gUsoCtx.unk2C = 0;
    func_80000660(file, &gUsoPathDir, &gUsoPathFile);
    range = func_800008B8(header, &gUsoPathDir, &sStr_rb_8000A328);
    if (range == ((void*)0) ) {
        return -0x11;
    }
    gUsoHeapCur = range[0];
    gUsoHeapEnd = range[1];
    found = ((void*)0) ;
    for (mod = (UsoModule *)&gUsoModuleSlots, i = 0; i != 0x87; mod++, i++) {
        if (func_80000568(&gUsoModuleSlot0Name + i * 0x9C, &gUsoPathFile) == 0) {
            found = mod;
            func_80001CB0(mod);
            mod->unk70 = i;
            if (gUsoModules[i] != 0) {
                return -0x13;
            }
            gUsoModules[i] = (s32)mod;
            header[1] = mod->unk94;
            err = func_800022C8(mod, header);
            if (err != 0) {
                return err;
            }
            break;
        }
    }
    new_var = gUsoModules;
    if (found == ((void*)0) ) {
        return -0x14;
    }
    len = range[1] - range[0];
    off = gUsoHeapCur - range[0];
    gUsoCtx.heapLeft = len - off;
    gUsoCtx.heapCur = gUsoHeapCur;
    func_8000098C(header, len, off, &gUsoCtx);
    for (j = 0; j < 0x87; j++) {
        if (new_var[j] != 0) {
            err |= func_800025A4(gUsoModules[j]);
        }
    }
    if (err != 0) {
        return -0xA;
    }
    for (j = 0; j < 0x87; j++) {
        if (gUsoModules[j] != 0) {
            err |= func_80002650(gUsoModules[j]);
        }
    }
    if (err != 0) {
        return -0xC;
    }
    for (j = 0; j < 0x87; j++) {
        if (gUsoModules[j] != 0) {
            err |= func_800020F4(gUsoModules[j]);
        }
    }
    if (err != 0) {
        return err;
    }
    range[0] = gUsoHeapCur;
    return found->unk70;
}

 
typedef s32 (*UsoFunc)(void*);

s32 uso_callEntry(void) {
    s32 modIndex = gUsoEntryModule;
    s32* mod;
    s32 funcIndex;
    s32 funcTable;

    if (modIndex < 0) {
        return -1;
    }

    mod = (s32*)gUsoModules[modIndex];
    if (mod == 0) {
        return -1;
    }

    funcIndex = gUsoEntryIndex;
    if (funcIndex < 0) {
        return -1;
    }

    funcTable = (s32)((UsoModuleSlot *)mod)->secData[USO_SEC_SYM];
    if (funcTable == 0) {
        return -1;
    }

    {
         




        s32 t;
        UsoFunc fn = (UsoFunc)((UsoSym *)(t = funcTable))[funcIndex].value;  
        gUsoEntryResult = fn(&gUsoCtx);
    }
    return 0;
}

 






extern s32 func_8000098C(void*);
extern s32 func_80000B34(void*);
 



extern s32 func_800005DC_d2c(void*, void*);

typedef struct { s32 unk0; s32 idx; s32 unk8; } UsoLoadRec;
typedef struct { s32 unk0; s32 unk4; s32 pad[8]; } UsoLoadIter;
typedef struct { s32 head; s32 pad[4]; } UsoLoadReq;
 
typedef struct { s32 unk0; s32 idx; s32 unk8; u8 name[0x18]; } UsoLoadEnt;

 





s32 uso_getModuleName(u8 *out, s32 id) {
    UsoLoadReq *req;
    UsoLoadIter it;
    u8 *slot;
    s32 i;
    UsoLoadEnt ent;
    u8 c;

    slot = (u8 *)gUsoModules[id];
    req = (UsoLoadReq *)gFsDeviceTable;
    if (slot != ((void*)0) ) {
        c = slot[0x72];
        i = 0;
        out[0] = c;
        if (c != 0) {
            do {
                i++;
                c = ((u8 *)gUsoModules[id])[i + 0x72];
                out[i] = c;
            } while (c != 0);
        }
        return 2;
    }
    for (; req->head != 0; req++) {
        func_80000880(&it, req);
        while (func_80000A98(&it, &ent) != 0) {
            if (ent.idx == id) {
                func_800005DC_d2c(out, ent.name);
                return 1;
            }
            if (func_80000B34(&it) < 0) {
                return gUsoErrno;
            }
        }
        func_8000098C(&it);
    }
    return 0;
}

void uso_printVersion(void) {
    gUsoPrintfHook(&sFmt_USO_Version_8000A32C, &sStr_3_1_8000A340);
}

extern s32 sStr_unknown_8000A344;
 






void uso_addrToModule(u32 arg0, void **arg1, s32 *arg2) {
    s32 i;

    for (i = 0; i < 135; i++) {
        UsoEntry74 **tbl = (UsoEntry74 **) &gUsoModules;
        UsoEntry74 *e = tbl[i];
        if (e != ((void*)0) ) {
            if ((arg0 >= (u32) e->field_4C) && (arg0 < (u32) (e->field_4C + e->field_14))) {
                *arg1 = (char *) e + 0x72;
                *arg2 = arg0 - e->field_4C;
                return;
            }
        }
    }
    *arg1 = &sStr_unknown_8000A344;
    *arg2 = 0;
}

 
void* uso_getContext(void) {
    return &gUsoCtx;
}

 

void uso_nop_800010C0(s32 a0, s32 a1) {
}

