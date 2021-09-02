#include <stdio.h>
void maiorTroco(int t1, int t2){
  int vt1, vt2;
  vt1 = (t1%5)+(t1/5);
  vt2 = (t2%5)+(t2/5);
  if (vt1>vt2){
    printf("QTD troco 1 eh maior!");
  } else if (vt2>vt1){
    printf("QTD troco 2 eh maior!");
  } else if (vt1==vt2){
    printf("Iguais!");
  }
}
int main(void) {
  int troc1, troc2;
  scanf("%d %d", &troc1, &troc2);
  maiorTroco(troc1, troc2);
  return 0;
}
