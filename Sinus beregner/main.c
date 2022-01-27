#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//*****************************************
//I dette program er det muligt at rengne sinus
//og 2 gradsligninger
//Programemt indeholder float a, b, c, d, x1, x2, tX, tY, x
//og int i

int s;
float a,b,c,d;
float x1,x2;
float tX,tY;
int i;
float a,b,c,x;

long factorial(int x){
   float t=x;
   for (i=1;i<x;i++){
      t=t*(x-i);
   }
   return t;
}

float power(float x, int n){
   float t=x;
   if (n==0){
      t=1;
   }
   else if(n<0){
      t=0;
   }
   else if(n==1){
   }
   else{
      for (i=1;i<n;i++){
        t=x*t;
      }
   }
   return t;
}
float a,b,c,d;
float x1,x2;
float tX,tY;
int i;

void calc_diskriminant(){
   d = pow(b,2)-4*a*c;
}

void calc_roedder(){
   x1 = (-b+sqrt(d))/(2*a);
   x2 = (-b-sqrt(d))/(2*a);
}

void calc_topX(){
   if (b!=0)
      tX = (-b/(2*a));
   else tX=0;
}

void calc_topY(){
   if (d!=0)
      tY = (-d/(4*a));
   else tY=0;
}



int main()
{
   while(1){
    printf("Tast 1 for 2 grads beregner \n");
    printf("Tast 2 for sinus beregner \n");
    scanf("%i",&s);

    switch(s){
    case 1:
        printf("Indtast a: ");
      scanf("%f",&a);
      if (a==0)
         return;
      printf("Indtast b: ");
      scanf("%f",&b);
      printf("Indtast c: ");
      scanf("%f",&c);

      calc_diskriminant();
      if (d>=0)
         calc_roedder();
      calc_topX();
      calc_topY();

      printf("Diskriminant: %10.4f \n",d);   //bredde (minimum!) af hele skidtet er 10. præcision efter komma er 4

      if (d>0)
         printf("Rod_1=%1.2f  Rod_2=%1.2f \n",x1,x2);
      else if(d==0)
         printf("Rod=%1.2f \n",x1);
      else if (d<0)
         printf("d < 0 derfor ingen roedder \n");

      printf("Toppunkt: %1.2f, %1.2f \n",tX, tY);
      printf("Skaering med y-aksen: %1.2f \n\n", c);
      break;


      case 2:
        while(2){

      printf("enter number\n");
      printf("1 for x^n\n");
      printf("2 for factorial\n");
      printf("3 for sinus\n");
      printf("9 for exit\n");
      scanf("%i", &i);
      switch (i){             //https://www.tutorialspoint.com/cprogramming/switch_statement_in_c.htm
         case 1:
         {
            printf("Enter x\n");
            scanf("%f",&a);
            printf("Enter n\n");
            scanf("%f",&b);
            a=power(a,b);
            printf("res = %1.2f\n", a );
            break;
         }
         case 2:
         {
            printf("Enter x\n");
            scanf("%f",&a);
            a=factorial(a);
            printf("res = %1.2f\n", a );
            break;
         }
         case 3:
         {
            printf("Enter x\n");
            scanf("%f",&x);
            c=x*0.0174532925;
            a=(c-pow(c,3)/factorial(3)+pow(c,5)/factorial(5)-pow(c,7)/factorial(7)+pow(c,9)/factorial(9)-pow(c,11)/factorial(11)+pow(c,13)/factorial(13));
            printf("res = %10.10f\n", a );
            break;
         }

      }
    }
   }
return 0;
}
}

