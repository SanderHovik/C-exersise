#include <stdio.h>
#include <stdlib.h>
#include <Test2.c>
int main()
{
  printf("Mit navn er %s\n", name);

  name[1]='n';
  name[2]='a';
  printf("Mit navn er %s\n", name);
    return 0;
}
