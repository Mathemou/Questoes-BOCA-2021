#include <stdio.h>

int main(){
  int i, den=1, primo=0, qtd=0, cont=0;

  scanf("%d", &qtd);

  for(i=2; i<=qtd; i++){

    while(den <= i){
      if(i%den==0){
        cont++;
      }
        den++;
    }
    den=1;

    if(cont == 2){
      printf("%d ", i);
      }
    cont = 0;
  }

  return 0;
}
