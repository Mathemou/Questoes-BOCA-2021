#include <stdio.h>
#include <math.h>

int main(){
float r, p, r_2,pi = 3.141592;
scanf("%f", &r);

p = pi * (r*r);

r_2 = sqrt((p/2)/pi);

printf("%.2f %.2f", p, r_2);

}
