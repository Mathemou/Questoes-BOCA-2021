#include <stdio.h>
int somar(int x, int y){
  return x+y;
}
int subtrair(int x, int y){
  return x-y;
}
int multiplicar(int x, int y){
  return x*y;
}
int dividir(int x, int y){
  return x/y;
}
void aplicaOperacao(int x, int y, char op){
  if (op=='+'){
    printf("RESP:%d", somar(x, y));
  } else if (op=='-'){
    printf("RESP:%d", subtrair(x, y));
  } else if (op=='*'){
    printf("RESP:%d", multiplicar(x, y));
  } else if (op=='/'){
    printf("RESP:%d", dividir(x, y));
  } else {
    printf("Invalido");
  }
}
int main(void) {
  int x, y;
  char op;
  scanf("%d %d %c", &x, &y, &op);
  aplicaOperacao(x, y, op);
  return 0;
}
