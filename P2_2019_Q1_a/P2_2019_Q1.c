#include <stdio.h>

int main(void) {
  int v1, v2, v3, ni, i, item, soma=0;
  scanf("%d %d %d", &v1, &v2, &v3);
  scanf("%d", &ni);
  for(i=0;i<ni;i++){
    scanf("%d", &item);
    if (item==1){
      soma += v1;
    } else if (item==2){
      soma += v2;
    } else if (item==3){
      soma += v3;
    }
  }
printf("CUSTO:%d\n", soma);
  return 0;
}
