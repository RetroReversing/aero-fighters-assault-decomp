s32 func_80231A24();
extern char D_80253F70[];
extern char D_80253FA4[];
extern s32 D_80275E70;
extern char D_80275E80[];
void func_8022B1F4(void)
{
  int __repair_literal;
  s32 temp_v0;
  u32 var_a2;
  u32 var_s3;
  void *temp_s0;
  void *temp_s1;
  temp_v0 = D_80275E70;
  if (D_80275E70 > 0)
  {
    var_s3 = 0;
    do
    {
      var_a2 = 0;
      if (temp_v0 > 0)
      {
        for (;;)
        {
          __repair_literal = 8;
          if (1)
          {
            if (((var_s3 != var_a2) && ((temp_s1 = D_80275E80 + (var_s3 * __repair_literal), temp_s0 = D_80275E80 + (var_a2 * 8), (((u32) (*((u32 *) (((char *) temp_s0) + 0)))) < ((u32) (*((u32 *) (((char *) temp_s1) + 4))))) != 0))) && (((u32) (*((u32 *) (((char *) temp_s1) + 0)))) < ((u32) (*((u32 *) (((char *) temp_s0) + 4))))))
            {
              func_80231A24(D_80253F70, var_s3, var_a2);
              func_80231A24(D_80253FA4, *((u32 *) (((char *) temp_s1) + 0)), *((u32 *) (((char *) temp_s1) + 4)), *((u32 *) (((char *) temp_s0) + 0)), *((u32 *) (((char *) temp_s0) + 4)));
            }
            else
            {
              var_a2 += 1;
              if (((s32) var_a2) < D_80275E70)
              {
                continue;
              }
            }
          }
          break;
        }

      }
      var_s3 += 1;
    }
    while (((s32) var_s3) < D_80275E70);
  }
}

