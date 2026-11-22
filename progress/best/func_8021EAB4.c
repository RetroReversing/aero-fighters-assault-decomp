s32 func_8021EAB4(void *arg0, s16 *arg1, void *arg2)
{
  void *__repair_hoisted;
  char *var_a2;
  s32 var_t0;
  s32 var_v1;
  s32 var_a3;
  void *var_t1;
 var_v1 = 0; var_a3 = 0; var_t1 = *((void **) (((char *) arg0) + 0x34)); __repair_hoisted = (void *) var_t1;
  if ((*arg1) != (-1))
  {
    var_a2 = arg1;
    var_t1 = __repair_hoisted;
    var_t0 = *arg1;
    do
    {
      if ((var_t0 == (-2)) || (var_t0 == (-3)))
      {
        *((s32 *) (((char *) var_t1) + 0)) = (s32) (*(*((s16 **) (((char *) arg2) + 0xC))));
        *((s32 *) (((char *) var_t1) + 4)) = (s32) (*((s32 *) (((char *) (*((s16 **) (((char *) arg2) + 0xC)))) + 4)));
        *((s32 *) (((char *) var_t1) + 8)) = (s32) (*((s32 *) (((char *) (*((s16 **) (((char *) arg2) + 0xC)))) + 8)));
        *((s32 *) (((char *) var_t1) + 8)) = 0;
        *((s32 *) (((char *) var_t1) + 0xC)) = (s32) (*((s32 *) (((char *) (*((s16 **) (((char *) arg2) + 0xC)))) + 0xC)));
        var_a3 += *(*((s16 **) (((char *) arg2) + 0xC)));
      }
      else
      {
        __repair_hoisted = (void *) (*((s16 **) (((char *) arg2) + 0xC))); __repair_hoisted = (void *) (((char *) __repair_hoisted) + ((s32) (var_t0 * 0x10)));
        *((s32 *) (((char *) var_t1) + 0)) = (s32) (*((s32 *) (((char *) __repair_hoisted) + 0)));
        *((s32 *) (((char *) var_t1) + 4)) = (s32) (*((s32 *) (((char *) __repair_hoisted) + 4)));
        *((s32 *) (((char *) var_t1) + 8)) = (s32) (*((s32 *) (((char *) __repair_hoisted) + 8)));
        *((s32 *) (((char *) var_t1) + 0xC)) = (s32) (*((s32 *) (((char *) __repair_hoisted) + 0xC)));
        var_a3 += *((*((s16 **) (((char *) arg2) + 0xC))) + ((*((s16 *) (((char *) var_a2) + 0))) * 0x10));
      }
      var_t0 = *((s16 *) (((char *) var_a2) + 2));
      var_v1 += 1;
      var_a2 += 2;
      var_t1 = ((unsigned char *) var_t1) + 0x10;
    }
    while (var_t0 != (-1));
  }
  *((s16 *) (((char *) arg0) + 0x28)) = var_v1;
  return var_a3;
}
