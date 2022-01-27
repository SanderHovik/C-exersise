#include <stdio.h>
#include <stdlib.h>

int test[5][5]={{1,2,3,4,5},{5,4,3,2,1}};

int main()
{
    printf("%d\n",test[0]);
    printf("%d\n",test[1]);
    scanf("%d",&test[3]);
    scanf("%d",&test[4]);
    printf("%d\n",test[3]);
    printf("%d\n",test[4]);

    return 0;
}
