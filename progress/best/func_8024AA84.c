s32 func_8024A940();
s32 func_80246660();
s32 func_80245710(s32, s32, s32, s32 *);
extern volatile char D_802872F0;
extern s32 D_802873F0;
extern s32 D_80287410;
s32 func_8024AA84(char arg0, void *arg1, s32 arg2)
{
  union 
  {
    unsigned char bytes[104];
    struct 
    {
      unsigned char pad[60];
      s32 value;
    } view_sp3C;
    struct 
    {
      unsigned char pad[64];
      s32 value;
    } view_sp40;
    struct 
    {
      unsigned char pad[95];
      u8 value;
    } view_sp5F;
    struct 
    {
      unsigned char pad[96];
      s32 value;
    } view_sp60;
  } m2c_initial_frame;
  s32 *var_a0;
  s32 *var_v1_3;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_v0_2;
  s32 var_v1;
  s32 var_v1_2;
  *((s32 *) (((char *) arg1) + 4)) = arg0;
  *((s32 *) (((char *) arg1) + 8)) = arg2;
  *((s32 *) (((char *) arg1) + 0)) = 0;
  *((u8 *) (((char *) arg1) + 0x65)) = 0x80;
  var_a0 = &m2c_initial_frame.view_sp40.value;
  do
  {
    var_a0 += 1;
    *((u8 *) (((char *) var_a0) + (-1))) = 0x80;
  }
  while (((u32) var_a0) < ((u32) (&m2c_initial_frame.view_sp60.value)));
  var_v0_2 = func_80246660(arg2, 0x400, &m2c_initial_frame.view_sp40.value); var_v1_2 = var_v0_2;
  if (0)
  {
  }
  if (var_v0_2 == 2)
  {
    var_v0_2 = func_80246660(arg0, arg2, (s32 *) 0x400, &m2c_initial_frame.view_sp40.value, 0);
    var_v1_2 = var_v0_2;
  }
  if (var_v0_2 != 0)
  {
    return var_v1_2;
  }
  temp_v0 = func_80245710(arg0, arg2, 0x400, &m2c_initial_frame.view_sp40.value);
  var_v1 = temp_v0;
  if (temp_v0 == 2)
  {
    var_v1 = 4;
  }
  if (var_v1 != 0)
  {
    return var_v1;
  }
  if (m2c_initial_frame.view_sp5F.value != 0x80)
  {
    return 0xB;
  }
  var_v1_3 = &D_802873F0;
  var_a0 = &D_80287410;
  __repair_rows:
  {
    var_v1_3 += 4;
    *((u8 *) (((char *) var_a0) + 1)) = 1;
    *((u8 *) (((char *) var_v1_3) + (-3))) = 0;
    *((u8 *) (((char *) var_a0) + 2)) = 1;
    *((u8 *) (((char *) var_v1_3) + (-2))) = 0;
    *((u8 *) (((char *) var_a0) + 3)) = 1;
    *((u8 *) (((char *) var_v1_3) + (-1))) = 0;
    var_a0 += 4;
    *((u8 *) (((char *) var_a0) + (-4))) = 1;
    *((u8 *) (((char *) var_v1_3) + (-4))) = 0;
  }

  if (var_v1_3 != (&D_80287410))
  {
    goto __repair_rows;
  }
  temp_v0_2 = arg2 << 6;
  m2c_initial_frame.view_sp3C.value = temp_v0_2;
  func_8024A940(var_a0, temp_v0_2 + (&D_802872F0));
  func_8024A940();
  return 0;
}

