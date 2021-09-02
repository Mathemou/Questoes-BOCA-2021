#include <stdio.h>
int ehMenor(int x, int y){
  if (x<y){
    return x;
  } else if (y<x){
    return y;
  } else if (x==y){
    return x;
  }
  return 404;
}
int ehMaior(int x, int y){
  if (x>y){
    return x;
  } else if (y>x){
    return y;
  } else if (x==y){
    return x;
  }
  return 404;
}
void pontosDoRet(int x1, int y1, int x2, int y2){
  printf("(%d,", ehMenor(x1, x2));
  printf("%d)", ehMaior(y1, y2));
  printf("(%d,", ehMenor(x1, x2));
  printf("%d)", ehMenor(y1, y2));
  printf("(%d,", ehMaior(x1, x2));
  printf("%d)", ehMenor(y1, y2));
  printf("(%d,", ehMaior(x1, x2));
  printf("%d)\n", ehMaior(y1, y2));
}

int main(void) {
  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  pontosDoRet(x1, y1, x2, y2);
  return 0;
}
