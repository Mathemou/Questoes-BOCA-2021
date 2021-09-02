#include <stdio.h>


int main(void) {
  int n, i=0, verfc=0, verfd=0;
  scanf("%d ", &n);
  int nota[n];
  for (i=0;i<n;i++){
    scanf("%d ", &nota[i]);
  }
  for(i=0;i<n-1;i++){
    if (nota[i]<nota[i+1]){
      verfc=1;
    } else if (nota[i]>nota[i+1]){
      verfd=1;
    }
  }

  if (verfc==1&&verfd==0){
    printf("CRESCENTE");
  } else if (verfc==0&&verfd==1){
    printf("DECRESCENTE");
  } else if (verfc==1&&verfd==1){
    printf("DESORDENADO");
  } else if (verfc==0&&verfd==0){
    printf("CRESCENTE&DECRESCENTE");
  }
  return 0;
}
