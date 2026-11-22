s32 math_mtx4Identity(void *);
extern f32 D_8034779C;
void func_8031C324(void *arg0)
{
  void *temp_a0;
  *((f32 *) (((char *) arg0) + 0xC0)) = 0.0f;
  *((s16 *) (((char *) arg0) + 0xE8)) = 0;
  *((s8 *) (((char *) arg0) + 0xEA)) = 1;
  temp_a0 = ((unsigned char *) arg0) + 4;
  if (1)
  {
    *((f32 *) (((char *) temp_a0) + 0xCC)) = 0.0f;
  }
  *((f32 *) (((char *) temp_a0) + 0xC4)) = (f32) D_8034779C;
  math_mtx4Identity(temp_a0);
}

