#include <stdio.h>

int maiorAB(int a, int b);

int main(){
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	printf("%d eh o maior\n", maiorAB(maiorAB(a, b),c));
}

int maiorAB(int a, int b){
	int abs = a > b ? a - b : b - a;
	return (a + b + abs) / 2;
}