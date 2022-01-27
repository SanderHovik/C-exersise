#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

int main(){
   while(1){                  //forever
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
   }
}
