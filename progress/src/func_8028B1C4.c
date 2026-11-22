void *func_8028B1C4(void *a0) {
    if (a0 == 0) {
        a0 = (void*)D_802C676C (12);
    }
    return a0;
}

 
void camPath_init_00000634(CamPath *a0) {
    a0->lookMode = 1;
    a0->lookSpline = 0;
    a0->unk08 = 0;
    a0->unk0C = 0;
    a0->eyeMode = 1;
    a0->eyeSpline = 0;
    a0->unk18 = 0;
    a0->unk1C = 0;
    a0->upSpline = 0;
    a0->unk24 = 0;
    a0->fovMode = 0;
    a0->unk2C = 0;
    a0->rotMode = 0;
    a0->numKeys = 0;
}

 






 

int camPath_hasSpline_00000674(CamPath *a0) {
    int r = 0;
    r = ((a0->lookMode == 2 || a0->lookMode == 3) && a0->lookSpline == 1)
        || ((a0->eyeMode == 2 || a0->eyeMode == 3) && a0->eyeSpline == 1)
        || a0->upSpline == 1
        || a0->fovMode == 2
        || a0->rotMode == 2;
    return r;
}

 







void camPath_read_00000724(char *a0) {
  int i;
  int new_var;
  int cnt;
  stream_readQuad_000002BC((Quad4 *) &((CamPath *) a0)->lookMode);
  new_var = 0x30;
  stream_readQuad_000002BC((Quad4 *) &((CamPath *) a0)->eyeMode);
  stream_read8_00000314((Pair2 *) &((CamPath *) a0)->upSpline);
  stream_read8_00000314((Pair2 *) &((CamPath *) a0)->fovMode);
  stream_readWord_0000035C((int *) (a0 + new_var));  
  stream_readS32_00000280(&((CamPath *) a0)->numKeys);
  cnt = ((CamPath *) a0)->numKeys;
  i = 1;
  if (cnt > 0)
  {
    do
    {
      int tmp = func_802C676C (0x38);
      if (1)
      {
        ((CamPath *) a0)->keys[i] = (CamKey *) tmp;
        game_uso_func_000003F4 (tmp);
      }
      camKey_read_000005B8(((CamPath *) a0)->keys[i]);
      if (!a0)
      {
      }
      cnt = ((CamPath *) a0)->numKeys;
      i++;
    }
    while (i <= cnt);
  }
  ((CamPath *) a0)->keys[0] = ((CamPath *) a0)->keys[1];
  ((CamPath *) a0)->keys[cnt + 1] = ((CamPath *) a0)->keys[cnt];
}

void camList_init_000007E0(int *a0) {
    a0[9] = 0;
    *a0 = 0;
}

void camList_read_000007EC(int *arg0) {
    int i;
    int *p;

    stream_readS32_00000280(arg0 + 9);
    i = 0;
    p = arg0 + 1;
    while (i < arg0[9]) {
        stream_readS32_00000280(p);
        i++;
        p++;
    }
}

 








extern char game_uso_D_807FE770;
extern int func_802C676C();
 

extern void game_uso_func_047484(int *dst, int a, int  b, int  c, float f);
extern void game_uso_func_04C774(int *dst, int flag, int arg7);

int *cam_ctor_00000858(int *a0, int arg1, int arg2, int  arg3, int  arg4, float arg5, int arg6, int arg7) {
    if (a0 == 0) {
        a0 = (int *)func_802C676C (0x27C);
        if (a0 == 0) goto out;
    }
    game_uso_func_047484 (a0, arg2, arg3, arg4, arg5);  
    ((Node *)(a0)) ->vptr = (char *)&game_uso_D_807FE770;
    ((CourseCam *)a0)->numLists = 0;
    ((CourseCam *)a0)->numPaths = 0;
    if (arg7 != 0) game_uso_func_04C774 (a0, 1, arg7);  
    ((CourseCam *)a0)->rider = (struct SnowBoarder *)arg1;
    ((CourseCam *)a0)->pad = (struct RiderInput *)arg6;
    ((CourseCam *)a0)->chaseMode = 0;
    ((CourseCam *)a0)->savedChaseMode = 0;
    ((CourseCam *)a0)->freeRot = 0;
out:
    return a0;
}

void cam_reset_000008FC(int *a0) {
    int *v0 = (int*)((CourseCam *)a0)->cam.target;
    D_802C676C (((LookAtNode *)v0)->chase, a0);
    D_802C676C (((CourseCam *)a0)->eyeChase, a0);
    ((CourseCam *)a0)->lastResult = 0;
    D_802C676C (a0);
}

                                                                                   
                                                                         
                                                                       
                                                                      
                                                                           
                                                                          
                                                                          
                                                                          
                                                                     
                                                                       
                                                                             
                                                                             
                                                                            
                       
                                                                            
                                                                             
                                                                             
                                                                             
                                                                            
                                                                             
                                                                       

extern char import_80020098;
void cam_setView_00000AEC(int *a0, int a1);

void cam_pickResultView_00000940(char *arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = -1;
    switch (((CourseCam *)arg0)->rider->raceResult) {  
    case 0:                                          
        temp_v0 = (*(InputMgr *)&(import_80020098)) .nextFlowMode;
        if ((temp_v0 == 4) || (temp_v0 == 6) || (temp_v0 == 7) || ((temp_v0 == 1) && ((*(InputMgr *)&(import_80020098)) .procState == 0))) {
            var_a1 = 1;
        } else {
            switch ((*(InputMgr *)&(import_80020098)) .course) {                       
            case 2:                                  
                var_a1 = 6;
                break;
            case 3:                                  
                var_a1 = 7;
                break;
            case 4:                                  
                var_a1 = 8;
                break;
            case 5:                                  
                var_a1 = 7;
                break;
            case 6:                                  
                var_a1 = 9;
                break;
            case 7:                                  
                var_a1 = 0xA;
                break;
            default:                                 
                var_a1 = 0;
                break;
            }
        }
        break;
    case 1:                                          
        if ((*(InputMgr *)&(import_80020098)) .winVariant != 0) {
            var_a1 = 0xB;
        } else {
            switch ((*(InputMgr *)&(import_80020098)) .course) {                       
            case 2:                                  
                var_a1 = 0xD;
                break;
            case 3:                                  
                var_a1 = 2;
                break;
            case 4:                                  
                var_a1 = 0xD;
                break;
            case 5:                                  
                var_a1 = 2;
                break;
            case 6:                                  
                var_a1 = 2;
                break;
            case 7:                                  
                var_a1 = 0xE;
                break;
            default:                                 
                var_a1 = 2;
                break;
            }
        }
        break;
    case 2:                                          
        var_a1 = 0xC;
        break;
    case 5:                                          
        var_a1 = 3;
        break;
    case 6:                                          
        if ((*(InputMgr *)&(import_80020098)) .course != 7) {
            var_a1 = 4;
        } else {
            var_a1 = 5;
        }
        break;
    }
    if (var_a1 != -1) {
        cam_setView_00000AEC((int *)arg0, var_a1);
    }
}

void cam_setView_00000AEC(int *a0, int a1) {
    if (((CourseCam *)a0)->lists[0]->count > 0) {
        ((CourseCam *)a0)->view = a1;
    }
    ((CourseCam *)a0)->listPos = 0;
    ((CourseCam *)a0)->key = 1;
    ((CourseCam *)a0)->frame = 0;
}

 


extern void game_uso_func_00000000();
void cam_update_00000B14(void *a0) {
    game_uso_func_00000000 (a0);
    game_uso_func_00000000 (a0);
}

 









void cam_updateView_00000B3C(char *arg0) {
    *(volatile float *)arg0 = 1.1f;
    *(volatile float *)arg0 = 1.2f;
    *(volatile float *)arg0 = 1.3f;
    *(volatile float *)arg0 = 1.4f;
    *(volatile float *)arg0 = 1.6f;
    *(volatile float *)arg0 = 1.7f;
    *(volatile float *)arg0 = 1.8f;
    *(volatile float *)arg0 = 1.9f;
    *(volatile float *)arg0 = 2.1f;
    *(volatile float *)arg0 = 2.2f;
    *(volatile float *)arg0 = 2.3f;
    *(volatile float *)arg0 = 2.4f;
    *(volatile float *)arg0 = 2.6f;
    *(volatile float *)arg0 = 2.7f;
    *(volatile float *)arg0 = 2.8f;
    *(volatile float *)arg0 = 2.9f;
}

 

void cam_readParms_00001644(int *a0) {
    int i;
    int *p;
    int v;

    stream_readS32_00000280(&((CourseCam *)a0)->numPaths);
    i = 0;
    while (i < ((CourseCam *)a0)->numPaths) {
        v = D_802C676C (0);
        ((CourseCam *)a0)->paths[i] = (CamPath *)v;
        D_802C676C (v);
        D_802C676C (((CourseCam *)a0)->paths[i]);
        i++;
    }

    i = 0;
    stream_readS32_00000280(&((CourseCam *)a0)->numLists);
    if (((CourseCam *)a0)->numLists > 0) {
         

        p = a0;
        do {
            v = D_802C676C (sizeof(CamList));
            ((CourseCam *)p)->lists[0] = (CamList *)v;
            D_802C676C (v);
            D_802C676C (((CourseCam *)p)->lists[0]);
            i++;
            p++;
        } while (i < ((CourseCam *)a0)->numLists);
    }
}

void cam_handleMsg_00001714(int a0, int *a1) {
    int v = *a1;
    if (v == 8 || v == 9) {
        D_802C676C (a0);
    }
}

 











void cam_command_0000174C(int *a0, int a1, int a2) {
    ((CourseCam *)a0)->freeRot = 0;
    if (a1 == 3)  goto c3;
    if (a1 == 4)  goto c4;
    if (a1 == 5)  goto c5;
    if (a1 == 6)  goto c6;
    if (a1 == 7)  goto c7;
    if (a1 == 8)  goto c8;
    if (a1 == 9)  goto c9;
    if (a1 == 10) goto c10;
    if (a1 == 11) goto c11;
    if (a1 == 12) goto c12;
    if (a1 == 13) goto c13;
    if (a1 == 14) goto c14;
    if (a1 == 15) goto c15;
    if (a1 == 16) goto c16;
    if (a1 == 17) goto c17;
    if (a1 != 18) goto end;
    goto c18;
c3:  cam_setView_00000AEC(a0, 1); ((CourseCam *)a0)->freeRot = 1; goto end;
c4:  cam_setView_00000AEC(a0, 15); goto end;
c5:  cam_setView_00000AEC(a0, 16); goto end;
c6:  cam_setView_00000AEC(a0, 17); goto end;
c7:  cam_setView_00000AEC(a0, 18); goto end;
c8:  cam_setView_00000AEC(a0, 19); goto end;
c9:  cam_setView_00000AEC(a0, 20); goto end;
c10: cam_setView_00000AEC(a0, 21); goto end;
c11: cam_setView_00000AEC(a0, 22); goto end;
c12: cam_setView_00000AEC(a0, 23); goto end;
c13: cam_setView_00000AEC(a0, 24); goto end;
c14: cam_setView_00000AEC(a0, 25); goto end;
c15: cam_setView_00000AEC(a0, 26); goto end;
c16: cam_setView_00000AEC(a0, 27); goto end;
c17: cam_setView_00000AEC(a0, 28); goto end;
c18: cam_setView_00000AEC(a0, 29);
end: ;
}

extern int func_802C676C();
extern int game_uso_func_04A188();
extern char game_uso_D_807FE908, game_uso_D_807FE910, game_uso_D_807FE914,
            game_uso_D_807FE918, game_uso_D_807FE91C, game_uso_D_807FE920,
            game_uso_D_807FE924, game_uso_D_807FE928, game_uso_D_807FE92C,
            game_uso_D_807FE608, game_uso_D_807FE620;
 











typedef struct { int w; } T4_18FC;
void *SnowChaseActorCamParms_ctor(char *s0) {
    Vec3 hi;
    Vec3 lo;
    struct { T4_18FC idx; Vec3 v; } big;
    T4_18FC t2, t3, t4, t5, t6, t7, t8;
    int g0[3];
    char *o;
    int g1[5];
    char *o1;
    int g2;
    Vec3 pa;
    int g3;
    Vec3 pb;
    int g4;
    Vec3 pc;
    int g5;
    T4_18FC prm;
    int g6;
    Vec3 tmp;
    char *b;
    int g7;

    if (1) { T4_18FC *q = &t2; q = &t3; q = &t4; q = &t5; q = &t6; q = &t7; q = &t8; }
    if (s0 != 0 || (s0 = (char *)func_802C676C (0xD0)) != 0) {
        b = s0;
        if (b != 0 || (b = (char *)func_802C676C (8)) != 0) {
            ((SnowChaseActorCamParms *)b)->name = &game_uso_D_807FE908 + 0x318 ;
            ((SnowChaseActorCamParms *)b)->unk04 = 0;
        }
        hi.x = 0; hi.y = 64.0f; hi.z = 0;
        if (1) {}
        lo.x = -1000.0f; lo.y = -1000.0f; lo.z = -1000.0f;
        if (1) {}
        big.idx.w = ((T4_18FC *)(&game_uso_D_807FE910 + 0x320 ))->w;
        if (1) {}
        big.v.x = 1000.0f; big.v.y = 1000.0f; big.v.z = 1000.0f;
        pa = hi;
        pb = lo;
        pc = big.v;
        prm.w = big.idx.w;
        o1 = s0 + 8;
        if (o1 != 0 || (o1 = (char *)func_802C676C (0x20)) != 0) {
            game_uso_func_04A188 (o1, s0, prm, 1);
            ((CamVec3Parm *)o1)->vptr = &game_uso_D_807FE620 + 48;
            ((CamVec3Parm *)o1)->unk1C = 0;
            tmp = pa;
            ((CamVec3Parm *)o1)->value.x = tmp.x;
            ((CamVec3Parm *)o1)->value.y = tmp.y;
            ((CamVec3Parm *)o1)->value.z = tmp.z;
        }
 


 
 
 
 
 
 
 
 
 
          t2.w = ((T4_18FC *)(&( game_uso_D_807FE914) + ( 0x324)))->w;         prm =   t2;         o = s0 + (40);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
          t3.w = ((T4_18FC *)(&( game_uso_D_807FE918) + ( 0x328)))->w;         prm =   t3;         o = s0 + (64);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
          t4.w = ((T4_18FC *)(&( game_uso_D_807FE91C) + ( 0x32C)))->w;         prm =   t4;         o = s0 + (88);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
         t5.w = ((T4_18FC *)(&( game_uso_D_807FE920) + ( 0x330)))->w;         prm =  t5;         o = s0 + (112);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
         t6.w = ((T4_18FC *)(&( game_uso_D_807FE924) + ( 0x334)))->w;         prm =  t6;         o = s0 + (136);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
         t7.w = ((T4_18FC *)(&( game_uso_D_807FE928) + ( 0x338)))->w;         prm =  t7;         o = s0 + (160);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
         t8.w = ((T4_18FC *)(&( game_uso_D_807FE92C) + ( 0x33C)))->w;         prm =  t8;         o = s0 + (184);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 

    }
    return s0;
}


 



SnowChaseActorCam *SnowChaseActorCam_ctor(SnowChaseActorCam *a0, int target, int source, int parmsFile) {
    if (a0 == 0) {
        a0 = (SnowChaseActorCam *)D_802C676C (0x124);
        if (a0 == 0) goto end;
    }
    D_802C676C (a0, &D_00000000 + 0x340 );  
    ((Node *)(a0)) ->vptr = (char *)&D_00000000;
    D_802C676C (&a0->parms);  
    if (parmsFile != 0) {  
        D_802C676C (a0, 1, parmsFile);
    }
    a0->target = (CamMNode *)target;
    a0->source = (CamMNode *)source;
end:
    return a0;
}

void SnowChaseActorCam_reset_00001DC4(SnowChaseActorCam *a0) {
    a0->mode = 0;
    a0->eyeOffset.x = 0.0f;
    a0->eyeOffset.y = 0.0f;
    a0->eyeOffset.z = 0.0f;
}

 




















































extern Vec3* cam_toTargetLocal_000023D4(Vec3 *out, char *a1);
extern float game_uso_func_070238(float);
extern void game_uso_func_071028(Vec3 *v);
extern void game_uso_func_072EE8(char *dst, Vec3 *v);

void SnowChaseActorCam_update(int *a0) {
     
    float m[3];
    char *outh[1];
    char *out;
    char *o2_unused;  
    char *src;
    int key;
    Vec3 dcopy;
    Vec3 fin_c2;
    Vec3 ref_v;
    float self_v[3];
    char *out_home[1];
    Vec3 acc;
    float speed;
    Vec3 diff;
    float mag;
    float sel;
    float scratch[3];
    float excess, yd_unused, y_excess_unused;
    char *s_unused;
    Vec3 *delta;
    Vec3 st_p1t;
    Tri3i *hopA;
    char pad_d0[8];
    Vec3 hopB;
    char pad_bc[8];
    Vec3 hop_p1e;
    Vec3 st_p1e;
    char pad_a0[4];
    Vec3 st_p1e2;
    Vec3 *scaled_src;
    float fx, fy, fz;  
    char pad_80[4];
    Vec3 fin_e;
    char pad_6c[8];
    Vec3 st_c1;
    Vec3 st_p2t;
    Vec3 hop_p2e;
    Vec3 st_p2e;
    Vec3 st_p2e2;
    Vec3 st_c2;
     



    key = ((SnowChaseActorCam *)(a0)) ->mode;

    if (key == 0) {
        return;
    }
    if (key == 3) {
         
        outh[0] = (char *)((SnowChaseActorCam *)(a0)) ->body;
        out = outh[0];
        src = (char *)((SnowChaseActorCam *)(a0)) ->source;
        m[0] = ((CamMNode *)(src)) ->world[3][0];
        src += 0x70;  
        m[1] = *(float *)(src + 0x34);
        m[2] = *(float *)(src + 0x38);
        ((CamMNode *)(out)) ->local[3][0] = m[0];
        ((CamMNode *)(out)) ->local[3][1] = m[1];
        ((CamMNode *)(out)) ->local[3][2] = m[2];
         
        out = outh[0]; ((CamMNode *)(out)) ->world[3][0] = m[0];
        ((CamMNode *)(out)) ->world[3][1] = m[1];
        ((CamMNode *)(out)) ->world[3][2] = m[2];
        return;
    }

    {
         
        out_home[0] = (char *)((SnowChaseActorCam *)(a0)) ->body;

        { char *mo = out_home[0];  
        ref_v.x = ((CamMNode *)(mo)) ->world[3][0];
        ref_v.y = ((CamMNode *)(mo)) ->world[3][1];
        ref_v.z = ((CamMNode *)(mo)) ->world[3][2]; }

        src = (char *)((SnowChaseActorCam *)(a0)) ->target;
        self_v[0] = ((CamMNode *)(src)) ->world[3][0];
        src += 0x70;  
        self_v[1] = *(float *)(src + 0x34);
        self_v[2] = *(float *)(src + 0x38);

        delta = cam_toTargetLocal_000023D4((Vec3 *)scratch, (char *)a0);
        *(Tri3i *)&dcopy = *(Tri3i *)delta;
         
        if (1) { self_v[0] = self_v[0] + dcopy.x; }
        self_v[1] = self_v[1] + dcopy.y;
        if (1) { self_v[2] = self_v[2] + dcopy.z; }

        speed = ((SnowChaseActorCam *)(a0)) ->parms.txz.value;
        diff.y = (fz = (float)0);  
        mag = self_v[2] - ref_v.z; diff.z = mag;
        excess = self_v[0] - ref_v.x; diff.x = excess;

        mag = game_uso_func_070238(diff.x * diff.x + diff.y * diff.y + diff.z * diff.z);
        game_uso_func_071028(&diff);

         
        if (1) { scaled_src = (Vec3 *)&diff; }
        if (1) { hopA = (Tri3i *)scratch; }
         

        fz = ((SnowChaseActorCam *)(a0)) ->parms.mxz.value;
        if (mag < fz) {
             

            fy = mag - fz;
            st_p1t.x = (fx = scaled_src->x * fy); st_p1t.y = (fz = scaled_src->y * fy); st_p1t.z = (fy = scaled_src->z * fy);
            *hopA = *(Tri3i *)&st_p1t;
            *(Tri3i *)&hopB = *hopA;
            acc.x = hopB.x; acc.y = hopB.y; acc.z = hopB.z;
        } else {
            yd_unused = mag - speed;  
            st_p1e.x = (fx = scaled_src->x * yd_unused); st_p1e.y = (fz = scaled_src->y * yd_unused); if (1) { st_p1e.z = (y_excess_unused = scaled_src->z * yd_unused); }
            *hopA = *(Tri3i *)&st_p1e;
            *(Tri3i *)&hop_p1e = *hopA;
            if (1) { scaled_src = &hop_p1e; }
            st_p1e2.x = (fz = (excess = ((SnowChaseActorCam *)(a0)) ->parms.cxz.value, scaled_src->x * excess)); st_p1e2.y = (fx = scaled_src->y * excess); st_p1e2.z = (fy = scaled_src->z * excess);
            *(Tri3i *)&hopB = *(Tri3i *)&st_p1e2;
            *(Tri3i *)&fin_e = *(Tri3i *)&hopB;
            acc.x = fin_e.x; acc.y = fin_e.y; acc.z = fin_e.z;
        }
        out = out_home[0];
        game_uso_func_072EE8((char *)((CamMNode *)(out)) ->local, &acc);

        if (1) { scaled_src = (Vec3 *)&diff; }
        if (1) { hopA = (Tri3i *)scratch; }
        st_c1.x = (excess = scaled_src->x * speed); st_c1.y = (mag = scaled_src->y * speed); st_c1.z = (fz = scaled_src->z * speed);
        *hopA = *(Tri3i *)&st_c1;
        *(Tri3i *)&hopB = *hopA;
        ((SnowChaseActorCam *)(a0)) ->eyeOffset.x = hopB.x;
        ((SnowChaseActorCam *)(a0)) ->eyeOffset.y = hopB.y;
        ((SnowChaseActorCam *)(a0)) ->eyeOffset.z = hopB.z;

        excess = (((SnowChaseActorCam *)(a0)) ->mode == 2) ? ((SnowChaseActorCam *)(a0)) ->parms.ty2.value
                                  : ((SnowChaseActorCam *)(a0)) ->parms.toy.value;

        sel = excess;
        diff.x = 0.0f;
        diff.y = 1.0f;
        diff.z = 0.0f;
        mag = ref_v.y - self_v[1];
        if (1) { scaled_src = &diff; }
        if (mag < ((SnowChaseActorCam *)(a0)) ->parms.miy.value) {
            excess = ((SnowChaseActorCam *)(a0)) ->parms.miy.value - mag; if (1) {}
            st_p2t.x = (fx = scaled_src->x * excess); st_p2t.y = (fz = scaled_src->y * excess); st_p2t.z = (y_excess_unused = scaled_src->z * excess);
            *hopA = *(Tri3i *)&st_p2t;
            *(Tri3i *)&hopB = *hopA;
            acc.x = hopB.x; acc.y = hopB.y; acc.z = hopB.z;
        } else {
            excess = sel - mag;
            st_p2e.x = (fx = scaled_src->x * excess); st_p2e.y = (fz = scaled_src->y * excess); st_p2e.z = (y_excess_unused = scaled_src->z * excess);
            *hopA = *(Tri3i *)&st_p2e;
            *(Tri3i *)&hop_p2e = *hopA;
            if (1) { scaled_src = &hop_p2e; }
            st_p2e2.x = (fz = (excess = ((SnowChaseActorCam *)(a0)) ->parms.chy.value, scaled_src->x * excess)); st_p2e2.y = (fx = scaled_src->y * excess); st_p2e2.z = (fy = scaled_src->z * excess);
            *(Tri3i *)&hopB = *(Tri3i *)&st_p2e2;
            *(Tri3i *)&fin_e = *(Tri3i *)&hopB;
            acc.x = fin_e.x; acc.y = fin_e.y; acc.z = fin_e.z;
        }
        out = out_home[0];
        game_uso_func_072EE8((char *)((CamMNode *)(out)) ->local, &acc);

        if (1) { scaled_src = (Vec3 *)&diff; }
        if (1) { hopA = (Tri3i *)scratch; }
        st_c2.x = (excess = scaled_src->x * sel); st_c2.y = (fx = scaled_src->y * sel); st_c2.z = (fz = scaled_src->z * sel);
        *hopA = *(Tri3i *)&st_c2;
        *(Tri3i *)&fin_c2 = *hopA;
        ((SnowChaseActorCam *)(a0)) ->eyeOffset.x -= fin_c2.x;
        ((SnowChaseActorCam *)(a0)) ->eyeOffset.y -= fin_c2.y;
        ((SnowChaseActorCam *)(a0)) ->eyeOffset.z -= fin_c2.z;
    }
}








 















Vec3* cam_toTargetLocal_000023D4(Vec3 *a0, char *a1) {  
    Vec3 v = *(Vec3*)&((SnowChaseActorCam *)a1)->parms.cof.value;  
    float *mm = &((SnowChaseActorCam *)a1)->target->world[0][0];
    float X = mm[8]*v.z + (mm[4]*v.y + mm[0]*v.x);
    float Y = mm[9]*v.z + (mm[5]*v.y + mm[1]*v.x);
    float Z = mm[10]*v.z + (mm[6]*v.y + mm[2]*v.x);
    v.x = X; v.y = Y; v.z = Z;
    *a0 = v;
    return a0;
}

extern void game_uso_func_00000000();

void SnowChaseActorCam_loadParms(SnowChaseActorCam *a0) {
    game_uso_func_00000000 (&a0->parms);
}

 






void SnowChaseActorCam_applyMode_000024BC(int *a0, int *a1) {
    volatile int *ret = a0;
}

 

void SnowChaseActorCam_setMode_00002714(int *a0, unsigned int a1, int a2) {
    if (((SnowChaseActorCam *)a0)->mode == a1) return;
    ((SnowChaseActorCam *)a0)->mode = a1;
    SnowChaseActorCam_applyMode_000024BC(a0, (int *)a2);
}

 




















void *SnowChaseActorLookParms_ctor(void *arg0) {
  int init_arg;
  void *var_v1;
  volatile int pad_a;
  volatile int pad_b;
  void *var_a0;
  volatile int pad_c;
  One1 init_arg_copy;
  if (arg0 == ((void *) 0))
  {
    arg0 = (void *) D_802C676C (0x20);
    if (arg0 == ((void *) 0))
    {
      goto done;
    }
  }
  var_v1 = arg0;
  if (arg0 == ((void *) 0))
  {
    var_v1 = (void *) D_802C676C (8);
    if (var_v1 == ((void *) 0))
    {
      goto after_template;
    }
  }
  ((SnowChaseActorLookParms *) var_v1)->name = ((char *) (&D_00000000)) + 0x354 ;  
  ((SnowChaseActorLookParms *) var_v1)->unk04 = 0;
  after_template:
  init_arg = *((int *) (((char *) (&D_00000000)) + 0x35C ));
  init_arg_copy = *((One1 *) (int *) &init_arg);
  var_a0 = ((char *) arg0) + 8;
  if (arg0 == ((void *) (-8)))
  {
    var_a0 = (void *) D_802C676C (0x18);
    if (var_a0 == ((void *) 0))
    {
      goto done;
    }
  }
  D_802C676C (var_a0, arg0, init_arg_copy, 1);
  ((CamParm *) var_a0)->vptr = ((char *) (&D_00000000)) + 0x18;  
  ((CamParm *) var_a0)->value = 0.0f;
  ((CamParm *) var_a0)->unk14 = 0;
  done:
  return arg0;

}

 


SnowChaseActorLook *SnowChaseActorLook_ctor(SnowChaseActorLook *a0, int anchor, int cam, int parmsFile) {
    if (a0 == 0) {
        a0 = (SnowChaseActorLook *)D_802C676C (0x64);
        if (a0 == 0) goto end;
    }
    D_802C676C (a0, &D_00000000 + 0x360 );  
    ((Node *)(a0)) ->vptr = (char *)&D_00000000;
    D_802C676C (&a0->parms);  
    if (parmsFile != 0) {  
        D_802C676C (a0, 1, parmsFile);
    }
    a0->anchor = (CamMNode *)anchor;
    a0->cam = (SnowChaseActorCam *)cam;
end:
    return a0;
}

void SnowChaseActorLook_reset_000028A8(SnowChaseActorLook *a0) {
    a0->mode = 0;
    a0->unk2C.x = 0.0f;
    a0->unk2C.y = 0.0f;
    a0->unk2C.z = 0.0f;
}

                                                                  
                                                                  
                                                                   
  
                                                                  
         
  
                                                                         
                                                                     
                                                                     
                                  
                                                     
                                                                   
                                                                  
                                                     
                                                                     
                                                                
                                                                
                                                            
      
  
                           
                                                                
                                                                  
                                                                     
                                                                   
                                                              
                          
                                                                   
                                                            
                                                                   
                     
                                                                                                         

 
 










void SnowChaseActorLook_update(char *a0) {
     



    char *out;             
    char *s;               
    volatile s32 pad0;     
    Vec3 dcopy;            
    Vec3 refv1;            
    float v2v[3];          
    Vec3 dc2;              
    float mag;             
    volatile s32 pad1[4];  
    float scratch[3];      
    volatile s32 pad2[2];  
    Vec3 diff;             
    volatile s32 pad3[4];  
    Vec3 axis;             
    float refv2[3];        
    Vec3 ssv;              
    Vec3 axisc;            
    float mag2;            
    int mode;
    Vec3 *delta;
    float f, dirv, ax, ay, az, zerof;

    out = (char *)((SnowChaseActorLook *)(a0)) ->body;
    s = (char *)((SnowChaseActorLook *)(a0)) ->cam->target;
    mode = ((SnowChaseActorLook *)(a0)) ->mode;
    if (mode == 0) {
        return;
    }
    if (mode == 1) {
        refv1.x = ((CamMNode *)(out)) ->world[3][0];
        refv1.y = ((CamMNode *)(out)) ->world[3][1];
        refv1.z = ((CamMNode *)(out)) ->world[3][2];
        v2v[0] = ((CamMNode *)(s)) ->world[3][0];
        v2v[1] = ((CamMNode *)(s)) ->world[3][1];
        v2v[2] = ((CamMNode *)(s)) ->world[3][2];
        delta = cam_toTargetLocal_000023D4((Vec3 *)scratch, (char *)((SnowChaseActorLook *)(a0)) ->cam);
        *(Tri3i *)&dcopy = *(Tri3i *)delta;
        v2v[0] = v2v[0] + dcopy.x;
        v2v[1] = v2v[1] + dcopy.y;
        v2v[2] = v2v[2] + dcopy.z;
        diff.y = v2v[1] - refv1.y;
        diff.z = v2v[2] - refv1.z;
        diff.x = v2v[0] - refv1.x;
        *(Tri3i *)scratch = *(Tri3i *)&diff;
        *(Tri3i *)&dc2 = *(Tri3i *)scratch;
        mag = game_uso_func_070238(dc2.x * dc2.x + dc2.y * dc2.y + dc2.z * dc2.z);
        game_uso_func_071028(&dc2);
        f = mag * ((SnowChaseActorLook *)(a0)) ->parms.ch0.value;
        dc2.x = dc2.x * f;
        dc2.y = dc2.y * f;
        dc2.z = dc2.z * f;
        game_uso_func_072EE8((char *)((CamMNode *)(out)) ->local, &dc2);
        ((CamMNode *)(out)) ->world[3][0] = ((CamMNode *)(out)) ->local[3][0];
        ((CamMNode *)(out)) ->world[3][1] = ((CamMNode *)(out)) ->local[3][1];
        ((CamMNode *)(out)) ->world[3][2] = ((CamMNode *)(out)) ->local[3][2];
    } else {
        char *ss;

        refv2[0] = ((CamMNode *)(out)) ->world[3][0];
        refv2[1] = ((CamMNode *)(out)) ->world[3][1];
        refv2[2] = ((CamMNode *)(out)) ->world[3][2];
        ss = (char *)((SnowChaseActorLook *)(a0)) ->anchor;
        ssv.x = ((CamMNode *)(ss)) ->world[3][0];
        ss += 0x70;  
        ssv.y = *(float *)(ss + 0x34);
        ssv.z = *(float *)(ss + 0x38);
        if (((SnowChaseActorLook *)(a0)) ->mode == 3) {
            dirv = -1000.0f;
        } else {
            dirv = 1000.0f;
        }
        zerof = 0.0f;
        axis.x = zerof;
        axis.y = zerof;
        axis.z = dirv;
        *(Tri3i *)&axisc = *(Tri3i *)&axis;
         

        ax = axisc.x;
        ay = axisc.y;
        az = axisc.z;
        axisc.x = ((CamMNode *)(s)) ->world[0][0] * ax + ((CamMNode *)(s)) ->world[1][0] * ay + ((CamMNode *)(s)) ->world[2][0] * az;
        axisc.y = ((CamMNode *)(s)) ->world[0][1] * ax + ((CamMNode *)(s)) ->world[1][1] * ay + ((CamMNode *)(s)) ->world[2][1] * az;
        axisc.z = ((CamMNode *)(s)) ->world[0][2] * ax + ((CamMNode *)(s)) ->world[1][2] * ay + ((CamMNode *)(s)) ->world[2][2] * az;
        ssv.x = ssv.x + axisc.x;
        ssv.y = ssv.y + axisc.y;
        ssv.z = ssv.z + axisc.z;
        ssv.x = ssv.x - refv2[0];
        ssv.y = ssv.y - refv2[1];
        ssv.z = ssv.z - refv2[2];
        mag2 = game_uso_func_070238(ssv.x * ssv.x + ssv.y * ssv.y + ssv.z * ssv.z);
        game_uso_func_071028(&ssv);
        f = mag2 * ((SnowChaseActorLook *)(a0)) ->parms.ch0.value;
        ssv.x = ssv.x * f;
        ssv.y = ssv.y * f;
        ssv.z = ssv.z * f;
        game_uso_func_072EE8((char *)((CamMNode *)(out)) ->local, &ssv);
        ((CamMNode *)(out)) ->world[3][0] = ((CamMNode *)(out)) ->local[3][0];
        ((CamMNode *)(out)) ->world[3][1] = ((CamMNode *)(out)) ->local[3][1];
        ((CamMNode *)(out)) ->world[3][2] = ((CamMNode *)(out)) ->local[3][2];
    }
}




void SnowChaseActorLook_loadParms(SnowChaseActorLook *a0) {
    game_uso_func_00000000 (&a0->parms);
}

 






void SnowChaseActorLook_applyMode_00002CC8(char *a0, char *a1) {
    volatile char *ret = a0;
}

void SnowChaseActorLook_setMode_00002FC8(int *a0, int a1, int a2) {
    if (((SnowChaseActorLook *)a0)->mode == a1) return;
    ((SnowChaseActorLook *)a0)->mode = a1;
    SnowChaseActorLook_applyMode_00002CC8((char *)a0, a2);
}

void CameraBase_update_00002FF8(void) {
    game_uso_func_00000000 ();
}

 













typedef struct { int w; } T4_3018;
extern int func_802C676C();
extern int game_uso_func_04A188();
extern char game_uso_D_807FE608, game_uso_D_807FE620, game_uso_D_807FE964,
            game_uso_D_807FE96C, game_uso_D_807FE970, game_uso_D_807FE974,
            game_uso_D_807FE978, game_uso_D_807FE97C, game_uso_D_807FE980,
            game_uso_D_807FE984, game_uso_D_807FE988, game_uso_D_807FE98C;
void *SnowChaseActorParms_ctor(char *s0) {
    Vec3 hi;
    Vec3 lo;
    struct { T4_3018 idx; Vec3 v; } big;
    T4_3018 t2, t3, t4, t5, t6, t7, t8, t9;
    int g0[3];
    char *o;
    int g1[5];
    char *o1;
    int g2[2];
    Vec3 pa;
    int g3;
    Vec3 pb;
    int g4;
    Vec3 pc;
    int g5;
    T4_3018 prm;
    int g6;
    Vec3 tmp;
    char *b;

    if (1) { T4_3018 *q = &t2; q = &t3; q = &t4; q = &t5; q = &t6; q = &t7; q = &t8; q = &t9; }
    if (s0 != 0 || (s0 = (char *)func_802C676C (0xE8)) != 0) {
        b = s0;
        if (b != 0 || (b = (char *)func_802C676C (8)) != 0) {
            ((SnowChaseActorParms *)b)->name = &game_uso_D_807FE964 + 0x374 ;
            ((SnowChaseActorParms *)b)->unk04 = 0;
        }
        hi.x = 0; hi.y = 0; hi.z = 0;
        if (1) {}
        lo.x = -1000.0f; lo.y = -1000.0f; lo.z = -1000.0f;
        if (1) {}
        big.idx.w = ((T4_3018 *)(&game_uso_D_807FE96C + 0x37C ))->w;
        if (1) {}
        big.v.x = 1000.0f; big.v.y = 1000.0f; big.v.z = 1000.0f;
        pa = hi;
        pb = lo;
        pc = big.v;
        prm.w = big.idx.w;
        o1 = s0 + 8;
        if (o1 != 0 || (o1 = (char *)func_802C676C (0x20)) != 0) {
            game_uso_func_04A188 (o1, s0, prm, 1);
            ((CamVec3Parm *)o1)->vptr = &game_uso_D_807FE620 + 48;
            ((CamVec3Parm *)o1)->unk1C = 0;
            tmp = pa;
            ((CamVec3Parm *)o1)->value.x = tmp.x;
            ((CamVec3Parm *)o1)->value.y = tmp.y;
            ((CamVec3Parm *)o1)->value.z = tmp.z;
        }
 

 
 
 
 
 
 
 
          t2.w = ((T4_3018 *)(&( game_uso_D_807FE970) + ( 0x380)))->w; prm =   t2; o = s0 + (40);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
          t3.w = ((T4_3018 *)(&( game_uso_D_807FE974) + ( 0x384)))->w; prm =   t3; o = s0 + (64);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
          t4.w = ((T4_3018 *)(&( game_uso_D_807FE978) + ( 0x388)))->w; prm =   t4; o = s0 + (88);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
         t5.w = ((T4_3018 *)(&( game_uso_D_807FE97C) + ( 0x38C)))->w; prm =  t5; o = s0 + (112);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
         t6.w = ((T4_3018 *)(&( game_uso_D_807FE980) + ( 0x390)))->w; prm =  t6; o = s0 + (136);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
         t7.w = ((T4_3018 *)(&( game_uso_D_807FE984) + ( 0x394)))->w; prm =  t7; o = s0 + (160);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
         t8.w = ((T4_3018 *)(&( game_uso_D_807FE988) + ( 0x398)))->w; prm =  t8; o = s0 + (184);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 
         t9.w = ((T4_3018 *)(&( game_uso_D_807FE98C) + ( 0x39C)))->w; prm =  t9; o = s0 + (208);         if (o != 0 || (o = (char *) func_802C676C(0x18)) != 0) {              game_uso_func_04A188(o, s0, prm, 1);             ((CamParm *)o)->vptr = &game_uso_D_807FE608 + 24;             ((CamParm *)o)->unk14 = 0;             ((CamParm *)o)->value = 0.0f;         } 

    }
    return s0;
}


 













extern char game_uso_D_807FE990;
extern char game_uso_D_807FE8A8;
extern void game_uso_func_04C678(int *dst, void *tmpl);
extern void *SnowChaseActorParms_ctor();

SnowChaseActor *SnowChaseActor_ctor(SnowChaseActor *a0, int target, int lookBody, int parmsFile) {
    if (a0 == 0) {
        a0 = (SnowChaseActor *)func_802C676C (0x138);
        if (a0 == 0) goto out;
    }
    game_uso_func_04C678 ((int *)a0, (char *)&game_uso_D_807FE990 + 0x3A0 );  
    ((Node *)(a0)) ->vptr = (char *)&game_uso_D_807FE8A8;
    SnowChaseActorParms_ctor(&a0->parms);
     
    if (parmsFile != 0) game_uso_func_04C774 ((int *)a0, 1, parmsFile);
    a0->target = (CamMNode *)target;
    a0->lookBody = (CamMNode *)lookBody;
    a0->unk2C = 0;
    a0->unk30.z = 0.0f;
    a0->unk30.y = 0.0f;
    a0->unk30.x = 0.0f;
    a0->toGoal.z = 0.0f;
    a0->toGoal.y = 0.0f;
    a0->toGoal.x = 0.0f;
out:
    return a0;
}

 








































 





void SnowChaseActor_update(char *s0) {
     
    s0[0] = 0;
}

void SnowChaseActor_loadParms(SnowChaseActor *a0) {
    game_uso_func_00000000 (&a0->parms);
}

void game_readFloatParm_00003968(char *dst) {
    int tmp;
    stream_readS32_00000280(&tmp);
    stream_readF32_00000244((float*)(dst + 0x10));
}

void game_readVec3Parm_00003998(char *dst) {
    int tmp;
    stream_readS32_00000280(&tmp);
    stream_readVec3_000001D4((Vec3*)(dst + 0x10));
}

void game_readQuadParm_000039C8(char *dst) {
    int tmp;
    stream_readS32_00000280(&tmp);
    stream_readQuad_0000039C((Quad4*)(dst + 0x10));
}

void game_readIntParm_000039F8(char *dst) {
    int tmp;
    stream_readS32_00000280(&tmp);
    stream_readS32_00000280((int*)(dst + 0x10));
}

 










extern char import_8006ED80;
int *game_ItemType_create_00003A28(int *arg0) {
    int *p2;
    int *head;
    int *p1;
    p1 = (int*)func_802C676C (sizeof(ColourSubItem));
    if (p1 != 0) {
        game_uso_func_051C28 (p1);
        ((Node *)(p1)) ->vptr = (char *)&import_8006ED80;
        ((ColourSubItem *)p1)->unk3C = 0;
    }
    p2 = p1;
    p1 = arg0;
    head = (int*)((ItemType *)(p1)) ->unk40;
    if ((int*)((ItemType *)(p1)) ->unk40 != 0) {
        game_uso_func_07ACE0 (&((Node *)(p2)) ->children, head);
        if (((Node *)(head)) ->parent != 0) {
            ((Node *)(head)) ->unk04 = 1;
        }
        ((Node *)(head)) ->parent = (Node *)p2;
    }
    return p2;
}


 











float CourseMarker_registerTemplates(int *a0) {
    volatile int *ret = a0;
    return 3.14159274f;  
}

 















extern float game_uso_func_07E330_ff(float);   
float math_signedAngleXZ_00003ED4(Vec3 *a0, Vec3 *a1, int *a2) {
  float unused;
  Vec3 vb;
  Vec3 va;
  char *new_var;
  char pad[4];
  float ret;
  float r;
  new_var = ((char *) (&D_00000000)) + 0x90;
  ret = r;
  (void) unused;
  (void) pad;
  vb = *a1;
  game_uso_func_071028 (&vb);
  va = *a0;
  game_uso_func_071028 (&va);
  r = game_uso_func_07E330_ff ((va.x * vb.x) + (va.z * vb.z));
  r = r / (*((float *) new_var));
  ret = r;
  if ((va.z * vb.x) < (va.x * vb.z))
  {
    ret = -r;
  }
  if (a2 != ((void *) 0))
  {
    *a2 = 0;
  }
  return ret;
}

 






































extern float game_uso_func_082880(float);
void math_rotateXZPair_00003FAC(float *a0, float *a1, float *a2, float a3, float arg4) {
    float orig_scale = arg4 / a3;
    float ns, os, nsd, neg;
    float ratio = orig_scale * orig_scale;
    float new_scale = game_uso_func_082880 (1.0f - ratio);
    (void)ratio;
    a0[0] = (orig_scale * a2[2]) + (a2[0] * (ns = new_scale));
    a0[1] = 0.0f;
    a0[2] = (new_scale * a2[2]) + (a2[0] * (neg = -orig_scale));
    a1[0] = (new_scale * a2[0]) - (a2[2] * (os = orig_scale));
    a1[1] = 0.0f;
    a1[2] = (new_scale * a2[2]) + (a2[0] * (nsd = orig_scale));
}

static void stream_readS32_00004080(int *dst) {
    int buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

static void stream_readF32_000040BC(float *dst) {
    float buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

static void stream_readVec3_000040F8(Vec3 *dst) {
    int pad_top[1];
    Tri3i raw;
    int pad_mid[2];
    Tri3i tmp;
    int pad_bot[2];
    D_802C676C (&D_00000000, &raw, 12);



    tmp = raw;
    dst->x = *(float*)&tmp.a;
    dst->y = *(float*)&tmp.b;
    dst->z = *(float*)&tmp.c;
}

static void stream_readQuad_00004168(Quad4 *dst) {
    Quad4 buf;
    D_802C676C (&D_00000000, &buf, 16);



    *dst = buf;
}


 




















extern char game_uso_D_807FEB68;
extern char game_uso_D_807FECA0;
extern char game_uso_D_807FECB4;
extern char game_uso_D_807FE9B8;
extern char game_uso_D_807FECB8;
extern char game_uso_D_807FEA00;
extern char game_uso_D_807FECBC;
extern int func_802C676C();
extern int game_uso_func_051C28();
extern int game_uso_func_04A188();
extern int game_uso_func_07ACE0();
typedef struct { int w; } T4_41C0;
 







int *CourseMarkerTmpl_create(int a0) {
    char *p1;
    char *x;
    char *obj;
    T4_41C0 t1;
    T4_41C0 t2;
    T4_41C0 t3;
    char *b;
    int pad[2];
    char *s;
    T4_41C0 prm;

    if (1) { void *q = &t1; q = &t2; q = &t3; q = &x; }
    if ((x = (char *)func_802C676C(0x8C)) != 0) {
        game_uso_func_051C28(x);
        ((CourseMarker *)x)->vptr = &game_uso_D_807FEB68;
        obj = x + 0x3C;
        if (obj != 0 || (obj = (char *)func_802C676C(0x50)) != 0) {
            b = obj;
            if (b != 0 || (b = (char *)func_802C676C(8)) != 0) {
                *(char **)(b + 0) = &game_uso_D_807FECA0 + 0x6B0 ;
                *(int *)(b + 4) = 0;
            }
            t1.w = ((T4_41C0 *)(&game_uso_D_807FECB4 + 0x6C4 ))->w;
            prm = t1;
            s = obj + 8;
            if (s != 0 || (s = (char *)func_802C676C(0x18)) != 0) {
                game_uso_func_04A188(s, obj, prm, 1);
                ((CourseParm *)s)->vptr = &game_uso_D_807FE9B8 + 0x3C8 ;
                ((CourseParm *)s)->value2 = 0;
                ((CourseFParm *)s)->value = 1.0f;
            }
            t2.w = ((T4_41C0 *)(&game_uso_D_807FECB8 + 0x6C8 ))->w;
            prm = t2;
            s = obj + 0x20;
            if (s != 0 || (s = (char *)func_802C676C(0x18)) != 0) {
                game_uso_func_04A188(s, obj, prm, 1);
                ((CourseParm *)s)->vptr = &game_uso_D_807FEA00 + 0x410 ;
                ((CourseParm *)s)->value = 0;
                ((CourseParm *)s)->value2 = 0;
            }
            t3.w = ((T4_41C0 *)(&game_uso_D_807FECBC + 0x6CC ))->w;
            prm = t3;
            s = obj + 0x38;
            if (s != 0 || (s = (char *)func_802C676C(0x18)) != 0) {
                game_uso_func_04A188(s, obj, prm, 0);
                ((CourseParm *)s)->vptr = &game_uso_D_807FEA00 + 0x410 ;
                ((CourseParm *)s)->value2 = 0;
                ((CourseParm *)s)->value = 0;
            }
        }
    }
    p1 = x;
    obj = *(char **)(a0 + 0x40);
    if (*(char **)(a0 + 0x40) != 0) {
        game_uso_func_07ACE0(p1 + 0x10, x = obj);
        if (((Node *)(x)) ->parent != 0) {
            ((Node *)(x)) ->unk04 = 1;
        }
        ((Node *)(x)) ->parent = (Node *)p1;
    }
    return (int *)p1;
}




 








void *CourseMarker_findNearestZ_000043D8(int **a0, int *a1, void *a2) {
    ((float *)a1)[0] = 3.4028235e38f;
    ((float *)a1)[1] = -3.4028235e38f;
    return 0;
}

void CourseMarker_readParms(char *a0) {
    game_uso_func_00000000 (a0);
    game_uso_func_00000000 (&((CourseMarker *)a0)->parms);
}

 






extern char D_44F4_iterA_t, D_44F4_iterA_p, D_44F4_iterA_f, D_44F4_iterB_t, D_44F4_iterB_p, D_44F4_iterB_f, D_44F4_iterC_t, D_44F4_iterC_p;
extern char D_44F4_iterD_t, D_44F4_iterD_p, D_44F4_iterD_f, D_44F4_iterE_t, D_44F4_iterE_p, D_44F4_iterE_f, D_44F4_iterF_t, D_44F4_iterF_p;
extern char D_44F4_iterG_t, D_44F4_iterG_p, D_44F4_iterH_t, D_44F4_iterH_p, D_44F4_iterH_f, D_44F4_iterI_t, D_44F4_iterI_p, D_44F4_iterI_f;
extern char D_44F4_iterJ_t, D_44F4_iterJ_p, D_44F4_iterJ_f, D_44F4_iterK_t, D_44F4_iterK_p, D_44F4_iterK_f, D_44F4_iterL_t, D_44F4_iterL_p;
extern char D_44F4_iterL_f, D_44F4_iterM_t, D_44F4_iterM_p, D_44F4_iterM_f, D_44F4_iterN_t, D_44F4_iterN_p, D_44F4_iterN_f, D_44F4_iterO_t;
extern char D_44F4_iterO_p, D_44F4_iterO_f, D_44F4_iterP_t, D_44F4_iterP_p, D_44F4_iterP_f, D_44F4_iterQ_t, D_44F4_iterQ_p, D_44F4_iterQ_f;
extern char D_44F4_iterR_t, D_44F4_iterR_p, D_44F4_iterS_t, D_44F4_iterS_p, D_44F4_iterT_t, D_44F4_iterT_p, D_44F4_iterU_t, D_44F4_iterU_p;
extern char D_44F4_iterV_t, D_44F4_iterV_p, D_44F4_iterW_t, D_44F4_iterW_p, D_44F4_iterX_t, D_44F4_iterX_p, D_44F4_iterY_t, D_44F4_iterY_p;
extern char D_44F4_iterY_f, D_44F4_iterZ_t, D_44F4_iterZ_p, D_44F4_iterAA_t, D_44F4_iterAA_p, D_44F4_iterBB_t, D_44F4_iterBB_p, D_44F4_iterCC_t;
extern char D_44F4_iterCC_p, D_44F4_iterDD_t, D_44F4_iterDD_p, D_44F4_iterDD_f, D_44F4_iterEE_t, D_44F4_iterEE_p, D_44F4_iterEE_f, D_44F4_iterFF_t;
extern char D_44F4_iterFF_p, D_44F4_iterFF_f, D_44F4_iterGG_t, D_44F4_iterGG_p, D_44F4_iterHH_t, D_44F4_iterHH_p, D_44F4_iterII_t, D_44F4_iterII_p;
extern char D_44F4_iterJJ_t, D_44F4_iterJJ_p, D_44F4_iterKK_t, D_44F4_iterKK_p, D_44F4_iterLL_t, D_44F4_iterLL_p, D_44F4_iterMM_t, D_44F4_iterMM_p;
extern char D_44F4_iterNN_t, D_44F4_iterNN_p;
void *SnowAI_ctor(char *a0, int a1, int a2) {
     




















    typedef struct { char *p; } S;
    volatile int pad_e4;   
    S slot_0;              
    S slot_A;
    S slot_B;
    S slot_C;
    S slot_D;
    S slot_E;
    S slot_F;
    S slot_G;
    S slot_H;
    S slot_I;
    S slot_J;
    S slot_K;
    S slot_L;
    S slot_M;
    S slot_N;
    S slot_O;
    S slot_P;
    S slot_Q;
    S slot_R;
    S slot_S;
    S slot_T;
    S slot_U;
    S slot_V;
    S slot_W;
    S slot_X;
    S slot_Y;
    S slot_Z;
    S slot_AA;
    S slot_BB;
    S slot_CC;
    S slot_DD;
    S slot_EE;
    S slot_FF;
    S slot_GG;
    S slot_HH;
    S slot_II;
    S slot_JJ;
    S slot_KK;
    S slot_LL;
    S slot_MM;
    S slot_NN;             
    char *v1;              
    char *s1;              
    char *s0;              
    volatile int pad_30;   
    S marsh;               
    S *s2 = &marsh;        

     
    if (a0 == ((void*)0) ) {
        a0 = (char*)D_802C676C (0x4E0);
        if (a0 == ((void*)0) ) goto epi;
    }

     
    D_802C676C (a0, (char*)&D_00000000 + 0x6D0 );
    ((Node *)(a0)) ->vptr = (char *)&D_00000000;

     
    s1 = a0 + 0xE4;
    if (s1 == ((void*)0) ) {
        s1 = (char*)D_802C676C (0x3E0);
        if (s1 == ((void*)0) ) goto finalize;
    }

     
    v1 = s1;
    if (v1 == ((void*)0) ) {
        v1 = (char*)D_802C676C (8);
        if (v1 == ((void*)0) ) goto skip_head;
    }
    ((SnowAIParms *)v1)->name = (char*)&D_00000000 + 0x6D8 ;
    ((SnowAIParms *)v1)->unk04 = 0;
skip_head:

    {
        extern char D_44F4_iter0,
                    D_44F4_iterA, D_44F4_iterB, D_44F4_iterC, D_44F4_iterD,
                    D_44F4_iterE, D_44F4_iterF, D_44F4_iterG, D_44F4_iterH,
                    D_44F4_iterI, D_44F4_iterJ, D_44F4_iterK, D_44F4_iterL,
                    D_44F4_iterM, D_44F4_iterN, D_44F4_iterO, D_44F4_iterP,
                    D_44F4_iterQ, D_44F4_iterR, D_44F4_iterS, D_44F4_iterT,
                    D_44F4_iterU, D_44F4_iterV, D_44F4_iterW, D_44F4_iterX,
                    D_44F4_iterY, D_44F4_iterZ, D_44F4_iterAA, D_44F4_iterBB,
                    D_44F4_iterCC, D_44F4_iterDD, D_44F4_iterEE, D_44F4_iterFF,
                    D_44F4_iterGG, D_44F4_iterHH, D_44F4_iterII, D_44F4_iterJJ,
                    D_44F4_iterKK, D_44F4_iterLL, D_44F4_iterMM, D_44F4_iterNN;
         

 





 
 
 
 
 
 
 
 
 
 
 
 

        slot_0.p = *(char**)((char*)& D_44F4_iter0 + 0x6E8  + 4 * (  0 + 0));         *s2 = slot_0;         s0 = (char *)&((SnowAIParms *)s1)->parm[  0 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_0;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iter0 + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iter0 + 0x9C)); skip_0:;     
        slot_A.p = *(char**)((char*)& D_44F4_iterA + 0x6E8  + 4 * (  0 + 1));         *s2 = slot_A;         s0 = (char *)&((SnowAIParms *)s1)->parm[  0 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_A;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterA + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterA + 0xA0)); skip_A:;     
        slot_B.p = *(char**)((char*)& D_44F4_iterB + 0x6E8  + 4 * (  0 + 2));         *s2 = slot_B;         s0 = (char *)&((SnowAIParms *)s1)->parm[  0 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_B;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterB + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterB + 0xA4)); skip_B:;     
        slot_C.p = *(char**)((char*)&                                D_44F4_iterC + 0x6E8  + 4 * (  3 + 0));         *s2 = slot_C;         s0 = (char *)&((SnowAIParms *)s1)->parm[  3 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_C;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                D_44F4_iterC + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( -800.0f); skip_C:;     
        slot_D.p = *(char**)((char*)& D_44F4_iterD + 0x6E8  + 4 * (  3 + 1));         *s2 = slot_D;         s0 = (char *)&((SnowAIParms *)s1)->parm[  3 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_D;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterD + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterD + 0xA8)); skip_D:;     
        slot_E.p = *(char**)((char*)& D_44F4_iterE + 0x6E8  + 4 * (  3 + 2));         *s2 = slot_E;         s0 = (char *)&((SnowAIParms *)s1)->parm[  3 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_E;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterE + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterE + 0xAC)); skip_E:;     
        slot_F.p = *(char**)((char*)&                               D_44F4_iterF + 0x6E8  + 4 * (  6 + 0));         *s2 = slot_F;         s0 = (char *)&((SnowAIParms *)s1)->parm[  6 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_F;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                               D_44F4_iterF + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( -4000.0f); skip_F:;     
        slot_G.p = *(char**)((char*)&                               D_44F4_iterG + 0x6E8  + 4 * (  6 + 1));         *s2 = slot_G;         s0 = (char *)&((SnowAIParms *)s1)->parm[  6 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_G;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                               D_44F4_iterG + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( -8000.0f); skip_G:;     
        slot_H.p = *(char**)((char*)& D_44F4_iterH + 0x6E8  + 4 * (  6 + 2));         *s2 = slot_H;         s0 = (char *)&((SnowAIParms *)s1)->parm[  6 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_H;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterH + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterH + 0xB0)); skip_H:;     
        slot_I.p = *(char**)((char*)& D_44F4_iterI + 0x6E8  + 4 * (  9 + 0));         *s2 = slot_I;         s0 = (char *)&((SnowAIParms *)s1)->parm[  9 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_I;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterI + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterI + 0xB4)); skip_I:;     
        slot_J.p = *(char**)((char*)& D_44F4_iterJ + 0x6E8  + 4 * (  9 + 1));         *s2 = slot_J;         s0 = (char *)&((SnowAIParms *)s1)->parm[  9 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_J;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterJ + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterJ + 0xB8)); skip_J:;     
        slot_K.p = *(char**)((char*)& D_44F4_iterK + 0x6E8  + 4 * (  9 + 2));         *s2 = slot_K;         s0 = (char *)&((SnowAIParms *)s1)->parm[  9 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_K;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterK + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterK + 0xBC)); skip_K:;     
        slot_L.p = *(char**)((char*)& D_44F4_iterL + 0x6E8  + 4 * (  12 + 0));         *s2 = slot_L;         s0 = (char *)&((SnowAIParms *)s1)->parm[  12 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_L;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterL + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterL + 0xC0)); skip_L:;     
        slot_M.p = *(char**)((char*)& D_44F4_iterM + 0x6E8  + 4 * (  12 + 1));         *s2 = slot_M;         s0 = (char *)&((SnowAIParms *)s1)->parm[  12 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_M;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterM + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterM + 0xC4)); skip_M:;     
        slot_N.p = *(char**)((char*)& D_44F4_iterN + 0x6E8  + 4 * (  12 + 2));         *s2 = slot_N;         s0 = (char *)&((SnowAIParms *)s1)->parm[  12 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_N;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterN + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterN + 0xC8)); skip_N:;     
        slot_O.p = *(char**)((char*)& D_44F4_iterO + 0x6E8  + 4 * (  15 + 0));         *s2 = slot_O;         s0 = (char *)&((SnowAIParms *)s1)->parm[  15 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_O;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterO + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterO + 0xCC)); skip_O:;     
        slot_P.p = *(char**)((char*)& D_44F4_iterP + 0x6E8  + 4 * (  15 + 1));         *s2 = slot_P;         s0 = (char *)&((SnowAIParms *)s1)->parm[  15 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_P;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterP + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterP + 0xD0)); skip_P:;     
        slot_Q.p = *(char**)((char*)& D_44F4_iterQ + 0x6E8  + 4 * (  15 + 2));         *s2 = slot_Q;         s0 = (char *)&((SnowAIParms *)s1)->parm[  15 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_Q;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterQ + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterQ + 0xD4)); skip_Q:;     
        slot_R.p = *(char**)((char*)&                                D_44F4_iterR + 0x6E8  + 4 * (  18 + 0));         *s2 = slot_R;         s0 = (char *)&((SnowAIParms *)s1)->parm[  18 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_R;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                D_44F4_iterR + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 1200.0f); skip_R:;     
        slot_S.p = *(char**)((char*)&                                D_44F4_iterS + 0x6E8  + 4 * (  18 + 1));         *s2 = slot_S;         s0 = (char *)&((SnowAIParms *)s1)->parm[  18 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_S;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                D_44F4_iterS + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 1200.0f); skip_S:;     
        slot_T.p = *(char**)((char*)&                                D_44F4_iterT + 0x6E8  + 4 * (  18 + 2));         *s2 = slot_T;         s0 = (char *)&((SnowAIParms *)s1)->parm[  18 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_T;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                D_44F4_iterT + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 1200.0f); skip_T:;     
        slot_U.p = *(char**)((char*)&                                  D_44F4_iterU + 0x6E8  + 4 * (  21 + 0));         *s2 = slot_U;         s0 = (char *)&((SnowAIParms *)s1)->parm[  21 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_U;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                  D_44F4_iterU + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 60.0f); skip_U:;     
        slot_V.p = *(char**)((char*)&                                  D_44F4_iterV + 0x6E8  + 4 * (  21 + 1));         *s2 = slot_V;         s0 = (char *)&((SnowAIParms *)s1)->parm[  21 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_V;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                  D_44F4_iterV + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 60.0f); skip_V:;     
        slot_W.p = *(char**)((char*)&                                  D_44F4_iterW + 0x6E8  + 4 * (  21 + 2));         *s2 = slot_W;         s0 = (char *)&((SnowAIParms *)s1)->parm[  21 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_W;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                  D_44F4_iterW + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 60.0f); skip_W:;     
        slot_X.p = *(char**)((char*)&                                   D_44F4_iterX + 0x6E8  + 4 * (  24 + 0));         *s2 = slot_X;         s0 = (char *)&((SnowAIParms *)s1)->parm[  24 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_X;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                   D_44F4_iterX + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 1.5f); skip_X:;     
        slot_Y.p = *(char**)((char*)& D_44F4_iterY + 0x6E8  + 4 * (  24 + 1));         *s2 = slot_Y;         s0 = (char *)&((SnowAIParms *)s1)->parm[  24 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_Y;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterY + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterY + 0xD8)); skip_Y:;     
        slot_Z.p = *(char**)((char*)&                                   D_44F4_iterZ + 0x6E8  + 4 * (  24 + 2));         *s2 = slot_Z;         s0 = (char *)&((SnowAIParms *)s1)->parm[  24 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_Z;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                   D_44F4_iterZ + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 1.5f); skip_Z:;     
        slot_AA.p = *(char**)((char*)&                                D_44F4_iterAA + 0x6E8  + 4 * ( 27 + 0));         *s2 = slot_AA;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 27 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_AA;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                D_44F4_iterAA + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 2000.0f); skip_AA:;    
        slot_BB.p = *(char**)((char*)&                                D_44F4_iterBB + 0x6E8  + 4 * ( 27 + 1));         *s2 = slot_BB;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 27 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_BB;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                D_44F4_iterBB + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 2000.0f); skip_BB:;    
        slot_CC.p = *(char**)((char*)&                                D_44F4_iterCC + 0x6E8  + 4 * ( 27 + 2));         *s2 = slot_CC;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 27 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_CC;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                D_44F4_iterCC + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 2000.0f); skip_CC:;    
        slot_DD.p = *(char**)((char*)& D_44F4_iterDD + 0x6E8  + 4 * ( 30 + 0));         *s2 = slot_DD;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 30 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_DD;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterDD + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterDD + 0xDC)); skip_DD:;   
        slot_EE.p = *(char**)((char*)& D_44F4_iterEE + 0x6E8  + 4 * ( 30 + 1));         *s2 = slot_EE;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 30 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_EE;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterEE + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterEE + 0xE0)); skip_EE:;   
        slot_FF.p = *(char**)((char*)& D_44F4_iterFF + 0x6E8  + 4 * ( 30 + 2));         *s2 = slot_FF;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 30 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_FF;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)& D_44F4_iterFF + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( *(float*)((char*)&D_44F4_iterFF + 0xE4)); skip_FF:;   
        slot_GG.p = *(char**)((char*)&                                 D_44F4_iterGG + 0x6E8  + 4 * ( 33 + 0));         *s2 = slot_GG;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 33 + 0];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_GG;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                 D_44F4_iterGG + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 240.0f); skip_GG:;    
        slot_HH.p = *(char**)((char*)&                                 D_44F4_iterHH + 0x6E8  + 4 * ( 33 + 1));         *s2 = slot_HH;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 33 + 1];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_HH;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                 D_44F4_iterHH + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 240.0f); skip_HH:;    
        slot_II.p = *(char**)((char*)&                                 D_44F4_iterII + 0x6E8  + 4 * ( 33 + 2));         *s2 = slot_II;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 33 + 2];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_II;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                 D_44F4_iterII + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 240.0f); skip_II:;    
        slot_JJ.p = *(char**)((char*)&                                 D_44F4_iterJJ + 0x6E8  + 4 * ( 33 + 3));         *s2 = slot_JJ;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 33 + 3];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_JJ;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                 D_44F4_iterJJ + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 240.0f); skip_JJ:;    
        slot_KK.p = *(char**)((char*)&                                 D_44F4_iterKK + 0x6E8  + 4 * ( 33 + 4));         *s2 = slot_KK;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 33 + 4];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_KK;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                 D_44F4_iterKK + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 240.0f); skip_KK:;    
        slot_LL.p = *(char**)((char*)&                                 D_44F4_iterLL + 0x6E8  + 4 * ( 33 + 5));         *s2 = slot_LL;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 33 + 5];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_LL;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                 D_44F4_iterLL + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 240.0f); skip_LL:;    
        slot_MM.p = *(char**)((char*)&                                 D_44F4_iterMM + 0x6E8  + 4 * ( 33 + 6));         *s2 = slot_MM;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 33 + 6];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_MM;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                 D_44F4_iterMM + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 240.0f); skip_MM:;    
        slot_NN.p = *(char**)((char*)&                                 D_44F4_iterNN + 0x6E8  + 4 * ( 33 + 7));         *s2 = slot_NN;         s0 = (char *)&((SnowAIParms *)s1)->parm[ 33 + 7];         if (s0 == ((void*)0) ) {             s0 = (char*)D_802C676C (0x18);             if (s0 == ((void*)0) ) goto skip_NN;         }         D_802C676C (s0, s1, *s2, 1);         ((SnowAIParm *)s0)->vptr = (char*)&                                 D_44F4_iterNN + 0x3C8 ;         ((SnowAIParm *)s0)->unk14 = 0;         ((SnowAIParm *)s0)->value = ( 240.0f); skip_NN:;    

    }
finalize:;

     













     











     







































































































































































































































































































































































     




























     


















    {
        extern char D_44F4_st12_E8, D_44F4_st12_EC, D_44F4_st12_F0,
                    D_44F4_st12_F4, D_44F4_st12_F8;
        *(int*)&((SnowAI *)(a0)) ->rider = a1;
        ((SnowAI *)(a0)) ->level = a2;
        ((SnowAI *)(a0)) ->lookAhead = 0.0f;
        ((SnowAI *)(a0)) ->turnGain = *(float*)((char*)&D_44F4_st12_E8 + 0xE8 );
        ((SnowAI *)(a0)) ->turnSpeedRef = 500.0f;
        ((SnowAI *)(a0)) ->minSpeed = 70.0f;
        ((SnowAI *)(a0)) ->crouchSteerRef = 230.0f;
        ((SnowAI *)(a0)) ->stallYaw = *(float*)((char*)&D_44F4_st12_EC + 0xEC );
        ((SnowAI *)(a0)) ->reachTime = 12.0f;
        ((SnowAI *)(a0)) ->dParmsSteer = *(float*)((char*)&D_44F4_st12_F0 + 0xF0 );
        ((SnowAI *)(a0)) ->dParmsSteerScale = 2.0f;
        ((SnowAI *)(a0)) ->aimRange = 50.0f;
        ((SnowAI *)(a0)) ->rivalPathTime = 20.0f;
        ((SnowAI *)(a0)) ->rivalPathDist = 500.0f;
        ((SnowAI *)(a0)) ->weaveLeadTime = 15.0f;
        ((SnowAI *)(a0)) ->weaveSideScale = *(float*)((char*)&D_44F4_st12_F4 + 0xF4 );
        ((SnowAI *)(a0)) ->weaveLead = *(float*)((char*)&D_44F4_st12_F8 + 0xF8 );
        ((SnowAI *)(a0)) ->leadLimit = 1000.0f;
        ((SnowAI *)(a0)) ->unk4DC = 3;
    }
epi:
    return a0;
}


void SnowAI_reset(SnowAI *self) {
    self->unk34 = 0;
    self->unk44 = 0;
    self->unk48 = 0;
    self->unk4C = 0;
    self->unk50 = 0;
    self->unk54 = 0;
    self->unk58 = 0;
    self->targetNode = 0;
    self->aiState = 0;
    self->finishTimer = 0;
    self->modeFlags = 0;
    self->unk6C = 0;
    self->aimMode = 0;
    self->lastMarker = 0;
    self->sideBlock = 0;
    self->scaleTimer = 0;
    self->initPending = 1;
    self->unk38 = 0.0f;
    self->unk3C = 0.0f;
}

void SnowAI_dtor(int *a0, int a1) {
    if (a0 == 0) return;
    ((Node *)(a0)) ->vptr = (char *)&D_00000000;
    if (a1 & 1) {
        game_uso_func_00000000 ( );
    }
}

void SnowAI_readParms(char *a0) {
    game_uso_func_00000000 (a0 + 0xE4);
}

 





void SnowAI_update(char *a0) {
}

 




void SnowAI_steer(int *a0) {
    volatile int *ret = a0;
}

 
typedef struct { float x, y, z; } V3_6A30;

 







void SnowAI_finishRun(int *a0) {
    volatile int *ret = a0;
}

 















void RiderAnim_startTimeout_00011024();
void SnowAI_applyStickInput();
void SnowAI_timeoutRun(int *a0) {
    V3_6A30 added_vec;    
    V3_6A30 base_vec;     
    int dispatch_arg;     
    register float rx;    
    V3_6A30 tmp_vec;      
    register float ry, rz;       
    V3_6A30 scaled_vec;   
    int pad[8];           
    register char *p;     
    register int timer;

    (void)pad;
     

    base_vec = *(V3_6A30 *)&((SnowAI *)a0)->rider->dnode.vqs.trans;
    dispatch_arg = 0;     

     
    p = (char *)((SnowAI *)a0)->rider;
    {
        register float scale;      
        scale = ((SnowAI *)a0)->lookAhead;
        p += 0x318;                


        rx = ((float *)p)[0] * scale;
        ry = ((float *)p)[1] * scale;
        rz = ((float *)p)[2] * scale;
        if (p) {}                  
        scaled_vec.x = rx;
        scaled_vec.y = ry;
        scaled_vec.z = rz;
        p = (char*)&tmp_vec;       
        *(V3_6A30*)p = scaled_vec;
        added_vec = *(V3_6A30*)p;
    }

    base_vec.x = base_vec.x + added_vec.x;
    base_vec.y = base_vec.y + added_vec.y;
    base_vec.z = base_vec.z + added_vec.z;

    if (((SnowAI *)a0)->unk6C == 0) {
        dispatch_arg = 0x10;
    }
    p = (char *)((SnowAI *)a0)->rider;
    if (((SnowBoarder *)p)->contactCount != 0 && ((SnowBoarder *)p)->raceResult != 0) {
        timer = ((SnowAI *)a0)->finishTimer;
        if (timer < 60) {
            if (((SnowBoarder *)p)->dnode.speed <= 30.0f) {
                RiderAnim_startTimeout_00011024(((SnowBoarder *)p)->anim, dispatch_arg);
                ((SnowAI *)(a0)) ->finishTimer = 61;
            } else {
                ((SnowAI *)(a0)) ->finishTimer = timer + 1;
            }
        } else if (timer == 60) {
            RiderAnim_startTimeout_00011024(((SnowBoarder *)p)->anim, dispatch_arg);
            ((SnowAI *)(a0)) ->finishTimer = 61;
        }
    }

    SnowAI_applyStickInput(a0, dispatch_arg);
}

void SnowAI_onWin(int *a0) {
    int r;
    D_802C676C (a0);
    r = D_802C676C (a0);
    ((SnowAI *)(a0)) ->atFinish =r;
    if (r == 0) return;
    ((SnowAI *)(a0)) ->targetNode = D_802C676C (a0);
}

void SnowAI_onLose(int *a0) {
    int v;
    if (((SnowAI *)(a0)) ->rider->controller != 2) {
        D_802C676C ( );
        v = D_802C676C (a0);
        ((SnowAI *)(a0)) ->atFinish =v;
        if (v != 0) {
            ((SnowAI *)(a0)) ->targetNode = D_802C676C (a0);
        }
    }
}

void SnowAI_onTimeout(int *a0) {
    ((SnowAI *)(a0)) ->aiState = 2;
    ((SnowAI *)(a0)) ->finishTimer = 0;
}

 








extern char game_uso_D_807FEB38;
extern int SnowAI_findNearestMarker_0000A374();
typedef struct { int a; } S1_6F38;
int SnowAI_isAtFinish(int *a0) {
    S1_6F38 v;
    volatile char pad[0x18];
    int *r;
    int *q;
    int b;

    v.a = **(int **)((char *)&game_uso_D_807FEB38 + 0x548 );
    r = (int *)SnowAI_findNearestMarker_0000A374(a0, v, ((SnowAI *)(a0)) ->rider->dnode.vqs.trans);

    b = (r != 0);
    if (b) {
        b = ((((CourseMarker *)r)->parms.flg.value & 0x400 ) != 0);
        if (!b) {
            q = (int *)((CourseMarker *)r)->link;
            b = (q != 0);
            if (b) {
                b = ((((CourseMarker *)q)->parms.flg.value & 0x400 ) != 0);
            }
        }
    }
    return b;
}

 







int SnowAI_pickFinishBranch(int *a0) {
    volatile int *ret = a0;
    return 0;
}

void SnowAI_enterFinish(int *a0) {
    ((SnowAI *)(a0)) ->aiState = 1;
    ((SnowAI *)(a0)) ->finishTimer = 0;
    if (((SnowAI *)(a0)) ->scaleTimer > 0) {
        D_802C676C (a0);
        ((SnowAI *)(a0)) ->scaleTimer = 0;
    }
}

 






void SnowAI_recoverStuck(int *a0) {
    volatile int *ret = a0;
}

void SnowAI_enterRecover(void *a0) {
    ((SnowAI *)(a0)) ->aiState = 3;
    D_802C676C (a0);
}


void SnowAI_scaleRiderParms(char *a0) {
    char *t;
    char *table;
    char *q;
    char *fc;

    t = a0;
    while (0) { t += 1; }
    table = (char *)((SnowAI *)(a0)) ->rider;
    t = table;
    if (1) { t += 0x758; }  
    ((SnowAI *)(a0)) ->savedMax = ((SnowBParm *)t)->value;
    t = table;
    if (1) { t += 0x6F8; }  
    ((SnowAI *)(a0)) ->savedNts = ((SnowBParm *)t)->value;
    t = table;
    if (1) { t += 0x6E0; }  
    ((SnowAI *)(a0)) ->savedDts = ((SnowBParm *)t)->value;
    t = table;
    if (1) { t += 0x498; }  
    fc = a0;
    if (1) { fc += 0x35C; }  
    ((SnowAI *)(a0)) ->savedNbf = ((SnowBParm *)t)->value;
    ((SnowBoarder *)table)->parms.max.value = ((SnowAI *)(a0)) ->parms.parm[24 ].value * ((SnowAI *)(a0)) ->savedMax;

    t = (char *)&((SnowAI *)(a0)) ->rider->parms.nts;
    ((SnowBParm *)t)->value = ((SnowAI *)(a0)) ->parms.parm[24  + 2].value * ((SnowAI *)(a0)) ->savedNts;

    t = (char *)&((SnowAI *)(a0)) ->rider->parms.dts;
    ((SnowBParm *)t)->value = ((SnowAIParm *)fc)->value * ((SnowAI *)(a0)) ->savedDts;

    table = (char *)((SnowAI *)(a0)) ->rider;
    q = table;
    if (1) { q += 0x4C8; }  
    t = table;
    if (1) { t += 0x498; }  
    ((SnowBParm *)t)->value = ((SnowBParm *)q)->value;
}

 


















 
void SnowAI_restoreRiderParms(char *a0) {
    SnowBParm *t;
    t = &((SnowAI *)a0)->rider->parms.max;
    t->value = ((SnowAI *)(a0)) ->savedMax;
    t = &((SnowAI *)a0)->rider->parms.nts;
    t->value = ((SnowAI *)(a0)) ->savedNts;
    t = &((SnowAI *)a0)->rider->parms.dts;
    t->value = ((SnowAI *)(a0)) ->savedDts;
    t = &((SnowAI *)a0)->rider->child.parms.nbf;
    t->value = ((SnowAI *)(a0)) ->savedNbf;
}

 
void SnowAI_scaleRiderMax(char *a0) {
     
    SnowBParm *t = &((SnowAI *)a0)->rider->parms.max;
    t->value = ((SnowAI *)a0)->parms.parm[24  + 1].value * *(float *)&((SnowAI *)a0)->savedMax;
}


 


















extern char game_uso_D_807FEC28;






void SnowAI_applyStickInput(char *a0, int arg) {
    float zero = 0.0f;
    float fx = zero;
    float fy = zero;
    int ret = 0;
    int moving = 0;
    int m;
    int t;
    int n;
    float f, g;

    n = (*(int *)((char *)(a0) + ( 0x50))) ;
    if (n > 0) (*(int *)((char *)(a0) + ( 0x50)))  = n - 1;
    if ((*(int *)((char *)(a0) + ( 0x48)))  > 0) (*(int *)((char *)(a0) + ( 0x48))) --;
    m = (*(int *)((char *)(a0) + ( 0x6C))) ;
    if (m == 0) {
        if (arg & 0x10) {
            if ((*(int *)((char *)((*(int *)((char *)(a0) + ( 0x30)))) + ( 0x938)))   != 0) {
                fy = -1.0f;
                if ((*(float *)((char *)(a0) + ( 0x38)))  >= zero) (*(float *)((char *)(a0) + ( 0x3C)))  = 1.0f;
                else (*(float *)((char *)(a0) + ( 0x3C)))  = -1.0f;
                if (1) {}
            }
        } else if ((arg & 1) && (*(int *)((char *)(a0) + ( 0x48)))  == 0) {
            (*(int *)((char *)(a0) + ( 0x6C)))  = m | 1;
            (*(int *)((char *)(a0) + ( 0x44)))  = 91;
        } else if (arg & 0x40) {
            (*(int *)((char *)(a0) + ( 0x6C)))  = m | 0x40;
            (*(int *)((char *)(a0) + ( 0x44)))  = 13;
        } else if ((arg & 4) && (*(int *)((char *)(a0) + ( 0x50)))  == 0) {
            fy = 1.0f;
            moving = 1;
            (*(int *)((char *)(a0) + ( 0x50)))  = 8;
        } else if (arg & 0x20) {
            (*(int *)((char *)(a0) + ( 0x6C)))  = m | 0x20;
            (*(int *)((char *)(a0) + ( 0x4C)))  = 38;
            f = (*(float *)((char *)((*(int *)((char *)(a0) + ( 0x30)))) + ( 0xB4))) ;
            g = (f < zero) ? -f : f;
            (*(int *)((char *)(a0) + ( 0x58)))  = (unsigned int)(int)g % 9;
            (*(int *)((char *)(a0) + ( 0x44)))  = 60;
        } else if (arg & 0x80) {
            (*(int *)((char *)(a0) + ( 0x6C)))  = m | 0x80;
            (*(int *)((char *)(a0) + ( 0x4C)))  = 0;
            (*(int *)((char *)(a0) + ( 0x44)))  = 2;
        } else if (arg & 8) {
            if ((*(int *)((char *)((*(int *)((char *)(a0) + ( 0x30)))) + ( 0x938)))   != 0) fy = -1.0f;
        } else if (arg & 2) {
            if ((*(int *)((char *)((*(int *)((char *)(a0) + ( 0x30)))) + ( 0x938)))   != 0) ret = 0x400;
        } else if (arg & 0x100) {
            (*(int *)((char *)(a0) + ( 0x6C)))  = m | 0x100;
            (*(int *)((char *)(a0) + ( 0x44)))  = 104;
        }
    }
    m = (*(int *)((char *)(a0) + ( 0x6C))) ;
    if (m & 1) {
        ret |= 0x500;
        m = (*(int *)((char *)(a0) + ( 0x44)))  - 1;
        (*(int *)((char *)(a0) + ( 0x44)))  = m;
        if (m == 0) (*(int *)((char *)(a0) + ( 0x6C)))  &= ~0xA1;
    } else if (m & 0x40) {
        m = (*(int *)((char *)(a0) + ( 0x44)))  - 1;
        (*(int *)((char *)(a0) + ( 0x44)))  = m;
        if (m == 0) (*(int *)((char *)(a0) + ( 0x6C)))  &= ~0x40;
        else ret |= 0x100;
    } else if (m & 0x20) {
        if ((*(int *)((char *)((*(int *)((char *)(a0) + ( 0x30)))) + ( 0x938)))   == 0) {
            arg = (*(int *)((char *)(a0) + ( 0x4C))) ;
            moving = 1;
            ret |= 0x200;
            if (arg >= 31) {
                { int i = (*(int *)((char *)(a0) + ( 0x58))) ; float *tp = (float *)((char *)&game_uso_D_807FEC28 + 0x638); if (1) {} fx = tp[i * 2]; fy = tp[i * 2 + 1]; }
            }
            (*(int *)((char *)(a0) + ( 0x4C)))  = arg - 1;
        }
        if ((*(int *)((char *)(a0) + ( 0x4C)))  != 0) {
            m = (*(int *)((char *)(a0) + ( 0x44)))  - 1;
            (*(int *)((char *)(a0) + ( 0x44)))  = m;
            if (m != 0) goto end;
        }
        (*(int *)((char *)(a0) + ( 0x6C)))  &= ~0x20;
    } else if (m & 0x80) {
        int lim;
        arg = (*(int *)((char *)(a0) + ( 0x4C))) ;
        moving = 1;
        if (arg < 8 || (arg >= (n = (*(int *)((char *)(a0) + ( 0x4DC))) ) + 8 && arg < n + 16) || arg >= n + n + 16) {
            n = (*(int *)((char *)(a0) + ( 0x4DC))) ;
            m = n + n;
            if (arg >= m + 16) {
                (*(int *)((char *)(a0) + ( 0x58)))  = arg - m - 16;
                if (arg >= m + 21 && arg <= m + 23) ret |= 0x1600;
            } else if (arg >= n + 8) {
                (*(int *)((char *)(a0) + ( 0x58)))  = arg - n - 8;
                if (arg >= n + 13 && arg <= n + 15) ret |= 0x1200;
            } else {
                (*(int *)((char *)(a0) + ( 0x58)))  = arg;
                if (arg >= 5 && arg < 8) ret |= 0x1000;
            }
            { int i = (*(int *)((char *)(a0) + ( 0x58))) ; float *tp = (float *)((char *)&game_uso_D_807FEC28 + 0x638); if (1) {} fx = tp[i * 2]; fy = tp[i * 2 + 1]; }
        }
        (*(int *)((char *)(a0) + ( 0x4C)))  = arg + 1;
        lim = ((*(int *)((char *)(a0) + ( 0x44)))  == 0) ? 8 : ((*(int *)((char *)(a0) + ( 0x44)))  == 1) ? (*(int *)((char *)(a0) + ( 0x4DC)))  + 16 : ((*(int *)((char *)(a0) + ( 0x4DC)))  + (*(int *)((char *)(a0) + ( 0x4DC))) ) + 24;
        if (arg + 1 >= lim) (*(int *)((char *)(a0) + ( 0x6C)))  &= ~0x80;
    } else if (m & 0x100) {
        n = (*(int *)((char *)(a0) + ( 0x44))) ;
        m = n - 1;
        if (n >= 93) {
            fy = 1.0f;
            moving = 1;
        } else if (n >= 73) {
            moving = 1;
        } else if (n >= 61) {
            ret |= 0x100;
        }
        (*(int *)((char *)(a0) + ( 0x44)))  = m;
        if (m == 0) (*(int *)((char *)(a0) + ( 0x6C)))  &= ~0x100;
    }
end:
    if (moving) {
        (*(float *)((char *)(a0) + ( 0x38)))  = zero;
    } else {
        if ((*(float *)((char *)(a0) + ( 0x3C)))  > 1.0) (*(float *)((char *)(a0) + ( 0x3C)))  = 1.0f;
        else if ((*(float *)((char *)(a0) + ( 0x3C)))  < -1.0) (*(float *)((char *)(a0) + ( 0x3C)))  = -1.0f;
        fx = (*(float *)((char *)(a0) + ( 0x38)))  = (*(float *)((char *)(a0) + ( 0x3C))) ;
    }
    {
        char *o = (char *)(*(int *)((char *)((*(int *)((char *)(a0) + ( 0x30)))) + ( 0x800))) ;
        (*(float *)((char *)(o) + ( 0x44)))  = fx;
        (*(float *)((char *)(o) + ( 0x48)))  = fy;
        o = (char *)(*(int *)((char *)((*(int *)((char *)(a0) + ( 0x30)))) + ( 0x800))) ;
        (*(int *)((char *)(o) + ( 0x40)))  = ret;
    }

}




 













float SnowAI_rivalLeadZ(int *a0) {
    SnowBoarder *v0 = ((SnowAI *)(a0)) ->rider;
    SnowBoarder *v1 = v0->rival;
    float ret;
    if (v1 != 0) {
        ret = v1->dnode.vqs.trans[2] - v0->dnode.vqs.trans[2];
    } else {
        ret = 0.0f;
    }
    return ret;
}

 

















extern void game_uso_func_047B1C();
 
typedef struct { int a; } S1_7ACC;
int SnowAI_updateMarker(int *a0, int *a1, int arg3, int *arg4) {
    S1_7ACC av;
    int *r;
    int v;
    int *inner;

    *a1 = 0;
    v = ((SnowAI *)(a0)) ->targetNode;
    if (v < 0 || v >= 12) {
        game_uso_func_047B1C ((char*)&D_00000000 + 0x78C ,
                         (char*)&D_00000000 + 0x7B0 , 0x609);
    }
    av.a = *(int*)(*(int*)((char*)&D_00000000 + 0x548  + ((SnowAI *)(a0)) ->targetNode * 4));
    r = (int*)SnowAI_findNearestMarker_0000A374(a0, av, arg3, arg4);
    if (r == 0) return 0;

    if (r != (int*)((SnowAI *)(a0)) ->lastMarker) {
        if (arg4 != 0) *arg4 = 1;
        ((SnowAI *)(a0)) ->lastMarker = r;
    } else {
        if (arg4 != 0) *arg4 = 0;
    }

    inner = (int*)((CourseMarker *)r)->link;
    *a1 = (int)inner;
    ((SnowAI *)(a0)) ->rider->marker = (CourseMarker *)r;
    ((SnowAI *)(a0)) ->rider->markerLink = ((SnowAI *)(a0)) ->rider->marker->link;

    arg3 = (int)((SnowAI *)(a0)) ->rider->markerLink;
    if (arg3 != 0) {
        ((SnowAI *)(a0)) ->rider->linkDir.x =
            ((SnowAI *)(a0)) ->rider->dnode.vqs.trans[0] - ((CourseMarker *)arg3)->pos[0];
        ((SnowAI *)(a0)) ->rider->linkDir.y = 0.0f;
        inner = (int*)((SnowAI *)(a0)) ->rider->markerLink;
        ((SnowAI *)(a0)) ->rider->linkDir.z =
            ((SnowAI *)(a0)) ->rider->dnode.vqs.trans[2] - ((CourseMarker *)inner)->pos[2];
        game_uso_func_071028 ((Vec3 *)&((SnowAI *)(a0)) ->rider->linkDir);
    }

    return (int)r;
}

 




int SnowAI_aimAlongSegment(char *arg0, char *arg1, char *arg2, char *arg3,
                           char *arg4, f32 *arg5) {
    *arg5 = 3000.0f;
    return 0;
}

 






void *SnowAI_aimWeave(char *arg0) {
    *(volatile float *)arg0 = 1.1f;
    *(volatile float *)arg0 = 1.2f;
    *(volatile float *)arg0 = 1.3f;
    *(volatile float *)arg0 = 1.4f;
    *(volatile float *)arg0 = 1.6f;
    *(volatile float *)arg0 = 1.7f;
    *(volatile float *)arg0 = 1.8f;
    *(volatile float *)arg0 = 1.9f;
    return arg0;
}

 

 


int SnowAI_isRivalInPath_000097EC(char *a0) {
    return (int)((SnowAI *)(a0)) ->rider;
}

extern void game_uso_func_047B1C();
extern char game_uso_D_807FEDB8;
 
























int SnowAI_isInSegmentWidth(a0, a1, a2)
    int *a0;
    int *a1;
    int *a2;
{
    volatile int local_19C[3];
    float local_190[3];
    float local_184[3];
    volatile int local_178[3];
    volatile int local_16C[3];
    volatile int local_160[3];
    volatile int local_154[3];
    int   gap_150;
    float local_144[3];
    float local_138[3];
    float local_12C[3];
    float local_120[3];
    char pad_118[8];
    float *src_vec;
    char pad_F8[28];
    volatile int local_EC[3];
    char pad_E8[4];
    float local_DC[3];
    char pad_D0[12];
    int   local_C4[3];
    float local_B8[3];
    float scale0;
    float *delta_src;
    char pad_AC[4];
    volatile float local_A0[3];
    volatile int local_94[3];
    volatile float local_88[3];
    volatile int local_7C[3];
    char pad_78[4];
    volatile float local_6C[3];
    char pad_50[28];
    volatile int local_44[3];
    volatile float local_38[3];
    int *out;
    int *p;
    int * volatile *spill_a1 = &a1;
    float src_x, src_z;

    (void)gap_150;
    (void)pad_F8;
    (void)pad_E8;
    (void)pad_D0;
    (void)spill_a1;

    if (a2 == 0) {

        game_uso_func_047B1C (&game_uso_D_807FEDB8 + 0x7BC, &game_uso_D_807FEDB8 + 0x7C8, 0x623);
    }

    out = (int*)(unsigned)local_190;
    if (out == 0) {
        out = (int*)func_802C676C (0xC);
        if (out == 0) goto skip1;
    }
    {
        src_vec = 0; if (1) { src_vec = ((CourseMarker *)a2)->pos; }
        src_x = src_vec[0];
        src_z = src_vec[2];
        ((float*)out)[1] = 0.0f;
        ((float*)out)[2] = src_z;
        ((float*)out)[0] = src_x;
    }
skip1:;

    p = (int*)local_DC;
    out = p;
    if ((unsigned)out == 0) {
        out = (int*)func_802C676C (0xC);
        if (out == 0) goto skip2;
    }
    {
        delta_src = 0; if (1) { delta_src = ((CourseMarker *)a1)->pos; }
        src_x = local_190[0] - delta_src[0]; src_z = local_190[2] - delta_src[2];
        ((float*)out)[1] = 0.0f;
        ((float*)out)[2] = src_z;
        ((float*)out)[0] = src_x;

    }
skip2:;

    *(Tri3i *)local_EC = *(Tri3i *)p; *(Tri3i *)local_19C = *(Tri3i *)local_EC; *(Tri3i *)local_144 = *(Tri3i *)local_19C;

    if (1) { p = (int*)local_C4; } src_vec = (float*)p; if ((unsigned)src_vec == 0) {
        src_vec = (float*)func_802C676C (0xC);
        if (src_vec == 0) goto skip3;
    }
    {
        src_x = local_144[2];
        src_z = -local_144[0];
        ((float*)src_vec)[0] = src_x;
        ((float*)src_vec)[1] = 0.0f;
        ((float*)src_vec)[2] = src_z;
    }
skip3:;

    *(Tri3i *)local_EC = *(Tri3i *)p; *(Tri3i *)local_138 = *(Tri3i *)local_EC;
    game_uso_func_071028 ((Vec3 *)local_138);

    *(Tri3i *)local_12C = *(Tri3i *)local_138;
    scale0 = (((CourseMarker *)a1)->parms.wid.value) * (src_x = 250.0f) + 50.0f;
    local_12C[0] *= scale0;
    local_12C[1] *= scale0;
    local_12C[2] *= scale0;
    scale0 = 250.0f; scale0 *= (((CourseMarker *)a2)->parms.wid.value - ((CourseMarker *)a1)->parms.wid.value);
    local_138[0] *= scale0;
    local_138[1] *= scale0;
    local_138[2] *= scale0;

    src_vec = ((SnowAI *)(a0)) ->rider->dnode.vqs.trans;
    out = (int*)(unsigned)local_184;
    if (out == 0) {
        out = (int*)func_802C676C (0xC);
        if (out == 0) goto skip4;
    }
    {
        src_x = src_vec[0];
        src_z = src_vec[2];
        ((float*)out)[0] = src_x;
        ((float*)out)[1] = 0.0f;
        ((float*)out)[2] = src_z;
    }
skip4:;

    p = (int*)local_B8; out = p;
    if ((unsigned)out == 0) {
        out = (int*)func_802C676C (0xC);
        if (out == 0) goto skip5;
    }
    {
        delta_src = 0; if (1) { delta_src = ((CourseMarker *)a1)->pos; }
        src_x = local_184[0] - delta_src[0]; src_z = local_184[2] - delta_src[2];
        ((float*)out)[0] = src_x;
        ((float*)out)[1] = 0.0f;
        ((float*)out)[2] = src_z;
    }
skip5:;

    *(Tri3i *)local_EC = *(Tri3i *)p;
    *(Tri3i *)local_120 = *(Tri3i *)local_EC;
    do { p = (int*)local_A0; } while (0); out = p; if ((unsigned)out == 0) {
        out = (int*)func_802C676C (0xC);
        if (out == 0) goto skip6;
    }
    {
        src_x = local_138[0] + local_144[0];
        src_z = local_138[2] + local_144[2];
        ((float*)out)[0] = src_x;
        ((float*)out)[1] = 0.0f;
        ((float*)out)[2] = src_z;
    }
skip6:;

    *(Tri3i *)local_EC = *(Tri3i *)p;
    *(Tri3i *)local_178 = *(Tri3i *)local_EC;
    do { p = (int*)local_88; } while (0); out = p;
    if ((unsigned)out == 0) {
        out = (int*)func_802C676C (0xC);
        if (out == 0) goto skip7;
    }
    {
        src_x = local_120[0] - local_12C[0];
        src_z = local_120[2] - local_12C[2];
        ((float*)out)[0] = src_x;
        ((float*)out)[1] = 0.0f;
        ((float*)out)[2] = src_z;
    }
skip7:;
    *(Tri3i *)local_94 = *(Tri3i *)p;
    *(Tri3i *)local_16C = *(Tri3i *)local_94;
    do { p = (int*)local_6C; } while (0); out = p;
    if ((unsigned)out == 0) {
        out = (int*)func_802C676C (0xC);
        if (out == 0) goto skip8;
    }
    {
        src_x = local_144[0] - local_138[0];
        src_z = local_144[2] - local_138[2];
        ((float*)out)[0] = src_x;
        ((float*)out)[1] = 0.0f;
        ((float*)out)[2] = src_z;
    }
skip8:;
    *(Tri3i *)local_7C = *(Tri3i *)p;
    *(Tri3i *)local_160 = *(Tri3i *)local_7C;
    do { p = (int*)local_38; } while (0); out = p; if ((unsigned)out == 0) {
        out = (int*)func_802C676C (0xC);
        if (out == 0) goto skip9;
    }
    {
        src_x = local_12C[0] + local_120[0];
        src_z = local_12C[2] + local_120[2];
        ((float*)out)[0] = src_x;
        ((float*)out)[1] = 0.0f;
        ((float*)out)[2] = src_z;
    }
skip9:;
    *(Tri3i *)local_44 = *(Tri3i *)p;
    *(Tri3i *)local_154 = *(Tri3i *)local_44;
    (void)local_19C;
    (void)local_EC;
    (void)local_C4;
    (void)scale0;
    (void)delta_src;

    {

        float cross1 = (*(float*)&local_160[2] * *(float*)&local_154[0]) - (*(float*)&local_154[2] * *(float*)&local_160[0]); return ((*(float*)&local_178[2] * *(float*)&local_16C[0]) - (*(float*)&local_16C[2] * *(float*)&local_178[0])) * cross1 < (float)0;
    }
}
 















extern float game_uso_func_082880(float);
extern char game_uso_D_807FEDD0;
int SnowAI_isAboveSegmentFloor(char *a0, char *a1, char *a2) {
    volatile int local_BC[3];
    volatile int local_B0[3];
    char pad_AC[4];
    float local_A0[3];
    float local_94[3];
    float mag;
    float *p, *w; char pad_78[16];
    volatile int local_6C[3];
    char pad_68[4];
    float local_5C[3];
    char pad_3C[32];
    float local_30[3];
    float fx, fy, fz;
    float *q;
    if (a2 == 0) {
        game_uso_func_047B1C (&game_uso_D_807FEDD0 + 0x7D4 ,
                           &game_uso_D_807FEDD0 + 0x7E0 , 1586);
    }
    w = 0; if (1) { w = (float*)(a2 + 0x30); }
    q = 0; if (1) { q = (float*)(a1 + 0x30); }
    fy = w[0] - q[0]; fx = w[1] - q[1]; fz = w[2] - q[2];
    local_5C[0] = fy;
    local_5C[2] = fz;
    local_5C[1] = fx;
    *(Tri3i*)local_6C = *(Tri3i*)local_5C;
    *(Tri3i*)local_BC = *(Tri3i*)local_6C;
    p = (float*)(unsigned)local_A0;
    if (p == 0) {
        p = (float*)func_802C676C (12);
        if (p == 0) goto skip1;
    }
    fy = *(float*)&local_BC[0];
    fz = *(float*)&local_BC[2];
    p[0] = fy;
    p[2] = fz;
    p[1] = 0.0f;
skip1:;
    w = (float*)((SnowAI *)(a0)) ->rider; if (1) { w = (float*)((char*)w + 0xB4); }  
    fy = w[0] - q[0]; fx = w[1] - q[1]; fz = w[2] - q[2];
    local_30[0] = fy;
    local_30[1] = fx;
    local_30[2] = fz;
    *(Tri3i*)local_6C = *(Tri3i*)local_30;
    *(Tri3i*)local_B0 = *(Tri3i*)local_6C;
    p = (float*)(unsigned)local_94;
    if (p == 0) {
        p = (float*)func_802C676C (12);
        if (p == 0) goto skip2;
    }
    fy = *(float*)&local_B0[0];
    fz = *(float*)&local_B0[2];
    p[0] = fy;
    p[2] = fz;
    p[1] = 0.0f;
skip2:;
    mag = game_uso_func_082880 (fy = local_A0[2]*local_A0[2] + local_A0[0]*local_A0[0]);
    if (0.0f < game_uso_func_082880 (local_A0[2]*local_A0[2] + local_A0[0]*local_A0[0])) {
        fx = (local_A0[0]*local_94[0] + local_A0[2]*local_94[2]) /
                game_uso_func_082880 (local_A0[2]*local_A0[2] + local_A0[0]*local_A0[0]);
    } else {
        fx = (float)0;
    }
    fz = ((CourseMarker *)a1)->pos[1];
    return mag * (((SnowAI *)(a0)) ->rider->dnode.vqs.trans[1] -(fz - 400.0f)) > (((CourseMarker *)a2)->pos[1] - fz)*fx;
}

 






extern int game_uso_func_053104();
extern int import_8006EF48;
typedef struct { int a; } S1A374;
int SnowAI_findNearestMarker_0000A374(a0, a1, a2)
int a0, a1, a2;
{
    int r = game_uso_func_053104 (*(int *)&import_8006EF48, *(S1A374*)&a1);
    if (r == 0) return 0;
    return (int)CourseMarker_findNearestZ_000043D8((int **)r, (int *)a2, 0);
}






 






















extern char game_uso_D_807FEB38;
extern char game_uso_D_807FEDF8;
extern char game_uso_D_807FEE20;
typedef struct { float x, y, z; } V3_A3C4;
typedef struct { int a; } S1_A3C4;
void SnowAI_pickFork(SnowAI *a0) {
    V3_A3C4 *p;
    S1_A3C4 v1, v2;
    V3_A3C4 buf2, buf3;
    int *slots[2];
    V3_A3C4 buf1;
    float *ref;
    int *w;
    float fx, fz;
    float *q;
    volatile char padA3C4[0x4C];

    a0->modeFlags &= ~1;
    if (a0->rider->rival == 0) {
        return;
    }
    v1.a = *(int *)(*(int **)((char *)&game_uso_D_807FEB38 + 0x548  + a0->targetNode * 4));
    slots[1] = (int *)SnowAI_findNearestMarker_0000A374(a0, v1,
                (int)a0->rider->rival->dnode.vqs.trans);
    if (slots[1] == 0) {
        game_uso_func_047B1C ((char *)&game_uso_D_807FEDF8 + 0x7EC ,
                             (char *)&game_uso_D_807FEDF8 + 0x808 , 0x450);
    }
    if (((CourseMarker *)slots[1])->parms.flg.value & 0x10 ) {
        w = (int *)((CourseMarker *)slots[1])->link;
        slots[1] = w;
    }
    v2.a = *(int *)(*(int **)((char *)&game_uso_D_807FEB38 + 0x548  + a0->altNode * 4));
    slots[0] = (int *)SnowAI_findNearestMarker_0000A374(a0, v2,
                (int)a0->rider->rival->dnode.vqs.trans);
    if (slots[0] == 0) {
        game_uso_func_047B1C ((char *)&game_uso_D_807FEE20 + 0x814 ,
                             (char *)&game_uso_D_807FEE20 + 0x830 , 0x45B);
    }
    ref = a0->rider->rival->dnode.vqs.trans;
    if (1) { p = &buf1; }
    if (p == 0) {
        p = (V3_A3C4 *)func_802C676C (12);
        if (p == 0) goto skip1;
    }
    fx = ref[0];
    fz = ref[2];
    p->x = fx;
    p->z = fz;
    p->y = 0.0f;
skip1:
    if (1) { p = &buf2; }
    if (p == 0) {
        p = (V3_A3C4 *)func_802C676C (12);
        if (p == 0) goto skip2;
    }
    q = ((CourseMarker *)slots[1])->pos;
    fz = q[2];
    fx = q[0];
    p->y = 0.0f;
    p->z = fz;
    p->x = fx;
skip2:
    if (1) { p = &buf3; }
    if (p == 0) {
        p = (V3_A3C4 *)func_802C676C (12);
        if (p == 0) goto skip3;
    }
    q = ((CourseMarker *)slots[0])->pos;
    fz = q[2];
    fx = q[0];
    p->y = 0.0f;
    p->z = fz;
    p->x = fx;
skip3:
    if ((buf1.x - buf3.x) * (buf1.x - buf3.x) + (buf1.z - buf3.z) * (buf1.z - buf3.z) <
        (buf1.x - buf2.x) * (buf1.x - buf2.x) + (buf1.z - buf2.z) * (buf1.z - buf2.z)) {
        a0->targetNode = a0->altNode;
    }
}

                                                         
                                                                  
                                                                   
                                             
  
                                         
  
                                                                
                            
                                                             
                                                                 
                                                                     
                                                                          
               
                                                
                                                                     
                                                                  
                          
          
        
                                                                           
                                                                          
      
  
                           
                                                                      
                                                                 
                                                                     
                                                                    
                                                                  
                                               
                                                                             
                                                                           
                                                                            
                  
 


































void SnowAI_scanNodes(SnowAI *obj) {
    Vec3 copy2;
    One1 a1arg;
    Vec3 tbuf;
    char *v0var;
    volatile int pad_a[2];
    Vec3 copy1;
    volatile int pad_b[2];
    Vec3 scaled;
    int t;
    volatile int pad_bot[5];
    float s;
    float f0;
    float *q;
    float mx, my, mz;

    tbuf = *(Vec3 *)&obj->rider->dnode.vqs.trans;
    s = obj->lookAhead;
    q = obj->rider->dnode.vel;
    mx = q[0] * s;
    my = q[1] * s;
    mz = q[2] * s;
    q = (float *)&copy1;
    scaled.x = mx;
    scaled.y = my;
    scaled.z = mz;
    if (1) {
        *(Vec3 *)q = scaled;
        copy2 = *(Vec3 *)q;
    }
    tbuf.x = tbuf.x + copy2.x;
    tbuf.y = tbuf.y + copy2.y;
    tbuf.z = tbuf.z + copy2.z;

    a1arg.a = **(int **)((char *)&D_00000000 + 0x548  + obj->scanIndex * 4);
    v0var = (char *)SnowAI_findNearestMarker_0000A374(obj, a1arg, &tbuf);
    if (v0var != 0) {
         
        t = (int)((CourseMarker *)v0var)->link;
        if (t != 0) {
            if (SnowAI_isInSegmentWidth(obj, v0var, t) != 0) {
                if (SnowAI_isAboveSegmentFloor((char *)obj, v0var, (char *)t) != 0) {
                    f0 = tbuf.z - ((CourseMarker *)v0var)->pos[2];
                    if (f0 < 0.0f) {
                        f0 += 250.0f * ((CourseMarker *)v0var)->parms.wid.value;
                    }
                    if (0.0f <= f0 && f0 < obj->scanBestDist) {
                        obj->scanBestDist = f0;
                        obj->targetNode = obj->scanIndex;
                    }
                }
            }
        }
    }
    t = obj->scanIndex + 1;
    obj->scanIndex = t;
    if (t >= 0xA) {
        obj->modeFlags &= ~2;
    }
}

void SnowAI_startNodeScan(SnowAI *a0) {
    a0->scanIndex = 0;
    a0->modeFlags |= 2;
    a0->scanBestDist = *(float *)((char *)&D_00000000 + 0x110 );
}

 



















void SnowAI_scanSegments(SnowAI *obj) {
    Vec3 c2;
    One1 node;
    Vec3 blockA;
    char *slots[2];
    char *r1;
    Vec3 c1;
    char pad_C4[8];
    Vec3 scaled;
    float f0, f2, f12, f14; Vec3 *out; char pad_8C[24];
    Vec3 b1, b4, b3, b6;
    char pad_54[8];
    Vec3 b2;
    char pad_34[20];
    Vec3 b5;
    float *q;
    Vec3 *p;
    int cnt;

    blockA = *(Vec3 *)&obj->rider->dnode.vqs.trans;
    f0 = obj->lookAhead;
    q = obj->rider->dnode.vel;
    f14 = q[0] * f0;
    f2 = q[1] * f0;
    f12 = q[2] * f0;
    q = (float *)&c1;
    scaled.x = f14;
    scaled.y = f2;
    scaled.z = f12;
    if (1) {
        *(Vec3 *)q = scaled;
        c2 = *(Vec3 *)q;
    }
    blockA.x = blockA.x + c2.x;
    blockA.y = blockA.y + c2.y;
    blockA.z = blockA.z + c2.z;
    node.a = **(int **)((char *)&D_00000000 + 0x548  + obj->scanIndex*4);
    r1 = (char *)SnowAI_findNearestMarker_0000A374(obj, node, &blockA);
    if (r1 != 0) {
         
        cnt = (int)((CourseMarker *)r1)->link;
        slots[0] = (char *)cnt;
        if (cnt != 0) {
            slots[1] = r1;
            if (SnowAI_isAboveSegmentFloor((char *)obj, r1, (char *)cnt) != 0) {
                f0 = blockA.z - ((CourseMarker *)slots[1])->pos[2];
                if (f0 < 0.0f) f0 += 250.0f * ((CourseMarker *)slots[1])->parms.wid.value;
                if (f0 >= 0.0f) {
                     
                    p = (Vec3 *)(unsigned)&b1;
                    if (p == 0) {
                        p = (Vec3 *)func_802C676C (12);
                        if (p == 0) goto skip1;
                    }
                    q = ((CourseMarker *)slots[0])->pos;
                    f0 = q[0];
                    f2 = q[2];
                    p->y = 0.0f;
                    p->z = f2;
                    p->x = f0;
                skip1:;
                    do { out = &b2; } while (0); p = out;
                    if (p == 0) {
                        p = (Vec3 *)func_802C676C (12);
                        if (p == 0) goto skip2;
                    }
                    q = ((CourseMarker *)slots[1])->pos;
                    f12 = b1.x - q[0]; f0 = b1.z - q[2];
                    p->y = 0.0f;
                    p->z = f0;
                    p->x = f12;
                skip2:;
                    *(Tri3i *)&c1 = *(Tri3i *)out;
                    *(Tri3i *)&b3 = *(Tri3i *)&c1;
                     
                    p = (Vec3 *)(unsigned)&b4;
                    if (p == 0) {
                        p = (Vec3 *)func_802C676C (12);
                        if (p == 0) goto skip4;
                    }
                    f0 = blockA.x;
                    f2 = blockA.z;
                    p->y = 0.0f;
                    p->x = f0;
                    p->z = f2;
                skip4:;
                    do { out = &b5; } while (0); p = out;
                    if (p == 0) {
                        p = (Vec3 *)func_802C676C (12);
                        if (p == 0) goto skip5;
                    }
                    q = ((CourseMarker *)slots[1])->pos;
                    f12 = b4.x - q[0]; f0 = b4.z - q[2];
                    p->y = 0.0f;
                    p->z = f0;
                    p->x = f12;
                skip5:;
                    *(Tri3i *)&c1 = *(Tri3i *)out;
                    *(Tri3i *)&b6 = *(Tri3i *)&c1;
                    f14 = b3.z; f12 = b3.x*b3.x + f14*f14;
                    if (0.0f == f12) {
                        f0 = 0.0f;
                    } else {
                        f2 = b3.z*b6.x - b3.x*b6.z;
                        f0 = f2*f2 / f12;
                    }
                    if (f0 < obj->scanBestDist) {
                        obj->scanBestDist = f0;
                        obj->targetNode = obj->scanIndex;
                    }
                }
            }
        }
    }
    cnt = obj->scanIndex + 1;
    obj->scanIndex = cnt;
    if (cnt >= 10) obj->modeFlags &= ~4;
}

void SnowAI_startSegmentScan(SnowAI *a0) {
    a0->scanIndex = 0;
    a0->modeFlags |= 4;
    a0->scanBestDist = *(float*)(&D_00000000 + 0x114 );
}

void game_readFloatParm_0000ABB8(char *dst) {
    int tmp;
    stream_readS32_00004080(&tmp);
    stream_readF32_000040BC((float*)(dst + 0x10));
}

void game_readVec3Parm_0000ABE8(char *dst) {
    int tmp;
    stream_readS32_00004080(&tmp);
    stream_readVec3_000040F8((Vec3*)(dst + 0x10));
}

void game_readQuadParm_0000AC18(char *dst) {
    int tmp;
    stream_readS32_00004080(&tmp);
    stream_readQuad_00004168((Quad4*)(dst + 0x10));
}

void game_readIntParm_0000AC48(char *dst) {
    int tmp;
    stream_readS32_00004080(&tmp);
    stream_readS32_00004080((int*)(dst + 0x10));
}

 











extern char import_8006ED80;
int *game_ItemType_create_0000AC78(int *arg0) {
    int *p2;
    int *head;
    int *p1;
    p1 = (int*)func_802C676C (sizeof(ColourSubItem));
    if (p1 != 0) {
        game_uso_func_051C28 (p1);
        ((Node *)(p1)) ->vptr = (char *)&import_8006ED80;
        ((ColourSubItem *)p1)->unk3C = 0;
    }
    p2 = p1;
    p1 = arg0;
    head = (int*)((ItemType *)(p1)) ->unk40;
    if ((int*)((ItemType *)(p1)) ->unk40 != 0) {
        game_uso_func_07ACE0 (&((Node *)(p2)) ->children, head);
        if (((Node *)(head)) ->parent != 0) {
            ((Node *)(head)) ->unk04 = 1;
        }
        ((Node *)(head)) ->parent = (Node *)p2;
    }
    return p2;
}


static void stream_readF32_0000AD10(float *dst) {
    float buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

static void stream_readS32_0000AD4C(int *dst) {
    int buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

static void stream_readQuad_0000AD88(Quad4 *dst) {
    Quad4 buf;
    D_802C676C (&D_00000000, &buf, 16);



    *dst = buf;
}

static void stream_readS32_0000ADE0(int *dst) {
    int buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

 






extern void game_uso_func_04D3D0(void *self);
extern void game_uso_func_04D3C8(void *self, int a1);
extern char game_uso_D_807FF340, game_uso_D_807FF24C, game_uso_D_807FEE38,
            game_uso_D_807FEE30, game_uso_D_807FF234, game_uso_D_807FF344,
            game_uso_D_807FF34C, game_uso_D_807FF350, game_uso_D_807FF354,
            game_uso_D_807FF358, game_uso_D_807FEE50, game_uso_D_807FEE68,
            game_uso_D_807FF35C, game_uso_D_807FEE80, game_uso_D_807FF214;
extern char import_80086288, gPolyGeomMode_3EEC8_8005EE6C;
extern int import_000F5ADC();


void *Sun_ctor(void *arg0) {
     
    char *s0;
    char *r;
    void *p;
    void *q;
    float v3[3];
    float z;
    char *unused7c;
    char *unused78;
    int *state;
    One1 idx0, idx1, idx2, idx3;
    float v4[4];
    One1 idx4;
    int flags;
    char *nfirst;
    One1 idx_arg;
    char *unused40;
    char *n;
    char *tbl1;
    char *tbl2;
    char *o36;
    Quad4 v4_copy;

     
    if (arg0 == ((void*)0) ) {
        arg0 = (void *)func_802C676C (0x178);
        if (arg0 == ((void*)0) ) goto end_ret;
    }

    s0 = arg0;
    if (s0 == ((void*)0) ) {
        s0 = (void *)func_802C676C (0xB4);
        if (s0 == ((void*)0) ) goto skip_sub;
    }
    game_uso_func_04C678 (s0, (char *)&game_uso_D_807FF340 + 0xD50 );
    ((Node *)(s0)) ->vptr = (char *)&import_80086288;

    p = (char *)s0 + 0x2C;
    if (s0 == (void *)-0x2C) {
        p = (void *)func_802C676C (4);
        if (p == ((void*)0) ) goto after_node;
    }
    q = p;
    if (p == ((void*)0) ) {
        q = (void *)func_802C676C (4);
        if (q == ((void*)0) ) goto after_node;
    }
    *(int *)q = 0;
after_node:
    game_uso_func_04D3D0 (s0);
    z = (float)0; v3[0] = z; v3[1] = z; v3[2] = z;
    game_uso_func_072EE8 ((char *)s0 + 0x30, (Vec3 *)v3);
skip_sub:

    ((Node *)(arg0)) ->vptr = (char *)&game_uso_D_807FF24C;

    s0 = (char *)arg0 + 0xDC;
    if (arg0 == (void *)-0xDC) {
        s0 = (char *)func_802C676C (0x10);
        if (s0 == ((void*)0) ) goto after_o16;
    }
    {
        r = s0;
        if (s0 == ((void*)0) ) {
            r = (char *)func_802C676C (0x10);
            if (r == ((void*)0) ) goto o16_set;
        }
        {
            p = r;
            if (r == ((void*)0) ) {
                p = (char *)func_802C676C (4);
                if (p == ((void*)0) ) goto o16_fill;
            }
            ((MemberCallback *)p)->vptr = (char *)&game_uso_D_807FEE38 + 0x848;
        o16_fill:
            ((MemberCallback *)r)->obj = arg0;
            ((MemberCallback *)r)->pmf = *(Pair2 *)((char *)&game_uso_D_807FEE30 + 0x840 );
        }
    o16_set:
        ((MemberCallback *)s0)->vptr = (char *)&game_uso_D_807FF234 + 0xC44;
    }
after_o16:

     
    s0 = (char *)arg0 + 0xEC;
    if ((arg0 != (void *)-0xEC) ||
        (s0 = (char *)func_802C676C (140), s0 != ((void*)0) )) {
    {
        r = s0;
        if (s0 == ((void*)0) ) {
            r = (char *)func_802C676C (8);
            if (r == ((void*)0) ) goto after_o140hdr;
        }
        ((SunParms *)r)->name = (char *)&game_uso_D_807FF344 + 0xD54 ;  
        ((SunParms *)r)->head = 0;
    }
after_o140hdr:
    {
        idx0.a = *(int *)((char *)&game_uso_D_807FF34C + 0xD5C );
         
        idx_arg = idx0;
        nfirst = s0 + 8;
        if (s0 == (char *)-8) {
            nfirst = (char *)func_802C676C (24);
            if (nfirst == ((void*)0) ) goto node1;
        }
        game_uso_func_04A188 (nfirst, s0, idx_arg, 1);
        ((SunParm *)nfirst)->vptr = (char *)&game_uso_D_807FEE50 + 0x860;
        ((SunParm *)nfirst)->unk14 = 0;
        ((SunParm *)nfirst)->value.f = 0.0f;
    }
node1:
    {
        idx1.a = *(int *)((char *)&game_uso_D_807FF350 + 0xD60 );
        idx_arg = idx1;
        n = s0 + 32;
        if (s0 == (char *)-32) {
            n = (char *)func_802C676C (24);
            if (n == ((void*)0) ) goto node2;
        }
        game_uso_func_04A188 (n, s0, idx_arg, 1);
        { if (1) { tbl1 = (char *)&game_uso_D_807FEE50 + 0x860; } ((SunParm *)n)->vptr = tbl1; }
        ((SunParm *)n)->unk14 = 0;
        ((SunParm *)n)->value.f = 0.0f;
    }
node2:
    {
        idx2.a = *(int *)((char *)&game_uso_D_807FF354 + 0xD64 );
        idx_arg = idx2;
        n = s0 + 56;
        if (s0 == (char *)-56) {
            n = (char *)func_802C676C (24);
            if (n == ((void*)0) ) goto node3;
        }
        game_uso_func_04A188 (n, s0, idx_arg, 1);
        { if (1) { tbl2 = (char *)&game_uso_D_807FEE50 + 0x860; } ((SunParm *)n)->vptr = tbl2; }
        ((SunParm *)n)->unk14 = 0;
        ((SunParm *)n)->value.f = 2.0f;
    }
node3:
    {
        idx3.a = *(int *)((char *)&game_uso_D_807FF358 + 0xD68 );
        idx_arg = idx3;
        n = s0 + 80;
        if (s0 == (char *)-80) {
            n = (char *)func_802C676C (24);
            if (n == ((void*)0) ) goto node4;
        }
        game_uso_func_04A188 (n, s0, idx_arg, 0);
        ((SunParm *)n)->vptr = (char *)&game_uso_D_807FEE68 + 0x878;
        ((SunParm *)n)->unk14 = 0;
        ((SunParm *)n)->value.i = 0;
    }
node4:;
    {
        idx4.a = *(int *)((char *)&game_uso_D_807FF35C + 0xD6C );
        v4[0] = 1.0f;
        v4[1] = 1.0f;
        v4[2] = 1.0f;
        v4[3] = 1.0f;
         
        v4_copy = *(Quad4 *)v4;
        idx_arg = idx4;
        if (1) { o36 = s0 + 0x68; }
        if ((s0 != (char *)-0x68) ||
            (o36 = (char *)func_802C676C (36), o36 != ((void*)0) )) {

        game_uso_func_04A188 (o36, s0, idx_arg, 0);
        ((SunColorParm *)o36)->vptr = (char *)&game_uso_D_807FEE80 + 0x890;
        ((SunColorParm *)o36)->unk20 = 0;
        *(Quad4 *)((SunColorParm *)o36)->value = v4_copy;
        }
    }

    }
tail_init:
     
    {
        if (1) { state = (int *)((char *)&gPolyGeomMode_3EEC8_8005EE6C + 4); } flags = *state;
        flags &= ~0x00080000;
        flags &= ~2;
        if (1) { state = (int *)((char *)&gPolyGeomMode_3EEC8_8005EE6C + 4); } *state = flags;
    }
    ((Sun *)arg0)->fade = 1.0f;
    game_uso_func_04D3C8 (arg0, 2);
    ((Sun *)arg0)->sprite = (Sprite *)import_000F5ADC(0, &game_uso_D_807FF214);
    ((Sun *)arg0)->visibility = 0.0f;
end_ret:
    return arg0;
}

 













 





extern char gGfxLib_8005C108;
extern char import_8005C1A8;
extern char game_uso_D_807FFA40;
extern char game_uso_D_807FFA48;
extern char game_uso_D_807FFA50;
extern char game_uso_D_807FFA58;
extern int game_uso_func_063734();
extern int import_000F8678();
extern void game_uso_func_04D700();
extern void game_uso_func_05B750();

void Sun_display(char *s0) {
    char *s1 = (char *)(unsigned)&gGfxLib_8005C108;
    float *dst;
    float vec[3];
    float r;
    char *v1;
    int *vt;

    if ((double)((GfxLib *)(s1)) ->fog.colour[3] > *(double *)(&game_uso_D_807FFA40 + 0x120 )) return;

    vec[0] = ((Sun *)(s0)) ->mnode.world[3][0];
    vec[1] = ((Sun *)(s0)) ->mnode.world[3][1];
    vec[2] = ((Sun *)(s0)) ->mnode.world[3][2];
    if (game_uso_func_063734(((GfxLib *)(s1)) ->curWindow, &vec[0], 1, 0) == 0) return;

    ((Sun *)(s0)) ->screenX = (int)vec[0];
    ((Sun *)(s0)) ->screenY = (int)vec[1];
    import_000F8678(s1, &((Sun *)(s0)) ->visCallback);
    ((Sun *)(s0)) ->depthImage = ((GfxLib *)(s1)) ->curWindow;
    ((Sun *)(s0)) ->fade = ((Sun *)(s0)) ->visibility;

    if (*(double *)(&game_uso_D_807FFA48 + 0x128 ) < (double)((GfxLib *)(s1)) ->fog.colour[3]) {
        ((Sun *)(s0)) ->fade *= (1.0 - (((double)((GfxLib *)(s1)) ->fog.colour[3] - *(double *)(&game_uso_D_807FFA48 + 0x128 )) / *(double *)(&game_uso_D_807FFA50 + 0x130 )));
    }

    if (!(*(double *)(&game_uso_D_807FFA58 + 0x138 ) < (double)((Sun *)(s0)) ->fade)) return;

    game_uso_func_04D700(s0);

    dst = ((GfxLib *)(&import_8005C1A8)) ->modelView[3];  
    dst[0] = ((Sun *)(s0)) ->mnode.world[3][0];
    dst[1] = ((Sun *)(s0)) ->mnode.world[3][1];
    dst[2] = ((Sun *)(s0)) ->mnode.world[3][2];
    r = ((Sun *)(s0)) ->fade * ((Sun *)(s0)) ->parms.scl.value.f;
    game_uso_func_05B750(s1, ((Sun *)(s0)) ->parms.col.value);

    ((Sun *)(s0)) ->sprite->unkC0 = ((Sun *)(s0)) ->parms.mat.value.i;
    ((Sun *)(s0)) ->sprite->scaleX = r;
    ((Sun *)(s0)) ->sprite->scaleY = r;

    v1 = (char *)((Sun *)(s0)) ->sprite;
    vt = *(int **)(v1 + 0x28);
    (*(void (**)(char *))((char *)vt + 0x1C))((char *)((int)(short)*(short *)((char *)vt + 0x18) + (int)v1));
}




 







extern void game_uso_func_070338(float f, float *p1, float *p2);
extern void game_uso_func_04DA24(int *a0);
void Sun_update(int *a0) {
    float buf[5];
    buf[2] = 0.0f;
    buf[3] = 0.0f;
    buf[4] = *(float*)((char*)&D_00000000 + 0x140 );       
     
    game_uso_func_070338 (((Sun *)a0)->parms.ele.value.f, &buf[3], &buf[4]);
    game_uso_func_070338 (((Sun *)a0)->parms.rot.value.f, &buf[2], &buf[4]);
    ((Sun *)a0)->mnode.local[3][0] = buf[2];
    ((Sun *)a0)->mnode.local[3][1] = buf[3];
    ((Sun *)a0)->mnode.local[3][2] = buf[4];
    game_uso_func_04DA24 (a0);
}
void Sun_readParms(char *a0) {
    game_uso_func_00000000 (&((Sun *)a0)->parms);
}

 

















extern short game_uso_D_807FF2B4[];

 



extern char import_8005C348;
extern char game_uso_D_807FFA68;

int Sun_measureVisibility(char *obj) {
    char *c = *(char **)(&import_8005C348 + 0x240);
    char *grid = ((Sun *)(obj)) ->depthImage;
    unsigned short *data = *(unsigned short **)(*(char **)(c + 0x148) + 0xF0);
    short *tbl = game_uso_D_807FF2B4;
    int w = *(int *)(grid + 0xB8);
    int h = *(int *)(grid + 0xBC);
    int y = ((Sun *)(obj)) ->screenY;
    int x = ((Sun *)(obj)) ->screenX;
    int count = 0;
    int i;
    int idx;
    float result;
    float prev;
    for (i = 0; i < 9; i++, tbl += 2) {
        idx = tbl[1] + (x + (y + tbl[0]) * w);
        if (idx > 0 && idx < w * h) {
            unsigned short cell = data[idx];
            if (cell == 0xFFFC) count++;
        }
    }
    result = (float)count / 9.0f;
    prev = ((Sun *)(obj)) ->visibility;
    if (result < prev) {
        ((Sun *)(obj)) ->visibility = result;
    } else {
        ((Sun *)(obj)) ->visibility =
            (float)((double)prev + (double)(result - prev) * (*(double *)(&game_uso_D_807FFA68 + 0x148)) );
    }
    return count;
}




void LensFlareElem_init_0000B710(char *a0) {
    float one = 1.0f;
    float zero = 0.0f;

    ((LensFlareElem *)a0)->color[3] = one;
    ((LensFlareElem *)a0)->color[2] = one;
    ((LensFlareElem *)a0)->color[1] = one;
    ((LensFlareElem *)a0)->color[0] = one;
    ((LensFlareElem *)a0)->pos = zero;
    ((LensFlareElem *)a0)->size = *(float*)(&D_00000000 + 0x150 );
    ((LensFlareElem *)a0)->image = 0;
    ((LensFlareElem *)a0)->flags = 8;
    ((LensFlareElem *)a0)->minDot = zero;
}

 














void LensFlareElem_draw_0000B750(char *a0, char *s0, float *a2, float *a3, float arg4) {
    volatile char *ret = a0;
}

void LensFlareElem_read_0000B884(char *dst) {
    stream_readF32_0000AD10(&((LensFlareElem *)dst)->pos);
    stream_readF32_0000AD10(&((LensFlareElem *)dst)->size);
    stream_readS32_0000AD4C(&((LensFlareElem *)dst)->image);
    stream_readQuad_0000AD88((Quad4 *)((LensFlareElem *)dst)->color);
    stream_readS32_0000AD4C(&((LensFlareElem *)dst)->flags);
    stream_readF32_0000AD10(&((LensFlareElem *)dst)->minDot);
}

 












extern char game_uso_D_807FF360, game_uso_D_807FF2D8, game_uso_D_807FF368,
            game_uso_D_807FF37C, game_uso_D_807FF380, game_uso_D_807FF384,
            game_uso_D_807FF388, D_B8D4_st2, D_B8D4_st3;
extern char import_80086288;
extern char game_uso_D_807FEE50;
extern char game_uso_D_807FF214;
extern char game_uso_D_807FF360;
extern char game_uso_D_807FF368;
extern char game_uso_D_807FF388;
extern char game_uso_D_807FF2D8;
extern char D_B8D4_st2, D_B8D4_st3;
void *LensFlare_create(void *arg0, int arg1, int arg2) {
    typedef struct { char *p; } S0000B8D4;
    unsigned int i;         
    volatile int pad78;
    volatile int pad74;
    volatile int pad70;
    volatile int pad6C;
    Vec3 v3;                
    volatile int pad5C;
    volatile int pad58;
    volatile int pad54;
    volatile int pad50;
    S0000B8D4 slot_a;       
    S0000B8D4 slot_b;       
    S0000B8D4 slot_c;       
    char *sp1;              
    void *p;                
    void *q;                
    S0000B8D4 marsh;        
    char *hdr;              
    char *n;                
    int a2v;

    a2v = arg2;
    if (arg0 == ((void*)0) ) {
        arg0 = (void *)func_802C676C (0x278);
        if (arg0 == ((void*)0) ) goto end_ret;
    }

    sp1 = arg0;
    if (sp1 == ((void*)0) ) {
        sp1 = (char *)func_802C676C (0xB4);
        if (sp1 == ((void*)0) ) goto skip_sub;
    }
    game_uso_func_04C678 ((int *)sp1, (char *)&game_uso_D_807FF360 + 0xD70 );
    ((Node *)(sp1)) ->vptr = (char *)&import_80086288;

    p = sp1 + 0x2C;
    if (sp1 == (char *)-0x2C) {
        p = (void *)func_802C676C (4);
        if (p == ((void*)0) ) goto after_node;
    }
    q = p;
    if (p == ((void*)0) ) {
        q = (void *)func_802C676C (4);
        if (q == ((void*)0) ) goto after_node;
    }
    *(int *)q = 0;
after_node:
    game_uso_func_04D3D0 (sp1);
    v3.x = 0.0f;
    v3.y = 0.0f;
    v3.z = 0.0f;
    game_uso_func_072EE8 (sp1 + 0x30, &v3);
skip_sub:

    ((Node *)(arg0)) ->vptr = (char *)&game_uso_D_807FF2D8;
    ((LensFlare *)arg0)->sun = (Sun *)a2v;
    sp1 = (char *)arg0 + 0x224;
    if (arg0 == (void *)-0x224) {
        sp1 = (char *)func_802C676C (0x50);
        if (sp1 == ((void*)0) ) goto finalize;
    }
    hdr = sp1;
    if (sp1 == ((void*)0) ) {
        hdr = (char *)func_802C676C (8);
        if (hdr == ((void*)0) ) goto stage_a;
    }
    ((LensFlareParms *)hdr)->name = (char *)&game_uso_D_807FF368 + 0xD78 ;  
    ((LensFlareParms *)hdr)->head = 0;
stage_a:
    slot_a.p = *(char **)((char *)&game_uso_D_807FF37C + 0xD8C );
    marsh = slot_a;
    n = sp1 + 8;
    if (sp1 == (char *)-8) {
        n = (char *)func_802C676C (0x18);
        if (n == ((void*)0) ) goto stage_b;
    }
    game_uso_func_04A188 (n, sp1, marsh, 1);
    ((SunParm *)n)->vptr = (char *)&game_uso_D_807FEE50 + 0x860;
    ((SunParm *)n)->unk14 = 0;
    ((SunParm *)n)->value.f = *(float *)((char *)&game_uso_D_807FF380 + 0x160 );
stage_b:
    slot_b.p = *(char **)((char *)&game_uso_D_807FF380 + 0xD90 );
    marsh = slot_b;
    n = sp1 + 0x20;
    if (sp1 == (char *)-0x20) {
        n = (char *)func_802C676C (0x18);
        if (n == ((void*)0) ) goto stage_c;
    }
    game_uso_func_04A188 (n, sp1, marsh, 1);
    ((SunParm *)n)->vptr = (char *)&D_B8D4_st2 + 0x860;
    ((SunParm *)n)->unk14 = 0;
    ((SunParm *)n)->value.f = *(float *)((char *)&game_uso_D_807FF384 + 0x164 );
stage_c:
    slot_c.p = *(char **)((char *)&game_uso_D_807FF384 + 0xD94 );
    marsh = slot_c;
    n = sp1 + 0x38;
    if (sp1 == (char *)-0x38) {
        n = (char *)func_802C676C (0x18);
        if (n == ((void*)0) ) goto finalize;
    }
    game_uso_func_04A188 (n, sp1, marsh, 1);
    ((SunParm *)n)->vptr = (char *)&D_B8D4_st3 + 0x860;
    ((SunParm *)n)->unk14 = 0;
    ((SunParm *)n)->value.f = 0.0f;
finalize:
    ((Node *)(arg0)) ->name = (const char *)((char *)&game_uso_D_807FF388 + 0xD98 );
    ((LensFlare *)arg0)->sprite = (Sprite *)import_000F5ADC(0, &game_uso_D_807FF214);
    ((LensFlare *)arg0)->numElems = 10 ;
    i = 0;
    n = (char *)((LensFlare *)arg0)->elems;
    do {
        LensFlareElem_init_0000B710(n);
        n += 0x24;
        i++;
    } while (i < ((LensFlare *)arg0)->numElems);
    game_uso_func_04C774 ((int *)arg0, 1, arg1);
end_ret:
    return arg0;
}

 



void LensFlare_display(char *arg0) {
    volatile char *ret = arg0;
}
 

 








extern void game_uso_func_04A2D8();
void LensFlare_readParms(char *a0) {
    char *base = a0;
    int i;
    char *p;
    game_uso_func_04A2D8 (&((LensFlare *)base)->parms);
    stream_readS32_0000ADE0((int *)&((LensFlare *)base)->numElems);
    for (i = 0, p = (char *)((LensFlare *)base)->elems; i != sizeof(((LensFlare *)base)->elems); p += 0x24, i += 0x24) {
        LensFlareElem_read_0000B884(p);
    }
}

 















































extern int D_802C676C();
 
















int MemberCallback_invoke_0000BFDC(char *a0) {
    short *pair = (short*)&((MemberCallback *)a0)->pmf;  
    char *arg;
    int idx;
    int (*fnptr)(char *);

    arg = (arg = (char *)((MemberCallback *)a0)->obj, arg) + pair[0];
    if (pair[1] < 0) {
        fnptr = (int (*)(char *))((MemberCallback *)a0)->pmf.b;
    } else {
        int sel = ((Pair2 *)pair)->b;  
        idx = (sel == 0 && pair[0] == 0) ? 0x28 : sel;
         
        sel = (int)((char*)(pair[1] << 3) + *(int*)(arg + idx));
        arg = *(short*)sel + arg;
        fnptr = *(int (**)(char *))((char*)sel + 4);
    }
    return fnptr(arg);
}

void game_readFloatParm_0000C05C(char *dst) {
    int tmp;
    stream_readS32_0000AD4C(&tmp);
    stream_readF32_0000AD10((float*)(dst + 0x10));
}

void game_readIntParm_0000C08C(char *dst) {
    int tmp;
    stream_readS32_0000AD4C(&tmp);
    stream_readS32_0000ADE0((int*)(dst + 0x10));
}

void game_readQuadParm_0000C0BC(char *dst) {
    int tmp;
    stream_readS32_0000AD4C(&tmp);
    stream_readQuad_0000AD88((Quad4*)(dst + 0x10));
}
 





static void TrickTable_readCount_0000C0F0(int *dst) {
    int buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

 


static void TrickTable_readEntry_0000C12C(int *a0) {
    typedef struct {
        int v[16];
    } I16;
    I16 buf;
    D_802C676C (&D_00000000, &buf, 0x40);






    *(I16*)a0 = buf;
}

static void stream_readS32_0000C194(int *dst) {
    int buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

static void stream_readF32_0000C1D0(float *dst) {
    float buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

static void stream_readVec3_0000C20C(Vec3 *dst) {
    int pad_top[1];
    Tri3i raw;
    int pad_mid[2];
    Tri3i tmp;
    int pad_bot[2];
    D_802C676C (&D_00000000, &raw, 12);



    tmp = raw;
    dst->x = *(float*)&tmp.a;
    dst->y = *(float*)&tmp.b;
    dst->z = *(float*)&tmp.c;
}

static void stream_read16_0000C27C(Quad4 *dst) {
    Quad4 buf;
    D_802C676C (&D_00000000, &buf, 16);



    *dst = buf;
}

 
void *TrickTable_ctor_0000C2D4(void *a0, int a1) {
    if (a0 == 0) {
        a0 = (void*)D_802C676C (0x2C);
        if (a0 == 0) goto end;
    }
    D_802C676C (a0, (char*)&D_00000000 + 0x121C);
    ((Node *)(a0)) ->vptr = (char *)&D_00000000;
    if (a1 != 0) {
        D_802C676C (a0, 1, a1);
    }
end:
    return a0;
}

 









int *TrickTable_getEntry_0000C344(int a0, int a1) {
    return (int*)((char*)(*(int**)&D_00000000) + (a1 << 6));
}

int *TrickTable_getEntry10_0000C35C(int a0, int a1) {
    return (int*)((char*)(*(int**)&D_00000000) + (a1 << 6) + 0x10);
}

int TrickTable_getInputMask_0000C378(int a0, int a1) {
    return *(int*)((char*)(*(int**)&D_00000000) + (a1 << 6) + 0x2C);
}

int TrickTable_getField34_0000C394(int a0, int a1) {
    return *(int*)((char*)(*(int**)&D_00000000) + (a1 << 6) + 0x34);
}

int TrickTable_getFlags_0000C3B0(int a0, int a1) {
    return *(int*)((char*)(*(int**)&D_00000000) + (a1 << 6) + 0x38);
}

int TrickTable_getPoints_0000C3CC(int a0, int a1) {
    return *(int*)((char*)(*(int**)&D_00000000) + (a1 << 6) + 0x30);
}

 







extern int game_uso_D_807FFBC4;
int TrickTable_getCount_0000C3E8(int a0) { return game_uso_D_807FFBC4; }

 












extern int game_uso_D_807FFBC4;
extern int *game_uso_D_807FFBC0;
void TrickTable_load_0000C3F8(int *a0) {
    int i;
    int *p;

    TrickTable_readCount_0000C0F0(&game_uso_D_807FFBC4);
    p = (int*)func_802C676C (game_uso_D_807FFBC4 << 6);
    game_uso_D_807FFBC0 = p;
    i = 0;
    if (game_uso_D_807FFBC4 != 0) {
        do {
            TrickTable_readEntry_0000C12C((int*)((char*)game_uso_D_807FFBC0 + i * 0x40));
            i++;
        } while ((u32)i < (u32)game_uso_D_807FFBC4);
    }
}

 











extern char game_uso_D_807FF568, game_uso_D_807FF5B0, game_uso_D_807FF74C, game_uso_D_807FF814, game_uso_D_807FF81C, game_uso_D_807FF820, game_uso_D_807FF824, game_uso_D_807FF828, game_uso_D_807FF82C, game_uso_D_807FF830, game_uso_D_807FF834, game_uso_D_807FF838, game_uso_D_807FF83C, game_uso_D_807FF840, game_uso_D_807FF844, game_uso_D_807FF848, game_uso_D_807FF84C, game_uso_D_807FF850, game_uso_D_807FF854, game_uso_D_807FF858, game_uso_D_807FF85C, game_uso_D_807FF860, game_uso_D_807FF864, game_uso_D_807FF868, game_uso_D_807FF86C, game_uso_D_807FF870, game_uso_D_807FF874, game_uso_D_807FF878, game_uso_D_807FF87C, game_uso_D_807FF880, game_uso_D_807FF884, game_uso_D_807FF888, game_uso_D_807FF88C, game_uso_D_807FF890, game_uso_D_807FF894, game_uso_D_807FF898;
extern int func_802C676C();
extern int game_uso_func_04A188();
extern int import_0010D33C();
void RiderAnim_init_0000D458(s32);
extern char gu_c48c_tf0, gu_c48c_tf1, gu_c48c_tf2, gu_c48c_tf3, gu_c48c_tf4, gu_c48c_tf5, gu_c48c_tf6, gu_c48c_tf7, gu_c48c_tf8, gu_c48c_tf9, gu_c48c_tf10, gu_c48c_tf11, gu_c48c_tf12, gu_c48c_tf13, gu_c48c_tf14, gu_c48c_tf15, gu_c48c_ti0, gu_c48c_ti1, gu_c48c_ti2, gu_c48c_ti3, gu_c48c_ti4, gu_c48c_ti5, gu_c48c_ti6, gu_c48c_ti7, gu_c48c_ti8, gu_c48c_ti9, gu_c48c_ti10, gu_c48c_ti11, gu_c48c_ti12, gu_c48c_ti13, gu_c48c_ti14, gu_c48c_ti15;
 












struct C48CArg { int v; };
 

void *RiderAnim_ctor_0000C48C(char *p, int a1, int a2) {
    int *s1;
    struct C48CArg u1;
    struct C48CArg u2;
    struct C48CArg u3;
    struct C48CArg u4;
    struct C48CArg u5;
    struct C48CArg u6;
    struct C48CArg u7;
    struct C48CArg u8;
    struct C48CArg u9;
    struct C48CArg u10;
    struct C48CArg u11;
    struct C48CArg u12;
    struct C48CArg u13;
    struct C48CArg u14;
    struct C48CArg u15;
    struct C48CArg u16;
    struct C48CArg u17;
    struct C48CArg u18;
    struct C48CArg u19;
    struct C48CArg u20;
    struct C48CArg u21;
    struct C48CArg u22;
    struct C48CArg u23;
    struct C48CArg u24;
    struct C48CArg u25;
    struct C48CArg u26;
    struct C48CArg u27;
    struct C48CArg u28;
    struct C48CArg u29;
    struct C48CArg u30;
    struct C48CArg u31;
    struct C48CArg u32;
    int *v1;
    int *obj;
    volatile int pd[3];
    struct C48CArg t;
    if (p == 0) { p = (char *)func_802C676C (0x444); if (p == 0) goto end; }
    import_0010D33C(p, a1);
    ((Node *)(p)) ->vptr = (char *)&game_uso_D_807FF74C;
    s1 = (int *)(p + 0x13C);
    if (p == (char *)-0x13C) { s1 = (int *)func_802C676C (0x308); if (s1 == 0) goto tail; }
    v1 = s1;
    if (s1 == 0) { v1 = (int *)func_802C676C (8); if (v1 == 0) goto stage0; }
    ((RiderAnimParms *)v1)->name = (char *)&game_uso_D_807FF814 + 0x1224 ;  
    ((RiderAnimParms *)v1)->unk04 = 0;
stage0:;
    {
        u1.v = *(int *)((char *)&game_uso_D_807FF81C + 0x122C );
        t = u1;
        obj = (int *)((char *)s1 + 0x8);
        if (s1 != (int *)-0x8 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf0 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =0.7f;
        }
    }
    {
        u2.v = *(int *)((char *)&game_uso_D_807FF820 + 0x1230 );
        t = u2;
        obj = (int *)((char *)s1 + 0x20);
        if (s1 != (int *)-0x20 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti0 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =20;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u3.v = *(int *)((char *)&game_uso_D_807FF824 + 0x1234 );
        t = u3;
        obj = (int *)((char *)s1 + 0x38);
        if (s1 != (int *)-0x38 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti1 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =60;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u4.v = *(int *)((char *)&game_uso_D_807FF828 + 0x1238 );
        t = u4;
        obj = (int *)((char *)s1 + 0x50);
        if (s1 != (int *)-0x50 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti2 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =5;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u5.v = *(int *)((char *)&game_uso_D_807FF82C + 0x123C );
        t = u5;
        obj = (int *)((char *)s1 + 0x68);
        if (s1 != (int *)-0x68 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf1 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =1.72f;
        }
    }
    {
        u6.v = *(int *)((char *)&game_uso_D_807FF830 + 0x1240 );
        t = u6;
        obj = (int *)((char *)s1 + 0x80);
        if (s1 != (int *)-0x80 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti3 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =20;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u7.v = *(int *)((char *)&game_uso_D_807FF834 + 0x1244 );
        t = u7;
        obj = (int *)((char *)s1 + 0x98);
        if (s1 != (int *)-0x98 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf2 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =3.0f;
        }
    }
    {
        u8.v = *(int *)((char *)&game_uso_D_807FF838 + 0x1248 );
        t = u8;
        obj = (int *)((char *)s1 + 0xb0);
        if (s1 != (int *)-0xb0 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf3 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =7.0f;
        }
    }
    {
        u9.v = *(int *)((char *)&game_uso_D_807FF83C + 0x124C );
        t = u9;
        obj = (int *)((char *)s1 + 0xc8);
        if (s1 != (int *)-0xc8 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti4 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =3;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u10.v = *(int *)((char *)&game_uso_D_807FF840 + 0x1250 );
        t = u10;
        obj = (int *)((char *)s1 + 0xe0);
        if (s1 != (int *)-0xe0 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf4 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =0.0f;
        }
    }
    {
        u11.v = *(int *)((char *)&game_uso_D_807FF844 + 0x1254 );
        t = u11;
        obj = (int *)((char *)s1 + 0xf8);
        if (s1 != (int *)-0xf8 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf5 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =4.0f;
        }
    }
    {
        u12.v = *(int *)((char *)&game_uso_D_807FF848 + 0x1258 );
        t = u12;
        obj = (int *)((char *)s1 + 0x110);
        if (s1 != (int *)-0x110 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf6 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =50.0f;
        }
    }
    {
        u13.v = *(int *)((char *)&game_uso_D_807FF84C + 0x125C );
        t = u13;
        obj = (int *)((char *)s1 + 0x128);
        if (s1 != (int *)-0x128 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf7 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =25.0f;
        }
    }
    {
        u14.v = *(int *)((char *)&game_uso_D_807FF850 + 0x1260 );
        t = u14;
        obj = (int *)((char *)s1 + 0x140);
        if (s1 != (int *)-0x140 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf8 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =40.0f;
        }
    }
    {
        u15.v = *(int *)((char *)&game_uso_D_807FF854 + 0x1264 );
        t = u15;
        obj = (int *)((char *)s1 + 0x158);
        if (s1 != (int *)-0x158 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf9 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =100.0f;
        }
    }
    {
        u16.v = *(int *)((char *)&game_uso_D_807FF858 + 0x1268 );
        t = u16;
        obj = (int *)((char *)s1 + 0x170);
        if (s1 != (int *)-0x170 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf10 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =120.0f;
        }
    }
    {
        u17.v = *(int *)((char *)&game_uso_D_807FF85C + 0x126C );
        t = u17;
        obj = (int *)((char *)s1 + 0x188);
        if (s1 != (int *)-0x188 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf11 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =80.0f;
        }
    }
    {
        u18.v = *(int *)((char *)&game_uso_D_807FF860 + 0x1270 );
        t = u18;
        obj = (int *)((char *)s1 + 0x1a0);
        if (s1 != (int *)-0x1a0 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf12 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =100.0f;
        }
    }
    {
        u19.v = *(int *)((char *)&game_uso_D_807FF864 + 0x1274 );
        t = u19;
        obj = (int *)((char *)s1 + 0x1b8);
        if (s1 != (int *)-0x1b8 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf13 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =150.0f;
        }
    }
    {
        u20.v = *(int *)((char *)&game_uso_D_807FF868 + 0x1278 );
        t = u20;
        obj = (int *)((char *)s1 + 0x1d0);
        if (s1 != (int *)-0x1d0 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf14 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =100.0f;
        }
    }
    {
        u21.v = *(int *)((char *)&game_uso_D_807FF86C + 0x127C );
        t = u21;
        obj = (int *)((char *)s1 + 0x1e8);
        if (s1 != (int *)-0x1e8 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_tf15 + 0xf78);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.f =150.0f;
        }
    }
    {
        u22.v = *(int *)((char *)&game_uso_D_807FF870 + 0x1280 );
        t = u22;
        obj = (int *)((char *)s1 + 0x200);
        if (s1 != (int *)-0x200 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti5 + 0xfc0);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.i =0;
        }
    }
    {
        u23.v = *(int *)((char *)&game_uso_D_807FF874 + 0x1284 );
        t = u23;
        obj = (int *)((char *)s1 + 0x218);
        if (s1 != (int *)-0x218 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti6 + 0xfc0);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.i =0;
        }
    }
    {
        u24.v = *(int *)((char *)&game_uso_D_807FF878 + 0x1288 );
        t = u24;
        obj = (int *)((char *)s1 + 0x230);
        if (s1 != (int *)-0x230 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti7 + 0xfc0);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.i =0;
        }
    }
    {
        u25.v = *(int *)((char *)&game_uso_D_807FF87C + 0x128C );
        t = u25;
        obj = (int *)((char *)s1 + 0x248);
        if (s1 != (int *)-0x248 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti8 + 0xfc0);
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        ((RiderAnimParm *)(obj)) ->value.i =0;
        }
    }
    {
        u26.v = *(int *)((char *)&game_uso_D_807FF880 + 0x1290 );
        t = u26;
        obj = (int *)((char *)s1 + 0x260);
        if (s1 != (int *)-0x260 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti9 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =1;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u27.v = *(int *)((char *)&game_uso_D_807FF884 + 0x1294 );
        t = u27;
        obj = (int *)((char *)s1 + 0x278);
        if (s1 != (int *)-0x278 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti10 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =1;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u28.v = *(int *)((char *)&game_uso_D_807FF888 + 0x1298 );
        t = u28;
        obj = (int *)((char *)s1 + 0x290);
        if (s1 != (int *)-0x290 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti11 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =1;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u29.v = *(int *)((char *)&game_uso_D_807FF88C + 0x129C );
        t = u29;
        obj = (int *)((char *)s1 + 0x2a8);
        if (s1 != (int *)-0x2a8 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti12 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =1;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u30.v = *(int *)((char *)&game_uso_D_807FF890 + 0x12A0 );
        t = u30;
        obj = (int *)((char *)s1 + 0x2c0);
        if (s1 != (int *)-0x2c0 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti13 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =1;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u31.v = *(int *)((char *)&game_uso_D_807FF894 + 0x12A4 );
        t = u31;
        obj = (int *)((char *)s1 + 0x2d8);
        if (s1 != (int *)-0x2d8 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti14 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =30;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
    {
        u32.v = *(int *)((char *)&game_uso_D_807FF898 + 0x12A8 );
        t = u32;
        obj = (int *)((char *)s1 + 0x2f0);
        if (s1 != (int *)-0x2f0 || (obj = (int *)func_802C676C (0x18)) != 0) {
        game_uso_func_04A188 (obj, s1, t, 1);
        ((RiderAnimParm *)(obj)) ->vptr = (void *)((char *)&gu_c48c_ti15 + 0xfc0); ((RiderAnimParm *)(obj)) ->value.i =100;
        ((RiderAnimParm *)(obj)) ->unk14 = 0;
        }
    }
tail:
    ((RiderAnim *)p)->rider = (SnowBoarder *)a2;
    RiderAnim_init_0000D458(p);
end:
    return p;
}

 















void RiderAnim_update_0000D204(int *a0) {
    *(volatile float *)a0 = 28555.0f;
}

void RiderAnim_readParms_0000D418(char *a0) {
    D_802C676C (&((RiderAnim *)(a0)) ->parms);
}

 





void RiderAnim_onKey_0000D438(char *a0) {
    ((RiderAnim *)(a0)) ->player.eventKey = (-1000) ;
    ((RiderAnim *)(a0)) ->player.blendEvent = (-1000) ;
    ((RiderAnim *)(a0)) ->state = ((RiderAnim *)(a0)) ->queuedState;
}

 























extern int game_uso_func_07F6C0();
extern int game_uso_func_077574();
extern int game_uso_func_077C44();
extern int import_0010D420();
extern int game_uso_func_049280();
extern int game_uso_func_048020();
extern void RiderAnim_enterState_0000D5BC(char *, Pair2);
extern char import_800200CC;
extern char game_uso_D_807FF3A0, game_uso_D_807FF3A8, game_uso_D_807FF3B0;
void RiderAnim_init_0000D458(s32 arg0) {
    s32 pad[2];
    s32 sp30[4];
    s32 var_v0;

    game_uso_func_07F6C0((char *)arg0 + 0xBC, (char *)arg0 + 0x138 - ((char *)arg0 + 0xBC));  
    ((RiderAnim *)(arg0)) ->trickPhase = 2;
    ((RiderAnim *)(arg0)) ->animSet = 0x10000 ;
    ((RiderAnim *)(arg0)) ->rideContacts = 1;
    ((RiderAnim *)(arg0)) ->loadedAnim = -1;
    ((RiderAnim *)(arg0)) ->hitKind = 0;
    ((RiderAnim *)(arg0)) ->hitScale = 1.0f;
    game_uso_func_077574 (arg0);
    game_uso_func_077C44 (arg0, ((RiderAnim *)(arg0)) ->animSet | 0x08 , 0, 0, 1, 1);
    import_0010D420(arg0);
    if ((*(InputMgr *)&(import_800200CC)) .nextFlowMode == 3) {
        RiderAnim_enterState_0000D5BC(arg0, *(Pair2*)((char*)&game_uso_D_807FF3A0 + 0xDB0 ));
    } else {
        RiderAnim_enterState_0000D5BC(arg0, *(Pair2*)((char*)&game_uso_D_807FF3A8 + 0xDB8 ));
    }
    game_uso_func_049280 ();
    game_uso_func_048020 (&sp30, 0xF10, 0x10);



    if (sp30[0] != 0x04080040) {
        var_v0 = 0;
    } else if (sp30[1] != 0x02081040) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        RiderAnim_enterState_0000D5BC(arg0, *(Pair2*)((char*)&game_uso_D_807FF3B0 + 0xDC0 ));
    }
}

 





void RiderAnim_enterState_0000D5BC(char *a0, Pair2 pair) {
    ((RiderAnim *)(a0)) ->state = pair;
}

 




extern char game_uso_D_807FF3B8;
void RiderAnim_clearState_0000D5DC(char *a0) {
    ((RiderAnim *)(a0)) ->state = *(Pair2*)((char*)&game_uso_D_807FF3B8 + 0xDC8 );  
}

 











void RiderAnim_queueState_0000D5F8(char *a0, Pair2 pair, int a3) {
    if (a3 == -1) {
        ((RiderAnim *)(a0)) ->player.blendEvent = a3;
    } else {
        ((RiderAnim *)(a0)) ->player.eventKey = *(int*)&a3;
    }
    ((RiderAnim *)(a0)) ->queuedState = pair;
}

 




void RiderAnim_display_0000D634(int a0) {
    (void)a0;
}

 



extern int import_000B8698();
extern int game_uso_func_022784();
extern char import_800201D0;
extern char game_uso_D_807FF7B4;
extern int import_000B8698();
extern int game_uso_func_022784();
extern char import_800201D0;
extern char game_uso_D_807FF7B4;
 











void RiderAnim_endTrick_0000D63C(char *a0, int a1) {
    int value;
    int idx = ((RiderAnim *)(a0)) ->comboCount;

    value = 0;

    if (idx != 0 && a1 != 0) {
        if (idx > 0) {
            if (idx >= 10) {
                idx = (idx * 0) + 10;
                ((RiderAnim *)(a0)) ->comboCount = idx;
            }
            value = *(int*)((char*)&game_uso_D_807FF7B4 + (idx<<0<<1<<1));
            if (value != 0) {
                import_000B8698((int)(*(InputMgr *)&(import_800201D0)) .dataMgr,
                                (int)((RiderAnim *)(a0)) ->rider, value | 0, value);
            }
        }
    }
    ((RiderAnim *)(a0)) ->lastTrick = 0;
    ((RiderAnim *)(a0)) ->comboCount = 0;
    game_uso_func_022784 ((int)(*(InputMgr *)&(import_800201D0)) .dataMgr,
                         (int)((RiderAnim *)(a0)) ->rider, a1, value);
    ((RiderAnim *)(a0)) ->endTrickFlag = 1;
}

 








extern int game_uso_func_00E124();
void RiderAnim_flipStance_0000D6E4(char *a0) {
    int *p = (int *)&((RiderAnim *)(a0)) ->rider->flags;
    *p ^= 0x40;
    game_uso_func_00E124 (((RiderAnim *)(a0)) ->rider, a0);
    if ((*(int *)&((RiderAnim *)(a0)) ->rider->flags & 0x40) != 0) {
        ((RiderAnim *)(a0)) ->animSet = 0x00050000;
    } else {
        ((RiderAnim *)(a0)) ->animSet = 0x00010000;
    }
}

 









int RiderAnim_trickCrash_0000D74C(char *a0) {
    int arg;
    if (((RiderAnim *)(a0)) ->rider->contactCount) {
        D_802C676C (a0, 1);
        D_802C676C (a0, 2, 0);
        arg = ((RiderAnim *)(a0)) ->animSet | 0x0A ;
        if (((RiderAnim *)(a0)) ->rider->health <= 0) {
            arg = 0x0006000A;
            ((RiderAnim *)(a0)) ->rider->slowdown = 0x64;
        }
        D_802C676C (a0, 3, 0, arg);
        D_802C676C (a0, arg);
        D_802C676C (a0, 0);
        return 1;
    }
    return 0;
}

 








void RiderAnim_checkReverseBrake_0000D7F4(char *a0) {
    SnowBoarder *data = ((RiderAnim *)(a0)) ->rider;
    if (data->fwdSpeed < -20.0f) {
        if (data->contactCount != 0) {
            D_802C676C (a0, 1, 2);
            D_802C676C (a0, ((RiderAnim *)(a0)) ->animSet | 0x16 , 0, 1, 1, 1);
            D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE90 ), 1);
            D_802C676C (a0);
            ((RiderAnim *)(a0)) ->trickPhase = 0;
        }
    }
}

 



void RiderAnim_checkBrake_0000D8A8(char *a0) {
    if (((RiderAnim *)(a0)) ->rider->crouch != 0) {
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE70 ));
    }
}

 



















void RiderAnim_checkJump_0000D8EC(int *a0) {
    int *v0;
    int a1;

    if (((RiderAnim *)(a0)) ->rider->contactCount == 0) goto L_BC;
    if (*(int**)&D_00000000  != 0) {
        a1 = 0;
        if (((RiderAnim *)(a0)) ->jumpRepress != 0) {
            v0 = (int *)((RiderAnim *)(a0)) ->rider->input;
            if ((((RiderInput *)v0)->pressed & 0x100) != 0) a1 = 1;
        } else {
            v0 = (int *)((RiderAnim *)(a0)) ->rider->input;
            if ((((RiderInput *)v0)->held & 0x100) != 0) a1 = 1;
        }
        if (a1 != 0) {
            D_802C676C (a0, *(Pair2*)((char*)&D_00000000  + 0xEB8 ));
            ((RiderAnim *)(a0)) ->jumpCharge = 0;
            ((RiderAnim *)(a0)) ->jumpRepress = 0;
        }
    } else {
        ((RiderAnim *)(a0)) ->jumpCharge = 0;
        D_802C676C (a0);
    }
L_BC:
    if (((RiderAnim *)(a0)) ->rider->airFrames >= 11) {
        D_802C676C (a0);
    }
}

 














void RiderAnim_selectAnim_0000D9CC(char *arg0) {
    *(volatile double *)arg0 = 0.8;
    *(volatile double *)arg0 = -0.4;
    *(volatile double *)arg0 = 0.1;
}

                                                                  
                                                                  
                                                                   
                                  
  
                                          
  
                                                             
                          
                                                                         
                                                                        
                                                                       
                                                                         
                                                                           
                                                                        
                 
                                                                        
          
        
      
  
                           
                                                                   
                                                                   
                                                                  
                                                                    
                                                                    
                                                               
                     
                                                                      
                                                                      
                                                                
                                                            
 







extern void RiderAnim_enterState_0000D5BC(char *, Pair2);
extern char game_uso_D_807FF458;
extern char game_uso_D_807FF440;
void RiderAnim_checkRow_0000E1FC(char *obj) {
    SnowBoarder *s = ((RiderAnim *)(obj)) ->rider;
    char *sub = (char *)s;
    float raw, m;
    if(1){ sub += 0x740; }  
    if (!(((SnowBParm *)sub)->value > s->dnode.speed)) return;
    sub = (char *)s->input;
    if (!(((RiderInput *)sub)->pressed & 0x2000)) return;
    if (s->useDParms != 0) goto callA;
    raw = s->edge;
    m = (raw < 0.0f) ? -raw : raw;
    if (*(double *)((char *)&game_uso_D_807FF458  + 0x208 ) < (double)m) {
    callA:
        RiderAnim_enterState_0000D5BC(obj, *(Pair2 *)((char *)&game_uso_D_807FF458  + 0xE68 ));
    } else {
        RiderAnim_enterState_0000D5BC(obj, *(Pair2 *)((char *)&game_uso_D_807FF440 + 0xE50 ));
    }
}

 








extern char game_uso_D_807FF684;
void RiderAnim_holdJumpLift_0000E2D0(a0)
char *a0;
{
    int frame;
    char *block;
    float *acc;

    if (*(int*)&game_uso_D_807FF684 == 0 && (frame = ((RiderAnim *)(a0)) ->jumpCharge, frame >= 0)) {
        block = (char *)((RiderAnim *)(a0)) ->rider->input;
        if (((RiderInput *)block)->held & 0x300) {
            ((RiderAnim *)(a0)) ->jumpCharge = (s16)frame + 1;
            if ((s16)frame < ((RiderAnim *)(a0)) ->parms.jlt.value.i) {
                SnowBoarder *parent = ((RiderAnim *)(a0)) ->rider;
                acc = &parent->dnode.vel[1];
                if ((parent->groundFlags & 1) == 0) {
                    *acc += ((RiderAnim *)(a0)) ->parms.jli.value.f;
                }
            }
        } else {
            ((RiderAnim *)(a0)) ->jumpCharge = -1;
        }
    }
}

 













extern int *game_uso_D_807FFBC0;
extern char game_uso_D_807FF4B0;
extern char game_uso_D_807FF4B8;
extern char game_uso_D_807FF4C0;
extern void RiderAnim_addTrickPoints_0000EE30(char *, int, int);
extern void RiderAnim_playSpinSound_0000E564(int *);
extern int import_000B8518();
extern char import_800201D0;
int RiderAnim_startQueuedTrick_0000E35C(char *arg0) {
    volatile char *ret = arg0;
}

void RiderAnim_playSpinSound_0000E564(int *a0) {
    int v0 = ((RiderAnim *)(a0)) ->curTrick->inputMask;
    if (v0 & 0xC000) {
        D_802C676C (((RiderAnim *)(a0)) ->rider->sound);
        v0 = ((RiderAnim *)(a0)) ->curTrick->inputMask;
    }
    if (v0 & 0x3000) {
        D_802C676C (((RiderAnim *)(a0)) ->rider->sound);
    }
}

                                                                          
                                                                  
                                                                           
  
                                                                                     
                                                                         
                                                                                
                                                                                      
                                                
                                                                    
                                                                             
                                                                           
                                                                          
                                                                             
                                                                            
                                                                           
                                                                              
                                                                            
                                                                      
                                                                     
                                                                          
                                                                             
                                                                       
                                                                              
                                                                              
                                                                             
  
                                                                       
                                                                        
                                                                    
                                                                       
                                                                    
                                                                          
                                                                         
                                                                    
                                                                    
                                                                        
                                                                   
                                                                      
                                                                     
                                                                     
  
                                                            
                                                                     
  
                                                             
                                                            
                                                       
                                                
                                                                      
                                                
                                                
                                                
                                                
                                                     
                                                                    
                                                                
      
  
                           
                                                                
                                                                 
                                                                  
                                                             
                                                              
                                                                  
                                                                          
                                                                               
                                                                                  
                                                                                 
                                                                                
                                                                             
                                                                            
                                                                                
                                                                               
                                                           

                                                                                 
                                                                
                                                                   
                                                        
                                                                                 
                                                                           
                                                                       
                                                                      
  
                                                                       
                                                                   
                                                                          
                                                                           
                                                                          
                                                                      
                                                                            
                                                                            
                                                                            
                                                                            
                                                                          
                                                                             
                                                                      
                                                                            
                                                                         
                                                                        
                                                                        
                                                                          
                                                  
void RiderAnim_readTrickInput_0000E5C8(char *a0, int a1) {
    char *a3 = a0;
    unsigned int src;
    char *sub;
    unsigned int v0;

     
    if (((RiderAnim *)(a0)) ->curTrick != 0) {
        src = ((RiderAnim *)(a0)) ->rider->input->pressed;
    } else {
        src = ((RiderAnim *)(a0)) ->rider->input->held;
    }
     
    if (src & 0x200)   ((RiderAnim *)(a3)) ->trickButtons |= 0x2;
    if (src & 0x1000)  ((RiderAnim *)(a3)) ->trickButtons |= 0x4;
    if (src & 0x400)   ((RiderAnim *)(a3)) ->trickButtons |= 0x1;
    if (src & 0x10000) ((RiderAnim *)(a3)) ->trickButtons |= 0x10;
    if (src & 0x4000)  ((RiderAnim *)(a3)) ->trickButtons |= 0x20;
    if (src & 0x2000)  ((RiderAnim *)(a3)) ->trickButtons |= 0x40;
    if (src & 0x8000)  ((RiderAnim *)(a3)) ->trickButtons |= 0x80;

    v0 = ((RiderAnim *)(a3)) ->rider->flags;
    {
        unsigned int g = v0 & 0x20;
        RiderAnim_readStickSpin_0000EAF4(a3, g && (v0 & 0x40), g);
    }

    {
        int k = ((RiderAnim *)(a3)) ->spinKind;
        if (k != 0) {
            if (k != 5) {
                if (k != 6) {
                    if (k != 2) {
                        if (k != 1) {
                            if (k != 4) {
                                if (k != 3) {
                                } else goto c3;
                            } else goto c4;
                        } else goto c1;
                    } else goto c2;
                } else goto c6;
            } else goto c5;
        }
        goto cdone;
c5:     ((RiderAnim *)(a3)) ->trickButtons |= 0x20000; if (1) goto cdone;
c6:     ((RiderAnim *)(a3)) ->trickButtons |= 0x10000; if (1) goto cdone;
c2:     ((RiderAnim *)(a3)) ->trickButtons |= 0x4000;  if (1) goto cdone;
c1:     ((RiderAnim *)(a3)) ->trickButtons |= 0x1000;  if (1) goto cdone;
c4:     ((RiderAnim *)(a3)) ->trickButtons |= 0x8000;  if (1) goto cdone;
c3:     ((RiderAnim *)(a3)) ->trickButtons |= 0x2000;
cdone:  ;
    }

     
    {
        unsigned int e8 = ((RiderAnim *)(a3)) ->trickButtons;
        if (e8 & 0x4) {
            char *f4 = (char *)((RiderAnim *)(a3)) ->curTrick; if (1) {}
            *(unsigned int *)(a3 + 0xE8) = e8 & 0x3F007;
            if (f4 != 0) {
                unsigned int m = ((TrickEntry *)f4)->inputMask;
                if (m & 0x5000) {
                    *(unsigned int *)(a3 + 0xE8) &= 0xFFFF5FFF;
                    m = ((RiderAnim *)(a3)) ->curTrick->inputMask;
                }
                if (m & 0xA000) {
                    *(unsigned int *)(a3 + 0xE8) &= 0xFFFFAFFF;
                    m = ((RiderAnim *)(a3)) ->curTrick->inputMask;
                }
                if (m & 0xC000) {
                    if (m & 0x100000) {
                        *(unsigned int *)(a3 + 0xE8) |= 0x200000;
                    } else if (!(m & 0x200000)) {
                        *(unsigned int *)(a3 + 0xE8) |= 0x100000;
                    }
                }
            }
        }
    }

     
    if (((RiderAnim *)(a3)) ->trickButtons != 0) {
        *(int *)(a3 + 0xEC) += 1;
    } else {
        *(int *)(a3 + 0xEC) = 0;
    }

     
    {
        unsigned int t0 = ((RiderAnim *)(a3)) ->trickInputFrames;
        if (t0 > (unsigned int)((RiderAnim *)(a3)) ->parms.tkt.value.i) {
            unsigned int v1;
            char *base;
            char *obj;
            char *e;
            for (v1 = 0, base = *(char **)&game_uso_D_807FFBC0, obj = (char *)((RiderAnim *)(a3)) ->rider, e = base; v1 < *(unsigned int *)&D_00000000; v1++, e += 64) {
                if ((((TrickEntry *)e)->riderMask & ((SnowBoarder *)obj)->unk8C0) == 0) continue;
                if (((TrickEntry *)e)->inputMask != ((RiderAnim *)(a3)) ->trickButtons) continue;
                if ((((TrickEntry *)e)->flags & 4 ) && !(((SnowBoarder *)obj)->groundFlags & 0x1)) continue;
                if (((SnowBoarder *)obj)->contactCount != 0) continue;
                *(char **)(a3 + 0xF0) = base + v1 * 64;
                *(int *)(a3 + 0xE8) = 0;
                *(int *)(a3 + 0x12C) = 0;
                *(int *)(a3 + 0xEC) = 0;
                t0 = 0;
                break;
            }
            *(int *)(a3 + 0xE8) &= 0x6;
            if (t0 >= 21) {
                *(int *)(a3 + 0xEC) = 0;
                *(int *)(a3 + 0xE8) = 0;
            }
        }
    }
    (void)a1;
}




 




























extern int import_00096724();
extern int import_00096704();
extern int import_0010DB28();
extern char game_uso_D_807FF430;
extern char game_uso_D_807FF4E0;

void RiderAnim_checkGroundSpin_0000E91C(char *a0) {
    int pad;
    int cond;
    Pair2 homed;
    int pad2;

    ((RiderAnim *)(a0)) ->spinAnim = 0;
     

    cond = (((s32)((RiderAnim *)(a0)) ->rider->flags & 0x20) != 0);
    if (cond) {
        cond = (((s32)((RiderAnim *)(a0)) ->rider->flags & 0x40) != 0);
    }
    RiderAnim_readStickSpin_0000EAF4(a0, cond, (unsigned)((s32)((RiderAnim *)(a0)) ->rider->flags & 0x20));

    cond = (int)((RiderAnim *)(a0)) ->rider->input;
    if (((RiderInput *)cond)->held & 0x1000) {
        cond = ((RiderAnim *)(a0)) ->spinKind;
        if (cond == 2) goto L2;
        if (cond == 1) goto L1;
        if (cond == 4) goto L4;
        if (cond != 3) goto done_switch;
        goto L3;
    L2:
        ((RiderAnim *)(a0)) ->spinAnim = ((RiderAnim *)(a0)) ->animSet | 0x1B ;
        homed = *(Pair2 *)(&game_uso_D_807FF430 + 0xE40 );
        import_00096724(((RiderAnim *)(a0)) ->rider->sound);
        goto done_switch;
    L1:
        ((RiderAnim *)(a0)) ->spinAnim = ((RiderAnim *)(a0)) ->animSet | 0x18 ;
        homed = *(Pair2 *)(&game_uso_D_807FF4E0 + 0xEF0 );
        import_00096704(((RiderAnim *)(a0)) ->rider->sound);
        goto done_switch;
    L4:
        ((RiderAnim *)(a0)) ->spinAnim = ((RiderAnim *)(a0)) ->animSet | 0x1C ;
        homed = *(Pair2 *)(&game_uso_D_807FF430 + 0xE40 );
        import_00096724(((RiderAnim *)(a0)) ->rider->sound);
        goto done_switch;
    L3:
        ((RiderAnim *)(a0)) ->spinAnim = ((RiderAnim *)(a0)) ->animSet | 0x1A ;
        homed = *(Pair2 *)(&game_uso_D_807FF4E0 + 0xEF0 );
        import_00096704(((RiderAnim *)(a0)) ->rider->sound);
    done_switch:;
    }

    if (((RiderAnim *)(a0)) ->spinAnim != 0) {
        ((RiderAnim *)(a0)) ->spinKind = 0;
        import_0010DB28(a0, ((RiderAnim *)(a0)) ->spinAnim, 0, 1, 1, 1);
        RiderAnim_queueState_0000D5F8(a0, homed, 1);
        RiderAnim_clearState_0000D5DC(a0);
    }
}

                                                                         
                                                                  
                                                                  
                                                               
                                                               
                                             
  
                                                     
  
                                                                       
                          
                                            
                                 
                         
                                                                  
                                                                   
                                                  
                                                                               
                                                                            
                                                                  
                                                             
                                                 
      
  
                           
                                                                    
                                                                  
                                                                   
                                                                  
                                                                 
                       
                                                                              
                                                                            
                                                                           
                                                                              
                                                                                   
                                                                                 
                                                                                  
                                                                         
                                                    
                                                                           
                                                                          
                                                                            
                                                                            
                                                                            
                                                                      
                                                                           
                                                                             
                                                                               
 


int RiderAnim_readStickSpin_0000EAF4(char *obj, int a1, int a2) {
    int flag;
    int result;
    int d;
    int cur;
    int tgt;

    result = 0;
    flag = 0;
    tgt = (*(SnowBoarder * volatile *)&((RiderAnim *)(obj)) ->rider) ->input->stickDir;
    if (tgt != 0) {
        d = 0;
        cur = ((RiderAnim *)(obj)) ->lastStickDir;
        if (cur != 0) {
            d = tgt - cur;
        }
        if (d >= 8) d = 7 - d;
        if (d < -7) d = -7 - d;
        if (d >= 3 || d < -2) d = 0;
        if (((RiderAnim *)(obj)) ->spinFrames == 0) {
            ((RiderAnim *)(obj)) ->spinFrames = 1;
            ((RiderAnim *)(obj)) ->spinSteps = 0;
            ((RiderAnim *)(obj)) ->spinKind = 0;
        }
        if (d == 0) {
            cur = (int)(*(SnowBoarder * volatile *)&((RiderAnim *)(obj)) ->rider) ->input;
            if (((volatile RiderInput *)cur)->pressed & 0x10000) {
                d = -1;
            } else if (((volatile RiderInput *)cur)->pressed & 0x4000) {
                d = 1;
            } else if (((volatile RiderInput *)cur)->pressed & 0x2000) {
                ((RiderAnim *)(obj)) ->spinKind = 5;
            } else if (((volatile RiderInput *)cur)->pressed & 0x8000) {
                ((RiderAnim *)(obj)) ->spinKind = 6;
            }
        }
        ((RiderAnim *)(obj)) ->spinSteps = ((RiderAnim *)(obj)) ->spinSteps + d;
        tgt = (*(SnowBoarder * volatile *)&((RiderAnim *)(obj)) ->rider) ->input->stickDir;
    } else {
        flag = 1;
    }
    d = ((RiderAnim *)(obj)) ->spinFrames;
    ((RiderAnim *)(obj)) ->lastStickDir = tgt;
    if (d != 0) {
        ((RiderAnim *)(obj)) ->spinFrames = (short)d + 1;
        if ((short)d >= 6) {
            flag = 1;
        }
    }
    if (flag != 0) {
        if (((RiderAnim *)(obj)) ->spinFrames != 0) {
            ((RiderAnim *)(obj)) ->spinFrames = 0;
            if (a1 != 0) {
                if ((*(SnowBoarder * volatile *)&((RiderAnim *)(obj)) ->rider) ->flags & 0x80) {
                    ((RiderAnim *)(obj)) ->spinSteps = -((RiderAnim *)(obj)) ->spinSteps;
                }
            }
            if (a2 != 0) {
                ((RiderAnim *)(obj)) ->spinSteps = -((RiderAnim *)(obj)) ->spinSteps;
            }
            flag = ((RiderAnim *)(obj)) ->spinSteps;
            if (flag >= 3) {
                result = 4;
            } else if (flag > 0) {
                result = 3;
            } else if (flag < -2) {
                result = 2;
            } else if (flag < 0) {
                result = 1;
            }
            ((RiderAnim *)(obj)) ->spinKind = result;
        }
    }
    return result;
}

 
































                                                                                  
                                                                    
                                                                      
                                                                     
                                                                 
                                                                     
  
                                                                    
                                                                    
                                                                
                                                                 
                                                       
                                                                  
                                                                     
                                                                     
                                                                   
                                                                  
                                                
                                                               
                                                                    
                                 
 


void RiderAnim_updateSlowdown_0000ECEC(char *obj) {
    int ab[2];
    SnowBoarder *v;
    int *base;
    int idx = ((RiderAnim *)(obj)) ->hitKind;
    if (idx == 0) return;
    switch (idx - 1) {
        case 0: ab[1] = ((RiderAnim *)(obj)) ->parms.stm.value.i; ab[0] = ((RiderAnim *)(obj)) ->parms.st1.value.i; break;
        case 1: ab[1] = ((RiderAnim *)(obj)) ->parms.stm.value.i; ab[0] = ((RiderAnim *)(obj)) ->parms.st2.value.i; break;
        case 2: ab[1] = ((RiderAnim *)(obj)) ->parms.stm.value.i; ab[0] = ((RiderAnim *)(obj)) ->parms.st3.value.i; break;
        case 3: ab[1] = ((RiderAnim *)(obj)) ->parms.slm.value.i; ab[0] = ((RiderAnim *)(obj)) ->parms.sl1.value.i; break;
        case 4: ab[1] = ((RiderAnim *)(obj)) ->parms.slm.value.i; ab[0] = ((RiderAnim *)(obj)) ->parms.sl2.value.i; break;
    }
     

    base = &((RiderAnim *)(obj)) ->rider->slowdown;
    v = ((RiderAnim *)(obj)) ->rider;
    if ((ab[1] < v->slowdown) && (v->contactCount != 0)) {
        ((RiderAnim *)(obj)) ->hitKind = 0;
        ((RiderAnim *)(obj)) ->slowCrash = 1;
    } else {
        *base = ab[0] + *base;
        ((RiderAnim *)(obj)) ->slowCrash = 0;
    }
}

void RiderAnim_setHitKind_0000EDCC(int *a0, int a1) {
    ((RiderAnim *)(a0)) ->hitKind = a1;
}

 






















void RiderAnim_applyDamage_0000EDD4(int *a0, unsigned int a1, int a2) {
    int v0 = 0;
    int *p;
    (void)a2;
    switch (a1) {
        case 1: v0 = ((RiderAnim *)(a0)) ->parms.dm1.value.i; break;
        case 2: v0 = ((RiderAnim *)(a0)) ->parms.dm2.value.i; break;
        case 3: v0 = ((RiderAnim *)(a0)) ->parms.dm3.value.i; break;
        case 4: v0 = ((RiderAnim *)(a0)) ->parms.dm4.value.i; break;
        case 0: break;
    }
    p = &((RiderAnim *)(a0)) ->rider->health;
    *p = *p - v0;
}

void RiderAnim_addTrickPoints_0000EE30(char *a0, int a1, int a2) {
    int *dptr = (int*)((char*)&D_00000000 + 0x138);
    D_802C676C (*dptr, (int)((RiderAnim *)(a0)) ->rider, a1 * a2);
}

void RiderAnim_stateStopped(void *a0) {
    ((RiderAnim *)(a0)) ->rider->slowdown = 100;
}

 






extern char game_uso_D_807FF488;
void RiderAnim_stateSwitchStance(int *a0) {
    int a1;
    ((RiderAnim *)(a0)) ->rider->unkA74 = 0.0f;
    ((RiderAnim *)(a0)) ->rider->airSpin = 0.0f;
    if (((RiderAnim *)(a0)) ->rider->useDParms != 0) {
        a1 = ((RiderAnim *)(a0)) ->animSet | 0x24 ;
    } else {
        a1 = ((RiderAnim *)(a0)) ->animSet | 0x1D ;
    }
    game_uso_func_077C44 (a0, a1, 0, 1, 1, 1);
    RiderAnim_queueState_0000D5F8((char *)a0, *(Pair2 *)((char *)&game_uso_D_807FF488 + 0xE98 ), 1);
    RiderAnim_clearState_0000D5DC((char *)a0);
}

 

void RiderAnim_stateFlipToRide(int a0) {
    D_802C676C (a0);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE40 ));
    D_802C676C (a0);
    D_802C676C (a0);
}

 























extern int D_802C676C();
void RiderAnim_stateSwitchStanceEnd(int *a0) {
    int *s0 = a0;
    D_802C676C (a0);






    D_802C676C (((RiderAnim *)(s0)) ->rider, 0x3F800000);    

    D_802C676C (s0);
    if (((RiderAnim *)(s0)) ->rider->contactCount == 0) {
        D_802C676C (s0);
        D_802C676C (s0, *(Pair2 *)((char *)&D_00000000 + 0xDF8 ));
    } else {
        D_802C676C (s0, 1);
        if (((RiderAnim *)(s0)) ->rider->useDParms != 0) {
            D_802C676C (s0, *(Pair2 *)((char *)&D_00000000 + 0xE60 ));
            D_802C676C (s0);
        } else {
            D_802C676C (s0, *(Pair2 *)((char *)&D_00000000 + 0xE40 ));
            D_802C676C (s0);
        }
    }
}

 













extern int import_0010DB28();
extern int import_000966AC();
void RiderAnim_jumpTakeoff_0000F360(int *a0);
void RiderAnim_clearTricks_00011888(int *a0);
extern char game_uso_D_807FF4A0;
void RiderAnim_statePreJump(int *a0) {
    volatile int *ret = a0;
}

 















extern void RiderAnim_startHop_0001001C(int *);
extern void RiderAnim_enterState_0000D5BC(char *, Pair2);
extern char game_uso_D_807FFB58;
extern char game_uso_D_807FF498;
void RiderAnim_statePreJumpHold(int *a0, int *a1) {
     
    *(volatile double *)a0 = 0.06;
}

 







extern int D_802C676C();
void RiderAnim_statePreJumpCancel(int *a0) {
    int m;
    D_802C676C (((RiderAnim *)(a0)) ->rider->sound);
    if (((RiderAnim *)(a0)) ->rider->useDParms != 0) {
        m = (0x20000  | 0x08 );
        D_802C676C (a0, *(Pair2 *)((char *)&D_00000000 + 0xE60 ), -1);
    } else {
        m = ((RiderAnim *)(a0)) ->animSet | 0x08 ;
        D_802C676C (a0, *(Pair2 *)((char *)&D_00000000 + 0xE40 ), -1);
    }
    ((RiderAnim *)(a0)) ->jumpRepress = 1;
    D_802C676C (a0);
    D_802C676C (a0, m, 0, 0, 0x100, ((RiderAnim *)(a0)) ->parms.jot.value.i);
}

 







































extern void import_00096874(int);
extern void RiderAnim_startHop_0001001C(int *);
void RiderAnim_jumpTakeoff_0000F360(int *a0) {
    int v0 = ((RiderAnim *)(a0)) ->jumpCharge;
    int *p;
    char *b770, *b510, *b788, *b31C;
    float f2, f0;
    if (v0 < 0) {
        ((RiderAnim *)(a0)) ->jumpCharge = 0;
        v0 = ((RiderAnim *)(a0)) ->jumpCharge;
    }
    p = (int *)((RiderAnim *)(a0)) ->rider;
    f2 = ((RiderAnim *)(a0)) ->parms.jca.value.f * (float)v0;
    b770 = (char*)p; if (1) { b770 += 0x770; }  
    b510 = (char*)p; if (1) { b510 += 0x510; }  
    if (((SnowBoarder *)p)->useDParms != 0) {
        b788 = (char*)p; if (1) { b788 += 0x788; }  
        f0 = ((SnowBParm *)b788)->value + f2;
    } else {
        f0 = ((SnowBParm *)b770)->value + f2;
    }
    if (((SnowBoarder *)p)->surface == 'b') {
        f0 = (float)(0.7 * (double)f0);
    }
    b31C = (char*)p; if (1) { b31C += 0x31C; }  
    f0 *= ((SnowBParm *)b510)->value;
    *(float*)(b31C) = *(float*)(b31C) + f0;
    ((RiderAnim *)(a0)) ->queuedTrick = 0;
    import_00096874((int)((RiderAnim *)(a0)) ->rider->sound);
    RiderAnim_startHop_0001001C(a0);
}

extern void RiderAnim_readTrickInput_0000E5C8(char *, int);
void RiderAnim_stateTrickAir(int *a0) {
    char *w;
    float *pa;
    float *pb;
    float *pc;

    ((RiderAnim *)(a0)) ->rider->unkA18 = 0;
    ((RiderAnim *)(a0)) ->trickPhase = 1;
    w = (char *)((RiderAnim *)(a0)) ->rider;
    pa = (float*)(w + 0x170);  
    pb = (float*)(w + 0x698);  
    pc = (float*)(w + 0x31C);  
    if ((((SnowBoarder *)w)->groundFlags & 1) == 0) {
        pc[0] += -pa[4] * pb[4];
        RiderAnim_holdJumpLift_0000E2D0((char*)a0, pa, pb);
    }
    RiderAnim_readTrickInput_0000E5C8((char*)a0, 0);
}

 





 


void RiderAnim_stateTrickEnd(int *a0) {
    ((RiderAnim *)(a0)) ->trickPhase = 2;
    if (((RiderAnim *)(a0)) ->curTrick->flags & 1 ) {
        D_802C676C (a0);
    }
    ((RiderAnim *)(a0)) ->rider->unkA18 = 1;
    ((RiderAnim *)(a0)) ->curTrick = 0;
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xDF0 ));
    D_802C676C (a0);
}

 




void RiderAnim_stateTrickWindup(int *a0) {
    RiderInput *p2;
    D_802C676C (a0);
     

    ((RiderAnim *)(a0)) ->rider->unkA68 = 1;
    p2 = ((RiderAnim *)(a0)) ->rider->input;
    if (!(p2->held & 0x200)) {
        D_802C676C (a0,
            *(Pair2*)((char*)&D_00000000 + 0xED8 ));
    } else {
        D_802C676C (a0);
        D_802C676C (a0, 1, 1);
    }
    D_802C676C (a0);
}

extern int D_802C676C();
typedef struct { int a, b; } F5A8Pair;
extern char game_uso_D_807FF4D0;
extern char game_uso_D_807FF4D8;
int RiderAnim_trickCrash_0000D74C(char *a0);
void RiderAnim_stateTrickStart(char *a0);
 











void RiderAnim_stateTrickRelease(int *a0) {
    int *s0 = a0;
    if (((RiderAnim *)(s0)) ->queuedTrick != 0) {
        if (RiderAnim_trickCrash_0000D74C((char*)a0) == 0) {
            char *p = (char *)&game_uso_D_807FF4D0 + 0xEE0 ;
            RiderAnim_enterState_0000D5BC((char*)s0, *(Pair2*)p);
            RiderAnim_stateTrickStart((char*)s0);
        }
    } else {
        import_0010DB28(s0, ((RiderAnim *)(s0)) ->curTrick->anim, 3, 1, 1, 1);
        RiderAnim_queueState_0000D5F8((char*)s0,
            *(Pair2 *)((char *)&game_uso_D_807FF4D8 + 0xEE8 ), 1);
        RiderAnim_clearState_0000D5DC((char*)s0);
    }
}

 



void RiderAnim_stateTrickHold(char *a0) {
    D_802C676C (a0, ((RiderAnim *)(a0)) ->curTrick->anim, 2, 3, 1, 1);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xEC8 ), 3);
    D_802C676C (a0, 0);
}

 














extern char game_uso_D_807FF4B0;
extern char game_uso_D_807FF4B8;
extern char game_uso_D_807FF4C0;
extern int import_000B8518();
void RiderAnim_stateTrickStart(char *a0) {
    volatile char *ret = a0;
}

 


void RiderAnim_stateRowIn(int *a0) {
    D_802C676C (a0, ((RiderAnim *)(a0)) ->animSet, 0, 0, 0x100, 5);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE50 ), -1);
}

 



















extern char game_uso_D_807FF448;
typedef struct { float x, y, z; } F948_Vec3;
void RiderAnim_stateRow(int *a0) {
    F948_Vec3 vc;
    volatile int padcb[3];
    F948_Vec3 vb;
    volatile int padba[2];
    F948_Vec3 a;
    float *q;
    float scale;
    float mx, my, mz;
    volatile int padbot[5];

    import_0010DB28(a0, ((RiderAnim *)(a0)) ->animSet, 0, 2, 1, 1);
    RiderAnim_queueState_0000D5F8((char*)a0, *(Pair2*)((char*)&game_uso_D_807FF448 + 0xE58 ), 2);

    q = ((RiderAnim *)(a0)) ->rider->dnode.axes[2];
    scale = ((RiderAnim *)(a0)) ->parms.rfc.value.f;
    mx = q[0] * scale;
    my = q[1] * scale;
    mz = q[2] * scale;
    a.x = mx;
    a.y = my;
    a.z = mz;
    vb = a;
    vc = vb;

    q = ((RiderAnim *)(a0)) ->rider->dnode.vel;
    q[0] += vc.x;
    q[1] += vc.y;
    q[2] += vc.z;
}

 



void RiderAnim_stateRowOut(int *a0) {
    game_uso_func_00000000 (a0, ((RiderAnim *)(a0)) ->animSet, 2, 1, 1, 1);
    game_uso_func_00000000 (a0);
    game_uso_func_00000000 (a0, *(Pair2*)((char*)&D_00000000 + 0xE40 ), 1);
}

 


void RiderAnim_stateResumeRide(int a0) {
    D_802C676C (a0);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE40 ));
    D_802C676C (a0);
}

 


void RiderAnim_stateCrashRecover(int *a0) {
    D_802C676C (a0);
    if (((RiderAnim *)(a0)) ->slowCrash != 0) {
        D_802C676C (a0, ((RiderAnim *)(a0)) ->selectedAnim, 2, 1, 1, 1);
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE40 ), 1);
    }
}

 
void RiderAnim_startCrashSlide_0000FB7C(int *a0) {
    int v = ((RiderAnim *)(a0)) ->animSet | 0x0A ;
    ((RiderAnim *)(a0)) ->selectedAnim = v;
    D_802C676C (a0, v, 0, 2, 1, 1);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE88 ), 2);
    D_802C676C (a0);
    ((RiderAnim *)(a0)) ->trickPhase = 0;
}

void RiderAnim_blendTurn_0000FBF8(int *a0) {
    int v = ((RiderAnim *)(a0)) ->animSet;
    game_uso_func_00000000 (a0, v | 2, v | 3,
        *(int*)&((RiderAnim *)(a0)) ->rider->edge, 0, 1);
}

extern int D_802C676C();
extern char D_00000000;
 




















extern char game_uso_D_807FF400;
extern char game_uso_D_807FF410;
void RiderAnim_enterState_0000D5BC(char *, Pair2);
void RiderAnim_queueState_0000D5F8(char *a0, Pair2 pair, int a3);
void game_uso_func_0000D5BC_a3(char *, Pair2, char *);   
extern int import_0010DB28();
void RiderAnim_startOllie_0000FC34(int *a0) {
    SnowBoarder *base = ((RiderAnim *)(a0)) ->rider;
    RiderInput *flag_loc = base->input;
    SnowBParm *field_770;
    field_770 = &base->parms.jmp;
    if ((flag_loc->held & 0x100) == 0) {
        float *field_31C;
        field_31C = &base->dnode.vel[1];
        do {
            *field_31C = (float)((double)field_770->value

                * 0.8
                + (double)*field_31C);
        } while (0);
        game_uso_func_0000D5BC_a3 ((char*)a0,
            *(Pair2*)((char*)&game_uso_D_807FF400 + 0xE10 ), field_770);
    }
    import_0010DB28(a0, (0x30000  | 0x01 ), 2, 2, 0x100 , 0xA);
    RiderAnim_queueState_0000D5F8((char*)a0,
        *(Pair2*)((char*)&game_uso_D_807FF410 + 0xE20 ), -1);
}

extern char game_uso_D_807FF408;
void RiderAnim_clearState_0000D5DC(char *a0);
 













void RiderAnim_stateOllieTakeoff(int *a0) {
    int *s0 = a0;
     
    RiderInput *flags = ((RiderAnim *)(s0)) ->rider->input;

    if ((flags->held & 0x100) == 0) {
        float zero;
        SnowBParm *base_788;
        float *base_31C;
        float *base_2FC;
        import_0010DB28(s0, (0x30000  | 0x01 ), 2, 3, 1, 1);
        RiderAnim_queueState_0000D5F8((char*)s0,
            *(Pair2 *)((char *)&game_uso_D_807FF408 + 0xE18 ), 3);
        RiderAnim_clearState_0000D5DC((char*)s0);

        zero = 0.0f;
        base_788 = &((RiderAnim *)(s0)) ->rider->parms.djp;
        base_31C = &((RiderAnim *)(s0)) ->rider->dnode.vel[1];
        base_31C[0] = base_788->value + base_31C[0];
        base_2FC = ((RiderAnim *)(s0)) ->rider->dnode.angVel;
        base_2FC[3] = 1.0f;
        base_2FC[2] = zero;
        base_2FC[1] = zero;
        base_2FC[0] = zero;
    }
}

 












void RiderAnim_stateOllieRise(int *a0) {
    SnowBoarder *base = ((RiderAnim *)(a0)) ->rider;
    if (base->dnode.vel[1] < -1.0f) {
        if (base->groundDist < 1000.0f) {
            D_802C676C (a0, (0x30000  | 0x01 ), 6, 6, 0x100 , 0x14);
            D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE28 ), -1);
            D_802C676C (a0);
        } else {
            D_802C676C (a0, (0x30000  | 0x01 ), 3, 4, 1, 1);
            D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE30 ), 4);
        }
    }
}

 

void RiderAnim_stateOllieHang(char *a0) {
    D_802C676C (a0, (0x30000  | 0x01 ), 4, 5, 2, 1);
    if (((RiderAnim *)(a0)) ->rider->groundDist < 1000.0f) {
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE38 ));
    }
}

 




void RiderAnim_stateOllieLand(char *a0) {
    if (((RiderAnim *)(a0)) ->rider->contactCount != 0) {
        D_802C676C (a0, (0x30000  | 0x01 ), 6, 1, 1, 1);
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE10 ), 1);
    }
}

 


void RiderAnim_stateOllieDrop(int *a0) {
    D_802C676C (a0, (0x30000  | 0x01 ), 5, 6, 1, 1);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE28 ), 6);
}

 



void RiderAnim_startHop_0001001C(int *a0) {
    ((RiderAnim *)(a0)) ->curTrick = 0;
    D_802C676C (a0);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xDD0 ));
    D_802C676C (a0);
}

 

extern int D_802C676C();
extern char D_00000000;
void RiderAnim_stateHopStart(int *a0) {
     
    D_802C676C (a0,
                     ((RiderAnim *)(a0)) ->animSet | 0x19 ,
                     0, 2,
                     0x100, 10);
     
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xDD8 ), -1);
     

    {
        RiderInput *mid = ((RiderAnim *)(a0)) ->rider->input;
        if (mid->pressed & 0x400) {
            D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xDE0 ));
        }
    }
     
    D_802C676C (a0);
     
    D_802C676C (a0, 0);
     
    D_802C676C (a0);
}

 



























































extern char game_uso_D_807FF3D0;
extern char game_uso_D_807FF3D8;
extern char game_uso_D_807FF3E0;
extern void RiderAnim_queueState_0000D5F8(char *, Pair2, int);
extern void RiderAnim_clearState_0000D5DC(char *);
extern void RiderAnim_readTrickInput_0000E5C8(char *, int);
extern int RiderAnim_startQueuedTrick_0000E35C(char *);
extern void RiderAnim_holdJumpLift_0000E2D0();
extern void RiderAnim_checkBackwardSwitch_00011750(char *);
void RiderAnim_stateHopRise(int *a0) {
    TrickEntry *inner;
    int *mid;

    ((RiderAnim *)(a0)) ->rider->unkA18 = 1;
    mid = (int *)((RiderAnim *)(a0)) ->rider->input;
    if ((((RiderInput *)mid)->pressed & 0x400) != 0) {
        RiderAnim_enterState_0000D5BC((char*)a0,
                         *(Pair2*)((char*)&game_uso_D_807FF3D0 + 0xDE0 ));
    }
    if (((RiderAnim *)(a0)) ->rider->groundDist < 1000.0f) {
        if (((RiderAnim *)(a0)) ->rider->contactCount != 0) {
            RiderAnim_enterState_0000D5BC((char*)a0,
                             *(Pair2*)((char*)&game_uso_D_807FF3D8 + 0xDE8 ));
        }
        inner = ((RiderAnim *)(a0)) ->curTrick;
        if ((inner != 0) && (inner->flags & 1 )) {
            import_0010DB28(a0,
                             ((RiderAnim *)(a0)) ->animSet | 0x19 ,
                             5, 5, 1, 1);
        } else {
            import_0010DB28(a0,
                             ((RiderAnim *)(a0)) ->animSet | 0x19 ,
                             5, 5, 0x100, 10);
        }
    } else {
        import_0010DB28(a0,
                         ((RiderAnim *)(a0)) ->animSet | 0x19 ,
                         2, 3, 1, 1);
        RiderAnim_queueState_0000D5F8((char*)a0,
                         *(Pair2*)((char*)&game_uso_D_807FF3E0 + 0xDF0 ),
                         3);
        RiderAnim_clearState_0000D5DC((char*)a0);
    }
    RiderAnim_readTrickInput_0000E5C8((char*)a0, 0);
    if (RiderAnim_startQueuedTrick_0000E35C((char*)a0) == 0) {
        RiderAnim_holdJumpLift_0000E2D0((char*)a0);
        RiderAnim_checkBackwardSwitch_00011750((char*)a0);
    }
}

 


































extern char game_uso_D_807FF3D8;
extern char game_uso_D_807FF3D0;
extern char game_uso_D_807FF3E8;
void RiderAnim_stateHopLand(char *a0);
void RiderAnim_checkBackwardSwitch_00011750(char *obj);
extern void import_0010DB28_void();
void RiderAnim_stateHopAir(int *a0) {
  int *s0 = a0;
  SnowBoarder *v0;
  int new_var;
  RiderAnim_holdJumpLift_0000E2D0((char *)a0);
  import_0010DB28_void(s0, ((RiderAnim *)(s0)) ->animSet | 0x19 , 3, 4, 2, 1);
  v0 = ((RiderAnim *)(s0)) ->rider;
  if ((v0->dnode.vel[1] < 0.0f) && (v0->groundDist < 1000.0f))
  {
    RiderAnim_enterState_0000D5BC((char *)s0, *((Pair2 *) (((char *) (&game_uso_D_807FF3D8)) + 0xDE8 )));
    v0 = ((RiderAnim *)(s0)) ->rider;
  }
  if (((RiderInput *) (new_var = (int) v0->input))->pressed & 0x400)
  {
    RiderAnim_enterState_0000D5BC((char *)s0, *((Pair2 *) (((char *) (&game_uso_D_807FF3D0)) + 0xDE0 )));
  }
  RiderAnim_readTrickInput_0000E5C8((char *)s0, 0);
  if (RiderAnim_startQueuedTrick_0000E35C((char *)s0) == 0)
  {
    ;
    if (((RiderAnim *)(s0)) ->rider->contactCount != 0)
    {
      RiderAnim_enterState_0000D5BC((char *)s0, *((Pair2 *) (((char *) (&game_uso_D_807FF3E8)) + 0xDF8 )));
      RiderAnim_stateHopLand((char *)s0);
    }
    RiderAnim_checkBackwardSwitch_00011750((char *)s0);
  }
}

 





void RiderAnim_stateHopDrop(int *arg0) {
    D_802C676C (arg0, ((RiderAnim *)(arg0)) ->animSet | 0x19 , 4, 5, 1, 1);
    D_802C676C (arg0, 0);
    if (D_802C676C (arg0) == 0) {
        if (((RiderAnim *)(arg0)) ->rider->contactCount != 0) {

            D_802C676C (arg0, *(Pair2*)((char*)&D_00000000 + 0xDF8 ));
            D_802C676C (arg0);
        }
    }
}

 


void RiderAnim_stateHopLand(char *a0) {

    D_802C676C (a0);
    ((RiderAnim *)(a0)) ->rider->unkA18 = 1;
    D_802C676C (a0, 0);

    if (D_802C676C (a0) == 0) {
        if (((RiderAnim *)(a0)) ->rider->contactCount != 0) {
            D_802C676C (a0, 1);
            D_802C676C (a0);
            D_802C676C (a0, ((RiderAnim *)(a0)) ->animSet | 0x19 , 5, 1, 1, 1);
            D_802C676C (a0, *(Pair2 *)((char *)&D_00000000 + 0xE10 ), 1);
            D_802C676C (a0);
        }
    }
}

 


void RiderAnim_stateCushionIn(char *a0) {
    D_802C676C (a0, (0x10000  | 0x25 ), 0, 0, 0x100 , 5);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE08 ), -1);
    ((RiderAnim *)(a0)) ->hitScale = ((RiderAnim *)(a0)) ->parms.lnc.value.f;
}

 




void RiderAnim_stateCushion(int *a0) {
    game_uso_func_00000000 (a0, (0x10000  | 0x25 ), 0, 1, 1, 1);
    game_uso_func_00000000 (a0, *(Pair2*)((char*)&D_00000000 + 0xE00 ), 1);
    game_uso_func_00000000 (a0);
}

 







void RiderAnim_stateCushionEnd(void *a0) {
    ((RiderAnim *)(a0)) ->hitScale = 1.0f;
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xDF8 ));
    D_802C676C (a0);
}

 







void RiderAnim_stateRide(int *a0) {
     
    *(volatile double *)a0 = 0.06;
}

 











void RiderAnim_stateRideDeep(int *a0) {
     
    *(volatile double *)a0 = 0.06;
}

 










extern int import_0010DB78();
extern void RiderAnim_enterState_0000D5BC(char *, Pair2);
extern void RiderAnim_checkGroundSpin_0000E91C(char *);
extern void RiderAnim_checkJump_0000D8EC(int *);
extern void RiderAnim_checkReverseBrake_0000D7F4(char *);
extern char game_uso_D_807FF400;
extern char game_uso_D_807FF460;
void RiderAnim_stateBrake(int *a0) {
    SnowBoarder *p;
    import_0010DB78(a0, ((RiderAnim *)(a0)) ->animSet | 0x04 , ((RiderAnim *)(a0)) ->animSet | 0x05 , *(int *)&((RiderAnim *)(a0)) ->rider->edge, 0, 1);
    p = ((RiderAnim *)(a0)) ->rider;
    if (p->crouch == 0) {
        RiderAnim_enterState_0000D5BC((char *)a0, *(Pair2 *)((char *)&game_uso_D_807FF400 + 0xE10 ));
        p = ((RiderAnim *)(a0)) ->rider;
    }
    if (p->useDParms != 0) {
        RiderAnim_enterState_0000D5BC((char *)a0, *(Pair2 *)((char *)&game_uso_D_807FF460 + 0xE70 ));
    }
    RiderAnim_checkGroundSpin_0000E91C((char *)a0);
    RiderAnim_checkJump_0000D8EC(a0);
    RiderAnim_checkReverseBrake_0000D7F4((char *)a0);
}

 









void RiderAnim_stateBrakeDeep(int *a0) {
    volatile int *ret = a0;
}

 


void RiderAnim_stateRideBlendIn(char *a0) {
    int v0;
    D_802C676C (a0);
    v0 = ((RiderAnim *)(a0)) ->animSet;
    D_802C676C (a0, v0 | 2, v0 | 3, *(int *)&((RiderAnim *)(a0)) ->rider->edge, 0x100, 10);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE40 ), -1);
}

 




void RiderAnim_stateRideDeepBlendIn(int *a0) {
    D_802C676C (a0);
    D_802C676C (a0, (0x20000  | 0x02 ), (0x20000  | 0x03 ), *(int *)&((RiderAnim *)(a0)) ->rider->edge, 0x100 , 5);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE60 ), -1);
}

 



void RiderAnim_blendWeight_00010BAC(char *a0) {
    int state = ((RiderAnim *)(a0)) ->animSet;
    D_802C676C (a0, state | 7, state | 6, *(int *)&((RiderAnim *)(a0)) ->rider->localUp.x, 0, 1);

    if (((RiderAnim *)(a0)) ->unkD8 == 0) {
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE10 ));
    }

    if (((RiderAnim *)(a0)) ->rider->useDParms != 0) {
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE48 ));
    }
}

 




void RiderAnim_blendWeightDeep_00010C4C(char *a0) {
    D_802C676C (a0, (0x20000  | 0x07 ), (0x20000  | 0x06 ),
                     *(int *)&((RiderAnim *)(a0)) ->rider->localUp.x, 0, 1);

    if (((RiderAnim *)(a0)) ->unkD8 == 0) {
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE48 ));
    }

    if (((RiderAnim *)(a0)) ->rider->useDParms == 0) {
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE10 ));
    }
}

void RiderAnim_stateBrakeBlendIn(char *a0) {
    SnowBoarder *sub;

    sub = ((RiderAnim *)(a0)) ->rider;
    if (sub->useDParms != 0) {
        D_802C676C (a0, (0x20000  | 0x04 ), (0x20000  | 0x05 ), *(int *)&sub->edge, 0x100 , 10);
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE78 ), -1);
    } else {
        int state;

        state = ((RiderAnim *)(a0)) ->animSet;
        D_802C676C (a0, state | 4, state | 5, *(int *)&sub->edge, 0x100, 10);
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xE80 ), -1);
    }
    D_802C676C (a0);
}

 


void RiderAnim_startLanding_00010DC8(int a0) {
    game_uso_func_00000000 (a0, ((RiderAnim *)(a0)) ->animSet | 0x09 , 0, 1, 1, 1);
    game_uso_func_00000000 (a0, *(Pair2*)((char*)&D_00000000 + 0xE10 ), 1);
}

 



void RiderAnim_restartRide_00010E2C(int a0) {
    game_uso_func_00000000 (a0, 0, 0, 1, 1, 1);
    game_uso_func_00000000 (a0, *(Pair2*)((char*)&D_00000000 + 0xE40 ), 1);
}

void RiderAnim_stateGoalNormal(int a0) {
    game_uso_func_00000000 (a0, (0x70000  | 0x05 ), 0, 1, 1, 1);
}

void RiderAnim_stateGoalWinOM(int a0) {
    game_uso_func_00000000 (a0, (0x70000  | 0x0F ), 0, 1, 1, 1);
}

void RiderAnim_stateGoalWin(int a0) {
    game_uso_func_00000000 (a0, (0x70000  | 0x03 ), 0, 1, 1, 1);
}

void RiderAnim_stateGoalLose(int a0) {
    game_uso_func_00000000 (a0, (0x70000  | 0x04 ), 0, 1, 1, 1);
}

void RiderAnim_stateTimeUpLose(int a0) {
    game_uso_func_00000000 (a0, (0x70000  | 0x04 ), 0, 1, 1, 1);
}

 



void RiderAnim_stateStand(int *a0) {
    game_uso_func_00000000 (a0, (0x70000  | 0x00 ), 0, 1, 1, 1);
    ((RiderAnim *)(a0)) ->trickPhase = 0;
    ((RiderAnim *)(a0)) ->rider->slowdown = 100;
    game_uso_func_00000000 (a0, *(Pair2*)((char*)&D_00000000 + 0xF58 ));
}

 




















extern int D_802C676C();
extern char D_00000000;
void RiderAnim_startTimeout_00011024(int *a0) {
  int v;
  int *p_B4 = (int *) ((RiderAnim *)(a0)) ->rider;
  ((RiderAnim *)(a0)) ->pendingState = *((Pair2 *) (((char *) (&D_00000000)) + 0xF48 ));  
  ;
  p_B4 = (int *) &((SnowBoarder *) p_B4)->flags;
 goto dummy_label_965124; dummy_label_965124: ;
  *p_B4 = (*p_B4) & (~4);
  D_802C676C (a0, *((Pair2 *) (((char *) (&D_00000000)) + 0xE10 )));
  D_802C676C (a0);
  ((RiderAnim *)(a0)) ->rider->slowdown = 0x64;
}


 










void RiderAnim_startFinish_000110A4(int *a0) {
  char *new_var;
  int *new_var2;
  int *p_B4 = (int *) ((RiderAnim *)(a0)) ->rider;
  int *new_var3;
  int v;
 do { } while (0);
  new_var = ((char *) (&D_00000000)) + 0xF20 ;
  new_var3 = a0;
  ((RiderAnim *)(a0)) ->pendingState = *((Pair2 *) new_var);  
  ;
  new_var2 = (p_B4 = (int *) &((SnowBoarder *) p_B4)->flags);
  *p_B4 = (*new_var2) & (~4);
  D_802C676C (a0, *((Pair2 *) (((char *) (&D_00000000)) + 0xE10 )));
  D_802C676C (a0);
  ((RiderAnim *)(new_var3)) ->rider->slowdown = 0x64;
}


 







void RiderAnim_stateTimeUp(int *a0) {
    D_802C676C (a0);
    D_802C676C (a0, *(Pair2*)((char*)&D_00000000 + 0xF50 ), 1);
}

 






























 


void RiderAnim_stateFinish(int *a0) {
    D_802C676C (a0);

    if (((RiderAnim *)(a0)) ->rider->raceResult == 1) {
        if (*(int*)((char*)&D_00000000  + 0x7C) != 0) {
             


            D_802C676C (a0, *(Pair2*)((char*)&D_00000000  + 0xF28 ), 1);
            return;
        }
        if (*(int*)((char*)&D_00000000  + 0x64) < 2) {
            D_802C676C (a0, *(Pair2*)((char*)&D_00000000  + 0xF30 ), 1);
        } else {
            D_802C676C (a0, *(Pair2*)((char*)&D_00000000  + 0xF38 ), 1);
        }
        return;
    }
     

    D_802C676C (a0, *(Pair2*)((char*)&D_00000000  + 0xF40 ), 1);
}

 






























extern int func_00000000();
extern char game_uso_D_807FF508;
void RiderAnim_startEndingCpu_00011258(int *a0) {
    int *p;
    game_uso_func_077C44 (a0, (0x70000  | 0x09 ), 0, 2, 1, 1);
    RiderAnim_queueState_0000D5F8((char*)a0, *(Pair2*)((char*)&game_uso_D_807FF508 + 0xF18 ), 2);
    RiderAnim_clearState_0000D5DC((char*)a0);
    p = (int *)&((RiderAnim *)(a0)) ->rider->flags;
    *p = *p & ~0x800;
}

 



extern char game_uso_D_807FF508;
void RiderAnim_startEnding_000112E0(int *a0) {
    int *p;
    game_uso_func_077C44 (a0, (0x70000  | 0x08 ), 0, 2, 1, 1);
    RiderAnim_queueState_0000D5F8((char*)a0, *(Pair2*)((char*)&game_uso_D_807FF508 + 0xF18 ), 2);
    RiderAnim_clearState_0000D5DC((char*)a0);
    p = (int *)&((RiderAnim *)(a0)) ->rider->flags;
    *p = *p & ~0x800;
}

 


void RiderAnim_stateEnding1(int *a0) {
    game_uso_func_00000000 (a0, ((RiderAnim *)(a0)) ->player.anim, 2, 3, 1, 1);
    game_uso_func_00000000 (a0, *(Pair2*)((char*)&D_00000000 + 0xF08 ), 3);
}

 


void RiderAnim_stateEnding2(int *a0) {
    game_uso_func_00000000 (a0, ((RiderAnim *)(a0)) ->player.anim, 3, 4, 1, 1);
    game_uso_func_00000000 (a0, *(Pair2*)((char*)&D_00000000 + 0xF10 ), 4);
}

void RiderAnim_stateEnding3(int *a0) {
    game_uso_func_00000000 (a0, ((RiderAnim *)(a0)) ->player.anim, 4, 1, 1, 1);
}

 

void RiderAnim_stateStartIntro(int *a0) {
    int v = (int)(((RiderAnim *)(a0)) ->rider->character % 5U);
    int a1 = (v + 0x0A ) | 0x70000 ;
    func_00000000 (a0, a1, 0, 2, 1, 1);
    func_00000000 (a0, *(Pair2 *)((char *)&D_00000000 + 0xEF8 ), 2);
    func_00000000 (a0, *(Pair2 *)((char *)&D_00000000 + 0xF00 ));
}
 


void RiderAnim_stateStartIntroEnd(int *a0) {
    game_uso_func_00000000 (a0, ((RiderAnim *)(a0)) ->player.anim, 2, 1, 1, 1);
    game_uso_func_00000000 (a0, *(Pair2*)((char*)&D_00000000 + 0xDB8 ), 1);
}

 






extern int D_802C676C();
void RiderAnim_stateStartWait(int *a0) {
    int val = 100;
    if (*(int*)((char*)&D_00000000  + 0x78) == 0) {
        ((RiderAnim *)(a0)) ->rider->slowdown = 0;
        D_802C676C (a0, *(Pair2*)((char*)&D_00000000  + 0xE40 ));
    } else {
        ((RiderAnim *)(a0)) ->rider->slowdown = val;
        D_802C676C (a0, ((RiderAnim *)(a0)) ->animSet | 0x08 , 0, 1, 6, 1);
    }
}

void RiderAnim_stateIdle(void *a0) {
    ((RiderAnim *)(a0)) ->rider->slowdown = 100;
}

void RiderAnim_playHitAnim_000115EC(int *a0, int a1) {
    ((RiderAnim *)(a0)) ->selectedAnim = a1;
    game_uso_func_00000000 (a0);
    game_uso_func_00000000 (a0);
    ((RiderAnim *)(a0)) ->trickPhase = 0;
    game_uso_func_00000000 (a0);
}

 







void RiderAnim_startHitAnim_00011624(int *a0) {
    D_802C676C (a0);
    D_802C676C (a0, ((RiderAnim *)(a0)) ->selectedAnim, 0, 1, 1, 1);
    if (((RiderAnim *)(a0)) ->rider->health <= 0) {
        D_802C676C (a0, *(Pair2 *)((char *)&D_00000000 + 0xDC8 ), 1);
    } else {
        D_802C676C (a0, *(Pair2 *)((char *)&D_00000000 + 0xE40 ), 1);
    }
    ((RiderAnim *)(a0)) ->trickPhase = 0;
}

 






void RiderAnim_crashRecover_000116D4(void *a0) {
    void *s0 = a0;
    D_802C676C (s0);
    if (((RiderAnim *)(s0)) ->slowCrash != 0) {
        D_802C676C (s0, ((RiderAnim *)(s0)) ->selectedAnim, 2, 1, 1, 1);
        D_802C676C (s0, *(Pair2 *)((char *)&D_00000000 + 0xE40 ), 1);
    }
    ((RiderAnim *)(s0)) ->trickPhase = 0;
}

                                                                              
                                                                  
                                                                   
                                                                     
  
                                             
  
                                                                                      
                          
                                                                        
                                                                          
               
                                                                        
                                                                           
                                                                          
                                               
                                                                           
                                                      
                                                                           
                                                                         
        
      
  
                           
                                                                  
                                                             
                                                           
                                                                 
                                                              
                                                                   
                                                   
                                                                   
                                                                  
                                                                   
                                                               
                                    
 
















extern char game_uso_D_807FF490;
void RiderAnim_checkBackwardSwitch_00011750(char *obj) {
    short cnt;
    if (((RiderAnim *)(obj)) ->rider->fwdSpeed < -30.0f) {    
        cnt = ((RiderAnim *)(obj)) ->backHits;
        ((RiderAnim *)(obj)) ->backHits = cnt + 1;         
        if (cnt < 3) return;                       
        ((RiderAnim *)(obj)) ->backHits = 0;
        if (((RiderAnim *)(obj)) ->rider->useDParms != 0) {
            game_uso_func_077C44 (obj, ((RiderAnim *)(obj)) ->animSet | 0x24 , 0, 0, 0x100 , 5);
            RiderAnim_queueState_0000D5F8(obj, *(Pair2 *)((char *)&game_uso_D_807FF490 + 0xEA0 ), -1);
        } else {
            game_uso_func_077C44 (obj, ((RiderAnim *)(obj)) ->animSet | 0x1D , 0, 0, 0x100 , 5);
            RiderAnim_queueState_0000D5F8(obj, *(Pair2 *)((char *)&game_uso_D_807FF490 + 0xEA0 ), -1);
        }
        RiderAnim_clearState_0000D5DC(obj);
    } else {
        ((RiderAnim *)(obj)) ->backHits = 0;               
    }
}

void RiderAnim_clearRiderEdge_00011868(int *a0) {
    ((RiderAnim *)(a0)) ->rider->edge = 0.0f;
    ((RiderAnim *)(a0)) ->rider->edgeSteer = 0.0f;
    ((RiderAnim *)(a0)) ->rider->edgeSlope = 0.0f;
}

void RiderAnim_clearTricks_00011888(int *a0) {
    ((RiderAnim *)(a0)) ->trickButtons = 0;
    ((RiderAnim *)(a0)) ->trickInputFrames = 0;
    ((RiderAnim *)(a0)) ->queuedTrick = 0;
    ((RiderAnim *)(a0)) ->spinKind = 0;
}

 




void RiderAnim_hitFeedback_0001189C(int *a0, int a1, int a2) {
    int *s0 = a0;
    int s1 = a2;
    switch (a1) {
    case 1:
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->input, (char *)&D_00000000 + 0x109C , 10);
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->sound, s1);
        break;
    case 3:
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->input, (char *)&D_00000000 + 0x10AC , 10);
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->sound, s1);
        break;
    case 2:
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->input, (char *)&D_00000000 + 0x10A4 , 10);
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->sound, s1);
        break;
    case 4:
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->input, (char *)&D_00000000 + 0x10C0 , 10);
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->sound, s1);
        break;
    case 5:
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->input, (char *)&D_00000000 + 0x10DC , 10);
        func_00000000 ((int)((RiderAnim *)(s0)) ->rider->sound, s1);
        break;
    }
}

void game_readFloatParm_000119D4(char *dst) {
    int tmp;
    stream_readS32_0000C194(&tmp);
    stream_readF32_0000C1D0((float*)(dst + 0x10));
}

void game_readVec3Parm_00011A04(char *dst) {
    int tmp;
    stream_readS32_0000C194(&tmp);
    stream_readVec3_0000C20C((Vec3*)(dst + 0x10));
}

void game_readQuadParm_00011A34(char *dst) {
    int tmp;
    stream_readS32_0000C194(&tmp);
    stream_read16_0000C27C((Quad4*)(dst + 0x10));
}

void game_readIntParm_00011A64(char *dst) {
    int tmp;
    stream_readS32_0000C194(&tmp);
    stream_readS32_0000C194((int*)(dst + 0x10));
}

 








extern char import_8006ED80;
void *game_ItemType_create_00011A94(int *arg0) {
    int *p2;
    int *head;
    int *p1;
    p1 = (int*)func_802C676C (sizeof(ColourSubItem));
    if (p1 != 0) {
        game_uso_func_051C28 (p1);
        ((Node *)(p1)) ->vptr = (char *)&import_8006ED80;
        ((ColourSubItem *)p1)->unk3C = 0;
    }
    p2 = p1;
    p1 = arg0;
    head = (int*)((ItemType *)(p1)) ->unk40;
    if ((int*)((ItemType *)(p1)) ->unk40 != 0) {
        game_uso_func_07ACE0 (&((Node *)(p2)) ->children, head);
        if (((Node *)(head)) ->parent != 0) {
            ((Node *)(head)) ->unk04 = 1;
        }
        ((Node *)(head)) ->parent = (Node *)p2;
    }
    return p2;
}




