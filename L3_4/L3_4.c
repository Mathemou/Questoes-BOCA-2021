#include <stdio.h>

int ehPrimo(int num){
  int num_test;

  if (num==2){
    return 1;
  }

  for (num_test=2; num_test<num;num_test++){
    if(num%num_test==0){
      return 0;
    }
  }

  return 1;

}

void imprimeMultiplos(int num, int max){
  int primo = num, ver=0;
  for(num+=1;num<max;num++){
    if(num%primo==0){
      printf("%d ", num);
      ver++;
    }
  }
  if(ver==0){
    printf("*");
  }
  printf("\n");
}

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  for(n+=1;n<m;n++){

  if (ehPrimo(n)==1){
    printf("%d\n", n);
    imprimeMultiplos(n, m);
  }
  }
  return 0;
}
