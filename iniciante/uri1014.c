#include<stdio.h>

int main(){
    int km;
    double valor;
    scanf("%d%lf", &km, &valor);
    printf("%.3f km/l\n", km / valor);
}