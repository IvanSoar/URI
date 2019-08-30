#include<stdio.h>
#define PI 3.14159

int main(){
   double raio;
   scanf("%lf", &raio);
   printf("VOLUME = %.3f\n", (4 / 3.0) * PI * (raio * raio * raio));
}