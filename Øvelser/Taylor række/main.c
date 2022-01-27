#include <stdio.h>
#include <stdlib.h>


float Taylor_exponential(int n, float x)
{
   float exp_sum=1;
    for (int i=n-1;i>0;--i){
        exp_sum=1+x*exp_sum/i;
    }
    return exp_sum;
}

    int main(void)
{
    int n;
    float x;
    printf("n værdi: \n");
    scanf("%d",&n);

    printf("x værdi: \n");
    scanf("%f",&x);

    if (n>0 && x>0){
        printf("værdi af n = %d og værdi af x = %\n",n,x);
        printf("%f",Taylor_exponential(n,x));
    }


}



