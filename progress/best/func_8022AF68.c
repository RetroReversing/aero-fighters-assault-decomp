s32 func_80204530();
s32 func_8022B1F4(s32 *);
extern s32 D_80000318;
extern s32 D_802751E0;
extern s32 D_80275E70;
extern s32 D_80275E74;
extern s32 D_80275E78;
extern s32 D_80275E80;
extern s32 D_80275F70;
extern s32 D_80275F7C;
extern s32 D_80275F80;
extern volatile long D_80275F84;
extern s32 D_80275F88;
extern s32 D_80349530;
void func_8022AF68(void)
{
  int __repair_operand;
  unsigned char temp_t1;
  long long temp_t7;
  *((s32 *) (((char *) (&D_80275E80)) + 0)) = 0x800DA800;
  *((s32 *) (((char *) (&D_80275E80)) + 4)) = 0x80100000;
  *((s32 *) (((char *) (&D_80275E80)) + 8)) = 0x80100000;
  *((s32 *) (((char *) (&D_80275E80)) + 0xC)) = 0x80125800;
  *((s32 *) (((char *) (&D_80275E80)) + 0x10)) = 0x803DA800;
  *((s32 *) (((char *) (&D_80275E80)) + 0x14)) = 0x80400000;
  *((s32 *) (((char *) (&D_80275E80)) + 0x18)) = 0x80000400;
  temp_t1 = func_80204530() + 0x80000400;
  *((s32 *) (((char *) (&D_80275E80)) + 0x2C)) = 0x80000400;
  *((s32 *) (((char *) (&D_80275E80)) + 0x1C)) = temp_t1;
  *((s32 *) (((char *) (&D_80275E80)) + 0x20)) = 0x80200000;
  *((s32 **) (((char *) (&D_80275E80)) + 0x24)) = &D_80349530;
  *((s32 *) (((char *) (&D_80275E80)) + 0x28)) = 0x80000000;
  D_80275E70 = 6;
  D_80275E74 = 0;
  *((s32 *) (((char *) (&D_80275F70)) + 0)) = 0;
  *((s32 *) (((char *) (&D_80275F70)) + 4)) = 0;
  *((s32 *) (((char *) (&D_80275F70)) + 8)) = 0;
  func_8022B1F4(&D_80275F70);
  temp_t7 = func_80204530() + 0x80000440;
  D_80275F84 = temp_t7;
  D_80275F7C = temp_t7;
  __repair_operand = D_80000318;
  D_80275F80 = __repair_operand + 0x80000000;
  D_80275E78 = 0;
  D_802751E0 = 0;
  D_80275F88 = 0;
}

