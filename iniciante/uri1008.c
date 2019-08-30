#include<stdio.h>

int main(){
    char nome[20];
    double salario, vendas;

    scanf("%s", &nome);
    getchar();
    scanf("%lf%lf", &salario, &vendas);

    printf("TOTAL = R$ %.2f\n", salario + (vendas * 0.15));

    return 0;
}