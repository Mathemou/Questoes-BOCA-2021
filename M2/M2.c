#include <stdio.h>

int main(){
float x;
scanf("%f", &x);
printf("INTEIRO:%.0f,REAL:%.2f", floor(x), x-floor(x));
}
