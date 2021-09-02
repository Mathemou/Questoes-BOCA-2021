#include <stdio.h>
#include <stdlib.h>

int  verDigIgual(char n1, char n2, char n3, char n4, char n5, char n6, char n7, char n8, char n9, char n10, char n11){
  if(n1==n2 && n1==n3 && n1==n4 && n1==n5 && n1==n6 &&n1==n7 && n1==n8 && n1==n9 && n1==n10 && n1==n11){
    return 1;
  } else {
    return 0;
  }
}

int calcVer10(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10){
  int ver10=0, num=0;
  ver10 = n1*10 + n2*9 + n3*8 + n4*7 + n5*6 + n6*5 + n7*4 + n8*3 + n9*2;
  if (ver10%11<2){
    num = 0;
  } else {
    num = 11 - (ver10%11);
  }
  if (num==n10){
    return 1;
  } else {
    return 0;
  }
}
int realidade_num10(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9){
  int ver10=0, num=0;
  ver10 = n1*10 + n2*9 + n3*8 + n4*7 + n5*6 + n6*5 + n7*4 + n8*3 + n9*2;
  if (ver10%11<2){
    num = 0;
  } else {
    num = 11 - (ver10%11);
  }
  return num;
}
int calcVer11(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n11){
  int ver11=0, num=0, real_num10=0;
  real_num10 = realidade_num10(n1, n2, n3, n4, n5, n6, n7, n8, n9);

  ver11 = n1*11 + n2*10 + n3*9 + n4*8 + n5*7 + n6*6 + n7*5 + n8*4 + n9*3 + real_num10*2;
  if (ver11%11<2){
    num = 0;
  } else {
    num = 11 - (ver11%11);
  }
  if (num==n11){
    return 1;
  } else {
    return 0;
  }
}


int main(void) {
  char n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;

  scanf("%c%c%c.%c%c%c.%c%c%c-%c%c", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

  if (verDigIgual(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11)==1){
    printf("CPF invalido: digitos iguais!");
  } else {
  int n1n = n1 - '0';
  int n2n = n2 - '0';
  int n3n = n3 - '0';
  int n4n = n4 - '0';
  int n5n = n5 - '0';
  int n6n = n6 - '0';
  int n7n = n7 - '0';
  int n8n = n8 - '0';
  int n9n = n9 - '0';
  int n10n = n10 - '0';
  int n11n = n11 - '0';
  if (calcVer10(n1n, n2n, n3n, n4n, n5n, n6n, n7n, n8n, n9n, n10n)==1&&calcVer11(n1n, n2n, n3n, n4n, n5n, n6n, n7n, n8n, n9n, n11n)==1){
    printf("CPF valido!");
  } else if (calcVer10(n1n, n2n, n3n, n4n, n5n, n6n, n7n, n8n, n9n, n10n)==0&&calcVer11(n1n, n2n, n3n, n4n, n5n, n6n, n7n, n8n, n9n, n11n)==0){
    printf("CPF invalido: dois digitos!");
  } else if (calcVer10(n1n, n2n, n3n, n4n, n5n, n6n, n7n, n8n, n9n, n10n)==1&&calcVer11(n1n, n2n, n3n, n4n, n5n, n6n, n7n, n8n, n9n, n11n)==0){
    printf("CPF invalido: segundo digito!");
  } else if (calcVer10(n1n, n2n, n3n, n4n, n5n, n6n, n7n, n8n, n9n, n10n)==0&&calcVer11(n1n, n2n, n3n, n4n, n5n, n6n, n7n, n8n, n9n, n11n)==1){
    printf("CPF invalido: primeiro digito!");
  }
  }
  return 0;
}
