#include<stdio.h>

int main(){
   int distancia;
   scanf("%d", &distancia);
   printf("%.0f minutos\n", (distancia / 30.0) * 60.0);
}