#include<stdio.h>

int qualMaior(int, int);

int main(){
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("%d eh o maior\n", qualMaior(a, qualMaior(b, c)));
}

int qualMaior(int a, int b){
    return (a + b + (a > b ? a - b : b - a))/2;
}