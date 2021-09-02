#include <stdio.h>

int main(void) {
  int x, n, i=0, ver=0, prim;
  scanf("%d %d", &x, &n);
  int num[n];
  for(i=0;i<n;i++){
    scanf(" %d", &num[i]);
  }
  for(i=0;i<n;i++){
    //printf("%d\n", num[i]);
    if (num[i]==x&&ver==0){
      prim = i;
      ver=1;
    }
  }
  if (ver){
    printf("RESP:%d", prim);
  } else {
    printf("RESP:%d", i);
  }
  return 0;
}
