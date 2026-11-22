s32 func_802011D0();
extern char D_80252030[];
extern char D_80256DC0[];
extern char D_80256DD0[];
extern u8 D_80256DE0[];
void func_802021EC(void)
{
  int __repair_constant = 0xFF;
  s32 *var_a0;
  s32 *__base_D_80256DE0;
  s32 *var_v1;
  func_802011D0(D_80252030);
  var_a0 = D_80256DC0;
  var_v1 = (int) D_80256DD0;
  __repair_rows:
  {
    *((u8 *) (((char *) var_a0) + 1)) = 0xFF;
    *((s8 *) (((char *) var_v1) + (-3))) = __repair_constant;
    *((u8 *) (((char *) var_a0) + 2)) = __repair_constant;
    *((s8 *) (((char *) var_v1) + (-2))) = __repair_constant;
    *((u8 *) (((char *) var_a0) + 3)) = __repair_constant;
    *((s8 *) (((char *) var_v1) + (-1))) = __repair_constant;
 if (0) { }
    var_v1++;
    *((s8 *) (((char *) var_a0) + (-4))) = __repair_constant;
    var_a0 += 4;
    *((s8 *) (((char *) var_v1) + (-4))) = __repair_constant;
  }

  __base_D_80256DE0 = D_80256DE0;
  if (var_v1 != __base_D_80256DE0)
  {
 do { } while (0 != 0U);
    goto __repair_rows;
  }
  *__base_D_80256DE0 = 0;
}
