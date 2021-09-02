#include <stdio.h>

int extraiCentena(int n){
  if (n<100){
    return 10;
  }
  if (n>999){
  n = n%1000;
  }
  n = n/100;
  return n;
}

void maiorCentena(int num1, int num2, int num3){
  int cnum1, cnum2, cnum3;
  num1 = extraiCentena(num1);
  num2 = extraiCentena(num2);
  num3 = extraiCentena(num3);
  if (num1==10&&num2==10&&num3==10){
    printf("Nenhum");
  } else if (num1 <= num2 && num1 <= num3){
    printf("N1");
  } else if (num2 <= num1 && num2 <= num3){
    printf("N2");
  } else if (num3 <= num1 && num3 <= num2){
    printf("N3");
  }
}

int main(void) {
  int num1, num2, num3;
  scanf("%d %d %d", &num1, &num2, &num3);
  maiorCentena(num1, num2, num3);
  return 0;
}
