#include <stdio.h>
float Soma(float num1, float num2){
  return num1 + num2;
}
float Subtracao(float num1, float num2){
  return num1 - num2;
}
float Divisao(float num1, float num2){
  return num1/num2;
}
float Multiplicacao(float num1, float num2){
  return num1*num2;
}
float FazOperacao(float num1, float num2, char op){
  if (op=='+'){
    return Soma(num1, num2);
  } else if (op=='-'){
    return Subtracao(num1, num2);
  } else if (op=='/'){
    return Divisao(num1, num2);
  } else if (op=='*'){
    return Multiplicacao(num1, num2);
  }
  return 404;
}
float chooseOp(float num1) {
  float num2;
  char op;
  while ( scanf(" %f", &num2) == 1 ) {
    scanf(" %c", &op);
    num1 = FazOperacao(num1, num2, op);
  }
  printf("%.2f", num1);
  return num1;
}
int main(void) {
  char c, op;
  float num1, num2, maior=0, ver=0;
  while(scanf("%c", &c)==1){
    if (c=='('){
      scanf("%f ", &num1);
      num1 = chooseOp(num1);
      if (num1>maior){
        maior = num1;
      }
    }
    if (ver>0){
      if (c=='\n'){
        break;
    }
    }
    if (c!='('&&c!=')'){
    printf("%c", c);
    }
    if (c=='.'){
      printf(" MAIOR:%.2f", maior);
    }


    ver++;
  }


  return 0;
}
