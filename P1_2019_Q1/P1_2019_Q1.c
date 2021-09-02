#include <stdio.h>
void cdt(int n1, int n2, int n3){
  if (n1<n2&&n2<n3){
    printf("CRESCENTE");
    return;
  } else if (n1>n2&&n2>n3){
    printf("DECRESCENTE");
    return;
  } else {
    printf("TUDO DOIDO");
    return;
  }
}
int main(void) {
  int n1, n2, n3;
  scanf("%d %d %d", &n1, &n2, &n3);
  cdt(n1, n2, n3);
  return 0;
}
