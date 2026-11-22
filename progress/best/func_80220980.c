extern void *D_80273B90;
void func_80220980(s32 arg0)
{
  void *temp_v1;
  temp_v1 = D_80273B90;
  D_80273B90 = 8 + ((unsigned char *) temp_v1);
  *((s32 *) (((char *) temp_v1) + 4)) = arg0 ^ 0;
  *((s32 *) (((char *) temp_v1) + ((arg0 ^ 0) * 0))) = 0x06000000;
}

