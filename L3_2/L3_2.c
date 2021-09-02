#include <stdio.h>
float Soma(float num1, float num2){
  return num1 + num2;
};
float Subtracao(float num1, float num2){
  return num1 - num2;
};
float Divisao(float num1, float num2){
  return num1/num2;
};
float Multiplicacao(float num1, float num2){
  return num1*num2;
};

int main(void) {
  float a, b, c, result=0;
  char op;

  scanf("%f %f %c", &a, &b, &op);

  if (op=='+'){
    result = Soma(a, b);
  } else if (op=='-'){
    result = Subtracao(a, b);
  } else if (op=='/'){
    result = Divisao(a, b);
  } else if (op=='*'){
    result = Multiplicacao(a, b);
  }



  while(scanf(" %f", &c)==1){
  scanf(" %c", &op);
  if (op=='+'){
    result = Soma(result, c);
  } else if (op=='-'){
    result = Subtracao(result, c);
  } else if (op=='/'){
    result = Divisao(result, c);
  } else if (op=='*'){
    result = Multiplicacao(result, c);
  }
  }

  printf("%.2f", result);
  return 0;
}
