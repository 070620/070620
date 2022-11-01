```` C
/* s_len.c -- strlen()函数接受一个指向字符串的指针作为参数，并返回该字符串的长度。请编写一个这样的函数。 */
#include <stdio.h>
int s_len(const char * st)
{
  int len = 0;
  while (*st++)
    len++;
  return len;
}
````
