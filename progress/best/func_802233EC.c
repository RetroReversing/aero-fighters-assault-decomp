s32 func_80220C44(s32 *);
extern s32 D_80274348;
void func_802233EC(unsigned long long arg0)
{
  s32 *__base_D_80274348;
  s32 sp1C;
  s32 sp28;
  s32 __repair_phase_sp28;
  s16 sp24;
  __base_D_80274348 = &D_80274348;
  __repair_phase_sp28 = arg0 | (*__base_D_80274348);
  if (__repair_phase_sp28 != (*__base_D_80274348))
  {
    sp1C = __repair_phase_sp28;
    sp24 = 0xFFFF;
    sp28 = 0;
    func_80220C44(&sp1C);
  }
}

