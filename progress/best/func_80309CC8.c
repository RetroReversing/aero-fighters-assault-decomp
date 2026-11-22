extern char D_80100002[];
void func_80309CC8(s32 arg0, u8 arg1, u8 arg2)
{
  s32 *var_t2;
  s16 temp_t1;
  char *var_t0;
  arg2 &= 0xFF;
  temp_t1 = ((arg0 << 0xB) | ((arg1 & 0xFF) << 6)) | (((short) arg2) * 2);
  var_t0 = (s16 *) ((((0x800DA800 & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu);
  var_t2 = D_80100002;
  do
  {
    *((s16 *) (((char *) var_t2) + (-2))) = temp_t1;
    *((s16 *) var_t0) = temp_t1;
    var_t0 += 2;
  }
  while (((u32) D_80100002) < 0x80125800U);
}

