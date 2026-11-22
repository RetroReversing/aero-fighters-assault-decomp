extern void *D_80250910;
void func_80237828(s32 *arg0)
{
  void *__repair_cached_pointer = D_80250910;
  *((s32 **) (((char *) D_80250910) + 0x2C)) = arg0;
  goto dummy_label_983362;
  dummy_label_983362:
  ;

  ;
  *arg0 = *((s32 **) (((char *) __repair_cached_pointer) - ((unsigned char) -0x2C)));
}

