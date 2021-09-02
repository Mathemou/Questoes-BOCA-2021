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

int main(void) {
  int result, n, m;
  scanf("%d %d", &n, &m);
  for(n+=1;n<m;n++){

  result = ehPrimo(n);

  if (result==1){
    printf("%d ", n);
  }
  }
  return 0;
}
