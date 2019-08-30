#include <stdio.h>

int main(){

	int cod, hor;
	float val, sal;

	scanf("%d", &cod);
	scanf("%d", &hor);
	scanf("%f", &val);

	sal = (float)hor * val;

	printf("NUMBER = %d\n", cod);
	printf("SALARY = U$ %.2f\n", sal);
}