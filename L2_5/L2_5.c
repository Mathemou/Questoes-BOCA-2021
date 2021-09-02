#include <stdio.h>
#include <math.h>
int main(){
int n, k=0;
float pi, aux_pi;
scanf("%d", &n);

while (k<n){
  k++;
  aux_pi += (float) 6/(k*k);
}
pi = sqrt(aux_pi);
printf("%.6f", pi);
return 0;
}
