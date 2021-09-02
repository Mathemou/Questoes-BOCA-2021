#include <stdio.h>

int main(void) {
  int c, i=0, tamlis, j=0, k=0, l=0;
  scanf("%d", &c);
  for(i=0;i<c;i++){
    scanf("%d", &tamlis);
    int n[tamlis], m[tamlis];
    for(j=0;j<tamlis;j++){
      scanf("%d", &n[j]);
    }
    scanf("\n");
    for(j=0;j<tamlis;j++){
      m[j]=0;
      for(k=0;k<tamlis;k++){
        if (n[j]<n[k]){
          m[j]++;
        }
      }
    }
    for(l=0;l<tamlis;l++){
      printf("%d ", m[l]);
    }
    //printf("i:%d c:%d", i, c);
    printf("\n");
  }
  return 0;
}
