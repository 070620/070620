````C
/* 设计一个函数，接受一个指向字符串的指针，返回指向该字符串第1个空格字符的指针，或如果未找到空格字符，则返回空指针。*/
#include <stdio.h>
char * gets(char * st)
{
  while (*st != '\0' && *st != ' ')
    st++;
  if (*st == '\0')
    return NULL;
  else
    return st;
}
````
