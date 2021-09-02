#include <stdio.h>

typedef struct Cartela{
  int id;
  int tam;
  int num[100][100];
}tCartela;

tCartela LeCartela();

void ImprimeCartela(tCartela cartela);

int main(){
  tCartela cartela;
  cartela = LeCartela();
  ImprimeCartela(cartela);
  return 0;
}

tCartela LeCartela(){
  tCartela cartela;
  int i=0, j=0;
  scanf("%d %d", &cartela.id, &cartela.tam);
  for(i=0;i<cartela.tam;i++){
    for(j=0;j<cartela.tam;j++){
      scanf("%d", &cartela.num[j][i]);
    }
  }
  return cartela;
}

void ImprimeCartela(tCartela cartela){
  int i=0, j=0;
  printf("ID:%d\n", cartela.id);
  for(i=0;i<cartela.tam;i++){
    for(j=0;j<cartela.tam;j++){
      printf("%.3d", cartela.num[i][j]);
      if (j!=cartela.tam-1){
        printf("|");
      }
    }
    printf("\n");
  }
}
