s32 func_80309D6C(u8, u8, u8, s16);
void func_80308924(void *arg0)
{
  register unsigned int temp_t7;
  register unsigned temp_t9;
  f32 var_fv0;
  long var_v0;
  f32 var_ft5;
  f32 var_ft2;
  var_v0 = 1;
  if ((*((u8 *) (((char *) arg0) + 0))) != 0)
  {
    if ((*((f32 *) (((char *) arg0) + 0x10))) > 0.0f)
    {
      temp_t7 = *((u8 *) (((char *) arg0) + 6));
      var_fv0 = *((f32 *) (((char *) arg0) + 8));
      var_ft2 = (f32) temp_t7;
      if (temp_t7 < 0)
      {
        var_ft2 += 4294967296.0f;
      }
      if (var_fv0 >= var_ft2)
      {
        if ((*((u8 *) (((char *) arg0) + 1))) == 0)
        {
          *((u8 *) (((char *) arg0) + 0)) = 0U;
          return;
        }
        var_v0 = 0;
        goto block_13;
      }
      goto block_13;
    }
    var_fv0 = *((f32 *) (((char *) arg0) + 8));
    temp_t9 = *((u8 *) (((char *) arg0) + 6));
    var_ft5 = (f32) temp_t9;
    if (0 > temp_t9)
    {
      var_ft5 += 4294967296.0f;
    }
    if (var_fv0 <= var_ft5)
    {
      var_v0 = 0;
      if ((*((u8 *) (((char *) arg0) + 1))) == 0)
      {
        *((u8 *) (((char *) arg0) + 0)) = 0U;
        return;
      }
    }
    block_13:
    if (var_v0 != 0)
    {
      var_fv0 = *((f32 *) (((char *) arg0) + 8));
      *((f32 *) (((char *) arg0) + 8)) = (f32) (var_fv0 + (*((f32 *) (((char *) arg0) + 0xC))));
    }

    if (var_fv0 < 0.0f)
    {
      *((f32 *) (((char *) arg0) + 8)) = 0.0f;
 do { var_fv0 = *((f32 *) (((char *) arg0) + 8)); } while (0);
    }
    else
      if (var_fv0 > 255.0f)
    {
      var_fv0 = *((f32 *) (((char *) arg0) + 8));
      *((f32 *) (((char *) arg0) + 8)) = 255.0f;
    }
    func_80309D6C(*((u8 *) (((char *) arg0) + 2)), *((u8 *) (((char *) arg0) + 3)), *((u8 *) (((char *) arg0) + 4)), (s16) ((u32) var_fv0));
  }
}
