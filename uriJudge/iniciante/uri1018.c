#include <stdio.h>

int conta(int a, int b);

int main(){
	int n, v, i;
	int ced[] = {100, 50, 20, 10, 5, 2, 1};
	scanf("%d", &n);
	printf("%d\n", n);
	for(i = 0; i < 7; i++){
		n = conta(n, ced[i]);
	}
}

int conta(int a, int b){
	int aux = a / b;
	printf("%d nota(s) de R$ %d,00\n", aux, b);
	return a % b;
}