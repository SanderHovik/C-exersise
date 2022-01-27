#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a;
int b;
int c;
int punkt1;
int punkt2;

int main()
{
 printf("Din a værdi \n" );
 scanf("%i",&a);

 printf("Din b værdi \n" );
 scanf("%i",&b);

 printf("Din c værdi \n" );
 scanf("%i",&c);
 int d;
 d=((b*b)-(4*a)*c);


 if (d >= 0){
    punkt1=(-(b)+(sqrt((b*b)-((4*a)*c))))/(2*a);
    punkt2=(-(b)-(sqrt((b*b)-((4*a)*c))))/(2*a);
    if ( punkt1 == punkt2){
        printf("Et skæringspunkt og det er: %i \n",punkt1);
    }
    else
    {
      printf("Der er 2 skæringspunkter \n");
      printf("punkt1 er: %i \n",punkt1);
      printf("punkt2 er: %i \n",punkt2);
    }
 }
 else{
    printf("\n");
    printf("Der findes ikke et skæringspunkt");
 }
}
