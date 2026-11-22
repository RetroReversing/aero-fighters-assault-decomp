void *func_802C676C(s32);
s32 func_80320BB8(void *);
extern s32 D_80340740;
void *func_8029FC40(void *arg0)
{
  void *temp_v0;
  void *var_a0;
 goto dummy_label_148736; dummy_label_148736: ;
  var_a0 = arg0;
  if ((var_a0 != NULL) || ((temp_v0 = func_802C676C(0x310), var_a0 = temp_v0, temp_v0 != NULL)))
  {
    arg0 = var_a0;
    func_80320BB8(var_a0);
    var_a0 = arg0;
    *((s32 **) (((char *) var_a0) + 0x7C)) = &D_80340740;
  }
  return var_a0;
}
