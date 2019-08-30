#include<stdio.h>

int main(){
   int valor, i;
   int quantidade[7];
   int cedula[] = {100, 50, 20, 10, 5, 2, 1};

   scanf("%d", &valor);
   printf("%d\n", valor);

   for(i = 0; i < 7; i++){
       quantidade[i] = valor / cedula[i];
       valor -= quantidade[i] * cedula[i];
   }
   
   for(i = 0; i < 7; i++){
       printf("%d nota(s) de R$ %d,00\n", quantidade[i], cedula[i]);
   }

}