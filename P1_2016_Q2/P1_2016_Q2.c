#include <stdio.h>

void tahNaReta(int a,int b,int x1,int y1,int x2,int y2, int x3,int y3){
  int cont=0;
  //Verifica e conta
  if((a*x1)+b==y1){
    cont++;
  }
  if((a*x2)+b==y2){
    cont++;
  }
  if((a*x3)+b==y3){
    cont++;
  }
  //Printa de acordo ocm o resultado
  switch (cont){
    case 1:
      printf("Um");
      return;
    case 2:
      printf("Dois");
      return;
    case 3:
      printf("Todos");
      return;
    case 0:
      printf("Nenhum");
      return;
  }
}

int main(void) {
  int a, b, x1, y1, x2, y2, x3, y3;
  scanf("%d %d %d %d %d %d %d %d", &a, &b, &x1, &y1, &x2, &y2, &x3, &y3);
  tahNaReta(a, b, x1, y1, x2, y2, x3, y3);
  return 0;
}
