#include <stdio.h>
#define C 12

int main(){
	int t, v;
	float l;
	
	scanf("%d", &t);
	scanf("%d", &v);
	
	l = (v*t)/(float)C;
	
	printf("%.3f\n", l);
}