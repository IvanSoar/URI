#include<stdio.h>
#include<math.h>

int main(){
   double a, b, c;
   double raiz1, raiz2;
   double delta;
   
   scanf("%lf%lf%lf", &a, &b, &c);

   delta = b * b - 4 * a * c;

   if(a == 0 || delta < 0){
       printf("Impossivel calcular\n");
   } else {
       raiz1 = (-b + sqrt(delta)) / (2 * a);
       raiz2 = (-b - sqrt(delta)) / (2 * a);

       printf("R1 = %.5f\n", raiz1);
       printf("R2 = %.5f\n", raiz2);
   }
}
