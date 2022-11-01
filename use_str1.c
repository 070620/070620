````C
/* s_gets.c -- 本章定义的s_gets()函数，可以用strchr()函数代替其中的while循环来查找换行符。请改写该函数。 */
#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n)
{
  char * ret_val;
  char * find;
  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchar(st, '\n'); //查找换行符
    if (find)                 //如果地址不为空
      *find = '\0';           // 在此处放置一个空字符
    else
       while (getchar() != '\n')
          continue;
  }
  return ret_val;
}
````
