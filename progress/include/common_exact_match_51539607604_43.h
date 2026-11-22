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





 

























typedef struct DLMark {
      struct DLContext *ctx;  
      s32 start;              
      s32 end;                
} DLMark;

typedef struct Window {
      Node node;
      s32 unk2C;
      f32 proj[4][4];       
      char *camera;         
      s32 unk74;
      s32 flags;            
      s32 projType;         
      f32 coneCos;          

      f32 drawDist[5];      

      f32 drawDistFov[5];   

      f32 near;
      f32 far;
      f32 aspect;           
      s32 width;            
      s32 height;
      s32 originX;          

      s32 originY;
      s32 vpW;              
      s32 vpH;
      s32 vpX;
      s32 vpY;
      s32 unkD8;
      f32 clearColour[4];   
      s32 unkEC;
      u16 *zBuffer;         
      u16 *colorBuf[2];     
      u16 *bufAlloc;        
      s32 unk100;           
      s32 clearFlags;       
      s32 displayMask;      
      s32 clipRowLo;        
      s32 clipRowHi;        
      s32 unk114;
      s32 unk118;
      s32 nTaskHooks;       
      s32 nHooks;           
      void *taskHooks[4];   
      void *hooks[4];       
} Window;

 


typedef struct WinClear {
      s32 unk0;               
      s32 clearFlags;         
} WinClear;


typedef struct ScreenWindow {
      Window win;
      s32 fbIndex;           
      struct ScreenWindow *fbOwner;  
      struct DLContext *startDL[3];  
      struct DLContext *dl;   
      DLMark mark15C;
      DLMark mark168;        
      s32 unk174[3];
      struct DLContext *bgDL[2];     
      s32 unk188[4];
      struct DLContext *setupDL[2];  
      s32 unk1A0;
      s32 unk1A4;
      s32 unk1A8;            
      s32 unk1AC;            
      s32 clearAlpha;        
      s32 unk1B4;            
      struct Window *unk1B8;  

      s32 unk1BC;
      struct DLContext *curBg;  
      s32 unk1C4[2];
} ScreenWindow;


typedef char DLMark_size_check[sizeof(DLMark) == 0xC ? 1 : -1];
typedef char Window_size_check[sizeof(Window) == 0x144 ? 1 : -1];
typedef char Window_proj_check[(int)&((Window *)0)->proj == 0x30 ? 1 : -1];
typedef char Window_flags_check[(int)&((Window *)0)->flags == 0x78 ? 1 : -1];
typedef char Window_aspect_check[(int)&((Window *)0)->aspect == 0xB4 ? 1 : -1];
typedef char Window_vpW_check[(int)&((Window *)0)->vpW == 0xC8 ? 1 : -1];
typedef char Window_zBuffer_check[(int)&((Window *)0)->zBuffer == 0xF0 ? 1 : -1];
typedef char Window_nTaskHooks_check[(int)&((Window *)0)->nTaskHooks == 0x11C ? 1 : -1];
typedef char Window_clearColour_check[(int)&((Window *)0)->clearColour == 0xDC ? 1 : -1];
typedef char Window_displayMask_check[(int)&((Window *)0)->displayMask == 0x108 ? 1 : -1];
typedef char Window_hooks_check[(int)&((Window *)0)->hooks == 0x134 ? 1 : -1];
typedef char ScreenWindow_size_check[sizeof(ScreenWindow) == 0x1CC ? 1 : -1];
typedef char ScreenWindow_dl_check[(int)&((ScreenWindow *)0)->dl == 0x158 ? 1 : -1];
typedef char ScreenWindow_bgDL_check[(int)&((ScreenWindow *)0)->bgDL == 0x180 ? 1 : -1];
typedef char ScreenWindow_setupDL_check[(int)&((ScreenWindow *)0)->setupDL == 0x198 ? 1 : -1];
typedef char ScreenWindow_curBg_check[(int)&((ScreenWindow *)0)->curBg == 0x1C0 ? 1 : -1];
























 


















 
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







 


















































 







typedef struct {
      u32 type;
      u32 flags;
      u64 *ucode_boot;
      u32 ucode_boot_size;
      u64 *ucode;
      u32 ucode_size;
      u64 *ucode_data;
      u32 ucode_data_size;
      u64 *dram_stack;
      u32 dram_stack_size;
      u64 *output_buff;
      u64 *output_buff_size;
      u64 *data_ptr;
      u32 data_size;
      u64 *yield_data_ptr;
      u32 yield_data_size;
} OSTask_t;


typedef char OSTask_t_size_check[sizeof(OSTask_t) == 0x40 ? 1 : -1];
typedef char OSTask_t_data_ptr_check[(int)&((OSTask_t *)0)->data_ptr == 0x30 ? 1 : -1];







 








 



































typedef s32 OSPri;
typedef s32 OSId;
typedef union { struct { f32 f_odd; f32 f_even; } f; f64 d; } __OSfp;

typedef struct {
    u64 at, v0, v1, a0, a1, a2, a3;            
    u64 t0, t1, t2, t3, t4, t5, t6, t7;        
    u64 s0, s1, s2, s3, s4, s5, s6, s7;        
    u64 t8, t9, gp, sp, s8, ra;                
    u64 lo, hi;                                
    u32 sr, pc, cause, badvaddr, rcp;          
    u32 fpcsr;                                 
    __OSfp fp0, fp2, fp4, fp6, fp8, fp10, fp12, fp14;
    __OSfp fp16, fp18, fp20, fp22, fp24, fp26, fp28, fp30;
} __OSThreadContext;  

typedef struct OSThread_s {
      struct OSThread_s *next;
      OSPri priority;
      struct OSThread_s **queue;
      struct OSThread_s *tlnext;
      u16 state;
      u16 flags;
      OSId id;
      int fp;
      __OSThreadContext context;
} OSThread;  






 




 

 
typedef char os_thread_assert_0x38[(int)&((OSThread *)0)->context.a0 == ( 0x38) ? 1 : -1] ;
typedef char os_thread_assert_0xF0[(int)&((OSThread *)0)->context.sp == ( 0xF0) ? 1 : -1] ;
typedef char os_thread_assert_0x100[(int)&((OSThread *)0)->context.ra == ( 0x100) ? 1 : -1] ;
typedef char os_thread_assert_0x118[(int)&((OSThread *)0)->context.sr == ( 0x118) ? 1 : -1] ;
typedef char os_thread_assert_0x11C[(int)&((OSThread *)0)->context.pc == ( 0x11C) ? 1 : -1] ;
typedef char os_thread_assert_0x128[(int)&((OSThread *)0)->context.rcp == ( 0x128) ? 1 : -1] ;
typedef char os_thread_assert_0x12C[(int)&((OSThread *)0)->context.fpcsr == ( 0x12C) ? 1 : -1] ;





typedef u32 OSEvent;
typedef void *OSMesg;

typedef struct OSMesgQueue_s {
      OSThread *mtqueue;    
      OSThread *fullqueue;  
      s32 validCount;
      s32 first;
      s32 msgCount;
      OSMesg *msg;
} OSMesgQueue;  





 

 
typedef char os_mesg_assert_0x04[(int)&((OSMesgQueue *)0)->fullqueue == ( 0x04) ? 1 : -1] ;
typedef char os_mesg_assert_0x08[(int)&((OSMesgQueue *)0)->validCount == ( 0x08) ? 1 : -1] ;
typedef char os_mesg_assert_0x0C[(int)&((OSMesgQueue *)0)->first == ( 0x0C) ? 1 : -1] ;
typedef char os_mesg_assert_0x10[(int)&((OSMesgQueue *)0)->msgCount == ( 0x10) ? 1 : -1] ;
typedef char os_mesg_assert_0x14[(int)&((OSMesgQueue *)0)->msg == ( 0x14) ? 1 : -1] ;
typedef char os_mesg_assert_size[sizeof(OSMesgQueue) == 0x18 ? 1 : -1];





 

typedef struct AudioTask {
      OSTask_t task;
      void *taskQueue;           
      void *unk_44;
      char unk_48[0x8];
} AudioTask;  

 
typedef struct AudioAllocPool {
      u8 *startRamAddr;
      u8 *curRamAddr;
      s32 size;
      s32 numEntries;
} AudioAllocPool;  

 
typedef struct AudioAsyncLoad { u8 data[0x54]; } AudioAsyncLoad;    

 




typedef struct AudioCacheEntry {
      u8 *ramAddr;
      u32 size;
      s16 tableType;
      s16 id;
} AudioCacheEntry;  

 



typedef struct SampleCacheEntry {
      s8 inUse;
      s8 origMedium;
      s8 sampleBankId;
      u8 unk_03[5];
      u8 *allocatedAddr;
      void *sampleAddr;
      u32 size;
} SampleCacheEntry;  

 
typedef struct AudioSampleCache {
      AudioAllocPool pool;
      SampleCacheEntry entries[32];
      s32 numEntries;
} AudioSampleCache;  

typedef struct AudioPersistentCache {
      u32 numEntries;
      AudioAllocPool pool;
      AudioCacheEntry entries[16];
} AudioPersistentCache;  

 

typedef struct AudioTemporaryCache {
      u32 nextSide;
      AudioAllocPool pool;
      AudioCacheEntry entries[2];
} AudioTemporaryCache;  

typedef struct AudioCache {
      AudioPersistentCache persistent;
      AudioTemporaryCache temporary;
      u8 unk_100[0x10];
} AudioCache;  

 
typedef struct AudioSessionPoolSplit {
      u32 miscPoolSize;
      u32 unkSizes[2];
      u32 cachePoolSize;
} AudioSessionPoolSplit;  

typedef struct AudioCachePoolSplit {
      u32 persistentCommonPoolSize;
      u32 temporaryCommonPoolSize;
} AudioCachePoolSplit;  

typedef struct AudioCommonPoolSplit {
      u32 seqCacheSize;
      u32 fontCacheSize;
      u32 sampleBankCacheSize;
} AudioCommonPoolSplit;  

 


typedef struct AdpcmLoop {
      u32 start;
      u32 end;
      u32 count;
      char unk_0C[4];
      s16 predictorState[16];
} AdpcmLoop;  

typedef struct AdpcmBook {
      s32 order;
      s32 numPredictors;
      s16 book[1];
} AdpcmBook;

typedef struct Sample {
      u32 codec : 4;
      u32 medium : 2;
      u32 unk_bit26 : 1;
      u32 isRelocated : 1;
      u32 size : 24;
      u8 *sampleAddr;
      AdpcmLoop *loop;
      AdpcmBook *book;
} Sample;  

 

typedef struct AudioPreloadReq {
      u32 endAndMediumKey;
      Sample *sample;
      u8 *ramAddr;
      u32 encodedInfo;
      s32 isFree;
} AudioPreloadReq;  

 



typedef struct AudioSlowLoad {
      u8 medium;
      u8 seqOrFontId;
      u8 instId;
      u8 unk_03;
      s32 unkMediumParam;
      s32 curDevAddr;
      u8 *curRamAddr;
      u8 *ramAddr;
      s32 state;
      s32 bytesRemaining;
      s8 *isDone;
      Sample sample;
      OSMesgQueue msgQueue;
      void *msg;
      u8 ioMesg[0x18];              
} AudioSlowLoad;  

typedef struct TunedSample {
      Sample *sample;
      f32 tuning;
} TunedSample;  

 

typedef TunedSample SoundFontSound;

 

typedef struct AdsrEnvelope {
      s16 delay;
      s16 arg;
} AdsrEnvelope;  

 





typedef struct Instrument {
      u8 isRelocated;
      u8 normalRangeLo;
      u8 normalRangeHi;
      u8 adsrDecayIndex;
      AdsrEnvelope *envelope;
      TunedSample lowPitchTunedSample;
      TunedSample normalPitchTunedSample;
      TunedSample highPitchTunedSample;
} Instrument;  

typedef struct Drum {
      u8 adsrDecayIndex;
      u8 pan;
      u8 isRelocated;
      TunedSample tunedSample;
      AdsrEnvelope *envelope;
} Drum;  

typedef struct SoundEffect {
      TunedSample tunedSample;
} SoundEffect;  

 
typedef struct SoundFont {
      u8 numInstruments;
      u8 numDrums;
      u8 sampleBankId1;
      u8 sampleBankId2;
      u16 numSfx;
      Instrument **instruments;
      Drum **drums;
      SoundEffect *soundEffects;
} SoundFont;  

 

 

typedef struct SampleBankRelocInfo {
      s32 sampleBankId1;
      s32 sampleBankId2;
      u32 baseAddr1;
      u32 baseAddr2;
      u32 medium1;
      u32 medium2;
} SampleBankRelocInfo;  

typedef struct AudioTableHeader {
      s16 numEntries;
      s16 unkMediumParam;
      u32 romAddr;
      char pad[0x8];
} AudioTableHeader;  

typedef struct AudioTableEntry {
      u32 romAddr;
      u32 size;
      s8 medium;
      s8 cachePolicy;
      s16 shortData1;
      s16 shortData2;
      s16 shortData3;
} AudioTableEntry;  

typedef struct AudioTable {
      AudioTableHeader header;
      AudioTableEntry entries[1];
} AudioTable;  

 



typedef struct ReverbRingBufferItem {
      s16 numSamplesAfterDownsampling;
      s16 chunkLen;
      s16 *toDownsampleLeft;
      s16 *toDownsampleRight;
      s32 startPos;
      s16 lengthA;
      s16 lengthB;
} ReverbRingBufferItem;  

 















typedef struct SynthesisReverb {
      u8 resampleFlags;
      u8 useReverb;
      u8 framesToIgnore;
      u8 curFrame;
      u8 downsampleRate;
      s8 unk_05;
      u16 windowSize;
      u16 unk_08;
      s16 volume;
      u16 decayRatio;
      u16 unk_0E;
      u16 leakRtl;
      u16 leakLtr;
      s32 nextRingBufPos;
      s32 unk_18;             
      s32 bufSizePerChan;
      s16 *leftRingBuf;
      s16 *rightRingBuf;
      void *unk_28;           
      void *unk_2C;
      void *unk_30;
      void *unk_34;
      ReverbRingBufferItem items[2][5];
      s16 *filterLeft;
      s16 *filterRight;
      s16 *filterLeftState;
      s16 *filterRightState;
      TunedSample tunedSample;
      Sample sample;
      AdpcmLoop loop;
} SynthesisReverb;  

 

typedef struct AudioListItem {
      struct AudioListItem *prev;
      struct AudioListItem *next;
      union { void *value; s32 count; } u;
      struct NotePool *pool;
} AudioListItem;  

 

typedef struct NotePool {
      AudioListItem disabled;
      AudioListItem decaying;
      AudioListItem releasing;
      AudioListItem active;
} NotePool;  

 
typedef struct SeqScriptState {
      u8 *pc;
      u8 *stack[4];
      u8 remLoopIters[4];
      u8 depth;            
      s8 value;
} SeqScriptState;  

 

typedef struct AdsrSettings {
      u8 decayIndex;
      u8 sustain;
      AdsrEnvelope *envelope;
} AdsrSettings;  

 




typedef union AudioCmdArg {
    void *data;
    f32 asFloat;
    s32 asInt;
    u32 asUInt;
    u16 asUShort;
    s8 asSbyte;
    u8 asUbyte;
} AudioCmdArg;  

typedef struct AudioCmd {
      u8 op;
      u8 arg0;
      u8 arg1;
      u8 arg2;
      AudioCmdArg arg;
} AudioCmd;  

 
typedef union Stereo {
    struct {
        u8 unused : 2;
        u8 bit2 : 2;
        u8 strongRight : 1;
        u8 strongLeft : 1;
        u8 stereoHeadsetEffects : 1;
        u8 usesHeadsetPanEffects : 1;
    } s;
    u8 asByte;
} Stereo;  

struct SequenceChannel;
struct SequenceLayer;

 










typedef struct SequencePlayer {
      u32 enabled : 1;
      u32 finished : 1;
      u32 muted : 1;
      u32 seqDmaInProgress : 1;
      u32 fontDmaInProgress : 1;
      u32 recalculateVolume : 1;
      u32 stopScript : 1;
      u32 applyBend : 1;
      u8 state;
      u8 noteAllocPolicy;
      u8 muteBehavior;
      u8 seqId;
      u8 defaultFont;
      u8 unk_06;
      s8 playerIdx;
      u16 tempo;
      u16 tempoAcc;
      s16 tempoChange;
      s16 transposition;
      u16 delay;
      u16 fadeTimer;
      u16 fadeTimerUnkEu;
      char unk_16[2];
      u8 *seqData;
      f32 fadeVolume;
      f32 fadeVelocity;
      f32 volume;
      f32 muteVolumeScale;
      f32 fadeVolumeScale;
      f32 appliedFadeVolume;
      f32 bend;
      struct SequenceChannel *channels[16];
      SeqScriptState scriptState;
      u8 *shortNoteVelocityTable;
      u8 *shortNoteGateTimeTable;
      NotePool notePool;
      s32 skipTicks;
      u32 scriptCounter;
      char unk_E4[0x158 - 0xE4];
      s8 seqScriptIO[8];
} SequencePlayer;  

 









typedef struct SequenceChannel {
      u32 enabled : 1;
      u32 finished : 1;
      u32 stopScript : 1;
      u32 stopSomething2 : 1;
      u32 hasInstrument : 1;
      u32 stereoHeadsetEffects : 1;
      u32 largeNotes : 1;
      u32 unused : 1;
      u32 changesFreqScale : 1;
      u32 changesVolume : 1;
      u32 changesPan : 1;
      u32 changesRest : 5;
      u8 noteAllocPolicy;
      u8 muteBehavior;
      u8 targetReverbVol;
      u8 notePriority;
      u8 someOtherPriority;
      u8 fontId;
      u8 reverbIndex;
      u8 bookOffset;
      u8 newPan;
      u8 panChannelWeight;
      u8 gain;
      u8 velocityRandomVariance;
      u8 gateTimeRandomVariance;
      u8 combFilterSize;
      u16 vibratoRateStart;
      u16 vibratoDepthStart;
      u16 vibratoRateTarget;
      u16 vibratoDepthTarget;
      u16 vibratoRateChangeDelay;
      u16 vibratoDepthChangeDelay;
      u16 vibratoDelay;
      u16 delay;
      u16 combFilterGain;
      u16 unk_22;
      s16 instOrWave;
      s16 transposition;
      f32 volumeScale;
      f32 volume;
      s32 pan;
      f32 appliedVolume;
      f32 freqScale;
      u8 (*dynTable)[][2];
      void *noteUnused;
      void *layerUnused;
      void *instrument;
      SequencePlayer *seqPlayer;
      struct SequenceLayer *layers[8];
      SeqScriptState scriptState;
      AdsrSettings adsr;
      NotePool notePool;
      s8 seqScriptIO[8];
      s16 *filter;
      Stereo stereo;
      char unk_E1[3];
} SequenceChannel;  

 

typedef struct Portamento {
      u8 mode;
      u16 cur;
      u16 speed;
      f32 extent;
} Portamento;  

 






typedef struct SequenceLayer {
      u32 enabled : 1;
      u32 finished : 1;
      u32 stopSomething : 1;           
      u32 continuousNotes : 1;
      u32 bit3 : 1;                    
      u32 ignoreDrumPan : 1;
      u32 bit1 : 1;
      u32 notePropertiesNeedInit : 1;  
      u8 unk_01;
      u8 instOrWave;                   

      u8 unk_03;
      char unk_04;
      u8 pan;                          
      s8 notePan;                      
      char unk_07[0x18 - 0x07];
      AdsrSettings adsr;
      Portamento portamento;           
      struct Note *note;               
      f32 freqScale;                   
      char unk_34[0x38 - 0x34];
      f32 velocitySquare;              
      char unk_3C[0x40 - 0x3C];
      f32 noteVelocity;                
      f32 noteFreqScale;
      char unk_48[0x4C - 0x48];
      TunedSample *tunedSample;        
      SequenceChannel *channel;
      SeqScriptState scriptState;
      AudioListItem listItem;
} SequenceLayer;  

 













 
typedef struct NoteSynthesisState {
      u8 restart;
      u8 sampleDmaIndex;
      u8 prevHaasEffectLeftDelaySize;
      u8 prevHaasEffectRightDelaySize;
      u8 reverbVol;
      u8 numParts;
      u16 samplePosFrac;
      s32 samplePosInt;
      void *synthesisBuffers;
      s16 curVolLeft;
      s16 curVolRight;
      char unk_14[6];
      u8 combFilterNeedsInit;
      char unk_1B[5];
} NoteSynthesisState;  

 

typedef struct NoteAttributes {
      u8 reverb;
      u8 gain;
      u8 pan;
      Stereo stereo;
      u8 combFilterGain;
      char unk_05;
      u16 combFilterSize;
      f32 freqScale;
      f32 velocity;
      s16 *filter;
} NoteAttributes;  

 


typedef struct AdsrState {
      union {
        struct {
            u8 unk_bit0 : 1;
            u8 hang : 1;
            u8 decay : 1;
            u8 release : 1;
            u8 state : 4;
        } s;
        u8 asByte;
    } action;
      u8 envIndex;
      s16 delay;
      f32 sustain;
      f32 velocity;
      f32 fadeOutVel;
      f32 current;
      f32 target;
      char unk_18[4];
      AdsrEnvelope *envelope;
} AdsrState;  

 

typedef struct VibratoState {
      SequenceChannel *channel;
      u32 time;
      s16 *curve;
      f32 depth;
      f32 rate;
      u8 active;
      u16 rateChangeTimer;
      u16 depthChangeTimer;
      u16 delay;
} VibratoState;  

typedef struct NotePlaybackState {
      u8 priority;
      u8 waveId;
      u8 harmonicIndex;
      u8 fontId;
      u8 unk_04;
      u8 stereoHeadsetEffects;
      s16 adsrVolScaleUnused;
      f32 portamentoFreqScale;
      f32 vibratoFreqScale;
      SequenceLayer *prevParentLayer;
      SequenceLayer *parentLayer;
      SequenceLayer *wantedParentLayer;
      NoteAttributes attributes;
      AdsrState adsr;
      Portamento portamento;
      VibratoState vibratoState;
      char unk_78[8];
} NotePlaybackState;  

 





typedef struct NoteSampleState {
      u32 enabled : 1;
      u32 needsInit : 1;
      u32 finished : 1;
      u32 unused : 1;
      u32 stereoStrongRight : 1;
      u32 stereoStrongLeft : 1;
      u32 stereoHeadsetEffects : 1;
      u32 usesHeadsetPanEffects : 1;
      u32 reverbIndex : 3;
      u32 bookOffset : 2;
      u32 isSyntheticWave : 1;
      u32 hasTwoParts : 1;
      u32 useHaasEffect : 1;
      u8 gain;
      u8 haasEffectLeftDelaySize;
      u8 haasEffectRightDelaySize;
      u8 reverbVol;
      u8 harmonicIndexCurAndPrev;
      u8 combFilterSize;
      u16 targetVolLeft;
      u16 targetVolRight;
      u16 resamplingRateFixedPoint;
      u16 combFilterGain;
      TunedSample *tunedSample;
      s16 *filter;
      char unk_18[8];
} NoteSampleState;  

typedef struct Note {
      AudioListItem listItem;
      NoteSynthesisState synthesisState;
      NotePlaybackState playbackState;
      NoteSampleState sampleState;
} Note;  

 


typedef struct AudioHeapInitSizes {
      s16 unk0;              
      s16 tatumsPerBeat;     
      s32 heapSize;
      s32 initPoolSize;
      s32 permanentPoolSize;
} AudioHeapInitSizes;  

typedef struct AudioContext {
      char unk_0000;
      s8 numSynthesisReverbs;               
      char unk_0002[0x0010 - 0x0002];
      s16 *curLoadedBook;                   
      void *sampleStates;                   
      SynthesisReverb synthesisReverbs[3];  
      char unk_0420[0x0430 - 0x0420];
      Sample *usedSamples[0x80];                 
      AudioPreloadReq preloadSampleStack[0x80];  
      s32 numUsedSamples;
      s32 preloadSampleStackTop;
      AudioAsyncLoad asyncLoads[16];
      char unk_1578[0x157C - 0x1578];
      AudioSlowLoad slowLoads[2];         
      void *cartHandle;                     
      void *driveHandle;                    
      u8 externalLoadQueue[0x18];           
      void *externalLoadMsgBuf[8];
      u8 preloadSampleQueue[0x18];          
      void *preloadSampleMsgBuf[8];
      OSMesgQueue curAudioFrameDmaQueue;    
      void *curAudioFrameDmaMsgBuf[0x40];
      u8 curAudioFrameDmaIoMsgBuf[0x40][0x18];  
      u8 syncDmaQueue[0x18];                
      void *syncDmaMesg;
      u8 syncDmaIoMesg[0x18];               
      void *sampleDmas;                     
      u32 sampleDmaCount;
      u32 sampleDmaListSize1;
      s32 unused1E14;                      
      u8 sampleDmaReuseQueue1[0x100];
      u8 sampleDmaReuseQueue2[0x100];
      u8 sampleDmaReuseQueue1RdPos;
      u8 sampleDmaReuseQueue2RdPos;
      u8 sampleDmaReuseQueue1WrPos;
      u8 sampleDmaReuseQueue2WrPos;
      AudioTable *sequenceTable;                 
      AudioTable *soundFontTable;                
      AudioTable *sampleBankTable;               
      u8 *sequenceFontTable;                
      s16 numSequences;                     
      char unk_202E[2];
      SoundFont *soundFontList;                 
      s16 specUnk4;                         
      char unk_2036[0x203A - 0x2036];
      s16 samplesPerFrameTarget;            
      s16 maxAiBufferLength;
      s16 minAiBufferLength;
      s16 ticksPerUpdate;                   
      char unk_2042[0x2048 - 0x2042];
      s16 numSequencePlayers;               
      char unk_204A[0x204C - 0x204A];
      f32 resampleRate;
      f32 ticksPerUpdateInv;
      f32 ticksPerUpdateInvScaled;          
      char unk_2058[0x2060 - 0x2058];
      s32 sampleDmaBufSize1;                
      s32 sampleDmaBufSize2;
      s32 sampleDmaBufSize;
      char unk_206C[4];
      s32 numNotes;
      s16 tempoInternalToExternal;          
      s8 soundOutputMode;                   
      char unk_2077;
      s32 totalTaskCount;                   
      s32 curAudioFrameDmaCount;
      s32 rspTaskIndex;
      s32 curAiBufIndex;
      u64 *abiCmdBufs[2];
      u64 *curAbiCmdBuf;
      AudioTask *curTask;
      AudioTask rspTask[2];
      f32 maxTempoTvTypeFactors;            
      s32 refreshRate;                      
      s16 *aiBuffers[3];
      s16 aiBufLengths[3];
      char unk_2152[2];
      u32 audioRandom;                      
      char unk_2158[4];
      volatile u32 resetTimer;              
      char unk_2160[0x2168 - 0x2160];
      AudioAllocPool sessionPool;           
      AudioAllocPool externalPool;          
      AudioAllocPool initPool;              
      AudioAllocPool miscPool;              
      char unk_21A8[0x21C8 - 0x21A8];       
      AudioAllocPool cachePool;             
      AudioAllocPool persistentCommonPool;  
      AudioAllocPool temporaryCommonPool;   
      AudioCache seqCache;                  
      AudioCache fontCache;
      AudioCache sampleBankCache;
      AudioAllocPool permanentPool;         
      AudioCacheEntry permanentCache[32];   
      AudioSampleCache persistentSampleCache;  
      AudioSampleCache temporarySampleCache;   
      AudioSessionPoolSplit sessionPoolSplit;
      AudioCachePoolSplit cachePoolSplit;
      AudioCommonPoolSplit persistentCommonPoolSplit;
      AudioCommonPoolSplit temporaryCommonPoolSplit;
      u8 sampleFontLoadStatus[0x30];        
      u8 fontLoadStatus[0x30];
      u8 seqLoadStatus[0x80];
      volatile u8 resetStatus;              
      u8 specId;
      char unk_2CF2[2];
      s32 audioResetFadeOutFramesLeft;
      f32 *adsrDecayTable;
      Note *notes;                          
      SequencePlayer seqPlayers[4];
      SequenceLayer sequenceLayers[64];    
      SequenceChannel sequenceChannelNone;  
      s32 noteSubEuOffset;                  
      AudioListItem layerFreeList;          
      NotePool noteFreeLists;               
      u8 threadCmdWritePos;                 
      u8 threadCmdReadPos;
      u8 threadCmdQueueFinished;
      char unk_53BB;
      u16 threadCmdChannelMask[4];          
      void *audioResetQueueP;               
      void *taskStartQueueP;
      void *threadCmdProcQueueP;            
      OSMesgQueue taskStartQueue;           
      OSMesgQueue threadCmdProcQueue;
      OSMesgQueue audioResetQueue;
      OSMesg taskStartMsgBuf[1];
      OSMesg audioResetMesgBuf[1];
      OSMesg threadCmdProcMsgBuf[4];
      AudioCmd threadCmdBuf[0x100];         
} AudioContext;  



 
typedef char audio_ctx_assert_0x0010[(int)&((AudioContext *)0)->curLoadedBook == ( 0x0010) ? 1 : -1] ;
typedef char audio_ctx_assert_0x0018[(int)&((AudioContext *)0)->synthesisReverbs == ( 0x0018) ? 1 : -1] ;
typedef char audio_ctx_assert_0x0430[(int)&((AudioContext *)0)->usedSamples == ( 0x0430) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1030[(int)&((AudioContext *)0)->numUsedSamples == ( 0x1030) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1038[(int)&((AudioContext *)0)->asyncLoads == ( 0x1038) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1644[(int)&((AudioContext *)0)->cartHandle == ( 0x1644) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1684[(int)&((AudioContext *)0)->preloadSampleQueue == ( 0x1684) ? 1 : -1] ;
typedef char audio_ctx_assert_0x16BC[(int)&((AudioContext *)0)->curAudioFrameDmaQueue == ( 0x16BC) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1DD4[(int)&((AudioContext *)0)->syncDmaQueue == ( 0x1DD4) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1DF0[(int)&((AudioContext *)0)->syncDmaIoMesg == ( 0x1DF0) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1E08[(int)&((AudioContext *)0)->sampleDmas == ( 0x1E08) ? 1 : -1] ;
typedef char audio_ctx_assert_0x201A[(int)&((AudioContext *)0)->sampleDmaReuseQueue1WrPos == ( 0x201A) ? 1 : -1] ;
typedef char audio_ctx_assert_0x201C[(int)&((AudioContext *)0)->sequenceTable == ( 0x201C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x157C[(int)&((AudioContext *)0)->slowLoads == ( 0x157C) ? 1 : -1] ;
typedef char AudioSlowLoad_size_check[sizeof(AudioSlowLoad) == 0x64 ? 1 : -1];
typedef char audio_ctx_assert_0x2028[(int)&((AudioContext *)0)->sequenceFontTable == ( 0x2028) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2030[(int)&((AudioContext *)0)->soundFontList == ( 0x2030) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2034[(int)&((AudioContext *)0)->specUnk4 == ( 0x2034) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2048[(int)&((AudioContext *)0)->numSequencePlayers == ( 0x2048) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2050[(int)&((AudioContext *)0)->ticksPerUpdateInv == ( 0x2050) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2070[(int)&((AudioContext *)0)->numNotes == ( 0x2070) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2076[(int)&((AudioContext *)0)->soundOutputMode == ( 0x2076) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2098[(int)&((AudioContext *)0)->rspTask == ( 0x2098) ? 1 : -1] ;
typedef char audio_ctx_assert_0x211C[(int)&((AudioContext *)0)->rspTask[1].task.data_size == ( 0x211C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x213C[(int)&((AudioContext *)0)->refreshRate == ( 0x213C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2140[(int)&((AudioContext *)0)->aiBuffers == ( 0x2140) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2154[(int)&((AudioContext *)0)->audioRandom == ( 0x2154) ? 1 : -1] ;
typedef char audio_ctx_assert_0x215C[(int)&((AudioContext *)0)->resetTimer == ( 0x215C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2178[(int)&((AudioContext *)0)->externalPool == ( 0x2178) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2198[(int)&((AudioContext *)0)->miscPool == ( 0x2198) ? 1 : -1] ;
typedef char audio_ctx_assert_0x21C8[(int)&((AudioContext *)0)->cachePool == ( 0x21C8) ? 1 : -1] ;
typedef char audio_ctx_assert_0x21F8[(int)&((AudioContext *)0)->seqCache == ( 0x21F8) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2308[(int)&((AudioContext *)0)->fontCache == ( 0x2308) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2418[(int)&((AudioContext *)0)->sampleBankCache == ( 0x2418) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2528[(int)&((AudioContext *)0)->permanentPool == ( 0x2528) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2538[(int)&((AudioContext *)0)->permanentCache == ( 0x2538) ? 1 : -1] ;
typedef char audio_ctx_assert_0x26B8[(int)&((AudioContext *)0)->persistentSampleCache == ( 0x26B8) ? 1 : -1] ;
typedef char audio_ctx_assert_0x294C[(int)&((AudioContext *)0)->temporarySampleCache == ( 0x294C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2BE0[(int)&((AudioContext *)0)->sessionPoolSplit == ( 0x2BE0) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2C04[(int)&((AudioContext *)0)->temporaryCommonPoolSplit == ( 0x2C04) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2C10[(int)&((AudioContext *)0)->sampleFontLoadStatus == ( 0x2C10) ? 1 : -1] ;
typedef char audio_cache_size_assert[sizeof(AudioCache) == 0x110 ? 1 : -1];
typedef char audio_samplecache_size_assert[sizeof(AudioSampleCache) == 0x294 ? 1 : -1];
typedef char audio_cacheentry_size_assert[sizeof(AudioCacheEntry) == 0xC ? 1 : -1];
typedef char audio_ctx_assert_0x2CF0[(int)&((AudioContext *)0)->resetStatus == ( 0x2CF0) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2CFC[(int)&((AudioContext *)0)->notes == ( 0x2CFC) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2D00[(int)&((AudioContext *)0)->seqPlayers == ( 0x2D00) ? 1 : -1] ;
typedef char audio_ctx_assert_0x3280[(int)&((AudioContext *)0)->sequenceLayers == ( 0x3280) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5280[(int)&((AudioContext *)0)->sequenceChannelNone == ( 0x5280) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5364[(int)&((AudioContext *)0)->noteSubEuOffset == ( 0x5364) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5368[(int)&((AudioContext *)0)->layerFreeList == ( 0x5368) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5378[(int)&((AudioContext *)0)->noteFreeLists == ( 0x5378) ? 1 : -1] ;
typedef char audio_ctx_assert_0x53BC[(int)&((AudioContext *)0)->threadCmdChannelMask == ( 0x53BC) ? 1 : -1] ;
typedef char audio_ctx_assert_0x53CC[(int)&((AudioContext *)0)->threadCmdProcQueueP == ( 0x53CC) ? 1 : -1] ;
typedef char audio_ctx_assert_0x53D0[(int)&((AudioContext *)0)->taskStartQueue == ( 0x53D0) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5400[(int)&((AudioContext *)0)->audioResetQueue == ( 0x5400) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5420[(int)&((AudioContext *)0)->threadCmdProcMsgBuf == ( 0x5420) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5430[(int)&((AudioContext *)0)->threadCmdBuf == ( 0x5430) ? 1 : -1] ;
typedef char audio_ctx_size_assert[sizeof(AudioContext) == 0x5C30 ? 1 : -1];
typedef char audio_pool_size_assert[sizeof(AudioAllocPool) == 0x10 ? 1 : -1];
typedef char audio_reverb_size_assert[sizeof(SynthesisReverb) == 0x158 ? 1 : -1];
typedef char audio_seqplayer_size_assert[sizeof(SequencePlayer) == 0x160 ? 1 : -1];
typedef char audio_listitem_size_assert[sizeof(AudioListItem) == 0x10 ? 1 : -1];
typedef char audio_notepool_size_assert[sizeof(NotePool) == 0x40 ? 1 : -1];
typedef char audio_scriptstate_size_assert[sizeof(SeqScriptState) == 0x1C ? 1 : -1];
typedef char audio_channel_size_assert[sizeof(SequenceChannel) == 0xE4 ? 1 : -1];
typedef char audio_layer_size_assert[sizeof(SequenceLayer) == 0x80 ? 1 : -1];
typedef char audio_ringitem_size_assert[sizeof(ReverbRingBufferItem) == 0x14 ? 1 : -1];
typedef char audio_sample_size_assert[sizeof(Sample) == 0x10 ? 1 : -1];
typedef char audio_adpcmloop_size_assert[sizeof(AdpcmLoop) == 0x30 ? 1 : -1];
typedef char audio_synthstate_size_assert[sizeof(NoteSynthesisState) == 0x20 ? 1 : -1];
typedef char audio_attrs_size_assert[sizeof(NoteAttributes) == 0x14 ? 1 : -1];
typedef char audio_adsrstate_size_assert[sizeof(AdsrState) == 0x20 ? 1 : -1];
typedef char audio_portamento_size_assert[sizeof(Portamento) == 0xC ? 1 : -1];
typedef char audio_vibrato_size_assert[sizeof(VibratoState) == 0x1C ? 1 : -1];
typedef char audio_playback_size_assert[sizeof(NotePlaybackState) == 0x80 ? 1 : -1];
typedef char audio_samplestate_size_assert[sizeof(NoteSampleState) == 0x20 ? 1 : -1];
typedef char audio_note_size_assert[sizeof(Note) == 0xD0 ? 1 : -1];

 
typedef char audio_SequencePlayer_tempo_assert[(int)&((SequencePlayer *)0)-> tempo == ( 0x008) ? 1 : -1] ;
typedef char audio_SequencePlayer_seqData_assert[(int)&((SequencePlayer *)0)-> seqData == ( 0x018) ? 1 : -1] ;
typedef char audio_SequencePlayer_bend_assert[(int)&((SequencePlayer *)0)-> bend == ( 0x034) ? 1 : -1] ;
typedef char audio_SequencePlayer_channels_assert[(int)&((SequencePlayer *)0)-> channels == ( 0x038) ? 1 : -1] ;
typedef char audio_SequencePlayer_scriptState_assert[(int)&((SequencePlayer *)0)-> scriptState == ( 0x078) ? 1 : -1] ;
typedef char audio_SequencePlayer_shortNoteVelocityTable_assert[(int)&((SequencePlayer *)0)-> shortNoteVelocityTable == ( 0x094) ? 1 : -1] ;
typedef char audio_SequencePlayer_notePool_assert[(int)&((SequencePlayer *)0)-> notePool == ( 0x09C) ? 1 : -1] ;
typedef char audio_SequencePlayer_skipTicks_assert[(int)&((SequencePlayer *)0)-> skipTicks == ( 0x0DC) ? 1 : -1] ;
typedef char audio_SequencePlayer_scriptCounter_assert[(int)&((SequencePlayer *)0)-> scriptCounter == ( 0x0E0) ? 1 : -1] ;
typedef char audio_SequencePlayer_seqScriptIO_assert[(int)&((SequencePlayer *)0)-> seqScriptIO == ( 0x158) ? 1 : -1] ;
typedef char audio_SequenceChannel_noteAllocPolicy_assert[(int)&((SequenceChannel *)0)-> noteAllocPolicy == ( 0x02) ? 1 : -1] ;
typedef char audio_SequenceChannel_vibratoRateStart_assert[(int)&((SequenceChannel *)0)-> vibratoRateStart == ( 0x10) ? 1 : -1] ;
typedef char audio_SequenceChannel_transposition_assert[(int)&((SequenceChannel *)0)-> transposition == ( 0x26) ? 1 : -1] ;
typedef char audio_SequenceChannel_freqScale_assert[(int)&((SequenceChannel *)0)-> freqScale == ( 0x38) ? 1 : -1] ;
typedef char audio_SequenceChannel_seqPlayer_assert[(int)&((SequenceChannel *)0)-> seqPlayer == ( 0x4C) ? 1 : -1] ;
typedef char audio_SequenceChannel_layers_assert[(int)&((SequenceChannel *)0)-> layers == ( 0x50) ? 1 : -1] ;
typedef char audio_SequenceChannel_scriptState_assert[(int)&((SequenceChannel *)0)-> scriptState == ( 0x70) ? 1 : -1] ;
typedef char audio_SequenceChannel_adsr_assert[(int)&((SequenceChannel *)0)-> adsr == ( 0x8C) ? 1 : -1] ;
typedef char audio_SequenceChannel_notePool_assert[(int)&((SequenceChannel *)0)-> notePool == ( 0x94) ? 1 : -1] ;
typedef char audio_SequenceChannel_seqScriptIO_assert[(int)&((SequenceChannel *)0)-> seqScriptIO == ( 0xD4) ? 1 : -1] ;
typedef char audio_SequenceChannel_filter_assert[(int)&((SequenceChannel *)0)-> filter == ( 0xDC) ? 1 : -1] ;
typedef char audio_SequenceChannel_stereo_assert[(int)&((SequenceChannel *)0)-> stereo == ( 0xE0) ? 1 : -1] ;
typedef char audio_SequenceLayer_instOrWave_assert[(int)&((SequenceLayer *)0)-> instOrWave == ( 0x02) ? 1 : -1] ;
typedef char audio_SequenceLayer_adsr_assert[(int)&((SequenceLayer *)0)-> adsr == ( 0x18) ? 1 : -1] ;
typedef char audio_SequenceLayer_portamento_assert[(int)&((SequenceLayer *)0)-> portamento == ( 0x20) ? 1 : -1] ;
typedef char audio_SequenceLayer_note_assert[(int)&((SequenceLayer *)0)-> note == ( 0x2C) ? 1 : -1] ;
typedef char audio_SequenceLayer_noteVelocity_assert[(int)&((SequenceLayer *)0)-> noteVelocity == ( 0x40) ? 1 : -1] ;
typedef char audio_SequenceLayer_tunedSample_assert[(int)&((SequenceLayer *)0)-> tunedSample == ( 0x4C) ? 1 : -1] ;
typedef char audio_SequenceLayer_channel_assert[(int)&((SequenceLayer *)0)-> channel == ( 0x50) ? 1 : -1] ;
typedef char audio_SequenceLayer_scriptState_assert[(int)&((SequenceLayer *)0)-> scriptState == ( 0x54) ? 1 : -1] ;
typedef char audio_SequenceLayer_listItem_assert[(int)&((SequenceLayer *)0)-> listItem == ( 0x70) ? 1 : -1] ;
typedef char audio_SynthesisReverb_windowSize_assert[(int)&((SynthesisReverb *)0)-> windowSize == ( 0x006) ? 1 : -1] ;
typedef char audio_SynthesisReverb_leakRtl_assert[(int)&((SynthesisReverb *)0)-> leakRtl == ( 0x010) ? 1 : -1] ;
typedef char audio_SynthesisReverb_nextRingBufPos_assert[(int)&((SynthesisReverb *)0)-> nextRingBufPos == ( 0x014) ? 1 : -1] ;
typedef char audio_SynthesisReverb_leftRingBuf_assert[(int)&((SynthesisReverb *)0)-> leftRingBuf == ( 0x020) ? 1 : -1] ;
typedef char audio_SynthesisReverb_items_assert[(int)&((SynthesisReverb *)0)-> items == ( 0x038) ? 1 : -1] ;
typedef char audio_SynthesisReverb_filterLeft_assert[(int)&((SynthesisReverb *)0)-> filterLeft == ( 0x100) ? 1 : -1] ;
typedef char audio_SynthesisReverb_tunedSample_assert[(int)&((SynthesisReverb *)0)-> tunedSample == ( 0x110) ? 1 : -1] ;
typedef char audio_SynthesisReverb_sample_assert[(int)&((SynthesisReverb *)0)-> sample == ( 0x118) ? 1 : -1] ;
typedef char audio_SynthesisReverb_loop_assert[(int)&((SynthesisReverb *)0)-> loop == ( 0x128) ? 1 : -1] ;
typedef char audio_NoteSynthesisState_curVolLeft_assert[(int)&((NoteSynthesisState *)0)-> curVolLeft == ( 0x10) ? 1 : -1] ;
typedef char audio_NoteSynthesisState_combFilterNeedsInit_assert[(int)&((NoteSynthesisState *)0)-> combFilterNeedsInit == ( 0x1A) ? 1 : -1] ;
typedef char audio_NotePlaybackState_adsrVolScaleUnused_assert[(int)&((NotePlaybackState *)0)-> adsrVolScaleUnused == ( 0x06) ? 1 : -1] ;
typedef char audio_NotePlaybackState_prevParentLayer_assert[(int)&((NotePlaybackState *)0)-> prevParentLayer == ( 0x10) ? 1 : -1] ;
typedef char audio_NotePlaybackState_attributes_assert[(int)&((NotePlaybackState *)0)-> attributes == ( 0x1C) ? 1 : -1] ;
typedef char audio_NotePlaybackState_adsr_assert[(int)&((NotePlaybackState *)0)-> adsr == ( 0x30) ? 1 : -1] ;
typedef char audio_NotePlaybackState_portamento_assert[(int)&((NotePlaybackState *)0)-> portamento == ( 0x50) ? 1 : -1] ;
typedef char audio_NotePlaybackState_vibratoState_assert[(int)&((NotePlaybackState *)0)-> vibratoState == ( 0x5C) ? 1 : -1] ;
typedef char audio_AdsrState_fadeOutVel_assert[(int)&((AdsrState *)0)-> fadeOutVel == ( 0x0C) ? 1 : -1] ;
typedef char audio_AdsrState_envelope_assert[(int)&((AdsrState *)0)-> envelope == ( 0x1C) ? 1 : -1] ;
typedef char audio_VibratoState_active_assert[(int)&((VibratoState *)0)-> active == ( 0x14) ? 1 : -1] ;
typedef char audio_VibratoState_delay_assert[(int)&((VibratoState *)0)-> delay == ( 0x1A) ? 1 : -1] ;
typedef char audio_NoteSampleState_gain_assert[(int)&((NoteSampleState *)0)-> gain == ( 0x02) ? 1 : -1] ;
typedef char audio_NoteSampleState_resamplingRateFixedPoint_assert[(int)&((NoteSampleState *)0)-> resamplingRateFixedPoint == ( 0x0C) ? 1 : -1] ;
typedef char audio_NoteSampleState_tunedSample_assert[(int)&((NoteSampleState *)0)-> tunedSample == ( 0x10) ? 1 : -1] ;
typedef char audio_Note_synthesisState_assert[(int)&((Note *)0)-> synthesisState == ( 0x10) ? 1 : -1] ;
typedef char audio_Note_playbackState_assert[(int)&((Note *)0)-> playbackState == ( 0x30) ? 1 : -1] ;
typedef char audio_Note_sampleState_assert[(int)&((Note *)0)-> sampleState == ( 0xB0) ? 1 : -1] ;
typedef char audio_Instrument_envelope_assert[(int)&((Instrument *)0)-> envelope == ( 0x04) ? 1 : -1] ;
typedef char audio_Instrument_highPitchTunedSample_assert[(int)&((Instrument *)0)-> highPitchTunedSample == ( 0x18) ? 1 : -1] ;
typedef char audio_Drum_tunedSample_assert[(int)&((Drum *)0)-> tunedSample == ( 0x04) ? 1 : -1] ;
typedef char audio_Drum_envelope_assert[(int)&((Drum *)0)-> envelope == ( 0x0C) ? 1 : -1] ;
typedef char audio_SoundFont_numSfx_assert[(int)&((SoundFont *)0)-> numSfx == ( 0x04) ? 1 : -1] ;
typedef char audio_SoundFont_soundEffects_assert[(int)&((SoundFont *)0)-> soundEffects == ( 0x10) ? 1 : -1] ;
typedef char audio_AudioTableEntry_shortData3_assert[(int)&((AudioTableEntry *)0)-> shortData3 == ( 0x0E) ? 1 : -1] ;
typedef char audio_AudioTable_entries_assert[(int)&((AudioTable *)0)-> entries == ( 0x10) ? 1 : -1] ;
typedef char audio_instrument_size_assert[sizeof(Instrument) == 0x20 ? 1 : -1];
typedef char audio_drum_size_assert[sizeof(Drum) == 0x10 ? 1 : -1];
typedef char audio_soundfont_size_assert[sizeof(SoundFont) == 0x14 ? 1 : -1];
typedef char audio_envelope_size_assert[sizeof(AdsrEnvelope) == 0x4 ? 1 : -1];


 







 

 



typedef struct SndLevelRamp {
      s32 target;
      s32 current;
      s32 count;
      s32 frac;
      s32 mode;
} SndLevelRamp;  

typedef struct SoundVoice {
    f32 volScale;            
    f32 turnAtten;           
    f32 angle;               
    u8 pan[4];               
} SoundVoice;

typedef struct SoundObj {
    f32 speed;               
    f32 unk04;               
    f32 unk08;               
    f32 unk0C;               
    f32 unk10;               
    u8 unk14;                
    u8 unk15;                
    u8 flags;                
    u8 unk17;                
    s8 unk18;                
    u8 pad19;
    s16 unk1A;               
    u8 flags1C;              
    u8 reverbOn;             


    u8 unk1E;                
    u8 unk1F;                
    u8 fired;                
    u8 kind;                 
    u8 surface;              
    u8 unk23;                
    u8 pad24[2];
    u8 unk26;                
    u8 pad27;
    u8 unk28;                
    u8 level;                
    u8 unk2A;                
    u8 unk2B;                
    u8 unk2C;                
    u8 lastLevel;            
    u8 eventArg;             
    u8 pad2F;
    u16 eventType;           
    u8 scaleIdx;             
    u8 unk33;                
    u8 reverbOnSent;         
    u8 pad35[3];
    s32 unk38;               
    u8 pad3C[8];
    f32 unk44;               
    s32 unk48;               
    u8 pad4C[4];
    f32 unk50;               
    SoundVoice voice;        
} SoundObj;


typedef char audio_SoundObj_flags_assert[(int)&((SoundObj *)0)-> flags == ( 0x16) ? 1 : -1] ;
typedef char audio_SoundObj_kind_assert[(int)&((SoundObj *)0)-> kind == ( 0x21) ? 1 : -1] ;
typedef char audio_SoundObj_eventType_assert[(int)&((SoundObj *)0)-> eventType == ( 0x30) ? 1 : -1] ;
typedef char audio_SoundObj_unk48_assert[(int)&((SoundObj *)0)-> unk48 == ( 0x48) ? 1 : -1] ;
typedef char audio_SoundObj_voice_assert[(int)&((SoundObj *)0)-> voice == ( 0x54) ? 1 : -1] ;
typedef char audio_soundobj_voice_pan_assert[(int)&((SoundObj *)0)->voice.pan == 0x60 ? 1 : -1];
typedef char audio_soundvoice_size_assert[sizeof(SoundVoice) == 0x10 ? 1 : -1];
typedef char audio_soundobj_size_assert[sizeof(SoundObj) == 0x64 ? 1 : -1];


 
typedef struct SndHandle {
    SoundObj *obj;           
    s32 unk04;               
    s32 contactSurface;      


} SndHandle;

 









typedef struct SndCueQueue {
    s32 ring[16];            
    s32 wr;                  
    s32 rd;                  
    s32 timer;               
    s32 unk4C;               
    s32 script;              
    s32 mode;                
    s32 limit;               
    s32 pending;             
    u16 cmd;                 
    s16 cue;                 

} SndCueQueue;               

typedef struct SndCueQueues {
     
      s32 mode;           
      s32 cue;            
      s32 fadeInFrames;   
      s32 holdFrames;     
      f32 level;          
      f32 floor;          
      f32 upStep;         
      f32 downStep;
      f32 rampBase;       
      f32 rampValue;      

      f32 rampStep;       
    char pad2C[0x30 - 0x2C];
      SndCueQueue queue[3];  
    char pad15C[0x160 - 0x15C];
} SndCueQueues;

typedef char audio_SndCueQueue_pending_assert[(int)&((SndCueQueue *)0)-> pending == ( 0x5C) ? 1 : -1] ;
typedef char audio_SndCueQueue_cue_assert[(int)&((SndCueQueue *)0)-> cue == ( 0x62) ? 1 : -1] ;
typedef char audio_SndCueQueues_downStep_assert[(int)&((SndCueQueues *)0)-> downStep == ( 0x1C) ? 1 : -1] ;
typedef char audio_SndCueQueues_queue_assert[(int)&((SndCueQueues *)0)-> queue == ( 0x30) ? 1 : -1] ;
typedef char audio_sndcuequeues_size_assert[sizeof(SndCueQueues) == 0x160 ? 1 : -1];




 



typedef struct SndTimers {
      s32 seqDelay;     
      s32 timer04;
      s32 timer08;
      s32 ramp;         

      s32 timer10;
      s32 unk14;        
      s32 fade;         
} SndTimers;

typedef char audio_SndTimers_ramp_assert[(int)&((SndTimers *)0)-> ramp == ( 0xC) ? 1 : -1] ;
typedef char audio_sndtimers_size_assert[sizeof(SndTimers) == 0x1C ? 1 : -1];



 





















 
















 




 





































 


 

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

















 
















 


typedef struct BaseLightParms {
      const char *name;       
      GdlParmBase *first;     
      GdlParmBase colParm;    
      f32 col[4];             
      s32 unk28;              
} BaseLightParms;

typedef struct BaseLight {
      Node node;
      s32 unk2C;
      s32 unk30[0x21];       
      f32 intensity;         
      f32 unkB8[3];          
      s32 flags;             
      f32 atten;             
      f32 falloff;           
      s32 mask;              
      s32 unkD4[3];
      s32 dirty;             
      f32 dir[3];            
      f32 xdir[3];           
      f32 unkFC;             
      f32 unk100[3];         
      BaseLightParms parms;  
} BaseLight;

typedef struct LightTarget {
      Node node;
      s32 unk2C[0x2C];        
      f32 pos[3];            
      s32 unkE8[8];
      f32 unk108[3];         

      f32 queryPos[3];       
      s32 mask;              
      f32 scale;             
      s32 unk128[0x11];      
} LightTarget;

typedef char BaseLight_size_check[sizeof(BaseLight) == 0x138 ? 1 : -1];

typedef char BaseLight_flags_check[(int)&((BaseLight *)0)->flags == 0xC4 ? 1 : -1];
typedef char BaseLight_dir_check[(int)&((BaseLight *)0)->dir == 0xE4 ? 1 : -1];
typedef char BaseLight_parms_check[(int)&((BaseLight *)0)->parms == 0x10C ? 1 : -1];
typedef char BaseLight_col_check[(int)&((BaseLight *)0)->parms.col == 0x124 ? 1 : -1];

typedef char BaseLightParms_size_check[sizeof(BaseLightParms) == 0x2C ? 1 : -1];
typedef char LightTarget_size_check[sizeof(LightTarget) == 0x16C ? 1 : -1];

typedef char LightTarget_mask_check[(int)&((LightTarget *)0)->mask == 0x120 ? 1 : -1];
typedef char LightTarget_pos_check[(int)&((LightTarget *)0)->pos == 0xDC ? 1 : -1];







 












typedef struct PolyTri {
      u16 flags;
      u16 v[3];             
} PolyTri;

typedef struct BasePolyShape {
      s32 unk00[2];
      s32 flags;
      s32 unk0C[9];
      s32 unk30;           
      s32 unk34;
      s32 shapeFlags;      



      s32 unk3C;
      s32 nVerts;
      u32 nTris;
      s32 unk48;
      s16 *triList;      

      u32 *vtxColours;   
      f32 *faceNormals;    
      f32 *vtxNormals;     
      u8 *palette;         
      s16 (*verts)[3];     
      s32 unk64;
      PolyTri *tris;
      s32 unk6C;
      u16 *remap;          
      s32 unk74;
      u8 *triMarks;        


      u8 *alphas;        
      s32 unk80;
      struct BaseMat **mats;  

      s32 unk88;
      s32 matCap;          
      s32 nMats;           
      s32 unk94;
      s32 unk98;           
      f32 unk9C;           
      struct CollGrid *collGrid;  



      s32 unkA4;           
      s32 skinInvBone;      


      s32 skinBoneMtx;      
} BasePolyShape;

 
typedef struct PolyVert {
      s16 x, y, z;
} PolyVert;

typedef struct PolyNormal {
      f32 x, y, z;
} PolyNormal;

 


typedef struct GdlVtx {
      s16 ob[3];
      u16 flag;
      s16 tc[2];
      u8 cn[4];
} GdlVtx;



 







typedef struct Strip {
      struct DLContext *mesh;  
      s32 nv;                  
      s32 nt;                  
      s32 vtxBase;             
      s32 unk10;
      s16 tris[200][3];        
      u16 ids[(0x58C - 0x4C4) / 2];  
      s32 vtxTotal;            


      s32 maxVtx;              
      s32 mode;                
      void *vptr;              
} Strip;


typedef char Strip_size_check[sizeof(Strip) == 0x59C ? 1 : -1];
typedef char Strip_mode_check[(int)&((Strip *)0)->mode == 0x594 ? 1 : -1];
typedef char Strip_vtxTotal_check[(int)&((Strip *)0)->vtxTotal == 0x58C ? 1 : -1];


typedef char GdlVtx_size_check[sizeof(GdlVtx) == 0x10 ? 1 : -1];






typedef char PolyVert_size_check[sizeof(PolyVert) == 6 ? 1 : -1];
typedef char PolyTri_size_check[sizeof(PolyTri) == 8 ? 1 : -1];
typedef char BasePolyShape_size_check[sizeof(BasePolyShape) == 0xB0 ? 1 : -1];

typedef char BasePolyShape_verts_check[(int)&((BasePolyShape *)0)->verts == 0x60 ? 1 : -1];
typedef char BasePolyShape_remap_check[(int)&((BasePolyShape *)0)->remap == 0x70 ? 1 : -1];
typedef char BasePolyShape_9C_check[(int)&((BasePolyShape *)0)->unk9C == 0x9C ? 1 : -1];
typedef char BasePolyShape_shapeFlags_check[(int)&((BasePolyShape *)0)->shapeFlags == 0x38 ? 1 : -1];
typedef char BasePolyShape_alphas_check[(int)&((BasePolyShape *)0)->alphas == 0x7C ? 1 : -1];


 









typedef struct PolyShape {
      BasePolyShape base;
      s32 unkB0[4];
} PolyShape;

typedef struct MorphPoly {
      PolyShape poly;
      void *verts;             
      u8 *colours;             


      s32 unkC8;
      s32 unkCC;
      s16 *updateList;         
      s16 vtxStart;
      s16 vtxEnd;              
      s32 updateCount;
} MorphPoly;

typedef char PolyShape_size_check[sizeof(PolyShape) == 0xC0 ? 1 : -1];
typedef char MorphPoly_size_check[sizeof(MorphPoly) == 0xDC ? 1 : -1];

typedef char MorphPoly_updateList_check[(int)&((MorphPoly *)0)->updateList == 0xD0 ? 1 : -1];
typedef char MorphPoly_updateCount_check[(int)&((MorphPoly *)0)->updateCount == 0xD8 ? 1 : -1];







 














typedef struct BaseMat {
      f32 colour[4];           
      f32 unk10;               
      s32 unk14;               
      s32 id;                  
      void *texels;            
      s16 width;               
      s16 height;              
      s32 format;              
      s32 texFlags;            
      s16 shiftS;              
      s16 shiftT;              
      s16 unk30;               
      u8 unk32;                
      u8 pad33;
      s32 unk34;               
      s32 geomFlags;           
      s32 tile;                
      struct BaseMat *next;    
      char *name;              
      s32 unk48;               
      s32 unk4C;
      s32 minCut;
      s32 maxCut;
      s32 unk58;
      char *vptr;              
} BaseMat;

 










 








 





typedef struct Mat {
      BaseMat base;
      struct DLContext *lightDL;  
      struct DLContext *stateDL;   
      struct DLContext *texgenDL;  
      struct DLContext *triDL;     

      s32 unk70;
      s32 unk74;
      s32 unk78;
      s16 *rowGfx;                 


      s16 rowStart;                
      s16 pad82;
      s32 unk84;                   
      s16 stateStart;              
      s16 triStart;                
      s32 unk8C;
} Mat;






typedef char BaseMat_size_check[sizeof(BaseMat) == 0x60 ? 1 : -1];
typedef char Mat_size_check[sizeof(Mat) == 0x90 ? 1 : -1];

typedef char BaseMat_format_check[(int)&((BaseMat *)0)->format == 0x24 ? 1 : -1];
typedef char BaseMat_name_check[(int)&((BaseMat *)0)->name == 0x44 ? 1 : -1];
typedef char BaseMat_vptr_check[(int)&((BaseMat *)0)->vptr == 0x5C ? 1 : -1];
typedef char Mat_stateStart_check[(int)&((Mat *)0)->stateStart == 0x88 ? 1 : -1];
typedef char Mat_rowGfx_check[(int)&((Mat *)0)->rowGfx == 0x7C ? 1 : -1];
typedef char Mat_unk84_check[(int)&((Mat *)0)->unk84 == 0x84 ? 1 : -1];







 















 











typedef struct CollObj {
      Node *owner;         
      struct CollObj *next;  
      s32 kind;            
      s16 id;              
      s16 unk0E;
      s32 flags;           
      s16 hitMask;         
      s16 category;        
      f32 pos[3];
      f32 vel[3];          
      char *vptr;          
} CollObj;

 
typedef struct CollCylinder {
      CollObj obj;
      f32 radius;
      f32 halfHeight;      
      f32 radius2;         
} CollCylinder;

 
typedef struct CollContact {
      f32 normal[3];
      f32 depth;
      char pad10[0x28 - 0x10];
      CollObj *other;
      char pad2C[0x40 - 0x2C];
} CollContact;

 
typedef struct CollObjMgr {
      Node node;
      CollObj *statics;    
      CollObj *dynamics;   
} CollObjMgr;

 






 
typedef struct CollTri {
      s8 axU;               
      s8 axV;               
      s8 axis;              
      s8 sign;              
      s16 tag;              
      f32 d;                
} CollTri;

 


typedef struct CollGrid {
      s32 w;
      s32 h;
      s32 x0;
      s32 z0;
      f32 cellW;
      f32 cellH;
      s16 *lists;
      s32 *cells;
} CollGrid;

typedef struct CollShape {
      Node node;           
      CollTri *tris;       
      s32 unk30;           
      s32 *stream;         
      f32 unk38;           
      f32 box[6];          
      f32 unk54[3];        
    char pad60[0x84 - 0x60];
      struct BasePolyShape *shape;  

      s32 unk88;           
      s32 unk8C;
} CollShape;

typedef char CollObj_size_check[sizeof(CollObj) == 0x34 ? 1 : -1];

typedef char CollObj_vptr_check[(int)&((CollObj *)0)->vptr == 0x30 ? 1 : -1];

typedef char CollCylinder_size_check[sizeof(CollCylinder) == 0x40 ? 1 : -1];
typedef char CollContact_size_check[sizeof(CollContact) == 0x40 ? 1 : -1];
typedef char CollObjMgr_size_check[sizeof(CollObjMgr) == 0x34 ? 1 : -1];

typedef char CollTri_size_check[sizeof(CollTri) == 12 ? 1 : -1];
typedef char CollGrid_size_check[sizeof(CollGrid) == 0x20 ? 1 : -1];
typedef char CollShape_size_check[sizeof(CollShape) == 0x90 ? 1 : -1];

typedef char CollShape_shape_check[(int)&((CollShape *)0)->shape == 0x84 ? 1 : -1];













 




typedef struct U64BGWall {
    Node node;                   
    s32 rotX;                    
    s32 rotY;                    
    s32 rotZ;                    
    s32 displayList;             
    f32 scale[4];                
} U64BGWall;

 


typedef struct BGWallTex {
    s32 unk00;                   
    s32 unk04;                   
    s32 timg;                    
    s32 tlut;                    
} BGWallTex;

 




typedef struct BGBox {
    Node node;                   
    f32 scale[3];                
    f32 unk38;                   
    s32 clearWindow;             

} BGBox;

 




typedef struct EnvSettings {
    Node node;                   
    s32 handlers;                
    s32 clipNear;                
    s32 clipFar;                 
    s32 flags;                   
    struct Node *bgBox;          


    struct FallingSnow *fallingSnow;  

} EnvSettings;



 
 


typedef struct FogItem {
    Node node;                   
    s32 link;                    
    f32 pos[3];                  
    s32 parmsName;               
    s32 parmsList;               
    CourseFParm fin;             
    CourseFParm rng;             
    char fog[0x18];              

    s32 inside;                  
} FogItem;



 

typedef struct SnowItem {
    Node node;                   
    s32 link;                    
    f32 pos[3];                  
    s32 parmsName;               
    s32 parmsList;               
    CourseFParm rng;             
    CourseParm sta;              

} SnowItem;



 




typedef struct CourseCamItem {
    Node node;                   
    s32 link;                    
    f32 pos[3];                  
    s32 kind;                    
} CourseCamItem;



 



typedef struct FallingSnow {
    Node node;                   
    char unk2C[0x48 - 0x2C];
    s32 enabled;                 
    f32 unk4C;                   
    char unk50[0xBC - 0x50];
    s32 unkBC;                   
} FallingSnow;

 

 



typedef struct Tv1CallbackPmf {
    s32 a;                       
    s32 b;                       
} Tv1CallbackPmf;
typedef struct Tv1Callback {
    void *vptr;                  
    void *obj;                   
    Tv1CallbackPmf pmf;          
} Tv1Callback;

 


typedef struct Tv1Model {
    char unk00[0x84];
    char **screens;              
} Tv1Model;

typedef struct Tv1Tmpl {
    Node node;                   
    char unk2C[0x40 - 0x2C];
    Tv1Model *model;             
    char unk44[0x48 - 0x44];
    Tv1Callback stepCallback;    
    s32 scroll;                  
    s32 state;                   
    s32 timer;                   
    u16 *frameImage;             

    s32 displayCount;            
} Tv1Tmpl;

 




typedef struct Tv1 {
    Node node;                   
    char mtx[0x30];              
    f32 pos[3];                  
    s32 unk68;                   
    f32 height;                  
    f32 scale;                   
    f32 rot[3];                  
    f32 radius;                  
    struct SNode *next;          
} Tv1;



 

typedef struct SnowBCollider {
    char base[0x114];            
    f32 probeVel[3];             
    f32 point[3];                
    char unk12C[0x14C - 0x12C];
    s32 triangle;                
    f32 unk150;                  
    f32 unk154;                  
    char unk158[0x170 - 0x158];
    struct SnowBoarder *rider;   
    u16 contactFlags;            
} SnowBCollider;                 




 


typedef struct ShpNode {
    DNode dnode;                 
    s32 life;                    
} ShpNode;                       



 




typedef struct Tree {
    SNode snode;                 
    CollCylinder coll;           
} Tree;                          




 





typedef struct TreeTmpl {
    Node node;                   
    s32 tag;                     
    struct ItemType *next;       
    struct SNode *items;         
    s32 unk38;                   
    s32 unk3C;
    s32 shape;                   
    s32 typeId;                  
    void *shapeData;             
    f32 colour[4];               
    char fog[0x18];              
} TreeTmpl;                      





typedef char envobj_assert_U64BGWall_0x3C[(int)&((U64BGWall *)0)-> scale == ( 0x3C) ? 1 : -1] ;
typedef char envobj_assert_BGWallTex_0xC[(int)&((BGWallTex *)0)-> tlut == ( 0xC) ? 1 : -1] ;
typedef char envobj_assert_BGBox_0x3C[(int)&((BGBox *)0)-> clearWindow == ( 0x3C) ? 1 : -1] ;
typedef char envobj_size_BGBox[sizeof(BGBox) == 0x40 ? 1 : -1];
typedef char envobj_assert_EnvSettings_0x40[(int)&((EnvSettings *)0)-> fallingSnow == ( 0x40) ? 1 : -1] ;
typedef char envobj_assert_FogItem_0x8C[(int)&((FogItem *)0)-> inside == ( 0x8C) ? 1 : -1] ;
typedef char envobj_assert_FogItem_0x5C[(int)&((FogItem *)0)-> rng == ( 0x5C) ? 1 : -1] ;
typedef char envobj_assert_SnowItem_0x5C[(int)&((SnowItem *)0)-> sta == ( 0x5C) ? 1 : -1] ;
typedef char envobj_assert_FallingSnow_0xBC[(int)&((FallingSnow *)0)-> unkBC == ( 0xBC) ? 1 : -1] ;
typedef char envobj_assert_Tv1Tmpl_0x68[(int)&((Tv1Tmpl *)0)-> displayCount == ( 0x68) ? 1 : -1] ;
typedef char envobj_assert_Tv1Tmpl_0x64[(int)&((Tv1Tmpl *)0)-> frameImage == ( 0x64) ? 1 : -1] ;
typedef char envobj_assert_Tv1Model_0x84[(int)&((Tv1Model *)0)-> screens == ( 0x84) ? 1 : -1] ;
typedef char envobj_assert_Tv1Tmpl_0x48[(int)&((Tv1Tmpl *)0)-> stepCallback == ( 0x48) ? 1 : -1] ;
typedef char envobj_size_Tv1Callback[sizeof(Tv1Callback) == 0x10 ? 1 : -1];
typedef char envobj_assert_TreeTmpl_0x48[(int)&((TreeTmpl *)0)-> shapeData == ( 0x48) ? 1 : -1] ;
typedef char envobj_assert_TreeTmpl_0x5C[(int)&((TreeTmpl *)0)-> fog == ( 0x5C) ? 1 : -1] ;
typedef char TreeTmpl_size_check[sizeof(TreeTmpl) == 0x74 ? 1 : -1];
typedef char envobj_assert_SnowBCollider_0x174[(int)&((SnowBCollider *)0)-> contactFlags == ( 0x174) ? 1 : -1] ;
typedef char envobj_assert_ShpNode_0x3D4[(int)&((ShpNode *)0)-> life == ( 0x3D4) ? 1 : -1] ;
typedef char envobj_assert_Tree_0xA0[(int)&((Tree *)0)-> coll.obj.pos == ( 0xA0) ? 1 : -1] ;
typedef char envobj_size_U64BGWall[sizeof(U64BGWall) == 0x4C ? 1 : -1];
typedef char envobj_size_Tv1[sizeof(Tv1) == sizeof(SNode) ? 1 : -1];
typedef char envobj_assert_Tv1_0x5C[(int)&((Tv1 *)0)-> pos == ( 0x5C) ? 1 : -1] ;
typedef char envobj_assert_Tv1_0x80[(int)&((Tv1 *)0)-> radius == ( 0x80) ? 1 : -1] ;
typedef char envobj_size_EnvSettings[sizeof(EnvSettings) == 0x44 ? 1 : -1];
typedef char envobj_size_FogItem[sizeof(FogItem) == 0x90 ? 1 : -1];
typedef char envobj_size_SnowItem[sizeof(SnowItem) == 0x74 ? 1 : -1];
typedef char envobj_size_SnowBCollider[sizeof(SnowBCollider) == 0x178 ? 1 : -1];
typedef char envobj_size_ShpNode[sizeof(ShpNode) == 0x3D8 ? 1 : -1];
typedef char envobj_size_Tree[sizeof(Tree) == 0xC8 ? 1 : -1];






 






















































 


















































 





















































 



extern float D_bu_ro_pool[];
extern double D_bu_ro_dpool[];   
extern f32 kRo_SnowBoarder_ctor_868, kRo_SnowBoarder_ctor_86C, kRo_SnowBoarder_ctor_870, kRo_SnowBoarder_ctor_874, kRo_SnowBoarder_ctor_878, kRo_SnowBoarder_ctor_87C, kRo_SnowBoarder_ctor_880, kRo_SnowBoarder_ctor_884, kRo_SnowBoarder_ctor_888, kRo_SnowBoarder_ctor_88C, kRo_SnowBoarder_ctor_890, kRo_SnowBoarder_ctor_894, kRo_SnowBoarder_ctor_898, kRo_SnowBoarder_ctor_89C, kRo_SnowBoarder_ctor_8A0, kRo_SnowBoarder_ctor_8A4, kRo_SnowBoarder_ctor_8A8, kRo_SnowBoarder_ctor_8AC, kRo_SnowBoarder_ctor_8B0, kRo_SnowBoarder_ctor_8B4, kRo_SnowBoarder_procColl_938, kRo_SnowBoarder_procColl_93C;

 




func_802C676C() {
}

 


extern char D_00000000;


void stream_readS32_00000008(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readF32_00000044(float *dst) {
    float buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

typedef struct { int a, b, c; } Tri3i;
typedef struct { float x, y, z; } Vec3;
void stream_readVec3_00000080(Vec3 *dst) {
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

typedef struct { int a, b, c, d; } Quad4;
void stream_readQuad_000000F0(Quad4 *dst) {
    Quad4 buf;
    func_802C676C (&D_00000000 , &buf, 16);



    *dst = buf;
}

extern char sStr_Poop_start_6538;
void snd_seqEventDbg_00000148(int a0, int a1, int a2) {
    func_802C676C (&sStr_Poop_start_6538);
    func_802C676C (a0, a1, a2);
}

extern char sStr_Poop_end_6544;
void snd_seqEndDbg_00000188(int a0, int a1, int a2) {
    func_802C676C (&sStr_Poop_end_6544);
    func_802C676C (a0, a1, a2);
}

void snd_setLevelRampTarget(int a0) {
    if (a0 != 0) {
        func_802C676C (2);
    } else {
        func_802C676C (0);
    }
}

 


void snd_setSoundOutputMode_000001FC(void ) {
    func_802C676C ( );
}

void snd_setPlayer1VolumeLevel(void ) {
    func_802C676C ( );
}

void snd_setPlayer0VolumeLevel_0000023C(void ) {
    func_802C676C ( );
}

void snd_setPlayer2VolumeLevel(void ) {
    func_802C676C ( );
}

void snd_startPlayer2Seq_0000027C(void   ) {
    func_802C676C (   );
}

void snd_muteAll_0000029C(void) {
    func_802C676C ();
}

void snd_unmuteAll(void) {
    func_802C676C ();
}

void snd_postEvent(void ) {
    func_802C676C ( );
}

void snd_sendEvent(void   ) {
    func_802C676C (   );
}

void snd_updateChannel10Emitter(int a0, int a1, int a2) {
    int local1, local2;
    func_802C676C (a1, &local1, &local2, a2);



    func_802C676C (a0, local1, (signed char)local2);

}

extern char sStr_Poop_Added_sound_heap_6550;
void snd_addSoundHeap(void   ) {
    func_802C676C (   );
    func_802C676C (&sStr_Poop_Added_sound_heap_6550);
}

extern char sStr_Poop_Removed_sound_heap_6568;
void snd_removeSoundHeap(void) {
    func_802C676C ();
    func_802C676C (&sStr_Poop_Removed_sound_heap_6568);
}

void snd_setPlayer1Channel15IO(void       ) {
    func_802C676C (       );
}

void snd_setPlayer3FreqScaleFromStick(void   ) {
    func_802C676C (   );
}

                                                                                        
                                                                               
  
                                                               
                                                                   
                                                                              
                                               
                                                                   
                     
                                                                             
                                                               
                                                                                  
                                                                        
                                                                                             
                                                                    
  
                           
                                                                   
                                                       
                                        
                                                                        



 







typedef struct { f32 x, y, z; } V3_3F8;
extern f32 func_00000000_3F8_f(f32);
 
extern f32 D_00000050;
void snd_calcEmitterDistPan_000003F8(V3_3F8 *pos, f32 *dist, s32 *proj, char *obj) {
    V3_3F8 d;
    f32 n[3];
    f32 q0, q1, q2, q3;
    f32 inv;
    f32 t;

    d = *pos;
    d.x = d.x - ((CamWindow *)obj)->cam->mnode.world[3][0];
    d.y = d.y - ((CamWindow *)obj)->cam->mnode.world[3][1];
    d.z = d.z - ((CamWindow *)obj)->cam->mnode.world[3][2];
    *dist = func_00000000_3F8_f (d.x * d.x + d.y * d.y + d.z * d.z);
    inv = 1.0 / *dist;
    d.x *= inv;
    d.y *= inv;
    d.z *= inv;
    n[0] = ((CamWindow *)obj)->cam->view[0][0];
    n[1] = ((CamWindow *)obj)->cam->view[1][0];
    n[2] = ((CamWindow *)obj)->cam->view[2][0];
    *proj = (s32)((d.z * n[2] + (d.y * n[1] + n[0] * (t = d.x))) * 63.0f);
    *dist = *dist / D_00000050;
    if (*dist > 1.0) {
        *dist = 1.0f;
    }
}

 




void snd_soundObjCreate_0000057C(int *arg0, int arg1, int arg2) {
    int sel;
    arg0[0] = (int)func_802C676C (0x64);
    sel = 0;
    switch (arg1) {
    case 0: break;
    case 1: sel = 1; break;
    case 2: sel = 2; break;
    }
     
    ((SoundObj *)arg0[0])->surface = (char)arg2;
    ((SoundObj *)arg0[0])->unk10 = 0.0f;
    arg0[2] = 0;
    func_802C676C (arg0[0], sel);
}

 































extern char sStr_NA_UpdPl_6584;
 




extern f64 D_bu_ro_d058, D_bu_ro_d060;   
void snd_updatePlayer(SndHandle *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    SoundObj *o;
    f32 sp28;
    int sp24;
    f32 var_f0;

    o = arg0->obj;
    if (o != 0) {
        arg5 = (f32) ((f64) arg5 / D_bu_ro_d058);
        if (arg5 < 0.0f) {
            var_f0 = 0.0f;
        } else if (1.0f < arg5) {
            var_f0 = 1.0f;
        } else {
            var_f0 = arg5;
        }
        o->unk0C = var_f0;
        if (arg4 < 0.0f) {
            var_f0 = -arg4;
        } else {
            var_f0 = arg4;
        }
        arg0->obj->unk04 = (f32) ((f64) var_f0 + D_bu_ro_d060);
        arg0->obj->unk18 = (s8) (s32) (arg4 * 63.0f);
        arg0->obj->unk1E = (s8) ((arg8 & 0x80) != 0);
        switch (arg6) {
        case 0x0:
            arg0->obj->unk15 = 1;
            arg0->obj->unk14 = 0;
            break;
        case 0x61:
            arg0->obj->unk15 = 1;
            arg0->obj->unk14 = 1;
            break;
        case 0x62:
            arg0->obj->unk15 = 3;
            arg0->obj->unk14 = 1;
            break;
        case 0x63:
            arg0->obj->unk15 = 2;
            arg0->obj->unk14 = 1;
            break;
        case 0x64:
            arg0->obj->unk15 = 2;
            arg0->obj->unk14 = 2;
            break;
        }
        arg0->obj->speed = arg2 / (f32)4;
        arg0->obj->unk08 = arg3 / (f32)4;
        arg0->obj->fired = 1;
        arg0->obj->flags1C = (u8) ((arg8 & 0x8000) != 0);
        if (arg0->obj->flags1C != 0) {
            func_802C676C(*(int*)&arg1, &sp28, &sp24, arg7);
            func_802C676C(arg0->obj, *(int*)&sp28, (s8) sp24);
        }
        func_802C676C(&sStr_NA_UpdPl_6584);
        func_802C676C(arg0->obj, 0);
        func_802C676C();
    }
}




void SndHandle_start(SndHandle *h) {
    SoundObj *o = h->obj;
    if (o != 0) {
        func_802C676C (o);
    }
}

void SndHandle_stop(SndHandle *h) {
    SoundObj *o = h->obj;
    if (o != 0) {
        func_802C676C (o);
    }
}

void SndHandle_setScaleIdx15(SndHandle *h) {
    func_802C676C (h->obj);
}

void SndHandle_setScaleIdx31(SndHandle *h) {
    func_802C676C (h->obj);
}

void SndHandle_triggerEvent0_000008F4(SndHandle *h, int a1_orig) {
    int ret = func_802C676C (h, h->contactSurface);
    SoundObj *node = h->obj;
    if (node != 0) {
        func_802C676C (node, ret, 0, a1_orig);
    }
}

void SndHandle_triggerEvent3_00000940(SndHandle *h, int a1_orig) {
    int ret = func_802C676C (h, h->contactSurface);
    SoundObj *node = h->obj;
    if (node != 0) {
        func_802C676C (node, ret, 3, a1_orig);
    }
}

void SndHandle_triggerEvent1_0000098C(SndHandle *h, int a1_orig) {
    int ret = func_802C676C (h, h->contactSurface);
    SoundObj *node = h->obj;
    if (node != 0) {
        func_802C676C (node, ret, 1, a1_orig);
    }
}

void SndHandle_triggerEvent2_000009D8(SndHandle *h, int a1_orig) {
    int ret = func_802C676C (h, h->contactSurface);
    SoundObj *node = h->obj;
    if (node != 0) {
        func_802C676C (node, ret, 2, a1_orig);
    }
}

void SndHandle_disable(SndHandle *h) {
    SoundObj *o = h->obj;
    if (o != 0) {
        func_802C676C (o);
    }
}

void SndHandle_setUnk1F_00000A50(SndHandle *h, int a1) {
    SoundObj *v0 = h->obj;
    if (v0 != 0) {
        v0->unk1F = (char)a1;
    }
}

void SndHandle_setFlag1A(SndHandle *h) {
    SoundObj *o = h->obj;
    if (o != 0) {
        func_802C676C (o);
    }
}

void SndHandle_setContactSurface(SndHandle *h, int a1) {
    h->contactSurface = a1;
}

 

































 















































 



int SndHandle_contactEventType(int a0, int a1) {
    volatile int r = 0;
    return r;
}

void snd_soundObjSetReverb(int **a0, int a1) {
    int *v0 = *a0;
    if (v0 != 0) {
        ((char*)v0)[0x1D] = (char)a1;
    }
}

 
extern float D_00000068;
void snd_soundObjSetPan_00000B2C(void **a0, float a1) {
    a1 = a1 / D_00000068;
    if (*a0 != 0) {
        ((SoundObj *)*a0)->unk10 = a1;

    }
}

void boot_readFloatParm_00000B50(char *a0) {
    int scratch;
    stream_readS32_00000008(&scratch);
    stream_readF32_00000044((float*)(a0 + 0x10));
}

void boot_readVec3Parm_00000B80(char *a0) {
    int scratch;
    stream_readS32_00000008(&scratch);
    stream_readVec3_00000080(a0 + 0x10);
}

void boot_readQuadParm_00000BB0(char *a0) {
    int scratch;
    stream_readS32_00000008(&scratch);
    stream_readQuad_000000F0(a0 + 0x10);
}

void boot_readIntParm_00000BE0(char *a0) {
    int scratch;
    stream_readS32_00000008(&scratch);
    stream_readS32_00000008((int*)(a0 + 0x10));
}

 




extern int func_802C676C();
void *ColourItem_create_00000C10(int *arg0) {
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

 







































 






void BGBox_ctor(int a0, int a1, int a2, int a3) {
    volatile int r = 0;
}

 











extern void stream_readF32_00000044();   
extern void snd_startPlayer2Seq_0000027C();   
extern int sStr_cam_7324;
 




 



typedef struct { int w[4]; } S16_D94;
extern char gGfxLib_d94_g[], gGfxLib_d94_src[];
void BGBox_display(char *a0) {
    int *p;
    int on;
    if ((double)((GfxLib *)(gGfxLib_d94_g)) ->fog.colour[3] < D_bu_ro_dpool[0x70 / 8]) {
        func_802C676C (gGfxLib_d94_g, gGfxLib_d94_src);
        func_802C676C (a0);
        p = &((GfxLib *)(gGfxLib_d94_g)) ->curWindow->win.flags;
        on = ((BGBox *)a0)->clearWindow;
        if (on != 0) {
            *p |= 4;
        } else {
            *p &= ~4;
        }
    } else {
        p = &((GfxLib *)(gGfxLib_d94_g)) ->curWindow->win.flags;
        *p |= 4;
        *(S16_D94 *)((GfxLib *)(gGfxLib_d94_g)) ->curWindow->win.clearColour = *(S16_D94 *)gGfxLib_d94_src;
    }
}

                                                                                                                                  
                                                           
  
                                                                          
                                                                                
                                                                                
                                                                             
                      
                                                                              
                                                                     
                                                                             
                                                        
                                                                               
                                                               
                                                                             
                                                                               
                                                                           
                                                              
                                                                    
                                                                           
                                                                        
                   
      
  
                           
                                                                                                       
                                                                                                      
                                                                                
                                                                                 
                                                         
                                                                              
                                                                           
                                                                                                           
                                                                                 
                                                                              
                                                                         
                     
 
























extern char sStr_Node_66B0, sStr_U64BGWall_66B8;
extern char D_e68_vtx;   
typedef struct { u32 w0, w1; } GwE68;
typedef struct { GwE68 *buf; s32 count; } DlE68;
 

typedef struct { char pad[0xC]; DlE68 *dl; } MgrE68;
typedef struct { s16 x, y, z; u16 flag; s16 s, t; u8 cn[4]; } VtxE68;
extern s32 import_8001FFA0[];    
extern s32 import_8001FFA0_h[];  
extern int gGfxLib_8005C108[];
extern int gGfxLib_8005C108_e68[];  


 


 




 







 
 

 
 
 
 




 
 
 
 
 
 
 
 
 








extern void func_00000000_e68v();  
void *U64BGWall_ctor(char *self, char *cfg, s32 arg2, s32 arg3, s32 arg4) {
    u32 timg;
    u32 tlut;
    VtxE68 *buf;
    s32 row;
    s32 k2;
    s32 col, x, y;
    u32 vidx;  
    s32 ult;
    GwE68 *arr[32];
    s32 k, uls;
    s32 i;
    GwE68 *head;
     
    s32 j, n;
    MgrE68 *m;
    MgrE68 *m2;  
    VtxE68 *vp;
    s32 _n;
    int padq[3];  

    if (&self) {}  
    if ((self != 0) || (self = (char *)func_802C676C (0x4C)) != 0) {
        func_802C676C (self, &sStr_Node_66B0);
        ((Node *)(self)) ->vptr = (char *)(&D_00000000 );
        ((Node *)(self)) ->name = (const char *)(&sStr_U64BGWall_66B8);
        timg = ((BGWallTex *)cfg)->timg;
        tlut = ((BGWallTex *)cfg)->tlut;
        ((U64BGWall *)self)->rotX = arg2;
        ((U64BGWall *)self)->rotY = arg3;
        ((U64BGWall *)self)->rotZ = arg4;
        ((U64BGWall *)self)->scale[3] = 1.0f;
        ((U64BGWall *)self)->scale[2] = 1.0f;
        ((U64BGWall *)self)->scale[1] = 1.0f;
        ((U64BGWall *)self)->scale[0] = 1.0f;
        buf = (VtxE68 *)func_802C676C (0x800, 16);
        if (arg2 != 0x123456) {}
        func_00000000_e68v (buf, 0x800, 0);
        vidx = 0;
        y = import_8001FFA0_h[1] / 2 - 16;
        for (row = 0; row < import_8001FFA0_h[1] / 32; row++) {
            x = import_8001FFA0[0] / 2 - 32;
             

            for (n = 0; n < import_8001FFA0[0] / 64; n++) {
                 
                buf[vidx + 0].x = x + 32;
                buf[vidx + 0].y = y + 16;
                buf[vidx + 0].z = import_8001FFA0[0] / 2;
                buf[vidx + 0].s = 0;
                buf[vidx + 0].t = 0;
                buf[vidx + 1].x = x - 32;
                buf[vidx + 1].y = y + 16;  
                buf[vidx + 1].z = import_8001FFA0[0] / 2;
        if (vidx) {}
        if (arg2 != 0x123456) {}
                buf[vidx + 1].s = 0xFC0;
                buf[vidx + 1].t = 0;
                buf[vidx + 2].x = x - 32;
                buf[vidx + 2].y = y - 16;
                buf[vidx + 2].z = import_8001FFA0[0] / 2;
                buf[vidx + 2].s = 0xFC0;  
                buf[vidx + 2].t = 0x7C0;
                buf[vidx + 3].x = x + 32;
                buf[vidx + 3].y = y - 16;
                buf[vidx + 3].z = import_8001FFA0[0] / 2;
        if (arg3 != 0x123456) {}
                buf[vidx + 3].s = 0;
                buf[vidx + 3].t = 0x7C0;
                x -= 64;
                vidx += 4;
            }
        if (arg3) {}
            y -= 32;
        }
        k = 0;
        m = (*(MgrE68 **)((char *)gGfxLib_8005C108_e68 + 0x18))  + 0 * arg3;  
        ult = 0; if (m) {}  
        for (i = 0; i < import_8001FFA0_h[1] / 64; i++) {
            vidx = 0;
            for (k2 = 0; k2 != 2; k2++) {
                uls = 0;
                for (j = 0; j < import_8001FFA0[0] / 64; j++) {
                    s32 vs, ve;
                    vs = vidx * 2; if (uls) {}  
                     



                     



                    { GwE68 *_g = (GwE68 *)(arr[k++] = (_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xBE) & ((0x01 << ( 8)) - 1)) << ( 24))) | ((u32)(((u32)(vs) & ((0x01 << ( 16)) - 1)) << ( 0)))); _g->w1 = ( ((u32)(((u32)(ve = (vidx + 3) * 2) & ((0x01 << ( 16)) - 1)) << ( 0)))); } ;
                     

                     



                    {     { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xFD) & ((0x01 << ( 8)) - 1)) << ( 24))) | ((u32)(((u32)( 2) & ((0x01 << ( 3)) - 1)) << ( 21))) | ((u32)(((u32)( 1) & ((0x01 << ( 2)) - 1)) << ( 19))) | ((u32)(((u32)(( import_8001FFA0[0]) - 1) & ((0x01 << ( 12)) - 1)) << ( 0)))) + 0 * ((int)_g + (int)_g); _g->w1 = ( (u32)( timg)); } ;     { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xF5) & ((0x01 << ( 8)) - 1)) << ( 24))) | ((u32)(((u32)(  2) & ((0x01 << ( 3)) - 1)) << ( 21))) | ((u32)(((u32)(  1) & ((0x01 << ( 2)) - 1)) << ( 19))) | ((u32)(((u32)( ((((( uls + 63) - ( uls) + 1) * 1) + 7) >> 3)) & ((0x01 << ( 9)) - 1)) << ( 9))) | ((u32)(((u32)( 0) & ((0x01 << ( 9)) - 1)) << ( 0)))); _g->w1 = (           ((u32)(((u32)( 7) & ((0x01 << ( 3)) - 1)) << ( 24))) | ((u32)(((u32)( 0) & ((0x01 << ( 4)) - 1)) << ( 20))) | ((u32)(((u32)(  0) & ((0x01 << ( 2)) - 1)) << ( 18))) | ((u32)(((u32)(  5) & ((0x01 << ( 4)) - 1)) << ( 14))) |           ((u32)(((u32)(  0) & ((0x01 << ( 4)) - 1)) << ( 10))) | ((u32)(((u32)(  0) & ((0x01 << ( 2)) - 1)) << ( 8))) | ((u32)(((u32)(  6) & ((0x01 << ( 4)) - 1)) << ( 4))) | ((u32)(((u32)(  0) & ((0x01 << ( 4)) - 1)) << ( 0)))); }  ;     { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xE6) & ((0x01 << ( 8)) - 1)) << ( 24)))); _g->w1 = ( 0); } ;     { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)( 0xF4) & ((0x01 << ( 8)) - 1)) << ( 24))) | ((u32)(((u32)( ( uls) << 2) & ((0x01 << ( 12)) - 1)) << ( 12))) | ((u32)(((u32)( ( ult) << 2) & ((0x01 << ( 12)) - 1)) << ( 0)))); _g->w1 = (           ((u32)(((u32)( 7) & ((0x01 << ( 3)) - 1)) << ( 24))) | ((u32)(((u32)( ( uls + 63) << 2) & ((0x01 << ( 12)) - 1)) << ( 12))) | ((u32)(((u32)( ( ult + 31) << 2) & ((0x01 << ( 12)) - 1)) << ( 0)))); }  ;     { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xE7) & ((0x01 << ( 8)) - 1)) << ( 24)))); _g->w1 = ( 0); } ;     { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xF5) & ((0x01 << ( 8)) - 1)) << ( 24))) | ((u32)(((u32)(  2) & ((0x01 << ( 3)) - 1)) << ( 21))) | ((u32)(((u32)(  1) & ((0x01 << ( 2)) - 1)) << ( 19))) | ((u32)(((u32)( ((((( uls + 63) - ( uls) + 1) * 1) + 7) >> 3)) & ((0x01 << ( 9)) - 1)) << ( 9))) | ((u32)(((u32)( 0) & ((0x01 << ( 9)) - 1)) << ( 0)))); _g->w1 = (           ((u32)(((u32)( 0) & ((0x01 << ( 3)) - 1)) << ( 24))) | ((u32)(((u32)(  0) & ((0x01 << ( 4)) - 1)) << ( 20))) | ((u32)(((u32)(  0) & ((0x01 << ( 2)) - 1)) << ( 18))) | ((u32)(((u32)(  5) & ((0x01 << ( 4)) - 1)) << ( 14))) |           ((u32)(((u32)(  0) & ((0x01 << ( 4)) - 1)) << ( 10))) | ((u32)(((u32)(  0) & ((0x01 << ( 2)) - 1)) << ( 8))) | ((u32)(((u32)(  6) & ((0x01 << ( 4)) - 1)) << ( 4))) | ((u32)(((u32)(  0) & ((0x01 << ( 4)) - 1)) << ( 0)))); }  ;     { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)( 0xF2) & ((0x01 << ( 8)) - 1)) << ( 24))) | ((u32)(((u32)( 0) & ((0x01 << ( 12)) - 1)) << ( 12))) | ((u32)(((u32)( 0) & ((0x01 << ( 12)) - 1)) << ( 0)))); _g->w1 = (           ((u32)(((u32)( 0) & ((0x01 << ( 3)) - 1)) << ( 24))) | ((u32)(((u32)( (( uls + 63) - ( uls)) << 2) & ((0x01 << ( 12)) - 1)) << ( 12))) | ((u32)(((u32)( (( ult + 31) - ( ult)) << 2) & ((0x01 << ( 12)) - 1)) << ( 0)))); }  ; } ;
                    { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xBF) & ((0x01 << ( 8)) - 1)) << ( 24)))); _g->w1 = ( ((u32)(((u32)(( vidx) * 2) & ((0x01 << ( 8)) - 1)) << ( 16))) | ((u32)(((u32)(( vidx + 1) * 2) & ((0x01 << ( 8)) - 1)) << ( 8))) | ((u32)(((u32)(( vidx + 2) * 2) & ((0x01 << ( 8)) - 1)) << ( 0)))); }  ; if (timg) {}  
                     

                     
                    { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xBF) & ((0x01 << ( 8)) - 1)) << ( 24)))); _g->w1 = ( ((u32)(((u32)( vidx * 2) & ((0x01 << ( 8)) - 1)) << ( 16))) | ((u32)(((u32)( (vidx + 2) * 2) & ((0x01 << ( 8)) - 1)) << ( 8))) | ((u32)(((u32)( ve) & ((0x01 << ( 8)) - 1)) << ( 0)))); }  ;  
                    { GwE68 *_g = (GwE68 *)((_n = (m)->dl->count, (m)->dl->count = _n + 1, &(m)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xB8) & ((0x01 << ( 8)) - 1)) << ( 24)))); _g->w1 = ( 0); }  ;
                    uls += 64;
                    vidx += 4;
                    if ((vs) + 0 * ((int)(vs) + (int)(vs) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)   + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m) + (int)(m)  + (int)(uls) + (int)(uls) + (int)(vs) + (int)(vs) + (int)(vs) + (int)(vs) + (int)(vs) + (int)(vs))) {} if ((ve) + 0 * ((int)(ve) + (int)(ve) + (int)(ve) + (int)(ve) + (int)(ve) + (int)(ve))) {}    
                    if (1) {}  
                }
                 


                ult += 32 + 0 * ((int)j);  

            }
        }
         

         



         




        m2 = (*(MgrE68 **)((char *)gGfxLib_8005C108_e68 + 0x18)) ;
        { GwE68 *_h = (_n = ((DlE68 *)*(s32 *)&(m2)->dl) ->count, ((DlE68 *)*(s32 *)&(m2)->dl) ->count = _n + 1, &((DlE68 *)*(s32 *)&(m2)->dl) ->buf[_n]) ;
          _h[0 * ((int)_h)].w0 = ((u32)(((u32)(0x04) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)(0) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)(((4) << 10) | (sizeof(VtxE68) * (4) - 1)) & ((0x01 << ( 16)) - 1)) << ( 0))) ;
          *(u32 *)&head = (u32)_h;
          head->w1 = (u32)(func_802C676C (&D_e68_vtx)); }
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xBE000000); _g->w1 = ( 6); } ;
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xE7000000); _g->w1 = ( 0); } ; if (1) {}  
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xBA001402); _g->w1 = ( 0); } ;
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xBB000001); _g->w1 = ( 0x80008000); } ;
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xB6000000); _g->w1 = ( 0x33205); } ; if (1) {}  
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xB900031D); _g->w1 = ( 0x0C084000); } ;
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xFC357E6A); _g->w1 = ( 0x11FCF67B); } ;
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xBA000E02); _g->w1 = ( 0x8000); } ; if (m2) {}
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xFD100000); _g->w1 = ( tlut); } ;
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xE8000000); _g->w1 = ( 0); } ;
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xF5000100); _g->w1 = ( 0x07000000); } ; if (1) {}  
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xE6000000); _g->w1 = ( 0); } ;
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xF0000000); _g->w1 = ( 0x073FC000); } ; if (1) {}
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( 0xE7000000); _g->w1 = ( 0); } ;
        vp = buf;
        n = import_8001FFA0[0] / 32;
        if (arg4 != 0x654321) {}
         



        for (i = 0; i < *(s32 *)(int)&import_8001FFA0_h[1] / 64; i++) {
            { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)( 0x04) & ((0x01 << ( 8)) - 1)) << ( 24))) | ((u32)(((u32)( ( 0) * 2) & ((0x01 << ( 8)) - 1)) << ( 16))) | ((u32)(((u32)( (( n * 4) << 10) | (sizeof(VtxE68) * ( n * 4) - 1)) & ((0x01 << ( 16)) - 1)) << ( 0)))); _g->w1 = ( (u32)(  func_802C676C(&vp[i * (n * 4)]))); }   ; if (1) {}  
            for (col = 0; col < n; col++) {  
                 
                 
                 

                 


                { GwE68 *dl = arr[i * n + col]; { GwE68 *_g = (GwE68 *)((tlut = ((DlE68 *)*(u32 *)&(m2)->dl)->count, ((DlE68 *)*(u32 *)&(m2)->dl)->count = tlut + 1, &((DlE68 *)*(u32 *)&(m2)->dl)->buf[tlut])); _g->w0 = ( ((u32)(((u32)( 0x06) & ((0x01 << ( 8)) - 1)) << ( 24))) | ((u32)(((u32)( 0) & ((0x01 << ( 8)) - 1)) << ( 16))) | ((u32)(((u32)( 0) & ((0x01 << ( 16)) - 1)) << ( 0)))); _g->w1 = ( (u32)( dl)); }  ; }
            }
            if (1) {}  
        }
        { GwE68 *_g = (GwE68 *)((_n = (m2)->dl->count, (m2)->dl->count = _n + 1, &(m2)->dl->buf[_n])); _g->w0 = ( ((u32)(((u32)(0xB8) & ((0x01 << ( 8)) - 1)) << ( 24)))); _g->w1 = ( 0); }  ;
        ((U64BGWall *)self)->displayList = (s32)head;
    }
    return self;
}

 












































extern void snd_seqEndDbg_00000188();   
 

 








void U64BGWall_display(char *a0) {
    volatile int r = 0;
}

void stream_readS32_00001C10(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readF32_00001C4C(float *dst) {
    float buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

extern void stream_readVec3_00001C88();
void stream_readVec3_00001C88(Vec3 *dst) {
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

void stream_readS32_00001CF8(int *dst) {
    int buf[2];
    func_802C676C (&D_00000000 , buf, 4);



    *dst = buf[0];
}

void stream_readQuad_00001D34(Quad4 *dst) {
    Quad4 buf;
    func_802C676C (&D_00000000 , &buf, 16);



    *dst = buf;
}

