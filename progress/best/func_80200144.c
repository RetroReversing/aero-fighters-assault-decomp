s32 func_80228DE0();
s32 func_80231C9C();
extern char D_80256D70[];
extern char D_80251B70[];
extern char D_80251B84[];
void func_80200144(unsigned short arg0, s32 arg1)
{
  u16 var_a3;
  var_a3 = arg0 & 0xFFFF;
  goto dummy_label_766358;
  dummy_label_766358:
  ;

  ;
  ;
  if (var_a3 > (var_a3 * 0))
  {
    arg0 = var_a3;
    func_80231C9C(D_80251B70, D_80251B84, 0x42);
    var_a3 = (s16) ((u16) arg0);
  }
  func_80228DE0((var_a3 * 0x50) + D_80256D70, arg1);
}

