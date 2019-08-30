#include <stdio.h>

int main(){
	int t, s, m, h;
	
	scanf("%d", &t);
	
	s = t % 60;
	m = t % 3600 / 60;
	h = t / 3600;
	
	printf("%d:%d:%d\n", h, m, s);	
}