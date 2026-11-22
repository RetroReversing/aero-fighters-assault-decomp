s32 func_80220C44(s32 *);
extern s32 D_80274348;
void func_8022342C(s32 arg0)
{
    struct {
        s32 f1C;
    } __repair_frame;
  volatile unsigned int sp28;
  s32 temp_v1;
  temp_v1 = (~arg0) & D_80274348;
  if (temp_v1 != D_80274348)
  {
    __repair_frame.f1C = temp_v1;
    func_80220C44((sp28 = 0, &__repair_frame));
  }
}

