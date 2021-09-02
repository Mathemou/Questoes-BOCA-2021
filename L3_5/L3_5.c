#include <stdio.h>
#include <math.h>
int Propriedade(int num){
  int p, u;
  p=num%100;
  u=num/100;
  if(pow((p+u), 2)==num){
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int n, m, i;
  scanf("%d %d", &n, &m);
  for(i=n+1; i<m; i++){
    if(Propriedade(i)==1){
      printf("%d\n", i);
    }
  }
  return 0;
}
