#include <stdio.h>

int main(){
float x_1, y_1, x_2, y_2, p;
scanf("%f", &x_1);
scanf("%f", &y_1);
scanf("%f", &x_2);
scanf("%f", &y_2);
p = ((x_2 - x_1)*2) + ((y_2 - y_1)*2);
printf("%.2f", p);
}
