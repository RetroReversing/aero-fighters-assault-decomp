void *func_802938FC(void *a0) {
    if (a0 == 0) {
        a0 = (void*)func_802C676C (20);
    }
    return a0;
}

void *WorldCourse_ctor_00001DB8(void *a0, int a1, int a2) {
    if (a0 == 0) {
        a0 = (void*)func_802C676C (0x48);
        if (a0 == 0) goto end;
    }
    func_802C676C (a0, a1);
    ((WorldCourse *)a0)->desc = (s32 *)a2;
end:
    return a0;
}

 















extern char sStr_Node_6E30, sStr_World_Registry_6E38;
extern char sStr_One_Make_6E48, sStr_HalfPipe_6E54, sStr_Slalom_Course_6E60, sStr_Stunt_Course_6E70, sStr_Long_Course_6E80;
extern char sStr_New_Course_6E8C, sStr_Night_Course_6E98, sStr_Black_Diamond_6EA8, sStr_Practice_6EB8, sStr_Test_Grid_6EC4;
 
extern char D_1E08_d, D_1E08_a, D_1E08_b, D_1E08_c, D_1E08_e, D_1E08_f;
extern char D_1E08_g, D_1E08_h, D_1E08_i, D_1E08_j;
void *WorldRegistry_create_00001E08(char *o) {
    char *pad;
    char *sub;
    if (o == 0) {
        o = (char*)func_802C676C (0x118);
        if (o == 0) goto end;
    }
    func_802C676C (o, &sStr_Node_6E30);
    ((WorldRegistry *)o)->vptr = &D_1E08_d ;
    sub = (char *)&((WorldRegistry *)o)->head;
    func_802C676C (sub);
    ((Node *)(o)) ->name = (const char *)&sStr_World_Registry_6E38;  
    ((WorldRegistry *)o)->head.next = 0;
    ((WorldRegistry *)o)->numCourses = 0;
    ((WorldRegistry *)o)->tail = (WorldCourse *)sub;
    func_802C676C (o, &sStr_One_Make_6E48, &D_1E08_a);
    func_802C676C (o, &sStr_HalfPipe_6E54, &D_1E08_b);
    func_802C676C (o, &sStr_Slalom_Course_6E60, &D_1E08_c);
    func_802C676C (o, &sStr_Stunt_Course_6E70, &D_1E08_d );
    func_802C676C (o, &sStr_Long_Course_6E80, &D_1E08_e);
    func_802C676C (o, &sStr_New_Course_6E8C, &D_1E08_f);
    func_802C676C (o, &sStr_Night_Course_6E98, &D_1E08_g);
    func_802C676C (o, &sStr_Black_Diamond_6EA8, &D_1E08_h);
    func_802C676C (o, &sStr_Practice_6EB8, &D_1E08_i);
    func_802C676C (o, &sStr_Test_Grid_6EC4, &D_1E08_j);
end:
    return o;
}

                                                                         
                                                                             
                                                                           
                                                       
                                                                        
                                                                               
void WorldRegistry_addCourse_00001F78(WorldRegistry *obj, int d1, int d2) {
    WorldCourse *n;
    n = (WorldCourse *)func_802C676C (0, d1, d2, obj);  
    n->next = obj->tail->next;
    obj->tail->next = n;
    obj->tail = n;
    obj->numCourses += 1;
}

void *WorldRegistry_getCourse_00001FC8(WorldRegistry *a0, int a1) {
    WorldCourse *p = a0->head.next;
    int i;
    for (i = 0; i < a1; i++) {
        p = p->next;
    }
    return p;
}

void *WorldRegistry_getCourse_00002014(WorldRegistry *a0, int a1) {
    WorldCourse *p = a0->head.next;
    int i;
    for (i = 0; i < a1; i++) {
        p = p->next;
    }
    return p;
}

void game_setParams_00002060(char *a0, int a1, int a2, int a3, int a4, int a5) {
    ((WorldRegistry *)(a0)) ->fgRoot = a1;
    ((WorldRegistry *)(a0)) ->bgRoot = a2;
    ((WorldRegistry *)(a0)) ->egRoot = a4;
    ((WorldRegistry *)(a0)) ->ogRoot = a5;
    ((WorldRegistry *)(a0)) ->mainGame = a3;
}

void game_clearWindows_00002080(int *a0) { ((WorldRegistry *)(a0)) ->numWindows = 0; }

 







void game_addWindow_00002088(char *a0, int a1) {
    int idx = ((WorldRegistry *)(a0)) ->numWindows;
    ((WorldRegistry *)(a0)) ->numWindows = idx + 1; ((WorldRegistry *)(a0)) ->windows[idx] = a1;
}

void game_clearPlayers_000020A4(int *a0) { ((WorldRegistry *)(a0)) ->numPlayers = 0; }

 





void game_addPlayer_000020AC(int *a0, int a1, int a2) {
    int idx;
    ((WorldRegistry *)(a0)) ->players[((WorldRegistry *)(a0)) ->numPlayers].arg = a2;
    idx = ((WorldRegistry *)(a0)) ->numPlayers;
    ((WorldRegistry *)(a0)) ->numPlayers = idx + 1; ((WorldRegistry *)(a0)) ->players[idx].rider = (char *)a1;
}

void game_forEachPlayer_000020D8(char *a0, int a1) {
    int i;
    char *p;
    if (((WorldRegistry *)(a0)) ->numPlayers > 0) {
        i = 0;
        p = a0;
        do {
            func_802C676C (a1, ((WorldRegistry *)(p)) ->players[0].rider, ((WorldRegistry *)(p)) ->players[0].arg);  
            i++;
            p += 8;
        } while (i < ((WorldRegistry *)(a0)) ->numPlayers);
    }
}

void game_stub_0000214C(int a0) {
}

void boot_readFloatParm_00002154(char *a0) {
    int scratch;
    stream_readS32_00001C10(&scratch);
    stream_readF32_00001C4C((float*)(a0 + 0x10));
}

void boot_readVec3Parm_00002184(char *a0) {
    int scratch;
    stream_readS32_00001C10(&scratch);
    stream_readVec3_00001C88(a0 + 0x10);
}

void boot_readIntParm_000021B4(char *a0) {
    int scratch;
    stream_readS32_00001C10(&scratch);
    stream_readS32_00001CF8((int*)(a0 + 0x10));
}

void boot_readQuadParm_000021E4(char *a0) {
    int scratch;
    stream_readS32_00001C10(&scratch);
    stream_readQuad_00001D34((Quad4*)(a0 + 0x10));
}

void boot_readIntParm_00002214(char *a0) {
    int scratch;
    stream_readS32_00001C10(&scratch);
    stream_readS32_00001C10((int*)(a0 + 0x10));
}

 









extern int func_802C676C();
int *boot_ItemType_create_00002244(int *caller_a0) {
    int *ret;
    int *target;
    int *p;
    if ((p = (int*)func_802C676C (0x40)) != 0) {
        func_802C676C (p);
        ((Node *)(p)) ->vptr = (char *)&D_00000000 ;
        p[0x3C/4] = 0;
    }
    ret = p;
    p += 0x10/4;
    if (caller_a0[0x40/4] != 0) {
        target = (int*)caller_a0[0x40/4];
        func_802C676C (p, target);
        if (target[0x14/4] != 0) {
            target[0x4/4] = 1;
        }
        target[0x14/4] = (int)ret;
    }
    return ret;
}



void stream_readS32_000022E0(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readF32_0000231C(float *dst) {
    float buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

extern void stream_readVec3_00002358();
void stream_readVec3_00002358(Vec3 *dst) {
    int pad_top[1];
    Tri3i raw;
    int pad_mid[2];
    Tri3i tmp;
    int pad_bot[2];
    func_802C676C (&D_00000000 , &raw, 12);



    tmp = raw;
    dst->x = *(float*)&tmp.a;
    dst->y = *(float*)&tmp.b;
    dst->z = *(float*)&tmp.c;
}

void stream_readQuad_000023C8(Quad4 *dst) {
    Quad4 buf;
    func_802C676C (&D_00000000 , &buf, 16);



    *dst = buf;
}

 









extern char sStr_Node_731C;
 
CamDirector *CamDirector_ctor(CamDirector *a0, int pad, int rider, int window, int cam0, int cam1) {
    if (a0 == 0) {
        a0 = (CamDirector *)func_802C676C (0x50);
        if (a0 == 0) goto end;
    }
    func_802C676C (a0, &sStr_Node_731C);  
    ((Node *)(a0)) ->vptr = (char *)&D_00000000 ;  
    a0->pad = (struct RiderInput *)pad;
    a0->rider = (SnowBoarder *)rider;
    a0->window = (CamWindow *)window;
    a0->cams[0] = (MCamera *)cam0;
    a0->cams[1] = (MCamera *)cam1;
    a0->activeCam = 0;
    a0->lastCamNode = 0;
    a0->pollTimer = 10000;
    a0->manual = 0;
end:
    return a0;
}

                                                                                                             
                                                                                                               
                                                                                                        
                                                                                         
                                                                                                          
                                                                                                     
                                                                
                 
                                                                                           
                                                                                   
                                                                                  
                                                                                
                                                                                 
                                                                                   
                                                                                   
                                                                                    
                                                                                   
                                                                                   
                                                                     
 


















extern int gInputMgr_00000064;
extern int D_24B8_tbl;
typedef struct { int w; } W24B8;
typedef void (*VF_24B8)();
 




extern void func_00000000_24b8v();
 



 





 



void CamDirector_update(CamDirector *self) {
    int k;                   
    char *v0;
    char *v1;
    char *p;                 
    volatile int pad;
    W24B8 tb;
    int r;
    char *s0;
    int k2;                  

    k = 0; if ((((char *)self)[0x4C]) ) {}  
    if (gInputMgr_00000064 == 1) {
        v0 = (char *)self->pad + 0 * (int)((((char *)self)[0x4C]) );
        r = 0;
        s0 = (char *)((((RiderInput *)(v0)) ->held & 0x400) != 0); func_00000000_24b8v ((int)s0, (*(u32 *)&((RiderInput *)(v0)) ->held & 0x1000) != 0, ((RiderInput *)(v0)) ->rawX, ((RiderInput *)(v0)) ->rawY);  
        k = r;
    }
    s0 = (char *)self->pad;
    if (((RiderInput *)(s0)) ->pressed & 0x40) {
        k = 1;
        self->manual = (self->manual != 0) == 0;
    }
    if (self->manual != 0) {
         
        f32 two = 2.0f;
        if (k != 0) {
             
            func_00000000_24b8v (self, 0);
            v0 = (char *)self->cams[0];
            s0 = (char *)(*(int *)((char *)(v0) + ( 0x28)))  ;
            ((VF_24B8)(*(int *)((char *)(s0) + ( 0x6C))) ) ((*(s16 *)((char *)(s0) + ( 0x68)))   + v0, 3, 0);
            self->window->cam->fov = 85.0f;
        }
        s0 = (char *)self->pad; if (self) {}
        if (((RiderInput *)(s0)) ->held & 8) {  
            v1 = (char *)self->window->cam; if (1) {}  
            if (((MCamera *)(v1)) ->fov < 120.0f) { if ((((char *)self)[0x40]) ) {}  
                s0 = (char *)&((MCamera *)(v1)) ->fov + 0 * (int)(*s0); if (1) {}  
                *(f32 *)s0 = *(f32 *)s0 + two;
            }
        }
        s0 = (char *)self->pad;
        if (((RiderInput *)(s0)) ->held & 4) {
            v1 = (char *)self->window->cam; if (1) {} if (1) {}
            if (((MCamera *)(v1)) ->fov > 45.0f) { if ((((char *)self)[0x40]) ) {}
                s0 = (char *)&((MCamera *)(v1)) ->fov + 0 * (int)(*s0) + 0 * (int)((((char *)self)[0x40]) ); if (1) {}  
                *(f32 *)s0 = *(f32 *)s0 - two;
            }
        }
        v1 = (char *)self->window->cam; if (1) {}
        s0 = (char *)&((MCamera *)(v1)) ->pitch + 0 * (int)(*s0); if (1) {}  
        *(f32 *)s0 = self->pad->stickY * two + *(f32 *)s0;
        s0 = (char *)self->window->cam;
        s0 = (char *)&((MCamera *)(s0)) ->yaw;
        *(f32 *)s0 = self->pad->stickX * two + *(f32 *)s0;
        return;
    }
     
    if (k != 0) {
        self->pollTimer = 10000;  
    }
    s0 = (char *)self->pollTimer;
    self->pollTimer = (int)s0 + 1;
    if ((int)s0 >= 0x3C) {
        tb.w = sStr_cam_7324;
        p = (char *)func_802C676C (D_24B8_tbl, tb, self->rider->dnode.vqs.trans, 0);
        if (p != 0 && p != self->lastCamNode) {
            k2 = ((CourseCamItem *)(p)) ->kind;
            if ((u32)k2 >= 3 && (u32)k2 < 0x13) {
                 
                func_00000000_24b8v (self, 0);
                v0 = (char *)self->cams[0];
                s0 = (char *)(*(int *)((char *)(v0) + ( 0x28)))  ;
                ((VF_24B8)(*(int *)((char *)(s0) + ( 0x6C))) ) ((*(s16 *)((char *)(s0) + ( 0x68)))   + v0, k2, p);
            } else {
                 
                func_00000000_24b8v (self, 1);
                v0 = (char *)self->cams[1];
                s0 = (char *)(*(int *)((char *)(v0) + ( 0x28)))  ;
                ((VF_24B8)(*(int *)((char *)(s0) + ( 0x6C))) ) ((*(s16 *)((char *)(s0) + ( 0x68)))   + v0, k2, p);
            }
             


            self->lastCamNode = p;
            self->pollTimer = 0;
        }
    }
}

void CamDirector_setActiveCam(CamDirector *a0, int a1) {
    if (((Node *)(a0)) ->doFlags & 8) {  
        f32 *p;
        a0->activeCam = a1;
        a0->window->cam = a0->cams[a1];
        p = &a0->window->cam->pitch;
        p[2] = 0.0f;  
        p[1] = 0.0f;  
        p[0] = 0.0f;  
    }
}

void CamDirector_onMessage(char *a0, int *a1) {
    int msg_type = *a1;
    int *flags = (int*)(a0 + 0x18);
    if (msg_type == 0x3ED) {
        *flags &= ~0x8;
    }
}

                                                                          
                                                                               
                                                                               
                                                                               
                                                                                
                                                                             
                                                                           
                                                                    
                                                                 
                                                                              
                                                                       
                                                                            
                                                                            
                                                                           
                                                                         
                                                                              
                                                                             
                                                                       
                                                                        
                                                                           
                                                                 
                                                                             
                                                         
                                                                            
                                                                           
                                                                               
                                                                             
                                                                               
                                                                           
                                                   
                                                                               
                                                                           
                                                                               
                                                                               
                                                                          
                                                                      
                                                          
  
                                                                       
                                                                               
                                                                        
                                                                                 
                                                                              
                                                                               
                                                             
                                                      
                                                                     
                                                       
                                                                         
                                                       
                                                       
                                                       
                                                                      
                                  
                                                                              
                                                                            
                                                                     
                                                                            
                                                                       
                                                                
                                                    
                                                                            
                                    
      
  
                           
                                                                      
                                                      
                                                                     
                                                          
                                                                       
                                                       
                                                                                           
                                                                                  
                                                                                  
                                                           
                                                                  
                                                                  
                                                                       
                                                               

void *game_init(char *scene, int a1, int a2, int a3) {
    char *s4C, *s48, *s44, *s40, *s3C, *p, *g;
    int sv, m;
    f32 fd;
    sv = (int)func_802C676C(&D_00000000);
    ((InputMgr *)scene)->gameMode = a2;
    func_802C676C((char *)&D_00000000 + 0x7328, 0);
    func_802C676C(&D_00000000, (char *)&D_00000000 + 0x7334);
    func_802C676C((int)((InputMgr *)scene)->game, a2);
    func_802C676C((char *)&D_00000000 + 0x7344, 0);
    func_802C676C(&D_00000000, (char *)&D_00000000 + 0x7350);
    func_802C676C(&D_00000000, (char *)&D_00000000 + 0x7360);
    func_802C676C();
    func_802C676C((char *)&D_00000000 + 0x7374, 0);
    s3C = (char *)func_802C676C(0, (char *)&D_00000000 + 0x7380);
    s4C = (char *)func_802C676C(0, (char *)&D_00000000 + 0x738C);
    s48 = (char *)func_802C676C(0, (char *)&D_00000000 + 0x7390);
    s44 = (char *)func_802C676C(0, (char *)&D_00000000 + 0x7394);
    s40 = (char *)func_802C676C(0, (char *)&D_00000000 + 0x7398);
    g = (char *)func_802C676C(0);
    *(int *)&D_00000000 = (int)g;
    func_802C676C(s4C + 0x10, g);
    if (((Node *)(g)) ->parent) ((Node *)(g)) ->unk04 = 1;
    ((Node *)(g)) ->parent = (Node *)s4C;
    func_802C676C();
    func_802C676C((int)((InputMgr *)scene)->game, s44, s4C, s3C, s48, s40);
    func_802C676C((int)((InputMgr *)scene)->game);
    func_802C676C((int)((InputMgr *)scene)->game);
    func_802C676C((int)((InputMgr *)scene)->game);
    m = (int)func_802C676C(&D_00000000);
    fd = (f32)(u32)*(int *)((char *)&D_00000000 + 0x20C);
    func_802C676C((char *)&D_00000000 + 0x739C,
                  ((f32)(u32)m - (f32)(u32)sv) / fd);
    sv = (int)func_802C676C(&D_00000000);
    func_802C676C((int)((InputMgr *)scene)->game, func_802C676C((int)((InputMgr *)scene)->game, a1), a2);
    g = ((InputMgr *)scene)->game;
    m = (int)func_802C676C(&D_00000000);
    ((WorldRegistry *)(g)) ->map = (MapProp *)m;
    fd = (f32)(u32)*(int *)((char *)&D_00000000 + 0x20C);
    func_802C676C((char *)&D_00000000 + 0x73B4,
                  ((f32)(u32)m - (f32)(u32)sv) / fd);
    sv = (int)func_802C676C(&D_00000000);
    func_802C676C((int)((InputMgr *)scene)->game, a2, a3);
    m = (int)func_802C676C(&D_00000000);
    fd = (f32)(u32)*(int *)((char *)&D_00000000 + 0x20C);
    func_802C676C((char *)&D_00000000 + 0x73CC,
                  ((f32)(u32)m - (f32)(u32)sv) / fd);
    p = s48 + 0x10;
    func_802C676C(p, s44);
    if (((Node *)(s44)) ->parent) ((Node *)(s44)) ->unk04 = 1;
    ((Node *)(s44)) ->parent = (Node *)s48;
    func_802C676C(p, s40);
    if (((Node *)(s40)) ->parent) ((Node *)(s40)) ->unk04 = 1;
    ((Node *)(s40)) ->parent = (Node *)s48;
    p = s3C + 0x10;
    func_802C676C(p, s4C);
    if (((Node *)(s4C)) ->parent) ((Node *)(s4C)) ->unk04 = 1;
    ((Node *)(s4C)) ->parent = (Node *)s3C;
    func_802C676C(p, s48);
    if (((Node *)(s48)) ->parent) ((Node *)(s48)) ->unk04 = 1;
    ((Node *)(s48)) ->parent = (Node *)s3C;
    return s3C;
}




 














extern char sStr_ddm_73E8;
extern void snd_calcEmitterDistPan_000003F8();   
 







extern f32 bu_2c94_k4f0;
extern f32 gGfxLib_2c94_dst[];
extern char gGfxLib_2c94_src[], gGfxLib_2c94_ctx[], sStr_ddm_73E8;
extern int bu_2c94_mode, gPolyFlags_3EEC4_2c94_x_ld, gPolyFlags_3EEC4_2c94_x_st, gPolyGeomMode_3EEC8_2c94_y_ld[], gPolyGeomMode_3EEC8_2c94_y_st[];
extern int bu_2c94_tbl[], bu_2c94_gate;







void game_initDdm_00002C94(void *a0, void *a1) {
    f32 k;
    int *p;
    int e;
    int v;

    k = bu_2c94_k4f0;
    gGfxLib_2c94_dst[0] = k;
    gGfxLib_2c94_dst[1] = k;
    gGfxLib_2c94_dst[2] = k;
    func_802C676C (gGfxLib_2c94_src);
    func_802C676C (gGfxLib_2c94_src, gGfxLib_2c94_dst);
    bu_2c94_mode = 6;
    gPolyFlags_3EEC4_2c94_x_st = gPolyFlags_3EEC4_2c94_x_ld & ~8;
    v = gPolyGeomMode_3EEC8_2c94_y_ld[1];
    v &= ~2;
    v |= 0x2000;
    v |= 0x80000;
    gPolyGeomMode_3EEC8_2c94_y_st[1] = v;
    p = bu_2c94_tbl;
    func_802C676C (&sStr_ddm_73E8, 0);
    if (bu_2c94_gate != 0) {
        do {
            func_802C676C (gGfxLib_2c94_ctx, p[0], p[1]);
            p += 2;
        } while (p[0] != 0);
    }
    func_802C676C ();
}







 













extern void func_00000000_2DA4_v();
extern char sStr_ImgFileMgr_73EC, sStr_rom_tricks_bin_73F8, sStr_unknown_GAME_MODE_7408;
extern int D_2DA4_obj, D_2DA4_obj_rd;
extern int gPolyGeomMode_3EEC8_2DA4_cfg[];  
void game_setupMode(char *arg0, s32 arg1, s32 arg2) {
    char *a1;
    char *v1;
    int v;
    func_00000000_2DA4_v (&sStr_ImgFileMgr_73EC, 0);
    func_00000000_2DA4_v ();
    D_2DA4_obj = func_802C676C (0, &sStr_rom_tricks_bin_73F8);
    v1 = (char *)((WorldRegistry *)(arg0)) ->bgRoot;
    a1 = (char *)D_2DA4_obj_rd;
    func_00000000_2DA4_v (v1 + 0x10, a1);
    if (((Node *)(a1)) ->parent != 0) {
        ((Node *)(a1)) ->unk04 = 1;
    }
    ((Node *)(a1)) ->parent = (Node *)v1;
    func_00000000_2DA4_v (D_2DA4_obj);
    v = gPolyGeomMode_3EEC8_2DA4_cfg[1];  
    v = v | 0x80000 | 0x2000 | 0x20000;
    ((int *)&D_00000000 )[1] = v;
    switch (arg1) {
    case 2: func_00000000_2DA4_v (arg0, arg2); break;
    case 4: func_00000000_2DA4_v (arg0, arg2); break;
    case 12: func_00000000_2DA4_v (arg0, arg2); break;
    case 3: func_00000000_2DA4_v (arg0, arg2); break;
    case 5: func_00000000_2DA4_v (arg0, arg2); break;
    case 6: func_00000000_2DA4_v (arg0, arg2); break;
    case 1:
        func_00000000_2DA4_v (arg0, 0);
        a1 = (char *)D_2DA4_obj; if (1) { a1 += 0x18; } *(int *)a1 = *(int *)a1 | 4;
        break;
    case 9: func_00000000_2DA4_v (arg0, arg2); break;
    case 10: func_00000000_2DA4_v (arg0, arg2); break;
    case 11: func_00000000_2DA4_v (arg0, arg2); break;
    default:
        func_00000000_2DA4_v (&sStr_unknown_GAME_MODE_7408);
        break;
    }
}

 


























 


















extern char sStr_Lights_741C, sStr_Ambient_Light_7424, sStr_Infinite_Light_7434, sStr_Shadow_Light_7444, sStr_lighttarget_7454;
extern float kRo_game_createLights_524, kRo_game_createLights_528, kRo_game_createLights_52C;
extern char gGfxLib_2F90_reg, LightTarget_vtbl_2F90_m28;
extern void func_00000000_2F90_v();
extern void func_00000000_2F90_f(char *, char *, float, float, float);
void game_createLights(char *s1) {
    volatile int pad0;
    char *p90;
    volatile int pad;
    volatile int pad2;
    volatile int pad3;
    int n2;
    float vec[3];
    float k2;
    char *o;
    char *c;
    func_00000000_2F90_v (&sStr_Lights_741C, 0);
    c = (char *)func_802C676C (0, &sStr_Ambient_Light_7424);
    {
        float k = kRo_game_createLights_524;
        ((WorldRegistry *)(s1)) ->light0 = (s32)c;
        ((BaseLight *)c)->parms.col[2] = k;
        ((BaseLight *)c)->parms.col[1] = k;
        ((BaseLight *)c)->parms.col[0] = k;
        ((BaseLight *)c)->parms.col[3] = 1.0f;
    }
    p90 = (char *)((WorldRegistry *)(s1)) ->light0; ((BaseLight *)p90)->mask = 1;
    p90 = (char *)((WorldRegistry *)(s1)) ->light0; if (1) { p90 = (char *)&((BaseLight *)p90)->flags; } *(int *)p90 |= 0x40;
    p90 = (char *)((WorldRegistry *)(s1)) ->light0; if (1) { p90 = (char *)&((BaseLight *)p90)->flags; } *(int *)p90 |= 0x80;
    c = (char *)func_802C676C (0, &sStr_Infinite_Light_7434);
    ((WorldRegistry *)(s1)) ->light1 = (s32)c;
    ((BaseLight *)c)->parms.col[3] = 1.0f;
    ((BaseLight *)c)->parms.col[2] = 1.0f;
    ((BaseLight *)c)->parms.col[1] = 1.0f;
    ((BaseLight *)c)->parms.col[0] = 1.0f;
    p90 = (char *)((WorldRegistry *)(s1)) ->light1; ((BaseLight *)p90)->mask = 2;
    p90 = (char *)((WorldRegistry *)(s1)) ->light1; if (1) { p90 = (char *)&((BaseLight *)p90)->flags; } *(int *)p90 |= 0x40;
    o = (char *)func_802C676C (0, &sStr_Shadow_Light_7444);
    vec[0] = 0.0f;
    vec[2] = 0.0f;
    vec[1] = kRo_game_createLights_528;
    func_00000000_2F90_v (o + 0x70, vec);
    c = o; if (1) { c = (char *)&((BaseLight *)c)->flags; } *(int *)c |= 0x40;
    func_00000000_2F90_v (&gGfxLib_2F90_reg, ((WorldRegistry *)(s1)) ->light1);
    func_00000000_2F90_v (&gGfxLib_2F90_reg, ((WorldRegistry *)(s1)) ->light0);
    func_00000000_2F90_v (&gGfxLib_2F90_reg, ((WorldRegistry *)(s1)) ->light1);
    p90 = (char *)((WorldRegistry *)(s1)) ->light0;
    o = (char *)((WorldRegistry *)(s1)) ->bgRoot;
    func_00000000_2F90_v (o + 0x10, p90);
    if (((Node *)(p90)) ->parent != 0) {
        ((Node *)(p90)) ->unk04 = 1;
    }
    ((Node *)(p90)) ->parent = (Node *)o;
    o = (char *)func_802C676C (0x16C);
    if (o != 0) {
        func_00000000_2F90_f (o, &sStr_lighttarget_7454, 0.0f, 0.0f, 0.0f);
        k2 = kRo_game_createLights_52C;
        ((Node *)(o)) ->vptr = (char *)&LightTarget_vtbl_2F90_m28; ((LightTarget *)o)->mask = 0xFFFF;
        ((LightTarget *)o)->unk108[0] = k2;
        ((LightTarget *)o)->unk108[1] = k2;
        ((LightTarget *)o)->unk108[2] = k2;
        ((LightTarget *)o)->scale = 1.0f;
    }
    n2 = ((WorldRegistry *)(s1)) ->bgRoot;
    func_00000000_2F90_v (n2 + 0x10, o);
    if (((Node *)(o)) ->parent != 0) {
        ((Node *)(o)) ->unk04 = 1;
    }
    ((Node *)(o)) ->parent = (Node *)n2;
    func_00000000_2F90_v ();
}

void game_stub_000031B8(int a0) {
}

                                                                                                                     
                                                                                                              
                                                                                                                 
                                                                                                                  
                                                                                                            
                                                                                                
                                                                                                            
                                                      
                                                     
                                                                           
                                                                                 
                                                                    
                                                                             
                                                                               
                                                                       
typedef struct { int w; } SC4_;  
void *cam_create(int a0, int mode, char *parent, char *a3v, int p4) {
    volatile int r = 0;
    return 0;
}

 


























extern char sStr_3DWindow_74D0;
extern f32 kRo_game_create3DWindow_538, kRo_game_create3DWindow_53C, kRo_game_create3DWindow_540;
 
extern float D_00000030[4];
extern char gSnowBoard_0000002C;
extern void stream_readS32_00000008();   
extern void snd_calcEmitterDistPan_000003F8();   
void *game_create3DWindow(char *a0, int *a1, int a2) {
    float *g;
    char *r;
    int p;
    g = D_00000030;
    g[0] = kRo_game_create3DWindow_538;
    g[1] = kRo_game_create3DWindow_53C;
    g[2] = kRo_game_create3DWindow_540;
    g[3] = 0.0f;
    r = (char *)func_802C676C (0, 0x64, &sStr_3DWindow_74D0, 0x6D,
                              2, 0x6E, a1[0], a1[1], 0x6F, a1[2], a1[3],
                              0x70, a1[6] | 2, 0x71, 1, 0x73, a1[4],
                              0x74, a1[5], 0);
    ((ScreenWindow *)r)->win.camera = (char *)a2;  
    func_802C676C (&gSnowBoard_0000002C, r);
    if ((p = ((WorldRegistry *)(a0)) ->bgRoot) != 0) func_802C676C (r, p);
    if ((p = ((WorldRegistry *)(a0)) ->fgRoot) != 0) func_802C676C (r, p);
    func_802C676C (a0, r);
    return r;
}

 
































 





















extern char sStr_Players_74DC;
 

extern void *func_3638_node(int, void *, int, int, int, float, float, int, int);
 
extern void func_00000000_3638_v(void *);
void *game_createPlayers(int *arg0, void *arg1, int arg2, int arg3, int arg4, char *arg5,
                    float arg6, float arg7, int arg8, int arg9) {
    void *node;
    char *p;
    func_00000000_3638_v(&sStr_Players_74DC);
    arg8 |= 2;
    node = func_3638_node(0, arg1, arg2 + 1, arg3 + 1, arg4, arg6, arg7, arg8, arg9);
    p = node;    
    func_802C676C(arg5 + 0x10, node);
    if (*(int *)(p + 0x14) != 0) {
        *(int *)(p + 0x4) = 1;
    }
    *(char **)(p + 0x14) = arg5;    
    if (arg8 & 0xC) {
        func_802C676C(arg0, node, 0);
    } else {
        func_802C676C(arg0, node, 1);
    }
    func_802C676C();
    return node;
}




 





































 

extern char *func_3734_r1(void *, int, int, int, void *, int, float, float, int, int);
extern int gInputMgr_3734_v;   
 
extern void func_00000000_3734_v(void *, void *);
void game_setupDemoSolo(char *s1, int a1) {
    char *s0;
    char *r1, *r2, *r3, *r4;
    volatile int pad1, pad2, pad3, pad4;   
    char *p;
    s0 = (char*)func_802C676C (0x80);
    if (s0 != 0) {
        func_802C676C (s0, 0);    
    }
    func_00000000_3734_v (&D_00000000 , s0);
    r1 = func_3734_r1(s1, 2, 1, gInputMgr_3734_v,
                      s0, ((WorldRegistry *)(s1)) ->fgRoot,
                      (((WorldRegistry *)(s1)) ->map) ->start[0],
                      (((WorldRegistry *)(s1)) ->map) ->start[2],
                      0x58005, 0x1B);
    r2 = (char*)func_802C676C (s1, 0, ((WorldRegistry *)(s1)) ->fgRoot, r1, s0);
    r3 = (char*)func_802C676C (s1, 1, ((WorldRegistry *)(s1)) ->fgRoot, r1, s0);
    r4 = (char*)func_802C676C (s1, (char*)&D_00000000  + a1 * 0x1C, r2);
    s0 = (char*)func_802C676C (0x80);    
    if (s0 != 0) {
        func_802C676C (s0, 1);
    }
    s0 = (char*)func_802C676C (0, s0, r1, r4, r2, r3);
    p = (char *)((WorldRegistry *)(s1)) ->bgRoot;
    func_802C676C (p + 0x10, s0);
    if (((Node *)(s0)) ->parent != 0) ((Node *)(s0)) ->unk04 = 1;
    ((Node *)(s0)) ->parent = (Node *)p;
    ((SnowBoarder *)(r1)) ->camera = r4;
}

 


































 

extern char *func_38c0_r(void *, int, int, int, void *, int, float, float, int, int);
extern int gInputMgr_38c0_z[];    

 
extern void func_00000000_38C0_v(void *, void *, int);
void game_setupSolo(char *s1, int a1) {
    char *o = (char*)func_802C676C (0x80);
    char *r;
    char *r2;
    int *row;
    char *res;
    if (o != 0) {
        func_802C676C (o, 1);    
    }
    func_802C676C (&D_00000000 , o);           
    func_00000000_38C0_v (&D_00000000 , o, 0);  
    r = func_38c0_r(s1, 0, ((InputMgr *)gInputMgr_38c0_z) ->playerRider, ((InputMgr *)gInputMgr_38c0_z) ->playerBoard,
                    o, ((WorldRegistry *)(s1)) ->fgRoot,
                    (((WorldRegistry *)(s1)) ->map) ->start[0],
                    (((WorldRegistry *)(s1)) ->map) ->start[2],
                    (((InputMgr *)gInputMgr_38c0_z) ->playerFlags | 1) | 0x10000 | 0x40000, 0x1B);
    r2 = (char*)func_802C676C (s1, 2, ((WorldRegistry *)(s1)) ->fgRoot, r, o);
    row = (int*)((char*)&D_00000000  + a1 * 0x1C);   
    res = (char*)func_802C676C (s1, row, r2);
    ((SnowBoarder *)(r)) ->camera = res;
}

 


























 
extern char *func_39d8_r(char *, int, int, int, char *, int, float, float, int, int);
extern unsigned char gInputMgr_39d8_g[];   

void game_setupVsGhost(char *s2, int a1) {
    char *o1;
    char *o2;
    char *r1, *r2, *b3, *f1;
    o2 = (char*)func_802C676C (0x80);   
    if (o2 != 0) {
        func_802C676C (o2, 1);    
    }
    if (0) { func_802C676C(&o1); }     
    o1 = o2;   
    o2 = (char*)func_802C676C (0x80);
    if (o2 != 0) {
        func_802C676C (o2, 0);
    }
    func_802C676C (gInputMgr_39d8_g, o1);
    func_802C676C (gInputMgr_39d8_g, o2);
    func_802C676C (gInputMgr_39d8_g, o1, o2);
    r1 = func_39d8_r(s2, 0, ((InputMgr *)gInputMgr_39d8_g) ->playerRider, ((InputMgr *)gInputMgr_39d8_g) ->playerBoard,
                     o1, ((WorldRegistry *)(s2)) ->fgRoot,
                     (((WorldRegistry *)(s2)) ->map) ->start[0],
                     (((WorldRegistry *)(s2)) ->map) ->start[2],
                     (((InputMgr *)gInputMgr_39d8_g) ->playerFlags | 1) | 0x10000 | 0x40000, 0x1B);
    r2 = func_39d8_r(s2, 0, ((InputMgr *)gInputMgr_39d8_g) ->ghostRider, ((InputMgr *)gInputMgr_39d8_g) ->ghostBoard,
                     o2, ((WorldRegistry *)(s2)) ->fgRoot,
                     (((WorldRegistry *)(s2)) ->map) ->start[0],
                     (((WorldRegistry *)(s2)) ->map) ->start[2],
                     (((InputMgr *)gInputMgr_39d8_g) ->ghostFlags | 0x8) | 0x8000, 0x14);
    ((SnowBoarder *)(r2)) ->dnode.unk38C = 0;
    b3 = (char*)func_802C676C (s2, 2, ((WorldRegistry *)(s2)) ->fgRoot, r1, o1);
    f1 = (char*)func_802C676C (s2, (char*)&D_00000000 + a1 * 0x1C, b3);
    ((SnowBoarder *)(r1)) ->camera = f1;
    ((SnowBoarder *)(r2)) ->camera = f1;
}

 
















































extern char *func_3b78_r(char *, int, int, int, char *, int, float, float, int, int);
extern unsigned char gInputMgr_CFG_3b78[];

extern void func_00000000_3B78_v(void *, void *, int);
void game_setupReplay(char *s1, int a1) {
    char *o;
    char *r1, *b2, *b3, *f1;
    volatile int pad1, pad2, pad3, pad4;   
    int v1_84;
    o = (char*)func_802C676C (0x80);
    if (o != 0) {
        func_802C676C (o, 0);
    }
    func_802C676C (gInputMgr_CFG_3b78, o);
    func_00000000_3B78_v (gInputMgr_CFG_3b78, o, 0);
    r1 = func_3b78_r(s1, 0,
                     ((InputMgr *)gInputMgr_CFG_3b78) ->ghostRider,
                     ((InputMgr *)gInputMgr_CFG_3b78) ->ghostBoard,
                     o, ((WorldRegistry *)(s1)) ->fgRoot,
                     (((WorldRegistry *)(s1)) ->map) ->start[0], (((WorldRegistry *)(s1)) ->map) ->start[2],
                     (((InputMgr *)gInputMgr_CFG_3b78) ->ghostFlags | 1 | 0x8000) | 0x10000 | 0x40000, 0x1B);
    b2 = (char*)func_802C676C (s1, 0, ((WorldRegistry *)(s1)) ->fgRoot, r1, o);
    b3 = (char*)func_802C676C (s1, 1, ((WorldRegistry *)(s1)) ->fgRoot, r1, o);
    f1 = (char*)func_802C676C (s1, (char*)&D_00000000 + a1 * 0x1C, b2);
    ((MCamera *)b2)->fov = 85.0f;
    o = (char*)func_802C676C (0x80);
    if (o != 0) {
        func_802C676C (o, 1);
    }
    o = (char*)func_802C676C (0, o, r1, f1, b2, b3);
    v1_84 = ((WorldRegistry *)(s1)) ->bgRoot;
    func_802C676C (v1_84 + 0x10, o);
    if (((Node *)(o)) ->parent != 0) {
        ((Node *)(o)) ->unk04 = 1;
    }
    ((Node *)(o)) ->parent = (Node *)v1_84;
    ((SnowBoarder *)(r1)) ->camera = f1;
}

 










 








extern char *func_00000000_3d3cm(char *, int, int, int, char *, int, float, float, int, int);
extern char bu_3d3c_d7294[];
void game_setupVsCpu(char *s1, int a1) {
    char *o2, *o3, *o1, *o4, *t, *r, *cfg;
    t = (char*)func_802C676C (0x80);
    if (t != 0) func_802C676C (t, 1);
    o1 = t;
    t = (char*)func_802C676C (0x80);
    if (t != 0) func_802C676C (t, 0);
    o2 = t;
    func_802C676C (&D_00000000 , o1);
    func_802C676C (&D_00000000 , o2);
    func_802C676C (&D_00000000 , o1, 0);
    r = func_00000000_3d3cm (s1, 0, *(int*)((char*)&D_00000000 + 0x4C), *(int*)((char*)&D_00000000 + 0x54),
                             o1, ((WorldRegistry *)(s1)) ->fgRoot, (((WorldRegistry *)(s1)) ->map) ->start[0] - 500.0f, (((WorldRegistry *)(s1)) ->map) ->start[2],
                             *(int*)((char*)&D_00000000 + 0x50) | 1 | 0x10000 | 0x40000, 0x1B);
    o3 = func_00000000_3d3cm (s1, 2, *(unsigned char*)((char*)&D_00000000 + 0x17D),
                              *(unsigned char*)((char*)&D_00000000 + 0x17F), o2, ((WorldRegistry *)(s1)) ->fgRoot,
                              (((WorldRegistry *)(s1)) ->map) ->start[0] + 500.0f, (((WorldRegistry *)(s1)) ->map) ->start[2], 0x8004, 0x1D);
    ((SnowBoarder *)(o3)) ->health = 0x989680;
    ((SnowBoarder *)(r)) ->rival = ((SnowBoarder *)(o3)) ;
    ((SnowBoarder *)(o3)) ->rival = ((SnowBoarder *)(r)) ;
    o4 = (char*)func_802C676C (s1, bu_3d3c_d7294 + a1 * 0x1C, func_802C676C (s1, 2, ((WorldRegistry *)(s1)) ->fgRoot, r, o1));
    ((SnowBoarder *)(r)) ->camera = o4;
    if (1) { }
    if (1) { }
    ((SnowBoarder *)(o3)) ->camera = o4;
}

 












 








extern char sStr_Player1_74E4[], sStr_Player2_74EC[], bu_3f00_d7294[];
extern char *func_00000000_3d3cm(char *, int, int, int, char *, int, float, float, int, int);
void game_setupVs2P(char *s1, int a1) {
    char *o[2], *t, *r1, *r2, *x, *y, *b4, *f2, *row;
    t = (char*)func_802C676C (0x80);
    if (t != 0) func_802C676C (t, 1);
    o[0] = t;
    t = (char*)func_802C676C (0x80);
    if (t != 0) func_802C676C (t, 2);
    o[1] = t;
    if (1) { }
    func_802C676C (&D_00000000 , o[0]);
    func_802C676C (&D_00000000 , t);
    func_802C676C (&D_00000000 , o[0], t);
    r1 = func_00000000_3d3cm (s1, 0, *(int*)((char*)&D_00000000 + 0x4C), *(int*)((char*)&D_00000000 + 0x54),
                             o[0], ((WorldRegistry *)(s1)) ->fgRoot, (((WorldRegistry *)(s1)) ->map) ->start[0] - 500.0f, (((WorldRegistry *)(s1)) ->map) ->start[2],
                             *(int*)((char*)&D_00000000 + 0x50), 0x15);
    r2 = func_00000000_3d3cm (s1, 1, *(int*)((char*)&D_00000000 + 0x58), *(int*)((char*)&D_00000000 + 0x60),
                             t, ((WorldRegistry *)(s1)) ->fgRoot, (((WorldRegistry *)(s1)) ->map) ->start[0] + 500.0f, (((WorldRegistry *)(s1)) ->map) ->start[2],
                             *(int*)((char*)&D_00000000 + 0x5C), 0x15);
    ((Node *)(r1)) ->name = (const char *)sStr_Player1_74E4;
    ((Node *)(r2)) ->name = (const char *)sStr_Player2_74EC;
    ((SnowBoarder *)(r1)) ->rival = ((SnowBoarder *)(r2)) ;
    ((SnowBoarder *)(r2)) ->rival = ((SnowBoarder *)(r1)) ;
    x = (char*)func_802C676C (s1, 2, ((WorldRegistry *)(s1)) ->fgRoot, r1, o[0]);
    b4 = (char*)func_802C676C (s1, 2, ((WorldRegistry *)(s1)) ->fgRoot, r2, o[1]);
    ((MCamera *)x)->fov = 55.0f;
    ((MCamera *)b4)->fov = 55.0f;
    row = bu_3f00_d7294 + a1 * 0x1C;
    y = (char*)func_802C676C (s1, row, x);
    f2 = (char*)func_802C676C (s1, row + 0x1C, b4);
    ((SnowBoarder *)(r1)) ->camera = y;
    ((SnowBoarder *)(r2)) ->camera = f2;
    ((ScreenWindow *)f2)->unk1B8 = (struct Window *)y;  
}

 















































 





extern char bu_411c_d7294[], gInputMgr_411c_d00_b;
extern int gInputMgr_411c_t90[];
extern f32 kRo_game_setupDemoRace_544, kRo_game_setupDemoRace_548;
extern f32 func_00000000_411c_f(void);
extern char *func_00000000_3d3cm(char *, int, int, int, char *, int, float, float, int, int);
void game_setupDemoRace(char *s1, int a1) {
    char *t, *o1, *r[2];
    int idx1, idx2;
    char *b3, *b4, *f;
    int unused[4];   
    char *p84;
    t = (char*)func_802C676C (0x80);
    if (t != 0) func_802C676C (t, 0);
    o1 = t;
    t = (char*)func_802C676C (0x80);
    if (t != 0) func_802C676C (t, 0);
    func_802C676C (&D_00000000 , o1);
    func_802C676C (&gInputMgr_411c_d00_b, t);
    idx1 = (int)(func_00000000_411c_f () * kRo_game_setupDemoRace_544);
    idx2 = (int)(func_00000000_411c_f () * kRo_game_setupDemoRace_548 + (float)idx1 + 1.0f) % 3;
    r[0] = func_00000000_3d3cm (s1, 0, idx1, gInputMgr_411c_t90[idx1], o1, ((WorldRegistry *)(s1)) ->fgRoot,
                             (((WorldRegistry *)(s1)) ->map) ->start[0] - 500.0f, (((WorldRegistry *)(s1)) ->map) ->start[2], 0x58005, 0x1B);
    r[1] = func_00000000_3d3cm (s1, 2, idx2, gInputMgr_411c_t90[idx2], t, ((WorldRegistry *)(s1)) ->fgRoot,
                             (((WorldRegistry *)(s1)) ->map) ->start[0] + 500.0f, (((WorldRegistry *)(s1)) ->map) ->start[2], 0x48024, 0x1B);
    { char *a = r[0], *b = r[1]; ((SnowBoarder *)(a)) ->rival = ((SnowBoarder *)(b)) ; ((SnowBoarder *)(b)) ->rival = ((SnowBoarder *)(a)) ;
    b3 = (char*)func_802C676C (s1, 0, ((WorldRegistry *)(s1)) ->fgRoot, a, o1); }
    b4 = (char*)func_802C676C (s1, 1, ((WorldRegistry *)(s1)) ->fgRoot, r[0], o1);
    f = (char*)func_802C676C (s1, bu_411c_d7294 + a1 * 0x1C, b3);
    t = (char*)func_802C676C (0x80);
    if (t != 0) func_802C676C (t, 1);
    t = (char*)func_802C676C (0, t, r[0], f, b3, b4);
    p84 = (char *)((WorldRegistry *)(s1)) ->bgRoot;
    func_802C676C (p84 + 0x10, t);
    if (((Node *)(t)) ->parent != 0) ((Node *)(t)) ->unk04 = 1;
    ((Node *)(t)) ->parent = (Node *)p84;
    ((SnowBoarder *)(r[0])) ->camera = f;
    ((SnowBoarder *)(r[1])) ->camera = f;
}

 





















 







extern char bu_43d4_d7294[], gInputMgr_43d4_d00_b;
extern int gInputMgr_43d4_t90[];
extern f32 kRo_game_setupDemoSplit_54C, kRo_game_setupDemoSplit_550;
extern f32 func_00000000_43d4_f(void);
extern char *func_00000000_3d3cm(char *, int, int, int, char *, int, float, float, int, int);
void game_setupDemoSplit(char *s0, int a1) {
    char *t, *o1, *r[2];
    int idx1, idx2;
    char *f1, *row, *b3, *b4;
    t = (char*)func_802C676C (0x80);
    if (t != 0) func_802C676C (t, 0);
    o1 = t;
    t = (char*)func_802C676C (0x80);
    if (t != 0) func_802C676C (t, 0);
    func_802C676C (&D_00000000 , o1);
    func_802C676C (&gInputMgr_43d4_d00_b, t);
    idx1 = (int)(func_00000000_43d4_f () * kRo_game_setupDemoSplit_54C);
    idx2 = (int)(func_00000000_43d4_f () * kRo_game_setupDemoSplit_550 + (float)idx1 + 1.0f) % 3;
    r[0] = func_00000000_3d3cm (s0, 0, idx1, gInputMgr_43d4_t90[idx1], o1, ((WorldRegistry *)(s0)) ->fgRoot,
                             (((WorldRegistry *)(s0)) ->map) ->start[0] - 500.0f, (((WorldRegistry *)(s0)) ->map) ->start[2], 0x8004, 0x15);
    r[1] = func_00000000_3d3cm (s0, 1, idx2, gInputMgr_43d4_t90[idx2], t, ((WorldRegistry *)(s0)) ->fgRoot,
                             (((WorldRegistry *)(s0)) ->map) ->start[0] + 500.0f, (((WorldRegistry *)(s0)) ->map) ->start[2], 0x8024, 0x15);
    { char *a = r[0], *b = r[1]; ((SnowBoarder *)(a)) ->rival = ((SnowBoarder *)(b)) ; ((SnowBoarder *)(b)) ->rival = ((SnowBoarder *)(a)) ;
    b3 = (char*)func_802C676C (s0, 2, ((WorldRegistry *)(s0)) ->fgRoot, a, o1); }
    b4 = (char*)func_802C676C (s0, 2, ((WorldRegistry *)(s0)) ->fgRoot, r[1], t);
    ((MCamera *)b3)->fov = 55.0f;
    ((MCamera *)b4)->fov = 55.0f;
    row = bu_43d4_d7294 + a1 * 0x1C;
    f1 = (char*)func_802C676C (s0, row, b3);
    b4 = (char*)func_802C676C (s0, row + 0x1C, b4);
    ((SnowBoarder *)(r[0])) ->camera = f1;
    ((SnowBoarder *)(r[1])) ->camera = b4;
}

void boot_readFloatParm_0000462C(char *a0) {
    int scratch;
    stream_readS32_000022E0(&scratch);
    stream_readF32_0000231C((int*)(a0 + 0x10));
}

void boot_readVec3Parm_0000465C(char *a0) {
    int scratch;
    stream_readS32_000022E0(&scratch);
    stream_readVec3_00002358((int*)(a0 + 0x10));
}

void boot_readQuadParm_0000468C(char *a0) {
    int scratch;
    stream_readS32_000022E0(&scratch);
    stream_readQuad_000023C8((int*)(a0 + 0x10));
}

void boot_readIntParm_000046BC(char *a0) {
    int scratch;
    stream_readS32_000022E0(&scratch);
    stream_readS32_000022E0((int*)(a0 + 0x10));
}

extern char D_00000000;

 






void *boot_ItemType_create_000046EC(int *arg0) {
    int *p2;
    int *head;
    int *p1;
    p1 = (int*)func_802C676C (0x40);
    if (p1 != 0) {
        func_802C676C (p1);
        ((Node *)(p1)) ->vptr = (char *)&D_00000000 ;
        ((ColourSubItem *)p1)->unk3C = 0;
    }
    p2 = p1;
    p1 = arg0;
    head = (int*)p1[0x40 / 4];
    if ((int*)p1[0x40 / 4] != 0) {
        func_802C676C ((char*)p2 + 0x10, head);
        if (((Node *)(head)) ->parent != 0) {
            ((Node *)(head)) ->unk04 = 1;
        }
        ((Node *)(head)) ->parent = (Node *)p2;
    }
    return p2;
}

 













extern char sStr_Mountain_74F4, sStr_Pos_Y_7500, sStr_Scale_Y_7508, sStr_Scale_XZ_7510;
 

extern void func_477c_reg(void *, void *, void *, float, float, int);
void Mountain_hostioParms(char *a0) {
    func_802C676C (&D_00000000 , &sStr_Mountain_74F4, 0);
    func_477c_reg(&D_00000000 , &sStr_Pos_Y_7500, &((Mountain *)a0)->posY, -2000.0f,  2000.0f, 0);   
    func_477c_reg(&D_00000000 , &sStr_Scale_Y_7508, &((Mountain *)a0)->scaleY,    0.01f,    1.0f, 0);  
    func_477c_reg(&D_00000000 , &sStr_Scale_XZ_7510, &((Mountain *)a0)->scaleXZ,    0.01f,    1.0f, 0);  
    func_802C676C (&D_00000000 );
    func_802C676C (a0);
}

 










extern void stream_readVec3_00000080();   
 


void Mountain_display(char *a0) {
    volatile char *r = a0;
}

void RiderCam_command_00004914(char *a0, int a1, char *a2) {
    ((RiderCam *)a0)->cam.mnode.local[3][0] = ((CourseCamItem *)(a2)) ->pos[0];
    ((RiderCam *)a0)->cam.mnode.local[3][1] = ((CourseCamItem *)(a2)) ->pos[1];
    ((RiderCam *)a0)->cam.mnode.local[3][2] = ((CourseCamItem *)(a2)) ->pos[2];
    ((RiderCam *)a0)->mode = a1;
    ((RiderCam *)a0)->cam.mnode.local[3][1] += 100.0f;
}

 




extern float func_00000000_4948_ff(float);  
void RiderCam_update_00004948(char *obj) {
    volatile int r = 0;
}

void stream_readS32_00004FF0(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readS32_0000502C(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

 






extern char gStrHeliUso_7D94;
struct OneI { int x; };
 


void  item_createHel(int a0) {
    func_802C676C (&gStrHeliUso_7D94);
      func_802C676C (0, *(struct OneI*)&a0);  
}

 

























































extern char sStr_rom_heli_uso_7DA4;
 



















typedef struct { int v; } S50A0;
int item_createHem(int a0) {
  float buf[5];
  int *p;
  char pad[16];
  volatile int saved_a0;
  (void) pad;
  func_802C676C (&sStr_rom_heli_uso_7DA4);
  buf[1] = (0, 0.0f);
  buf[2] = 0.0f;
  buf[3] = 0.0f;
  buf[4] = 0.0f;
  saved_a0 = a0;
  p = (int *) func_802C676C (0x58);
  if (p != 0)
  {
    func_802C676C (p, *(S50A0*)&saved_a0, *((int *) (&D_00000000 )), &buf[1]);
    ((Node *)(p)) ->vptr = (char *)&D_00000000 ;
  }
  return (int) p;
}

 


















extern char sStr_rom_balloon_uso_7DB4;
 






extern char sStr_rom_balloon_uso_7DB4;
extern char D_00000000_a;
extern char D_00000000_b;
extern char D_00000000_c;
 





 



typedef struct BootItemType {
      ItemType type;
      char *vptr2;           
} BootItemType;

typedef struct BootGateItemType {
      ItemType type;
      s32 side;              
      char *vptr2;           
} BootGateItemType;

typedef char BootItemType_size_check[sizeof(BootItemType) == 0x4C ? 1 : -1];
typedef char BootGateItemType_size_check[sizeof(BootGateItemType) == 0x50 ? 1 : -1];

typedef struct { int v; } Box5124;
void *item_createBal(Box5124 arg) {
    volatile int p0;
    char *obj;
    Box5124 b1;
    volatile int p1;
    char *o2;
    volatile int p2;
    Box5124 b2;
    func_802C676C (&sStr_rom_balloon_uso_7DB4);
    b1 = arg;
    obj = (char *)func_802C676C (0x4C);
    if (obj != 0) {
        b2 = b1;
        o2 = obj;
        if (o2 != 0 || (o2 = (char *)func_802C676C (0x48)) != 0) {
            func_802C676C (o2, b2, 0); ((Node *)(o2)) ->vptr = (char *)(&D_00000000_a);  
        }
         
        { char *t = &D_00000000_c; ((Node *)(obj)) ->vptr = (char *)(&D_00000000_b); ((BootItemType *)obj)->vptr2 = t; }
    }
    return obj;
}

 









extern char sStr_rom_balloon_uso_7DC4;
 







extern char sStr_rom_balloon_uso_7DC4;
extern char D_00000000_a;
extern char D_00000000_b;
extern char D_00000000_c;
 
 





typedef struct { int v; } Box51D4;
void *item_createBa2(Box51D4 arg) {
    volatile int p0;
    char *obj;
    Box51D4 b1;
    volatile int p1;
    char *o2;
    volatile int p2;
    Box51D4 b2;
    func_802C676C (&sStr_rom_balloon_uso_7DC4);
    b1 = arg;
    obj = (char *)func_802C676C (0x4C);
    if (obj != 0) {
        b2 = b1;
        o2 = obj;
        if (o2 != 0 || (o2 = (char *)func_802C676C (0x48)) != 0) {
            func_802C676C (o2, b2, 0); ((Node *)(o2)) ->vptr = (char *)(&D_00000000_a);  
        }
         
        { char *t = &D_00000000_c; ((Node *)(obj)) ->vptr = (char *)(&D_00000000_b); ((BootItemType *)obj)->vptr2 = t; }
    }
    return obj;
}

 










extern char sStr_rom_checkpoint_uso_7DD4;
 









extern char sStr_rom_checkpoint_uso_7DD4;
 





typedef struct { int v; } Box5284;
void *item_createChk(Box5284 arg) {
    volatile int p0;
    char *obj;
    Box5284 b1;
    volatile int p1;
    char *o2;
    volatile int p2;
    Box5284 b2;
    func_802C676C (&sStr_rom_checkpoint_uso_7DD4);
    b1 = arg;
    obj = (char *)func_802C676C (0x4C);
    if (obj != 0) {
        b2 = b1;
        o2 = obj;
        if (o2 != 0 || (o2 = (char *)func_802C676C (0x48)) != 0) {
            func_802C676C (o2, b2, 0); ((Node *)(o2)) ->vptr = (char *)(&D_00000000_a);  
        }
         
        { char *t = &D_00000000_c; ((Node *)(obj)) ->vptr = (char *)(&D_00000000_b); ((BootItemType *)obj)->vptr2 = t; }
    }
    return obj;
}

 








extern char sStr_rom_checkpoint_uso_7DE8;
 







extern char sStr_rom_checkpoint_uso_7DE8;
extern char D_00000000_a;
extern char D_00000000_b;
extern char D_00000000_c;
 





typedef struct { int v; } Box5334;
void *item_createGtr(Box5334 arg) {
    volatile int p0;
    char *obj;
    Box5334 b1;
    volatile int p1;
    char *o2;
    volatile int p2;
    Box5334 b2;
    func_802C676C (&sStr_rom_checkpoint_uso_7DE8);
    b1 = arg;
    obj = (char *)func_802C676C (0x50);
    if (obj != 0) {
        b2 = b1;
        o2 = obj;
        if (o2 != 0 || (o2 = (char *)func_802C676C (0x48)) != 0) {
            func_802C676C (o2, b2, 0); ((Node *)(o2)) ->vptr = (char *)(&D_00000000_a);  
        }
         
        { char *t = &D_00000000_c; ((Node *)(obj)) ->vptr = (char *)(&D_00000000_b); ((BootGateItemType *)obj)->vptr2 = t; ((BootGateItemType *)obj)->side = 0; }
    }
    return obj;
}

 










extern char sStr_rom_checkpoint_uso_7DFC;
 







extern char sStr_rom_checkpoint_uso_7DFC;
extern char D_00000000_a;
extern char D_00000000_b;
extern char D_00000000_c;
 





typedef struct { int v; } Box53E8;
void *item_createGtl(Box53E8 arg) {
    volatile int p0;
    char *obj;
    Box53E8 b1;
    volatile int p1;
    char *o2;
    volatile int p2;
    Box53E8 b2;
    func_802C676C (&sStr_rom_checkpoint_uso_7DFC);
    b1 = arg;
    obj = (char *)func_802C676C (0x50);
    if (obj != 0) {
        b2 = b1;
        o2 = obj;
        if (o2 != 0 || (o2 = (char *)func_802C676C (0x48)) != 0) {
            func_802C676C (o2, b2, 0); ((Node *)(o2)) ->vptr = (char *)(&D_00000000_a);  
        }
         
        { char *t = &D_00000000_c; ((Node *)(obj)) ->vptr = (char *)(&D_00000000_b); ((BootGateItemType *)obj)->side = 1; ((BootGateItemType *)obj)->vptr2 = t; }
    }
    return obj;
}

 



extern char sStr_rom_fire_uso_7E10;
void  item_createCfr(int a0) {
    func_802C676C (&sStr_rom_fire_uso_7E10);
      func_802C676C (0, *(struct OneI*)&a0);  
}

extern char FogTmpl_vtbl_78D8;

 






extern char D_54D8_init_value;
extern char D_54D8_init_arg;
int *item_createFog(struct OneI arg0) {
    volatile int pad;
    int *p;
    int saved_a0 = arg0.x;
    p = (int*)func_802C676C (0x58);
    if (p == 0) goto end;
    func_802C676C (p, *(struct OneI*)&saved_a0, *(int*)&D_54D8_init_value, &D_54D8_init_arg);
    ((Node *)(p)) ->vptr = (char *)&FogTmpl_vtbl_78D8;
end:
    return p;
}

 












extern char SnowTmpl_vtbl_79C8;
extern char D_553C_init_value;
extern char D_553C_init_arg;
int *item_createSnow(struct OneI arg0) {
    volatile int pad;
    int *p;
    int saved_a0 = arg0.x;
    p = (int*)func_802C676C (0x58);
    if (p == 0) goto end;
    func_802C676C (p, *(struct OneI*)&saved_a0, *(int*)&D_553C_init_value, &D_553C_init_arg);
    ((Node *)(p)) ->vptr = (char *)&SnowTmpl_vtbl_79C8;
end:
    return p;
}

 


void item_registerTemplates(char *b) {
    volatile char *r = b;
}

void stream_readS32_00005EF8(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);
    *dst = buf[0];
}

 




























extern char sStr_BGBox_7E6C;
char *game_createBGBox(int a0, int a1, int a2, int a3, int a4, int a5, int a6) {
  char *s1 = (char *) func_802C676C (0, &sStr_BGBox_7E6C, 0, a0);
  char *list;
  char *r;
  volatile int pad[2];
 r = (char *) func_802C676C (0, a1, 0, 0, 0); list = s1 + 0x10; func_802C676C (list, r); if ((*((int *) (r + 0x14))) != 0) {
    *((int *) (r + 0x4)) = 1;
  }
  *((void **) (r + 0x14)) = s1;
  r = (char *) func_802C676C (0, a2, 0, 90, 0);
  func_802C676C (list, r);
  if ((*((int *) (r + 0x14))) != 0)
  {
    *((int *) (r + 0x4)) = 1;
  }
  *((void **) (r + 0x14)) = s1;
  r = (char *) func_802C676C (0, a3, 0, 180, 0);
  func_802C676C (list, r);
  if ((*((int *) (r + 0x14))) != 0)
  {
    *((int *) (r + 0x4)) = 1;
  }
  *((void **) (r + 0x14)) = s1;
  r = (char *) func_802C676C (0, a4, 0, 270, 0);
  func_802C676C (list, r);
  if ((*((int *) (r + 0x14))) != 0)
  {
    *((int *) (r + 0x4)) = 1;
  }
  *((void **) (r + 0x14)) = s1;
  r = (char *) func_802C676C (0, a5, -90, 0, 0);
  func_802C676C (list, r);
  if ((*((int *) (r + 0x14))) != 0)
  {
    *((int *) (r + 0x4)) = 1;
  }
  *((void **) (r + 0x14)) = s1;
  if (a6 != 0)
  {
    r = (char *) func_802C676C (0, a6, 90, 0, 0);
    func_802C676C (list, r);
    if ((*((int *) (r + 0x14))) != 0)
    {
      *((int *) (r + 0x4)) = 1;
      *((int *) (r + 0x4)) = 1;
    }
    *((void **) (r + 0x14)) = s1;
  }
  return s1;
}

void stream_readF32_00006100(float *dst) {
    float buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readQuad_0000613C(Quad4 *dst) {
    Quad4 buf;
    func_802C676C (&D_00000000 , &buf, 16);



    *dst = buf;
}

extern void stream_readVec3_00006194();
void stream_readVec3_00006194(Vec3 *dst) {
    int pad_top[1];
    Tri3i raw;
    int pad_mid[2];
    Tri3i tmp;
    int pad_bot[2];
    func_802C676C (&D_00000000 , &raw, 12);



    tmp = raw;
    dst->x = *(float*)&tmp.a;
    dst->y = *(float*)&tmp.b;
    dst->z = *(float*)&tmp.c;
}

 







void boot_staticInit_00006204(void) {
    volatile int r = 0;
}

void ColourItem_readParms_00006228(char *a0) {
    stream_readS32_0000502C((int*)(a0 + 0x3C));
    func_802C676C (a0);
}

 
















extern char sStr_MNode_7E74, sStr_Course_7E7C, sStr_shp_pGrid_NULL_7E84, sStr_mapprop_cpp_7E98;
 




void *MapProp_ctor(char *a0, int a1, int a2, int a3, int a4) {
    char *s;
    volatile int pad[3];
    float z[3];
    volatile int pad2[1];
    if (a0 != 0 || (a0 = (char*)func_802C676C (0xDC)) != 0) {
    s = a0;
    if (s != 0 || (s = (char*)func_802C676C (0xB4)) != 0) {
        func_802C676C (s, &sStr_MNode_7E74);
        ((Node *)(s)) ->vptr = (char *)(&D_00000000 );
        {
            int *c = (int*)(s + 0x2C);
            if (c != 0 || (c = (int*)func_802C676C (4)) != 0) {
                int *c2 = c;
                if (c2 != 0 || (c2 = (int*)func_802C676C (4)) != 0) {
                    *c2 = 0;
                }
            }
        }
        func_802C676C (s);
        z[0] = 0.0f;
        func_802C676C (s + 0x30, (z[1] = 0.0f, z[2] = 0.0f, z));
    }
    ((Node *)(a0)) ->vptr = (char *)(&D_00000000 );
    ((Node *)(a0)) ->name = (const char *)&sStr_Course_7E7C;
    ((MapProp *)a0)->shape = a1;
    func_802C676C (a0, a1);
     

    if (((BasePolyShape *)((MapProp *)a0)->shape)->collGrid == 0)
        func_802C676C (&sStr_shp_pGrid_NULL_7E84, &sStr_mapprop_cpp_7E98, 0x3E4);
    ((MapProp *)a0)->end = a3;
    ((MapProp *)a0)->angle = a2;
    ((MapProp *)a0)->add = a4;
    }
    if (1) { }
    if (1) { }
    if (1) { }
    if (1) { }
    return a0;
}

                                                                               
                                                                            
                                                                        
                                                                       
                                                                                         
                                                                            
                                                                             
                                                                           
                                                                           
                                                                           
                                                                           
                                                                             
                                                                        
                                                                            
                                                                        
                                                                          
                                                                            
                                                                           
                                                                              
                                                                           
                                                                           
                                              
                           
                                                                           
                                                              
                                                                        
                                                  
                                                             
 



void MapProp_display(char *obj) {
    volatile char *r = obj;
}

 










extern char sStr_Map_7EA4, sStr_end_7EA8, sStr_add_7EAC, sStr_angle_7EB0;
void MapProp_hostioParms(char *a0) {
    func_802C676C (&D_00000000 , &sStr_Map_7EA4, 0);
    func_802C676C (&D_00000000 , &sStr_end_7EA8, &((MapProp *)a0)->end, 0, 0x7F, 1);    
    func_802C676C (&D_00000000 , &sStr_add_7EAC, &((MapProp *)a0)->add, 0, 0x7F, 1);    
    func_802C676C (&D_00000000 , &sStr_angle_7EB0, &((MapProp *)a0)->angle, 0, 0x59, 0);  
    func_802C676C (&D_00000000 );
    func_802C676C (a0);
}

                                                                    
                                                                  
                                                                      
                                      
  
                                                                      
                     
                                                                             
                                                                            
                                                               
                                     
                                                                         
                 
                                             
                                                                       
                                                                          
                                                                         
                                                                               
                                                                
                                                                           
                                                                             
      
  
                           
                                                               
                                                          
                                                                    
                                                                     
                                                                   
                                                                                 
                                                                         
                                                                
                                                                              
                                                                                       
                                                                    
                                                                   
                                                                        
                                                                        
                                                                
                                                               
                                                                     
                                       
  
                                                                
                                                                      
                                                                  
                                                                      
                                                                 
                                                                     
                                                           
                                                                                           
                                                                      
                                                                       
                                                                   
                                                                         
                                                                 
                                                                       
                                                                     
                                                                        
                                                                         
                                                                       
                                                                           
                                                                      
                                                                        
                                                                    
                                                                    
                                                                                
                                                                        
                                                                    
                                                                       
                                                                             
                                                                       
                                                                       
                                                                  
                                                                    
                                                                         
                                                                  
                                                               
                                                                       
                                                                       
                                                                     
                                                                        
                                                                        
                                                                                       
                                                                         
                                                                         
                                                                         
                                                              
                                                                   
                                                                       
                                                                       
                                                                         
                                                                    
                                                                        
                                                                         
                                                                         
                                                                         
                                                                       
                                                                         
                                                                        
                                                                        
                                                                          
                                                 
                                                                                       
                                                                                        
                                                                                             
                                                                                             
                                                                                             
                                                                                           
                                                                                         
void *game_createMap(char *obj, char *arg1, s32 arg2) {
    volatile char *r = obj;
    return 0;
}

 













extern char sStr_EnvSettings_7F84;
void *EnvSettings_ctor(char *a0) {
    if (a0 == 0) {
        a0 = (char*)func_802C676C (0x44);
        if (a0 == 0) goto end;
    }
    func_802C676C (a0, &sStr_EnvSettings_7F84);
    ((Node *)(a0)) ->vptr = (char *)(&D_00000000 );
    {
        int *v1 = (int *)(a0 + 0x2C);
        if (v1 == 0) {
            int *r = (int *)func_802C676C (4);
            if ((v1 = r) == 0) goto after_v1;
        }
        *v1 = 0;
    after_v1:;
    }
    {
        char *q = a0;
        if (1) { q += 0x18; }
        *(int *)q &= ~8;
    }
    ((EnvSettings *)(a0)) ->fallingSnow = 0;
    ((EnvSettings *)(a0)) ->bgBox = 0;
    ((EnvSettings *)(a0)) ->clipNear = 4;
    ((EnvSettings *)(a0)) ->clipFar = 0xB00;
    ((EnvSettings *)(a0)) ->flags = 1;
end:
    return a0;
}

 






 





void map_addEntry_00007204(int a0, int a1, int a2) {
    volatile int r = 0;
}

 















 
 


















typedef struct { int w[4]; } Q7288;
extern Q7288 gGfxLib_7288_src;  
void EnvSettings_display(int *a0) {
    if (((EnvSettings *)(a0)) ->flags & 2) {
        GfxLib *base = ((GfxLib *)(&D_00000000))  ;
        base->curWindow->win.near = (float)(int)((EnvSettings *)(a0)) ->clipNear;
        base->curWindow->win.far = (float)(int)((EnvSettings *)(a0)) ->clipFar;
    }
    if (((EnvSettings *)(a0)) ->bgBox == 0) {  
        GfxLib *b2 = ((GfxLib *)(&D_00000000))  ;
        int *q;
        q = &b2->curWindow->win.flags;
        *q |= 4;
        *(Q7288 *)b2->curWindow->win.clearColour = gGfxLib_7288_src;
    }
}

 


































extern char sFmt_Env_Load_7F90;
extern char sFmt_Env_Skip_7FA0;
 
extern void snd_startPlayer2Seq_0000027C();    
extern void snd_muteAll_0000029C();    
extern void stream_readS32_00000008();    
 

void EnvSettings_load(char *s3) {
}

 













extern char sStr_FallingSnow_7FB0, sStr_Node_7FBC;
extern void stream_readQuad_000000F0();   
 
 


extern char gInputMgr_74e8_g, gInputMgr_74e8_h;
 




void FallingSnow_create(char *a0) {
    int *v;
    char *r;
    char *sub;
    char *head;
    if (((InputMgr *)((char *)&gInputMgr_74e8_g - 8))  ->nextFlowMode == 8) return;  
    func_802C676C (&sStr_FallingSnow_7FB0, 0);
    r = (char*)func_802C676C (0x134);
    if (r != 0) {
        sub = r;
        if (sub != 0 || (sub = (char*)func_802C676C (0x48)) != 0) {
            func_802C676C (sub, &sStr_Node_7FBC); ((Node *)(sub)) ->vptr = (char *)(&D_00000000 );
        }
        ((Node *)(r)) ->vptr = (char *)(&D_00000000 );
    }
    ((EnvSettings *)(a0)) ->fallingSnow = (FallingSnow *)r;
    head = (char *)((WorldRegistry *)(((InputMgr *)((char *)&gInputMgr_74e8_h - 0xF0))->game)) ->egRoot;
    if (1) { }
    if (1) { }
    if (1) { }
    if (1) { }
    if (1) { }
    if (1) { }
    if (1) { }
    if (1) { }
    if (1) { char **pa = &a0; }
    func_802C676C (head + 0x10, r);
    if (((Node *)(r)) ->parent != 0) ((Node *)(r)) ->unk04 = 1;
    ((Node *)(r)) ->parent = (Node *)head;
    v = (int *)((Node *)(((EnvSettings *)(a0))->fallingSnow)) ->vptr;
    ((void (*)(char*, int))(((GdlVtEnt *)((char *)(v) + 8))[ 10]) .fn)(
        (char *)((EnvSettings *)(a0)) ->fallingSnow + (((GdlVtEnt *)((char *)(v) + 8))[ 10]) .delta,
        0x96);
    v = (int *)((EnvSettings *)(a0)) ->fallingSnow; ((FallingSnow *)v)->enabled = 1;
    v = (int *)((EnvSettings *)(a0)) ->fallingSnow; ((FallingSnow *)v)->unk4C = 0.0f;
    ((EnvSettings *)(a0)) ->fallingSnow->enabled = 0;
    func_802C676C ();
}

 










extern float kRo_EnvSettings_setSnow_5E8;
 








void EnvSettings_setSnow(char *a0, int a1) {
    int *f;
    if (((char *)((EnvSettings *)(a0)) ->fallingSnow)  == 0) return;
    func_802C676C (a1);
    if (a1 == 0) {
        if (((FallingSnow *)((char *)((EnvSettings *)(a0)) ->fallingSnow) )->unkBC == 0) {
            f = (int*)(((char *)((EnvSettings *)(a0)) ->fallingSnow)  + 0x18); *f &= ~0x8;
            f = (int*)(((char *)((EnvSettings *)(a0)) ->fallingSnow)  + 0x18); *f &= ~0x4;
        }
        ((FallingSnow *)((char *)((EnvSettings *)(a0)) ->fallingSnow) )->unk4C = 0.0f;
    } else {
        f = (int*)(((char *)((EnvSettings *)(a0)) ->fallingSnow)  + 0x18); *f |= 0x8;
        f = (int*)(((char *)((EnvSettings *)(a0)) ->fallingSnow)  + 0x18); *f |= 0x4;
        f = (int*)((char *)((EnvSettings *)(a0)) ->fallingSnow) ; ((FallingSnow *)f)->unk4C = kRo_EnvSettings_setSnow_5E8;
    }
    ((FallingSnow *)((char *)((EnvSettings *)(a0)) ->fallingSnow) )->enabled = a1;
}


 




















extern void snd_setPlayer0VolumeLevel_0000023C();   
 



void Tv1_display(char *s0) {
    volatile char *r = s0;
}

 





































 





















extern float func_411c_rf(void);

void Tv1Tmpl_blitFrame_000077D0(char *arg0, u16 *dst, s32 arg2) {
    s32 pad[5];
    u16 *tbl;
    u16 *g;
    u16 *t;
    u16 *u;
    s32 c;
    s32 mode;
    s32 i;
    s32 j;
    s32 stride;
    s32 m;
    s32 n;
    s32 k;
    u16 *p;

    tbl = ((Tv1Tmpl *)arg0)->frameImage;  
    if (tbl == ((void*)0) ) {
        return;
    }
    mode = ((Tv1Tmpl *)arg0)->scroll;
    c = mode;
    if (arg2 != 0) {
        c = mode + 0x60;
    }
    mode = ((Tv1Tmpl *)arg0)->state;
    i = 0;
    stride = 0x140;
    if (mode == 0) goto m0;
    if (mode == 2) goto m2;
    if (mode != 1) return;
    goto m1;
m0:
    do {
        if (tbl) {}
        c &= 0xFF;
        i++;
        if (c < 0xF0) {
            g = tbl;
            g += c * stride;
            j = 0;
        l0:
            { t = dst; dst++; *t = (g[0]); } ;
            { t = dst; dst++; *t = (g[5]); } ;
            { t = dst; dst++; *t = (g[10]); } ;
            { t = dst; dst++; *t = (g[15]); } ;
            j += 4;
            g += 20;
            if (j == 0x40) goto next;
            goto l0;
        } else {
            k = 0;
        l1:
            { t = dst; dst++; *t = (0); } ;
            { t = dst; dst++; *t = (0); } ;
            { t = dst; dst++; *t = (0); } ;
            { t = dst; dst++; *t = (0); } ;
            k += 4;
            if (k != 0x40) goto l1;
        }
    next:
        c += 3;
    } while (i != 0x20);
    return;
m2:
    g = tbl;
    g += c * stride;
    n = 0;
    do {
        j = 0;
    l2:
        { t = dst; dst++; *t = (g[0]); } ;
        { t = dst; dst++; *t = (g[5]); } ;
        { t = dst; dst++; *t = (g[10]); } ;
        { t = dst; dst++; *t = (g[15]); } ;
        j += 4;
        g += 20;
        if (j != 0x40) goto l2;
        n++;
        g += 0x280;
    } while (n != 0x20);
    return;
m1:
    c = 0;
    if (1) {}
    do {
        p = (u16 *)&D_00000000 + (s32)(func_411c_rf() * 64.0f);
        if (1) {}
        m = 0;
        c++;
    l3:
        g = p; p++; { t = dst; dst++; *t = (*g); } ;
        g = p; p++; { t = dst; dst++; *t = (*g); } ;
        g = p; p++; { t = dst; dst++; *t = (*g); } ;
        g = p; p++; { t = dst; dst++; *t = (*g); } ;
        m += 4;
        if (m != 0x40) goto l3;
    } while (c != 0x20);
}

void boot_readFloatParm_00007A48(char *a0) {
    int scratch;
    stream_readS32_00004FF0(&scratch);
    stream_readF32_00006100((int*)(a0 + 0x10));
}

void boot_readQuadParm_00007A78(char *a0) {
    int scratch;
    stream_readS32_00004FF0(&scratch);
    stream_readQuad_0000613C((int*)(a0 + 0x10));
}

void boot_readIntParm_00007AA8(char *a0) {
    int scratch;
    stream_readS32_00004FF0(&scratch);
    stream_readS32_00004FF0((int*)(a0 + 0x10));
}

void boot_readVec3Parm_00007AD8(char *a0) {
    int scratch;
    stream_readS32_00004FF0(&scratch);
    stream_readVec3_00006194((int*)(a0 + 0x10));
}

 







void *boot_ItemType_create_00007B08(int *arg0) {
    int *p2;
    int *head;
    int *p1;
    p1 = (int*)func_802C676C (0x40);
    if (p1 != 0) {
        func_802C676C (p1);
        ((Node *)(p1)) ->vptr = (char *)&D_00000000 ;
        ((ColourSubItem *)p1)->unk3C = 0;
    }
    p2 = p1;
    p1 = arg0;
    head = (int*)p1[0x40 / 4];
    if ((int*)p1[0x40 / 4] != 0) {
        func_802C676C ((char*)p2 + 0x10, head);
        if (((Node *)(head)) ->parent != 0) {
            ((Node *)(head)) ->unk04 = 1;
        }
        ((Node *)(head)) ->parent = (Node *)p2;
    }
    return p2;
}

void boot_readIntParm_00007B98(char *a0) {
    int scratch;
    stream_readS32_00004FF0(&scratch);
    stream_readS32_0000502C((int*)(a0 + 0x10));
}

void ColourItem_readParms_00007BC8(char *a0) {
    stream_readS32_00004FF0((int*)(a0 + 0x3C));
    func_802C676C (a0);
}

 



 



typedef struct CbPmf_7BF4 {
      s16 delta;             
      s16 index;             
      union { int (*fn)(char *); int vptrOff; } u;
} CbPmf_7BF4;
typedef struct MemberCb_7BF4 {
      void *vptr;
      char *obj;
      CbPmf_7BF4 pmf;
} MemberCb_7BF4;
int MemberCallback_invoke_00007BF4(char *a0) {
    char *arg;
    CbPmf_7BF4 *v1;
    char *entry;
    int (*fnptr)(char *);
    int idx;
    v1 = &((MemberCb_7BF4 *)a0)->pmf;
    arg = ((MemberCb_7BF4 *)a0)->obj; arg = ((MemberCb_7BF4 *)a0)->pmf.delta + arg;
    if (((MemberCb_7BF4 *)a0)->pmf.index < 0) {
        fnptr = ((MemberCb_7BF4 *)a0)->pmf.u.fn;
    } else {
        int selector = v1->u.vptrOff;
        if (selector == 0 && v1->delta == 0) idx = 0x28; else idx = selector;
        entry = (v1->index << 3) + *(char**)(arg + idx);
        arg = ((GdlVtEnt *)entry)->delta + arg;
        fnptr = (int (*)(char *))((GdlVtEnt *)entry)->fn;
    }
    return fnptr(arg);
}

extern float kRo_Tv1Tmpl_create_5EC;
 












































void *Tv1Tmpl_create(char *a0) {
    char pad[4];
    int *link;
    char *ret;

    ret = (char*)func_802C676C (0x88);
    if (ret != 0) {
        func_802C676C (ret);
        ((Node *)(ret)) ->vptr = (char *)(&D_00000000 );
    }

    ((Tv1 *)(ret)) ->radius = kRo_Tv1Tmpl_create_5EC;
    link = (int *)((Tv1Tmpl *)a0)->model;
    func_802C676C (ret + 0x10, link);
    if (link[5] != 0) {
        link[1] = 1;
    }
    link[5] = (int)ret;

    return ret;
}

 














 












extern char *gGfxLib_7D04_root[];
 



extern float func_7D04_randf();




void Tv1Tmpl_stepPicture_00007D04(char *s0) {
    int a3 = ((Tv1Tmpl *)s0)->state;
    int k;
    ((Tv1Tmpl *)s0)->frameImage =
        ((u16 *(*)(char *))(((GdlVtEnt *)((char *)(((Node *)((gGfxLib_7D04_root[6])))->vptr) + 8))[ 11]) .fn)((gGfxLib_7D04_root[6])  + (((GdlVtEnt *)((char *)(((Node *)((gGfxLib_7D04_root[6])))->vptr) + 8))[ 11]) .delta);



    k = ((Tv1Tmpl *)s0)->state;
    if (k != 1) {
        if (k != 0) {
            if (k != 2) {
            } else goto c2;
        } else goto c0;
    } else goto c1;
    goto end;
c1:
    k = ((Tv1Tmpl *)s0)->timer;
    ((Tv1Tmpl *)s0)->timer = k + 1;
    if (k >= 0x1F) a3 = 2;
    goto end;
c0:
    k = ((Tv1Tmpl *)s0)->timer;
    ((Tv1Tmpl *)s0)->timer = k + 1;
    if (k >= 0x3D) a3 = 2;
    ((Tv1Tmpl *)s0)->scroll -= 0xA;
    goto end;
c2:
    k = ((Tv1Tmpl *)s0)->timer;
    ((Tv1Tmpl *)s0)->timer = k + 1;
    if (k >= 0x5B) {
        a3 = (int)(func_7D04_randf() * 3.0f);
        ((Tv1Tmpl *)s0)->timer = 0;
    }
    ((Tv1Tmpl *)s0)->scroll = 0x18;
end:
    { int *l;  
    k = *(int *)&((Tv1Tmpl *)s0)->model; l = (int *)((Tv1Model *)k)->screens;
     

    func_802C676C (s0, *(int *)&((BaseMat *)*l)->texels, 0, a3); if (1) {}
    k = *(int *)&((Tv1Tmpl *)s0)->model; l = (int *)((Tv1Model *)k)->screens + 1;
    func_802C676C (s0, *(int *)&((BaseMat *)*l)->texels, 1, a3);




    }
    ((Tv1Tmpl *)s0)->state = a3;
}

void Tv1Tmpl_update(int *a0) {
    ((Tv1Tmpl *)a0)->displayCount = 0;
    func_802C676C (a0);
}

extern int D_func_00007E70_a;
extern int D_func_00007E70_b;





void Tv1Tmpl_display(char *a0) {
    D_func_00007E70_a = 0;
    func_802C676C (a0);
    if (D_func_00007E70_b != 0) {
        int counter = ((Tv1Tmpl *)a0)->displayCount + 1;
        ((Tv1Tmpl *)a0)->displayCount = counter;
        if (counter == 1) {
            func_802C676C ( );
        }
    }
}





 














 










typedef struct { int a, b, c, d, e, f; } S24_7EC8;
extern char gGfxLib_7ec8_g[], bu_7ec8_h[], gGfxLib_7ec8_src[];
extern int gInputMgr_7ec8_m;
extern void func_00000000_7ec8_c(char *, char *, float);
extern int func_00000000_7ec8_t(int, int, int , int , float, int, float);
void Fog_display(char *s0) {
    float scale, limit, p, end, frac;
    int hit;
    if (gInputMgr_7ec8_m != 8) {
        frac = 0.0f;
        limit = ((GfxLib *)(gGfxLib_7ec8_g)) ->worldScale[2] * ((MCamera *)((GfxLib *)(gGfxLib_7ec8_g)) ->curWindow->win.camera)->mnode.world[3][2];
        hit = 0;
        p = ((GfxLib *)(gGfxLib_7ec8_g)) ->worldScale[2] * ((FogItem *)(s0)) ->pos[2];
        end = ((FogItem *)(s0)) ->fin.value + p;
        if (p < limit && limit < end) {
            hit = 1;
            frac = (limit - p) / ((FogItem *)(s0)) ->fin.value;
        } else if (end < limit && limit < ((FogItem *)(s0)) ->rng.value + p) {
            frac = 1.0f;
            hit = 1;
        }
        if (hit != ((FogItem *)(s0)) ->inside) {
            *(S24_7EC8 *)bu_7ec8_h = *(S24_7EC8 *)(gGfxLib_7ec8_src);
            ((FogItem *)(s0)) ->inside = hit;
        }
        if (hit != 0) {
            *(S24_7EC8 *)(gGfxLib_7ec8_src) = *(S24_7EC8 *)bu_7ec8_h;
            func_00000000_7ec8_c (gGfxLib_7ec8_src, ((FogItem *)(s0)) ->fog, frac);
        }
    } else {
        if (func_00000000_7ec8_t (*(int *)&((GfxLib *)(gGfxLib_7ec8_g)) ->curWindow, 3, *(int *)&((FogItem *)(s0))->pos[0] ,
                          *(int *)&((FogItem *)(s0))->pos[1] , ((FogItem *)(s0)) ->pos[2], 0, 0.0f) != 0) {
            func_802C676C (s0);
        }
    }
}

void Fog_hostioParms(char *a0) {
    func_802C676C (a0 + 0x3C, 0);
    func_802C676C (a0 + 0x74);
    func_802C676C (a0);
}

void Fog_saveData(char *a0) {
    func_802C676C ((int*)(a0 + 0x3C));
    func_802C676C ((int*)(a0 + 0x74));
    func_802C676C (a0);
}

void Fog_readParms(char *a0) {
    func_802C676C ((int*)(a0 + 0x3C));
    func_802C676C ((int*)(a0 + 0x74));
    func_802C676C (a0);
}

 















































 





typedef struct { int v; } Val8124;
extern char Fog_vtbl_7878;
extern char sStr_Parms_7FC4;
extern int sTag_fin_7FCC;
extern int sTag_rng_7FD0;
extern char FloatParm_vtbl_7540;
char *FogTmpl_create(char *arg0) {
    char *v;
    char *o;
    char *u;
    int A[5];
    char * volatile w;
    char *q2;
    Val8124 p;
    char *c;

    o = (char *)func_802C676C(0x90);
    if (o != 0) {
        func_802C676C(o);
        ((Node *)(o)) ->vptr = (char *)(&Fog_vtbl_7878);
        u = o + 0x3C;
        if (u != 0 || (u = (char *)func_802C676C(0x38)) != 0) {
            c = u;
            if (c != 0 || (c = (char *)func_802C676C(8)) != 0) {
                *(char **)(c + 0) = &sStr_Parms_7FC4;
                *(int *)(c + 4) = 0;
            }
            p.v = sTag_fin_7FCC; A[4] = p.v;
            c = u + 8;
            if (c != 0 || (c = (char *)func_802C676C(0x18)) != 0) {
                func_802C676C(w = c, u, p, 1);
                c = w;
                *(char **)(c + 0xC) = &FloatParm_vtbl_7540;
                *(int *)(c + 0x14) = 0;
                *(float *)(c + 0x10) = 200.0f;
            }
            p.v = sTag_rng_7FD0; A[3] = p.v;
            c = u + 0x20;
            if (c != 0 || (c = (char *)func_802C676C(0x18)) != 0) {
                func_802C676C(w = c, u, p, 1);
                c = w;
                *(char **)(c + 0xC) = &FloatParm_vtbl_7540;
                *(int *)(c + 0x14) = 0;
                *(float *)(c + 0x10) = 300.0f;
            }
        }
        u = o + 0x74;
        if (u != 0 || (u = (char *)func_802C676C(0x18)) != 0) {
            func_802C676C(u);
        }
        *(int *)(o + 0x8C) = 0;
    }
    v = o;
    o = *(char **)(arg0 + 0x40);
    if (o != 0) {
        func_802C676C(v + 0x10, o);
        if (((Node *)(o)) ->parent != 0) {
            ((Node *)(o)) ->unk04 = 1;
        }
        ((Node *)(o)) ->parent = (Node *)v;
    }
    return v;
}




 
















extern int func_00000000_082F8(int, int, int , int , float, int, float);
extern void func_00000000_082F8_v(int, int);
extern char D_00000000_a;
extern char D_func_00000008_data;
void Snower_display(int *a0) {
    float f0 = ((GfxLib *)(&D_00000000))  ->worldScale[2];
    float f2 = ((MCamera *)((GfxLib *)(&D_00000000))  ->curWindow->win.camera)->mnode.world[3][2] * f0;
    float f12 = ((SnowItem *)(a0)) ->pos[2] * f0;

    if (f12 < f2) {
        if (((SnowItem *)(a0)) ->rng.value + f12 > f2) {
            func_00000000_082F8_v (*(int*)&D_00000000_a, ((SnowItem *)(a0)) ->sta.value);
        }
    }

     
    if (((InputMgr *)((char *)&D_func_00000008_data - 8)) ->nextFlowMode == 8) {
        if (func_00000000_082F8 (
            *(int *)&((GfxLib *)(&D_00000000))  ->curWindow,
            3,
            *(int *)&((SnowItem *)(a0))->pos[0] ,
            *(int *)&((SnowItem *)(a0))->pos[1] ,
            ((SnowItem *)(a0)) ->pos[2],
            0,
            0.0f) != 0) {
            func_802C676C (a0);
        }
    }
}

 












extern char sStr_Snower_7FD4;
extern char sStr_Snow_7FDC;
void Snower_hostioParms(int *a0) {
    func_802C676C (&D_00000000 , &sStr_Snower_7FD4, 0);
    func_802C676C (&D_00000000 , &sStr_Snow_7FDC, (int)a0 + 0x6C, 1);
    func_802C676C ((int)a0 + 0x3C, 0);
    func_802C676C (&D_00000000 );
    func_802C676C (a0);
}
 












void Snower_saveData(char *a0) {
    func_802C676C ((int*)(a0 + 0x3C));
    func_802C676C (a0);
}

void Snower_readParms(char *a0) {
    func_802C676C ((int*)(a0 + 0x3C));
    func_802C676C (a0);
}

 














































typedef struct { int v; } Val84A0;
extern char Snower_vtbl_7968;
extern char sStr_Parms_7FE4;
extern int sTag_rng_7FEC;
extern int sTag_sta_7FF0;
extern char FloatParm_vtbl_7540;
char *SnowTmpl_create(char *arg0) {
    char *o;
    char *v;
    char *u;
    char *s;
    char *c;
    char *g;
    int A[6];
    char * volatile w;
    char *q2;
    Val84A0 p;

    g = *(char **)&D_00000000;
    if (*(int *)(g + 0x40) == 0) {
        func_802C676C(g);
    }
    o = (char *)func_802C676C(0x74);
    if (o != 0) {
        func_802C676C(o);
        ((Node *)(o)) ->vptr = (char *)(&Snower_vtbl_7968);
        u = o + 0x3C;
        if (u != 0 || (u = (char *)func_802C676C(0x38)) != 0) {
            s = u;
            if (s != 0 || (s = (char *)func_802C676C(8)) != 0) {
                *(char **)(s + 0) = &sStr_Parms_7FE4;
                *(int *)(s + 4) = 0;
            }
            p.v = sTag_rng_7FEC; A[4] = p.v;
            c = u + 8;
            if (c != 0 || (c = (char *)func_802C676C(0x18)) != 0) {
                func_802C676C(w = c, u, p, 1);
                c = w;
                ((CourseFParm *)c)->vptr = &FloatParm_vtbl_7540;
                ((CourseFParm *)c)->value2 = 0;
                ((CourseFParm *)c)->value = 300.0f;
            }
            p.v = sTag_sta_7FF0; A[3] = p.v;
            c = u + 0x20;
            if (c != 0 || (c = (char *)func_802C676C(0x18)) != 0) {
                func_802C676C(w = c, u, p, 0);
                c = w;
                ((CourseParm *)c)->value = 1;
                ((CourseParm *)c)->vptr = (char *)EnvSettings_setSnow + 0x70;
                ((CourseParm *)c)->value2 = 0;
            }
        }
    }
    v = o;
    o = *(char **)(arg0 + 0x40);
    if (o != 0) {
        func_802C676C(v + 0x10, o);
        if (((Node *)(o)) ->parent != 0) {
            ((Node *)(o)) ->unk04 = 1;
        }
        ((Node *)(o)) ->parent = (Node *)v;
    }
    return v;
}




void Tree_handleMsg(char *a0, int *a1) {
    func_802C676C (a0  );
    if (*a1 == 7 || *a1 == 19) {
        ((Tree *)(a0)) ->coll.obj.pos[0] = ((Tree *)(a0)) ->snode.pos[0];
        ((Tree *)(a0)) ->coll.obj.pos[1] = ((Tree *)(a0)) ->snode.pos[1];
        ((Tree *)(a0)) ->coll.obj.pos[2] = ((Tree *)(a0)) ->snode.pos[2];
    }
}

 





extern int func_802C676C();
extern char gGfxLib_00000294;

void TreeTmpl_display(char *arg0) {
    char *node;
    char *obj;

    func_802C676C (&D_00000000 , ((TreeTmpl *)(arg0)) ->colour);
    func_802C676C (((TreeTmpl *)(arg0)) ->fog);

    node = (char *)((TreeTmpl *)(arg0)) ->items;
    if (node != 0) {
        arg0 = node;
        do {
            if ((((Node *)(arg0)) ->doFlags & 4) != 0) {
                obj = (char *)((Node *)(arg0)) ->vptr;
                ((int (*)(char *))(((GdlVtEnt *)((char *)(obj) + 8))[ 2]) .fn)(arg0 + (((GdlVtEnt *)((char *)(obj) + 8))[ 2]) .delta);
            }
            arg0 = (char *)((SNode *)arg0)->next;
        } while (arg0 != 0);
    }
    func_802C676C (&gGfxLib_00000294);   
}

extern char gHostio_func_00008744_arg1;
extern char gHostio_func_00008744_arg2;
void TreeTmpl_hostioParms(char *a0) {
    int arg = (int)((Node *)(a0)) ->name;
    func_802C676C (&gHostio_func_00008744_arg1, arg, 0);
    func_802C676C (((TreeTmpl *)(a0)) ->colour, 0);
    func_802C676C (((TreeTmpl *)(a0)) ->fog);
    func_802C676C (&gHostio_func_00008744_arg2);
    func_802C676C (a0);
}

extern char sStr_tree_7FF4;
extern float kRo_TreeTmpl_create_5F0;

 

















extern int gPolyFlags_3EEC4_87A4_rd, gPolyFlags_3EEC4_87A4_wr, D_87A4_tail;
extern char gPolyGeomMode_3EEC8_87A4_cfg, D_87A4_vt;
extern char D_087A4_vtable[];
extern void func_00000000_087A4();
extern void func_00000000_087A4_f(char *, char *, int, float, float);





void *TreeTmpl_create(char *arg0) {
    char *s1;
    char *s0;
    int kind; int pad[5];

    if (((TreeTmpl *)(arg0)) ->shape == 0) {
        gPolyFlags_3EEC4_87A4_wr = gPolyFlags_3EEC4_87A4_rd | 8;
        if (1) {}
         
        ((int *)&gPolyGeomMode_3EEC8_87A4_cfg)[1] = 0xAA002;
        ((int *)&gPolyGeomMode_3EEC8_87A4_cfg)[0] = 0;
        ((TreeTmpl *)(arg0)) ->shape = func_802C676C (0, &sStr_tree_7FF4, ((TreeTmpl *)(arg0)) ->shapeData, 0);
    }
    s1 = (char *)func_802C676C (0xC8);
    if (s1 != 0) {
        func_00000000_087A4 (s1);
        ((Node *)(s1)) ->vptr = (char *)(D_087A4_vtable + 0x10);
        s0 = (char *)&((Tree *)(s1)) ->coll;
        if (s0 == 0) {
            s0 = (char *)func_802C676C (0x40);
            if (s0 == 0) {
                goto skip;
            }
        }
        func_00000000_087A4 (s0);
        ((CollObj *)(s0)) ->vptr = (char *)&D_87A4_vt;
    }
skip:
    ((Tree *)(s1)) ->snode.scale = 10.0f;
    kind = 0x13;
    s0 = s1;
    ((void (*)(char *, int *))(((GdlVtEnt *)((char *)(((Node *)(s1))->vptr) + 8))[ 4]) .fn)(s1 + (((GdlVtEnt *)((char *)(((Node *)(s1))->vptr) + 8))[ 4]) .delta, &kind);
    s1 = (char *)((TreeTmpl *)(arg0)) ->shape;
    func_00000000_087A4 (&((Node *)(s0)) ->children, s1);
    if (((Node *)(s1)) ->parent != 0) {
        ((Node *)(s1)) ->unk04 = 1;
    }
    ((Node *)(s1)) ->parent = (Node *)s0;
    func_00000000_087A4_f ((char *)&((Tree *)(s0)) ->coll, s0, 0x74, 150.0f, kRo_TreeTmpl_create_5F0);
    ((Tree *)(s0)) ->coll.obj.flags |= 1;
    func_00000000_087A4 (D_87A4_tail, &((Tree *)(s0)) ->coll);
    return s0;
}





extern char *gInputMgr_00000130;
int game_isUsoLoaded(int a0) {
    FlowUso *p = (FlowUso *)gInputMgr_00000130;  
    while (p != 0) {
        if (func_802C676C (p->handle, a0) == 0) {
            return 1;
        }
        p = p->next;
    }
    return 0;
}

int game_loadUsoOnce(int arg0) {
    if (func_802C676C (arg0) == 0) {
        func_802C676C (&D_00000000 , arg0);
        return 1;
    }
    return 0;
}

void stream_readS32_000089C0(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_read16_000089FC(short *dst) {
    short buf[4];
    func_802C676C (&D_00000000 , buf, 2);



    *dst = buf[0];
}

void boot_emptyStub_00008A38(int a0) {
}

void stream_readF32_00008A40(float *dst) {
    float buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

extern void stream_readVec3_00008A7C();
void stream_readVec3_00008A7C(Vec3 *dst) {
    int pad_top[1];
    Tri3i raw;
    int pad_mid[2];
    Tri3i tmp;
    int pad_bot[2];
    func_802C676C (&D_00000000 , &raw, 12);



    tmp = raw;
    dst->x = *(float*)&tmp.a;
    dst->y = *(float*)&tmp.b;
    dst->z = *(float*)&tmp.c;
}

void stream_readQuad_00008AEC(Quad4 *dst) {
    Quad4 buf;
    func_802C676C (&D_00000000 , &buf, 16);



    *dst = buf;
}

 











 

extern void func_8b44_init(char *, int, int , int , float);
char* SnowBCollider_ctor(char *a0, int a1, int a2, int  a3, int  a4, float f_arg) {
    if (a0 == 0) {
        a0 = (char*)func_802C676C (0x178);
        if (a0 == 0) goto end;
    }
    func_8b44_init(a0, a1, a3, a4, f_arg);
    ((Node *)(a0)) ->vptr = (char *)&D_00000000 ;
    ((SnowBCollider *)(a0)) ->rider = (struct SnowBoarder *)a1;



    ((SnowBCollider *)(a0)) ->contactFlags = ((unsigned short*)&a2)[1];

    ((SnowBCollider *)(a0)) ->unk150 = 1.0f;
    ((SnowBCollider *)(a0)) ->unk154 = 10.0f;
end:
    return a0;
}

                                                                          
                                                                      
                                                                 
  
                                                                        
                         
                                                                    
                                
                                                               
                                                                               
                                                                            
                                                                              
                                                                              
                                                                             
                                                     
                                                                  
                                                                     
                                                 
                                                            
                                                                       
                
        
                                                                     
                                 
                                                            
                                              
                                    
                                                                       
                                                                             
        
      
  
                           
                                                                        
                                                              
                                       
                                                                       
                                                                       
                                                  
                                                                 
                                                                 
 



void SnowBCollider_onContact(char *b) {
    volatile char *r = b;
}

 
extern char sStr_QNode_8708;
extern char sStr_shp_8710;
extern char ShpNode_vtbl_8F18_vtable;
extern char D_8F18_call_arg;
char *ShpNode_ctor(char *self) {
    int handle;
    if (self == 0) {
        self = (char*)func_802C676C (0x3D8);
        if (self == 0) goto end;
    }
    func_802C676C (self, &sStr_QNode_8708);
    ((Node *)(self)) ->vptr = (char *)(&ShpNode_vtbl_8F18_vtable);
    handle = func_802C676C (0, &sStr_shp_8710, &D_8F18_call_arg, 0);
    func_802C676C (self, handle);
    ((ShpNode *)(self)) ->life = 100;
    ((ShpNode *)(self)) ->dnode.parms.rad.value = 50.0f;
end:
    return self;
}

 































extern char sStr_Too_many_objects_for_List_8714;
typedef struct { int a, b, c; } Vec3i_8FA8;
void ShpNode_update(int *self) {
    volatile int pad_t[1];
    int *tbl;
    volatile int pad_hi[2];
    Vec3i_8FA8 scratch;
    volatile int pad_lo[2];
    scratch = *(Vec3i_8FA8 *)((ShpNode *)(self)) ->dnode.vqs.trans;
    ((ShpNode *)(self)) ->dnode.cvqs.trans[0] = *(float*)&scratch.a;
    ((ShpNode *)(self)) ->dnode.cvqs.trans[1] = *(float*)&scratch.b;
    ((ShpNode *)(self)) ->dnode.cvqs.trans[2] = *(float*)&scratch.c;
    scratch = *(Vec3i_8FA8 *)((ShpNode *)(self)) ->dnode.vqs.scale;
    ((ShpNode *)(self)) ->dnode.cvqs.scale[0] = *(float*)&scratch.a;
    ((ShpNode *)(self)) ->dnode.cvqs.scale[1] = *(float*)&scratch.b;
    ((ShpNode *)(self)) ->dnode.cvqs.scale[2] = *(float*)&scratch.c;
    scratch = *(Vec3i_8FA8 *)((ShpNode *)(self)) ->dnode.vqs.quat;
    ((ShpNode *)(self)) ->dnode.cvqs.quat[0] = *(float*)&scratch.a;
    ((ShpNode *)(self)) ->dnode.cvqs.quat[1] = *(float*)&scratch.b;
    ((ShpNode *)(self)) ->dnode.cvqs.quat[2] = *(float*)&scratch.c;
    ((ShpNode *)(self)) ->dnode.cvqs.quat[3] = ((ShpNode *)(self)) ->dnode.vqs.quat[3];
    func_802C676C (self);
    {
        int counter = ((ShpNode *)(self)) ->life;
        ((ShpNode *)(self)) ->life = counter - 1;
        if (counter <= 0) {
            int count;
            tbl = *(int**)&D_00000000;
            if (tbl[3] >= tbl[2]) {
                func_802C676C (&sStr_Too_many_objects_for_List_8714, self);
            }
            count = tbl[3];
            tbl[3] = count + 1;
            *(int*)(tbl[0] + count * 4) = (int)self;
        }
    }
}

 


void *SnowBoarder_ctor(char *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8) {
    volatile char *r = arg0;
    return 0;
}

                                                                                         
                                                                  
              
  
                                                                         
                                                            
                                                            
                                                                  
                                                                                
                                                                                   
                                                                             
                                      
                                                                      
                                                                        
                                                 
                                              
                                                                                
                                             
                                                                        
                                                                          
             
                                                                                       
                                                          
                                                          
                                                                                   
          
        
                                                      
                                                       
                                                              
                                                                             
                                                   
                                                                              
                       
                                                                           
      
  
                           
                                                                       
                                                                       
                                                                    
                                                                          
                                                                                
                                                                   
                                        
                                                                       
                             
                                                                                 
                                                                               
                                                                                    
                
                                                                         
                                                                            
                                                                               
                                                                          
                                                            
                                                                      
                                                                               
                                                                                      
                                                                                        
                                                                                   
                                                                              
                                                                              
                                                                            
                                                                   
                                                                                           
                                                                               
                                                                 
                                                                               
                                                                            
                                                                            
                                                                           
                                                                             
                                                                           
                                                                              
                                                                               
                                                                              
                                                                               
                                                                              
                                                                              
                                                                     
                                                                          
                                                                            
                                                                        
                                                                        
                                                                        
                                                                          
                                                                            
                                                                            
                                                                            
                                                 
                                                                                
 



void SnowBoarder_loadBoardModel_0000B1B4(unsigned int cat, unsigned int idx, int a2, int a3, int a4) {
    volatile unsigned int r = cat;
}

 
























extern char sStr_board_8A58;
extern int D_00000000_b49c[];   
 

 
void  SnowBoarder_createBoardShape_0000B49C(int idx, int j) {
    j = idx;
    if (j >= 10) j = 9;
    if (gl_func_00000000 (((int*)&D_00000000 )[j], j) == 0) {
        gl_func_00000000 (&D_00000000 , ((int*)&D_00000000 )[j]);
    }
      gl_func_00000000 (0, &sStr_board_8A58, D_00000000_b49c[j], 0);   
}

 































 















extern f32 bu_b520_k48, bu_b520_k44;   
extern f64 bu_b520_kc;                
void SnowBoarder_limitSpeed(SnowBoarder *sb) {
    Vec3 v74;
    Vec3 vB;
    Vec3 v5C;
    Vec3 v50;
    s32 pad[3];
    f32 s;
    f32 px;
    f32 py;
    f32 pz;
    f32 t;
    f32 d;
    f32 k;
    char *p;
    char *q;

    q = (char *)sb->dnode.axes[2];  
    t = 0.0f;
    if (sb->flags & 0x100 ) {
        p = (char *)sb->input;
        if (((RiderInput *)p)->held & 4) {
            t += 10.0f;
        }
        if (*(volatile int *)&((RiderInput *)p)->held & 8) {
            t -= 10.0f;
        }
    }
    px = ((f32 *)q)[0] * t;
    py = ((f32 *)q)[1] * t;
    pz = ((f32 *)q)[2] * t;
    if (1) {}
    v50.x = px; v50.y = py; v50.z = pz;
    v5C = v50;
    v74 = v5C;
    sb->dnode.vel[0] = sb->dnode.vel[0] + v74.x;
    sb->dnode.vel[1] = sb->dnode.vel[1] + v74.y;
    sb->dnode.vel[2] = sb->dnode.vel[2] + v74.z;
    if (((s32)sb->flags << 14) < 0) {   
        p = (char *)sb->rival;
        t = sb->parms.max.value;
        if (p != ((void*)0) ) {
            d = ((SnowBoarder *)p)->dnode.vqs.trans[2] - sb->dnode.vqs.trans[2];
            if (bu_b520_k48 < d) {
                t += bu_b520_k44;
            } else if (d < -bu_b520_k48) {
                t -= bu_b520_k44;
            }
        }
        k = sb->maxSpeed;
        sb->maxSpeed = (f64)k + (f64)(t - k) * bu_b520_kc;
    } else {
        sb->maxSpeed = sb->parms.max.value;
    }
    if (sb->maxSpeed < sb->dnode.speed) {
        func_802C676C (sb->dnode.vel, sb);   
        k = sb->maxSpeed;
        sb->dnode.vel[0] = sb->dnode.vel[0] * k;
        sb->dnode.vel[1] = sb->dnode.vel[1] * k;
        sb->dnode.vel[2] = sb->dnode.vel[2] * k;
    }
    if (sb->contactCount == 0) {
        k = 1.0f - sb->parms.wfr.value;
        sb->dnode.vel[0] = sb->dnode.vel[0] * k;
        sb->dnode.vel[2] = sb->dnode.vel[2] * k;
    }
}

                                                                              
                                                                                                          
                                                                                  
                                                                      
                                                                       
                                                        
  
                                                                          
                                                              
                                                                          
                                                                                             
                                                                       
                                                
                                                                         
                                                                 
                                                                                                            
                                                                     
                                                                      
                                                                     
                                                                  
                                                                        
      
  
                           
                                                                       
                                                             
                                                                       
                                                    
                                                                     
                                                                      
                                                                                  
                                                                                     
                             
                                                                                 
                                                                    
                                                               
                                                              
                                                               
 



void SnowBoarder_updateOrient(char *arg0) {
    volatile char *r = arg0;
}

 








































































extern f32 D_BF8C_pool8F4[];  
extern f64 D_BF8C_pool8F4_24;
extern char D_BF8C_8A40[];  
void SnowBoarder_updateDyn(char *arg0) {
     

    SnowBoarder *sb = (SnowBoarder *)arg0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f12;
    f32 var_f2;
    s16 temp_v0_2;
    s32 temp_v0_3;
    char *temp_v0;

    var_f12 = 0.0f;
    temp_v0 = (char *)sb->input;
    sb->crouch = (f64) (*(f32 *)((char *)temp_v0 + 0x4)) < -0.75;  
    if ((sb->useDParms = (*(s32 *)((char *)temp_v0 + 0x10) & 0x400) != 0, sb->edgeFriction = sb->child.parms.efr.value, sb->useDParms) != 0) {
        sb->edgeGrip = sb->child.parms.del.value;
        sb->dnode.friction = sb->child.parms.dbf.value;
        sb->turnRate = (f32) ((*(volatile f32 *)&sb->child.parms.res.value) * sb->parms.dts.value);
    } else {
        sb->edgeGrip = sb->child.parms.nel.value;
        sb->dnode.friction = sb->child.parms.nbf.value;
        sb->turnRate = (f32) ((*(volatile f32 *)&sb->child.parms.res.value) * sb->parms.nts.value);
    }
    if (sb->crouch != 0) {
        if (sb->useDParms != 0) {
            var_f12 = D_BF8C_pool8F4[8];
        } else {
            var_f12 = 0.5f;
        }
        temp_f0 = sb->edge;
        if (temp_f0 < 0.0f) {
            var_f2 = -temp_f0;
        } else {
            var_f2 = temp_f0;
        }
        sb->dnode.friction = (f32) (sb->dnode.friction + (var_f2 * var_f12));
    }
    temp_v0_2 = sb->surface;
    if (temp_v0_2 != 0x63) {
        if (temp_v0_2 != 0x61) {
            if (temp_v0_2 != 0x62) {
         
        sb->dnode.friction = (f32) (D_BF8C_pool8F4_24 + (f64) sb->dnode.friction);
        sb->edgeGrip = 0.0f;
        sb->edgeFriction = 0.0f;
            } else goto L62;
        } else goto Lend;
    } else goto L63;
    goto Lend;
L63:  
        sb->dnode.friction = (f32) (sb->child.parms.ifr.value * sb->dnode.friction);
        sb->edgeGrip = (f32) (sb->child.parms.ied.value * sb->edgeGrip);
    goto Lend;
L62:  
        sb->dnode.friction = (f32) (sb->child.parms.dfr.value * sb->dnode.friction);
        sb->edgeGrip = (f32) (sb->child.parms.ded.value * sb->edgeGrip);
Lend:
    temp_v0_3 = sb->slowdown;
    sb->edgeGrip = (f32) (sb->parms.edf.value * sb->edgeGrip);
    sb->dnode.friction = (f32) (sb->parms.bdf.value * sb->dnode.friction);
    if (temp_v0_3 != 0) {
        sb->edgeGrip = 0.0f;
        sb->dnode.friction = (f32) (sb->dnode.friction + ((f32) temp_v0_3 / 100.0f));
        temp_f0_2 = 1.0f - sb->parms.sfr.value;
        sb->dnode.vel[0] = (f32) (sb->dnode.vel[0] * temp_f0_2);
        sb->dnode.vel[2] = (f32) (sb->dnode.vel[2] * temp_f0_2);
    }
    func_802C676C(sb);                   
    func_802C676C(sb);                   
    func_802C676C(D_BF8C_8A40 + 0x20);   
    func_802C676C(sb);                   
     



    func_802C676C(D_BF8C_8A40 + 0x2C);   
    func_802C676C(sb);                   
    if ((sb->slowdown == 0x64) && (sb->dnode.speed < 30.0f)) {
        sb->dnode.vel[0] = 0.0f;
        sb->dnode.vel[2] = 0.0f;
    }
    func_802C676C(sb);                   
    func_802C676C(sb);                   
}




                                                                          
                                                                  
                                                                
  
                                           
                                                                           
                                                                       
                                                                         
                                                                    
                                                              
                                                                   
                             
                                                                                    
                                                                                 
                                                                                                 
                                                                   
                                                                       
                               
                                                                        
      
  
                           
                                                                        
                                                                        
                                                                      
                                      
                                                                     
                                                                             
                                                                                 
                                                                                                 
                                                                                                
                                                                     
                                                              
                                                                  
                                                 
 


void SnowBoarder_procColl(char *arg0) {
    volatile char *r = arg0;
}

void SnowBoarder_toggleNudge(char *a0) {
    ((SnowBoarder *)(a0)) ->health = 0xF4240;
    ((SnowBoarder *)(a0)) ->flags = (int)((SnowBoarder *)(a0)) ->flags ^ 0x100;
}

                                                                       
                                                                       
                  
  
                                        
                                                                            
                                                             
                                                                            
                                                                       
                                      
                                                                                            
                             
                                                                                       
                                                                
                                                                
                                                                     
        
                     
                                                                           
                     
                                                                              
                                                                          
                                                       
                                                                              
                                                                                   
                                                             
                                                                   
                                                                      
      
  
                           
                                                                     
                                                                 
                                                             
                                                                 
                                                                      
                                                               
                                                                                         
                                                                                   
                                                                                       
                
                                                                                 
                                                                   
                                                                    
                                                          
                                       
 



void SnowBoarder_reset(char *st) {
    volatile char *r = st;
}

                                                                                          
                                                                       
                                                                  
  
                                                                                                  
                                             
                                                                    
                                                                      
                              
                                                                  
                                                                                              
                                                              
                                                                      
                                                                
                                                                      
                                                                                           
      
  
                           
                                                                        
                                                                    
                                                                       
                                                                         
                                                               
                                                               
                                                                                      
                                                                
                                                                      
                                 
                                                                                 
                                                                         
                                                                         
                                                                  
                                                                       
                                                                  
                                                                      
                                                                
                                                                   
                                                                       
                                       
 



                                                                                                      
extern char *func_cce0(int, char *, int, float, float, float);
void SnowBoarder_createColliders_0000CCE0(char *st, int a1) {
    char *cont = st + 0x39C;
     



    char *g4, *g3, *g2, *g1;
    volatile int pad[1];
    char *g0, *e3, *e2, *e1, *e0;
    func_802C676C (cont, e0 = (char *)func_cce0(0, st, 2, 140.0f, D_bu_ro_pool[0x95C / 4], -350.0f));
    e1 = (char *)func_cce0(0, st, 8, -140.0f, D_bu_ro_pool[0x960 / 4], -350.0f);
    func_802C676C (cont, e1);
    e2 = (char *)func_cce0(0, st, 1, 140.0f, D_bu_ro_pool[0x964 / 4], 350.0f);
    func_802C676C (cont, e2);
    e3 = (char *)func_cce0(0, st, 4, -140.0f, D_bu_ro_pool[0x968 / 4], 350.0f);
    func_802C676C (cont, e3);
    func_802C676C (st, e0);
    func_802C676C (st, e1);
    func_802C676C (st, e2);
    func_802C676C (st, e3);
    if ((int)((SnowBoarder *)(st)) ->flags & 0x200) return;
    g0 = (char *)func_cce0(0, st, 0x00, 0.0f, D_bu_ro_pool[0x96C / 4], 0.0f);
    func_802C676C (cont, g0);
    func_802C676C (st, g0);
    g1 = (char *)func_cce0(0, st, 0x20, 250.0f, -150.0f, -400.0f);
    func_802C676C (cont, g1);
    g2 = (char *)func_cce0(0, st, 0x80, -250.0f, -150.0f, -400.0f);
    func_802C676C (cont, g2);
    g3 = (char *)func_cce0(0, st, 0x10, 250.0f, -150.0f, 400.0f);
    func_802C676C (cont, g3);
    g4 = (char *)func_cce0(0, st, 0x40, -250.0f, -150.0f, 400.0f);
    func_802C676C (cont, g4);
    func_802C676C (st, g1);
    func_802C676C (st, g2);
    func_802C676C (st, g3);
    func_802C676C (st, g4);
}

                                                                                       
                                                                      
                               
  
                                                                          
                                                                        
                                                                                                                                
                                                          
                                                                        
                                                                                 
                                                                               
                                                                                
                                                                        
                                                                           
                                                                           
                                                                            
                                                                        
                                                                                
                                                                              
                                                                            
                                                                                                 
                                                                              
                                                                                
  
                                          
                                                                                               
                                                                           
                                                              
                                                                          
                      
                     
                                                  
                                                                          
                                                              
                             
                                                                        
                                                                           
                                               
                                                                     
                                                         
        
                                                      
                     
                                                                
                                                               
                                                         
                                                                
                                                                
        
                                                                  
                                                  
                                                                 
                                                                                           
                                                                          
                                                                 
                                                   
                                       
                                                 
                                                                  
                                               
                                      
          
        
                                                  
          
                                                    
                                                 
                                                                                 
                                                 
      
  
                           
                                                                        
                                                                         
                                                                      
                                                                        
                                                                   
                                                                      
                                                                       
                                                                                           
                                                                                        
                                                                               
                                  
                                                                                
                                                                      
                                                                        
                                                                     
 


void SnowBoarder_display(char *st) {
    volatile char *r = st;
}

                                                                        
                                                                    
                                                                    
                                  
  
                                                                
                                                                                  
                          
                        
                         
                                                               
                                                                    
                                                                  
        
                        
                       
                                                    
                    
                                                                              
                          
          
        
                      
                             
                                                       
                                                           
                                                       
                        
        
                                                          
                                                                                           
                                                                                    
                                                                          
      
  
                           
                                                                    
                                                          
                                                                      
                                                                   
                                                                        
                                 
                                                                      
                                                                   
                                                                              
                                                
                                                                                  
                                                                    
                                                                      
                                                                 
                                                 

 

extern void func_d440_f0call(int, int, float);
extern void func_d440_final(int, int, float, float, float, float, int, int, int);
extern float func_d440_frnd(void *);   
extern float kRo_SnowBoarder_update_980;
 



extern char D_00008AD0, D_00008AD8, D_00008AE0, D_00008AE8;
extern char D_00008AF4, D_00008B00, D_00008B0C, D_00008B18, D_00008B24, D_00008B30;
 

extern char D_F0a, D_F0b, D_F0c;

                                                                        
                                                                    
                                                                    
                                  
  
                                                                
                                                                                  
                          
                        
                         
                                                               
                                                                    
                                                                  
        
                        
                       
                                                    
                    
                                                                              
                          
          
        
                      
                             
                                                       
                                                           
                                                       
                        
        
                                                          
                                                                                           
                                                                                    
                                                                          
      
  
                           
                                                                    
                                                          
                                                                      
                                                                   
                                                                        
                                 
                                                                      
                                                                   
                                                                              
                                                
                                                                                  
                                                                    
                                                                      
                                                                 
                                                 

 


















void SnowBoarder_update(char *st) {
    char *sub, *vt, *m, *a0_2;
    int fl, v0, t5;
    int sp58;
    float f0, f2;
    int a84;
    float two = 2.0f;    




    float four = 4.0f;
    func_802C676C(&D_00008AD0);
    fl = (int)((SnowBoarder *)(st)) ->flags; if (1) {}
    v0 = fl & 0x100;
     


    if (v0 != 0) {
        if (((SnowBoarder *)(st)) ->input->pressed & 0x20) {
            ((SnowBoarder *)(st)) ->unkA28 ^= 1;
        }
        if (((SnowBoarder *)(st)) ->unkA28 != 0) {
            if (((volatile RiderInput *)((SnowBoarder *)(st)) ->input)->pressed & 0x10) {
                 

                fl = (int)((SnowBoarder *)(st)) ->flags;
                v0 = fl & 0x100;
                goto block_9;
            }
        } else {
            fl = (int)((SnowBoarder *)(st)) ->flags;
            t5 = fl ^ 4;
            if (((volatile RiderInput *)((SnowBoarder *)(st)) ->input)->pressed & 0x10) {
                ((SnowBoarder *)(st)) ->flags = t5;
                fl = t5;
            }
            v0 = fl & 0x100;
            goto block_9;
        }
    } else {
    block_9:
        if (v0 != 0) {
            sub = (char *)((SnowBoarder *)(st)) ->input;
             

            if ((!!(((volatile RiderInput *)sub)->held & 0x80)) & (!!(((volatile RiderInput *)sub)->held & 0x40))) {
                sp58 = 9;
                vt = (char *)((Node *)(st)) ->vptr;
                ((void (*)(char *, int *))(((GdlVtEnt *)((char *)(vt) + 8))[ 4]) .fn)((char *)((((GdlVtEnt *)((char *)(vt) + 8))[ 4]) .delta + (int)st), &sp58);
                fl = (int)((SnowBoarder *)(st)) ->flags;
            }
        }
        if (fl & 4) {
            *(int *)((char *)((SnowBoarder *)(st)) ->input + 0x3C) = 1;
            func_802C676C(&D_00008AD8);
            sub = (char *)((SnowBoarder *)(st)) ->ai;
            vt = (char *)((Node *)(sub)) ->vptr;
            ((void (*)(char *))(((GdlVtEnt *)((char *)(vt) + 8))[ 3]) .fn)((char *)(sub + (((GdlVtEnt *)((char *)(vt) + 8))[ 3]) .delta));
            func_802C676C(&D_00008AE0);
            fl = (int)((SnowBoarder *)(st)) ->flags;
        }
        a0_2 = st + 0x808;
        if (fl & 0x80) {
            ((SnowBoarder *)(st)) ->bumpSide = -((SnowBoarder *)(st)) ->bumpSide;
        }
        func_802C676C(a0_2, ((SnowBoarder *)(st)) ->contactSurface);
        m = (char *)((SnowBoarder *)(st)) ->anim;
        ((SnowBoarder *)(st)) ->contactSurface = 0;
        vt = (char *)((Node *)(m)) ->vptr;
        ((void (*)(char *))(((GdlVtEnt *)((char *)(vt) + 8))[ 3]) .fn)((char *)(m + (((GdlVtEnt *)((char *)(vt) + 8))[ 3]) .delta));
        *(short *)(st + 0xA10) = 0;
        ((SnowBoarder *)(st)) ->bumpSide = 0.0f;
        ((SnowBoarder *)(st)) ->bumpUp = 0.0f;
        ((SnowBoarder *)(st)) ->bumpFwd = 0.0f;
        if ((int)((SnowBoarder *)(st)) ->flags & 0x800) {
            func_802C676C(&D_00008AE8);
            func_802C676C(st);
            func_802C676C(&D_00008AF4);
            if ((int)((SnowBoarder *)(st)) ->flags & 0x40000) {
                f0 = ((SnowBoarder *)(st)) ->dnode.vel[1];
                f2 = (f0 < 0.0f) ? -f0 : f0;
                a84 = (int)((f2 - 100.0f) / four);
                ((SnowBoarder *)(st)) ->landImpact = a84;
                if (a84 < 0) {
                    ((SnowBoarder *)(st)) ->landImpact = 0;
                }
                func_802C676C(a0_2, ((SnowBoarder *)(st)) ->landImpact);
                if (((SnowBoarder *)(st)) ->unk8B8 & 1) {
                    *(int *)(((SnowBoarder *)(st)) ->unk81C + 0x94) = ((SnowBoarder *)(st)) ->landImpact;
                }
                if (((SnowBoarder *)(st)) ->unk8B8 & 4) {
                    *(int *)(((SnowBoarder *)(st)) ->unk818 + 0x94) = ((SnowBoarder *)(st)) ->landImpact;
                }
            }
        }
        func_802C676C(&D_00008B00);
        ((SnowBoarder *)(st)) ->fwdSpeed = ((SnowBoarder *)(st)) ->dnode.axes[2][0] * ((SnowBoarder *)(st)) ->dnode.vel[0]
                               + ((SnowBoarder *)(st)) ->dnode.axes[2][1] * ((SnowBoarder *)(st)) ->dnode.vel[1]
                               + ((SnowBoarder *)(st)) ->dnode.axes[2][2] * ((SnowBoarder *)(st)) ->dnode.vel[2];
        func_802C676C((char *)((SnowBoarder *)(st)) ->anim);
        if (((SnowBoarder *)(st)) ->shake != 0) {
             



            char *r4;
            float fv;
            double rnd = (double)func_d440_frnd((void *)(((((int)((SnowBoarder *)(st)) ->dnode.cvqs.trans[0] ^ (int)((SnowBoarder *)(st)) ->dnode.cvqs.trans[2]) >> 5) ^ 0x12345678)));
            float tf2 = (float)((rnd - 0.5) * 30.0 * (double)((float)((SnowBoarder *)(st)) ->shake / 100.0f));
            double tf12;
            r4 = ((SnowBoarder *)(st)) ->bodyNodes[1];
            fv = *(float *)(r4 + 0x64);
            r4 += 0x64;
            *(float *)r4 = fv + tf2;
            tf12 = (double)tf2 * 0.5;
            r4 = ((SnowBoarder *)(st)) ->bodyNodes[2];
            fv = *(float *)(r4 + 0x64);
            r4 += 0x64;
            *(float *)r4 = fv + tf2;
            r4 = ((SnowBoarder *)(st)) ->bodyNodes[4];
            fv = *(float *)(r4 + 0x64);
            r4 += 0x64;
            *(float *)r4 = fv + tf2;
            r4 = ((SnowBoarder *)(st)) ->bodyNodes[5];
            fv = *(float *)(r4 + 0x64);
            r4 += 0x64;
            *(float *)r4 = (float)((double)fv + tf12);
            r4 = ((SnowBoarder *)(st)) ->bodyNodes[3];
            fv = *(float *)(r4 + 0x64);
            r4 += 0x64;
            *(float *)r4 = (float)((double)fv + tf12);
            r4 = ((SnowBoarder *)(st)) ->bodyNodes[6];
            fv = *(float *)(r4 + 0x64);
            r4 += 0x64;
            *(float *)r4 = (float)((double)fv - tf12);
        }
        func_802C676C(&D_00008B0C);
        func_802C676C(&D_00008B18);
        func_802C676C(st);
        func_802C676C(&D_00008B24);
        func_d440_f0call(*(int *)((char *)&D_F0a + 0x48), (int)st, ((SnowBoarder *)(st)) ->dnode.speed / two);
        func_802C676C(*(int *)((char *)&D_F0b + 0x48), (int)st, *(int *)(st + 0xDC), *(int *)(st + 0xE4));
        func_802C676C(*(int *)((char *)&D_F0c + 0x48), (int)st, ((SnowBoarder *)(st)) ->health);
        t5 = (int)((SnowBoarder *)(st)) ->camera;
        if (t5 != 0) {
            func_d440_final(a0_2, st + 0xDC, ((SnowBoarder *)(st)) ->dnode.speed,
                          -((SnowBoarder *)(st)) ->contactDepth, ((SnowBoarder *)(st)) ->edge,
                          ((SnowBoarder *)(st)) ->groundDist + kRo_SnowBoarder_update_980,
                          (int)((SnowBoarder *)(st)) ->surface, t5, (int)((SnowBoarder *)(st)) ->flags);
        }
        func_802C676C(&D_00008B30);
    }
}




                                                                           
                                                                      
                                                                       
                                             
  
                                                                    
                                                           
                                                               
                                                         
                      
                                                                                           
                                                                      
                                     
                 
                                                                            
                                                        
                                                        
                                                                   
                                                                                     
                                                        
                                                               
        
                                                     
      
  
                           
                                                                 
                                                                       
                                                                
                                                                             
                                                                                              
                                                                                          
                                                                                                                   
                                                                              
                                                                                          
                                                                                                   
                                                                                               
                                                                   
                                                                                           
                                                                                             
                                                                           
                                                                             
                                                                                             
                                                                             
                                                                                           

 

 






























extern f64 kRo_SnowBoarder_handleMsg_988, bu_d900_k990;   
extern char bu_d900_aec[], bu_d900_b44[];   
typedef struct { s32 w; } S4D900;   
void SnowBoarder_handleMsg(char *arg0, char *arg1) {
    S4D900 sp8C;
    s32 temp_v0_3;
    S4D900 *sp84;
    Vec3 vA;
    Vec3 v6C;
    Vec3 vB;
    Vec3 v54;
    Vec3 v48;
    f32 temp_f16;
    f32 temp_f2;
    f32 var_f2;
    s32 temp_v0;
    char *temp_v0_2;
    f32 px;
    f32 pz;
    Vec3 v20;

    temp_v0 = *(s32 *)((char *)(arg1) + 0x0);
    if (temp_v0 == 0x14) goto c14;
    if (temp_v0 == 9) goto c9;
    if (temp_v0 == 6) goto c6;
    if (temp_v0 == 0x3E8) goto c3E8;
    if (temp_v0 == 0x3E9) goto c3E9;
    if (temp_v0 == 0x3EB) goto c3EB;
    if (temp_v0 == 0x3EA) goto c3EA;
    if (temp_v0 == 0x3EC) goto c3EC;
    if (temp_v0 == 0x3ED) goto c3ED;
    if (temp_v0 == 0x3EE) goto c3ED;
    if (temp_v0 != 0x3EF) goto cdef;
    goto c3ED;
c14:
        if (*(s32 *)((char *)(arg0) + 0xA80) == 0) {
            temp_v0_2 = *(s32 *)((char *)(arg1) + 0x4);
            temp_f2 = *(f32 *)((char *)(temp_v0_2) + 0xC);
            if (((f64) temp_f2 < kRo_SnowBoarder_handleMsg_988) && (*(u16 *)((char *)(*(s32 *)((char *)(temp_v0_2) + 0x28)) + 0xC) == 0x74)) {
                func_802C676C(arg0 + 0x808);
                return;
            }
            temp_f2 = (temp_f2 < 0.0f) ? 0.0f : ((temp_f2 > 50.0f) ? 50.0f : temp_f2);
            {
            px = *(f32 *)((char *)(temp_v0_2) + 0x0) * temp_f2;
            var_f2 = temp_f2;
            temp_f2 = *(f32 *)((char *)(temp_v0_2) + 0x4) * temp_f2;
            pz = *(f32 *)((char *)(temp_v0_2) + 0x8) * var_f2;
            v48.x = px; v48.y = temp_f2; v48.z = pz; }
            v54 = v48;
            v6C = v54;
            *(f32 *)((char *)(arg0) + 0xB4) = (f32) (*(f32 *)((char *)(arg0) + 0xB4) + v6C.x);
            *(f32 *)((char *)(arg0) + 0xB8) = (f32) (*(f32 *)((char *)(arg0) + 0xB8) + v6C.y);
            *(f32 *)((char *)(arg0) + 0xBC) = (f32) (*(f32 *)((char *)(arg0) + 0xBC) + v6C.z);
            *(f32 *)((char *)(arg0) + 0x318) = (f32) (*(f32 *)((char *)(arg0) + 0x318) + v6C.x);
            *(f32 *)((char *)(arg0) + 0x31C) = (f32) (*(f32 *)((char *)(arg0) + 0x31C) + v6C.y);
            *(f32 *)((char *)(arg0) + 0x320) = (f32) (*(f32 *)((char *)(arg0) + 0x320) + v6C.z);
            temp_f16 = (*(f32 *)((char *)(arg0) + 0x3C4) * v6C.z) + ((*(f32 *)((char *)(arg0) + 0x3C0) * v6C.y) + (*(f32 *)((char *)(arg0) + 0x3BC) * v6C.x));
            *(f32 *)((char *)(arg0) + 0xA1C) = (f32) ((f64) *(f32 *)((char *)(arg0) + 0xA1C) + (f64) temp_f16 * bu_d900_k990);
            temp_f16 = (*(f32 *)((char *)(arg0) + 0x3D0) * v6C.z) + ((*(f32 *)((char *)(arg0) + 0x3CC) * v6C.y) + (*(f32 *)((char *)(arg0) + 0x3C8) * v6C.x));
            *(u16 *)((char *)(arg0) + 0xA10) = (u16) (*(u16 *)((char *)(arg0) + 0xA10) | 0x1F0);
            *(f32 *)((char *)(arg0) + 0xA24) = (f32) ((f64) *(f32 *)((char *)(arg0) + 0xA24) + (f64) -temp_f16 * 0.5);
            *(u16 *)((char *)(arg0) + 0x9A4) = (u16) *(u16 *)((char *)(*(s32 *)((char *)(temp_v0_2) + 0x28)) + 0xC);
            *(s32 *)((char *)(arg0) + 0xA80) = 0xA;
            return;
        }
        return;
c9:
        func_802C676C(arg0);
        return;
c6:
        v20 = *(Vec3 *)((char *)(*(s32 *)((char *)(arg1) + 0x4)) + 0xE0);
        v20.x *= 4.0f;
        v20.y *= 4.0f;
        v20.z *= 4.0f;
        *(f32 *)((char *)(arg0) + 0xB4) = (f32) (*(f32 *)((char *)(arg0) + 0xB4) + v20.x);
        *(f32 *)((char *)(arg0) + 0xB8) = (f32) (*(f32 *)((char *)(arg0) + 0xB8) + v20.y);
        *(f32 *)((char *)(arg0) + 0xBC) = (f32) (*(f32 *)((char *)(arg0) + 0xBC) + v20.z);
        *(f32 *)((char *)(arg0) + 0x320) = 0.0f;
        *(f32 *)((char *)(arg0) + 0x31C) = 0.0f;
        *(f32 *)((char *)(arg0) + 0x318) = 0.0f;
        return;
c3E8:
        *(s32 *)((char *)(arg0) + 0xA54) = 1;
        *(s32 *)((char *)(arg0) + 0xA58) = (s32) (*(s32 *)((char *)(arg0) + 0xA58) | 4);
        func_802C676C(*(s32 *)((char *)(arg0) + 0x804));
        func_802C676C(bu_d900_aec + 0x4C);
        return;
c3E9:
        *(s32 *)((char *)(arg0) + 0xA54) = 2;
        *(s32 *)((char *)(arg0) + 0xA58) = (s32) (*(s32 *)((char *)(arg0) + 0xA58) | 4);
        func_802C676C(*(s32 *)((char *)(arg0) + 0x804));
        func_802C676C(bu_d900_aec + 0x54);
        return;
c3EB:
        *(s32 *)((char *)(arg0) + 0xA54) = 3;
        *(s32 *)((char *)(arg0) + 0xA58) = (s32) (*(s32 *)((char *)(arg0) + 0xA58) | 4);
        func_802C676C(bu_d900_b44 + 0x4);
        func_802C676C(*(s32 *)((char *)(arg0) + 0x804));
        return;
c3EA:
        if (1) {}
        *(s32 *)((char *)(arg0) + 0xA54) = 4;
        return;
c3EC:
        if (1) {}
        *(s32 *)((char *)(arg0) + 0xA54) = 5;
        return;
c3ED:
        *(s32 *)((char *)(arg0) + 0xA54) = 6;
        func_802C676C(bu_d900_b44 + 0x10);
        if (*(s32 *)((char *)(arg0) + 0x848) == 2) {
            sp84 = (S4D900 *)(bu_d900_b44 + 0x24);
            func_802C676C(*(s32 *)((char *)(arg0) + 0x840));
        } else {
            sp84 = (S4D900 *)(bu_d900_b44 + 0x28);
            func_802C676C(*(s32 *)((char *)(arg0) + 0x840));
        }
        sp8C.w = sp84->w;
        temp_v0_3 = func_802C676C(*(s32 *)((char *)&D_00000000 + 0), sp8C, 0, arg0);
        if (temp_v0_3 != 0) {
            func_802C676C(arg0, temp_v0_3 + 0x30);
            return;
        }
        func_802C676C(bu_d900_b44 + 0x2C, sp84);
        return;
cdef:
        func_802C676C(arg0);
}




void SnowBoarder_stub_0000DDC4(int a0) {
}

 


















void SnowBoarder_setDefaultDdms(SnowBoarder *sb) {
    unsigned int st = sb->character;
    if (st == 7 || st == 6) {
        func_802C676C (sb);
        return;
    }
    if (sb->flags & 0x80 ) {
        *sb->unk8F4[0] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0xE);
        *sb->unk8F4[1] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0xF);
    } else {
        *sb->unk8F4[0] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0xA);
        *sb->unk8F4[1] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0xB);
    }
    *sb->unk8F4[2] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0xC);
}

 










 
void SnowBoarder_setReflectionDdms(SnowBoarder *sb) {
    if (sb->flags & 0x80 ) {
        *sb->unk8F4[0] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0x11);
        *sb->unk8F4[1] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0x12);
    } else {
        *sb->unk8F4[0] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0x14);
        *sb->unk8F4[1] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0x15);
    }
    *sb->unk8F4[2] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 0x16);
}
 



 













void SnowBoarder_setRiderDdms(SnowBoarder *sb) {
    if (sb->flags & 0x80 ) {
        *sb->unk8F4[0] = *(SnowBRec3 *)func_802C676C (&D_00000000 , sb->unk902);
        *sb->unk8F4[1] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 8);
    } else {
        *sb->unk8F4[0] = *(SnowBRec3 *)func_802C676C (&D_00000000 , sb->unk900);
        *sb->unk8F4[1] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 5);
    }
    *sb->unk8F4[2] = *(SnowBRec3 *)func_802C676C (&D_00000000 , 6);
}

 














 





extern void func_00000000_e124_r(char *, float *, float);
void SnowBoarder_mirrorFlip_0000E124(SnowBoarder *sb) {
    float up[3];
    int unused[5];
    float r[3];
    float *p;

    sb->flags ^= 0x80 ;
    sb->fwdSpeed = 0.0f;
    if (sb->flags & 0x08 ) {
        func_802C676C ( );
    } else {
        func_802C676C (sb);
    }
    sb->edgeSlope = -sb->edgeSlope;
    up[0] = 0.0f;
    up[1] = 1.0f;
    up[2] = 0.0f;
    if (sb->flags & 0x80 ) {
        p = (float *)(sb->top + 0x30);
        *p = *p * -1.0f;
        if (sb->boardNode != 0) {
            p = (float *)(sb->boardNode + 0x30);
            func_802C676C (p);
            p = (float *)(sb->boardNode + 0x30);
            r[0] = -1.0f;
            r[2] = 1.0f;
            r[1] = 1.0f;
            func_802C676C (p, r);
        }
    } else {
        p = (float *)(sb->top + 0x30);
        *p = *p * -1.0f;
        if (sb->boardNode != 0) { p = (float *)(sb->boardNode + 0x30); func_802C676C (p); }
    }
    if (sb->flags & 0x20 ) {
        if (sb->boardNode != 0) func_00000000_e124_r (sb->boardNode + 0x30, up, 180.0f);
    }
}

 





extern void aE270(void*, void*, float);  
void SnowBoarder_yawPiOver_0000E270(char *arg0, float arg1) {
    aE270(arg0 + 0xCC, arg0 + 0x3B0, 3.14159265f / arg1);
    aE270(arg0 + 0xF4, arg0 + 0x3B0, 3.14159265f / arg1);
}

 

















































 








 











extern f64 bu_e2d0_k9a0;   
void SnowBCollider_edgeGrip_0000E2D0(char *arg0, s32 arg1, Vec3 *arg2, Vec3 *arg3, f32 arg4) {
    Vec3 v[2];
    f32 d;
    f32 lim;
    f32 s;
    int X;
    f32 dot;
    int pad[7];

    v[1].x = arg2->x;
    v[1].y = arg2->y;
    v[1].z = arg2->z;
    d = v[1].z * arg3->z + (v[1].y * arg3->y + v[1].x * arg3->x);
    v[1].x = d * arg3->x - v[1].x;
    v[1].y = d * arg3->y - v[1].y;
    v[1].z = d * arg3->z - v[1].z; if (1) {}
    v[0].x = ((SnowBoarder *)(arg0)) ->dnode.axes[1][0];  
    v[0].y = ((SnowBoarder *)(arg0)) ->dnode.axes[1][1];
    v[0].z = ((SnowBoarder *)(arg0)) ->dnode.axes[1][2];
    d = v[0].z * arg3->z + (v[0].y * arg3->y + v[0].x * arg3->x);
    v[0].x = d * arg3->x - v[0].x;
    v[0].y = d * arg3->y - v[0].y;
    v[0].z = d * arg3->z - v[0].z;
    if (0.1 < (f64)func_00000000_4948_ff (v[0].z * v[0].z + (v[0].y * v[0].y + v[0].x * v[0].x))) {
        dot = v[1].z * v[0].z + (v[1].y * v[0].y + v[0].x * v[1].x);
        func_802C676C (&v[0]); if (arg3) {}
        lim = ((SnowBoarder *)(arg0)) ->edgeGrip;
        dot *= ((SnowBoarder *)(arg0)) ->edgeFriction;
        if ((((v[1].z + v[1].y) + (v[0].z * v[0].x)) - (v[0].y * v[1].x)) != lim) {} if ((((v[1].z + v[1].y) + (v[0].z * v[0].x)) - (v[0].y * v[1].x)) != dot) {}
        if (dot < -lim) {
            dot = -lim;
        }
        if (lim < dot) {
            dot = lim;
        }
        dot *= 1.0f + arg4;
        v[0].x *= dot;
        v[0].y *= dot;
        v[0].z *= dot;
        func_802C676C (arg0, arg1, &v[0]);
    }
}

 



















void SnowBoarder_readParms(char *a0) {
  int n;
  short *p;
  int i;
  int *v;
  func_802C676C (a0 + 0x540);
  stream_readS32_000089C0(&n);
  i = 0;
  p = (short *) (a0 + 0x8C8);
  for (; i < n; i++)
  {
    stream_read16_000089FC(p);
    p += 1;
  }

 do { v = *((int **) (*((char **) (a0 + 0x840)) + 0x28)); (*((void (**)(char *)) (((char *) v) + 0x4C)))((char *) (((int) *((char **) (a0 + 0x840))) + ((int) ((short) (*((short *) (((char *) v) + 0x48))))))); } while (0);
  v = *((int **) (*((char **) (a0 + 0x804)) + 0x28));
  (*((void (**)(char *)) (((char *) v) + 0x4C)))((char *) (((int) *((char **) (a0 + 0x804))) + ((int) ((short) (*((short *) (((char *) v) + 0x48)))))));
  func_802C676C (a0 + 0x108);
  if (v)
  {
  }
}

void boot_readFloatParm_0000E588(char *a0) {
    int scratch;
    stream_readS32_000089C0(&scratch);
    stream_readF32_00008A40((int*)(a0 + 0x10));
}

void boot_readVec3Parm_0000E5B8(char *a0) {
    int scratch;
    stream_readS32_000089C0(&scratch);
    stream_readVec3_00008A7C((int*)(a0 + 0x10));
}

float ShpNode_getSuc(char *a0) { return ((ShpNode *)(a0)) ->dnode.parms.suc.value; }  

void ShpNode_saveData(char *a0) {
    func_802C676C (a0 + 0x108);
}

void ShpNode_readParms(char *a0) {
    func_802C676C (a0 + 0x108);
}

void boot_readQuadParm_0000E630(char *a0) {
    int scratch;
    stream_readS32_000089C0(&scratch);
    stream_readQuad_00008AEC((int*)(a0 + 0x10));
}

void boot_readIntParm_0000E660(char *a0) {
    int scratch;
    stream_readS32_000089C0(&scratch);
    stream_readS32_000089C0((int*)(a0 + 0x10));
}

 




void *boot_ItemType_create_0000E690(int *arg0) {
    int *p2;
    int *head;
    int *p1;
    p1 = (int*)func_802C676C (0x40);
    if (p1 != 0) {
        func_802C676C (p1);
        ((Node *)(p1)) ->vptr = (char *)&D_00000000 ;
        ((ColourSubItem *)p1)->unk3C = 0;
    }
    p2 = p1;
    p1 = arg0;
    head = (int*)p1[0x40 / 4];
    if ((int*)p1[0x40 / 4] != 0) {
        func_802C676C ((char*)p2 + 0x10, head);
        if (((Node *)(head)) ->parent != 0) {
            ((Node *)(head)) ->unk04 = 1;
        }
        ((Node *)(head)) ->parent = (Node *)p2;
    }
    return p2;
}

void SnowBChild_readParms_0000E720(char *a0) {
    func_802C676C (a0 + 0x2C);
}

 










 

void ScreenThumbMat_grab_0000E740(char *a0, int a1) {
    volatile char *r = a0;
}

 










extern char sStr_rom_audio_seq_uso_8D34, sStr_rom_audio_wave_uso_8D48, sStr_rom_audio_bank_uso_8D5C;
 

void SnowBoard_ctor(void) {
    volatile int r = 0;
}

void stream_readS32_0000E8BC(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readF32_0000E8F8(float *dst) {
    float buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

extern void stream_readVec3_0000E934();
void stream_readVec3_0000E934(Vec3 *dst) {
    int pad_top[1];
    Tri3i raw;
    int pad_mid[2];
    Tri3i tmp;
    int pad_bot[2];
    func_802C676C (&D_00000000 , &raw, 12);



    tmp = raw;
    dst->x = *(float*)&tmp.a;
    dst->y = *(float*)&tmp.b;
    dst->z = *(float*)&tmp.c;
}

void stream_readQuad_0000E9A4(Quad4 *dst) {
    Quad4 buf;
    func_802C676C (&D_00000000 , &buf, 16);



    *dst = buf;
}

 






void SnowBoard_staticCtor_0000E9FC(void) {
    volatile int r = 0;
}

extern char sStr_SnowBoard_8D70;
extern char sStr_rom_version_bin_8D7C;
extern char sStr_rom_anims_bin_8D8C;
extern char sStr_Node_8D9C;
extern char D_00000000_a;
extern char D_00000000_b;
void SnowBoard_InitInstance(char *arg0) {
    char pad[4];
    int saved;

    (void)pad;
    ((Node *)(arg0)) ->name = (const char *)&sStr_SnowBoard_8D70;
    func_802C676C (arg0, &sStr_rom_version_bin_8D7C);
    saved = func_802C676C (0);
    *(int *)&D_00000000  = func_802C676C (0, &sStr_rom_anims_bin_8D8C, 0x20, 0xC);
    func_802C676C (saved);
     
    func_802C676C (&D_00000000_a, &sStr_Node_8D9C);
    func_802C676C (&D_00000000_b, arg0);
    if (func_802C676C (&D_00000000 ) != 0) {
        func_802C676C (&D_00000000_a, 1, 0);
    } else {
        func_802C676C (&D_00000000_b, 0, 0);
    }
}

extern int gInputMgr_00000190;
void SnowBoard_onPreNmi(int a0) {
    func_802C676C (gInputMgr_00000190, 3, 0);
}

void boot_readFloatParm_0000EB28(char *a0) {
    int scratch;
    stream_readS32_0000E8BC(&scratch);
    stream_readF32_0000E8F8((int*)(a0 + 0x10));
}

void boot_readVec3Parm_0000EB58(char *a0) {
    int scratch;
    stream_readS32_0000E8BC(&scratch);
    stream_readVec3_0000E934((int*)(a0 + 0x10));
}

void boot_readQuadParm_0000EB88(char *a0) {
    int scratch;
    stream_readS32_0000E8BC(&scratch);
    stream_readQuad_0000E9A4((int*)(a0 + 0x10));
}

void boot_readIntParm_0000EBB8(char *a0) {
    int scratch;
    stream_readS32_0000E8BC(&scratch);
    stream_readS32_0000E8BC((int*)(a0 + 0x10));
}

 















int *boot_ItemType_create_0000EBE8(int *caller_a0) {
    int *ret;
    int *target;
    int *p;
    if ((p = (int*)func_802C676C (0x40)) != 0) {
        func_802C676C (p);
        ((Node *)(p)) ->vptr = (char *)&D_00000000 ;
        p[0x3C/4] = 0;
    }
    ret = p;
    p += 0x10/4;
    if (caller_a0[0x40/4] != 0) {
        target = (int*)caller_a0[0x40/4];
        func_802C676C (p, target);
        if (target[0x14/4] != 0) {
            target[0x4/4] = 1;
        }
        target[0x14/4] = (int)ret;
    }
    return ret;
}

void stream_readS32_0000EC80(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readF32_0000ECBC(float *dst) {
    float buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

extern void stream_readVec3_0000ECF8();
void stream_readVec3_0000ECF8(Vec3 *dst) {
    int pad_top[1];
    Tri3i raw;
    int pad_mid[2];
    Tri3i tmp;
    int pad_bot[2];
    func_802C676C (&D_00000000 , &raw, 12);



    tmp = raw;
    dst->x = *(float*)&tmp.a;
    dst->y = *(float*)&tmp.b;
    dst->z = *(float*)&tmp.c;
}

void stream_readQuad_0000ED68(Quad4 *dst) {
    Quad4 buf;
    func_802C676C (&D_00000000 , &buf, 16);



    *dst = buf;
}

void game_setupEmpty(int a0, int a1) {}

void boot_readFloatParm_0000EDCC(char *a0) {
    int scratch;
    stream_readS32_0000EC80(&scratch);
    stream_readF32_0000ECBC((int*)(a0 + 0x10));
}

void boot_readVec3Parm_0000EDFC(char *a0) {
    int scratch;
    stream_readS32_0000EC80(&scratch);
    stream_readVec3_0000ECF8((int*)(a0 + 0x10));
}

void boot_readQuadParm_0000EE2C(char *a0) {
    int scratch;
    stream_readS32_0000EC80(&scratch);
    stream_readQuad_0000ED68((int*)(a0 + 0x10));
}

void boot_readIntParm_0000EE5C(char *a0) {
    int scratch;
    stream_readS32_0000EC80(&scratch);
    stream_readS32_0000EC80((int*)(a0 + 0x10));
}

 










void *boot_ItemType_create_0000EE8C(void *caller_a0) {
  void *ret;
  void *target;
  register void *p;
  p = (void *) func_802C676C (0x40);
  if (p != 0)
  {
    func_802C676C (p);
    ((Node *)(p)) ->vptr = (char *)&D_00000000 ;
    *((int *) (((char *) p) + 0x3C)) = 0;
  }
  ret = p;
  p = ((char *) p) + 0x10;
  target = *((void **) (((char *) caller_a0) + 0x40));
  if ((*((void **) (((char *) caller_a0) + 0x40))) != 0)
  {
    func_802C676C (p, target);
    if ((*((int *) (((char *) target) + 0x14))) != 0)
    {
      *((int *) (((char *) target) + 0x4)) = 1;
    }
    *((int *) (((char *) target) + 0x14)) = (int) ret;
  }
  return ret;
}

void stream_readS32_0000EF20(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readF32_0000EF5C(float *dst) {
    float buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

extern void stream_readVec3_0000EF98();
void stream_readVec3_0000EF98(Vec3 *dst) {
    int pad_top[1];
    Tri3i raw;
    int pad_mid[2];
    Tri3i tmp;
    int pad_bot[2];
    func_802C676C (&D_00000000 , &raw, 12);



    tmp = raw;
    dst->x = *(float*)&tmp.a;
    dst->y = *(float*)&tmp.b;
    dst->z = *(float*)&tmp.c;
}

void stream_readQuad_0000F008(Quad4 *dst) {
    Quad4 buf;
    func_802C676C (&D_00000000 , &buf, 16);



    *dst = buf;
}

void boot_readFloatParm_0000F060(char *a0) {
    int scratch;
    stream_readS32_0000EF20(&scratch);
    stream_readF32_0000EF5C((int*)(a0 + 0x10));
}

void boot_readVec3Parm_0000F090(char *a0) {
    int scratch;
    stream_readS32_0000EF20(&scratch);
    stream_readVec3_0000EF98((int*)(a0 + 0x10));
}

void boot_readQuadParm_0000F0C0(char *a0) {
    int scratch;
    stream_readS32_0000EF20(&scratch);
    stream_readQuad_0000F008((int*)(a0 + 0x10));
}

void boot_readIntParm_0000F0F0(char *a0) {
    int scratch;
    stream_readS32_0000EF20(&scratch);
    stream_readS32_0000EF20((int*)(a0 + 0x10));
}

void stream_readS32_0000F120(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readQuad_0000F15C(Quad4 *dst) {
    Quad4 buf;
    func_802C676C (&D_00000000 , &buf, 16);



    *dst = buf;
}

 










void boot_readQuadParm_0000F1B4(char *a0) {
    int scratch;
    stream_readS32_0000F120(&scratch);
    stream_readQuad_0000F15C((Quad4*)(a0 + 0x10));
}

 





