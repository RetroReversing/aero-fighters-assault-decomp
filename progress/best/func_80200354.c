s32 func_80202288();
s32 func_802057A0();
s32 func_80231C9C();
typedef struct 
{
  u16 f0;
  u8 pad[78];
} Slot_80256DB4;
extern Slot_80256DB4 D_80256DB4[];
void func_80200354(volatile unsigned short arg0)
{
  if (((s32) arg0) > 0)
  {
    func_80231C9C(arg0);
  }
  func_80202288(arg0);
  func_802057A0(D_80256DB4[arg0].f0);
}

