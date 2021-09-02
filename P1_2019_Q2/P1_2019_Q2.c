#include <stdio.h>
void soma(int n1, int n2){
  printf("SOMA:%d", n1+n2);
  return;
}
void sub(int n1, int n2){
  printf("SUB:%d", n1-n2);
  return;
}
void multi(int n1, int n2){
  printf("MULT:%d", n1*n2);
  return;
}
void div(int n1, int n2){
  printf("DIV:%d", n1/n2);
  if(n1%n2!=0){
    printf(", RESTO:%d", n1%n2);
  }
  return;
}
int main(void) {
  int n1, n2;
  char op;
  scanf("%d %c %d", &n1, &op, &n2);
  switch (op)
  {
   case '+':
     soma(n1, n2);
   break;

   case '-':
     sub(n1,n2);
   break;

   case '*':
     multi(n1,n2);
   break;

   case '/':
     div(n1,n2);
   break;

  }
  return 0;
}
