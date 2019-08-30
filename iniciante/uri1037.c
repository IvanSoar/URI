#include<stdio.h>

int main(){
    double numero;

    scanf("%lf", &numero);
    
    numero > 0.0 && numero <= 25.0 ? printf("Intervalo [0,25]\n") : 
    numero > 25.0 && numero <= 50.0 ? printf("Intervalo (25,50]\n") : 
    numero > 50.0 && numero <= 75.0 ? printf("Intervalo (50,75]\n") : 
    numero > 75.0 && numero <= 100.0 ? printf("Intervalo (75,100]\n") : 

    printf("Fora de intervalo\n");
}