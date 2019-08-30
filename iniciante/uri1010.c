#include<stdio.h>

int main(){
    double valorUnitario;
    int codigo, quantidade, i;

    double total = 0;
    for(i = 0; i < 2; i++){
        scanf("%d%d%lf", &codigo, &quantidade, &valorUnitario);
        total += valorUnitario * quantidade;
    }

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}