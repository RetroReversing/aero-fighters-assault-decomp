s32 func_80231A24();
extern char D_80254314[];
extern char D_80254324[];
extern char D_80254334[];
extern char D_80254344[];
extern s16 D_80276130;
void func_8022C354(void)
{
  char *var_s1;
  s16 temp_v0;
  s32 var_s0;
 var_s1 = &D_80276130; do { var_s0 = 0; do { func_80231A24("Controller #%d Type: ", var_s0); temp_v0 = *((s16 *) var_s1); do { switch (temp_v0) { case 1: func_80231A24(D_80254314);
            break;

          case 2:
            func_80231A24(D_80254324);
            break;

          case 3:
            func_80231A24(D_80254334);
            break;

          default:
            func_80231A24(D_80254344);
            break;

        }

      }
      while (0);
      if (1)
      {
        var_s0 += 1; var_s1 += 2;
      }
    }
    while (var_s0 != 4);
  }
  while (0);
}
