#include <stdio.h>

int main(void) {
  int n, i=0, verf=1;
  scanf("%d", &n);
  int num[n];
  for(i=0;i<n;i++){
    scanf(" %d", &num[i]);
  }
  if (n>1){
    for(i=0;i<n-2;i++){
      if ((num[i]-num[i+1])!=(num[i+1]-num[i+2])){
        verf=0;
      }
    }
  } else if (n==1){
    verf=0;
  }
  if(verf==1){
    printf("RESP:%d", (num[i+1]-num[i]));
  } else {
    printf("NAO");
  }
  return 0;
}
