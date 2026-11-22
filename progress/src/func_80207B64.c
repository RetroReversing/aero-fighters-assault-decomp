s32 func_80234D30(f32 *, f32 *);
void func_80207B64(void *arg0, f32 arg1, void *arg2)
{
  f32 temp_fv0;
  f32 sp18[3];
  sp18[0] = (*((f32 *) (((char *) arg2) + 0))) - (*((f32 *) (((char *) arg0) + 0)));
 sp18[1] = (*((f32 *) (((char *) arg2) + 4))) - (*((f32 *) (((char *) arg0) + 4))); sp18[2] = (*((f32 *) (((char *) arg2) + 8))) - (*((f32 *) (((char *) arg0) + 8)));
  func_80234D30(sp18, sp18);
  temp_fv0 = (arg1 - (*((f32 *) (((char *) arg0) + 8)))) / sp18[2];
  *((f32 *) (((char *) arg2) + 0)) = (f32) ((sp18[0] * temp_fv0) + (*((f32 *) (((char *) arg0) + 0))));
  *((f32 *) (((char *) arg2) + 4)) = (f32) ((sp18[1] * temp_fv0) + (*((f32 *) (((char *) arg0) + 4))));
  *((f32 *) (((char *) arg2) + 8)) = (f32) ((sp18[2] * temp_fv0) + (*((f32 *) (((char *) arg0) + 8))));
}
