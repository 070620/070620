````C
/* s_gets.c -- 使用指针表示法代替数组表示法来减少变量 */
#include <stdio.h>
char * s_gets(char * st, int n)
{
  char * ret_val;
  
  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    while (*st != '\n' && *st != '\0')
      st++;
    if (*st == '\n')
      *st = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}
````
