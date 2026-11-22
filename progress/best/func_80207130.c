void *func_80207040();
s32 func_802070D4();
extern f64 D_80252AF0;
extern f64 D_80252AF8;
extern u32 D_8025C2C0;
extern s32 D_8025C2C4;
f64 func_80207130(void)
{
  void *temp_v0;
  f64 var_ft1;
  unsigned int temp_t0;
  f64 var_fv1;
  long temp_t8;
  void *sp1C;
  f64 var_ft4;
  temp_v0 = func_80207040();
  if (temp_v0 == NULL)
  {
    return 0.0;
  }
  sp1C = temp_v0;
  do
  {
    func_802070D4();
  }
  while (0);
  temp_t8 = D_8025C2C4 - (*((s32 *) (((char *) temp_v0) + 0)));
  var_fv1 = (f64) (D_8025C2C4 - (*((s32 *) (((char *) temp_v0) + 0))));
  if (temp_t8 < 0)
  {
    var_fv1 += 4294967296.0 * 1.0;
  }
  var_ft4 = (f64) (*((s32 *) 0x8025c2c4));
  if ((*((s32 *) (&(*((u32 *) (0x8025c2c4 & 0xFFFFFFFF)))))) < 0)
  {
    var_ft4 += 4294967296.0;
  }
  temp_t0 = *((s32 *) (((char *) temp_v0) + 4));
  var_ft1 = (f64) temp_t0;
  if (0 > temp_t0)
  {
    var_ft1 += 4294967296.0;
  }
  return (var_fv1 * D_80252AF0) + ((var_ft4 - var_ft1) / D_80252AF8);
}

