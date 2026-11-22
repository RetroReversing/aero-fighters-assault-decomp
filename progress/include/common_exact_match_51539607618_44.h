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










 















 


 


























































 







 



 



 









 









 






 


 
 





















 












































 








































 




















 











 

typedef struct NodeLink {
      void *item;
      struct NodeLink *next;
} NodeLink;

typedef struct Node {
      s32 unk00;           
      s32 unk04;           
      s32 flags;           
      const char *name;    
      NodeLink *children;  
      struct Node *parent;  
      s32 doFlags;         


      s32 serial;          
      s32 handle;          
      s32 unk24;
      char *vptr;          
} Node;


typedef char Node_size_check[sizeof(Node) == 0x2C ? 1 : -1];
typedef char Node_name_check[(int)&((Node *)0)->name == 0x0C ? 1 : -1];
typedef char Node_serial_check[(int)&((Node *)0)->serial == 0x1C ? 1 : -1];
typedef char Node_vptr_check[(int)&((Node *)0)->vptr == 0x28 ? 1 : -1];


 


typedef struct GdlVtEnt {
      s16 delta;
      s16 pad;
      s32 (*fn)();
} GdlVtEnt;



 




 




typedef struct NodeMsg {
      s32 tag;
      union {
        s32 value;                  
        char *payload;              
        s32 *cursor;                

    } arg;
      Node *reply;          
} NodeMsg;







 






typedef struct NodeMsgTransPayload {
      char unk00[0xEC];
      f32 trans[3];
} NodeMsgTransPayload;


typedef char NodeMsg_reply_check[(int)&((NodeMsg *)0)->reply == 0x8 ? 1 : -1];
typedef char NodeMsgTransPayload_trans_check[(int)&((NodeMsgTransPayload *)0)->trans == 0xEC ? 1 : -1];


 

 

typedef struct AppVersion {
    s32 w[17];
} AppVersion;

typedef struct App {
      Node node;
      s32 unk2C;
      s32 unk30;           
      s32 unk34[2];
      AppVersion version;  
} App;


typedef char App_unk30_check[(int)&((App *)0)->unk30 == 0x30 ? 1 : -1];
typedef char App_version_check[(int)&((App *)0)->version == 0x3C ? 1 : -1];











 


















 
typedef struct AnimKey {
      s32 frame;
      f32 rate;             
} AnimKey;

 
typedef struct AnimNodeKey {
      s16 trans[3];         
      s16 quat[4];          
} AnimNodeKey;

 

typedef struct AnimPose {
      f32 trans[3];
      f32 scale[3];
      f32 quat[4];
} AnimPose;

 
typedef struct AnimData {
      s16 numNodes;        
      s16 numFrames;       
      s32 state;           
      s32 frameData;       
      s32 numKeys;         
      AnimKey *keys;       
      s32 fileOffset;      
      struct AnimDataMgr *mgr;
      s32 keepKeys;        
} AnimData;

 
typedef struct AnimGroup {
      AnimData *anims;       
      s32 count;
      struct AnimDataMgr *mgr;
} AnimGroup;

 
typedef struct AnimFrameSlot {
      s32 pose;            
      s32 frame;           
      AnimData *anim;       
      s32 inUse;           
      s16 pending;         
      s16 pad12;
} AnimFrameSlot;

typedef struct AnimFrameCache {
      AnimFrameSlot *slots;
      s32 count;
} AnimFrameCache;

 
typedef struct AnimDataMgr {
      Node node;
      s32 version;         
      AnimGroup *groups;     
      s32 numGroups;
      s32 numNodes;        
      s32 file;            
      AnimFrameCache cache;
} AnimDataMgr;

 








 




typedef struct AnimPlayer {
      Node node;
      s32 unk2C;
      NodeLink *animators;  
      s32 slot0;           
      s32 slot1;
      s32 unk3C;
      s32 unk40;
      s32 pose0;           
      s32 pose1;
      s32 frame0;          
      s32 frame1;          
      f32 frac;            
      AnimDataMgr *mgr;
      s32 unk5C;
      s32 unk60;
      s32 eventKey;        
      s32 blendEvent;      
      s32 blendFrames;     
      s32 blendCount;
      s32 anim;            
      f32 time;            
      s32 startKey;        
      s32 endKey;
      s32 reqStartKey;     
      s32 reqEndKey;
      s32 weightAnimNeg;   
      s32 weightAnimPos;   
      f32 weight;
      s32 flags;           
      s32 unk9C;
      s32 updateCount;     
      s32 updateInterval;  
      f32 blendWeight;     
      s32 blendLeft;       
} AnimPlayer;

typedef char AnimPlayer_size_check[sizeof(AnimPlayer) == 0xB0 ? 1 : -1];

typedef char AnimPlayer_anim_check[(int)&((AnimPlayer *)0)->anim == 0x74 ? 1 : -1];
typedef char AnimPlayer_flags_check[(int)&((AnimPlayer *)0)->flags == 0x98 ? 1 : -1];

typedef char AnimData_size_check[sizeof(AnimData) == 0x20 ? 1 : -1];
typedef char AnimFrameSlot_size_check[sizeof(AnimFrameSlot) == 0x14 ? 1 : -1];
typedef char AnimDataMgr_size_check[sizeof(AnimDataMgr) == 0x48 ? 1 : -1];
typedef char AnimPose_size_check[sizeof(AnimPose) == 0x28 ? 1 : -1];

 



typedef struct Animator {
      Node node;
      char pad02C[0x48 - 0x2C];
      s32 unk48;          
      s32 unk4C;          
      s32 unk50;          
      s32 target;         
      AnimPose rest;      
      AnimPose cur;
      char pad0A8[0xD0 - 0xA8];
      AnimPose dst;       
      char pad0F8[0x10C - 0xF8];
      s32 nodeIndex;      
      s32 unk110;         
      char pad114[0x130 - 0x114];
} Animator;

typedef char Animator_size_check[sizeof(Animator) == 0x130 ? 1 : -1];

typedef char Animator_dst_check[(int)&((Animator *)0)->dst == 0xD0 ? 1 : -1];
typedef char Animator_nodeIndex_check[(int)&((Animator *)0)->nodeIndex == 0x10C ? 1 : -1];





 









typedef struct MNode {
      Node node;
      s32 mflags;          
      f32 mtx[4][4];       
      f32 cmtx[4][4];      
      s32 mtxMode;         
} MNode;

 



typedef struct QNode {
      MNode mnode;
      AnimPose vqs;       
      AnimPose cvqs;      
} QNode;

 




typedef struct SNode {
      Node node;
      char mtx[0x30];      
      f32 pos[3];          
      s32 unk68;
      f32 height;          
      f32 scale;           
      f32 rotX;            
      f32 rotY;            
      f32 rotZ;            
      f32 radius;          
      struct SNode *next;  
} SNode;

typedef char MNode_size_check[sizeof(MNode) == 0xB4 ? 1 : -1];

typedef char MNode_cmtx_check[(int)&((MNode *)0)->cmtx == 0x70 ? 1 : -1];
typedef char QNode_vqs_check[(int)&((QNode *)0)->vqs == 0xB4 ? 1 : -1];
typedef char QNode_cvqs_check[(int)&((QNode *)0)->cvqs == 0xDC ? 1 : -1];

typedef char SNode_size_check[sizeof(SNode) == 0x88 ? 1 : -1];

typedef char SNode_radius_check[(int)&((SNode *)0)->radius == 0x80 ? 1 : -1];

















 

 








 
typedef struct GdlParmTag {
    s32 v;
} GdlParmTag;

typedef struct GdlParmBase {
      struct GdlParmBase *next;  
      GdlParmTag tag;
      s32 unk08;                 
      void *type;                
} GdlParmBase;

 
typedef struct GdlParmList {
      const char *name;          
      GdlParmBase *first;        
} GdlParmList;




 







typedef struct GdlParm {
      GdlParmBase *next;    
      GdlParmTag tag;       
      s32 unk08;            
      void *type;           
      s32 value;
      s32 unk14;            
} GdlParm;

typedef struct GdlParmF {
      GdlParmBase *next;    
      GdlParmTag tag;       
      s32 unk08;            
      void *type;           
      f32 value;
      s32 unk14;
} GdlParmF;

typedef char GdlParm_size_check[sizeof(GdlParm) == 0x18 ? 1 : -1];

 


typedef struct GdlParms {
      const char *name;     
      GdlParmBase *first;   
} GdlParms;

 




typedef struct TimeGadgetParms {
      const char *name;     
      GdlParmBase *first;   
      GdlParm xps;          
      GdlParm yps;          
      GdlParm lbx;          
      GdlParm lby;          
      GdlParm l2x;          
      GdlParm l2y;          
} TimeGadgetParms;

typedef char TimeGadgetParms_size_check[sizeof(TimeGadgetParms) == 0x98 ? 1 : -1];

 

typedef struct CountDownParms {
      const char *name;
      GdlParmBase *first;   
      GdlParm xps;
      GdlParm yps;
      GdlParm shx;          
      GdlParm shy;          
} CountDownParms;

typedef char CountDownParms_size_check[sizeof(CountDownParms) == 0x68 ? 1 : -1];

 








typedef struct Gadget {
      Node node;           
      TimeGadgetParms parms;
      f32 colour[4];       
      s32 unkD4;           
      s32 alpha;           
      s32 labelAlpha;      
      s32 font;            
      char text[0x20];     
      char *label1;        
      char *label2;        
      char sprite0[0x18];  
      char sprite1[0x18];  
} Gadget;

typedef char Gadget_size_check[sizeof(Gadget) == 0x13C ? 1 : -1];

typedef char Gadget_colour_check[(int)&((Gadget *)0)->colour == 0xC4 ? 1 : -1];
typedef char Gadget_text_check[(int)&((Gadget *)0)->text == 0xE4 ? 1 : -1];
typedef char Gadget_label2_check[(int)&((Gadget *)0)->label2 == 0x108 ? 1 : -1];
typedef char Gadget_sprite1_check[(int)&((Gadget *)0)->sprite1 == 0x124 ? 1 : -1];


 






 



typedef struct BoardsGadget {
      Node node;
      TimeGadgetParms parms;  
      f32 colour[4];
      s32 unkD4;
      s32 unkD8;
      char unkDC[0x10C - 0xDC];
      s32 count;
      char sprite[0x30];
} BoardsGadget;

typedef char BoardsGadget_size_check[sizeof(BoardsGadget) == 0x140 ? 1 : -1];

typedef char BoardsGadget_count_check[(int)&((BoardsGadget *)0)->count == 0x10C ? 1 : -1];


 



typedef struct CountDownGadget {
      Node node;
      CountDownParms parms;
      f32 colour[4];
      s32 unkA4;           
      s32 alpha;           
      s32 arg1;            
      s32 arg2;            
      char secsText[8];
      char csText[8];
      s32 blink;
      s32 unkC8;           
      s32 lastSecs;
      s32 secs;
} CountDownGadget;

typedef char CountDownGadget_size_check[sizeof(CountDownGadget) == 0xD4 ? 1 : -1];



 


typedef struct FloatPosParms {
      const char *name;     
      GdlParmBase *first;   
      GdlParmF xps;
      GdlParmF yps;
} FloatPosParms;

typedef char FloatPosParms_size_check[sizeof(FloatPosParms) == 0x38 ? 1 : -1];

 









typedef struct PointsPopup {
      Node node;           
      FloatPosParms parms;  


      f32 colour[4];       
      s32 unk74;           
      s32 alpha;           
      s32 unk7C;
      s32 unk80;
      s32 unk84;           
      f32 scaleX;          
      f32 scaleY;
      s32 unk90;
      s32 state;           
      s32 value;           
      s32 timer;           
      char *font;          

      f32 velX;
      f32 velY;
      f32 accelY;          
      s32 arg;             
      char text[0xD4 - 0xB4];  


} PointsPopup;

typedef char PointsPopup_size_check[sizeof(PointsPopup) == 0xD4 ? 1 : -1];

typedef char PointsPopup_state_check[(int)&((PointsPopup *)0)->state == 0x94 ? 1 : -1];
typedef char PointsPopup_y_check[(int)&((PointsPopup *)0)->parms.yps.value == 0x5C ? 1 : -1];




 
typedef struct GadgetRGBA {
    f32 r, g, b, a;
} GadgetRGBA;

 













typedef struct CoolGadget {
      Node node;
      TimeGadgetParms parms;
      s32 seg;             
      s32 cur;             
      s32 target;          
      s32 labelAlpha;      
      s32 total;           
      f32 colour[4];       
      GadgetRGBA lowColour;   
      GadgetRGBA midColour;   
      GadgetRGBA pulseLo;     
      GadgetRGBA pulseHi;
      f32 phase;           
      f32 step;            
      char *label1;        
      char *label2;        
      char barSprite[0x18];    
      char capSprite[0x18];    
      char label1Sprite[0x18];  
      char label2Sprite[0x18];  
} CoolGadget;

typedef char CoolGadget_size_check[sizeof(CoolGadget) == 0x198 ? 1 : -1];

typedef char CoolGadget_colour_check[(int)&((CoolGadget *)0)->colour == 0xD8 ? 1 : -1];
typedef char CoolGadget_phase_check[(int)&((CoolGadget *)0)->phase == 0x128 ? 1 : -1];
typedef char CoolGadget_sprite_check[(int)&((CoolGadget *)0)->label2Sprite == 0x180 ? 1 : -1];




 







typedef struct TrickPointsGadget {
      Node node;
      PointsPopup *slots[8];  
      s32 unk4C;
      s32 font;            
      s32 popupArg;        
      s32 popupArg2;       
      s32 text[4];         
      s32 points[4];       
      s32 head;            
      s32 tail;            
      s32 count;           
      s32 scroll;          
      s32 age[4];          
      s32 alpha[4];
      s32 x[4];            
      s32 y[4];
      GadgetRGBA colour;   
      GadgetRGBA pointsColour;  
      s32 allIdle;         
      char sprite0[0x18];  
      char sprite1[0x18];  
      char sprite2[0x18];  
      char sprite3[0x18];  
      char sprite4[0x18];  
} TrickPointsGadget;

typedef char TrickPointsGadget_size_check[sizeof(TrickPointsGadget) == 0x168 ? 1 : -1];

typedef char TrickPointsGadget_y_check[(int)&((TrickPointsGadget *)0)->y == 0xBC ? 1 : -1];
typedef char TrickPointsGadget_allIdle_check[(int)&((TrickPointsGadget *)0)->allIdle == 0xEC ? 1 : -1];




 
typedef struct GdlParmRGBA {
      GdlParmBase *next;    
      GdlParmTag tag;       
      s32 unk08;            
      void *type;           
      f32 value[4];
      s32 unk20;            
} GdlParmRGBA;



 




typedef struct CourseGadgetParms {
      const char *name;    
      GdlParmBase *first;  
      GdlParm xps;         
      GdlParm yps;
      GdlParm mx0;         
      GdlParm my0;         
      GdlParm sx0;
      GdlParm sy0;
      GdlParm mx1;
      GdlParm my1;         
      GdlParm gx0;
      GdlParm gy0;
      GdlParm pxp;
      GdlParm pyp;
      GdlParm bxp;
      GdlParm byp;
      GdlParmRGBA col;
      GdlParm adz;
} CourseGadgetParms;

typedef char CourseGadgetParms_size_check[sizeof(CourseGadgetParms) == 0x194 ? 1 : -1];

 






typedef struct CourseGadget {
      Node node;
      CourseGadgetParms parms;
      s32 arg1;            
      s32 x;               
      s32 y;
      f32 pct[2];          
      f32 marker[2][2];    
      f32 originX;         
      f32 originZ;         
      f32 extent;          
      s32 course;          
      char sprites[11][0x18];  
} CourseGadget;

typedef char CourseGadget_size_check[sizeof(CourseGadget) == 0x2FC ? 1 : -1];

typedef char CourseGadget_course_check[(int)&((CourseGadget *)0)->course == 0x1F0 ? 1 : -1];
typedef char CourseGadget_my1_check[(int)&((CourseGadget *)0)->parms.my1.value == 0xEC ? 1 : -1];







 




















 
typedef struct GdlParmV3 {
      char head[0xC];       
      void *type;            
      f32 value[3];
      s32 unk1C;            
} GdlParmV3;

 
typedef struct DNodeParms {
      const char *name;    
      s32 head;            
      GdlParmF imp;        
      GdlParmF spd;        
      GdlParmF spl;
      GdlParmF spw;
      GdlParmF gvt;        
      GdlParmF suc;
      GdlParmF vsc;        
      GdlParmF usc;
      GdlParmF tsc;        
      GdlParmV3 cog;       
      GdlParmF unc;
      GdlParmF dsc;
      GdlParmF csc;
      GdlParmF rad;
      GdlParmV3 cts;
} DNodeParms;

 



typedef struct DNodeAccum {
      f32 weight;
      f32 pointSum[3];      
      f32 force[3];
      f32 torque[3];
      f32 origin[3];        
} DNodeAccum;

typedef struct DNode {
     
      MNode mnode;
      AnimPose vqs;        
      AnimPose cvqs;       
      s32 unk104;
      DNodeParms parms;
      f32 surfImp;         
      f32 surfSpd;
      f32 surfVsc;
      DNodeAccum impulseAcc;  
      DNodeAccum moveAcc;     
      f32 angVel[4];       
      f32 velDir[3];       
      f32 vel[3];
      f32 worldCog[3];     
      f32 velDelta[3];     
      f32 lastVel[3];
      f32 speed;           
      f32 unk34C[3];       
      char pad358[0x360 - 0x358];
      f32 friction;        
      char pad364[0x38C - 0x364];
      s32 unk38C;          
      f32 unk390[3];       
      s32 attached;        


      s32 unk3A0;          
      f32 unk3A4[3];       
      f32 axes[3][3];      

} DNode;

typedef char DNodeParms_size_check[sizeof(DNodeParms) == 0x180 ? 1 : -1];
typedef char DNodeAccum_size_check[sizeof(DNodeAccum) == 0x34 ? 1 : -1];
typedef char GdlParmV3_size_check[sizeof(GdlParmV3) == 0x20 ? 1 : -1];
typedef char DNode_size_check[sizeof(DNode) == 0x3D4 ? 1 : -1];
typedef char DNode_parms_check[(int)&((DNode *)0)->parms == 0x108 ? 1 : -1];
typedef char DNode_impulse_check[(int)&((DNode *)0)->impulseAcc == 0x294 ? 1 : -1];
typedef char DNode_vel_check[(int)&((DNode *)0)->vel == 0x318 ? 1 : -1];
typedef char DNode_speed_check[(int)&((DNode *)0)->speed == 0x348 ? 1 : -1];
typedef char DNode_friction_check[(int)&((DNode *)0)->friction == 0x360 ? 1 : -1];
typedef char DNode_attached_check[(int)&((DNode *)0)->attached == 0x39C ? 1 : -1];
typedef char DNode_axes_check[(int)&((DNode *)0)->axes == 0x3B0 ? 1 : -1];
typedef char DNode_tsc_check[(int)&((DNode *)0)->parms.tsc.value == 0x1E0 ? 1 : -1];
typedef char DNode_cog_check[(int)&((DNode *)0)->parms.cog.value == 0x1F8 ? 1 : -1];



 




typedef struct PhysQNode {
      MNode mnode;
      AnimPose vqs;
      AnimPose cvqs;
      s32 unk104;
      DNode *owner;        
      f32 probeA[3];       
      f32 probeB[3];       
} PhysQNode;

 






typedef struct Friction {
      MNode mnode;
      AnimPose vqs;
      AnimPose cvqs;
      s32 unk104;
      f32 prevContact[3];  
      f32 contactDelta[3];  

      f32 contactPoint[3];  

      f32 unk12C[3];       
      char pad138[0x144 - 0x138];
      f32 unk144;          
      f32 unk148;          
      s32 unk14C;          
      f32 coef;            
      f32 limit;           
      char pad158[0x160 - 0x158];
      s32 unk160;          
      f32 offsetLen;       
      s32 unk168;          
      DNode *owner;        
} Friction;

typedef char PhysQNode_size_check[sizeof(PhysQNode) == 0x124 ? 1 : -1];
typedef char Friction_size_check[sizeof(Friction) == 0x170 ? 1 : -1];
typedef char Friction_coef_check[(int)&((Friction *)0)->coef == 0x150 ? 1 : -1];









 
















 


typedef struct SnowBRec3 {
    int a, b, c;
} SnowBRec3;

 
typedef struct SnowBVec3 {
    f32 x, y, z;
} SnowBVec3;

 
typedef struct SnowBParm {
    char pad00[0xC];         
    void *vptr;              
    f32 value;               
    s32 unk14;               
} SnowBParm;

 


typedef struct SnowBoarderParms {
    const char *name;        
    s32 unk04;               
    SnowBParm hpf;           
    SnowBParm snf, dsf, icf;  
    SnowBParm tfc, edf, bdf;  
    SnowBParm ure;           
    SnowBParm mro, mpi;      
    SnowBParm mdr;           
    SnowBParm axr, ayr, azr;  
    SnowBParm tlt;           
    SnowBParm wfr;           
    SnowBParm sfr, dts;      
    SnowBParm nts;           
    SnowBParm trt;           
    SnowBParm twt, min;      

    SnowBParm max;           

    SnowBParm jmp, djp, ufs, bdm, cdm;  
    SnowBParm tch;           
} SnowBoarderParms;

 



typedef struct SnowBChildParms {
    const char *name;        
    s32 unk04;               
    SnowBParm ied, ifr;      
    SnowBParm ded, dfr;      
    SnowBParm efr;           
    SnowBParm nbf, nel;      
    SnowBParm dbf, del;      
    SnowBParm res;           
    SnowBParm flx;           
    SnowBParm sta;           


} SnowBChildParms;

typedef struct SnowBChild {
    char pad00[0x2C];
    SnowBChildParms parms;   
} SnowBChild;

struct SnowAI;
struct RiderAnim;
struct CourseMarker;

 


typedef struct RiderInput {
    f32 stickX;              
    f32 stickY;              
    signed char rawX;        
    signed char rawY;        
    char pad0A[0x10 - 0x0A];
    s32 held;                

    s32 unk14;
    s32 pressed;             


    char pad1C[0x7C - 0x1C];
    s16 stickDir;            


} RiderInput;

typedef struct SnowBoarder {
    DNode dnode;             























    char pad3D4[0x3DC - 0x3D4];
    s32 riding;              


    char pad3E0[0x3EC - 0x3E0];
    SnowBChild child;       
    SnowBoarderParms parms;  
    RiderInput *input;       

    struct SnowAI *ai;       

    char sound[0xC];         


    char *unk814;            
    char *unk818;            
    char *unk81C;            
    char *bodyNodes[7];      






    char pad83C[0x840 - 0x83C];
    struct RiderAnim *anim;  

    char *top;               

    s32 controller;          

    char pad84C[0x850 - 0x84C];
    char *light;             
    char *unk854;            

    char *headShape;         

    char *bodySkin;          
    char *unk860;            
    char *boardNode;         

    char *dispTrails;        

    char *dispSpray;         

    char *trails;            
    char *camSource;         







    char pad878[0x88C - 0x878];  


    s16 collHitMask;         
    s16 collCategory;        
    SnowBVec3 prevPos;       
    SnowBVec3 prevVel;       
    char pad8A8[0x8B8 - 0x8A8];
    s32 unk8B8;              
    s32 initFlags;           

    s32 unk8C0;              
    u32 character;           

    s16 boardBin[10];        



    char *camera;            


    f32 tint[4];             
    char pad8F0[0x8F4 - 0x8F0];
    SnowBRec3 *unk8F4[3];    



    s16 unk900;              
    s16 unk902;              
    s16 board;               

    char pad906[0x908 - 0x906];
    struct SnowBoarder *rival;  

    char pad90C[0x910 - 0x90C];
    f32 impactScale;         
    char pad914[0x91C - 0x914];
    f32 unk91C;              

    SnowBVec3 penetration;   
    SnowBVec3 impactVel;     
    s32 contactCount;        

    SnowBVec3 contactNormal;  
    SnowBVec3 lastContactNormal;  
    struct CourseMarker *marker;  
    struct CourseMarker *markerLink;  
    s32 noGroundFrames;      

    s32 slowdown;            

    char pad964[0x968 - 0x964];
    f32 contactDepth;        
    char pad96C[0x970 - 0x96C];
    f32 edge;                


    f32 edgeSteer;           
    f32 edgeSlope;           

    char pad97C[0x990 - 0x97C];
    s32 crouch;              
    char pad994[0x9A0 - 0x994];
    s16 groundSurface;       
    s16 surface;             

    s16 contactSurface;      
    char pad9A6[0x9A8 - 0x9A6];
    s32 groundFlags;         
    char pad9AC[0x9B8 - 0x9AC];
    SnowBVec3 linkDir;       
    char pad9C4[0x9CC - 0x9C4];
    s32 useDParms;           
    f32 groundDist;          
    s32 airFrames;           
    SnowBVec3 groundNormal;  
    f32 groundPlaneD;        
    f32 shade[4];            


    f32 edgeFriction;        
    f32 edgeGrip;            
    f32 turnRate;            
    SnowBVec3 localUp;       

    u16 hitFlags;            

    char padA12[0xA14 - 0xA12];
    s32 health;              

    s32 unkA18;              
    f32 bumpSide;            


    f32 bumpUp;              
    f32 bumpFwd;             
    s32 unkA28;              
    char padA2C[0xA30 - 0xA2C];
    u8 groundColor[4];       
    char padA34[0xA38 - 0xA34];
    f32 fwdSpeed;            
    char padA3C[0xA40 - 0xA3C];
    char *unkA40;            

    s32 unkA44;              

    char padA48[0xA4C - 0xA48];
    s32 onGround;            
    s32 groundGentle;        
    s32 raceResult;          

    u32 flags;               
    s32 shake;               

    char padA60[0xA68 - 0xA60];
    s32 unkA68;              
    s16 spinHold;            
    char padA6E[0xA70 - 0xA6E];
    f32 airSpin;             
    f32 unkA74;              
    f32 maxSpeed;            
    char padA7C[0xA80 - 0xA7C];
    s32 msgCooldown;         
    s32 landImpact;          
    char padA88[0xA8C - 0xA88];
} SnowBoarder;

 










 

 
typedef char snowb_assert_0x0B4[(int)&((SnowBoarder *)0)->dnode.vqs.trans == ( 0x0B4) ? 1 : -1] ;
typedef char snowb_assert_0x0CC[(int)&((SnowBoarder *)0)->dnode.vqs.quat == ( 0x0CC) ? 1 : -1] ;
typedef char snowb_assert_0x0DC[(int)&((SnowBoarder *)0)->dnode.cvqs.trans == ( 0x0DC) ? 1 : -1] ;
typedef char snowb_assert_0x0F4[(int)&((SnowBoarder *)0)->dnode.cvqs.quat == ( 0x0F4) ? 1 : -1] ;
typedef char snowb_assert_0x170[(int)&((SnowBoarder *)0)->dnode.parms.gvt == ( 0x170) ? 1 : -1] ;
typedef char snowb_assert_0x288[(int)&((SnowBoarder *)0)->dnode.surfImp == ( 0x288) ? 1 : -1] ;
typedef char snowb_assert_0x2FC[(int)&((SnowBoarder *)0)->dnode.angVel == ( 0x2FC) ? 1 : -1] ;
typedef char snowb_assert_0x318[(int)&((SnowBoarder *)0)->dnode.vel == ( 0x318) ? 1 : -1] ;
typedef char snowb_assert_0x33C[(int)&((SnowBoarder *)0)->dnode.lastVel == ( 0x33C) ? 1 : -1] ;
typedef char snowb_assert_0x348[(int)&((SnowBoarder *)0)->dnode.speed == ( 0x348) ? 1 : -1] ;
typedef char snowb_assert_0x360[(int)&((SnowBoarder *)0)->dnode.friction == ( 0x360) ? 1 : -1] ;
typedef char snowb_assert_0x38C[(int)&((SnowBoarder *)0)->dnode.unk38C == ( 0x38C) ? 1 : -1] ;
typedef char snowb_assert_0x3A4[(int)&((SnowBoarder *)0)->dnode.unk3A4 == ( 0x3A4) ? 1 : -1] ;
typedef char snowb_assert_0x3B0[(int)&((SnowBoarder *)0)->dnode.axes[0] == ( 0x3B0) ? 1 : -1] ;
typedef char snowb_assert_0x3BC[(int)&((SnowBoarder *)0)->dnode.axes[1] == ( 0x3BC) ? 1 : -1] ;
typedef char snowb_assert_0x3C8[(int)&((SnowBoarder *)0)->dnode.axes[2] == ( 0x3C8) ? 1 : -1] ;
typedef char snowb_assert_0x540[(int)&((SnowBoarder *)0)->parms == ( 0x540) ? 1 : -1] ;
typedef char snowb_assert_0x6B0[(int)&((SnowBoarder *)0)->parms.wfr == ( 0x6B0) ? 1 : -1] ;
typedef char snowb_assert_0x6F8[(int)&((SnowBoarder *)0)->parms.nts == ( 0x6F8) ? 1 : -1] ;
typedef char snowb_assert_0x758[(int)&((SnowBoarder *)0)->parms.max == ( 0x758) ? 1 : -1] ;
typedef char snowb_assert_0x800[(int)&((SnowBoarder *)0)->input == ( 0x800) ? 1 : -1] ;
typedef char snowb_assert_0x804[(int)&((SnowBoarder *)0)->ai == ( 0x804) ? 1 : -1] ;
typedef char snowb_assert_0x838[(int)&((SnowBoarder *)0)->bodyNodes[6] == ( 0x838) ? 1 : -1] ;
typedef char snowb_assert_0x840[(int)&((SnowBoarder *)0)->anim == ( 0x840) ? 1 : -1] ;
typedef char snowb_assert_0x8B8[(int)&((SnowBoarder *)0)->unk8B8 == ( 0x8B8) ? 1 : -1] ;
typedef char snowb_assert_0x8DC[(int)&((SnowBoarder *)0)->camera == ( 0x8DC) ? 1 : -1] ;
typedef char snowb_assert_0x808[(int)&((SnowBoarder *)0)->sound == ( 0x808) ? 1 : -1] ;
typedef char snowb_assert_0x844[(int)&((SnowBoarder *)0)->top == ( 0x844) ? 1 : -1] ;
typedef char snowb_assert_0x848[(int)&((SnowBoarder *)0)->controller == ( 0x848) ? 1 : -1] ;
typedef char snowb_assert_0x850[(int)&((SnowBoarder *)0)->light == ( 0x850) ? 1 : -1] ;
typedef char snowb_assert_0x864[(int)&((SnowBoarder *)0)->boardNode == ( 0x864) ? 1 : -1] ;
typedef char snowb_assert_0x874[(int)&((SnowBoarder *)0)->camSource == ( 0x874) ? 1 : -1] ;
typedef char snowb_assert_0x854[(int)&((SnowBoarder *)0)->unk854 == ( 0x854) ? 1 : -1] ;
typedef char snowb_assert_0x860[(int)&((SnowBoarder *)0)->unk860 == ( 0x860) ? 1 : -1] ;
typedef char snowb_assert_0x8C0[(int)&((SnowBoarder *)0)->unk8C0 == ( 0x8C0) ? 1 : -1] ;
typedef char snowb_assert_0x8C4[(int)&((SnowBoarder *)0)->character == ( 0x8C4) ? 1 : -1] ;
typedef char snowb_assert_0x8C8[(int)&((SnowBoarder *)0)->boardBin == ( 0x8C8) ? 1 : -1] ;
typedef char snowb_assert_0x8E0[(int)&((SnowBoarder *)0)->tint == ( 0x8E0) ? 1 : -1] ;
typedef char snowb_assert_0x8F4[(int)&((SnowBoarder *)0)->unk8F4 == ( 0x8F4) ? 1 : -1] ;
typedef char snowb_assert_0x900[(int)&((SnowBoarder *)0)->unk900 == ( 0x900) ? 1 : -1] ;
typedef char snowb_assert_0x902[(int)&((SnowBoarder *)0)->unk902 == ( 0x902) ? 1 : -1] ;
typedef char snowb_assert_0x908[(int)&((SnowBoarder *)0)->rival == ( 0x908) ? 1 : -1] ;
typedef char snowb_assert_0x3DC[(int)&((SnowBoarder *)0)->riding == ( 0x3DC) ? 1 : -1] ;
typedef char snowb_assert_0x3EC[(int)&((SnowBoarder *)0)->child == ( 0x3EC) ? 1 : -1] ;
typedef char snowb_assert_0x480[(int)&((SnowBoarder *)0)->child.parms.efr == ( 0x480) ? 1 : -1] ;
typedef char snowb_assert_0x498[(int)&((SnowBoarder *)0)->child.parms.nbf == ( 0x498) ? 1 : -1] ;
typedef char snowb_assert_0x4F8[(int)&((SnowBoarder *)0)->child.parms.res == ( 0x4F8) ? 1 : -1] ;
typedef char snowb_assert_0x89C[(int)&((SnowBoarder *)0)->prevVel == ( 0x89C) ? 1 : -1] ;
typedef char snowb_assert_0x938[(int)&((SnowBoarder *)0)->contactCount == ( 0x938) ? 1 : -1] ;
typedef char snowb_assert_0x93C[(int)&((SnowBoarder *)0)->contactNormal == ( 0x93C) ? 1 : -1] ;
typedef char snowb_assert_0x960[(int)&((SnowBoarder *)0)->slowdown == ( 0x960) ? 1 : -1] ;
typedef char snowb_assert_0x968[(int)&((SnowBoarder *)0)->contactDepth == ( 0x968) ? 1 : -1] ;
typedef char snowb_assert_0x990[(int)&((SnowBoarder *)0)->crouch == ( 0x990) ? 1 : -1] ;
typedef char snowb_assert_0x9A0[(int)&((SnowBoarder *)0)->groundSurface == ( 0x9A0) ? 1 : -1] ;
typedef char snowb_assert_0x9A2[(int)&((SnowBoarder *)0)->surface == ( 0x9A2) ? 1 : -1] ;
typedef char snowb_assert_0x9A8[(int)&((SnowBoarder *)0)->groundFlags == ( 0x9A8) ? 1 : -1] ;
typedef char snowb_assert_0x9CC[(int)&((SnowBoarder *)0)->useDParms == ( 0x9CC) ? 1 : -1] ;
typedef char snowb_assert_0x9D0[(int)&((SnowBoarder *)0)->groundDist == ( 0x9D0) ? 1 : -1] ;
typedef char snowb_assert_0x9F8[(int)&((SnowBoarder *)0)->edgeFriction == ( 0x9F8) ? 1 : -1] ;
typedef char snowb_assert_0x9FC[(int)&((SnowBoarder *)0)->edgeGrip == ( 0x9FC) ? 1 : -1] ;
typedef char snowb_assert_0xA00[(int)&((SnowBoarder *)0)->turnRate == ( 0xA00) ? 1 : -1] ;
typedef char snowb_assert_0x970[(int)&((SnowBoarder *)0)->edge == ( 0x970) ? 1 : -1] ;
typedef char snowb_assert_0x978[(int)&((SnowBoarder *)0)->edgeSlope == ( 0x978) ? 1 : -1] ;
typedef char snowb_assert_0xA10[(int)&((SnowBoarder *)0)->hitFlags == ( 0xA10) ? 1 : -1] ;
typedef char snowb_assert_0xA14[(int)&((SnowBoarder *)0)->health == ( 0xA14) ? 1 : -1] ;
typedef char snowb_assert_0xA1C[(int)&((SnowBoarder *)0)->bumpSide == ( 0xA1C) ? 1 : -1] ;
typedef char snowb_assert_0xA24[(int)&((SnowBoarder *)0)->bumpFwd == ( 0xA24) ? 1 : -1] ;
typedef char snowb_assert_0xA54[(int)&((SnowBoarder *)0)->raceResult == ( 0xA54) ? 1 : -1] ;
typedef char snowb_assert_0xA38[(int)&((SnowBoarder *)0)->fwdSpeed == ( 0xA38) ? 1 : -1] ;
typedef char snowb_assert_0xA58[(int)&((SnowBoarder *)0)->flags == ( 0xA58) ? 1 : -1] ;
typedef char snowb_assert_0xA78[(int)&((SnowBoarder *)0)->maxSpeed == ( 0xA78) ? 1 : -1] ;
typedef char snowb_assert_0x548[(int)&((SnowBoarder *)0)->parms.hpf == ( 0x548) ? 1 : -1] ;
typedef char snowb_assert_0x710[(int)&((SnowBoarder *)0)->parms.trt == ( 0x710) ? 1 : -1] ;
typedef char snowb_assert_0x7E8[(int)&((SnowBoarder *)0)->parms.tch == ( 0x7E8) ? 1 : -1] ;
typedef char snowb_assert_0x890[(int)&((SnowBoarder *)0)->prevPos == ( 0x890) ? 1 : -1] ;
typedef char snowb_assert_0x868[(int)&((SnowBoarder *)0)->dispTrails == ( 0x868) ? 1 : -1] ;
typedef char snowb_assert_0x870[(int)&((SnowBoarder *)0)->trails == ( 0x870) ? 1 : -1] ;
typedef char snowb_assert_0x88C[(int)&((SnowBoarder *)0)->collHitMask == ( 0x88C) ? 1 : -1] ;
typedef char snowb_assert_0x8BC[(int)&((SnowBoarder *)0)->initFlags == ( 0x8BC) ? 1 : -1] ;
typedef char snowb_assert_0x904[(int)&((SnowBoarder *)0)->board == ( 0x904) ? 1 : -1] ;
typedef char snowb_assert_0x910[(int)&((SnowBoarder *)0)->impactScale == ( 0x910) ? 1 : -1] ;
typedef char snowb_assert_0x91C[(int)&((SnowBoarder *)0)->unk91C == ( 0x91C) ? 1 : -1] ;
typedef char snowb_assert_0x920[(int)&((SnowBoarder *)0)->penetration == ( 0x920) ? 1 : -1] ;
typedef char snowb_assert_0x92C[(int)&((SnowBoarder *)0)->impactVel == ( 0x92C) ? 1 : -1] ;
typedef char snowb_assert_0x948[(int)&((SnowBoarder *)0)->lastContactNormal == ( 0x948) ? 1 : -1] ;
typedef char snowb_assert_0x95C[(int)&((SnowBoarder *)0)->noGroundFrames == ( 0x95C) ? 1 : -1] ;
typedef char snowb_assert_0x9D4[(int)&((SnowBoarder *)0)->airFrames == ( 0x9D4) ? 1 : -1] ;
typedef char snowb_assert_0x9D8[(int)&((SnowBoarder *)0)->groundNormal == ( 0x9D8) ? 1 : -1] ;
typedef char snowb_assert_0x9E4[(int)&((SnowBoarder *)0)->groundPlaneD == ( 0x9E4) ? 1 : -1] ;
typedef char snowb_assert_0xA04[(int)&((SnowBoarder *)0)->localUp == ( 0xA04) ? 1 : -1] ;
typedef char snowb_assert_0xA18[(int)&((SnowBoarder *)0)->unkA18 == ( 0xA18) ? 1 : -1] ;
typedef char snowb_assert_0xA30[(int)&((SnowBoarder *)0)->groundColor == ( 0xA30) ? 1 : -1] ;
typedef char snowb_assert_0xA4C[(int)&((SnowBoarder *)0)->onGround == ( 0xA4C) ? 1 : -1] ;
typedef char snowb_assert_0xA50[(int)&((SnowBoarder *)0)->groundGentle == ( 0xA50) ? 1 : -1] ;
typedef char snowb_assert_0xA5C[(int)&((SnowBoarder *)0)->shake == ( 0xA5C) ? 1 : -1] ;
typedef char snowb_assert_0xA6C[(int)&((SnowBoarder *)0)->spinHold == ( 0xA6C) ? 1 : -1] ;
typedef char snowb_assert_0xA70[(int)&((SnowBoarder *)0)->airSpin == ( 0xA70) ? 1 : -1] ;
typedef char snowb_assert_0xA80[(int)&((SnowBoarder *)0)->msgCooldown == ( 0xA80) ? 1 : -1] ;
typedef char snowb_assert_0xA84[(int)&((SnowBoarder *)0)->landImpact == ( 0xA84) ? 1 : -1] ;
typedef char snowb_assert_parm_size[sizeof(SnowBParm) == 0x18 ? 1 : -1];
typedef char snowb_assert_child_size[sizeof(SnowBChild) == 0x154 ? 1 : -1];
typedef char snowb_assert_parms_size[sizeof(SnowBoarderParms) == 0x2C0 ? 1 : -1];
typedef char snowb_assert_size[sizeof(SnowBoarder) == 0xA8C ? 1 : -1];
typedef char snowb_assert_input_held[(int)&((RiderInput *)0)->held == 0x10 ? 1 : -1];
typedef char snowb_assert_input_pressed[(int)&((RiderInput *)0)->pressed == 0x18 ? 1 : -1];







 













 
typedef struct SnowAIParm {
    char pad00[0xC];         
    void *vptr;              
    f32 value;               
    s32 unk14;               
} SnowAIParm;

 















typedef struct SnowAIParms {
    const char *name;        
    s32 unk04;               
    SnowAIParm parm[41 ];  
} SnowAIParms;

typedef struct SnowAI {
    char pad000[0x28];       
    void *vptr;              
    s32 level;               
    SnowBoarder *rider;      
    s32 unk34;               
    f32 unk38;               
    f32 unk3C;               
    s32 targetNode;          
    s32 unk44;               
    s32 unk48;               
    s32 unk4C;               
    s32 unk50;               
    s32 unk54;               
    s32 unk58;               
    s32 scanIndex;           
    f32 scanBestDist;        
    s32 aiState;             
    s32 modeFlags;           
    s32 unk6C;               
    s32 finishTimer;         


    s32 aimMode;             


    void *lastMarker;        
    s32 altNode;             
    s32 atFinish;            

     
    SnowBVec3 weaveAim;      
    SnowBVec3 weavePrev;     
    s32 weavePhase;          
     
    f32 leadLimit;           
    s32 sideBlock;           
    f32 lookAhead;           
    f32 turnGain;            
    f32 turnSpeedRef;        
    f32 minSpeed;            
     



    f32 crouchSteerRef;      

    f32 stallYaw;            
    f32 reachTime;           

    f32 dParmsSteer;         

    f32 dParmsSteerScale;    
    f32 aimRange;            
    f32 rivalPathTime;       
    f32 rivalPathDist;       
    f32 weaveLead;           
    f32 weaveLeadTime;       
    f32 weaveSideScale;      
    SnowAIParms parms;       
    s32 scaleTimer;          




     

    f32 savedMax;            
    f32 savedNts;            
    f32 savedDts;            
    f32 savedNbf;            
    s32 initPending;         

    s32 unk4DC;              
} SnowAI;


 

 
typedef char snowai_assert_SnowAIParm_0x10[(int)&((SnowAIParm *)0)-> value == ( 0x10) ? 1 : -1] ;
typedef char snowai_assert_SnowAIParms_0x08[(int)&((SnowAIParms *)0)-> parm == ( 0x08) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x28[(int)&((SnowAI *)0)-> vptr == ( 0x28) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x2C[(int)&((SnowAI *)0)-> level == ( 0x2C) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x30[(int)&((SnowAI *)0)-> rider == ( 0x30) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x3C[(int)&((SnowAI *)0)-> unk3C == ( 0x3C) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x48[(int)&((SnowAI *)0)-> unk48 == ( 0x48) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x54[(int)&((SnowAI *)0)-> unk54 == ( 0x54) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x68[(int)&((SnowAI *)0)-> modeFlags == ( 0x68) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x6C[(int)&((SnowAI *)0)-> unk6C == ( 0x6C) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x74[(int)&((SnowAI *)0)-> aimMode == ( 0x74) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x84[(int)&((SnowAI *)0)-> weaveAim == ( 0x84) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x9C[(int)&((SnowAI *)0)-> weavePhase == ( 0x9C) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0xA8[(int)&((SnowAI *)0)-> lookAhead == ( 0xA8) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0xC8[(int)&((SnowAI *)0)-> dParmsSteerScale == ( 0xC8) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0xCC[(int)&((SnowAI *)0)-> aimRange == ( 0xCC) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0xD8[(int)&((SnowAI *)0)-> weaveLead == ( 0xD8) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0xE0[(int)&((SnowAI *)0)-> weaveSideScale == ( 0xE0) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0xE4[(int)&((SnowAI *)0)-> parms == ( 0xE4) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x4C4[(int)&((SnowAI *)0)-> scaleTimer == ( 0x4C4) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x34[(int)&((SnowAI *)0)-> unk34 == ( 0x34) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x40[(int)&((SnowAI *)0)-> targetNode == ( 0x40) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x58[(int)&((SnowAI *)0)-> unk58 == ( 0x58) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x5C[(int)&((SnowAI *)0)-> scanIndex == ( 0x5C) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x60[(int)&((SnowAI *)0)-> scanBestDist == ( 0x60) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x64[(int)&((SnowAI *)0)-> aiState == ( 0x64) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x70[(int)&((SnowAI *)0)-> finishTimer == ( 0x70) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x78[(int)&((SnowAI *)0)-> lastMarker == ( 0x78) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x7C[(int)&((SnowAI *)0)-> altNode == ( 0x7C) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0xA0[(int)&((SnowAI *)0)-> leadLimit == ( 0xA0) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0xA4[(int)&((SnowAI *)0)-> sideBlock == ( 0xA4) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x4C8[(int)&((SnowAI *)0)-> savedMax == ( 0x4C8) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x4D4[(int)&((SnowAI *)0)-> savedNbf == ( 0x4D4) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x4D8[(int)&((SnowAI *)0)-> initPending == ( 0x4D8) ? 1 : -1] ;
typedef char snowai_assert_SnowAI_0x4DC[(int)&((SnowAI *)0)-> unk4DC == ( 0x4DC) ? 1 : -1] ;
typedef char snowai_assert_parm_size[sizeof(SnowAIParm) == 0x18 ? 1 : -1];
typedef char snowai_assert_parms_size[sizeof(SnowAIParms) == 0x3E0 ? 1 : -1];
typedef char snowai_assert_size[sizeof(SnowAI) == 0x4E0 ? 1 : -1];

















 






















 

























 


 















 












 



 




typedef struct TrickEntry {
    char name[0x10];         
    char unk10[0x10];        
    s32 anim;                

    s32 animRegular;         
    s32 animSwitch;          
    u32 inputMask;           
    s32 points;              
    u32 riderMask;           

    u32 flags;               
    s32 mirrorIndex;         

} TrickEntry;



 
typedef char trickentry_assert_0x20[(int)&((TrickEntry *)0)->anim == ( 0x20) ? 1 : -1] ;
typedef char trickentry_assert_0x2C[(int)&((TrickEntry *)0)->inputMask == ( 0x2C) ? 1 : -1] ;
typedef char trickentry_assert_0x30[(int)&((TrickEntry *)0)->points == ( 0x30) ? 1 : -1] ;
typedef char trickentry_assert_0x38[(int)&((TrickEntry *)0)->flags == ( 0x38) ? 1 : -1] ;
typedef char trickentry_assert_0x3C[(int)&((TrickEntry *)0)->mirrorIndex == ( 0x3C) ? 1 : -1] ;
typedef char trickentry_assert_size[sizeof(TrickEntry) == 0x40 ? 1 : -1];







 

















 
typedef struct Pair2 {
    int a, b;
} Pair2;

 
typedef struct RiderAnimParm {
    char pad00[0xC];         
    void *vptr;              
    union {
        f32 f;
        s32 i;               
    } value;                 
    s32 unk14;               
} RiderAnimParm;

 
typedef struct RiderAnimParms {
    const char *name;        
    s32 unk04;               
    RiderAnimParm lnc, jct, jht, jot, jca, jlt, jli;  
    RiderAnimParm rfc, tkt;  
    RiderAnimParm b1f, b2f, xf1, f1f, f2f, f3f, f4f, l1f, l2f, l3f, r1f, r2f;  
    RiderAnimParm dm1, dm2, dm3, dm4;  
    RiderAnimParm st1, st2, st3;       
    RiderAnimParm sl1, sl2;            
    RiderAnimParm slm, stm;            
} RiderAnimParms;

typedef struct RiderAnim {
    AnimPlayer player;       


    s32 spinAnim;            

    SnowBoarder *rider;      
    char pad0B8[0xC0 - 0xB8];
    Pair2 queuedState;       


    Pair2 state;             



    Pair2 pendingState;      


    s32 unkD8;               



    s32 rideContacts;        
    s32 unkE0;               
    s16 jumpCharge;          

    s16 holdFrames;          

    s32 trickButtons;        
    s32 trickInputFrames;    

    TrickEntry *queuedTrick;  

    TrickEntry *curTrick;    
    TrickEntry *lastTrick;   

    s32 animSet;             
    s32 comboCount;          
    s32 loadedAnim;          



    s32 selectedAnim;        
    s32 hitKind;             
    s32 slowCrash;           


    s32 trickPhase;          


    s32 jumpRepress;         

    f32 hitScale;            


    s32 endTrickFlag;        



    s16 lastStickDir;        
    s16 spinFrames;          

    s16 spinSteps;           

    s16 pad12A;
    s32 spinKind;            



    s16 backHits;            

    char pad132[0x13C - 0x132];
    RiderAnimParms parms;    
} RiderAnim;

 




 
typedef char rideranim_assert_0x64[(int)&((RiderAnim *)0)->player.eventKey == ( 0x64) ? 1 : -1] ;
typedef char rideranim_assert_0x68[(int)&((RiderAnim *)0)->player.blendEvent == ( 0x68) ? 1 : -1] ;
typedef char rideranim_assert_0xB4[(int)&((RiderAnim *)0)->rider == ( 0xB4) ? 1 : -1] ;
typedef char rideranim_assert_0xC0[(int)&((RiderAnim *)0)->queuedState == ( 0xC0) ? 1 : -1] ;
typedef char rideranim_assert_0xC8[(int)&((RiderAnim *)0)->state == ( 0xC8) ? 1 : -1] ;
typedef char rideranim_assert_0xD0[(int)&((RiderAnim *)0)->pendingState == ( 0xD0) ? 1 : -1] ;
typedef char rideranim_assert_0xD8[(int)&((RiderAnim *)0)->unkD8 == ( 0xD8) ? 1 : -1] ;
typedef char rideranim_assert_0xDC[(int)&((RiderAnim *)0)->rideContacts == ( 0xDC) ? 1 : -1] ;
typedef char rideranim_assert_0xE4[(int)&((RiderAnim *)0)->jumpCharge == ( 0xE4) ? 1 : -1] ;
typedef char rideranim_assert_0xE8[(int)&((RiderAnim *)0)->trickButtons == ( 0xE8) ? 1 : -1] ;
typedef char rideranim_assert_0xF0[(int)&((RiderAnim *)0)->queuedTrick == ( 0xF0) ? 1 : -1] ;
typedef char rideranim_assert_0xF4[(int)&((RiderAnim *)0)->curTrick == ( 0xF4) ? 1 : -1] ;
typedef char rideranim_assert_0xF8[(int)&((RiderAnim *)0)->lastTrick == ( 0xF8) ? 1 : -1] ;
typedef char rideranim_assert_0xFC[(int)&((RiderAnim *)0)->animSet == ( 0xFC) ? 1 : -1] ;
typedef char rideranim_assert_0x100[(int)&((RiderAnim *)0)->comboCount == ( 0x100) ? 1 : -1] ;
typedef char rideranim_assert_0x108[(int)&((RiderAnim *)0)->selectedAnim == ( 0x108) ? 1 : -1] ;
typedef char rideranim_assert_0x10C[(int)&((RiderAnim *)0)->hitKind == ( 0x10C) ? 1 : -1] ;
typedef char rideranim_assert_0x110[(int)&((RiderAnim *)0)->slowCrash == ( 0x110) ? 1 : -1] ;
typedef char rideranim_assert_0x114[(int)&((RiderAnim *)0)->trickPhase == ( 0x114) ? 1 : -1] ;
typedef char rideranim_assert_0x118[(int)&((RiderAnim *)0)->jumpRepress == ( 0x118) ? 1 : -1] ;
typedef char rideranim_assert_0x11C[(int)&((RiderAnim *)0)->hitScale == ( 0x11C) ? 1 : -1] ;
typedef char rideranim_assert_0x120[(int)&((RiderAnim *)0)->endTrickFlag == ( 0x120) ? 1 : -1] ;
typedef char rideranim_assert_0x124[(int)&((RiderAnim *)0)->lastStickDir == ( 0x124) ? 1 : -1] ;
typedef char rideranim_assert_0x128[(int)&((RiderAnim *)0)->spinSteps == ( 0x128) ? 1 : -1] ;
typedef char rideranim_assert_0x12C[(int)&((RiderAnim *)0)->spinKind == ( 0x12C) ? 1 : -1] ;
typedef char rideranim_assert_0x130[(int)&((RiderAnim *)0)->backHits == ( 0x130) ? 1 : -1] ;
typedef char rideranim_assert_0x13C[(int)&((RiderAnim *)0)->parms == ( 0x13C) ? 1 : -1] ;
typedef char rideranim_assert_0x33C[(int)&((RiderAnim *)0)->parms.dm1 == ( 0x33C) ? 1 : -1] ;
typedef char rideranim_assert_0x39C[(int)&((RiderAnim *)0)->parms.st1 == ( 0x39C) ? 1 : -1] ;
typedef char rideranim_assert_0x42C[(int)&((RiderAnim *)0)->parms.stm == ( 0x42C) ? 1 : -1] ;
typedef char rideranim_assert_parm_size[sizeof(RiderAnimParm) == 0x18 ? 1 : -1];
typedef char rideranim_assert_parms_size[sizeof(RiderAnimParms) == 0x308 ? 1 : -1];
typedef char rideranim_assert_size[sizeof(RiderAnim) == 0x444 ? 1 : -1];







struct SnowBoarder;

 



















 
typedef struct CamVec3 {
    f32 x, y, z;
} CamVec3;

 


typedef struct CamMNode {
    char node[0x2C];         
    char pad2C[0x30 - 0x2C];
    f32 local[4][4];         
    f32 world[4][4];         
    s32 unkB0;               
} CamMNode;                  

 



typedef struct MCamera {
    CamMNode mnode;          
    f32 view[4][4];          
    CamMNode *target;        
    s32 unkF8;
    f32 unkFC;               
    s32 unk100;
    CamVec3 lookDir;         
    char unk110[0x20];       
    s32 rotEnable;           
    f32 pitch;               
    f32 yaw;                 
    f32 unk13C;              
    CamVec3 up;              
    f32 fov;                 

} MCamera;

 
typedef struct CamWindow {
    char pad00[0x70];
    MCamera *cam;            
} CamWindow;

 


typedef struct RiderCam {
    MCamera cam;             
    f32 baseFov;             
    struct SnowBoarder *rider;  
    s32 mode;                
} RiderCam;

struct RiderInput;

 



typedef struct CamDirector {
    char node[0x2C];         
    CamWindow *window;       
    MCamera *cams[2];        
    struct RiderInput *pad;  
    s32 activeCam;           
    struct SnowBoarder *rider;  
    void *lastCamNode;       
    s32 pollTimer;           
    s32 manual;              
} CamDirector;

 

typedef struct FreeCam {
    char node[0x14];
    MCamera *cam;            
    char pad18[0x2C - 0x18];
    f32 dist;                
    f32 pitch;               
    f32 yaw;                 
    f32 unk38;
    s32 accel;               
    CamVec3 pos;             
    void *ctl;               
} FreeCam;

 


typedef struct CamFollow {
    char node[0x14];
    MCamera *cam;            
    char pad18[0x2C - 0x18];
    CamVec3 unk2C;           
    struct GdlInput *owner;  
} CamFollow;

 
typedef struct CamParm {
    char pad00[0xC];         
    void *vptr;              
    f32 value;               
    s32 unk14;               
} CamParm;

 
typedef struct CamVec3Parm {
    char pad00[0xC];
    void *vptr;              
    CamVec3 value;           
    s32 unk1C;               
} CamVec3Parm;

 
typedef struct SnowChaseActorCamParms {
    const char *name;        
    s32 unk04;               
    CamVec3Parm cof;         

    CamParm mxz;             
    CamParm txz;             
    CamParm cxz;             
    CamParm miy;             
    CamParm toy;             
    CamParm ty2;             
    CamParm chy;             
} SnowChaseActorCamParms;

 

typedef struct SnowChaseActorCam {
    char node[0x14];
    CamMNode *body;          
    char pad18[0x2C - 0x18];
    CamVec3 eyeOffset;       

    CamMNode *target;        
    CamMNode *source;        
    s32 mode;                
    SnowChaseActorCamParms parms;  
    char pad114[0x124 - 0x114];
} SnowChaseActorCam;

 
typedef struct SnowChaseActorLookParms {
    const char *name;        
    s32 unk04;               
    CamParm ch0;             

} SnowChaseActorLookParms;

 
typedef struct SnowChaseActorLook {
    char node[0x14];
    CamMNode *body;          
    char pad18[0x2C - 0x18];
    CamVec3 unk2C;           
    CamMNode *anchor;        

    SnowChaseActorCam *cam;  
    s32 mode;                
    SnowChaseActorLookParms parms;  
} SnowChaseActorLook;

 


typedef struct LookAtNode {
    CamMNode mnode;          
    SnowChaseActorLook *chase;  
} LookAtNode;

 
typedef struct SnowChaseActorParms {
    const char *name;        
    s32 unk04;
    CamVec3Parm off;         
    CamParm xxz;             
    CamParm mxz;             
    CamParm txz;             
    CamParm mxy, miy, toy;   
    CamParm cxz;             
    CamParm chy;             
} SnowChaseActorParms;

 
typedef struct SnowChaseActor {
    char node[0x14];
    CamMNode *body;          
    char pad18[0x2C - 0x18];
    s32 unk2C;               
    CamVec3 unk30;           
    CamVec3 toGoal;          
    CamMNode *target;        
    CamMNode *lookBody;      
    SnowChaseActorParms parms;  
} SnowChaseActor;

 






typedef struct CamKey {      
    CamVec3 look;            
    CamVec3 eye;             
    CamVec3 up;              
    f32 fov;                 
    s32 frames;              
    CamVec3 rot;             
} CamKey;

typedef struct CamPath {     
     

    s32 lookMode;            
    s32 lookSpline;          
    s32 unk08;               
    s32 unk0C;
    s32 eyeMode;             
    s32 eyeSpline;           
    s32 unk18;               
    s32 unk1C;
    s32 upSpline;            
    s32 unk24;
    s32 fovMode;             
    s32 unk2C;
    s32 rotMode;             
    s32 numKeys;             
    CamKey *keys[17];        



} CamPath;

typedef struct CamList {
    s32 unk00;
    s32 paths[8];            
    s32 count;               
} CamList;

typedef struct CourseCam {
    MCamera cam;             

    struct SnowBoarder *rider;  
    SnowChaseActorCam *eyeChase;  
    CamList *lists[30];      
    s32 numLists;            
    CamPath *paths[30];      
    s32 numPaths;            
    s32 view;                
    s32 listPos;             
    s32 path;                
    s32 key;                 
    s32 frame;               
    s32 lastResult;          
    s32 freeRot;             
    s32 chaseMode;           


    s32 savedChaseMode;      
    struct RiderInput *pad;  
    s32 unk278;
} CourseCam;                 



typedef char cam_assert_CamMNode_0x30[(int)&((CamMNode *)0)-> local == ( 0x30) ? 1 : -1] ;
typedef char cam_assert_CamMNode_0x70[(int)&((CamMNode *)0)-> world == ( 0x70) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x2C[(int)&((SnowChaseActorCam *)0)-> eyeOffset == ( 0x2C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x40[(int)&((SnowChaseActorCam *)0)-> mode == ( 0x40) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x44[(int)&((SnowChaseActorCam *)0)-> parms == ( 0x44) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x5C[(int)&((SnowChaseActorCam *)0)-> parms.cof.value == ( 0x5C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x7C[(int)&((SnowChaseActorCam *)0)-> parms.mxz.value == ( 0x7C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x10C[(int)&((SnowChaseActorCam *)0)-> parms.chy.value == ( 0x10C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorLook_0x5C[(int)&((SnowChaseActorLook *)0)-> parms.ch0.value == ( 0x5C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x3C[(int)&((SnowChaseActor *)0)-> toGoal == ( 0x3C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x48[(int)&((SnowChaseActor *)0)-> target == ( 0x48) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x68[(int)&((SnowChaseActor *)0)-> parms.off.value == ( 0x68) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x88[(int)&((SnowChaseActor *)0)-> parms.xxz.value == ( 0x88) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x118[(int)&((SnowChaseActor *)0)-> parms.cxz.value == ( 0x118) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x130[(int)&((SnowChaseActor *)0)-> parms.chy.value == ( 0x130) ? 1 : -1] ;
typedef char cam_assert_MCamera_0xB4[(int)&((MCamera *)0)-> view == ( 0xB4) ? 1 : -1] ;
typedef char cam_assert_MCamera_0xF4[(int)&((MCamera *)0)-> target == ( 0xF4) ? 1 : -1] ;
typedef char cam_assert_MCamera_0x104[(int)&((MCamera *)0)-> lookDir == ( 0x104) ? 1 : -1] ;
typedef char cam_assert_MCamera_0x130[(int)&((MCamera *)0)-> rotEnable == ( 0x130) ? 1 : -1] ;
typedef char cam_assert_MCamera_0x140[(int)&((MCamera *)0)-> up == ( 0x140) ? 1 : -1] ;
typedef char cam_assert_MCamera_0x14C[(int)&((MCamera *)0)-> fov == ( 0x14C) ? 1 : -1] ;
typedef char cam_assert_RiderCam_0x154[(int)&((RiderCam *)0)-> rider == ( 0x154) ? 1 : -1] ;
typedef char cam_assert_CamDirector_0x2C[(int)&((CamDirector *)0)-> window == ( 0x2C) ? 1 : -1] ;
typedef char cam_assert_CamDirector_0x38[(int)&((CamDirector *)0)-> pad == ( 0x38) ? 1 : -1] ;
typedef char cam_assert_CamDirector_0x4C[(int)&((CamDirector *)0)-> manual == ( 0x4C) ? 1 : -1] ;
typedef char cam_assert_FreeCam_0x40[(int)&((FreeCam *)0)-> pos == ( 0x40) ? 1 : -1] ;
typedef char cam_assert_CamFollow_0x38[(int)&((CamFollow *)0)-> owner == ( 0x38) ? 1 : -1] ;
typedef char cam_assert_mnode_size[sizeof(CamMNode) == 0xB4 ? 1 : -1];
typedef char cam_assert_mcamera_size[sizeof(MCamera) == 0x150 ? 1 : -1];
typedef char cam_assert_ridercam_size[sizeof(RiderCam) == 0x15C ? 1 : -1];
typedef char cam_assert_director_size[sizeof(CamDirector) == 0x50 ? 1 : -1];
typedef char cam_assert_freecam_size[sizeof(FreeCam) == 0x50 ? 1 : -1];
typedef char cam_assert_follow_size[sizeof(CamFollow) == 0x3C ? 1 : -1];
typedef char cam_assert_cam_size[sizeof(SnowChaseActorCam) == 0x124 ? 1 : -1];
typedef char cam_assert_look_size[sizeof(SnowChaseActorLook) == 0x64 ? 1 : -1];
typedef char cam_assert_actor_size[sizeof(SnowChaseActor) == 0x138 ? 1 : -1];
typedef char cam_assert_CamKey_0x28[(int)&((CamKey *)0)-> frames == ( 0x28) ? 1 : -1] ;
typedef char cam_assert_CamPath_0x34[(int)&((CamPath *)0)-> numKeys == ( 0x34) ? 1 : -1] ;
typedef char cam_assert_CamList_0x24[(int)&((CamList *)0)-> count == ( 0x24) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x150[(int)&((CourseCam *)0)-> rider == ( 0x150) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x158[(int)&((CourseCam *)0)-> lists == ( 0x158) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x1D0[(int)&((CourseCam *)0)-> numLists == ( 0x1D0) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x1D4[(int)&((CourseCam *)0)-> paths == ( 0x1D4) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x24C[(int)&((CourseCam *)0)-> numPaths == ( 0x24C) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x264[(int)&((CourseCam *)0)-> lastResult == ( 0x264) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x274[(int)&((CourseCam *)0)-> pad == ( 0x274) ? 1 : -1] ;
typedef char cam_assert_camkey_size[sizeof(CamKey) == 0x38 ? 1 : -1];
typedef char cam_assert_campath_size[sizeof(CamPath) == 0x7C ? 1 : -1];
typedef char cam_assert_coursecam_size[sizeof(CourseCam) == 0x27C ? 1 : -1];
typedef char cam_assert_camparms_size[sizeof(SnowChaseActorCamParms) == 0xD0 ? 1 : -1];







 
















 

























 



typedef struct WorldCourse {
    char name[0x40];             
    s32 *desc;                   
    struct WorldCourse *next;    
} WorldCourse;                   

typedef struct WorldPlayer {      
    char *rider;                 
    s32 arg;                     
} WorldPlayer;

typedef struct WorldRegistry {
    char node[0x28];             
    char *vptr;                  
    WorldCourse head;            
    WorldCourse *tail;           
    s32 numCourses;              
    s32 ogRoot;                  

    s32 fgRoot;                  
    s32 bgRoot;                  

    s32 egRoot;                  
    s32 mainGame;                
    s32 light0;                  
    s32 light1;                  
    struct MapProp *map;         


    char pad9C[0xC0 - 0x9C];
    s32 numPlayers;              
    WorldPlayer players[8];      
    s32 numWindows;              
    s32 windows[4];              

} WorldRegistry;

 

 



 


typedef struct CourseItemTmpl {
    char *name;                  
    void *(*create)();           
    s32 flags;                   
} CourseItemTmpl;

 

















typedef struct RaceGate {
    char unk00[0x5C];
    f32 x;                       

    char unk60[0x64 - 0x60];
    f32 z;                       
    char unk68[0x84 - 0x68];
    struct RaceGate *next;       
    char unk88[0xC8 - 0x88];
    s32 flags;                   

} RaceGate;

 









 



 
typedef struct CourseParm {
    char hdr[0xC];               
    char *vptr;                  
    s32 value;                   
    s32 value2;                  
} CourseParm;                    

typedef struct CourseFParm {     
    char hdr[0xC];
    char *vptr;                  
    f32 value;                   
    s32 value2;                  
} CourseFParm;

 
typedef struct CourseMarkerParms {
    s32 name;                    
    s32 list;                    
    CourseFParm wid;             

    CourseParm ext;              

    CourseParm flg;              
} CourseMarkerParms;             

 



typedef struct ColourSubItem {
    char node[0x28];             
    char *vptr;                  
    s32 link;                    
    f32 pos[3];                  
    s32 unk3C;                   
} ColourSubItem;                 

 

typedef struct CourseMarker {
    char node[0x28];             
    char *vptr;                  
    struct CourseMarker *link;   



    f32 pos[3];                  
    CourseMarkerParms parms;     
} CourseMarker;                  

 



typedef struct MapProp {
    char mnode[0xB4];            
    s32 shape;                   
    s32 end;                     
    s32 angle;                   
    s32 add;                     
    f32 start[3];                
    f32 goal[3];                 
} MapProp;                       

 



typedef struct Mountain {
    char node[0x2C];             
    f32 posY;                    
    f32 scaleXZ;                 
    f32 scaleY;                  
} Mountain;




typedef char course_assert_size_WorldCourse[sizeof(WorldCourse) == ( 0x48) ? 1 : -1] ;
typedef char course_assert_WorldCourse_0x40[(int)&((WorldCourse *)0)-> desc == ( 0x40) ? 1 : -1] ;
typedef char course_assert_WorldCourse_0x44[(int)&((WorldCourse *)0)-> next == ( 0x44) ? 1 : -1] ;
typedef char course_assert_size_WorldRegistry[sizeof(WorldRegistry) == ( 0x118) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0x2C[(int)&((WorldRegistry *)0)-> head == ( 0x2C) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0x74[(int)&((WorldRegistry *)0)-> tail == ( 0x74) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0x78[(int)&((WorldRegistry *)0)-> numCourses == ( 0x78) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0x7C[(int)&((WorldRegistry *)0)-> ogRoot == ( 0x7C) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0x8C[(int)&((WorldRegistry *)0)-> mainGame == ( 0x8C) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0x94[(int)&((WorldRegistry *)0)-> light1 == ( 0x94) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0x98[(int)&((WorldRegistry *)0)-> map == ( 0x98) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0xC4[(int)&((WorldRegistry *)0)-> players == ( 0xC4) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0x104[(int)&((WorldRegistry *)0)-> numWindows == ( 0x104) ? 1 : -1] ;
typedef char course_assert_WorldRegistry_0x108[(int)&((WorldRegistry *)0)-> windows == ( 0x108) ? 1 : -1] ;
typedef char course_assert_size_CourseItemTmpl[sizeof(CourseItemTmpl) == ( 0xC) ? 1 : -1] ;
typedef char course_assert_RaceGate_0x5C[(int)&((RaceGate *)0)-> x == ( 0x5C) ? 1 : -1] ;
typedef char course_assert_RaceGate_0x64[(int)&((RaceGate *)0)-> z == ( 0x64) ? 1 : -1] ;
typedef char course_assert_RaceGate_0xC8[(int)&((RaceGate *)0)-> flags == ( 0xC8) ? 1 : -1] ;
typedef char course_assert_RaceGate_0x84[(int)&((RaceGate *)0)-> next == ( 0x84) ? 1 : -1] ;
typedef char course_assert_size_CourseParm[sizeof(CourseParm) == ( 0x18) ? 1 : -1] ;
typedef char course_assert_size_CourseMarkerParms[sizeof(CourseMarkerParms) == ( 0x50) ? 1 : -1] ;
typedef char course_assert_size_CourseMarker[sizeof(CourseMarker) == ( 0x8C) ? 1 : -1] ;
typedef char course_assert_size_ColourSubItem[sizeof(ColourSubItem) == ( 0x40) ? 1 : -1] ;
typedef char course_assert_CourseMarker_0x2C[(int)&((CourseMarker *)0)-> link == ( 0x2C) ? 1 : -1] ;
typedef char course_assert_CourseMarker_0x30[(int)&((CourseMarker *)0)-> pos == ( 0x30) ? 1 : -1] ;
typedef char course_assert_CourseMarker_0x54[(int)&((CourseMarker *)0)-> parms.wid.value == ( 0x54) ? 1 : -1] ;
typedef char course_assert_CourseMarker_0x6C[(int)&((CourseMarker *)0)-> parms.ext.value == ( 0x6C) ? 1 : -1] ;
typedef char course_assert_CourseMarker_0x84[(int)&((CourseMarker *)0)-> parms.flg.value == ( 0x84) ? 1 : -1] ;
typedef char course_assert_size_MapProp[sizeof(MapProp) == ( 0xDC) ? 1 : -1] ;
typedef char course_assert_MapProp_0xB4[(int)&((MapProp *)0)-> shape == ( 0xB4) ? 1 : -1] ;
typedef char course_assert_MapProp_0xC0[(int)&((MapProp *)0)-> add == ( 0xC0) ? 1 : -1] ;
typedef char course_assert_MapProp_0xC4[(int)&((MapProp *)0)-> start == ( 0xC4) ? 1 : -1] ;
typedef char course_assert_MapProp_0xD0[(int)&((MapProp *)0)-> goal == ( 0xD0) ? 1 : -1] ;
typedef char course_assert_Mountain_0x2C[(int)&((Mountain *)0)-> posY == ( 0x2C) ? 1 : -1] ;
typedef char course_assert_Mountain_0x34[(int)&((Mountain *)0)-> scaleY == ( 0x34) ? 1 : -1] ;





















 











typedef struct Sprite {
      Node node;
      s32 unk2C[0x16];
      void **children;        

      s32 unk88[10];
      f32 scaleX;             
      f32 scaleY;             
      f32 offsetX;            
      f32 offsetY;
      s16 unkC0;              
      s16 padC2;
      s32 perspective;        
      f32 depthBias;          
      struct DLContext *startDL;  
      struct DLContext *endDL;    
      s32 unkD4;
} Sprite;


typedef char Sprite_size_check[sizeof(Sprite) == 0xD8 ? 1 : -1];
typedef char Sprite_scaleX_check[(int)&((Sprite *)0)->scaleX == 0xB0 ? 1 : -1];
typedef char Sprite_startDL_check[(int)&((Sprite *)0)->startDL == 0xCC ? 1 : -1];







 
















 
typedef struct SunParm {
    char pad00[0xC];         
    void *vptr;              
    union {
        f32 f;
        s32 i;
    } value;                 
    s32 unk14;               
} SunParm;

 
typedef struct SunColorParm {
    char pad00[0xC];
    void *vptr;              
    f32 value[4];            
    s32 unk20;               
} SunColorParm;

 
typedef struct SunParms {
    const char *name;        

    s32 head;                
    SunParm rot;             
    SunParm ele;             
    SunParm scl;             
    SunParm mat;             
    SunColorParm col;        
} SunParms;

 

typedef struct MemberCallback {
    void *vptr;              
    void *obj;               
    Pair2 pmf;               
} MemberCallback;

typedef struct Sun {
    CamMNode mnode;          
    char padB4[0xC4 - 0xB4];
    Sprite *sprite;          
    f32 fade;                
    f32 visibility;          
    s32 screenX;             
    s32 screenY;             
    void *depthImage;        
    MemberCallback visCallback;  
    SunParms parms;          
} Sun;

 

typedef struct LensFlareElem {
    f32 pos;                 
    f32 color[4];            
    f32 size;                
    s32 image;               
    s32 flags;               
    f32 minDot;              
} LensFlareElem;

 







 
typedef struct LensFlareParms {
    const char *name;        
    s32 head;                
    SunParm fin;             
    SunParm dlv;             
    SunParm dfm;             
} LensFlareParms;

typedef struct LensFlare {
    CamMNode mnode;          
    Sprite *sprite;          
    LensFlareElem elems[10 ];  
    Sun *sun;                
    LensFlareParms parms;    
    u32 numElems;            
} LensFlare;



typedef char sun_assert_Sun_0xC4[(int)&((Sun *)0)-> sprite == ( 0xC4) ? 1 : -1] ;
typedef char sun_assert_Sun_0xCC[(int)&((Sun *)0)-> visibility == ( 0xCC) ? 1 : -1] ;
typedef char sun_assert_Sun_0xD8[(int)&((Sun *)0)-> depthImage == ( 0xD8) ? 1 : -1] ;
typedef char sun_assert_Sun_0xDC[(int)&((Sun *)0)-> visCallback == ( 0xDC) ? 1 : -1] ;
typedef char sun_assert_Sun_0xEC[(int)&((Sun *)0)-> parms == ( 0xEC) ? 1 : -1] ;
typedef char sun_assert_Sun_0x104[(int)&((Sun *)0)-> parms.rot.value == ( 0x104) ? 1 : -1] ;
typedef char sun_assert_Sun_0x11C[(int)&((Sun *)0)-> parms.ele.value == ( 0x11C) ? 1 : -1] ;
typedef char sun_assert_Sun_0x134[(int)&((Sun *)0)-> parms.scl.value == ( 0x134) ? 1 : -1] ;
typedef char sun_assert_Sun_0x14C[(int)&((Sun *)0)-> parms.mat.value == ( 0x14C) ? 1 : -1] ;
typedef char sun_assert_Sun_0x164[(int)&((Sun *)0)-> parms.col.value == ( 0x164) ? 1 : -1] ;
typedef char sun_assert_LensFlareElem_0x14[(int)&((LensFlareElem *)0)-> size == ( 0x14) ? 1 : -1] ;
typedef char sun_assert_LensFlareElem_0x20[(int)&((LensFlareElem *)0)-> minDot == ( 0x20) ? 1 : -1] ;
typedef char sun_assert_LensFlare_0xB8[(int)&((LensFlare *)0)-> elems == ( 0xB8) ? 1 : -1] ;
typedef char sun_assert_LensFlare_0x220[(int)&((LensFlare *)0)-> sun == ( 0x220) ? 1 : -1] ;
typedef char sun_assert_LensFlare_0x23C[(int)&((LensFlare *)0)-> parms.fin.value == ( 0x23C) ? 1 : -1] ;
typedef char sun_assert_LensFlare_0x254[(int)&((LensFlare *)0)-> parms.dlv.value == ( 0x254) ? 1 : -1] ;
typedef char sun_assert_LensFlare_0x26C[(int)&((LensFlare *)0)-> parms.dfm.value == ( 0x26C) ? 1 : -1] ;
typedef char sun_assert_LensFlare_0x274[(int)&((LensFlare *)0)-> numElems == ( 0x274) ? 1 : -1] ;
typedef char sun_assert_parms_size[sizeof(SunParms) == 0x8C ? 1 : -1];
typedef char sun_assert_size[sizeof(Sun) == 0x178 ? 1 : -1];
typedef char sun_assert_elem_size[sizeof(LensFlareElem) == 0x24 ? 1 : -1];
typedef char sun_assert_flare_size[sizeof(LensFlare) == 0x278 ? 1 : -1];







 
















 




 





































 


 

typedef struct InputFrame {
      signed char stickX;
      signed char stickY;
      short buttons;
} InputFrame;





 
typedef struct PadContData {
      unsigned short button;
      signed char stickX;
      signed char stickY;
      unsigned char errNo;
} PadContData;

typedef struct PadContStatus {
      unsigned short type;
      unsigned char status;
      unsigned char errNo;                      
} PadContStatus;

 
typedef struct PadDev {
      char stack[0x1000];         
      char thread[0x1B0];         
      char mq[0x18];              
      char msgs[4][4];            
      char pad11D8[0x1200 - 0x11D8];
      PadContData conts[4];       
      PadContStatus status[4];    
      char pfs[4][0x68];          
      int pakState[4];            

      unsigned char motorOn[4];              



      unsigned char hasMotor[4];             
      short motorValue[4];          

      int readDone;               

      unsigned char present;                 
    char pad13ED[0x13F0 - 0x13ED];
      int motorRetry;             
    char pad13F4[0x13F8 - 0x13F4];
} PadDev;

 
typedef struct PadCtl {
      float stickX;                   
      float stickY;
      signed char rawStickX;
      signed char rawStickY;
    char pad0A[0x10 - 0x0A];
      int held;                     
      int prevHeld;
      int pressed;
      int released;
      int doubleTap;                
      int lastPressed;
      int unk28;                    
      int unk2C;                    
      int unk30;                    
      int port;                     
      int tapTimer;                 
      int injectPending;            
      int injectButtons;
      float injectStickX;
      float injectStickY;
      int replayMode;               
      int replayFrame;
      int replayLen;
      int *replayLenOut;
      InputFrame *replayFrames;
    char pad60[0x64 - 0x60];
      int unk64;                    
      int paused;                   
      int recordMask;               
      int mirrorX;
      short rumblePos;                
      short rumblePrio;               
      unsigned char *rumble;                   
      short dirIndex;
    char pad7E[0x80 - 0x7E];
} PadCtl;


typedef char PadContData_size_check[sizeof(PadContData) == 6 ? 1 : -1];
typedef char PadDev_size_check[sizeof(PadDev) == 0x13F8 ? 1 : -1];
typedef char PadDev_pakState_check[(int)&((PadDev *)0)->pakState == 0x13C8 ? 1 : -1];
typedef char PadCtl_size_check[sizeof(PadCtl) == 0x80 ? 1 : -1];
typedef char PadCtl_port_check[(int)&((PadCtl *)0)->port == 0x34 ? 1 : -1];
typedef char PadCtl_rumble_check[(int)&((PadCtl *)0)->rumble == 0x78 ? 1 : -1];
typedef char InputFrame_size_check[sizeof(InputFrame) == 4 ? 1 : -1];





 



typedef struct GdlInput {
      char pad00[0xB4];
      PadCtl *pad;                 
      int unkB8;
      float prevPoint[3];          
      char padC8[0xD4 - 0xC8];
      float pan[3];                
      char padE0[0xF8 - 0xE0];
      float curPoint[3];           
      int unk104;
      int enable;                  
      int unk10C;
      void *window;                
} GdlInput;


typedef char GdlInput_pad_check[(int)&((GdlInput *)0)->pad == 0xB4 ? 1 : -1];
typedef char GdlInput_window_check[(int)&((GdlInput *)0)->window == 0x110 ? 1 : -1];






typedef PadCtl InputPad;

 

typedef struct FlowUso {
      s32 handle;           
      struct FlowUso *next;
} FlowUso;

 



typedef struct InputMgr {
      char node[0x2C];     


      char *procUsoPath;   


      char *flowProc;      

      s32 nextFlowMode;    

      s32 flowMode;        

      s32 gameMode;        


      s32 procState;      
      s32 nextProcState;   
      s32 thenProcState;   
      s32 playerRider;     
      s32 playerFlags;     

      s32 playerBoard;     

      s32 rider2;          
      s32 flags2;
      s32 board2;
      s32 course;          
      s32 level;           
      s32 demoIndex;       

      s32 unk70;           
      s32 unk74;           
      s32 unk78;
      s32 winVariant;      




      s32 unk80;           
      s32 unk84;           
      s32 unk88;           
      s32 titleFlags;      



      s32 order90[5];      
      s32 orderA4[5];      
    char padB8[0xC0 - 0xB8];
      char *ctrls[2];      


    char padC8[0xE0 - 0xC8];
      InputPad *pads[8];   
      InputPad *racePads[8];  


      s32 numPads;
      s32 numRacePads;
      s32 activePad;      
      void *app;          
      FlowUso *usoList;   
      char *game;         


      struct RaceTracker *dataMgr;  


      s32 seq;            

    char pad140[0x144 - 0x140];
      s32 seqArg;         
      void *backup;       
      struct BackupSession *session;  


      void *flowImgs;     
      char *options;      



      char initials[3];   
    char pad15B[0x15C - 0x15B];
      s32 unk15C;         
      s32 recordBuf;      

      s32 recordCap;      

      s32 replayData[2];  
      s32 replayLen[2];   

      unsigned char recCourse;       
      unsigned char recRider;        
      unsigned char recFlags;        
      unsigned char recBoard;
    char pad17C[0x181 - 0x17C];
      unsigned char ghostRider;      
      unsigned char ghostFlags;      
      unsigned char ghostBoard;      
      s32 unk184;         
      s32 racePadsPaused;  
      s32 locked;         
      void *fader;        

} InputMgr;

 




 







typedef char InputPad_held_check[(int)&((InputPad *)0)->held == 0x10 ? 1 : -1];
typedef char InputPad_pressed_check[(int)&((InputPad *)0)->pressed == 0x18 ? 1 : -1];
typedef char InputPad_released_check[(int)&((InputPad *)0)->released == 0x1C ? 1 : -1];
typedef char InputPad_replayMode_check[(int)&((InputPad *)0)->replayMode == 0x4C ? 1 : -1];
typedef char InputPad_recordMask_check[(int)&((InputPad *)0)->recordMask == 0x6C ? 1 : -1];
typedef char InputPad_mirrorX_check[(int)&((InputPad *)0)->mirrorX == 0x70 ? 1 : -1];
typedef char InputMgr_recordBuf_check[(int)&((InputMgr *)0)->recordBuf == 0x160 ? 1 : -1];
typedef char InputMgr_nextFlowMode_check[(int)&((InputMgr *)0)->nextFlowMode == 0x34 ? 1 : -1];
typedef char InputMgr_procState_check[(int)&((InputMgr *)0)->procState == 0x40 ? 1 : -1];
typedef char InputMgr_thenProcState_check[(int)&((InputMgr *)0)->thenProcState == 0x48 ? 1 : -1];
typedef char InputMgr_board2_check[(int)&((InputMgr *)0)->board2 == 0x60 ? 1 : -1];
typedef char InputMgr_ghost_check[(int)&((InputMgr *)0)->ghostBoard == 0x183 ? 1 : -1];
typedef char InputMgr_course_check[(int)&((InputMgr *)0)->course == 0x64 ? 1 : -1];
typedef char InputMgr_demoIndex_check[(int)&((InputMgr *)0)->demoIndex == 0x6C ? 1 : -1];
typedef char InputMgr_pads_check[(int)&((InputMgr *)0)->pads == 0xE0 ? 1 : -1];
typedef char InputMgr_racePads_check[(int)&((InputMgr *)0)->racePads == 0x100 ? 1 : -1];
typedef char InputMgr_racePadsPaused_check[(int)&((InputMgr *)0)->racePadsPaused == 0x188 ? 1 : -1];
typedef char InputMgr_numPads_check[(int)&((InputMgr *)0)->numPads == 0x120 ? 1 : -1];
typedef char InputMgr_activePad_check[(int)&((InputMgr *)0)->activePad == 0x128 ? 1 : -1];
typedef char InputMgr_game_check[(int)&((InputMgr *)0)->game == 0x134 ? 1 : -1];
typedef char InputMgr_options_check[(int)&((InputMgr *)0)->options == 0x154 ? 1 : -1];
typedef char InputMgr_dataMgr_check[(int)&((InputMgr *)0)->dataMgr == 0x138 ? 1 : -1];
typedef char InputMgr_backup_check[(int)&((InputMgr *)0)->backup == 0x148 ? 1 : -1];
typedef char InputMgr_session_check[(int)&((InputMgr *)0)->session == 0x14C ? 1 : -1];
typedef char InputMgr_replayData_check[(int)&((InputMgr *)0)->replayData == 0x168 ? 1 : -1];
typedef char InputMgr_replayLen_check[(int)&((InputMgr *)0)->replayLen == 0x170 ? 1 : -1];
typedef char InputMgr_fader_check[(int)&((InputMgr *)0)->fader == 0x190 ? 1 : -1];
typedef char InputMgr_procUsoPath_check[(int)&((InputMgr *)0)->procUsoPath == 0x2C ? 1 : -1];
typedef char InputMgr_flowMode_check[(int)&((InputMgr *)0)->flowMode == 0x38 ? 1 : -1];
typedef char InputMgr_orderA4_check[(int)&((InputMgr *)0)->orderA4 == 0xA4 ? 1 : -1];
typedef char InputMgr_ctrls_check[(int)&((InputMgr *)0)->ctrls == 0xC0 ? 1 : -1];
typedef char InputMgr_app_check[(int)&((InputMgr *)0)->app == 0x12C ? 1 : -1];
typedef char InputMgr_seqArg_check[(int)&((InputMgr *)0)->seqArg == 0x144 ? 1 : -1];
typedef char InputMgr_flowImgs_check[(int)&((InputMgr *)0)->flowImgs == 0x150 ? 1 : -1];
typedef char InputMgr_unk15C_check[(int)&((InputMgr *)0)->unk15C == 0x15C ? 1 : -1];
typedef char InputMgr_winVariant_check[(int)&((InputMgr *)0)->winVariant == 0x7C ? 1 : -1];
typedef char InputMgr_locked_check[(int)&((InputMgr *)0)->locked == 0x18C ? 1 : -1];











 








typedef struct ItemType {
      Node node;           
      s32 tag;             
      struct ItemType *next;  
      s32 builtHead;       

      s32 searchDown;      

      s32 unk3C;           
      s32 unk40;           


      s32 typeId;          


} ItemType;

 

 
typedef struct ColourItem {
      Node node;
      struct ColourItem *next;  
      f32 rgb[3];          
} ColourItem;

typedef struct ColourItemType {
      ItemType type;
      f32 colour[4];
} ColourItemType;

 
typedef struct ItemMgr {
      Node node;
      ItemType *types;     
      s32 unk30;           

      s32 classMask;       



} ItemMgr;

typedef char ItemType_size_check[sizeof(ItemType) == 0x48 ? 1 : -1];
typedef char ColourItemType_size_check[sizeof(ColourItemType) == 0x58 ? 1 : -1];
typedef char ItemMgr_size_check[sizeof(ItemMgr) == 0x38 ? 1 : -1];










 










struct ScreenWindow;
struct DLContext;
struct RcpMgr;

 
typedef struct GfxMorphList {
      void **items;
      int unk04;
      int capacity;             
      int count;
      int unk10;
      char *vptr;               
} GfxMorphList;

 







typedef struct GfxDdmState {          
      int unk0;
      int flags;
} GfxDdmState;

typedef struct GfxDdm {
      int dlIndex;               
      GfxDdmState state;
} GfxDdm;

 

typedef struct FogParms {
      float colour[4];          
      int min;                  
      int max;                  
} FogParms;

typedef struct GfxLib {
      int every4thFrame;       
      int unk004[23];
      float proj[4][4];        
      float modelView[4][4];   
      float (*curMtx)[4];      
      float (*extraMtx)[4];    

      float worldMtx[4][4];  
      float worldScale[3];     

      int unk134;
      int unk138;              
      int renderFlags;         

      int unk140[2];           
      void *frameStartCbs[5];   

      int nFrameStartCbs;
      int unk160[10];          
      int viewStage;           
      void *lights;            
      void *shadowLight;       
      int unk194;
      void *drawUpdates[10];   

      int nDrawUpdates;        
      int flags;               

      void *unk1C8;
      int unk1CC[5];
      int stageIsProj;         
      int unk1E4[4];
      int mtxMode;             
      signed char dir[4];      
      unsigned short colour[3];  
      unsigned short pad202;
      int fbIndex;             
      unsigned short perspNorm;  
      unsigned short pad20A;
      unsigned int frameTime;  
      int unk210;              
      struct DLContext *staticDL;  
      struct RcpMgr *rcp;      
      int textX;               
      int textY;               
      int charW;               
      int charH;               
      struct GfxMorphList *morphs;  

      int unk230;              
      int unk234[3];
      struct ScreenWindow *mainWindow;  
      int unk244;              
      int unk248;              
      float unk24C;            
      int unk250;              
      struct ScreenWindow *curWindow;  
      int nWindows;            
      struct ScreenWindow *windows[8];  
      int unk27C;
      struct DLContext *oneFrameDL[2];  

      int unk288;
      int cpuDraw;             
      int unk290;
      FogParms fog;            

      int ddm[51];             
      GfxDdm ddmPool[50];     
      int nDdms;               
      int unk5D4;
} GfxLib;


 





 


typedef char FogParms_size_check[sizeof(FogParms) == 0x18 ? 1 : -1];
typedef char GfxDdm_size_check[sizeof(GfxDdm) == 0xC ? 1 : -1];
typedef char GfxLib_size_check[sizeof(GfxLib) == 0x5D8 ? 1 : -1];

typedef char GfxLib_extraMtx_check[(int)&((GfxLib *)0)->extraMtx == 0xE4 ? 1 : -1];
typedef char GfxLib_worldScale_check[(int)&((GfxLib *)0)->worldScale == 0x128 ? 1 : -1];
typedef char GfxLib_flags_check[(int)&((GfxLib *)0)->flags == 0x1C4 ? 1 : -1];
typedef char GfxLib_fbIndex_check[(int)&((GfxLib *)0)->fbIndex == 0x204 ? 1 : -1];
typedef char GfxLib_staticDL_check[(int)&((GfxLib *)0)->staticDL == 0x214 ? 1 : -1];
typedef char GfxLib_textX_check[(int)&((GfxLib *)0)->textX == 0x21C ? 1 : -1];
typedef char GfxLib_mainWindow_check[(int)&((GfxLib *)0)->mainWindow == 0x240 ? 1 : -1];
typedef char GfxLib_curWindow_check[(int)&((GfxLib *)0)->curWindow == 0x254 ? 1 : -1];
typedef char GfxLib_cpuDraw_check[(int)&((GfxLib *)0)->cpuDraw == 0x28C ? 1 : -1];
typedef char GfxLib_nFrameStartCbs_check[(int)&((GfxLib *)0)->nFrameStartCbs == 0x15C ? 1 : -1];
typedef char GfxLib_drawUpdates_check[(int)&((GfxLib *)0)->drawUpdates == 0x198 ? 1 : -1];
typedef char GfxLib_nDrawUpdates_check[(int)&((GfxLib *)0)->nDrawUpdates == 0x1C0 ? 1 : -1];
typedef char GfxLib_morphs_check[(int)&((GfxLib *)0)->morphs == 0x22C ? 1 : -1];
typedef char GfxLib_windows_check[(int)&((GfxLib *)0)->windows == 0x25C ? 1 : -1];
typedef char GfxLib_oneFrameDL_check[(int)&((GfxLib *)0)->oneFrameDL == 0x280 ? 1 : -1];
typedef char GfxLib_ddm_check[(int)&((GfxLib *)0)->ddm == 0x2AC ? 1 : -1];
typedef char GfxLib_ddmPool_check[(int)&((GfxLib *)0)->ddmPool == 0x378 ? 1 : -1];
typedef char GfxLib_nDdms_check[(int)&((GfxLib *)0)->nDdms == 0x5D0 ? 1 : -1];






 






















































 


















































 






















































 





 










extern char *game_uso_alias();

 


extern int D_802C676C();
extern char D_00000000;
extern char import_80020110;
extern int import_8006EF48;
extern int D_game_11564_flag;
extern int D_game_11564_table;
typedef struct { float x, y, z; } Vec3;
typedef struct { int a, b, c; } Tri3i;
typedef struct { int a, b, c, d; } Quad4;
 


 













 









void game_uso_func_00000000(out, t)
    float *out;
    float t;
{
    out[0] = 0.16666667f;
}









 



float math_dot4_000000A0(float *a, float *b) {
     




    return a[3]*b[3] + (a[2]*b[2] + (a[1]*b[1] + b[0]*a[0]));
}


 













void math_blendVec3x4_000000E0(Vec3 *out, Vec3 **ctrl, float *weights) {
    out->x = ctrl[3]->x * weights[3] + (ctrl[2]->x * weights[2]
           + (ctrl[1]->x * weights[1] + weights[0] * ctrl[0]->x));
    out->y = ctrl[3]->y * weights[3] + (ctrl[2]->y * weights[2]
           + (ctrl[1]->y * weights[1] + weights[0] * ctrl[0]->y));
    out->z = ctrl[3]->z * weights[3] + (ctrl[2]->z * weights[2]
           + (ctrl[1]->z * weights[1] + weights[0] * ctrl[0]->z));
}

static void stream_readVec3_000001D4(Vec3 *dst) {
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

static void stream_readF32_00000244(float *dst) {
    float buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

static void stream_readS32_00000280(int *dst) {
    int buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = buf[0];
}

static void stream_readQuad_000002BC(Quad4 *dst) {
    Quad4 buf;
    D_802C676C (&D_00000000, &buf, 16);



    *dst = buf;
}

static void stream_read8_00000314(Pair2 *dst) {
    Pair2 buf;
    D_802C676C (&D_00000000, &buf, 8);



    *dst = buf;
}

 















typedef struct { int a; } One1;
static void stream_readWord_0000035C(One1 *dst) {
    int buf[2];
    D_802C676C (&D_00000000, buf, 4);



    *dst = *(One1*)buf;
}

static void stream_readQuad_0000039C(Quad4 *dst) {
    Quad4 buf;
    D_802C676C (&D_00000000, &buf, 16);



    *dst = buf;
}
 



 









void camKey_init_000003F8(CamKey *a0) {
    Vec3 zero, fwd, up, zero2;
    Vec3 pad0, pad1;
    Vec3 tmp;
    int padbot[2];

    zero.x = 0.0f;
    zero.y = 0.0f;
    zero.z = 0.0f;
    *(Tri3i *)&tmp = *(Tri3i *)&zero;
    a0->look.x = tmp.x;
    a0->look.y = tmp.y;
    a0->look.z = tmp.z;
    fwd.y = 0.0f;
    fwd.x = 0.0f;
    fwd.z = -1000.0f;
    *(Tri3i *)&tmp = *(Tri3i *)&fwd;
    a0->eye.x = tmp.x;
    a0->eye.y = tmp.y;
    a0->eye.z = tmp.z;
    up.z = 0.0f;
    up.x = 0.0f;
    up.y = 1.0f;
    *(Tri3i *)&tmp = *(Tri3i *)&up;
    a0->up.x = tmp.x;
    a0->up.y = tmp.y;
    a0->up.z = tmp.z;
    a0->fov = 85.0f;
    a0->frames = 15;
    zero2.z = 0.0f;
    zero2.y = 0.0f;
    zero2.x = 0.0f;
    *(Tri3i *)&tmp = *(Tri3i *)&zero2;
    a0->rot.x = tmp.x;
    a0->rot.y = tmp.y;
    a0->rot.z = tmp.z;
}

 
void cam_applyRelative_0000052C(int unused, Vec3 *look, Vec3 *eye, CamPath *path, Vec3 *aim) {
    if (path->eyeMode == 2) {
        eye->x += aim->x;
        eye->y += aim->y;
        eye->z += aim->z;
    }
    if (path->lookMode == 2) {
        look->x += eye->x;
        look->y += eye->y;
        look->z += eye->z;
    }
}

void camKey_read_000005B8(CamKey *a0) {
    stream_readVec3_000001D4((Vec3 *)&a0->look);
    stream_readVec3_000001D4((Vec3 *)&a0->eye);
    stream_readVec3_000001D4((Vec3 *)&a0->up);
    stream_readF32_00000244(&a0->fov);
    stream_readS32_00000280(&a0->frames);
    stream_readVec3_000001D4((Vec3 *)&a0->rot);
}

