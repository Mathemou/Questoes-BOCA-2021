#include <stdio.h>

int EhPar (int x){
  if (x%2==0){
    return 1;
  } else {
    return 0;
  }
}

void PrintaPares (int N){
  int num=2, i;
  for(i=0;i<N;i++){
    printf("%d ", num);
    num+=2;
  }
}

void PrintaImpares (int N){
  int num=1, i;
  for(i=0;i<N;i++){
    printf("%d ", num);
    num+=2;
  }
}

int main(void) {
  int n, m, i, num=1;
  scanf("%d %d", &n, &m);

  if (n==0){
    PrintaPares(m);
  } if (n==1){
    PrintaImpares(m);
  }
  return 0;
}
