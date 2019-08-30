#include<stdio.h>

int main(){
   double valor;
   int i;
   int quantidade[12];
   double dinheiro[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

   scanf("%lf", &valor);

   for(i = 0; i < 12; i++){
       if(i < 6){
           quantidade[i] = (int)(valor / dinheiro[i]);
           valor -= quantidade[i] * dinheiro[i];
       } else {
           quantidade[i] = (int)(valor / dinheiro[i]);
           valor -= quantidade[i] * dinheiro[i];
       }
   }   
   
   for(i = 0; i < 12; i++){
       if(i == 0) printf("NOTAS: \n");
       if(i < 6) printf("%d nota(s) de R$ %.0f,00 \n", quantidade[i], dinheiro[i]);
       if(i == 6) printf("MOEDAS: \n");
       if(i > 5) printf("%d moeda(s) de R$ %.2f \n", quantidade[i], dinheiro[i]);
   }
}