#include<stdio.h>

int main(){
    int anos, meses, dias;
    scanf("%d", &dias);

    anos = dias / 365;
    dias -= anos * 365;
    meses = dias / 30;
    dias -= meses * 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
}