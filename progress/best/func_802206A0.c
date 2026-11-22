s32 func_80220534(f32);
s32 osVirtualToPhysical(s32 *);
extern s32 D_8024E7A0;
extern s32 D_8024E848;
extern u32 D_8024E84C;
extern f32 D_8024E870;
extern s8 D_8024E8A4;
extern s32 *D_80273B90;
extern s32 D_80274348;
extern s32 D_8027434C;
extern s32 D_80274350;
extern s32 *D_80274388;
void func_802206A0(void)
{
  s32 *temp_v0;
  register s32 *temp_v0_2;
  register s32 *temp_v0_3;
  s32 *sp1C;
  s32 *temp_v0_5;
  s32 *temp_v0_4;
 { if (D_8024E870 > 0.0f) { temp_v0 = D_80273B90; D_80273B90 = ((s8 *) temp_v0) + 8; *((s32 *) (((char *) temp_v0) + 4)) = 0x12205; *((s32 *) (((char *) temp_v0) + 0)) = 0xB7000000; } else { temp_v0_2 = D_80273B90; D_80273B90 = ((s8 *) temp_v0_2) + 8; *((s32 *) (((char *) temp_v0_2) + 0)) = 0xB7000000; *((s32 *) (((char *) temp_v0_2) + 4)) = 0x2205; } D_80273B90 = ((s8 *) temp_v0_3) + 8; *((s32 *) (((char *) (temp_v0_3 = D_80273B90)) + 0)) = 0x06000000; }
  *((s32 **) (((char *) temp_v0_3) + 4)) = &D_8024E7A0;
  temp_v0_4 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v0_4) + 8;
  *((s32 *) (((char *) temp_v0_4) + 0)) = 0xFE000000;
  *((s32 **) (((char *) temp_v0_4) + 4)) = (s32 *) D_80274388;
  temp_v0_5 = D_80273B90;
  D_80273B90 = ((s8 *) temp_v0_5) + 8;
  sp1C = temp_v0_5;
  *((s32 *) (((char *) temp_v0_5) + 0)) = 0xFE000000;
  *((s32 *) (((char *) sp1C) + 4)) = osVirtualToPhysical(D_80274388);
  D_80274348 = 0x520FFF;
  *((s32 *) (((char *) (&D_80274350)) + 0x24)) = -1;
  *((s32 *) (((char *) (&D_80274350)) + 0x28)) = -1;
  *((s32 *) (((char *) (&D_80274350)) + 0x2C)) = -1;
  D_8027434C = 0xFF0FFF;
  D_8024E848 = 0;
  D_8024E84C = -1;
  *((u8 *) (&D_8024E8A4)) = 0xFF;
  func_80220534(D_8024E870);
}
