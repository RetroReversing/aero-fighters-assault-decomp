s32 alSndpSetFXMix();
s32 alSndpSetPan();
s32 alSndpSetPitch();
s32 alSndpSetVol();
s32 func_802011D0();
s32 func_80231C9C();
s32 func_80234E90();
extern void *D_8024E5B4;
extern char D_80252474[];
extern s32 D_80256DE4;
extern s32 D_8025B988;
typedef struct 
{
  unsigned char pad_0[60];
  int field_3C;
  unsigned char pad_40[109];
  unsigned char field_AD;
  unsigned char field_AE;
} __repair_record_temp_a0;
void func_80203464(s32 arg0)
{
  s32 *__base_D_8025B988;
  s32 *__base_D_80256DE4;
  s16 var_a1;
  s32 temp_a2;
  s32 temp_s0;
  u8 var_v1;
  void *temp_a0;
  temp_a2 = arg0 & 0xFF;
  arg0 = temp_a2 * 0xB4;
  __base_D_80256DE4 = &D_80256DE4;
  func_802011D0(D_80252474, *((u8 *) (((char *) ((*__base_D_80256DE4) + arg0)) + 0xAD)));
  temp_a0 = (*__base_D_80256DE4) + arg0;
  var_v1 = ((__repair_record_temp_a0 *) temp_a0)->field_AD;
  if (((s32) var_v1) >= 0x10)
  {
    func_80231C9C("_aemits[ object ]. playVoice < AUD_NSFX_VOICES", "_aobj.c", 0x453);
    temp_a0 = (*__base_D_80256DE4) + arg0;
    var_v1 = ((__repair_record_temp_a0 *) temp_a0)->field_AD;
  }
  __base_D_8025B988 = &D_8025B988;
  if ((*((s32 *) ((*__base_D_8025B988) + (var_v1 * 2)))) < (temp_a2 * 0))
  {
    func_80231C9C("sfxId[ _aemits[ object ]. playVoice] >= 0", "_aobj.c", 0x454);
    temp_a0 = (*__base_D_80256DE4) + arg0;
  }
  if (((s32) ((__repair_record_temp_a0 *) temp_a0)->field_AE) < 0x80)
  {
    var_a1 = *((s16 *) ((*__base_D_8025B988) + (((__repair_record_temp_a0 *) temp_a0)->field_AD * 2)));
  }
  else
  {
    func_80231C9C("( ALPan ) _aemits[ object ]. playPan <= 127", "_aobj.c", 0x456);
    var_a1 = *((s16 *) ((*__base_D_8025B988) + ((*((u8 *) (((char *) ((*__base_D_80256DE4) + arg0)) + 0xAD))) * 2)));
  }
  func_80234E90(D_8024E5B4, var_a1);
  temp_a0 = D_8024E5B4;
  if (((__repair_record_temp_a0 *) temp_a0)->field_3C == (-1))
  {
    func_80231C9C("sndp -> target != -1", "_aobj.c", 0x45A);
  }
  alSndpSetVol(temp_a0, *((s16 *) (((char *) ((*__base_D_80256DE4) + arg0)) + 0xA6)));
  alSndpSetPitch(D_8024E5B4, *((s32 *) (((char *) ((*__base_D_80256DE4) + arg0)) + 0x9C)));
  alSndpSetFXMix(D_8024E5B4, *((u8 *) (((char *) ((*__base_D_80256DE4) + arg0)) + 0xAF)));
  alSndpSetPan(D_8024E5B4, *((u8 *) (((char *) ((*__base_D_80256DE4) + arg0)) + 0xAE)));
}

