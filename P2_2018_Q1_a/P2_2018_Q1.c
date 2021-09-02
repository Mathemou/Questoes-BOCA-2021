#include <stdio.h>

int main(void) {
  int n, i, num, soma=0;
  scanf("%d", &n);
  for (i=0;i<n;i++){
    scanf("%d", &num);
    if (num%2==0&&(i==0||i%2==0)){
      soma+=num;
      //printf("par %d %d\n", num, i);
    } else if (num%2!=0&&i%2!=0){
      soma+=num;
      //printf("impar %d %d\n", num, i);
    }
  }
  printf("SOMA:%d", soma);
  return 0;
}
