#include <stdio.h>

int main(){

	float sal, vend, tot;
	char nome[50];

	scanf("%s", nome);
	scanf("%f", &sal);
	scanf("%f", &vend);

	tot = sal + (vend * 0.15);

	printf("TOTAL = R$ %.2f\n", tot);
}