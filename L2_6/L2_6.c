#include <stdio.h>
#include <math.h>

double s1(){
  double x=1, y=1, i, soma=0, x_y;
  for (i=0;i<50;i++){
    x_y = x/y;
    soma+=x_y;
    x+=2;
    y++;
    }
  return soma;
}

double s2(){
  double x=2, y=50, i, soma=0, x_q, x_y;
  for(i=1;i<=50;i++){
    x_q = pow(x, i);
    x_y = x_q/y;
    soma += x_y;
    y--;
  }
  return soma;
}

float s3(){
  float x=1, y=1, i, soma=0, x_y;
  for(i=2;i<=11;i++){

    x_y = x/y;
    soma += x_y;
    x++;
    y=pow(i,2);
  }
  return soma;
}

int main(){
int s;
double result;
scanf("%d", &s);
switch (s){
  case 1:
    result = s1();
    break;
  case 2:
    result = s2();
    break;
  case 3:
    result = s3();
    break;
    }

printf("%.6f", result);

return 0;
}
