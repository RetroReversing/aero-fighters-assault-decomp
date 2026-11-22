s32 func_80222AA8(s32, s16, s16, s16, s32);
s32 func_80223600(s32);
s32 math_mtx4Identity(s32 *);
s32 func_8022B780(s32, s32, s32);
s32 func_8022BA58(s32);
extern s32 D_8024E840;
extern s32 D_8024E858;
extern volatile unsigned int D_8024E874;
extern s32 D_80271B80;
extern s32 D_80271B88;
extern s32 *D_80273B88;
extern void *D_80273B8C;
extern s32 D_80273B90;
extern s32 D_80273B98;
extern s32 D_80273BA0;
extern s32 D_80273BA8;
extern s32 D_80273BB0;
extern s32 D_80273BB8;
extern u8 D_80274380[];
extern s32 D_80274388;
extern s32 D_80274390;
extern s32 D_80274394;
extern s32 D_80274398;
extern s16 D_8027439C;
extern s16 D_8027439E;
extern s16 D_802743A0;
extern s16 D_802743A2;
extern s32 D_802743A8;
extern s32 D_802743B0;
extern s32 D_802743F0;
extern s8 D_802744B0;
extern s32 D_802744B4;
extern s32 D_802744B8;
extern void *D_802744BC;
extern s32 D_802744C0;
extern volatile int D_80275E60;
extern s32 D_80280BC0;
void func_8021FFB4(void)
{
  unsigned temp_s1;
  register int temp_v0_3;
  int var_s0;
  register unsigned temp_v0_2;
  register s32 temp_v1;
  volatile long long pad;
  *((s32 *) (((char *) (&D_80274390)) + 0)) = func_8022BA58((*((u16 *) (((char *) (&D_80280BC0)) + 0x20))) * 8);
  *((s32 *) (((char *) (&D_80274390)) + 4)) = func_8022BA58((*((u16 *) (((char *) (&D_80280BC0)) + 0x20))) * 8);
  func_8022B780(*((s32 *) (((char *) (&D_80274390)) + 0)), 0, (*((u16 *) (((char *) (&D_80280BC0)) + 0x20))) * 8);
  func_8022B780(D_80274394, 0, (*((u16 *) (((char *) (&D_80280BC0)) + 0x20))) * 8);
  temp_s1 = ((*((u16 *) (((char *) (&D_80280BC0)) + 0x2E))) + 0x21) << 5;
  D_80274398 = func_8022BA58(temp_s1);
  func_8022B780(D_80274398, 0, temp_s1);
  *((s32 *) (((char *) (&D_802743A8)) + 0)) = func_8022BA58((*((u16 *) (((char *) (&D_80280BC0)) + 0x22))) << 6);
  *((s32 *) (((char *) (&D_802743A8)) + 4)) = func_8022BA58(((*((u16 *) (((char *) (&D_80280BC0)) + 0x22))) << 5) << 1);
  D_802744B8 = func_8022BA58((*((u16 *) (((char *) (&D_80280BC0)) + 0x22))) * 4);
  func_8022B780(*((s32 *) (((char *) (&D_802743A8)) + 0)), 0, ((*((u16 *) (((char *) (&D_80280BC0)) + 0x22))) << 1) << 5);
  func_8022B780(*((s32 *) (((char *) (&D_802743A8)) + 4)), 0, (*((u16 *) (((char *) (&D_80280BC0)) + 0x22))) << 6);
  func_8022B780(D_802744B8, 0, (*((u16 *) (((char *) (&D_80280BC0)) + 0x22))) * 4);
  temp_v0_2 = func_8022BA58(((*((u16 *) (((char *) (&D_80280BC0)) + 0x28))) << 1) << 5);
  D_80275E60 = temp_v0_2;
  func_8022B780(temp_v0_2, 0, (*((u16 *) (((char *) (&D_80280BC0)) + 0x28))) << 6);
  *((s32 *) (((char *) (&D_80273B98)) + 4)) = 0;
  *((s32 *) (((char *) (&D_80273B98)) + 0)) = 0;
  *((s32 *) (((char *) (&D_80273BA0)) + 4)) = 0;
  *((s32 *) (((char *) (&D_80273BA0)) + 0)) = 0;
  *((s32 *) (((char *) (&D_80273BA8)) + 4)) = 0;
  *((s32 *) (((char *) (&D_80273BA8)) + 0)) = 0;
  *((s32 *) (((char *) (&D_80273BB0)) + 4)) = 0;
  *((s32 *) (((char *) (&D_80273BB0)) + 0)) = 0;
  *((s32 *) (((char *) (&D_80273BB8)) + 4)) = 0;
  *((s32 *) (((char *) (&D_80273BB8)) + 0)) = 0;
  *((s32 *) (((char *) D_80274380) + 0)) = 0x800DA800;
  temp_v0_3 = 0 & 0xFFFF;
  *((s32 *) (((char *) D_80274380) + 4)) = 0x80100000;
  D_80274388 = 0x803DA800;
  D_8024E874 = (short) 0;
  temp_v1 = temp_v0_3 * 4;
  D_8024E858 = *(D_80274380 + temp_v1);
  D_80273B90 = *((&D_80274390) + temp_v1);
  D_802744BC = (temp_v0_3 * 0x58) + (&D_802744C0);
  D_8027439C = 2;
  D_8027439E = 0x13E;
  D_802743A0 = 2;
  D_802743A2 = 0xEE;
  var_s0 = 0;
  if (((s32) (*((u16 *) (((char *) (&D_80280BC0)) + 0x2E)))) > 0)
  {
    if (1)
    {
      do
      {
        func_80222AA8(var_s0, D_8027439C, D_8027439E, D_802743A0, D_802743A2);
        var_s0 += 1;
      }
      while (var_s0 < ((s32) (*((u16 *) (((char *) (&D_80280BC0)) + 0x2E)))));
    }
  }
  math_mtx4Identity(&D_802743B0);
  do
  {
    math_mtx4Identity(&D_802743F0);
  }
  while (0);
  D_802744B0 = 0;
  *((f32 *) (((char *) (&D_8024E840)) + 4)) = .0f;
  *((f32 *) (((char *) (&D_8024E840)) + 0)) = (f32) (*((f32 *) (((char *) (&D_8024E840)) + 4)));
  do
  {
    func_80223600(0);
  }
  while (0);
  D_802744B4 = 0;
  if (((s32) (&D_80271B80)) & 0xF)
  {
    D_80273B88 = &D_80271B88;
  }
  else
  {
    D_80273B88 = &D_80271B80;
  }
  D_80273B8C = ((s8 *) D_80273B88) + 0x2000;
}

