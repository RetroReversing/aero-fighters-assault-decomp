/* adapted from similar verified C in func_80298A1C in AERO FIGHTERS ASSAUL (matched), with its names changed by decompdecomp */
s32 func_8021BAE0();
void func_80297910(void *arg0)
{
  char *__repair_addr;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a2;
  s32 __repair_result_temp_a2;
  __repair_result_temp_a2 = *((s32 *) (((char *) arg0) + 0xB88));
  if ((__repair_result_temp_a2 ^ 0) != 0xFFFF)
  {
    func_8021BAE0(__repair_result_temp_a2);
    *((s32 *) (((char *) arg0) + 0xB88)) = 0xFFFF;
  }
  temp_a2 = *((s32 *) (((char *) arg0) + 0xB7C));
  if ((*((s32 *) (((char *) arg0) + 0xB7C))) != 0xFFFF)
  {
    func_8021BAE0((*((s32 *) (((char *) arg0) + 0xB7C))));
    *((s32 *) (((char *) arg0) + 0xB7C)) = 0xFFFF;
  }
  temp_a0_2 = *((s32 *) (((char *) arg0) + 0xBD0));
  if ((*((s32 *) (((char *) arg0) + 0xBD0))) != 0xFFFF)
  {
    func_8021BAE0((*((s32 *) (((char *) arg0) + 0xBD0))), arg0);
    *((s32 *) (((char *) arg0) + 0xBD0)) = 0xFFFF;
  }
  __repair_addr = (char *) (*((void **) (((char *) arg0) + 0x14)));
  *((s32 *) (((char *) __repair_addr) + 0x7168)) = -1;
}

